// Implementation of the main RDP client interface.

#include "stdafx.h"
#include "FreeRdpCtrl.h"


STDMETHODIMP CFreeRdpCtrl::put_RemoteProgramMode(VARIANT_BOOL pvboolRemoteProgramMode)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	mSettings->RemoteApplicationMode = (pvboolRemoteProgramMode == VARIANT_FALSE ? FALSE : TRUE);

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_RemoteProgramMode(VARIANT_BOOL *pvboolRemoteProgramMode)
{
	*pvboolRemoteProgramMode = (mSettings->RemoteApplicationMode == FALSE ? VARIANT_FALSE : VARIANT_TRUE);
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::ServerStartProgram(BSTR bstrExecutablePath, BSTR bstrFilePath, BSTR bstrWorkingDirectory,
	VARIANT_BOOL vbExpandEnvVarInWorkingDirectoryOnServer, BSTR bstrArguments, VARIANT_BOOL vbExpandEnvVarInArgumentsOnServer)
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

	free(mSettings->RemoteApplicationName);
	mSettings->RemoteApplicationName = NULL;
	if (bstrExecutablePath)
	{
		mSettings->RemoteApplicationName = _strdup(OLE2A(bstrExecutablePath));
		if (!mSettings->RemoteApplicationName)
		{
			return E_OUTOFMEMORY;
		}
	}

	free(mSettings->RemoteApplicationFile);
	mSettings->RemoteApplicationFile = NULL;
	if (bstrFilePath)
	{
		mSettings->RemoteApplicationFile = _strdup(OLE2A(bstrFilePath));
		if (!mSettings->RemoteApplicationFile)
		{
			return E_OUTOFMEMORY;
		}
	}

	//free(mSettings->RemoteApplicationFile);
	//mSettings->RemoteApplicationFile = _strdup(OLE2A(bstrWorkingDirectory));
	//if (!mSettings->RemoteApplicationFile)
	//{
	//	return E_OUTOFMEMORY;
	//}
	mSettings->RemoteApplicationExpandWorkingDir = (vbExpandEnvVarInWorkingDirectoryOnServer == VARIANT_FALSE ? FALSE : TRUE);

	free(mSettings->RemoteApplicationCmdLine);
	mSettings->RemoteApplicationCmdLine = NULL;
	if (bstrArguments)
	{
		mSettings->RemoteApplicationCmdLine = _strdup(OLE2A(bstrArguments));
		if (!mSettings->RemoteApplicationCmdLine)
		{
			return E_OUTOFMEMORY;
		}
	}
	mSettings->RemoteApplicationExpandCmdLine = (vbExpandEnvVarInArgumentsOnServer == VARIANT_FALSE ? FALSE : TRUE);

	return S_OK;
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


