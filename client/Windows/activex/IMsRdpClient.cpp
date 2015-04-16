// Implementation of the main RDP client interface.

#include "stdafx.h"
#include "FreeRdpActivexCtrl.h"


STDMETHODIMP_(ULONG) CFreeRdpActivexCtrl::XRdpClient::AddRef()
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return pThis->ExternalAddRef();
}


STDMETHODIMP_(ULONG) CFreeRdpActivexCtrl::XRdpClient::Release()
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return pThis->ExternalRelease();
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::QueryInterface(REFIID iid, LPVOID* ppvObj)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return pThis->ExternalQueryInterface(&iid, ppvObj);
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::GetTypeInfoCount(UINT* pCount)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	*pCount = 1;

	return S_OK;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::GetTypeInfo(UINT info, LCID lcid, ITypeInfo** pInfo)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	if (info != 0)
	{
		return DISP_E_BADINDEX;
	}

	if (pThis->mRdpClientTypeInfo == NULL)
	{
		HRESULT result = pThis->GetTypeInfoOfGuid(lcid, IID_IMsRdpClient9, &pThis->mRdpClientTypeInfo);
		if (FAILED(result))
		{
			pThis->mRdpClientTypeInfo = NULL;
			return result;
		}
	}
	pThis->mRdpClientTypeInfo->AddRef();
	*pInfo = pThis->mRdpClientTypeInfo;

	return S_OK;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::GetIDsOfNames(REFIID riid, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgdispid)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	if (pThis->mRdpClientTypeInfo == NULL)
	{
		return E_FAIL;
	}

	return DispGetIDsOfNames(pThis->mRdpClientTypeInfo, rgszNames, cNames, rgdispid);
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::Invoke(DISPID dispid, REFIID riid, LCID lcid, WORD flags, DISPPARAMS* pParams, VARIANT* pResult, EXCEPINFO* pExcep, UINT* pErr)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	if (pThis->mRdpClientTypeInfo == NULL)
	{
		return E_FAIL;
	}

	return DispInvoke(this, pThis->mRdpClientTypeInfo, dispid, flags, pParams, pResult, pExcep, pErr);
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::put_Server(BSTR text)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	if (pThis->mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	try
	{
		CStringA string(text);
		pThis->mSettings->ServerHostname = _strdup(string);
		if (!pThis->mSettings->ServerHostname)
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


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::get_Server(BSTR* pText)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	try
	{
		CString string(pThis->mSettings->ServerHostname);
		*pText = string.AllocSysString();
	}
	catch (...)
	{
		return E_OUTOFMEMORY;
	}

	return S_OK;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::put_Domain(BSTR text)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	if (pThis->mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	try
	{
		CStringA string(text);
		pThis->mSettings->Domain = _strdup(string);
		if (!pThis->mSettings->Domain)
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


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::get_Domain(BSTR* pText)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	try
	{
		CString string(pThis->mSettings->Domain);
		*pText = string.AllocSysString();
	}
	catch (...)
	{
		return E_OUTOFMEMORY;
	}

	return S_OK;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::put_UserName(BSTR text)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	if (pThis->mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	try
	{
		CStringA string(text);
		pThis->mSettings->Username = _strdup(string);
		if (!pThis->mSettings->Username)
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


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::get_UserName(BSTR* pText)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	try
	{
		CString string(pThis->mSettings->Username);
		*pText = string.AllocSysString();
	}
	catch (...)
	{
		return E_OUTOFMEMORY;
	}

	return S_OK;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::put_DisconnectedText(BSTR text)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::get_DisconnectedText(BSTR* text)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::put_ConnectingText(BSTR text)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::get_ConnectingText(BSTR* text)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::get_Connected(SHORT* val)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	*val = pThis->mConnectionState;

	return S_OK;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::put_DesktopWidth(LONG width)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	pThis->mSettings->DesktopWidth = width;
	return S_OK;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::get_DesktopWidth(LONG* width)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	*width = pThis->mSettings->DesktopWidth;
	return S_OK;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::put_DesktopHeight(LONG height)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	pThis->mSettings->DesktopHeight = height;
	return S_OK;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::get_DesktopHeight(LONG* height)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	*height = pThis->mSettings->DesktopHeight;
	return S_OK;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::put_StartConnected(LONG val)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::get_StartConnected(LONG* val)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::get_HorizontalScrollBarVisible(LONG* val)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	SCROLLINFO si;
	si.cbSize = sizeof(SCROLLINFO);
	pThis->GetScrollInfo(SB_HORZ, &si, SIF_PAGE | SIF_RANGE);
	*val = (si.nMax > (int)si.nPage ? TRUE : FALSE);
	return S_OK;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::get_VerticalScrollBarVisible(LONG* val)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	SCROLLINFO si;
	si.cbSize = sizeof(SCROLLINFO);
	pThis->GetScrollInfo(SB_VERT, &si, SIF_PAGE | SIF_RANGE);
	*val = (si.nMax > (int)si.nPage ? TRUE : FALSE);
	return S_OK;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::put_FullScreenTitle(BSTR text)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::get_CipherStrength(LONG* val)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::get_Version(BSTR* pText)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	WCHAR fileName[MAX_PATH];
	GetModuleFileName(AfxGetApp()->m_hInstance, fileName, MAX_PATH);
	fileName[MAX_PATH - 1] = 0;
	DWORD dummy;
	DWORD fileSize = GetFileVersionInfoSize(fileName, &dummy);
	if (fileSize == 0)
	{
		return E_FAIL;
	}

	try
	{
		CByteArray data;
		data.SetSize(fileSize);
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


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::get_SecuredSettingsEnabled(LONG* val)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	*val = TRUE;
	return S_OK;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::get_SecuredSettings(IMsTscSecuredSettings** ppSecuredSettings)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return pThis->InternalQueryInterface(&IID_IMsRdpClientSecuredSettings2, (LPVOID*)ppSecuredSettings);
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::get_AdvancedSettings(IMsTscAdvancedSettings** ppAdvSettings)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return pThis->InternalQueryInterface(&IID_IMsRdpClientAdvancedSettings8, (LPVOID*)ppAdvSettings);
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::get_Debugger(IMsTscDebug** val)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return pThis->InternalQueryInterface(&IID_IMsTscDebug, (LPVOID*)val);
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::Connect()
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	if (pThis->mContext == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (pThis->mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	pThis->FireOnConnecting();

	if (pThis->mTerminationMonitoringThread != NULL)
	{
		WaitForSingleObject(pThis->mTerminationMonitoringThread, INFINITE);
		CloseHandle(pThis->mTerminationMonitoringThread);
		pThis->mTerminationMonitoringThread = NULL;
	}

	pThis->mSettings->ParentWindowId = (UINT64)pThis->m_hWnd;
	freerdp_client_start(pThis->mContext);
	pThis->mFreeRdpThread = freerdp_client_get_thread(pThis->mContext);

	pThis->mTerminationMonitoringThread = CreateThread(NULL, 0, TerminationMonitoringThread, pThis, 0, NULL);

	return S_OK;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::Disconnect()
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	CWnd* child = pThis->GetWindow(GW_CHILD);
	if (child != NULL)
	{
		child->PostMessage(WM_CLOSE);
	}

	return S_OK;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::CreateVirtualChannels(BSTR channelNames)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::SendOnVirtualChannel(BSTR channelNames, BSTR data)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::put_ColorDepth(long pcolorDepth)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::get_ColorDepth(long *pcolorDepth)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::get_AdvancedSettings2(IMsRdpClientAdvancedSettings **ppAdvSettings)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return pThis->InternalQueryInterface(&IID_IMsRdpClientAdvancedSettings8, (LPVOID*)ppAdvSettings);
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::get_SecuredSettings2(IMsRdpClientSecuredSettings **ppSecuredSettings)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return pThis->InternalQueryInterface(&IID_IMsRdpClientSecuredSettings2, (LPVOID*)ppSecuredSettings);
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::get_ExtendedDisconnectReason(ExtendedDisconnectReasonCode *pExtendedDisconnectReason)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::put_FullScreen(VARIANT_BOOL pfFullScreen)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::get_FullScreen(VARIANT_BOOL *pfFullScreen)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::SetVirtualChannelOptions(BSTR chanName, long chanOptions)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::GetVirtualChannelOptions(BSTR chanName, long *pChanOptions)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::RequestClose(ControlCloseStatus *pCloseStatus)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::get_AdvancedSettings3(IMsRdpClientAdvancedSettings2 **ppAdvSettings)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return pThis->InternalQueryInterface(&IID_IMsRdpClientAdvancedSettings8, (LPVOID*)ppAdvSettings);
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::put_ConnectedStatusText(BSTR pConnectedStatusText)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::get_ConnectedStatusText(BSTR *pConnectedStatusText)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return E_NOTIMPL;
}

	     
STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::get_AdvancedSettings4(IMsRdpClientAdvancedSettings3 **ppAdvSettings)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return pThis->InternalQueryInterface(&IID_IMsRdpClientAdvancedSettings8, (LPVOID*)ppAdvSettings);
}

	     
STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::get_AdvancedSettings5(IMsRdpClientAdvancedSettings4 **ppAdvSettings)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return pThis->InternalQueryInterface(&IID_IMsRdpClientAdvancedSettings8, (LPVOID*)ppAdvSettings);
}

	     
STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::get_TransportSettings(IMsRdpClientTransportSettings **ppXportSet)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::get_AdvancedSettings6(IMsRdpClientAdvancedSettings5 **ppAdvSettings)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return pThis->InternalQueryInterface(&IID_IMsRdpClientAdvancedSettings8, (LPVOID*)ppAdvSettings);
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::GetErrorDescription(unsigned int disconnectReason, unsigned int ExtendedDisconnectReason, BSTR *pBstrErrorMsg)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::get_RemoteProgram(ITSRemoteProgram **ppRemoteProgram)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::get_MsRdpClientShell(IMsRdpClientShell **ppLauncher)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::get_AdvancedSettings7(IMsRdpClientAdvancedSettings6 **ppAdvSettings)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return pThis->InternalQueryInterface(&IID_IMsRdpClientAdvancedSettings8, (LPVOID*)ppAdvSettings);
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::get_TransportSettings2(IMsRdpClientTransportSettings2 **ppXportSet2)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::get_AdvancedSettings8(IMsRdpClientAdvancedSettings7 **ppAdvSettings)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return pThis->InternalQueryInterface(&IID_IMsRdpClientAdvancedSettings8, (LPVOID*)ppAdvSettings);
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::get_TransportSettings3(IMsRdpClientTransportSettings3 **ppXportSet3)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::GetStatusText(unsigned int statusCode, BSTR *pBstrStatusText)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::get_SecuredSettings3(IMsRdpClientSecuredSettings2 **ppSecuredSettings)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return pThis->InternalQueryInterface(&IID_IMsRdpClientSecuredSettings2, (LPVOID*)ppSecuredSettings);
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::get_RemoteProgram2(ITSRemoteProgram2 **ppRemoteProgram)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::SendRemoteAction(RemoteSessionActionType actionType)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::get_AdvancedSettings9(IMsRdpClientAdvancedSettings8 **ppAdvSettings)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	HRESULT result = pThis->InternalQueryInterface(&IID_IMsRdpClientAdvancedSettings8, (LPVOID*)ppAdvSettings);
	return result;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::Reconnect(unsigned long ulWidth, unsigned long ulHeight, ControlReconnectStatus *pReconnectStatus)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return E_NOTIMPL;
}

	     
STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::get_TransportSettings4(IMsRdpClientTransportSettings4 **ppXportSet4)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::SyncSessionDisplaySettings(void)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::UpdateSessionDisplaySettings(unsigned long ulDesktopWidth, unsigned long ulDesktopHeight, unsigned long ulPhysicalWidth,
	unsigned long ulPhysicalHeight, unsigned long ulOrientation, unsigned long ulDesktopScaleFactor, unsigned long ulDeviceScaleFactor)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::attachEvent(BSTR eventName, IDispatch *callback)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClient::detachEvent(BSTR eventName, IDispatch *callback)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClient);

	return E_NOTIMPL;
}


