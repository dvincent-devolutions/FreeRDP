// Implementation of the RDP device interface.

#include "stdafx.h"
#include "IMsRdpDevice.h"


STDMETHODIMP CFreeRdpDevice::get_DeviceInstanceId(BSTR *pDevInstanceId)
{
	//(CFreeRdpActivexCtrl, RdpDevice);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpDevice::get_FriendlyName(BSTR *pFriendlyName)
{
	//(CFreeRdpActivexCtrl, RdpDevice);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpDevice::get_DeviceDescription(BSTR *pDeviceDescription)
{
	//(CFreeRdpActivexCtrl, RdpDevice);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpDevice::put_RedirectionState(VARIANT_BOOL pvboolRedirState)
{
	//(CFreeRdpActivexCtrl, RdpDevice);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpDevice::get_RedirectionState(VARIANT_BOOL *pvboolRedirState)
{
	//(CFreeRdpActivexCtrl, RdpDevice);

	return E_NOTIMPL;
}


