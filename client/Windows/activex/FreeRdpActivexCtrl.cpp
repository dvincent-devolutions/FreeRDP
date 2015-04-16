// FreeRdpActivexCtrl.cpp : Implementation of the CFreeRdpActivexCtrl ActiveX Control class.

#include "stdafx.h"
//#include "afxdialogex.h"
#include "FreeRdpActivex.h"
#include "FreeRdpActivexCtrl.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CFreeRdpActivexCtrl, COleControl)

// Message map
BEGIN_MESSAGE_MAP(CFreeRdpActivexCtrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
	ON_WM_SIZE()
	ON_WM_SETFOCUS()
	ON_WM_PARENTNOTIFY()
	ON_WM_VSCROLL()
	ON_WM_HSCROLL()
END_MESSAGE_MAP()

// Dispatch map
BEGIN_DISPATCH_MAP(CFreeRdpActivexCtrl, COleControl)
	//DISP_PROPERTY_EX_ID(CFreeRdpActivexCtrl, "Server", dispidServer, GetServer, SetServer, VT_BSTR)
	//DISP_FUNCTION_ID(CFreeRdpActivexCtrl, "Connect", dispidConnect, Connect, VT_EMPTY, VTS_NONE)
END_DISPATCH_MAP()

// Event map
BEGIN_EVENT_MAP(CFreeRdpActivexCtrl, COleControl)
	EVENT_CUSTOM_ID("Test", eventidTest, Test, VTS_NONE)
END_EVENT_MAP()

// Interface map
BEGIN_INTERFACE_MAP(CFreeRdpActivexCtrl, COleControl)
	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsTscAx_Redist, RdpClient)
	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsTscAx, RdpClient)
	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsRdpClient, RdpClient)
	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsRdpClient2, RdpClient)
	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsRdpClient3, RdpClient)
	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsRdpClient4, RdpClient)
	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsRdpClient5, RdpClient)
	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsRdpClient6, RdpClient)
	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsRdpClient7, RdpClient)
	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsRdpClient8, RdpClient)
	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsRdpClient9, RdpClient)

	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsTscAdvancedSettings, RdpClientAdvancedSettings)
	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsRdpClientAdvancedSettings, RdpClientAdvancedSettings)
	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsRdpClientAdvancedSettings2, RdpClientAdvancedSettings)
	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsRdpClientAdvancedSettings3, RdpClientAdvancedSettings)
	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsRdpClientAdvancedSettings4, RdpClientAdvancedSettings)
	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsRdpClientAdvancedSettings5, RdpClientAdvancedSettings)
	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsRdpClientAdvancedSettings6, RdpClientAdvancedSettings)
	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsRdpClientAdvancedSettings7, RdpClientAdvancedSettings)
	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsRdpClientAdvancedSettings8, RdpClientAdvancedSettings)

	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsTscNonScriptable, RdpClientNonScriptable)
	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsRdpClientNonScriptable, RdpClientNonScriptable)
	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsRdpClientNonScriptable2, RdpClientNonScriptable)
	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsRdpClientNonScriptable3, RdpClientNonScriptable)
	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsRdpClientNonScriptable4, RdpClientNonScriptable)
	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsRdpClientNonScriptable5, RdpClientNonScriptable)

	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsTscSecuredSettings, RdpClientSecuredSettings)
	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsRdpClientSecuredSettings, RdpClientSecuredSettings)
	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsRdpClientSecuredSettings2, RdpClientSecuredSettings)

	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsRdpClientShell, RdpClientShell)

	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsRdpClientTransportSettings, RdpClientTransportSettings)
	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsRdpClientTransportSettings2, RdpClientTransportSettings)
	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsRdpClientTransportSettings3, RdpClientTransportSettings)
	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsRdpClientTransportSettings4, RdpClientTransportSettings)

	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsRdpDevice, RdpDevice)

	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsRdpDeviceCollection, RdpDeviceCollection)

	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsRdpDrive, RdpDrive)

	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsRdpDriveCollection, RdpDriveCollection)

	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsRdpPreferredRedirectionInfo, RdpPreferredRedirectionInfo)

	INTERFACE_PART(CFreeRdpActivexCtrl, IID_ITSRemoteProgram, RemoteProgram)
	INTERFACE_PART(CFreeRdpActivexCtrl, IID_ITSRemoteProgram2, RemoteProgram)

	INTERFACE_PART(CFreeRdpActivexCtrl, IID_IMsTscDebug, TscDebug)
END_INTERFACE_MAP()

// Connection map
BEGIN_CONNECTION_MAP(CFreeRdpActivexCtrl, COleControl)
	CONNECTION_PART(CFreeRdpActivexCtrl, DIID_IMsTscAxEvents, MsTscEvents)
END_CONNECTION_MAP()

// Property pages

// TODO: Add more property pages as needed.  Remember to increase the count!
//BEGIN_PROPPAGEIDS(CFreeRdpActivexCtrl, 1)
//	PROPPAGEID(CFreeRdpActivexPropPage::guid)
//END_PROPPAGEIDS(CFreeRdpActivexCtrl)

// Initialize class factory and guid
IMPLEMENT_OLECREATE_EX(CFreeRdpActivexCtrl, "FREERDPACTIVEX.FreeRdpActivexCtrl.1",
	0x49052c41, 0xeb70, 0x464f, 0xba, 0x50, 0x8a, 0xb2, 0xfd, 0xb0, 0x13, 0x9b)

// Type library ID and version
IMPLEMENT_OLETYPELIB(CFreeRdpActivexCtrl, _tlid, _wVerMajor, _wVerMinor)

// Interface IDs
const IID IID_DFreeRdpActivex = { 0xFEC3E2EA, 0x695D, 0x48F7, { 0x9C, 0xB6, 0xAD, 0xCA, 0xD0, 0x50, 0xC7, 0xEC } };
const IID IID_DFreeRdpActivexEvents = { 0x740FC5CD, 0xB2CD, 0x495B, { 0x96, 0x28, 0x9C, 0xC8, 0x35, 0x1C, 0xC1, 0x3A } };

// Control type information
static const DWORD _dwFreeRdpActivexOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CFreeRdpActivexCtrl, IDS_FREERDPACTIVEX, _dwFreeRdpActivexOleMisc)

// CFreeRdpActivexCtrl::CFreeRdpActivexCtrlFactory::UpdateRegistry -
// Adds or removes system registry entries for CFreeRdpActivexCtrl

BOOL CFreeRdpActivexCtrl::CFreeRdpActivexCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: Verify that your control follows apartment-model threading rules.
	// Refer to MFC TechNote 64 for more information.
	// If your control does not conform to the apartment-model rules, then
	// you must modify the code below, changing the 6th parameter from
	// afxRegApartmentThreading to 0.

	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_FREERDPACTIVEX,
			IDB_FREERDPACTIVEX,
			afxRegApartmentThreading,
			_dwFreeRdpActivexOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}


CFreeRdpActivexCtrl::CFreeRdpActivexCtrl()
{
	InitializeIIDs(&IID_DFreeRdpActivex, &IID_DFreeRdpActivexEvents);
	
	ZeroMemory(&mClientEntryPoints, sizeof(RDP_CLIENT_ENTRY_POINTS));
	mClientEntryPoints.Size = sizeof(RDP_CLIENT_ENTRY_POINTS);
	mClientEntryPoints.Version = RDP_CLIENT_INTERFACE_VERSION;

	RdpClientEntry(&mClientEntryPoints);

	mContext = freerdp_client_context_new(&mClientEntryPoints);
	if (mContext)
	{
		mSettings = mContext->settings;
		mSettings->SoftwareGdi = TRUE;

		mContext->instance->pUser = this;
		PubSub_SubscribeConnectionResult(mContext->pubSub, (pConnectionResultEventHandler)ConnectionResultHandler);
	}

	mRdpClientAdvancedSettingsTypeInfo = NULL;
	mRdpClientSecuredSettingsTypeInfo = NULL;
	mRdpClientShellTypeInfo = NULL;
	mRdpClientTransportSettingsTypeInfo = NULL;
	mRdpClientTypeInfo = NULL;
	mRemoteProgramTypeInfo = NULL;
	mTscDebugTypeInfo = NULL;

	mConnectionState = NOT_CONNECTED;

	mFreeRdpThread = NULL;
	mTerminationMonitoringThread = NULL;
	mDisableScrollbars = TRUE;
}


CFreeRdpActivexCtrl::~CFreeRdpActivexCtrl()
{
	if (mRdpClientAdvancedSettingsTypeInfo != NULL)
	{
		mRdpClientAdvancedSettingsTypeInfo->Release();
	}
	if (mRdpClientSecuredSettingsTypeInfo != NULL)
	{
		mRdpClientSecuredSettingsTypeInfo->Release();
	}
	if (mRdpClientShellTypeInfo != NULL)
	{
		mRdpClientShellTypeInfo->Release();
	}
	if (mRdpClientTransportSettingsTypeInfo != NULL)
	{
		mRdpClientTransportSettingsTypeInfo->Release();
	}
	if (mRdpClientTypeInfo != NULL)
	{
		mRdpClientTypeInfo->Release();
	}
	if (mRemoteProgramTypeInfo != NULL)
	{
		mRemoteProgramTypeInfo->Release();
	}
	if (mTscDebugTypeInfo != NULL)
	{
		mTscDebugTypeInfo->Release();
	}

	if (mTerminationMonitoringThread != NULL)
	{
		WaitForSingleObject(mTerminationMonitoringThread, INFINITE);
		CloseHandle(mTerminationMonitoringThread);
	}
	freerdp_client_context_free(mContext);
}


void CFreeRdpActivexCtrl::OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& /* rcInvalid */)
{
	if (!pdc)
	{
		return;
	}

	pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(BLACK_BRUSH)));
}


void CFreeRdpActivexCtrl::SetupScrollBars(int clientWidth, int clientHeight)
{
	int desktopWidth = clientWidth;
	int desktopHeight = clientHeight;

	CWnd* child = GetWindow(GW_CHILD);
	if (child && mDisableScrollbars == FALSE)
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
	GetScrollInfo(SB_HORZ, &si, SIF_POS);
	int adjustedHoriztontalPos = si.nPos;

	si.fMask = SIF_RANGE | SIF_PAGE;
	si.nMin = 0;
	si.nMax = desktopHeight - 1;
	si.nPage = clientHeight;
	SetScrollInfo(SB_VERT, &si, TRUE);
	GetScrollInfo(SB_VERT, &si, SIF_POS);
	int adjustedVerticalPos = si.nPos;

	if (child && (adjustedHoriztontalPos != mHorizontalPos || adjustedVerticalPos != mVerticalPos))
	{
		mHorizontalPos = adjustedHoriztontalPos;
		mVerticalPos = adjustedVerticalPos;
		child->SetWindowPos(NULL, -mHorizontalPos, -mVerticalPos, 0, 0, SWP_NOACTIVATE | SWP_NOOWNERZORDER | SWP_NOSIZE | SWP_NOZORDER);
	}
}


void CFreeRdpActivexCtrl::OnSize(UINT nType, int cx, int cy)
{
	COleControl::OnSize(nType, cx, cy);

	SetupScrollBars(cx, cy);
}


void CFreeRdpActivexCtrl::OnParentNotify(UINT message, LPARAM lParam)
{
	COleControl::OnParentNotify(message, lParam);

	if (message == WM_CREATE)
	{
		mDisableScrollbars = FALSE;
		CWnd* child = GetWindow(GW_CHILD);
		if (child)
		{
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
		}
	}
	else if (message == WM_DESTROY)
	{
		mDisableScrollbars = TRUE;
		ShowScrollBar(SB_BOTH, FALSE);
	}
}


void CFreeRdpActivexCtrl::OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar)
{
	CWnd* child = GetWindow(GW_CHILD);
	if (child)
	{
		SCROLLINFO si;
		si.cbSize = sizeof(SCROLLINFO);
		GetScrollInfo(SB_VERT, &si, SIF_PAGE | SIF_RANGE | SIF_POS);

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
			return;

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
		child->SetWindowPos(NULL, -mHorizontalPos, -mVerticalPos, 0, 0, SWP_NOACTIVATE | SWP_NOOWNERZORDER | SWP_NOSIZE | SWP_NOZORDER);

		SetScrollPos(SB_VERT, mVerticalPos, TRUE);
	}

	COleControl::OnVScroll(nSBCode, nPos, pScrollBar);
}


void CFreeRdpActivexCtrl::OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar)
{
	CWnd* child = GetWindow(GW_CHILD);
	if (child)
	{
		SCROLLINFO si;
		si.cbSize = sizeof(SCROLLINFO);
		GetScrollInfo(SB_HORZ, &si, SIF_PAGE | SIF_RANGE | SIF_POS);

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
			return;

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
		child->SetWindowPos(NULL, -mHorizontalPos, -mVerticalPos, 0, 0, SWP_NOACTIVATE | SWP_NOOWNERZORDER | SWP_NOSIZE | SWP_NOZORDER);

		SetScrollPos(SB_HORZ, mHorizontalPos, TRUE);
	}

	COleControl::OnHScroll(nSBCode, nPos, pScrollBar);
}


void CFreeRdpActivexCtrl::OnSetFocus(CWnd* pOldWnd)
{
	COleControl::OnSetFocus(pOldWnd);

	CWnd* child = GetWindow(GW_CHILD);
	if (child)
	{
		child->SetFocus();
	}
}


void CFreeRdpActivexCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: Call PX_ functions for each persistent custom property.
}



void CFreeRdpActivexCtrl::OnResetState()
{
	COleControl::OnResetState();  // Resets defaults found in DoPropExchange

	// TODO: Reset any other control state here.
}


HRESULT CFreeRdpActivexCtrl::SetClearTextPassword(BSTR password)
{
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	try
	{
		CStringA string(password);
		mSettings->Password = _strdup(string);
		if (!mSettings->Password)
		{
			return E_OUTOFMEMORY;
		}
	}
	catch (...)
	{
		return E_OUTOFMEMORY;
	}

	return S_OK;
}


