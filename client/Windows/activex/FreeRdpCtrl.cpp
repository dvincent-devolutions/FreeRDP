// FreeRdpCtrl.cpp : Implementation of CFreeRdpCtrl
#include "stdafx.h"
#include "FreeRdpCtrl.h"


extern "C" void ConnectionResultHandler(rdpContext* context, ConnectionResultEventArgs* e)
{
	CFreeRdpCtrl& ctrl = *(CFreeRdpCtrl*)(context->pUser);
	if (!e->result)
	{
		ctrl.ChangeToLoginCompleted();
	}
	else
	{
		ctrl.ChangeToDisconnected(0);
	}
}


// CFreeRdpCtrl

CFreeRdpCtrl::CFreeRdpCtrl()
{
	ZeroMemory(&mClientEntryPoints, sizeof(RDP_CLIENT_ENTRY_POINTS));
	mClientEntryPoints.Size = sizeof(RDP_CLIENT_ENTRY_POINTS);
	mClientEntryPoints.Version = RDP_CLIENT_INTERFACE_VERSION;

	RdpClientEntry(&mClientEntryPoints);

	mContext = freerdp_client_context_new(&mClientEntryPoints);
	if (mContext)
	{
		mSettings = mContext->settings;
		mSettings->SoftwareGdi = TRUE;

		mContext->pUser = this;
		PubSub_SubscribeConnectionResult(mContext->pubSub, (pConnectionResultEventHandler)ConnectionResultHandler);
	}

	mConnectionState = NOT_CONNECTED;

	mFreeRdpThread = NULL;
	mTerminationMonitoringThread = NULL;
	mDisableScrollbars = TRUE;
	mHasFocus = FALSE;
}


CFreeRdpCtrl::~CFreeRdpCtrl()
{
	if (mTerminationMonitoringThread != NULL)
	{
		WaitForSingleObject(mTerminationMonitoringThread, INFINITE);
		CloseHandle(mTerminationMonitoringThread);
	}
	freerdp_client_context_free(mContext);
}


HRESULT CFreeRdpCtrl::OnDrawAdvanced(ATL_DRAWINFO& di)
{
	RECT& rc = *(RECT*)di.prcBounds;

	// Set Clip region to the rectangle specified by di.prcBounds
	HRGN hRgnOld = NULL;
	if (GetClipRgn(di.hdcDraw, hRgnOld) != 1)
	{
		hRgnOld = NULL;
	}
	bool bSelectOldRgn = false;

	HRGN hRgnNew = CreateRectRgn(rc.left, rc.top, rc.right, rc.bottom);

	if (hRgnNew != NULL)
	{
		bSelectOldRgn = (SelectClipRgn(di.hdcDraw, hRgnNew) != ERROR);
	}

	HBRUSH blackBrunsh = CreateSolidBrush(COLORREF(0));
	SelectObject(di.hdcDraw, blackBrunsh);
	Rectangle(di.hdcDraw, rc.left, rc.top, rc.right, rc.bottom);

	if (bSelectOldRgn)
	{
		SelectClipRgn(di.hdcDraw, hRgnOld);
	}

	DeleteObject(blackBrunsh);
	DeleteObject(hRgnNew);

	return S_OK;
}


LRESULT CFreeRdpCtrl::OnSetFocus(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/)
{
	mHasFocus = TRUE;
	CWindow child = CWindow::GetWindow(GW_CHILD);
	if (child)
	{
		child.SetFocus();
	}

	return 0;
}


void CFreeRdpCtrl::SetupScrollBars(int clientWidth, int clientHeight)
{
	int desktopWidth = clientWidth;
	int desktopHeight = clientHeight;

	CWindow child = CWindow::GetWindow(GW_CHILD);
	if (child.m_hWnd != NULL && mDisableScrollbars == FALSE)
	{
		desktopWidth = mSettings->DesktopWidth;
		desktopHeight = mSettings->DesktopHeight;

		RECT rect;
		GetWindowRect(&rect);
		int width = rect.right - rect.left;
		int height = rect.bottom - rect.top;
		if (width >= desktopWidth && height >= desktopHeight)
		{
			clientWidth = width;
			clientHeight = height;
		}
	}

	SCROLLINFO si;
	si.cbSize = sizeof(si);
	si.fMask = SIF_RANGE | SIF_PAGE;
	si.nMin = 0;
	si.nMax = desktopWidth - 1;
	si.nPage = clientWidth;
	SetScrollInfo(SB_HORZ, &si, TRUE);
	si.fMask = SIF_POS;
	GetScrollInfo(SB_HORZ, &si);
	int adjustedHoriztontalPos = si.nPos;

	si.fMask = SIF_RANGE | SIF_PAGE;
	si.nMin = 0;
	si.nMax = desktopHeight - 1;
	si.nPage = clientHeight;
	SetScrollInfo(SB_VERT, &si, TRUE);
	si.fMask = SIF_POS;
	GetScrollInfo(SB_VERT, &si);
	int adjustedVerticalPos = si.nPos;

	if (child.m_hWnd != NULL && (adjustedHoriztontalPos != mHorizontalPos || adjustedVerticalPos != mVerticalPos))
	{
		mHorizontalPos = adjustedHoriztontalPos;
		mVerticalPos = adjustedVerticalPos;
		child.SetWindowPos(NULL, -mHorizontalPos, -mVerticalPos, 0, 0, SWP_NOACTIVATE | SWP_NOOWNERZORDER | SWP_NOSIZE | SWP_NOZORDER);
	}
}


LRESULT CFreeRdpCtrl::OnSize(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM lParam, BOOL& /*bHandled*/)
{
	int cx = LOWORD(lParam);
	int cy = HIWORD(lParam);
	SetupScrollBars(cx, cy);

	return 0;
}


LRESULT CFreeRdpCtrl::OnHScroll(UINT /*uMsg*/, WPARAM wParam, LPARAM /*lParam*/, BOOL& /*bHandled*/)
{
	int nSBCode = LOWORD(wParam);
	int nPos = HIWORD(wParam);
	CWindow child = CWindow::GetWindow(GW_CHILD);
	if (child.m_hWnd != NULL)
	{
		SCROLLINFO si;
		si.cbSize = sizeof(SCROLLINFO);
		si.fMask = SIF_PAGE | SIF_RANGE | SIF_POS;
		GetScrollInfo(SB_HORZ, &si);

		switch (nSBCode)
		{
		case SB_RIGHT:
			mHorizontalPos = si.nMax - si.nPage;
			break;

		case SB_LEFT:
			mHorizontalPos = 0;
			break;

		case SB_LINERIGHT:
			mHorizontalPos = si.nPos + GetSystemMetrics(SM_CXVSCROLL);
			break;

		case SB_LINELEFT:
			mHorizontalPos = si.nPos - GetSystemMetrics(SM_CXVSCROLL);
			break;

		case SB_PAGERIGHT:
			mHorizontalPos = si.nPos + si.nPage;
			break;

		case SB_PAGELEFT:
			mHorizontalPos = si.nPos - si.nPage;
			break;

		case SB_ENDSCROLL:
			return 0;

		case SB_THUMBPOSITION:
		case SB_THUMBTRACK:
			mHorizontalPos = nPos;
			break;
		}

		if (mHorizontalPos < 0)
		{
			mHorizontalPos = 0;
		}
		if (mHorizontalPos > si.nMax - (int)si.nPage)
		{
			mHorizontalPos = si.nMax - si.nPage;
		}
		child.SetWindowPos(NULL, -mHorizontalPos, -mVerticalPos, 0, 0, SWP_NOACTIVATE | SWP_NOOWNERZORDER | SWP_NOSIZE | SWP_NOZORDER);

		SetScrollPos(SB_HORZ, mHorizontalPos, TRUE);
	}

	return 0;
}


LRESULT CFreeRdpCtrl::OnVScroll(UINT /*uMsg*/, WPARAM wParam, LPARAM /*lParam*/, BOOL& /*bHandled*/)
{
	int nSBCode = LOWORD(wParam);
	int nPos = HIWORD(wParam);
	CWindow child = CWindow::GetWindow(GW_CHILD);
	if (child)
	{
		SCROLLINFO si;
		si.cbSize = sizeof(SCROLLINFO);
		si.fMask = SIF_PAGE | SIF_RANGE | SIF_POS;
		GetScrollInfo(SB_VERT, &si);

		switch (nSBCode)
		{
		case SB_BOTTOM:
			mVerticalPos = si.nMax - si.nPage;
			break;

		case SB_TOP:
			mVerticalPos = 0;
			break;

		case SB_LINEDOWN:
			mVerticalPos = si.nPos + GetSystemMetrics(SM_CYHSCROLL);
			break;

		case SB_LINEUP:
			mVerticalPos = si.nPos - GetSystemMetrics(SM_CYHSCROLL);
			break;

		case SB_PAGEDOWN:
			mVerticalPos = si.nPos + si.nPage;
			break;

		case SB_PAGEUP:
			mVerticalPos = si.nPos - si.nPage;
			break;

		case SB_ENDSCROLL:
			return 0;

		case SB_THUMBPOSITION:
		case SB_THUMBTRACK:
			mVerticalPos = nPos;
			break;
		}

		if (mVerticalPos < 0)
		{
			mVerticalPos = 0;
		}
		if (mVerticalPos > si.nMax - (int)si.nPage)
		{
			mVerticalPos = si.nMax - si.nPage;
		}
		child.SetWindowPos(NULL, -mHorizontalPos, -mVerticalPos, 0, 0, SWP_NOACTIVATE | SWP_NOOWNERZORDER | SWP_NOSIZE | SWP_NOZORDER);

		SetScrollPos(SB_VERT, mVerticalPos, TRUE);
	}

	return 0;
}


LRESULT CFreeRdpCtrl::ChildProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	rdpContext* context = (rdpContext*)::GetWindowLongPtr(hwnd, GWLP_USERDATA);
	CFreeRdpCtrl& ctrl = *(CFreeRdpCtrl*)(context->pUser);

	if (msg == WM_RBUTTONDOWN || msg == WM_MBUTTONDOWN || msg == WM_LBUTTONDOWN)
	{
		if (ctrl.mHasFocus == FALSE)
		{
			ctrl.SetFocus();
		}
	}
	else if (msg == WM_KILLFOCUS)
	{
		ctrl.mHasFocus = FALSE;
	}
	return CallWindowProc((WNDPROC)ctrl.mChildProc, hwnd, msg, wParam, lParam);
}


LRESULT CFreeRdpCtrl::OnParentNotify(UINT /*uMsg*/, WPARAM wParam, LPARAM /*lParam*/, BOOL& /*bHandled*/)
{
	int message = LOWORD(wParam);
	if (message == WM_CREATE)
	{
		mDisableScrollbars = FALSE;
		CWindow child = CWindow::GetWindow(GW_CHILD);
		if (child)
		{
			mChildProc = child.GetWindowLongPtr(GWLP_WNDPROC);
			child.SetWindowLongPtr(GWLP_WNDPROC, (LONG_PTR)CFreeRdpCtrl::ChildProc);

			mHorizontalPos = 0;
			mVerticalPos = 0;

			RECT rect;
			GetWindowRect(&rect);
			int width = rect.right - rect.left;
			int height = rect.bottom - rect.top;
			if (width < (int)mSettings->DesktopWidth || height < (int)mSettings->DesktopHeight)
			{
				int heightMod = 0;
				if (width < (int)mSettings->DesktopWidth)
				{
					heightMod = GetSystemMetrics(SM_CYHSCROLL);
				}
				if (height < (int)mSettings->DesktopHeight)
				{
					width -= GetSystemMetrics(SM_CXVSCROLL);
				}
				if (width < (int)mSettings->DesktopWidth)
				{
					heightMod = GetSystemMetrics(SM_CYHSCROLL);
				}
				height -= heightMod;
			}
			SetupScrollBars(width, height);

			if (mHasFocus == TRUE)
			{
				PostMessage(WM_SETFOCUS);
			}
		}
	}
	else if (message == WM_DESTROY)
	{
		mDisableScrollbars = TRUE;
		ShowScrollBar(SB_BOTH, FALSE);
	}

	return 0;
}


void CFreeRdpCtrl::ChangeToConnecting()
{
	mConnectionState = CONNECTING;
	Fire_OnConnecting();
}


void CFreeRdpCtrl::ChangeToConnected()
{
	mConnectionState = CONNECTED;
	Fire_OnConnected();
}


void CFreeRdpCtrl::ChangeToLoginCompleted()
{
	mConnectionState = CONNECTED;
	Fire_OnLoginComplete();
}


void CFreeRdpCtrl::ChangeToDisconnected(long reason)
{
	mConnectionState = NOT_CONNECTED;
	Fire_OnDisconnected(reason);
}


