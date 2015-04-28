// Implementation of the RDP device interface.

#include "stdafx.h"
#include "FreeRdpCtrl.h"


//STDMETHODIMP_(ULONG) CFreeRdpCtrl::AddRef()
//{
//	//(CFreeRdpActivexCtrl, RdpDeviceCollection);
//
//	return pThis->ExternalAddRef();
//}
//
//
//STDMETHODIMP_(ULONG) CFreeRdpCtrl::Release()
//{
//	//(CFreeRdpActivexCtrl, RdpDeviceCollection);
//
//	return pThis->ExternalRelease();
//}
//
//
//STDMETHODIMP CFreeRdpCtrl::QueryInterface(REFIID iid, LPVOID* ppvObj)
//{
//	//(CFreeRdpActivexCtrl, RdpDeviceCollection);
//
//	return pThis->ExternalQueryInterface(&iid, ppvObj);
//}


STDMETHODIMP CFreeRdpCtrl::RescanDevices(VARIANT_BOOL vboolDynRedir)
{
	//(CFreeRdpActivexCtrl, RdpDeviceCollection);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_DeviceByIndex(unsigned long index, IMsRdpDevice **ppDevice)
{
	//(CFreeRdpActivexCtrl, RdpDeviceCollection);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_DeviceById(BSTR devInstanceId, IMsRdpDevice **ppDevice)
{
	//(CFreeRdpActivexCtrl, RdpDeviceCollection);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_DeviceCount(unsigned long *pDeviceCount)
{
	//(CFreeRdpActivexCtrl, RdpDeviceCollection);

	return E_NOTIMPL;
}


