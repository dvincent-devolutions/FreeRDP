// Implementation of the main RDP client interface.

#include "stdafx.h"
#include "FreeRdpCtrl.h"


//STDMETHODIMP_(ULONG) CFreeRdpCtrl::AddRef()
//{
//	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);
//
//	return pThis->ExternalAddRef();
//}
//
//
//STDMETHODIMP_(ULONG) CFreeRdpCtrl::Release()
//{
//	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);
//
//	return pThis->ExternalRelease();
//}
//
//
//STDMETHODIMP CFreeRdpCtrl::QueryInterface(REFIID iid, LPVOID* ppvObj)
//{
//	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);
//
//	return pThis->ExternalQueryInterface(&iid, ppvObj);
//}
//
//
//STDMETHODIMP CFreeRdpCtrl::GetTypeInfoCount(UINT* pCount)
//{
//	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);
//
//	*pCount = 1;
//
//	return S_OK;
//}
//
//
//STDMETHODIMP CFreeRdpCtrl::GetTypeInfo(UINT info, LCID lcid, ITypeInfo** pInfo)
//{
//	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);
//
//	if (info != 0)
//	{
//		return DISP_E_BADINDEX;
//	}
//
//	if (pThis->mRdpClientTransportSettingsTypeInfo == NULL)
//	{
//		HRESULT result = pThis->GetTypeInfoOfGuid(lcid, IID_IMsRdpClient9, &pThis->mRdpClientTransportSettingsTypeInfo);
//		if (FAILED(result))
//		{
//			pThis->mRdpClientTransportSettingsTypeInfo = NULL;
//			return result;
//		}
//	}
//	pThis->mRdpClientTransportSettingsTypeInfo->AddRef();
//	*pInfo = pThis->mRdpClientTransportSettingsTypeInfo;
//
//	return S_OK;
//}
//
//
//STDMETHODIMP CFreeRdpCtrl::GetIDsOfNames(REFIID riid, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgdispid)
//{
//	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);
//
//	if (pThis->mRdpClientTransportSettingsTypeInfo == NULL)
//	{
//		return E_FAIL;
//	}
//
//	return DispGetIDsOfNames(pThis->mRdpClientTransportSettingsTypeInfo, rgszNames, cNames, rgdispid);
//}
//
//
//STDMETHODIMP CFreeRdpCtrl::Invoke(DISPID dispid, REFIID riid, LCID lcid, WORD flags, DISPPARAMS* pParams, VARIANT* pResult, EXCEPINFO* pExcep, UINT* pErr)
//{
//	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);
//
//	if (pThis->mRdpClientTransportSettingsTypeInfo == NULL)
//	{
//		return E_FAIL;
//	}
//
//	return DispInvoke(this, pThis->mRdpClientTransportSettingsTypeInfo, dispid, flags, pParams, pResult, pExcep, pErr);
//}


STDMETHODIMP CFreeRdpCtrl::put_GatewayHostname(BSTR pProxyHostname)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_GatewayHostname(BSTR *pProxyHostname)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_GatewayUsageMethod(unsigned long pulProxyUsageMethod)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_GatewayUsageMethod(unsigned long *pulProxyUsageMethod)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_GatewayProfileUsageMethod(unsigned long pulProxyProfileUsageMethod)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_GatewayProfileUsageMethod(unsigned long *pulProxyProfileUsageMethod)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_GatewayCredsSource(unsigned long pulProxyCredsSource)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_GatewayCredsSource(unsigned long *pulProxyCredsSource)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_GatewayUserSelectedCredsSource(unsigned long pulProxyCredsSource)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_GatewayUserSelectedCredsSource(unsigned long *pulProxyCredsSource)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_GatewayIsSupported(long *pfProxyIsSupported)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_GatewayDefaultUsageMethod(unsigned long *pulProxyDefaultUsageMethod)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_GatewayCredSharing(unsigned long pulProxyCredSharing)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_GatewayCredSharing(unsigned long *pulProxyCredSharing)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_GatewayPreAuthRequirement(unsigned long pulProxyPreAuthRequirement)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_GatewayPreAuthRequirement(unsigned long *pulProxyPreAuthRequirement)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_GatewayPreAuthServerAddr(BSTR pbstrProxyPreAuthServerAddr)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_GatewayPreAuthServerAddr(BSTR *pbstrProxyPreAuthServerAddr)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_GatewaySupportUrl(BSTR pbstrProxySupportUrl)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_GatewaySupportUrl(BSTR *pbstrProxySupportUrl)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_GatewayEncryptedOtpCookie(BSTR pbstrEncryptedOtpCookie)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_GatewayEncryptedOtpCookie(BSTR *pbstrEncryptedOtpCookie)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_GatewayEncryptedOtpCookieSize(unsigned long pulEncryptedOtpCookieSize)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_GatewayEncryptedOtpCookieSize(unsigned long *pulEncryptedOtpCookieSize)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_GatewayUsername(BSTR pProxyUsername)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_GatewayUsername(BSTR *pProxyUsername)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_GatewayDomain(BSTR pProxyDomain)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_GatewayDomain(BSTR *pProxyDomain)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_GatewayPassword(BSTR rhs)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_GatewayCredSourceCookie(unsigned long pulProxyCredSourceCookie)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_GatewayCredSourceCookie(unsigned long *pulProxyCredSourceCookie)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_GatewayAuthCookieServerAddr(BSTR pbstrProxyAuthCookieServerAddr)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_GatewayAuthCookieServerAddr(BSTR *pbstrProxyAuthCookieServerAddr)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_GatewayEncryptedAuthCookie(BSTR pbstrEncryptedAuthCookie)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_GatewayEncryptedAuthCookie(BSTR *pbstrEncryptedAuthCookie)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_GatewayEncryptedAuthCookieSize(unsigned long pulEncryptedAuthCookieSize)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_GatewayEncryptedAuthCookieSize(unsigned long *pulEncryptedAuthCookieSize)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_GatewayAuthLoginPage(BSTR pbstrProxyAuthLoginPage)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_GatewayAuthLoginPage(BSTR *pbstrProxyAuthLoginPage)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_GatewayBrokeringType(unsigned long rhs)
{
	//(CFreeRdpActivexCtrl, RdpClientTransportSettings);

	return E_NOTIMPL;
}


