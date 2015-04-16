// Implementation of the RDP device interface.

#include "stdafx.h"
#include "FreeRdpActivexCtrl.h"


STDMETHODIMP_(ULONG) CFreeRdpActivexCtrl::XRdpDeviceCollection::AddRef()
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpDeviceCollection);

	return pThis->ExternalAddRef();
}


STDMETHODIMP_(ULONG) CFreeRdpActivexCtrl::XRdpDeviceCollection::Release()
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpDeviceCollection);

	return pThis->ExternalRelease();
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpDeviceCollection::QueryInterface(REFIID iid, LPVOID* ppvObj)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpDeviceCollection);

	return pThis->ExternalQueryInterface(&iid, ppvObj);
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpDeviceCollection::RescanDevices(VARIANT_BOOL vboolDynRedir)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpDeviceCollection);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpDeviceCollection::get_DeviceByIndex(unsigned long index, IMsRdpDevice **ppDevice)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpDeviceCollection);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpDeviceCollection::get_DeviceById(BSTR devInstanceId, IMsRdpDevice **ppDevice)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpDeviceCollection);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpDeviceCollection::get_DeviceCount(unsigned long *pDeviceCount)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpDeviceCollection);

	return E_NOTIMPL;
}


