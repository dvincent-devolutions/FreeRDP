// Implementation of the main RDP client interface.

#include "stdafx.h"
#include "FreeRdpCtrl.h"


STDMETHODIMP CFreeRdpCtrl::put_GatewayHostname(BSTR pProxyHostname)
{
	USES_CONVERSION;

	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	free(mSettings->GatewayHostname);
	mSettings->GatewayHostname = _strdup(OLE2A(pProxyHostname));
	if (!mSettings->GatewayHostname)
	{
		return E_OUTOFMEMORY;
	}

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_GatewayHostname(BSTR *pProxyHostname)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}

	try
	{
		CComBSTR string(mSettings->GatewayHostname);
		string.CopyTo(pProxyHostname);
	}
	catch (...)
	{
		return E_OUTOFMEMORY;
	}

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_GatewayUsageMethod(unsigned long pulProxyUsageMethod)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	freerdp_set_gateway_usage_method(mSettings, pulProxyUsageMethod);

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_GatewayUsageMethod(unsigned long *pulProxyUsageMethod)
{
	*pulProxyUsageMethod = mSettings->GatewayUsageMethod;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_GatewayProfileUsageMethod(unsigned long pulProxyProfileUsageMethod)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::get_GatewayProfileUsageMethod(unsigned long *pulProxyProfileUsageMethod)
{
	*pulProxyProfileUsageMethod = 0;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_GatewayCredsSource(unsigned long pulProxyCredsSource)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	mSettings->GatewayCredentialsSource = pulProxyCredsSource;

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_GatewayCredsSource(unsigned long *pulProxyCredsSource)
{
	*pulProxyCredsSource = mSettings->GatewayCredentialsSource;
	return S_OK;
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
	*pfProxyIsSupported = TRUE;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_GatewayDefaultUsageMethod(unsigned long *pulProxyDefaultUsageMethod)
{
	*pulProxyDefaultUsageMethod = 0;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_GatewayCredSharing(unsigned long pulProxyCredSharing)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	mSettings->GatewayUseSameCredentials = (pulProxyCredSharing == 0 ? FALSE : TRUE);

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_GatewayCredSharing(unsigned long *pulProxyCredSharing)
{
	*pulProxyCredSharing = mSettings->GatewayUseSameCredentials;
	return S_OK;
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
	USES_CONVERSION;

	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	free(mSettings->GatewayUsername);
	mSettings->GatewayUsername = _strdup(OLE2A(pProxyUsername));
	if (!mSettings->GatewayUsername)
	{
		return E_OUTOFMEMORY;
	}

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_GatewayUsername(BSTR *pProxyUsername)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}

	try
	{
		CComBSTR string(mSettings->GatewayUsername);
		string.CopyTo(pProxyUsername);
	}
	catch (...)
	{
		return E_OUTOFMEMORY;
	}

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_GatewayDomain(BSTR pProxyDomain)
{
	USES_CONVERSION;

	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	free(mSettings->GatewayDomain);
	mSettings->GatewayDomain = _strdup(OLE2A(pProxyDomain));
	if (!mSettings->GatewayDomain)
	{
		return E_OUTOFMEMORY;
	}

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_GatewayDomain(BSTR *pProxyDomain)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}

	try
	{
		CComBSTR string(mSettings->GatewayDomain);
		string.CopyTo(pProxyDomain);
	}
	catch (...)
	{
		return E_OUTOFMEMORY;
	}

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_GatewayPassword(BSTR rhs)
{
	USES_CONVERSION;

	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	free(mSettings->GatewayPassword);
	mSettings->GatewayPassword = _strdup(OLE2A(rhs));
	if (!mSettings->GatewayPassword)
	{
		return E_OUTOFMEMORY;
	}

	return S_OK;
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


