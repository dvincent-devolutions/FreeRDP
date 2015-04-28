// FreeRdpActivexCtrl.cpp : Implementation of the main RDP client non scriptable interface.

#include "stdafx.h"
#include "FreeRdpCtrl.h"


//STDMETHODIMP_(ULONG) CFreeRdpCtrl::AddRef()
//{
//	//(CFreeRdpActivexCtrl, RdpPreferredRedirectionInfo);
//
//	return pThis->ExternalAddRef();
//}
//
//
//STDMETHODIMP_(ULONG) CFreeRdpCtrl::Release()
//{
//	//(CFreeRdpActivexCtrl, RdpPreferredRedirectionInfo);
//
//	return pThis->ExternalRelease();
//}
//
//
//STDMETHODIMP CFreeRdpCtrl::QueryInterface(REFIID iid, LPVOID* ppvObj)
//{
//	//(CFreeRdpActivexCtrl, RdpPreferredRedirectionInfo);
//
//	return pThis->ExternalQueryInterface(&iid, ppvObj);
//}


STDMETHODIMP CFreeRdpCtrl::put_UseRedirectionServerName(VARIANT_BOOL pVal)
{
	//(CFreeRdpActivexCtrl, RdpPreferredRedirectionInfo);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_UseRedirectionServerName(VARIANT_BOOL* pVal)
{
	//(CFreeRdpActivexCtrl, RdpPreferredRedirectionInfo);

	return E_NOTIMPL;
}


