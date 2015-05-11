// FreeRdpCtrl.cpp : Implementation of CFreeRdpCtrl
#include "stdafx.h"
#include "FreeRdpCtrl.h"

extern HINSTANCE hModuleInstance;

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
	mContext = NULL;
	mSettings = NULL;

	mConnectionState = NOT_CONNECTED;
	mFullScreen = FALSE;
	mMinutesToIdleTimeout = 0;

	mFreeRdpThread = NULL;
	mTerminationMonitoringThread = NULL;
	mDisableScrollbars = TRUE;
	mHasFocus = FALSE;
}


HRESULT CFreeRdpCtrl::FinalConstruct()
{
	ZeroMemory(&mClientEntryPoints, sizeof(RDP_CLIENT_ENTRY_POINTS));
	mClientEntryPoints.Size = sizeof(RDP_CLIENT_ENTRY_POINTS);
	mClientEntryPoints.Version = RDP_CLIENT_INTERFACE_VERSION;

	RdpClientEntry(&mClientEntryPoints);

	mContext = freerdp_client_context_new(&mClientEntryPoints);
	if (mContext == NULL)
	{
		return E_OUTOFMEMORY;
	}

	mSettings = mContext->settings;
	mSettings->SoftwareGdi = TRUE;

	mContext->pUser = this;
	PubSub_SubscribeConnectionResult(mContext->pubSub, (pConnectionResultEventHandler)ConnectionResultHandler);

	mDeffered.BitmapCacheEnabled = mSettings->BitmapCacheEnabled;
	mDeffered.BitmapPersistenceEnabled = mSettings->BitmapCachePersistEnabled;
	mDeffered.CompressionEnabled = mSettings->CompressionEnabled;
	mDeffered.KeyboardLayout = mSettings->KeyboardLayout;
	mDeffered.ClipBoardPrinterRedirectionEnabled = mSettings->RedirectClipboard;
	mDeffered.SmartSizing = mSettings->SmartSizing;

	if (instances.GetSize() == 0)
	{
		WNDCLASSW windowClass;
		windowClass.style = 0;
		windowClass.lpfnWndProc = (WNDPROC)FullScreenProc;
		windowClass.cbClsExtra = 0;
		windowClass.cbWndExtra = 0;
		windowClass.hInstance = hModuleInstance;
		windowClass.hIcon = NULL;
		windowClass.hCursor = NULL;
		windowClass.hbrBackground = NULL;
		windowClass.lpszMenuName = NULL;
		windowClass.lpszClassName = _T("FreeRdpFullScreen");
		ATOM atom = RegisterClass(&windowClass);
	}

	instances.Add(this);

	return S_OK;
}


void CFreeRdpCtrl::FinalRelease()
{
	for (int i = 0; i < instances.GetSize(); i++)
	{
		if (instances[i] == this)
		{
			instances.RemoveAt(i);
			break;
		}
	}
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

	HBRUSH blackBrush = CreateSolidBrush(RGB(0, 0, 0));
	SelectObject(di.hdcDraw, blackBrush);
	Rectangle(di.hdcDraw, rc.left, rc.top, rc.right, rc.bottom);

	LPCTSTR text = NULL;
	if (mConnectionState == NOT_CONNECTED)
	{
		text = mDisconnectedText;
	}
	else if (mConnectionState == CONNECTING)
	{
		text = mConnectingText;
	}
	if (text != NULL)
	{
		SetTextAlign(di.hdcDraw, TA_CENTER | TA_BASELINE);
		SetTextColor(di.hdcDraw, RGB(255, 255, 255));
		SetBkColor(di.hdcDraw, RGB(0, 0, 0));
		TextOut(di.hdcDraw, (rc.left + rc.right) / 2, (rc.top + rc.bottom) / 2, text, lstrlen(text));
	}

	if (bSelectOldRgn)
	{
		SelectClipRgn(di.hdcDraw, hRgnOld);
	}

	DeleteObject(blackBrush);
	DeleteObject(hRgnNew);

	return S_OK;
}


LRESULT CFreeRdpCtrl::OnSetFocus(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/)
{
	mHasFocus = TRUE;
	if (mFullScreen == FALSE)
	{
		CWindow child = CWindow::GetWindow(GW_CHILD);
		if (child)
		{
			child.SetFocus();
		}
	}
	else
	{
		if (mFullScreenWindow != NULL)
		{
			::SetFocus(mFullScreenWindow);
		}
	}

	return 0;
}


void CFreeRdpCtrl::SetupScrollBars(int clientWidth, int clientHeight)
{
	if (mSettings == NULL)
	{
		return;
	}

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
	if (mDeffered.SmartSizing == FALSE)
	{
		SetupScrollBars(cx, cy);
	}
	else
	{
		if ((HWND)mFreeRdpWindow != NULL)
		{
			mFreeRdpWindow.SetWindowPos(NULL, 0, 0, cx, cy, SWP_NOZORDER);
		}
	}

	return 0;
}


LRESULT CFreeRdpCtrl::OnUserInput(UINT /*uMsg*/, WPARAM wParam, LPARAM /*lParam*/, BOOL& /*bHandled*/)
{
	if (mMinutesToIdleTimeout > 0 && mConnectionState == CONNECTED)
	{
		SetTimer(mIdleTimer, mMinutesToIdleTimeout, NULL);
	}

	return 0;
}


LRESULT CFreeRdpCtrl::OnTimer(UINT /*uMsg*/, WPARAM wParam, LPARAM /*lParam*/, BOOL& /*bHandled*/)
{
	if (wParam == mIdleTimer)
	{
		KillTimer(mIdleTimer);
		mIdleTimer = 0;
		Disconnect();
	}

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


LRESULT CFreeRdpCtrl::InterceptProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	rdpContext* context = (rdpContext*)::GetWindowLongPtr(hwnd, GWLP_USERDATA);
	if (context == NULL)
	{
		return 0;
	}
	CFreeRdpCtrl& parentCtrl = *(CFreeRdpCtrl*)(context->pUser);

	if (parentCtrl.mMinutesToIdleTimeout > 0)
	{
		if (msg >= WM_MOUSEFIRST && msg <= WM_MOUSELAST || msg >= WM_KEYFIRST && msg <= WM_KEYLAST)
		{
			parentCtrl.SetTimer(parentCtrl.mIdleTimer, parentCtrl.mMinutesToIdleTimeout, NULL);
		}
	}

	if (msg == WM_RBUTTONDOWN || msg == WM_MBUTTONDOWN || msg == WM_LBUTTONDOWN)
	{
		if (parentCtrl.mHasFocus == FALSE)
		{
			if (parentCtrl.mFullScreen == FALSE)
			{
				parentCtrl.SetFocus();
			}
			else
			{
				parentCtrl.mFullScreenWindow.SetFocus();
			}
		}
	}
	else if (msg == WM_KILLFOCUS)
	{
		parentCtrl.mHasFocus = FALSE;
	}
	else if (msg == WM_DESTROY)
	{
		parentCtrl.mFreeRdpWindow.Detach();
	}
	else if (msg == WM_AX_TRANSFERDEFERRED)
	{
		parentCtrl.TransferDefferedProperties();
	}

	return CallWindowProc((WNDPROC)parentCtrl.mChildProc, hwnd, msg, wParam, lParam);
}


LRESULT CFreeRdpCtrl::OnParentNotify(UINT /*uMsg*/, WPARAM wParam, LPARAM /*lParam*/, BOOL& /*bHandled*/)
{
	int message = LOWORD(wParam);
	if (message == WM_CREATE)
	{
		mDisableScrollbars = FALSE;
		mFreeRdpWindow = CWindow::GetWindow(GW_CHILD);
		if ((HWND)mFreeRdpWindow != NULL)
		{
			mChildProc = mFreeRdpWindow.SetWindowLongPtr(GWLP_WNDPROC, (LONG_PTR)CFreeRdpCtrl::InterceptProc);

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

			if (mMinutesToIdleTimeout > 0)
			{
				mIdleTimer = SetTimer(mIdleTimer, mMinutesToIdleTimeout, NULL);
			}
		}
	}
	else if (message == WM_DESTROY)
	{
		mDisableScrollbars = TRUE;
		ShowScrollBar(SB_BOTH, FALSE);
		mFreeRdpWindow.Detach();
	}

	return 0;
}


void CFreeRdpCtrl::PostTransferMessage()
{
	if (mFreeRdpWindow != NULL)
	{
		mFreeRdpWindow.PostMessage(WM_AX_TRANSFERDEFERRED);
	}
}


void CFreeRdpCtrl::TransferDefferedProperties()
{
	mSettings->BitmapCacheEnabled = mDeffered.BitmapCacheEnabled;
	mSettings->BitmapCachePersistEnabled = mDeffered.BitmapPersistenceEnabled;
	mSettings->CompressionEnabled = mDeffered.CompressionEnabled;
	mSettings->KeyboardLayout = mDeffered.KeyboardLayout;
	mSettings->RedirectClipboard = mDeffered.ClipBoardPrinterRedirectionEnabled;
	mSettings->RedirectPrinters = mDeffered.ClipBoardPrinterRedirectionEnabled;
	mSettings->SmartSizing = mDeffered.SmartSizing;
}

void CFreeRdpCtrl::ChangeToConnecting()
{
	mConnectionState = CONNECTING;
	Fire_OnConnecting();
}


void CFreeRdpCtrl::ChangeToConnected()
{
	mConnectionState = CONNECTED;
	if (mFullScreen == TRUE && mFullScreenWindow == NULL && m_hWnd != NULL)
	{
		PostMessage(WM_AX_STARTFULLSCREEN, 0, 0);
	}
	Fire_OnConnected();
}


void CFreeRdpCtrl::ChangeToLoginCompleted()
{
	mConnectionState = CONNECTED;
	if (mFullScreen == TRUE && mFullScreenWindow == NULL && m_hWnd != NULL)
	{
		PostMessage(WM_AX_STARTFULLSCREEN, 0, 0);
	}
	Fire_OnLoginComplete();
}


void CFreeRdpCtrl::ChangeToDisconnected(long reason)
{
	mConnectionState = NOT_CONNECTED;
	if (mFullScreen == TRUE && mFullScreenWindow != NULL && m_hWnd != NULL)
	{
		PostMessage(WM_AX_ENDFULLSCREEN, 0, 0);
	}
	Fire_OnDisconnected(reason);
}


LRESULT CFreeRdpCtrl::OnStartFullScreen(UINT, WPARAM, LPARAM, BOOL&)
{
	StartFullScreen();
	return 0;
}


LRESULT CFreeRdpCtrl::OnEndFullScreen(UINT, WPARAM, LPARAM, BOOL&)
{
	EndFullScreen();
	return 0;
}



