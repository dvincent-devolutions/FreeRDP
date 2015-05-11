// FreeRdpCtrl.cpp : Implementation of CFreeRdpCtrl
#include "stdafx.h"
#include "FreeRdpCtrl.h"

extern HINSTANCE hModuleInstance;


void CFreeRdpCtrl::StartFullScreen()
{
	HMONITOR monitor = MonitorFromWindow(m_hWnd, MONITOR_DEFAULTTONEAREST);
	MONITORINFO monitorInfo;
	monitorInfo.cbSize = sizeof(MONITORINFO);
	GetMonitorInfo(monitor, &monitorInfo);
	RECT& rect = monitorInfo.rcMonitor;
	LONG rectWidth = rect.right - rect.left;
	LONG rectHeight = rect.bottom - rect.top;

	mFullScreenWindow.Create(_T("FreeRdpFullScreen"), NULL, &rect, _T(""), WS_POPUP | WS_CLIPCHILDREN, 0, (HMENU)NULL, this);
	if ((HWND)mFreeRdpWindow != NULL)
	{
		mFreeRdpWindow.SetParent(mFullScreenWindow);
		LONG_PTR style = mFreeRdpWindow.GetWindowLongPtr(GWL_STYLE) | WS_CLIPSIBLINGS;
		mFreeRdpWindow.SetWindowLongPtr(GWL_STYLE, style);

		if (mDeffered.SmartSizing == FALSE)
		{
			RECT childRect;
			mFreeRdpWindow.GetClientRect(&childRect);

			int x = 0;
			mHorizontalPos = 0;
			SCROLLINFO sih;
			sih.cbSize = sizeof(SCROLLINFO);
			sih.fMask = SIF_RANGE | SIF_PAGE;
			sih.nMin = 0;
			sih.nMax = childRect.right - 1;
			sih.nPage = rectWidth;

			int y = 0;
			mVerticalPos = 0;
			SCROLLINFO siv;
			siv.cbSize = sizeof(SCROLLINFO);
			siv.fMask = SIF_RANGE | SIF_PAGE;
			siv.nMin = 0;
			siv.nMax = childRect.bottom - 1;
			siv.nPage = rectHeight;

			if (childRect.right <= rectWidth)
			{
				x = (rectWidth - childRect.right) / 2;
			}
			else
			{
				siv.nPage -= GetSystemMetrics(SM_CYHSCROLL);
			}

			if (childRect.bottom <= rectHeight)
			{
				y = (rectHeight - childRect.bottom) / 2;
			}
			else
			{
				sih.nPage -= GetSystemMetrics(SM_CXVSCROLL);
			}

			mFullScreenWindow.SetScrollInfo(SB_HORZ, &sih, TRUE);
			mFullScreenWindow.SetScrollInfo(SB_VERT, &siv, TRUE);

			mFreeRdpWindow.SetWindowPos(HWND_BOTTOM, x, y, 0, 0, SWP_NOSIZE);
		}
		else
		{
			mFreeRdpWindow.SetWindowPos(HWND_BOTTOM, 0, 0, rectWidth, rectHeight, 0);
		}
		mHasFocus = TRUE;
		mFreeRdpWindow.SetFocus();
		mFreeRdpWindow.InvalidateRect(NULL, FALSE);
	}
	mFullScreenWindow.SetWindowPos(HWND_TOP, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE | SWP_SHOWWINDOW);
	Fire_OnEnterFullScreenMode();
}


void CFreeRdpCtrl::EndFullScreen()
{
	BOOL hasFocus = mHasFocus;
	if ((HWND)mFreeRdpWindow != NULL)
	{
		mFreeRdpWindow.SetParent(m_hWnd);
		if (mDeffered.SmartSizing == FALSE)
		{
			mFreeRdpWindow.SetWindowPos(NULL, 0, 0, 0, 0, SWP_NOSIZE | SWP_NOZORDER);
		}
		else
		{
			RECT rect;
			GetClientRect(&rect);
			mFreeRdpWindow.SetWindowPos(NULL, &rect, SWP_NOZORDER);
			mFreeRdpWindow.Invalidate();
		}
		if (hasFocus == TRUE)
		{
			mFreeRdpWindow.SetFocus();
		}
	}
	mHorizontalPos = 0;
	mVerticalPos = 0;
	mFullScreenWindow.DestroyWindow();
	Fire_OnLeaveFullScreenMode();
}


typedef struct tagImageButtonStruct
{
	LONG_PTR buttonProc;
	HBITMAP normal;
	HBITMAP clicked;
	BOOL mouseOver;
	BOOL mouseClick;
} ImageButtonStruct;

LRESULT ImageButtonProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	CWindow button(hwnd);
	ImageButtonStruct* p = (ImageButtonStruct*)GetWindowLongPtr(hwnd, GWLP_USERDATA);

	switch (msg)
	{
	case WM_PAINT:
	{
		PAINTSTRUCT paintStruct;
		HDC hdc = button.BeginPaint(&paintStruct);

		HDC bitmapDC = CreateCompatibleDC(hdc);
		RECT rect;
		button.GetClientRect(&rect);
		BITMAP bitmapSize;
		HBITMAP bitmap = (p->mouseClick == FALSE ? p->normal : p->clicked);
		GetObject(bitmap, sizeof(BITMAP), &bitmapSize);
		SelectObject(bitmapDC, bitmap);
		StretchBlt(hdc, 0, 0, rect.right - 1, rect.bottom - 1, bitmapDC, 0, 0, bitmapSize.bmWidth, bitmapSize.bmHeight, SRCCOPY);

		if (p->mouseOver == TRUE)
		{
			InflateRect(&rect, -2, -2);
			FrameRect(hdc, &rect, (HBRUSH)GetStockObject(WHITE_BRUSH));
		}

		DeleteDC(bitmapDC);
		button.EndPaint(&paintStruct);

		return 0;
	}

	case WM_MOUSEMOVE:
	{
		if (p->mouseOver == FALSE)
		{
			p->mouseOver = TRUE;
			button.InvalidateRect(NULL, FALSE);
		}
		break;
	}

	case WM_MOUSELEAVE:
	{
		p->mouseOver = FALSE;
		button.InvalidateRect(NULL, FALSE);
		break;
	}

	case WM_LBUTTONDOWN:
	{
		p->mouseClick = TRUE;
		button.InvalidateRect(NULL, FALSE);
		break;
	}

	case WM_LBUTTONUP:
	{
		p->mouseClick = FALSE;
		button.InvalidateRect(NULL, FALSE);
		break;
	}

	case WM_DESTROY:
	{
		WNDPROC buttonProc = (WNDPROC)p->buttonProc;
		button.SetWindowLongPtr(GWLP_WNDPROC, (LONG_PTR)p->buttonProc);
		free(p);
		
		return CallWindowProc(buttonProc, button, msg, wParam, lParam);
	}

	}

	return CallWindowProc((WNDPROC)p->buttonProc, button, msg, wParam, lParam);
}


INT_PTR CFreeRdpCtrl::FullScreenBarProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	CWindow bar(hwnd);
	CFreeRdpCtrl& rThis = *(CFreeRdpCtrl*)(bar.GetParent().GetWindowLongPtr(GWLP_USERDATA));

	switch (msg)
	{
	case WM_INITDIALOG:
	{
		ImageButtonStruct* p = (ImageButtonStruct*)calloc(1, sizeof(ImageButtonStruct));
		CWindow button = bar.GetDlgItem(IDC_CLOSE);
		button.SetWindowLongPtr(GWLP_USERDATA, (LONG_PTR)p);
		p->buttonProc = button.SetWindowLongPtr(GWLP_WNDPROC, (LONG_PTR)ImageButtonProc);
		p->normal = LoadBitmap(hModuleInstance, MAKEINTRESOURCE(IDB_FULL_SCREEN_CLOSE));
		p->clicked = LoadBitmap(hModuleInstance, MAKEINTRESOURCE(IDB_FULL_SCREEN_CLOSE_CLICKED));
		button.Detach();

		p = (ImageButtonStruct*)calloc(1, sizeof(ImageButtonStruct));
		button = bar.GetDlgItem(IDC_RESTORE);
		button.SetWindowLongPtr(GWLP_USERDATA, (LONG_PTR)p);
		p->buttonProc = button.SetWindowLongPtr(GWLP_WNDPROC, (LONG_PTR)ImageButtonProc);
		p->normal = LoadBitmap(hModuleInstance, MAKEINTRESOURCE(IDB_FULL_SCREEN_RESTORE));
		p->clicked = LoadBitmap(hModuleInstance, MAKEINTRESOURCE(IDB_FULL_SCREEN_RESTORE_CLICKED));
		button.Detach();

		return TRUE;
	}

	case WM_PAINT:
	{
		PAINTSTRUCT paintStruct;
		HDC hdc = bar.BeginPaint(&paintStruct);

		RECT rect;
		bar.GetClientRect(&rect);

		HBRUSH brush = ::CreateSolidBrush(RGB(40, 160, 100));
		SelectObject(hdc, brush);
		Rectangle(hdc, rect.left - 1, rect.top - 1, rect.right + 1, rect.bottom + 1);

		SetTextColor(hdc, RGB(255, 255, 255));
		SetBkColor(hdc, RGB(40, 160, 100));
		SelectObject(hdc, GetStockObject(DEFAULT_GUI_FONT));
		DrawText(hdc, rThis.mFullScreenTitle, -1, &rect, DT_CENTER | DT_VCENTER | DT_SINGLELINE);

		DeleteObject(brush);
		bar.EndPaint(&paintStruct);

		return TRUE;
	}

	case WM_COMMAND:
	{
		switch (LOWORD(wParam))
		{
		case IDC_CLOSE:
		{
			rThis.Disconnect();
			return TRUE;
		}

		case IDC_RESTORE:
		{
			rThis.put_FullScreen((long)0);
			return TRUE;
		}

		case IDC_MINIMIZE:
		{
			return TRUE;
		}

		}

	default:
		break;
	}

	}

	return FALSE;
}


LRESULT CFreeRdpCtrl::FullScreenProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	CWindow wnd(hwnd);

	if (msg == WM_CREATE)
	{
		CREATESTRUCT* createStruct = (CREATESTRUCT*)lParam;
		wnd.SetWindowLongPtr(GWLP_USERDATA, (LONG_PTR)createStruct->lpCreateParams);

		CWindow fullScreenBar = CreateDialog(hModuleInstance, MAKEINTRESOURCE(IDD_FULL_SCREEN_BAR), hwnd, (DLGPROC)FullScreenBarProc);
		fullScreenBar.SetDlgCtrlID(1);

		RECT rect;
		wnd.GetClientRect(&rect);
		LONG width = rect.right;
		fullScreenBar.GetWindowRect(&rect);
		LONG barWidth = rect.right - rect.left;
		fullScreenBar.SetWindowPos(HWND_TOP, (width - barWidth) / 2, 0, 0, 0, SWP_NOSIZE);
		
		fullScreenBar.ShowWindow(SW_SHOW);
		return 0;
	}

	CFreeRdpCtrl& rThis = *(CFreeRdpCtrl*)::GetWindowLongPtr(hwnd, GWLP_USERDATA);
	switch (msg)
	{
	case WM_PAINT:
	{
		PAINTSTRUCT paintStruct;
		HDC hdc = wnd.BeginPaint(&paintStruct);

		RECT rect;
		wnd.GetClientRect(&rect);
		SelectObject(hdc, GetStockObject(BLACK_BRUSH));
		Rectangle(hdc, 0, 0, rect.right, rect.bottom);

		wnd.EndPaint(&paintStruct);

		return 0;
	}

	case WM_SETFOCUS:
	{
		if ((HWND)rThis.mFreeRdpWindow != NULL)
		{
			rThis.mHasFocus = TRUE;
			rThis.mFreeRdpWindow.SetFocus();
		}
		break;
	}

	case WM_HSCROLL:
	{
		int nSBCode = LOWORD(wParam);
		int nPos = HIWORD(wParam);
		if ((HWND)rThis.mFreeRdpWindow != NULL)
		{
			SCROLLINFO si;
			si.cbSize = sizeof(SCROLLINFO);
			si.fMask = SIF_PAGE | SIF_RANGE | SIF_POS;
			wnd.GetScrollInfo(SB_HORZ, &si);

			switch (nSBCode)
			{
			case SB_RIGHT:
				rThis.mHorizontalPos = si.nMax - si.nPage;
				break;

			case SB_LEFT:
				rThis.mHorizontalPos = 0;
				break;

			case SB_LINERIGHT:
				rThis.mHorizontalPos = si.nPos + GetSystemMetrics(SM_CXVSCROLL);
				break;

			case SB_LINELEFT:
				rThis.mHorizontalPos = si.nPos - GetSystemMetrics(SM_CXVSCROLL);
				break;

			case SB_PAGERIGHT:
				rThis.mHorizontalPos = si.nPos + si.nPage;
				break;

			case SB_PAGELEFT:
				rThis.mHorizontalPos = si.nPos - si.nPage;
				break;

			case SB_ENDSCROLL:
				return 0;

			case SB_THUMBPOSITION:
			case SB_THUMBTRACK:
				rThis.mHorizontalPos = nPos;
				break;
			}

			if (rThis.mHorizontalPos < 0)
			{
				rThis.mHorizontalPos = 0;
			}
			if (rThis.mHorizontalPos > si.nMax - (int)si.nPage)
			{
				rThis.mHorizontalPos = si.nMax - si.nPage;
			}
			rThis.mFreeRdpWindow.SetWindowPos(NULL, -rThis.mHorizontalPos, -rThis.mVerticalPos, 0, 0, SWP_NOACTIVATE | SWP_NOOWNERZORDER | SWP_NOSIZE | SWP_NOZORDER);

			wnd.SetScrollPos(SB_HORZ, rThis.mHorizontalPos, TRUE);
		}

		return 0;
	}

	case WM_VSCROLL:
	{
		int nSBCode = LOWORD(wParam);
		int nPos = HIWORD(wParam);
		if ((HWND)rThis.mFreeRdpWindow != NULL)
		{
			SCROLLINFO si;
			si.cbSize = sizeof(SCROLLINFO);
			si.fMask = SIF_PAGE | SIF_RANGE | SIF_POS;
			wnd.GetScrollInfo(SB_VERT, &si);

			switch (nSBCode)
			{
			case SB_BOTTOM:
				rThis.mVerticalPos = si.nMax - si.nPage;
				break;

			case SB_TOP:
				rThis.mVerticalPos = 0;
				break;

			case SB_LINEDOWN:
				rThis.mVerticalPos = si.nPos + GetSystemMetrics(SM_CYHSCROLL);
				break;

			case SB_LINEUP:
				rThis.mVerticalPos = si.nPos - GetSystemMetrics(SM_CYHSCROLL);
				break;

			case SB_PAGEDOWN:
				rThis.mVerticalPos = si.nPos + si.nPage;
				break;

			case SB_PAGEUP:
				rThis.mVerticalPos = si.nPos - si.nPage;
				break;

			case SB_ENDSCROLL:
				return 0;

			case SB_THUMBPOSITION:
			case SB_THUMBTRACK:
				rThis.mVerticalPos = nPos;
				break;
			}

			if (rThis.mVerticalPos < 0)
			{
				rThis.mVerticalPos = 0;
			}
			if (rThis.mVerticalPos > si.nMax - (int)si.nPage)
			{
				rThis.mVerticalPos = si.nMax - si.nPage;
			}
			rThis.mFreeRdpWindow.SetWindowPos(NULL, -rThis.mHorizontalPos, -rThis.mVerticalPos, 0, 0, SWP_NOACTIVATE | SWP_NOOWNERZORDER | SWP_NOSIZE | SWP_NOZORDER);

			wnd.SetScrollPos(SB_VERT, rThis.mVerticalPos, TRUE);
		}

		return 0;
	}

	case WM_DESTROY:
	{
		break;
	}

	}

	return ::DefWindowProc(wnd, msg, wParam, lParam);
}


