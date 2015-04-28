// Implementation of the main RDP client interface.

#include "stdafx.h"
#include "FreeRdpCtrl.h"


//STDMETHODIMP_(ULONG) CFreeRdpCtrl::AddRef()
//{
//	//(CFreeRdpActivexCtrl, TscDebug);
//
//	return pThis->ExternalAddRef();
//}
//
//
//STDMETHODIMP_(ULONG) CFreeRdpCtrl::Release()
//{
//	//(CFreeRdpActivexCtrl, TscDebug);
//
//	return pThis->ExternalRelease();
//}
//
//
//STDMETHODIMP CFreeRdpCtrl::QueryInterface(REFIID iid, LPVOID* ppvObj)
//{
//	//(CFreeRdpActivexCtrl, TscDebug);
//
//	return pThis->ExternalQueryInterface(&iid, ppvObj);
//}
//
//
//STDMETHODIMP CFreeRdpCtrl::GetTypeInfoCount(UINT* pCount)
//{
//	//(CFreeRdpActivexCtrl, TscDebug);
//
//	*pCount = 1;
//
//	return S_OK;
//}
//
//
//STDMETHODIMP CFreeRdpCtrl::GetTypeInfo(UINT info, LCID lcid, ITypeInfo** pInfo)
//{
//	//(CFreeRdpActivexCtrl, TscDebug);
//
//	if (info != 0)
//	{
//		return DISP_E_BADINDEX;
//	}
//
//	if (pThis->mTscDebugTypeInfo == NULL)
//	{
//		HRESULT result = pThis->GetTypeInfoOfGuid(lcid, IID_IMsTscDebug, &pThis->mTscDebugTypeInfo);
//		if (FAILED(result))
//		{
//			pThis->mTscDebugTypeInfo = NULL;
//			return result;
//		}
//	}
//	pThis->mTscDebugTypeInfo->AddRef();
//	*pInfo = pThis->mTscDebugTypeInfo;
//
//	return S_OK;
//}
//
//
//STDMETHODIMP CFreeRdpCtrl::GetIDsOfNames(REFIID riid, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgdispid)
//{
//	//(CFreeRdpActivexCtrl, TscDebug);
//
//	if (pThis->mTscDebugTypeInfo == NULL)
//	{
//		return E_FAIL;
//	}
//
//	return DispGetIDsOfNames(pThis->mTscDebugTypeInfo, rgszNames, cNames, rgdispid);
//}
//
//
//STDMETHODIMP CFreeRdpCtrl::Invoke(DISPID dispid, REFIID riid, LCID lcid, WORD flags, DISPPARAMS* pParams, VARIANT* pResult, EXCEPINFO* pExcep, UINT* pErr)
//{
//	//(CFreeRdpActivexCtrl, TscDebug);
//
//	if (pThis->mTscDebugTypeInfo == NULL)
//	{
//		return E_FAIL;
//	}
//
//	return DispInvoke(this, pThis->mTscDebugTypeInfo, dispid, flags, pParams, pResult, pExcep, pErr);
//}


STDMETHODIMP CFreeRdpCtrl::put_HatchBitmapPDU(long phatchBitmapPDU)
{
	//(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_HatchBitmapPDU(long *phatchBitmapPDU)
{
	//(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_HatchSSBOrder(long phatchSSBOrder)
{
	//(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_HatchSSBOrder(long *phatchSSBOrder)
{
	//(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_HatchMembltOrder(long phatchMembltOrder)
{
	//(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_HatchMembltOrder(long *phatchMembltOrder)
{
	//(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_HatchIndexPDU(long phatchIndexPDU)
{
	//(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_HatchIndexPDU(long *phatchIndexPDU)
{
	//(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_LabelMemblt(long plabelMemblt)
{
	//(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_LabelMemblt(long *plabelMemblt)
{
	//(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_BitmapCacheMonitor(long pbitmapCacheMonitor)
{
	//(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_BitmapCacheMonitor(long *pbitmapCacheMonitor)
{
	//(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_MallocFailuresPercent(long pmallocFailuresPercent)
{
	//(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_MallocFailuresPercent(long *pmallocFailuresPercent)
{
	//(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_MallocHugeFailuresPercent(long pmallocHugeFailuresPercent)
{
	//(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_MallocHugeFailuresPercent(long *pmallocHugeFailuresPercent)
{
	//(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_NetThroughput(long NetThroughput)
{
	//(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_NetThroughput(long *NetThroughput)
{
	//(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_CLXCmdLine(BSTR pCLXCmdLine)
{
	//(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_CLXCmdLine(BSTR *pCLXCmdLine)
{
	//(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_CLXDll(BSTR pCLXDll)
{
	//(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_CLXDll(BSTR *pCLXDll)
{
	//(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_RemoteProgramsHatchVisibleRegion(long pcbHatch)
{
	//(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_RemoteProgramsHatchVisibleRegion(long *pcbHatch)
{
	//(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_RemoteProgramsHatchVisibleNoDataRegion(long pcbHatch)
{
	//(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_RemoteProgramsHatchVisibleNoDataRegion(long *pcbHatch)
{
	//(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_RemoteProgramsHatchNonVisibleRegion(long pcbHatch)
{
	//(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_RemoteProgramsHatchNonVisibleRegion(long *pcbHatch)
{
	//(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_RemoteProgramsHatchWindow(long pcbHatch)
{
	//(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_RemoteProgramsHatchWindow(long *pcbHatch)
{
	//(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_RemoteProgramsStayConnectOnBadCaps(long pcbStayConnected)
{
	//(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_RemoteProgramsStayConnectOnBadCaps(long *pcbStayConnected)
{
	//(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_ControlType(unsigned int *pControlType)
{
	//(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_DecodeGfx(VARIANT_BOOL rhs)
{
	//(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


