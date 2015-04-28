// Implementation of the RDP client shell interface.

#include "stdafx.h"
#include "FreeRdpCtrl.h"


//STDMETHODIMP_(ULONG) CFreeRdpCtrl::AddRef()
//{
//	//(CFreeRdpActivexCtrl, RdpClientShell);
//
//	return pThis->ExternalAddRef();
//}
//
//
//STDMETHODIMP_(ULONG) CFreeRdpCtrl::Release()
//{
//	//(CFreeRdpActivexCtrl, RdpClientShell);
//
//	return pThis->ExternalRelease();
//}
//
//
//STDMETHODIMP CFreeRdpCtrl::QueryInterface(REFIID iid, LPVOID* ppvObj)
//{
//	//(CFreeRdpActivexCtrl, RdpClientShell);
//
//	return pThis->ExternalQueryInterface(&iid, ppvObj);
//}
//
//
//STDMETHODIMP CFreeRdpCtrl::GetTypeInfoCount(UINT* pCount)
//{
//	//(CFreeRdpActivexCtrl, RdpClientShell);
//
//	*pCount = 1;
//
//	return S_OK;
//}
//
//
//STDMETHODIMP CFreeRdpCtrl::GetTypeInfo(UINT info, LCID lcid, ITypeInfo** pInfo)
//{
//	//(CFreeRdpActivexCtrl, RdpClientShell);
//
//	if (info != 0)
//	{
//		return DISP_E_BADINDEX;
//	}
//
//	if (pThis->mRdpClientShellTypeInfo == NULL)
//	{
//		HRESULT result = pThis->GetTypeInfoOfGuid(lcid, IID_IMsRdpClientShell, &pThis->mRdpClientShellTypeInfo);
//		if (FAILED(result))
//		{
//			pThis->mRdpClientShellTypeInfo = NULL;
//			return result;
//		}
//	}
//	pThis->mRdpClientShellTypeInfo->AddRef();
//	*pInfo = pThis->mRdpClientShellTypeInfo;
//
//	return S_OK;
//}
//
//
//STDMETHODIMP CFreeRdpCtrl::GetIDsOfNames(REFIID riid, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgdispid)
//{
//	//(CFreeRdpActivexCtrl, RdpClientShell);
//
//	if (pThis->mRdpClientShellTypeInfo == NULL)
//	{
//		return E_FAIL;
//	}
//
//	return DispGetIDsOfNames(pThis->mRdpClientShellTypeInfo, rgszNames, cNames, rgdispid);
//}
//
//
//STDMETHODIMP CFreeRdpCtrl::Invoke(DISPID dispid, REFIID riid, LCID lcid, WORD flags, DISPPARAMS* pParams, VARIANT* pResult, EXCEPINFO* pExcep, UINT* pErr)
//{
//	//(CFreeRdpActivexCtrl, RdpClientShell);
//
//	if (pThis->mRdpClientShellTypeInfo == NULL)
//	{
//		return E_FAIL;
//	}
//
//	return DispInvoke(this, pThis->mRdpClientShellTypeInfo, dispid, flags, pParams, pResult, pExcep, pErr);
//}


STDMETHODIMP CFreeRdpCtrl::Launch(void)
{
	//(CFreeRdpActivexCtrl, RdpClientShell);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_RdpFileContents(BSTR pszRdpFile)
{
	//(CFreeRdpActivexCtrl, RdpClientShell);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_RdpFileContents(BSTR *pszRdpFile)
{
	//(CFreeRdpActivexCtrl, RdpClientShell);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::SetRdpProperty(BSTR szProperty, VARIANT Value)
{
	//(CFreeRdpActivexCtrl, RdpClientShell);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::GetRdpProperty(BSTR szProperty, VARIANT *pValue)
{
	//(CFreeRdpActivexCtrl, RdpClientShell);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_IsRemoteProgramClientInstalled(VARIANT_BOOL *pbClientInstalled)
{
	//(CFreeRdpActivexCtrl, RdpClientShell);

	return E_NOTIMPL;
}


//STDMETHODIMP CFreeRdpCtrl::put_PublicMode(VARIANT_BOOL pfPublicMode)
//{
//	//(CFreeRdpActivexCtrl, RdpClientShell);
//
//	return E_NOTIMPL;
//}


//STDMETHODIMP CFreeRdpCtrl::get_PublicMode(VARIANT_BOOL *pfPublicMode)
//{
//	//(CFreeRdpActivexCtrl, RdpClientShell);
//
//	return E_NOTIMPL;
//}


STDMETHODIMP CFreeRdpCtrl::ShowTrustedSitesManagementDialog(void)
{
	//(CFreeRdpActivexCtrl, RdpClientShell);

	return E_NOTIMPL;
}


