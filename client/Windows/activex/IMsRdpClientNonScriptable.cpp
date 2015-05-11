// FreeRdpActivexCtrl.cpp : Implementation of the main RDP client non scriptable interface.

#include "stdafx.h"
#include "FreeRdpCtrl.h"


//STDMETHODIMP_(ULONG) CFreeRdpCtrl::AddRef()
//{
//	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);
//
//	return pThis->ExternalAddRef();
//}
//
//
//STDMETHODIMP_(ULONG) CFreeRdpCtrl::Release()
//{
//	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);
//
//	return pThis->ExternalRelease();
//}
//
//
//STDMETHODIMP CFreeRdpCtrl::QueryInterface(REFIID iid, LPVOID* ppvObj)
//{
//	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);
//
//	return pThis->ExternalQueryInterface(&iid, ppvObj);
//}


//STDMETHODIMP CFreeRdpCtrl::put_ClearTextPassword(BSTR rhs)
//{
//	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);
//
//	return pThis->SetClearTextPassword(rhs);
//}


STDMETHODIMP CFreeRdpCtrl::put_PortablePassword(BSTR pPortablePass)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_PortablePassword(BSTR *pPortablePass)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_PortableSalt(BSTR pPortableSalt)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_PortableSalt(BSTR *pPortableSalt)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_BinaryPassword(BSTR pBinaryPassword)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_BinaryPassword(BSTR *pBinaryPassword)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_BinarySalt(BSTR pSalt)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_BinarySalt(BSTR *pSalt)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::ResetPassword(void)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::NotifyRedirectDeviceChange(UINT_PTR wParam, LONG_PTR lParam)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::SendKeys(long numKeys, VARIANT_BOOL *pbArrayKeyUp, long *plKeyData)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_UIParentWindowHandle(wireHWND phwndUIParentWindowHandle)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_UIParentWindowHandle(wireHWND *phwndUIParentWindowHandle)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
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
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_PromptForCredentials(VARIANT_BOOL *pfPrompt)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
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
	*pfNegotiate = (mSettings->NegotiateSecurityLayer == FALSE ? FALSE : -1);
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_EnableCredSspSupport(VARIANT_BOOL pfEnableSupport)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_EnableCredSspSupport(VARIANT_BOOL *pfEnableSupport)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_RedirectDynamicDrives(VARIANT_BOOL pfRedirectDynamicDrives)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_RedirectDynamicDrives(VARIANT_BOOL *pfRedirectDynamicDrives)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
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
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_DriveCollection(IMsRdpDriveCollection **ppDeviceCollection)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
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
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_ConnectionBarText(BSTR *pConnectionBarText)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
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
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_PromptForCredsOnClient(VARIANT_BOOL *pfPromptForCredsOnClient)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
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
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_WarnAboutDirectXRedirection(VARIANT_BOOL *pfWarn)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_AllowPromptingForCredentials(VARIANT_BOOL pfAllow)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_AllowPromptingForCredentials(VARIANT_BOOL *pfAllow)
{
	//(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


