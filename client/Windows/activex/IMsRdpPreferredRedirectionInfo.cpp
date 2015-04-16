// FreeRdpActivexCtrl.cpp : Implementation of the main RDP client non scriptable interface.

#include "stdafx.h"
#include "FreeRdpActivexCtrl.h"


STDMETHODIMP_(ULONG) CFreeRdpActivexCtrl::XRdpPreferredRedirectionInfo::AddRef()
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpPreferredRedirectionInfo);

	return pThis->ExternalAddRef();
}


STDMETHODIMP_(ULONG) CFreeRdpActivexCtrl::XRdpPreferredRedirectionInfo::Release()
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpPreferredRedirectionInfo);

	return pThis->ExternalRelease();
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpPreferredRedirectionInfo::QueryInterface(REFIID iid, LPVOID* ppvObj)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpPreferredRedirectionInfo);

	return pThis->ExternalQueryInterface(&iid, ppvObj);
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpPreferredRedirectionInfo::put_UseRedirectionServerName(VARIANT_BOOL pVal)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpPreferredRedirectionInfo);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpPreferredRedirectionInfo::get_UseRedirectionServerName(VARIANT_BOOL* pVal)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpPreferredRedirectionInfo);

	return E_NOTIMPL;
}


