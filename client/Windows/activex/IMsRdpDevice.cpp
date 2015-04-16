// Implementation of the RDP device interface.

#include "stdafx.h"
#include "FreeRdpActivexCtrl.h"


STDMETHODIMP_(ULONG) CFreeRdpActivexCtrl::XRdpDevice::AddRef()
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpDevice);

	return pThis->ExternalAddRef();
}


STDMETHODIMP_(ULONG) CFreeRdpActivexCtrl::XRdpDevice::Release()
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpDevice);

	return pThis->ExternalRelease();
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpDevice::QueryInterface(REFIID iid, LPVOID* ppvObj)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpDevice);

	return pThis->ExternalQueryInterface(&iid, ppvObj);
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpDevice::get_DeviceInstanceId(BSTR *pDevInstanceId)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpDevice);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpDevice::get_FriendlyName(BSTR *pFriendlyName)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpDevice);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpDevice::get_DeviceDescription(BSTR *pDeviceDescription)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpDevice);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpDevice::put_RedirectionState(VARIANT_BOOL pvboolRedirState)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpDevice);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpDevice::get_RedirectionState(VARIANT_BOOL *pvboolRedirState)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpDevice);

	return E_NOTIMPL;
}


