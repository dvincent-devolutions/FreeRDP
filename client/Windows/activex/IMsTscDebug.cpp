// Implementation of the main RDP client interface.

#include "stdafx.h"
#include "FreeRdpActivexCtrl.h"


STDMETHODIMP_(ULONG) CFreeRdpActivexCtrl::XTscDebug::AddRef()
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	return pThis->ExternalAddRef();
}


STDMETHODIMP_(ULONG) CFreeRdpActivexCtrl::XTscDebug::Release()
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	return pThis->ExternalRelease();
}


STDMETHODIMP CFreeRdpActivexCtrl::XTscDebug::QueryInterface(REFIID iid, LPVOID* ppvObj)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	return pThis->ExternalQueryInterface(&iid, ppvObj);
}


STDMETHODIMP CFreeRdpActivexCtrl::XTscDebug::GetTypeInfoCount(UINT* pCount)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	*pCount = 1;

	return S_OK;
}


STDMETHODIMP CFreeRdpActivexCtrl::XTscDebug::GetTypeInfo(UINT info, LCID lcid, ITypeInfo** pInfo)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	if (info != 0)
	{
		return DISP_E_BADINDEX;
	}

	if (pThis->mTscDebugTypeInfo == NULL)
	{
		HRESULT result = pThis->GetTypeInfoOfGuid(lcid, IID_IMsTscDebug, &pThis->mTscDebugTypeInfo);
		if (FAILED(result))
		{
			pThis->mTscDebugTypeInfo = NULL;
			return result;
		}
	}
	pThis->mTscDebugTypeInfo->AddRef();
	*pInfo = pThis->mTscDebugTypeInfo;

	return S_OK;
}


STDMETHODIMP CFreeRdpActivexCtrl::XTscDebug::GetIDsOfNames(REFIID riid, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgdispid)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	if (pThis->mTscDebugTypeInfo == NULL)
	{
		return E_FAIL;
	}

	return DispGetIDsOfNames(pThis->mTscDebugTypeInfo, rgszNames, cNames, rgdispid);
}


STDMETHODIMP CFreeRdpActivexCtrl::XTscDebug::Invoke(DISPID dispid, REFIID riid, LCID lcid, WORD flags, DISPPARAMS* pParams, VARIANT* pResult, EXCEPINFO* pExcep, UINT* pErr)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	if (pThis->mTscDebugTypeInfo == NULL)
	{
		return E_FAIL;
	}

	return DispInvoke(this, pThis->mTscDebugTypeInfo, dispid, flags, pParams, pResult, pExcep, pErr);
}


STDMETHODIMP CFreeRdpActivexCtrl::XTscDebug::put_HatchBitmapPDU(long phatchBitmapPDU)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XTscDebug::get_HatchBitmapPDU(long *phatchBitmapPDU)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XTscDebug::put_HatchSSBOrder(long phatchSSBOrder)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XTscDebug::get_HatchSSBOrder(long *phatchSSBOrder)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XTscDebug::put_HatchMembltOrder(long phatchMembltOrder)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XTscDebug::get_HatchMembltOrder(long *phatchMembltOrder)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XTscDebug::put_HatchIndexPDU(long phatchIndexPDU)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XTscDebug::get_HatchIndexPDU(long *phatchIndexPDU)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XTscDebug::put_LabelMemblt(long plabelMemblt)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XTscDebug::get_LabelMemblt(long *plabelMemblt)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XTscDebug::put_BitmapCacheMonitor(long pbitmapCacheMonitor)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XTscDebug::get_BitmapCacheMonitor(long *pbitmapCacheMonitor)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XTscDebug::put_MallocFailuresPercent(long pmallocFailuresPercent)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XTscDebug::get_MallocFailuresPercent(long *pmallocFailuresPercent)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XTscDebug::put_MallocHugeFailuresPercent(long pmallocHugeFailuresPercent)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XTscDebug::get_MallocHugeFailuresPercent(long *pmallocHugeFailuresPercent)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XTscDebug::put_NetThroughput(long NetThroughput)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XTscDebug::get_NetThroughput(long *NetThroughput)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XTscDebug::put_CLXCmdLine(BSTR pCLXCmdLine)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XTscDebug::get_CLXCmdLine(BSTR *pCLXCmdLine)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XTscDebug::put_CLXDll(BSTR pCLXDll)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XTscDebug::get_CLXDll(BSTR *pCLXDll)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XTscDebug::put_RemoteProgramsHatchVisibleRegion(long pcbHatch)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XTscDebug::get_RemoteProgramsHatchVisibleRegion(long *pcbHatch)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XTscDebug::put_RemoteProgramsHatchVisibleNoDataRegion(long pcbHatch)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XTscDebug::get_RemoteProgramsHatchVisibleNoDataRegion(long *pcbHatch)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XTscDebug::put_RemoteProgramsHatchNonVisibleRegion(long pcbHatch)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XTscDebug::get_RemoteProgramsHatchNonVisibleRegion(long *pcbHatch)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XTscDebug::put_RemoteProgramsHatchWindow(long pcbHatch)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XTscDebug::get_RemoteProgramsHatchWindow(long *pcbHatch)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XTscDebug::put_RemoteProgramsStayConnectOnBadCaps(long pcbStayConnected)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XTscDebug::get_RemoteProgramsStayConnectOnBadCaps(long *pcbStayConnected)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XTscDebug::get_ControlType(unsigned int *pControlType)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XTscDebug::put_DecodeGfx(VARIANT_BOOL rhs)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, TscDebug);

	return E_NOTIMPL;
}


