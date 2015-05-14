// Implementation of the RDP device interface.

#include "stdafx.h"
#include "FreeRdpCtrl.h"
#include "IMsRdpDevice.h"


STDMETHODIMP CFreeRdpCtrl::RescanDevices(VARIANT_BOOL vboolDynRedir)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_DeviceByIndex(unsigned long index, IMsRdpDevice **ppDevice)
{
	//if (mSettings == NULL)
	//{
	//	return E_OUTOFMEMORY;
	//}
	//if (index < 0 || index >= mSettings->DeviceCount)
	//{
	//	return E_INVALIDARG;
	//}

	//CFreeRdpDevice* device = new CComObject<CFreeRdpDevice>;
	////device->LinkDevice(*this, index);
	//*ppDevice = (IMsRdpDevice*)device;
	//return S_OK;
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_DeviceById(BSTR devInstanceId, IMsRdpDevice **ppDevice)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_DeviceCount(unsigned long *pDeviceCount)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}

	*pDeviceCount = mSettings->DeviceCount;
	return S_OK;
}


