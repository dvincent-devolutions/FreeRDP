// Implementation of the RDP client shell interface.

#include "stdafx.h"
#include "FreeRdpActivexCtrl.h"


STDMETHODIMP_(ULONG) CFreeRdpActivexCtrl::XRdpClientShell::AddRef()
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientShell);

	return pThis->ExternalAddRef();
}


STDMETHODIMP_(ULONG) CFreeRdpActivexCtrl::XRdpClientShell::Release()
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientShell);

	return pThis->ExternalRelease();
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientShell::QueryInterface(REFIID iid, LPVOID* ppvObj)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientShell);

	return pThis->ExternalQueryInterface(&iid, ppvObj);
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientShell::GetTypeInfoCount(UINT* pCount)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientShell);

	*pCount = 1;

	return S_OK;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientShell::GetTypeInfo(UINT info, LCID lcid, ITypeInfo** pInfo)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientShell);

	if (info != 0)
	{
		return DISP_E_BADINDEX;
	}

	if (pThis->mRdpClientShellTypeInfo == NULL)
	{
		HRESULT result = pThis->GetTypeInfoOfGuid(lcid, IID_IMsRdpClientShell, &pThis->mRdpClientShellTypeInfo);
		if (FAILED(result))
		{
			pThis->mRdpClientShellTypeInfo = NULL;
			return result;
		}
	}
	pThis->mRdpClientShellTypeInfo->AddRef();
	*pInfo = pThis->mRdpClientShellTypeInfo;

	return S_OK;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientShell::GetIDsOfNames(REFIID riid, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgdispid)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientShell);

	if (pThis->mRdpClientShellTypeInfo == NULL)
	{
		return E_FAIL;
	}

	return DispGetIDsOfNames(pThis->mRdpClientShellTypeInfo, rgszNames, cNames, rgdispid);
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientShell::Invoke(DISPID dispid, REFIID riid, LCID lcid, WORD flags, DISPPARAMS* pParams, VARIANT* pResult, EXCEPINFO* pExcep, UINT* pErr)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientShell);

	if (pThis->mRdpClientShellTypeInfo == NULL)
	{
		return E_FAIL;
	}

	return DispInvoke(this, pThis->mRdpClientShellTypeInfo, dispid, flags, pParams, pResult, pExcep, pErr);
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientShell::Launch(void)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientShell);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientShell::put_RdpFileContents(BSTR pszRdpFile)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientShell);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientShell::get_RdpFileContents(BSTR *pszRdpFile)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientShell);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientShell::SetRdpProperty(BSTR szProperty, VARIANT Value)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientShell);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientShell::GetRdpProperty(BSTR szProperty, VARIANT *pValue)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientShell);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientShell::get_IsRemoteProgramClientInstalled(VARIANT_BOOL *pbClientInstalled)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientShell);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientShell::put_PublicMode(VARIANT_BOOL pfPublicMode)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientShell);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientShell::get_PublicMode(VARIANT_BOOL *pfPublicMode)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientShell);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientShell::ShowTrustedSitesManagementDialog(void)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientShell);

	return E_NOTIMPL;
}


