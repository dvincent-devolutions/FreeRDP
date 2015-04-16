// Implementation of the RDP drive interface.

#include "stdafx.h"
#include "FreeRdpActivexCtrl.h"


STDMETHODIMP_(ULONG) CFreeRdpActivexCtrl::XRdpDrive::AddRef()
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpDrive);

	return pThis->ExternalAddRef();
}


STDMETHODIMP_(ULONG) CFreeRdpActivexCtrl::XRdpDrive::Release()
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpDrive);

	return pThis->ExternalRelease();
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpDrive::QueryInterface(REFIID iid, LPVOID* ppvObj)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpDrive);

	return pThis->ExternalQueryInterface(&iid, ppvObj);
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpDrive::get_Name(BSTR *pName)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpDrive);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpDrive::put_RedirectionState(VARIANT_BOOL pvboolRedirState)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpDrive);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpDrive::get_RedirectionState(VARIANT_BOOL *pvboolRedirState)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpDrive);

	return E_NOTIMPL;
}


