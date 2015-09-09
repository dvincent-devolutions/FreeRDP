// FreeRdpActivexCtrl.cpp : Implementation of the main RDP client non scriptable interface.

#include "stdafx.h"
#include "FreeRdpCtrl.h"


STDMETHODIMP CFreeRdpCtrl::put_PortablePassword(BSTR pPortablePass)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::get_PortablePassword(BSTR *pPortablePass)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::put_PortableSalt(BSTR pPortableSalt)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::get_PortableSalt(BSTR *pPortableSalt)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::put_BinaryPassword(BSTR pBinaryPassword)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::get_BinaryPassword(BSTR *pBinaryPassword)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::put_BinarySalt(BSTR pSalt)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::get_BinarySalt(BSTR *pSalt)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::ResetPassword(void)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	free(mSettings->Password);
	mSettings->Password = NULL;
	free(mSettings->GatewayPassword);
	mSettings->GatewayPassword = NULL;

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::NotifyRedirectDeviceChange(UINT_PTR wParam, LONG_PTR lParam)
{
	// Device change is already intercepted by FreeRDP threads.
	return S_OK;
}

STDMETHODIMP CFreeRdpCtrl::SendKeys(long numKeys, VARIANT_BOOL *pbArrayKeyUp, long *plKeyData)
{
	if ((HWND)mFreeRdpWindow == NULL)
	{
		return E_FAIL;
	}

	for (long i = 0; i < numKeys; i++)
	{
		UINT msg = (pbArrayKeyUp[i] == FALSE ? WM_KEYDOWN : WM_KEYUP);
		UINT vkCode = MapVirtualKey(plKeyData[i], MAPVK_VSC_TO_VK);
		DWORD rdp_scancode = MAKE_RDP_SCANCODE((BYTE)plKeyData[i], 0);
		freerdp_input_send_keyboard_event_ex(mContext->input, !pbArrayKeyUp[i], rdp_scancode);
		//mFreeRdpWindow.SendMessage(msg, vkCode, plKeyData[i]);
	}

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_UIParentWindowHandle(wireHWND phwndUIParentWindowHandle)
{
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_UIParentWindowHandle(wireHWND *phwndUIParentWindowHandle)
{
	*phwndUIParentWindowHandle = (wireHWND)mSettings->ParentWindowId;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_ShowRedirectionWarningDialog(VARIANT_BOOL pfShowRdrDlg)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_ShowRedirectionWarningDialog(VARIANT_BOOL *pfShowRdrDlg)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_PromptForCredentials(VARIANT_BOOL pfPrompt)
{
	if (mContext == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	mContext->instance->Authenticate = (pfPrompt == VARIANT_FALSE ? NULL : wf_authenticate);
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_PromptForCredentials(VARIANT_BOOL *pfPrompt)
{
	if (mContext == NULL)
	{
		return E_OUTOFMEMORY;
	}

	*pfPrompt = (mContext->instance->Authenticate == NULL ? VARIANT_FALSE : VARIANT_TRUE);
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_NegotiateSecurityLayer(VARIANT_BOOL pfNegotiate)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	mSettings->NegotiateSecurityLayer = (pfNegotiate == FALSE ? FALSE : TRUE);

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_NegotiateSecurityLayer(VARIANT_BOOL *pfNegotiate)
{
	*pfNegotiate = (mSettings->NegotiateSecurityLayer == FALSE ? VARIANT_FALSE : VARIANT_TRUE);
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_EnableCredSspSupport(VARIANT_BOOL pfEnableSupport)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	mSettings->NlaSecurity = (pfEnableSupport == VARIANT_FALSE ? FALSE : TRUE);

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_EnableCredSspSupport(VARIANT_BOOL *pfEnableSupport)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}

	*pfEnableSupport = (mSettings->NlaSecurity == FALSE ? VARIANT_FALSE : VARIANT_TRUE);
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_RedirectDynamicDrives(VARIANT_BOOL pfRedirectDynamicDrives)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::get_RedirectDynamicDrives(VARIANT_BOOL *pfRedirectDynamicDrives)
{
	*pfRedirectDynamicDrives = VARIANT_TRUE;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_RedirectDynamicDevices(VARIANT_BOOL pfRedirectDynamicDevices)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_RedirectDynamicDevices(VARIANT_BOOL *pfRedirectDynamicDevices)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_DeviceCollection(IMsRdpDeviceCollection **ppDeviceCollection)
{
	*ppDeviceCollection = (IMsRdpDeviceCollection*)this;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_DriveCollection(IMsRdpDriveCollection **ppDeviceCollection)
{
	*ppDeviceCollection = (IMsRdpDriveCollection*)this;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_WarnAboutSendingCredentials(VARIANT_BOOL pfWarn)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_WarnAboutSendingCredentials(VARIANT_BOOL *pfWarn)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_WarnAboutClipboardRedirection(VARIANT_BOOL pfWarn)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_WarnAboutClipboardRedirection(VARIANT_BOOL *pfWarn)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_ConnectionBarText(BSTR pConnectionBarText)
{
	return put_FullScreenTitle(pConnectionBarText);
}


STDMETHODIMP CFreeRdpCtrl::get_ConnectionBarText(BSTR *pConnectionBarText)
{
	try
	{
		CComBSTR string(mFullScreenTitle);
		string.CopyTo(pConnectionBarText);
	}
	catch (...)
	{
		return E_OUTOFMEMORY;
	}

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_RedirectionWarningType(RedirectionWarningType pWrnType)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_RedirectionWarningType(RedirectionWarningType *pWrnType)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_MarkRdpSettingsSecure(VARIANT_BOOL pfRdpSecure)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_MarkRdpSettingsSecure(VARIANT_BOOL *pfRdpSecure)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_PublisherCertificateChain(VARIANT *pVarCert)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_PublisherCertificateChain(VARIANT *pVarCert)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_WarnAboutPrinterRedirection(VARIANT_BOOL pfWarn)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_WarnAboutPrinterRedirection(VARIANT_BOOL *pfWarn)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_AllowCredentialSaving(VARIANT_BOOL pfAllowSave)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_AllowCredentialSaving(VARIANT_BOOL *pfAllowSave)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_PromptForCredsOnClient(VARIANT_BOOL pfPromptForCredsOnClient)
{
	return put_PromptForCredentials(pfPromptForCredsOnClient);
}


STDMETHODIMP CFreeRdpCtrl::get_PromptForCredsOnClient(VARIANT_BOOL *pfPromptForCredsOnClient)
{
	return get_PromptForCredentials(pfPromptForCredsOnClient);
}


STDMETHODIMP CFreeRdpCtrl::put_LaunchedViaClientShellInterface(VARIANT_BOOL pfLaunchedViaClientShellInterface)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_LaunchedViaClientShellInterface(VARIANT_BOOL *pfLaunchedViaClientShellInterface)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_TrustedZoneSite(VARIANT_BOOL pfIsTrustedZone)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_TrustedZoneSite(VARIANT_BOOL *pfIsTrustedZone)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_UseMultimon(VARIANT_BOOL pfUseMultimon)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_UseMultimon(VARIANT_BOOL *pfUseMultimon)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_RemoteMonitorCount(unsigned long *pcRemoteMonitors)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::GetRemoteMonitorsBoundingBox(long *pLeft, long *pTop, long *pRight, long *pBottom)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_RemoteMonitorLayoutMatchesLocal(VARIANT_BOOL *pfRemoteMatchesLocal)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_DisableConnectionBar(VARIANT_BOOL rhs)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_DisableRemoteAppCapsCheck(VARIANT_BOOL pfDisableRemoteAppCapsCheck)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_DisableRemoteAppCapsCheck(VARIANT_BOOL *pfDisableRemoteAppCapsCheck)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_WarnAboutDirectXRedirection(VARIANT_BOOL pfWarn)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::get_WarnAboutDirectXRedirection(VARIANT_BOOL *pfWarn)
{
	*pfWarn = VARIANT_FALSE;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_AllowPromptingForCredentials(VARIANT_BOOL pfAllow)
{
	return put_PromptForCredentials(pfAllow);
}


STDMETHODIMP CFreeRdpCtrl::get_AllowPromptingForCredentials(VARIANT_BOOL *pfAllow)
{
	return get_PromptForCredentials(pfAllow);
}


