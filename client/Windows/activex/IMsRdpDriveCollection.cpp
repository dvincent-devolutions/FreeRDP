// Implementation of the RDP drive interface.

#include "stdafx.h"
#include "FreeRdpActivexCtrl.h"


STDMETHODIMP_(ULONG) CFreeRdpActivexCtrl::XRdpDriveCollection::AddRef()
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpDriveCollection);

	return pThis->ExternalAddRef();
}


STDMETHODIMP_(ULONG) CFreeRdpActivexCtrl::XRdpDriveCollection::Release()
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpDriveCollection);

	return pThis->ExternalRelease();
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpDriveCollection::QueryInterface(REFIID iid, LPVOID* ppvObj)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpDriveCollection);

	return pThis->ExternalQueryInterface(&iid, ppvObj);
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpDriveCollection::RescanDrives(VARIANT_BOOL vboolDynRedir)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpDriveCollection);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpDriveCollection::get_DriveByIndex(unsigned long index, IMsRdpDrive **ppDevice)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpDriveCollection);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpDriveCollection::get_DriveCount(unsigned long *pDriveCount)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpDriveCollection);

	return E_NOTIMPL;
}


