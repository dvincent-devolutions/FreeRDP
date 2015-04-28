// Implementation of the main RDP client interface.

#include "stdafx.h"
#include "FreeRdpCtrl.h"


//STDMETHODIMP_(ULONG) CFreeRdpCtrl::AddRef()
//{
//	//(CFreeRdpActivexCtrl, RemoteProgram);
//
//	return pThis->ExternalAddRef();
//}
//
//
//STDMETHODIMP_(ULONG) CFreeRdpCtrl::Release()
//{
//	//(CFreeRdpActivexCtrl, RemoteProgram);
//
//	return pThis->ExternalRelease();
//}
//
//
//STDMETHODIMP CFreeRdpCtrl::QueryInterface(REFIID iid, LPVOID* ppvObj)
//{
//	//(CFreeRdpActivexCtrl, RemoteProgram);
//
//	return pThis->ExternalQueryInterface(&iid, ppvObj);
//}
//
//
//STDMETHODIMP CFreeRdpCtrl::GetTypeInfoCount(UINT* pCount)
//{
//	//(CFreeRdpActivexCtrl, RemoteProgram);
//
//	*pCount = 1;
//
//	return S_OK;
//}
//
//
//STDMETHODIMP CFreeRdpCtrl::GetTypeInfo(UINT info, LCID lcid, ITypeInfo** pInfo)
//{
//	//(CFreeRdpActivexCtrl, RemoteProgram);
//
//	if (info != 0)
//	{
//		return DISP_E_BADINDEX;
//	}
//
//	if (pThis->mRemoteProgramTypeInfo == NULL)
//	{
//		HRESULT result = pThis->GetTypeInfoOfGuid(lcid, IID_ITSRemoteProgram2, &pThis->mRemoteProgramTypeInfo);
//		if (FAILED(result))
//		{
//			pThis->mRemoteProgramTypeInfo = NULL;
//			return E_FAIL;
//		}
//	}
//	pThis->mRemoteProgramTypeInfo->AddRef();
//	*pInfo = pThis->mRemoteProgramTypeInfo;
//
//	return S_OK;
//}
//
//
//STDMETHODIMP CFreeRdpCtrl::GetIDsOfNames(REFIID riid, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgdispid)
//{
//	//(CFreeRdpActivexCtrl, RemoteProgram);
//
//	if (pThis->mRemoteProgramTypeInfo == NULL)
//	{
//		return E_FAIL;
//	}
//
//	return DispGetIDsOfNames(pThis->mRemoteProgramTypeInfo, rgszNames, cNames, rgdispid);
//}
//
//
//STDMETHODIMP CFreeRdpCtrl::Invoke(DISPID dispid, REFIID riid, LCID lcid, WORD flags, DISPPARAMS* pParams, VARIANT* pResult, EXCEPINFO* pExcep, UINT* pErr)
//{
//	//(CFreeRdpActivexCtrl, RemoteProgram);
//
//	if (pThis->mRemoteProgramTypeInfo == NULL)
//	{
//		return E_FAIL;
//	}
//
//	return DispInvoke(this, pThis->mRemoteProgramTypeInfo, dispid, flags, pParams, pResult, pExcep, pErr);
//}


STDMETHODIMP CFreeRdpCtrl::put_RemoteProgramMode(VARIANT_BOOL pvboolRemoteProgramMode)
{
	//(CFreeRdpActivexCtrl, RemoteProgram);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_RemoteProgramMode(VARIANT_BOOL *pvboolRemoteProgramMode)
{
	//(CFreeRdpActivexCtrl, RemoteProgram);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::ServerStartProgram(BSTR bstrExecutablePath, BSTR bstrFilePath, BSTR bstrWorkingDirectory,
	VARIANT_BOOL vbExpandEnvVarInWorkingDirectoryOnServer, BSTR bstrArguments, VARIANT_BOOL vbExpandEnvVarInArgumentsOnServer)
{
	//(CFreeRdpActivexCtrl, RemoteProgram);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_RemoteApplicationName(BSTR rhs)
{
	//(CFreeRdpActivexCtrl, RemoteProgram);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_RemoteApplicationProgram(BSTR rhs)
{
	//(CFreeRdpActivexCtrl, RemoteProgram);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_RemoteApplicationArgs(BSTR rhs)
{
	//(CFreeRdpActivexCtrl, RemoteProgram);

	return E_NOTIMPL;
}


