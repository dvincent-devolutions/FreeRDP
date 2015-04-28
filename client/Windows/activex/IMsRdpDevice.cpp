// Implementation of the RDP device interface.

#include "stdafx.h"
#include "FreeRdpCtrl.h"


//STDMETHODIMP_(ULONG) CFreeRdpCtrl::AddRef()
//{
//	//(CFreeRdpActivexCtrl, RdpDevice);
//
//	return pThis->ExternalAddRef();
//}
//
//
//STDMETHODIMP_(ULONG) CFreeRdpCtrl::Release()
//{
//	//(CFreeRdpActivexCtrl, RdpDevice);
//
//	return pThis->ExternalRelease();
//}
//
//
//STDMETHODIMP CFreeRdpCtrl::QueryInterface(REFIID iid, LPVOID* ppvObj)
//{
//	//(CFreeRdpActivexCtrl, RdpDevice);
//
//	return pThis->ExternalQueryInterface(&iid, ppvObj);
//}


STDMETHODIMP CFreeRdpCtrl::get_DeviceInstanceId(BSTR *pDevInstanceId)
{
	//(CFreeRdpActivexCtrl, RdpDevice);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_FriendlyName(BSTR *pFriendlyName)
{
	//(CFreeRdpActivexCtrl, RdpDevice);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_DeviceDescription(BSTR *pDeviceDescription)
{
	//(CFreeRdpActivexCtrl, RdpDevice);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_RedirectionState(VARIANT_BOOL pvboolRedirState)
{
	//(CFreeRdpActivexCtrl, RdpDevice);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_RedirectionState(VARIANT_BOOL *pvboolRedirState)
{
	//(CFreeRdpActivexCtrl, RdpDevice);

	return E_NOTIMPL;
}


