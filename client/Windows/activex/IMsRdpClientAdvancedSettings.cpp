// Implementation of the main RDP client interface.

#include "stdafx.h"
#include "FreeRdpCtrl.h"


STDMETHODIMP CFreeRdpCtrl::put_Compress(long pcompress)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	mSettings->CompressionEnabled = pcompress;

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_Compress(long *pcompress)
{
	*pcompress = mSettings->CompressionEnabled;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_BitmapPeristence(long pbitmapPeristence)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	mSettings->BitmapCachePersistEnabled = pbitmapPeristence;

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_BitmapPeristence(long *pbitmapPeristence)
{
	*pbitmapPeristence = mSettings->BitmapCachePersistEnabled;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_allowBackgroundInput(long pallowBackgroundInput)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_allowBackgroundInput(long *pallowBackgroundInput)
{
	*pallowBackgroundInput = TRUE;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_KeyBoardLayoutStr(BSTR rhs)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	UINT32 keyboardLayout = StrToIntW(rhs);
	mSettings->KeyboardLayout = keyboardLayout;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_PluginDlls(BSTR rhs)
{
	CComBSTR pluginList(rhs);

	int listLength = pluginList.Length() + 1;
	LPCTSTR p = pluginList.m_str;
	int nameLength = 0;
	for (int i = 0; i < listLength; i++)
	{
		TCHAR c = pluginList[i];
		if (c == ',' || c == 0)
		{
			CStringA pluginName(p, nameLength);
			if (pluginName.GetLength() > 0)
			{
				//freerdp_channels_load_plugin(mContext->channels, mContext->settings, pluginName, NULL);
			}
			nameLength = 0;
			p = pluginList.m_str + i + 1;
		}
		else
		{
			nameLength++;
		}
	}

	//return S_OK;
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_IconFile(BSTR rhs)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_IconIndex(long rhs)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_ContainerHandledFullScreen(long pContainerHandledFullScreen)
{
	mContainerHandledFullScreen = (pContainerHandledFullScreen == 0 ? FALSE : TRUE);
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_ContainerHandledFullScreen(long *pContainerHandledFullScreen)
{
	*pContainerHandledFullScreen = mContainerHandledFullScreen;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_DisableRdpdr(long pDisableRdpdr)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	BOOL enableRdpdr = !pDisableRdpdr;
	mSettings->RedirectPrinters = enableRdpdr;
	mSettings->RedirectClipboard = enableRdpdr;

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_DisableRdpdr(long *pDisableRdpdr)
{
	*pDisableRdpdr = !mSettings->RedirectPrinters;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_SmoothScroll(long psmoothScroll)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::get_SmoothScroll(long *psmoothScroll)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::put_AcceleratorPassthrough(long pacceleratorPassthrough)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_AcceleratorPassthrough(long *pacceleratorPassthrough)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_ShadowBitmap(long pshadowBitmap)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::get_ShadowBitmap(long *pshadowBitmap)
{
	*pshadowBitmap = 1;
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::put_TransportType(long ptransportType)
{
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_TransportType(long *ptransportType)
{
	*ptransportType = 0;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_SasSequence(long psasSequence)
{
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_SasSequence(long *psasSequence)
{
	*psasSequence = 0xAA03;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_EncryptionEnabled(long pencryptionEnabled)
{
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_EncryptionEnabled(long *pencryptionEnabled)
{
	*pencryptionEnabled = 1;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_DedicatedTerminal(long pdedicatedTerminal)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::get_DedicatedTerminal(long *pdedicatedTerminal)
{
	*pdedicatedTerminal = 0;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_RDPPort(long prdpPort)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	mSettings->ServerPort = prdpPort;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_RDPPort(long *prdpPort)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}

	*prdpPort = mSettings->ServerPort;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_EnableMouse(long penableMouse)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::get_EnableMouse(long *penableMouse)
{
	*penableMouse = 1;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_DisableCtrlAltDel(long pdisableCtrlAltDel)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::get_DisableCtrlAltDel(long *pdisableCtrlAltDel)
{
	*pdisableCtrlAltDel = 0;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_EnableWindowsKey(long penableWindowsKey)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	mSettings->EnableWindowsKey = penableWindowsKey;

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_EnableWindowsKey(long *penableWindowsKey)
{
	*penableWindowsKey = mSettings->EnableWindowsKey;
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_DoubleClickDetect(long pdoubleClickDetect)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::get_DoubleClickDetect(long *pdoubleClickDetect)
{
	*pdoubleClickDetect = 0;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_MaximizeShell(long pmaximizeShell)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	mSettings->MaximizeShell = pmaximizeShell;

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_MaximizeShell(long *pmaximizeShell)
{
	*pmaximizeShell = mSettings->MaximizeShell;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_HotKeyFullScreen(long photKeyFullScreen)
{
	mFullScreenKey = photKeyFullScreen;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_HotKeyFullScreen(long *photKeyFullScreen)
{
	*photKeyFullScreen = mFullScreenKey;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_HotKeyCtrlEsc(long photKeyCtrlEsc)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_HotKeyCtrlEsc(long *photKeyCtrlEsc)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_HotKeyAltEsc(long photKeyAltEsc)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_HotKeyAltEsc(long *photKeyAltEsc)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_HotKeyAltTab(long photKeyAltTab)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_HotKeyAltTab(long *photKeyAltTab)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_HotKeyAltShiftTab(long photKeyAltShiftTab)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_HotKeyAltShiftTab(long *photKeyAltShiftTab)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_HotKeyAltSpace(long photKeyAltSpace)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_HotKeyAltSpace(long *photKeyAltSpace)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_HotKeyCtrlAltDel(long photKeyCtrlAltDel)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_HotKeyCtrlAltDel(long *photKeyCtrlAltDel)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_orderDrawThreshold(long porderDrawThreshold)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::get_orderDrawThreshold(long *porderDrawThreshold)
{
	*porderDrawThreshold = 0;
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::put_BitmapCacheSize(long pbitmapCacheSize)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::get_BitmapCacheSize(long *pbitmapCacheSize)
{
	*pbitmapCacheSize = 0;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_BitmapVirtualCacheSize(long pbitmapVirtualCacheSize)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::get_BitmapVirtualCacheSize(long *pbitmapVirtualCacheSize)
{
	*pbitmapVirtualCacheSize = 0;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_ScaleBitmapCachesByBPP(long pbScale)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::get_ScaleBitmapCachesByBPP(long *pbScale)
{
	*pbScale = 0;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_NumBitmapCaches(long pnumBitmapCaches)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::get_NumBitmapCaches(long *pnumBitmapCaches)
{
	*pnumBitmapCaches = 0;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_CachePersistenceActive(long pcachePersistenceActive)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	mSettings->BitmapCachePersistEnabled = (pcachePersistenceActive == FALSE ? FALSE : TRUE);

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_CachePersistenceActive(long *pcachePersistenceActive)
{
	*pcachePersistenceActive = mSettings->BitmapCachePersistEnabled;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_PersistCacheDirectory(BSTR rhs)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::put_brushSupportLevel(long pbrushSupportLevel)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::get_brushSupportLevel(long *pbrushSupportLevel)
{
	*pbrushSupportLevel = 0;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_minInputSendInterval(long pminInputSendInterval)
{
	mMinInputSendInterval = pminInputSendInterval;
	if ((HWND)mFreeRdpWindow != NULL)
	{
		if (mMinInputSendInterval == 0)
		{
			mFreeRdpWindow.KillTimer(TIMER_INPUT_SEND_INTERVAL);
			mHoldingMouse = FALSE;
			if (mLastInput.dirty != FALSE)
			{
				mLastInput.dirty = FALSE;
				mFreeRdpWindow.SendMessage(WM_MOUSEMOVE, mLastInput.wParam, mLastInput.lParam);
			}
		}
	}
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_minInputSendInterval(long *pminInputSendInterval)
{
	*pminInputSendInterval = mMinInputSendInterval;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_InputEventsAtOnce(long pinputEventsAtOnce)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::get_InputEventsAtOnce(long *pinputEventsAtOnce)
{
	*pinputEventsAtOnce = 0;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_maxEventCount(long pmaxEventCount)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::get_maxEventCount(long *pmaxEventCount)
{
	*pmaxEventCount = 0;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_keepAliveInterval(long pkeepAliveInterval)
{
	mKeepAliveInterval = pkeepAliveInterval;
	if (mKeepAliveInterval < 10000)
	{
		mKeepAliveInterval = 0;
	}
	else if (mKeepAliveInterval > 3600000)
	{
		mKeepAliveInterval = 3600000;
	}
	if ((HWND)mFreeRdpWindow != NULL)
	{
		if (mKeepAliveInterval == 0)
		{
			mFreeRdpWindow.KillTimer(TIMER_KEEP_ALIVE);
		}
		else
		{
			mFreeRdpWindow.SetTimer(TIMER_KEEP_ALIVE, mKeepAliveInterval);
		}
	}
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_keepAliveInterval(long *pkeepAliveInterval)
{
	*pkeepAliveInterval = mKeepAliveInterval;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_shutdownTimeout(long pshutdownTimeout)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_shutdownTimeout(long *pshutdownTimeout)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_overallConnectionTimeout(long poverallConnectionTimeout)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_overallConnectionTimeout(long *poverallConnectionTimeout)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_singleConnectionTimeout(long psingleConnectionTimeout)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_singleConnectionTimeout(long *psingleConnectionTimeout)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_KeyboardType(long pkeyboardType)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::get_KeyboardType(long *pkeyboardType)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::put_KeyboardSubType(long pkeyboardSubType)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::get_KeyboardSubType(long *pkeyboardSubType)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::put_KeyboardFunctionKey(long pkeyboardFunctionKey)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::get_KeyboardFunctionKey(long *pkeyboardFunctionKey)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::put_WinceFixedPalette(long pwinceFixedPalette)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::get_WinceFixedPalette(long *pwinceFixedPalette)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::put_ConnectToServerConsole(VARIANT_BOOL pConnectToConsole)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	mSettings->ConsoleSession = (pConnectToConsole == FALSE ? FALSE : TRUE);

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_ConnectToServerConsole(VARIANT_BOOL *pConnectToConsole)
{
	*pConnectToConsole = (mSettings->ConsoleSession == FALSE ? VARIANT_FALSE : VARIANT_TRUE);
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_BitmapPersistence(long pbitmapPersistence)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	mSettings->BitmapCachePersistEnabled = pbitmapPersistence;

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_BitmapPersistence(long *pbitmapPersistence)
{
	*pbitmapPersistence = mSettings->BitmapCachePersistEnabled;

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_MinutesToIdleTimeout(long pminutesToIdleTimeout)
{
	if (pminutesToIdleTimeout < 0)
	{
		pminutesToIdleTimeout = 0;
	}
	if (pminutesToIdleTimeout > 240)
	{
		pminutesToIdleTimeout = 240;
	}
	pminutesToIdleTimeout *= 60000;

	if (mConnectionState == CONNECTED)
	{
		if (pminutesToIdleTimeout == 0)
		{
			if (mMinutesToIdleTimeout != 0)
			{
				KillTimer(TIMER_IDLE);
			}
		}
		else
		{
			SetTimer(TIMER_IDLE, pminutesToIdleTimeout, NULL);
		}
	}
	mMinutesToIdleTimeout = pminutesToIdleTimeout;

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_MinutesToIdleTimeout(long *pminutesToIdleTimeout)
{
	*pminutesToIdleTimeout = mMinutesToIdleTimeout / 60000;

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_SmartSizing(VARIANT_BOOL pfSmartSizing)
{
	BOOL smartSizing = (pfSmartSizing == 0 ? FALSE : TRUE);
	if (mDeffered.SmartSizing != smartSizing)
	{
		mDeffered.SmartSizing = smartSizing;
		PostTransferMessage();

		if ((HWND)mFreeRdpWindow != NULL)
		{
			if (smartSizing == FALSE)
			{
				mFreeRdpWindow.SetWindowPos(NULL, 0, 0, mSettings->DesktopWidth, mSettings->DesktopHeight, SWP_NOZORDER);
				if (mFreeRdpWindow.GetParent() == m_hWnd)
				{
					RECT rect;
					GetClientRect(&rect);
					SetupScrollBars(rect.right, rect.bottom);
				}
				else if ((HWND)mFullScreenWindow != NULL)
				{
					mFullScreenWindow.ShowScrollBar(SB_BOTH, TRUE);
				}
				mHorizontalPos = 0;
				mVerticalPos = 0;
			}
			else
			{
				RECT rect;
				if (mFreeRdpWindow.GetParent() == m_hWnd)
				{
					GetClientRect(&rect);
					ShowScrollBar(SB_BOTH, FALSE);
				}
				else if ((HWND)mFullScreenWindow != NULL)
				{
					mFullScreenWindow.GetClientRect(&rect);
					mFullScreenWindow.ShowScrollBar(SB_BOTH, TRUE);
				}
				mFreeRdpWindow.SetWindowPos(NULL, 0, 0, rect.right, rect.bottom, SWP_NOZORDER);
			}
		}
	}

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_SmartSizing(VARIANT_BOOL *pfSmartSizing)
{
	*pfSmartSizing = (mDeffered.SmartSizing == FALSE ? VARIANT_FALSE : VARIANT_TRUE);

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_RdpdrLocalPrintingDocName(BSTR pLocalPrintingDocName)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::get_RdpdrLocalPrintingDocName(BSTR *pLocalPrintingDocName)
{
	*pLocalPrintingDocName = 0;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_RdpdrClipCleanTempDirString(BSTR clipCleanTempDirString)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::get_RdpdrClipCleanTempDirString(BSTR *clipCleanTempDirString)
{
	*clipCleanTempDirString = 0;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_RdpdrClipPasteInfoString(BSTR clipPasteInfoString)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::get_RdpdrClipPasteInfoString(BSTR *clipPasteInfoString)
{
	*clipPasteInfoString = 0;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_ClearTextPassword(BSTR rhs)
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

	free(mSettings->Password);
	mSettings->Password = _strdup(OLE2A(rhs));
	if (!mSettings->Password)
	{
		return E_OUTOFMEMORY;
	}

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_DisplayConnectionBar(VARIANT_BOOL pDisplayConnectionBar)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_DisplayConnectionBar(VARIANT_BOOL *pDisplayConnectionBar)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_PinConnectionBar(VARIANT_BOOL pPinConnectionBar)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_PinConnectionBar(VARIANT_BOOL *pPinConnectionBar)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_GrabFocusOnConnect(VARIANT_BOOL pfGrabFocusOnConnect)
{
	mGrabFocus = (pfGrabFocusOnConnect == FALSE ? FALSE : TRUE);
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_GrabFocusOnConnect(VARIANT_BOOL *pfGrabFocusOnConnect)
{
	*pfGrabFocusOnConnect = (mGrabFocus == FALSE ? FALSE : -1);
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_LoadBalanceInfo(BSTR pLBInfo)
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

	free(mSettings->LoadBalanceInfo);
	mSettings->LoadBalanceInfo = (BYTE*)_strdup(OLE2A(pLBInfo));
	if (!mSettings->LoadBalanceInfo)
	{
		return E_OUTOFMEMORY;
	}
	mSettings->LoadBalanceInfoLength = strlen((char*)mSettings->LoadBalanceInfo);

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_LoadBalanceInfo(BSTR *pLBInfo)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}

	try
	{
		CComBSTR string(mSettings->LoadBalanceInfoLength);
		string.CopyTo(pLBInfo);
	}
	catch (...)
	{
		return E_OUTOFMEMORY;
	}

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_RedirectDrives(VARIANT_BOOL pRedirectDrives)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	mSettings->RedirectDrives = (pRedirectDrives == FALSE ? FALSE : TRUE);

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_RedirectDrives(VARIANT_BOOL *pRedirectDrives)
{
	*pRedirectDrives = (mSettings->RedirectDrives == FALSE ? VARIANT_FALSE : VARIANT_TRUE);
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_RedirectPrinters(VARIANT_BOOL pRedirectPrinters)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	mSettings->RedirectPrinters = (pRedirectPrinters == FALSE ? FALSE : TRUE);

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_RedirectPrinters(VARIANT_BOOL *pRedirectPrinters)
{
	*pRedirectPrinters = (mSettings->RedirectPrinters == FALSE ? VARIANT_FALSE : VARIANT_TRUE);
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_RedirectPorts(VARIANT_BOOL pRedirectPorts)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	mSettings->RedirectSerialPorts = (pRedirectPorts == FALSE ? FALSE : TRUE);
	mSettings->RedirectParallelPorts = mSettings->RedirectSerialPorts;

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_RedirectPorts(VARIANT_BOOL *pRedirectPorts)
{
	*pRedirectPorts = (mSettings->RedirectSerialPorts == FALSE ? VARIANT_FALSE : VARIANT_TRUE);
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_RedirectSmartCards(VARIANT_BOOL pRedirectSmartCards)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	mSettings->RedirectSmartCards = (pRedirectSmartCards == FALSE ? FALSE : TRUE);

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_RedirectSmartCards(VARIANT_BOOL *pRedirectSmartCards)
{
	*pRedirectSmartCards = (mSettings->RedirectSmartCards == FALSE ? VARIANT_FALSE : VARIANT_TRUE);
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_BitmapVirtualCache16BppSize(long pBitmapVirtualCache16BppSize)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_BitmapVirtualCache16BppSize(long *pBitmapVirtualCache16BppSize)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_BitmapVirtualCache24BppSize(long pBitmapVirtualCache24BppSize)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_BitmapVirtualCache24BppSize(long *pBitmapVirtualCache24BppSize)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_PerformanceFlags(long pDisableList)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	mSettings->PerformanceFlags = pDisableList & PERF_FLAG_ALL;
	freerdp_performance_flags_split(mSettings);

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_PerformanceFlags(long *pDisableList)
{
	*pDisableList = mSettings->PerformanceFlags;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_ConnectWithEndpoint(VARIANT *rhs)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::put_NotifyTSPublicKey(VARIANT_BOOL pfNotify)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::get_NotifyTSPublicKey(VARIANT_BOOL *pfNotify)
{
	*pfNotify = VARIANT_FALSE;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_CanAutoReconnect(VARIANT_BOOL *pfCanAutoReconnect)
{
	*pfCanAutoReconnect = VARIANT_TRUE;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_EnableAutoReconnect(VARIANT_BOOL pfEnableAutoReconnect)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	mSettings->AutoReconnectionEnabled = (pfEnableAutoReconnect == FALSE ? FALSE : TRUE);

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_EnableAutoReconnect(VARIANT_BOOL *pfEnableAutoReconnect)
{
	*pfEnableAutoReconnect = (mSettings->AutoReconnectionEnabled == FALSE ? VARIANT_FALSE : VARIANT_TRUE);
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_MaxReconnectAttempts(long pMaxReconnectAttempts)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	mSettings->AutoReconnectMaxRetries = pMaxReconnectAttempts;

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_MaxReconnectAttempts(long *pMaxReconnectAttempts)
{
	*pMaxReconnectAttempts = mSettings->AutoReconnectMaxRetries;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_ConnectionBarShowMinimizeButton(VARIANT_BOOL pfShowMinimize)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_ConnectionBarShowMinimizeButton(VARIANT_BOOL *pfShowMinimize)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_ConnectionBarShowRestoreButton(VARIANT_BOOL pfShowRestore)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_ConnectionBarShowRestoreButton(VARIANT_BOOL *pfShowRestore)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_AuthenticationLevel(unsigned int puiAuthLevel)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}
	if (puiAuthLevel > 2)
	{
		return E_INVALIDARG;
	}

	mSettings->AuthenticationLevel = puiAuthLevel;

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_AuthenticationLevel(unsigned int *puiAuthLevel)
{
	*puiAuthLevel = mSettings->AuthenticationLevel;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_RedirectClipboard(VARIANT_BOOL pfRedirectClipboard)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	mSettings->RedirectClipboard = (pfRedirectClipboard == FALSE ? FALSE : TRUE);

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_RedirectClipboard(VARIANT_BOOL *pfRedirectClipboard)
{
	*pfRedirectClipboard = (mSettings->RedirectClipboard == FALSE ? VARIANT_FALSE : VARIANT_TRUE);
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_AudioRedirectionMode(unsigned int puiAudioRedirectionMode)
{
	return put_AudioRedirectionMode((LONG)puiAudioRedirectionMode);
}


STDMETHODIMP CFreeRdpCtrl::get_AudioRedirectionMode(unsigned int *puiAudioRedirectionMode)
{
	LONG audioRedirectionMode;
	HRESULT result = get_AudioRedirectionMode(&audioRedirectionMode);
	*puiAudioRedirectionMode = audioRedirectionMode;
	return result;
}


STDMETHODIMP CFreeRdpCtrl::put_ConnectionBarShowPinButton(VARIANT_BOOL pfShowPin)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_ConnectionBarShowPinButton(VARIANT_BOOL *pfShowPin)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_PublicMode(VARIANT_BOOL pfPublicMode)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_PublicMode(VARIANT_BOOL *pfPublicMode)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_RedirectDevices(VARIANT_BOOL pfRedirectPnPDevices)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	mSettings->DeviceRedirection = (pfRedirectPnPDevices == FALSE ? FALSE : TRUE);

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_RedirectDevices(VARIANT_BOOL *pfRedirectPnPDevices)
{
	*pfRedirectPnPDevices = (mSettings->DeviceRedirection == FALSE ? VARIANT_FALSE : VARIANT_TRUE);
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_RedirectPOSDevices(VARIANT_BOOL pfRedirectPOSDevices)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_RedirectPOSDevices(VARIANT_BOOL *pfRedirectPOSDevices)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_BitmapVirtualCache32BppSize(long pBitmapVirtualCache32BppSize)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_BitmapVirtualCache32BppSize(long *pBitmapVirtualCache32BppSize)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_RelativeMouseMode(VARIANT_BOOL pfRelativeMouseMode)
{
	return S_FALSE;
}


STDMETHODIMP CFreeRdpCtrl::get_RelativeMouseMode(VARIANT_BOOL *pfRelativeMouseMode)
{
	*pfRelativeMouseMode = VARIANT_FALSE;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_AuthenticationServiceClass(BSTR *pbstrAuthServiceClass)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}

	try
	{
		CComBSTR string(mSettings->AuthenticationServiceClass);
		string.CopyTo(pbstrAuthServiceClass);
	}
	catch (...)
	{
		return E_OUTOFMEMORY;
	}

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_AuthenticationServiceClass(BSTR pbstrAuthServiceClass)
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

	free(mSettings->AuthenticationServiceClass);
	mSettings->AuthenticationServiceClass = _strdup(OLE2A(pbstrAuthServiceClass));
	if (!mSettings->AuthenticationServiceClass)
	{
		return E_OUTOFMEMORY;
	}

	return S_OK;
}


//STDMETHODIMP CFreeRdpCtrl::get_PCB(BSTR *bstrPCB)
//{
//	Implemented in IMsRdpClientSecuredSettings.
//}


//STDMETHODIMP CFreeRdpCtrl::put_PCB(BSTR bstrPCB)
//{
//	Implemented in IMsRdpClientSecuredSettings.
//}


STDMETHODIMP CFreeRdpCtrl::put_HotKeyFocusReleaseLeft(long HotKeyFocusReleaseLeft)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_HotKeyFocusReleaseLeft(long *HotKeyFocusReleaseLeft)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_HotKeyFocusReleaseRight(long HotKeyFocusReleaseRight)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_HotKeyFocusReleaseRight(long *HotKeyFocusReleaseRight)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


//STDMETHODIMP CFreeRdpCtrl::put_EnableCredSspSupport(VARIANT_BOOL pfEnableSupport)
//{
//	Implemented in IMsRdpClientNonScriptable.
//}


//STDMETHODIMP CFreeRdpCtrl::get_EnableCredSspSupport(VARIANT_BOOL *pfEnableSupport)
//{
//	Implemented in IMsRdpClientNonScriptable.
//}


STDMETHODIMP CFreeRdpCtrl::get_AuthenticationType(unsigned int *puiAuthType)
{
	if (mSettings->IgnoreCertificate == FALSE && mSettings->KerberosKdc != NULL)
	{
		*puiAuthType = 3;
	}
	else if (mSettings->IgnoreCertificate)
	{
		*puiAuthType = 2;
	}
	else if (mSettings->KerberosKdc == NULL)
	{
		*puiAuthType = 1;
	}
	else
	{
		*puiAuthType = 0;
	}

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_ConnectToAdministerServer(VARIANT_BOOL pConnectToAdministerServer)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	mSettings->RestrictedAdminModeRequired = (pConnectToAdministerServer == FALSE ? FALSE : TRUE);
	mSettings->ConsoleSession = mSettings->RestrictedAdminModeRequired;

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_ConnectToAdministerServer(VARIANT_BOOL *pConnectToAdministerServer)
{
	*pConnectToAdministerServer = (mSettings->RestrictedAdminModeRequired == FALSE ? VARIANT_FALSE : VARIANT_TRUE);
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_AudioCaptureRedirectionMode(VARIANT_BOOL pfRedir)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	mSettings->AudioCapture = (pfRedir == FALSE ? FALSE : TRUE);

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_AudioCaptureRedirectionMode(VARIANT_BOOL *pfRedir)
{
	*pfRedir = (mSettings->AudioCapture == FALSE ? VARIANT_FALSE : VARIANT_TRUE);
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_VideoPlaybackMode(unsigned int pVideoPlaybackMode)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}
	if (pVideoPlaybackMode > 1)
	{
		return E_INVALIDARG;
	}

	mSettings->VideoDisable = (pVideoPlaybackMode == 0 ? TRUE : FALSE);

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_VideoPlaybackMode(unsigned int *pVideoPlaybackMode)
{
	*pVideoPlaybackMode = (mSettings->VideoDisable == FALSE ? 1 : 0);
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_EnableSuperPan(VARIANT_BOOL pfEnableSuperPan)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_EnableSuperPan(VARIANT_BOOL *pfEnableSuperPan)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_SuperPanAccelerationFactor(unsigned long puAccelFactor)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_SuperPanAccelerationFactor(unsigned long *puAccelFactor)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


//STDMETHODIMP CFreeRdpCtrl::put_NegotiateSecurityLayer(VARIANT_BOOL pfNegotiate)
//{
//	Implemented in IMsRdpClientNonScriptable.
//}


//STDMETHODIMP CFreeRdpCtrl::get_NegotiateSecurityLayer(VARIANT_BOOL *pfNegotiate)
//{
//	Implemented in IMsRdpClientNonScriptable.
//}


STDMETHODIMP CFreeRdpCtrl::put_AudioQualityMode(unsigned int pAudioQualityMode)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_AudioQualityMode(unsigned int *pAudioQualityMode)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_RedirectDirectX(VARIANT_BOOL pfRedirectDirectX)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_RedirectDirectX(VARIANT_BOOL *pfRedirectDirectX)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_NetworkConnectionType(unsigned int pConnectionType)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_NetworkConnectionType(unsigned int *pConnectionType)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_BandwidthDetection(VARIANT_BOOL pfAutodetect)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_BandwidthDetection(VARIANT_BOOL *pfAutodetect)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_ClientProtocolSpec(ClientSpec pClientMode)
{
	if (mSettings == NULL)
	{
		return E_OUTOFMEMORY;
	}
	if (mConnectionState != NOT_CONNECTED)
	{
		return E_FAIL;
	}

	if (pClientMode == 0)
	{
		// Full mode:
		mSettings->GfxThinClient = FALSE;
		mSettings->GfxSmallCache = FALSE;
	}
	else if (pClientMode == 1)
	{
		// Thin client mode:
		mSettings->GfxThinClient = TRUE;
		mSettings->GfxSmallCache = FALSE;
	}
	else if (pClientMode == 2)
	{
		// Small cache mode:
		mSettings->GfxThinClient = FALSE;
		mSettings->GfxSmallCache = TRUE;
	}
	else
	{
		return E_INVALIDARG;
	}

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_ClientProtocolSpec(ClientSpec *pClientMode)
{
	if (mSettings->GfxThinClient == FALSE && mSettings->GfxSmallCache == FALSE)
	{
		*pClientMode = (ClientSpec)0;
	}
	else if (mSettings->GfxThinClient)
	{
		*pClientMode = (ClientSpec)1;
	}
	else
	{
		*pClientMode = (ClientSpec)2;
	}

	return S_OK;
}


