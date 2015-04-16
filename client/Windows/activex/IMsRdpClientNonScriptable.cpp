// FreeRdpActivexCtrl.cpp : Implementation of the main RDP client non scriptable interface.

#include "stdafx.h"
#include "FreeRdpActivexCtrl.h"


STDMETHODIMP_(ULONG) CFreeRdpActivexCtrl::XRdpClientNonScriptable::AddRef()
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return pThis->ExternalAddRef();
}


STDMETHODIMP_(ULONG) CFreeRdpActivexCtrl::XRdpClientNonScriptable::Release()
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return pThis->ExternalRelease();
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::QueryInterface(REFIID iid, LPVOID* ppvObj)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return pThis->ExternalQueryInterface(&iid, ppvObj);
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::put_ClearTextPassword(BSTR rhs)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return pThis->SetClearTextPassword(rhs);
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::put_PortablePassword(BSTR pPortablePass)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::get_PortablePassword(BSTR *pPortablePass)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::put_PortableSalt(BSTR pPortableSalt)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::get_PortableSalt(BSTR *pPortableSalt)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::put_BinaryPassword(BSTR pBinaryPassword)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::get_BinaryPassword(BSTR *pBinaryPassword)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::put_BinarySalt(BSTR pSalt)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::get_BinarySalt(BSTR *pSalt)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::ResetPassword(void)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::NotifyRedirectDeviceChange(UINT_PTR wParam, LONG_PTR lParam)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::SendKeys(long numKeys, VARIANT_BOOL *pbArrayKeyUp, long *plKeyData)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::put_UIParentWindowHandle(wireHWND phwndUIParentWindowHandle)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::get_UIParentWindowHandle(wireHWND *phwndUIParentWindowHandle)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::put_ShowRedirectionWarningDialog(VARIANT_BOOL pfShowRdrDlg)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::get_ShowRedirectionWarningDialog(VARIANT_BOOL *pfShowRdrDlg)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::put_PromptForCredentials(VARIANT_BOOL pfPrompt)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::get_PromptForCredentials(VARIANT_BOOL *pfPrompt)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::put_NegotiateSecurityLayer(VARIANT_BOOL pfNegotiate)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::get_NegotiateSecurityLayer(VARIANT_BOOL *pfNegotiate)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::put_EnableCredSspSupport(VARIANT_BOOL pfEnableSupport)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::get_EnableCredSspSupport(VARIANT_BOOL *pfEnableSupport)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::put_RedirectDynamicDrives(VARIANT_BOOL pfRedirectDynamicDrives)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::get_RedirectDynamicDrives(VARIANT_BOOL *pfRedirectDynamicDrives)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::put_RedirectDynamicDevices(VARIANT_BOOL pfRedirectDynamicDevices)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::get_RedirectDynamicDevices(VARIANT_BOOL *pfRedirectDynamicDevices)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::get_DeviceCollection(IMsRdpDeviceCollection **ppDeviceCollection)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::get_DriveCollection(IMsRdpDriveCollection **ppDeviceCollection)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::put_WarnAboutSendingCredentials(VARIANT_BOOL pfWarn)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::get_WarnAboutSendingCredentials(VARIANT_BOOL *pfWarn)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::put_WarnAboutClipboardRedirection(VARIANT_BOOL pfWarn)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::get_WarnAboutClipboardRedirection(VARIANT_BOOL *pfWarn)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::put_ConnectionBarText(BSTR pConnectionBarText)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::get_ConnectionBarText(BSTR *pConnectionBarText)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::put_RedirectionWarningType(RedirectionWarningType pWrnType)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::get_RedirectionWarningType(RedirectionWarningType *pWrnType)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::put_MarkRdpSettingsSecure(VARIANT_BOOL pfRdpSecure)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::get_MarkRdpSettingsSecure(VARIANT_BOOL *pfRdpSecure)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::put_PublisherCertificateChain(VARIANT *pVarCert)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::get_PublisherCertificateChain(VARIANT *pVarCert)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::put_WarnAboutPrinterRedirection(VARIANT_BOOL pfWarn)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::get_WarnAboutPrinterRedirection(VARIANT_BOOL *pfWarn)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::put_AllowCredentialSaving(VARIANT_BOOL pfAllowSave)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::get_AllowCredentialSaving(VARIANT_BOOL *pfAllowSave)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::put_PromptForCredsOnClient(VARIANT_BOOL pfPromptForCredsOnClient)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::get_PromptForCredsOnClient(VARIANT_BOOL *pfPromptForCredsOnClient)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::put_LaunchedViaClientShellInterface(VARIANT_BOOL pfLaunchedViaClientShellInterface)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::get_LaunchedViaClientShellInterface(VARIANT_BOOL *pfLaunchedViaClientShellInterface)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::put_TrustedZoneSite(VARIANT_BOOL pfIsTrustedZone)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::get_TrustedZoneSite(VARIANT_BOOL *pfIsTrustedZone)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::put_UseMultimon(VARIANT_BOOL pfUseMultimon)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::get_UseMultimon(VARIANT_BOOL *pfUseMultimon)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::get_RemoteMonitorCount(unsigned long *pcRemoteMonitors)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::GetRemoteMonitorsBoundingBox(long *pLeft, long *pTop, long *pRight, long *pBottom)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::get_RemoteMonitorLayoutMatchesLocal(VARIANT_BOOL *pfRemoteMatchesLocal)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::put_DisableConnectionBar(VARIANT_BOOL rhs)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::put_DisableRemoteAppCapsCheck(VARIANT_BOOL pfDisableRemoteAppCapsCheck)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::get_DisableRemoteAppCapsCheck(VARIANT_BOOL *pfDisableRemoteAppCapsCheck)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::put_WarnAboutDirectXRedirection(VARIANT_BOOL pfWarn)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::get_WarnAboutDirectXRedirection(VARIANT_BOOL *pfWarn)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::put_AllowPromptingForCredentials(VARIANT_BOOL pfAllow)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientNonScriptable::get_AllowPromptingForCredentials(VARIANT_BOOL *pfAllow)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientNonScriptable);

	return E_NOTIMPL;
}


