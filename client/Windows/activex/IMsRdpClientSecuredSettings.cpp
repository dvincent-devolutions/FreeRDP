// Implementation of the main RDP client interface.

#include "stdafx.h"
#include "FreeRdpActivexCtrl.h"


STDMETHODIMP_(ULONG) CFreeRdpActivexCtrl::XRdpClientSecuredSettings::AddRef()
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientSecuredSettings);

	return pThis->ExternalAddRef();
}


STDMETHODIMP_(ULONG) CFreeRdpActivexCtrl::XRdpClientSecuredSettings::Release()
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientSecuredSettings);

	return pThis->ExternalRelease();
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientSecuredSettings::QueryInterface(REFIID iid, LPVOID* ppvObj)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientSecuredSettings);

	return pThis->ExternalQueryInterface(&iid, ppvObj);
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientSecuredSettings::GetTypeInfoCount(UINT* pCount)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientSecuredSettings);

	*pCount = 1;

	return S_OK;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientSecuredSettings::GetTypeInfo(UINT info, LCID lcid, ITypeInfo** pInfo)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientSecuredSettings);

	if (info != 0)
	{
		return DISP_E_BADINDEX;
	}

	if (pThis->mRdpClientSecuredSettingsTypeInfo == NULL)
	{
		HRESULT result = pThis->GetTypeInfoOfGuid(lcid, IID_IMsRdpClientSecuredSettings2, &pThis->mRdpClientSecuredSettingsTypeInfo);
		if (FAILED(result))
		{
			pThis->mRdpClientSecuredSettingsTypeInfo = NULL;
			return result;
		}
	}
	pThis->mRdpClientSecuredSettingsTypeInfo->AddRef();
	*pInfo = pThis->mRdpClientSecuredSettingsTypeInfo;

	return S_OK;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientSecuredSettings::GetIDsOfNames(REFIID riid, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgdispid)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientSecuredSettings);

	if (pThis->mRdpClientSecuredSettingsTypeInfo == NULL)
	{
		return E_FAIL;
	}

	return DispGetIDsOfNames(pThis->mRdpClientSecuredSettingsTypeInfo, rgszNames, cNames, rgdispid);
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientSecuredSettings::Invoke(DISPID dispid, REFIID riid, LCID lcid, WORD flags, DISPPARAMS* pParams, VARIANT* pResult, EXCEPINFO* pExcep, UINT* pErr)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientSecuredSettings);

	if (pThis->mRdpClientSecuredSettingsTypeInfo == NULL)
	{
		return E_FAIL;
	}

	return DispInvoke(this, pThis->mRdpClientSecuredSettingsTypeInfo, dispid, flags, pParams, pResult, pExcep, pErr);
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientSecuredSettings::put_StartProgram(BSTR pStartProgram)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientSecuredSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientSecuredSettings::get_StartProgram(BSTR *pStartProgram)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientSecuredSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientSecuredSettings::put_WorkDir(BSTR pWorkDir)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientSecuredSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientSecuredSettings::get_WorkDir(BSTR *pWorkDir)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientSecuredSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientSecuredSettings::put_FullScreen(long pfFullScreen)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientSecuredSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientSecuredSettings::get_FullScreen(long *pfFullScreen)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientSecuredSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientSecuredSettings::put_KeyboardHookMode(long pkeyboardHookMode)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientSecuredSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientSecuredSettings::get_KeyboardHookMode(long *pkeyboardHookMode)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientSecuredSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientSecuredSettings::put_AudioRedirectionMode(long pAudioRedirectionMode)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientSecuredSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientSecuredSettings::get_AudioRedirectionMode(long *pAudioRedirectionMode)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientSecuredSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientSecuredSettings::get_PCB(BSTR *bstrPCB)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientSecuredSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientSecuredSettings::put_PCB(BSTR bstrPCB)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientSecuredSettings);

	return E_NOTIMPL;
}


