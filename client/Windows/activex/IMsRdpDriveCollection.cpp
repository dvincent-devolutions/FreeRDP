// Implementation of the RDP drive interface.

#include "stdafx.h"
#include "FreeRdpCtrl.h"


//STDMETHODIMP_(ULONG) CFreeRdpCtrl::AddRef()
//{
//	//(CFreeRdpActivexCtrl, RdpDriveCollection);
//
//	return pThis->ExternalAddRef();
//}
//
//
//STDMETHODIMP_(ULONG) CFreeRdpCtrl::Release()
//{
//	//(CFreeRdpActivexCtrl, RdpDriveCollection);
//
//	return pThis->ExternalRelease();
//}
//
//
//STDMETHODIMP CFreeRdpCtrl::QueryInterface(REFIID iid, LPVOID* ppvObj)
//{
//	//(CFreeRdpActivexCtrl, RdpDriveCollection);
//
//	return pThis->ExternalQueryInterface(&iid, ppvObj);
//}


STDMETHODIMP CFreeRdpCtrl::RescanDrives(VARIANT_BOOL vboolDynRedir)
{
	//(CFreeRdpActivexCtrl, RdpDriveCollection);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_DriveByIndex(unsigned long index, IMsRdpDrive **ppDevice)
{
	//(CFreeRdpActivexCtrl, RdpDriveCollection);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_DriveCount(unsigned long *pDriveCount)
{
	//(CFreeRdpActivexCtrl, RdpDriveCollection);

	return E_NOTIMPL;
}


