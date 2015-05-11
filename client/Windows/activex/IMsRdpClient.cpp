// Implementation of the main RDP client interface.

#include "stdafx.h"
#include "FreeRdpCtrl.h"

extern HINSTANCE hModuleInstance;


STDMETHODIMP CFreeRdpCtrl::put_Server(BSTR text)
{
	USES_CONVERSION;

	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	mSettings->ServerHostname = _strdup(OLE2A(text));
	if (!mSettings->ServerHostname)
	{
		return E_OUTOFMEMORY;
	}

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_Server(BSTR* pText)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}

	try
	{
		CComBSTR string(mSettings->ServerHostname);
		string.CopyTo(pText);
	}
	catch (...)
	{
		return E_OUTOFMEMORY;
	}

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_Domain(BSTR text)
{
	USES_CONVERSION;

	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	mSettings->Domain = _strdup(OLE2A(text));
	if (!mSettings->Domain)
	{
		return E_OUTOFMEMORY;
	}

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_Domain(BSTR* pText)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}

	try
	{
		CComBSTR string(mSettings->Domain);
		string.CopyTo(pText);
	}
	catch (...)
	{
		return E_OUTOFMEMORY;
	}

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_UserName(BSTR text)
{
	USES_CONVERSION;

	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	mSettings->Username = _strdup(OLE2A(text));
	if (!mSettings->Username)
	{
		return E_OUTOFMEMORY;
	}

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_UserName(BSTR* pText)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}

	try
	{
		CComBSTR string(mSettings->Username);
		string.CopyTo(pText);
	}
	catch (...)
	{
		return E_OUTOFMEMORY;
	}

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_DisconnectedText(BSTR text)
{
	try
	{
		mDisconnectedText = text;
	}
	catch (...)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState == NOT_CONNECTED)
	{
		Invalidate();
	}
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_DisconnectedText(BSTR* text)
{
	try
	{
		CComBSTR string(mDisconnectedText);
		string.CopyTo(text);
	}
	catch (...)
	{
		return E_OUTOFMEMORY;
	}

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_ConnectingText(BSTR text)
{
	try
	{
		mConnectingText = text;
	}
	catch (...)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState == CONNECTING)
	{
		Invalidate();
	}
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_ConnectingText(BSTR* text)
{
	try
	{
		CComBSTR string(mConnectingText);
		string.CopyTo(text);
	}
	catch (...)
	{
		return E_OUTOFMEMORY;
	}

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_Connected(SHORT* val)
{
	*val = mConnectionState;

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_DesktopWidth(LONG width)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}

	mSettings->DesktopWidth = width;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_DesktopWidth(LONG* width)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}

	*width = mSettings->DesktopWidth;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_DesktopHeight(LONG height)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}

	mSettings->DesktopHeight = height;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_DesktopHeight(LONG* height)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}

	*height = mSettings->DesktopHeight;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_StartConnected(LONG val)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_StartConnected(LONG* val)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_HorizontalScrollBarVisible(LONG* val)
{
	SCROLLINFO si;
	si.cbSize = sizeof(SCROLLINFO);
	si.fMask = SIF_PAGE | SIF_RANGE;
	GetScrollInfo(SB_HORZ, &si);
	*val = (si.nMax > (int)si.nPage ? TRUE : FALSE);
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_VerticalScrollBarVisible(LONG* val)
{
	SCROLLINFO si;
	si.cbSize = sizeof(SCROLLINFO);
	si.fMask = SIF_PAGE | SIF_RANGE;
	GetScrollInfo(SB_VERT, &si);
	*val = (si.nMax > (int)si.nPage ? TRUE : FALSE);
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_FullScreenTitle(BSTR text)
{
	try
	{
		mFullScreenTitle = text;
		if (mFullScreen == TRUE && (HWND)mFullScreenWindow != NULL)
		{
			CWindow bar = mFullScreenWindow.GetDlgItem(1);
			if ((HWND)bar != NULL)
			{
				bar.InvalidateRect(NULL, FALSE);
			}
		}
	}
	catch (...)
	{
		return E_OUTOFMEMORY;
	}
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_CipherStrength(LONG* val)
{
	*val = 128;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_Version(BSTR* pText)
{
	WCHAR fileName[MAX_PATH];
	GetModuleFileName(hModuleInstance, fileName, MAX_PATH);
	fileName[MAX_PATH - 1] = 0;
	DWORD dummy;
	DWORD fileSize = GetFileVersionInfoSize(fileName, &dummy);
	if (fileSize == 0)
	{
		return E_FAIL;
	}

	try
	{
		CAtlArray<BYTE> data;
		data.SetCount(fileSize);
		GetFileVersionInfo(fileName, 0, fileSize, data.GetData());
		VS_FIXEDFILEINFO* fileInfo;
		UINT size;
		VerQueryValue(data.GetData(), _T("\\"), (LPVOID*)&fileInfo, &size);

		CString version;
		version.Format(_T("%d.%d.%d.%d"), HIWORD(fileInfo->dwFileVersionMS), LOWORD(fileInfo->dwFileVersionMS),
			HIWORD(fileInfo->dwFileVersionLS), LOWORD(fileInfo->dwFileVersionLS));
		*pText = version.AllocSysString();
		if (pText == NULL)
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


STDMETHODIMP CFreeRdpCtrl::get_SecuredSettingsEnabled(LONG* val)
{
	*val = TRUE;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_SecuredSettings(IMsTscSecuredSettings** ppSecuredSettings)
{
	*ppSecuredSettings = (IMsRdpClientSecuredSettings2*)this;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_AdvancedSettings(IMsTscAdvancedSettings** ppAdvSettings)
{
	*ppAdvSettings = (IMsRdpClientAdvancedSettings8*)this;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_Debugger(IMsTscDebug** ppTscDebug)
{
	*ppTscDebug = (IMsTscDebug*)this;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::Connect()
{
	if (mContext == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	ChangeToConnecting();

	HRESULT result = CreateVirtualChannels();
	if (result != S_OK)
	{
		ChangeToDisconnected(0);
		return E_ABORT;
	}
	TransferDefferedProperties();

	if (mTerminationMonitoringThread != NULL)
	{
		WaitForSingleObject(mTerminationMonitoringThread, INFINITE);
		CloseHandle(mTerminationMonitoringThread);
		mTerminationMonitoringThread = NULL;
	}

	mSettings->ParentWindowId = (UINT64)m_hWnd;
	freerdp_client_start(mContext);
	mFreeRdpThread = freerdp_client_get_thread(mContext);

	mTerminationMonitoringThread = CreateThread(NULL, 0, TerminationMonitoringThread, this, 0, NULL);

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::Disconnect()
{
	if ((HWND)mFreeRdpWindow != NULL)
	{
		mFreeRdpWindow.PostMessage(WM_CLOSE, 0, 0);
	}

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::CreateVirtualChannels(BSTR rhs)
{
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}
	if (mVirtualChannels.GetSize() > 0)
	{
		return E_FAIL;
	}

	HRESULT result;
	try
	{
		CComBSTR channelList(rhs);
		result = CreateVirtualChannels(channelList);
	}
	catch (...)
	{
		result = E_OUTOFMEMORY;
	}

	return result;
}


STDMETHODIMP CFreeRdpCtrl::SendOnVirtualChannel(BSTR channel, BSTR data)
{
	if (mConnectionState != CONNECTED)
	{
		return E_FAIL;
	}
	if (mVirtualChannels.GetSize() < 0)
	{
		return E_FAIL;
	}

	HRESULT result;
	CComBSTR dataRef;
	dataRef.Attach(data);
	try
	{
		CComBSTR channelName(channel);

		result = SendOnVirtualChannel(channelName, (BYTE*)dataRef.m_str, dataRef.ByteLength());
	}
	catch (...)
	{
		result = E_OUTOFMEMORY;
	}
	dataRef.Detach();

	return result;
}


STDMETHODIMP CFreeRdpCtrl::put_ColorDepth(long pcolorDepth)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	mSettings->ColorDepth = pcolorDepth;

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_ColorDepth(long *pcolorDepth)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}

	*pcolorDepth = mSettings->ColorDepth;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_AdvancedSettings2(IMsRdpClientAdvancedSettings **ppAdvSettings)
{
	*ppAdvSettings = (IMsRdpClientAdvancedSettings8*)this;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_SecuredSettings2(IMsRdpClientSecuredSettings **ppSecuredSettings)
{
	*ppSecuredSettings = (IMsRdpClientSecuredSettings2*)this;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_ExtendedDisconnectReason(ExtendedDisconnectReasonCode *pExtendedDisconnectReason)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_FullScreen(VARIANT_BOOL pfFullScreen)
{
	return put_FullScreen((long)pfFullScreen);
}


STDMETHODIMP CFreeRdpCtrl::get_FullScreen(VARIANT_BOOL *pfFullScreen)
{
	long fullScreen = FALSE;
	HRESULT result = get_FullScreen(&fullScreen);
	*pfFullScreen = fullScreen;
	return result;
}


STDMETHODIMP CFreeRdpCtrl::SetVirtualChannelOptions(BSTR chanName, long chanOptions)
{
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	HRESULT result;
	try
	{
		CStringA channelList(chanName);
		result = SetVirtualChannelOptions(channelList, chanOptions);
	}
	catch (...)
	{
		result = E_OUTOFMEMORY;
	}

	return result;
}


STDMETHODIMP CFreeRdpCtrl::GetVirtualChannelOptions(BSTR chanName, long *pChanOptions)
{
	HRESULT result;
	try
	{
		CStringA channelList(chanName);
		result = GetVirtualChannelOptions(channelList, pChanOptions);
	}
	catch (...)
	{
		result = E_OUTOFMEMORY;
	}

	return result;
}


STDMETHODIMP CFreeRdpCtrl::RequestClose(ControlCloseStatus *pCloseStatus)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_AdvancedSettings3(IMsRdpClientAdvancedSettings2 **ppAdvSettings)
{
	*ppAdvSettings = (IMsRdpClientAdvancedSettings8*)this;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_ConnectedStatusText(BSTR pConnectedStatusText)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_ConnectedStatusText(BSTR *pConnectedStatusText)
{
	return E_NOTIMPL;
}

	     
STDMETHODIMP CFreeRdpCtrl::get_AdvancedSettings4(IMsRdpClientAdvancedSettings3 **ppAdvSettings)
{
	*ppAdvSettings = (IMsRdpClientAdvancedSettings8*)this;
	return S_OK;
}

	     
STDMETHODIMP CFreeRdpCtrl::get_AdvancedSettings5(IMsRdpClientAdvancedSettings4 **ppAdvSettings)
{
	*ppAdvSettings = (IMsRdpClientAdvancedSettings8*)this;
	return S_OK;
}

	     
STDMETHODIMP CFreeRdpCtrl::get_TransportSettings(IMsRdpClientTransportSettings **ppXportSet)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_AdvancedSettings6(IMsRdpClientAdvancedSettings5 **ppAdvSettings)
{
	*ppAdvSettings = (IMsRdpClientAdvancedSettings8*)this;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::GetErrorDescription(unsigned int disconnectReason, unsigned int ExtendedDisconnectReason, BSTR *pBstrErrorMsg)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_RemoteProgram(ITSRemoteProgram **ppRemoteProgram)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_MsRdpClientShell(IMsRdpClientShell **ppLauncher)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_AdvancedSettings7(IMsRdpClientAdvancedSettings6 **ppAdvSettings)
{
	*ppAdvSettings = (IMsRdpClientAdvancedSettings8*)this;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_TransportSettings2(IMsRdpClientTransportSettings2 **ppXportSet2)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_AdvancedSettings8(IMsRdpClientAdvancedSettings7 **ppAdvSettings)
{
	*ppAdvSettings = (IMsRdpClientAdvancedSettings8*)this;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_TransportSettings3(IMsRdpClientTransportSettings3 **ppXportSet3)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::GetStatusText(unsigned int statusCode, BSTR *pBstrStatusText)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_SecuredSettings3(IMsRdpClientSecuredSettings2 **ppSecuredSettings)
{
	*ppSecuredSettings = (IMsRdpClientSecuredSettings2*)this;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_RemoteProgram2(ITSRemoteProgram2 **ppRemoteProgram)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::SendRemoteAction(RemoteSessionActionType actionType)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_AdvancedSettings9(IMsRdpClientAdvancedSettings8 **ppAdvSettings)
{
	*ppAdvSettings = (IMsRdpClientAdvancedSettings8*)this;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::Reconnect(unsigned long ulWidth, unsigned long ulHeight, ControlReconnectStatus *pReconnectStatus)
{
	return E_NOTIMPL;
}

	     
STDMETHODIMP CFreeRdpCtrl::get_TransportSettings4(IMsRdpClientTransportSettings4 **ppXportSet4)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::SyncSessionDisplaySettings(void)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::UpdateSessionDisplaySettings(unsigned long ulDesktopWidth, unsigned long ulDesktopHeight, unsigned long ulPhysicalWidth,
	unsigned long ulPhysicalHeight, unsigned long ulOrientation, unsigned long ulDesktopScaleFactor, unsigned long ulDeviceScaleFactor)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::attachEvent(BSTR eventName, IDispatch *callback)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::detachEvent(BSTR eventName, IDispatch *callback)
{
	return E_NOTIMPL;
}


