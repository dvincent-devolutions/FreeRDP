// Implementation of the main RDP client interface.

#include "stdafx.h"
#include "FreeRdpActivexCtrl.h"


STDMETHODIMP_(ULONG) CFreeRdpActivexCtrl::XRemoteProgram::AddRef()
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RemoteProgram);

	return pThis->ExternalAddRef();
}


STDMETHODIMP_(ULONG) CFreeRdpActivexCtrl::XRemoteProgram::Release()
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RemoteProgram);

	return pThis->ExternalRelease();
}


STDMETHODIMP CFreeRdpActivexCtrl::XRemoteProgram::QueryInterface(REFIID iid, LPVOID* ppvObj)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RemoteProgram);

	return pThis->ExternalQueryInterface(&iid, ppvObj);
}


STDMETHODIMP CFreeRdpActivexCtrl::XRemoteProgram::GetTypeInfoCount(UINT* pCount)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RemoteProgram);

	*pCount = 1;

	return S_OK;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRemoteProgram::GetTypeInfo(UINT info, LCID lcid, ITypeInfo** pInfo)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RemoteProgram);

	if (info != 0)
	{
		return DISP_E_BADINDEX;
	}

	if (pThis->mRemoteProgramTypeInfo == NULL)
	{
		HRESULT result = pThis->GetTypeInfoOfGuid(lcid, IID_ITSRemoteProgram2, &pThis->mRemoteProgramTypeInfo);
		if (FAILED(result))
		{
			pThis->mRemoteProgramTypeInfo = NULL;
			return E_FAIL;
		}
	}
	pThis->mRemoteProgramTypeInfo->AddRef();
	*pInfo = pThis->mRemoteProgramTypeInfo;

	return S_OK;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRemoteProgram::GetIDsOfNames(REFIID riid, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgdispid)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RemoteProgram);

	if (pThis->mRemoteProgramTypeInfo == NULL)
	{
		return E_FAIL;
	}

	return DispGetIDsOfNames(pThis->mRemoteProgramTypeInfo, rgszNames, cNames, rgdispid);
}


STDMETHODIMP CFreeRdpActivexCtrl::XRemoteProgram::Invoke(DISPID dispid, REFIID riid, LCID lcid, WORD flags, DISPPARAMS* pParams, VARIANT* pResult, EXCEPINFO* pExcep, UINT* pErr)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RemoteProgram);

	if (pThis->mRemoteProgramTypeInfo == NULL)
	{
		return E_FAIL;
	}

	return DispInvoke(this, pThis->mRemoteProgramTypeInfo, dispid, flags, pParams, pResult, pExcep, pErr);
}


STDMETHODIMP CFreeRdpActivexCtrl::XRemoteProgram::put_RemoteProgramMode(VARIANT_BOOL pvboolRemoteProgramMode)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RemoteProgram);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRemoteProgram::get_RemoteProgramMode(VARIANT_BOOL *pvboolRemoteProgramMode)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RemoteProgram);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRemoteProgram::ServerStartProgram(BSTR bstrExecutablePath, BSTR bstrFilePath, BSTR bstrWorkingDirectory,
	VARIANT_BOOL vbExpandEnvVarInWorkingDirectoryOnServer, BSTR bstrArguments, VARIANT_BOOL vbExpandEnvVarInArgumentsOnServer)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RemoteProgram);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRemoteProgram::put_RemoteApplicationName(BSTR rhs)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RemoteProgram);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRemoteProgram::put_RemoteApplicationProgram(BSTR rhs)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RemoteProgram);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRemoteProgram::put_RemoteApplicationArgs(BSTR rhs)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RemoteProgram);

	return E_NOTIMPL;
}


