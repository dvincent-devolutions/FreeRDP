// Implementation of the main RDP client interface.

#include "stdafx.h"
#include "FreeRdpCtrl.h"


STDMETHODIMP CFreeRdpCtrl::put_StartProgram(BSTR pStartProgram)
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

	mSettings->RemoteApplicationProgram = _strdup(OLE2A(pStartProgram));
	if (!mSettings->RemoteApplicationProgram)
	{
		return E_OUTOFMEMORY;
	}

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_StartProgram(BSTR *pStartProgram)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}

	try
	{
		CComBSTR string(mSettings->RemoteApplicationProgram);
		string.CopyTo(pStartProgram);
	}
	catch (...)
	{
		return E_OUTOFMEMORY;
	}

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_WorkDir(BSTR pWorkDir)
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

	mSettings->ShellWorkingDirectory = _strdup(OLE2A(pWorkDir));
	if (!mSettings->RemoteApplicationProgram)
	{
		return E_OUTOFMEMORY;
	}

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_WorkDir(BSTR *pWorkDir)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}

	try
	{
		CComBSTR string(mSettings->ShellWorkingDirectory);
		string.CopyTo(pWorkDir);
	}
	catch (...)
	{
		return E_OUTOFMEMORY;
	}

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_FullScreen(long pfFullScreen)
{
	if (pfFullScreen == FALSE && mFullScreen == TRUE)
	{
		mFullScreen = FALSE;
		if (mConnectionState != NOT_CONNECTED)
		{
			EndFullScreen();
		}
	}
	else if (pfFullScreen != FALSE && mFullScreen == FALSE)
	{
		mFullScreen = TRUE;
		if (mConnectionState != NOT_CONNECTED)
		{
			StartFullScreen();
		}
	}

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_FullScreen(long *pfFullScreen)
{
	*pfFullScreen = mFullScreen;
	return S_OK;
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
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}

	try
	{
		CComBSTR string(mSettings->PreconnectionBlob);
		string.CopyTo(bstrPCB);
	}
	catch (...)
	{
		return E_OUTOFMEMORY;
	}

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_PCB(BSTR bstrPCB)
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

	mSettings->PreconnectionBlob = _strdup(OLE2A(bstrPCB));
	if (!mSettings->PreconnectionBlob)
	{
		return E_OUTOFMEMORY;
	}

	return S_OK;
}


