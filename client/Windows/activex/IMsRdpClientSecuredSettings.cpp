// Implementation of the main RDP client interface.

#include "stdafx.h"
#include "FreeRdpCtrl.h"


//STDMETHODIMP_(ULONG) CFreeRdpCtrl::AddRef()
//{
//	//(CFreeRdpActivexCtrl, RdpClientSecuredSettings);
//
//	return pThis->ExternalAddRef();
//}
//
//
//STDMETHODIMP_(ULONG) CFreeRdpCtrl::Release()
//{
//	//(CFreeRdpActivexCtrl, RdpClientSecuredSettings);
//
//	return pThis->ExternalRelease();
//}
//
//
//STDMETHODIMP CFreeRdpCtrl::QueryInterface(REFIID iid, LPVOID* ppvObj)
//{
//	//(CFreeRdpActivexCtrl, RdpClientSecuredSettings);
//
//	return pThis->ExternalQueryInterface(&iid, ppvObj);
//}
//
//
//STDMETHODIMP CFreeRdpCtrl::GetTypeInfoCount(UINT* pCount)
//{
//	//(CFreeRdpActivexCtrl, RdpClientSecuredSettings);
//
//	*pCount = 1;
//
//	return S_OK;
//}
//
//
//STDMETHODIMP CFreeRdpCtrl::GetTypeInfo(UINT info, LCID lcid, ITypeInfo** pInfo)
//{
//	//(CFreeRdpActivexCtrl, RdpClientSecuredSettings);
//
//	if (info != 0)
//	{
//		return DISP_E_BADINDEX;
//	}
//
//	if (pThis->mRdpClientSecuredSettingsTypeInfo == NULL)
//	{
//		HRESULT result = pThis->GetTypeInfoOfGuid(lcid, IID_IMsRdpClientSecuredSettings2, &pThis->mRdpClientSecuredSettingsTypeInfo);
//		if (FAILED(result))
//		{
//			pThis->mRdpClientSecuredSettingsTypeInfo = NULL;
//			return result;
//		}
//	}
//	pThis->mRdpClientSecuredSettingsTypeInfo->AddRef();
//	*pInfo = pThis->mRdpClientSecuredSettingsTypeInfo;
//
//	return S_OK;
//}
//
//
//STDMETHODIMP CFreeRdpCtrl::GetIDsOfNames(REFIID riid, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgdispid)
//{
//	//(CFreeRdpActivexCtrl, RdpClientSecuredSettings);
//
//	if (pThis->mRdpClientSecuredSettingsTypeInfo == NULL)
//	{
//		return E_FAIL;
//	}
//
//	return DispGetIDsOfNames(pThis->mRdpClientSecuredSettingsTypeInfo, rgszNames, cNames, rgdispid);
//}
//
//
//STDMETHODIMP CFreeRdpCtrl::Invoke(DISPID dispid, REFIID riid, LCID lcid, WORD flags, DISPPARAMS* pParams, VARIANT* pResult, EXCEPINFO* pExcep, UINT* pErr)
//{
//	//(CFreeRdpActivexCtrl, RdpClientSecuredSettings);
//
//	if (pThis->mRdpClientSecuredSettingsTypeInfo == NULL)
//	{
//		return E_FAIL;
//	}
//
//	return DispInvoke(this, pThis->mRdpClientSecuredSettingsTypeInfo, dispid, flags, pParams, pResult, pExcep, pErr);
//}


STDMETHODIMP CFreeRdpCtrl::put_StartProgram(BSTR pStartProgram)
{
	//(CFreeRdpActivexCtrl, RdpClientSecuredSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_StartProgram(BSTR *pStartProgram)
{
	//(CFreeRdpActivexCtrl, RdpClientSecuredSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_WorkDir(BSTR pWorkDir)
{
	//(CFreeRdpActivexCtrl, RdpClientSecuredSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_WorkDir(BSTR *pWorkDir)
{
	//(CFreeRdpActivexCtrl, RdpClientSecuredSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_FullScreen(long pfFullScreen)
{
	//(CFreeRdpActivexCtrl, RdpClientSecuredSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_FullScreen(long *pfFullScreen)
{
	//(CFreeRdpActivexCtrl, RdpClientSecuredSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_KeyboardHookMode(long pkeyboardHookMode)
{
	//(CFreeRdpActivexCtrl, RdpClientSecuredSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_KeyboardHookMode(long *pkeyboardHookMode)
{
	//(CFreeRdpActivexCtrl, RdpClientSecuredSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_AudioRedirectionMode(long pAudioRedirectionMode)
{
	//(CFreeRdpActivexCtrl, RdpClientSecuredSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_AudioRedirectionMode(long *pAudioRedirectionMode)
{
	//(CFreeRdpActivexCtrl, RdpClientSecuredSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_PCB(BSTR *bstrPCB)
{
	//(CFreeRdpActivexCtrl, RdpClientSecuredSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_PCB(BSTR bstrPCB)
{
	//(CFreeRdpActivexCtrl, RdpClientSecuredSettings);

	return E_NOTIMPL;
}


