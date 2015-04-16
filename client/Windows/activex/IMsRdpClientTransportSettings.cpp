// Implementation of the main RDP client interface.

#include "stdafx.h"
#include "FreeRdpActivexCtrl.h"


STDMETHODIMP_(ULONG) CFreeRdpActivexCtrl::XRdpClientTransportSettings::AddRef()
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return pThis->ExternalAddRef();
}


STDMETHODIMP_(ULONG) CFreeRdpActivexCtrl::XRdpClientTransportSettings::Release()
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return pThis->ExternalRelease();
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::QueryInterface(REFIID iid, LPVOID* ppvObj)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return pThis->ExternalQueryInterface(&iid, ppvObj);
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::GetTypeInfoCount(UINT* pCount)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	*pCount = 1;

	return S_OK;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::GetTypeInfo(UINT info, LCID lcid, ITypeInfo** pInfo)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	if (info != 0)
	{
		return DISP_E_BADINDEX;
	}

	if (pThis->mRdpClientTransportSettingsTypeInfo == NULL)
	{
		HRESULT result = pThis->GetTypeInfoOfGuid(lcid, IID_IMsRdpClient9, &pThis->mRdpClientTransportSettingsTypeInfo);
		if (FAILED(result))
		{
			pThis->mRdpClientTransportSettingsTypeInfo = NULL;
			return result;
		}
	}
	pThis->mRdpClientTransportSettingsTypeInfo->AddRef();
	*pInfo = pThis->mRdpClientTransportSettingsTypeInfo;

	return S_OK;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::GetIDsOfNames(REFIID riid, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgdispid)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	if (pThis->mRdpClientTransportSettingsTypeInfo == NULL)
	{
		return E_FAIL;
	}

	return DispGetIDsOfNames(pThis->mRdpClientTransportSettingsTypeInfo, rgszNames, cNames, rgdispid);
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::Invoke(DISPID dispid, REFIID riid, LCID lcid, WORD flags, DISPPARAMS* pParams, VARIANT* pResult, EXCEPINFO* pExcep, UINT* pErr)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	if (pThis->mRdpClientTransportSettingsTypeInfo == NULL)
	{
		return E_FAIL;
	}

	return DispInvoke(this, pThis->mRdpClientTransportSettingsTypeInfo, dispid, flags, pParams, pResult, pExcep, pErr);
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::put_GatewayHostname(BSTR pProxyHostname)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::get_GatewayHostname(BSTR *pProxyHostname)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::put_GatewayUsageMethod(unsigned long pulProxyUsageMethod)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::get_GatewayUsageMethod(unsigned long *pulProxyUsageMethod)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::put_GatewayProfileUsageMethod(unsigned long pulProxyProfileUsageMethod)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::get_GatewayProfileUsageMethod(unsigned long *pulProxyProfileUsageMethod)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::put_GatewayCredsSource(unsigned long pulProxyCredsSource)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::get_GatewayCredsSource(unsigned long *pulProxyCredsSource)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::put_GatewayUserSelectedCredsSource(unsigned long pulProxyCredsSource)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::get_GatewayUserSelectedCredsSource(unsigned long *pulProxyCredsSource)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::get_GatewayIsSupported(long *pfProxyIsSupported)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::get_GatewayDefaultUsageMethod(unsigned long *pulProxyDefaultUsageMethod)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::put_GatewayCredSharing(unsigned long pulProxyCredSharing)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::get_GatewayCredSharing(unsigned long *pulProxyCredSharing)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::put_GatewayPreAuthRequirement(unsigned long pulProxyPreAuthRequirement)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::get_GatewayPreAuthRequirement(unsigned long *pulProxyPreAuthRequirement)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::put_GatewayPreAuthServerAddr(BSTR pbstrProxyPreAuthServerAddr)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::get_GatewayPreAuthServerAddr(BSTR *pbstrProxyPreAuthServerAddr)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::put_GatewaySupportUrl(BSTR pbstrProxySupportUrl)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::get_GatewaySupportUrl(BSTR *pbstrProxySupportUrl)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::put_GatewayEncryptedOtpCookie(BSTR pbstrEncryptedOtpCookie)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::get_GatewayEncryptedOtpCookie(BSTR *pbstrEncryptedOtpCookie)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::put_GatewayEncryptedOtpCookieSize(unsigned long pulEncryptedOtpCookieSize)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::get_GatewayEncryptedOtpCookieSize(unsigned long *pulEncryptedOtpCookieSize)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::put_GatewayUsername(BSTR pProxyUsername)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::get_GatewayUsername(BSTR *pProxyUsername)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::put_GatewayDomain(BSTR pProxyDomain)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::get_GatewayDomain(BSTR *pProxyDomain)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::put_GatewayPassword(BSTR rhs)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::put_GatewayCredSourceCookie(unsigned long pulProxyCredSourceCookie)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::get_GatewayCredSourceCookie(unsigned long *pulProxyCredSourceCookie)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::put_GatewayAuthCookieServerAddr(BSTR pbstrProxyAuthCookieServerAddr)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::get_GatewayAuthCookieServerAddr(BSTR *pbstrProxyAuthCookieServerAddr)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::put_GatewayEncryptedAuthCookie(BSTR pbstrEncryptedAuthCookie)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::get_GatewayEncryptedAuthCookie(BSTR *pbstrEncryptedAuthCookie)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::put_GatewayEncryptedAuthCookieSize(unsigned long pulEncryptedAuthCookieSize)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::get_GatewayEncryptedAuthCookieSize(unsigned long *pulEncryptedAuthCookieSize)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::put_GatewayAuthLoginPage(BSTR pbstrProxyAuthLoginPage)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::get_GatewayAuthLoginPage(BSTR *pbstrProxyAuthLoginPage)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientTransportSettings::put_GatewayBrokeringType(unsigned long rhs)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


