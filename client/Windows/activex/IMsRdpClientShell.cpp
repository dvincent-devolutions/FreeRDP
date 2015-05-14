// Implementation of the RDP client shell interface.

#include "stdafx.h"
#include "FreeRdpCtrl.h"


STDMETHODIMP CFreeRdpCtrl::Launch(void)
{
	//(CFreeRdpActivexCtrl, RdpClientShell);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_RdpFileContents(BSTR pszRdpFile)
{
	//(CFreeRdpActivexCtrl, RdpClientShell);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_RdpFileContents(BSTR *pszRdpFile)
{
	//(CFreeRdpActivexCtrl, RdpClientShell);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::SetRdpProperty(BSTR szProperty, VARIANT Value)
{
	//(CFreeRdpActivexCtrl, RdpClientShell);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::GetRdpProperty(BSTR szProperty, VARIANT *pValue)
{
	//(CFreeRdpActivexCtrl, RdpClientShell);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_IsRemoteProgramClientInstalled(VARIANT_BOOL *pbClientInstalled)
{
	//(CFreeRdpActivexCtrl, RdpClientShell);

	return E_NOTIMPL;
}


//STDMETHODIMP CFreeRdpCtrl::put_PublicMode(VARIANT_BOOL pfPublicMode)
//{
//	//(CFreeRdpActivexCtrl, RdpClientShell);
//
//	return E_NOTIMPL;
//}


//STDMETHODIMP CFreeRdpCtrl::get_PublicMode(VARIANT_BOOL *pfPublicMode)
//{
//	//(CFreeRdpActivexCtrl, RdpClientShell);
//
//	return E_NOTIMPL;
//}


STDMETHODIMP CFreeRdpCtrl::ShowTrustedSitesManagementDialog(void)
{
	//(CFreeRdpActivexCtrl, RdpClientShell);

	return E_NOTIMPL;
}


