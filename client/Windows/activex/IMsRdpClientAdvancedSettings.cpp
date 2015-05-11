// Implementation of the main RDP client interface.

#include "stdafx.h"
#include "FreeRdpCtrl.h"


STDMETHODIMP CFreeRdpCtrl::put_Compress(long pcompress)
{
	if (mDeffered.CompressionEnabled != pcompress)
	{
		mDeffered.CompressionEnabled = pcompress;
		PostTransferMessage();
	}
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_Compress(long *pcompress)
{
	*pcompress = mDeffered.CompressionEnabled;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_BitmapPeristence(long pbitmapPeristence)
{
	if (mDeffered.BitmapCacheEnabled != pbitmapPeristence)
	{
		mDeffered.BitmapCacheEnabled = pbitmapPeristence;
		PostTransferMessage();
	}
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_BitmapPeristence(long *pbitmapPeristence)
{
	*pbitmapPeristence = mDeffered.BitmapCacheEnabled;
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
	UINT32 keyboardLayout = StrToIntW(rhs);
	if (mDeffered.KeyboardLayout != keyboardLayout)
	{
		mDeffered.KeyboardLayout = keyboardLayout;
		PostTransferMessage();
	}
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
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_ContainerHandledFullScreen(long *pContainerHandledFullScreen)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_DisableRdpdr(long pDisableRdpdr)
{
	BOOL enableRdpdr = !pDisableRdpdr;
	if (mDeffered.ClipBoardPrinterRedirectionEnabled != enableRdpdr)
	{
		mDeffered.ClipBoardPrinterRedirectionEnabled = enableRdpdr;
		PostTransferMessage();
	}
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_DisableRdpdr(long *pDisableRdpdr)
{
	*pDisableRdpdr = !mDeffered.ClipBoardPrinterRedirectionEnabled;
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_SmoothScroll(long psmoothScroll)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_SmoothScroll(long *psmoothScroll)
{
	return E_NOTIMPL;
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
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_ShadowBitmap(long *pshadowBitmap)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_TransportType(long ptransportType)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_TransportType(long *ptransportType)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_SasSequence(long psasSequence)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_SasSequence(long *psasSequence)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_EncryptionEnabled(long pencryptionEnabled)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_EncryptionEnabled(long *pencryptionEnabled)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_DedicatedTerminal(long pdedicatedTerminal)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_DedicatedTerminal(long *pdedicatedTerminal)
{
	return E_NOTIMPL;
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
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_EnableMouse(long *penableMouse)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_DisableCtrlAltDel(long pdisableCtrlAltDel)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_DisableCtrlAltDel(long *pdisableCtrlAltDel)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_EnableWindowsKey(long penableWindowsKey)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_EnableWindowsKey(long *penableWindowsKey)
{
	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_DoubleClickDetect(long pdoubleClickDetect)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_DoubleClickDetect(long *pdoubleClickDetect)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_MaximizeShell(long pmaximizeShell)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_MaximizeShell(long *pmaximizeShell)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_HotKeyFullScreen(long photKeyFullScreen)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_HotKeyFullScreen(long *photKeyFullScreen)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
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
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_orderDrawThreshold(long *porderDrawThreshold)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_BitmapCacheSize(long pbitmapCacheSize)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_BitmapCacheSize(long *pbitmapCacheSize)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_BitmapVirtualCacheSize(long pbitmapVirtualCacheSize)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_BitmapVirtualCacheSize(long *pbitmapVirtualCacheSize)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_ScaleBitmapCachesByBPP(long pbScale)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_ScaleBitmapCachesByBPP(long *pbScale)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_NumBitmapCaches(long pnumBitmapCaches)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_NumBitmapCaches(long *pnumBitmapCaches)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_CachePersistenceActive(long pcachePersistenceActive)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_CachePersistenceActive(long *pcachePersistenceActive)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_PersistCacheDirectory(BSTR rhs)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_brushSupportLevel(long pbrushSupportLevel)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_brushSupportLevel(long *pbrushSupportLevel)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_minInputSendInterval(long pminInputSendInterval)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_minInputSendInterval(long *pminInputSendInterval)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_InputEventsAtOnce(long pinputEventsAtOnce)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_InputEventsAtOnce(long *pinputEventsAtOnce)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_maxEventCount(long pmaxEventCount)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_maxEventCount(long *pmaxEventCount)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_keepAliveInterval(long pkeepAliveInterval)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_keepAliveInterval(long *pkeepAliveInterval)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
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
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_KeyboardType(long *pkeyboardType)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_KeyboardSubType(long pkeyboardSubType)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_KeyboardSubType(long *pkeyboardSubType)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_KeyboardFunctionKey(long pkeyboardFunctionKey)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_KeyboardFunctionKey(long *pkeyboardFunctionKey)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_WinceFixedPalette(long pwinceFixedPalette)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_WinceFixedPalette(long *pwinceFixedPalette)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_ConnectToServerConsole(VARIANT_BOOL pConnectToConsole)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_ConnectToServerConsole(VARIANT_BOOL *pConnectToConsole)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_BitmapPersistence(long pbitmapPersistence)
{
	BOOL bitmapPersistence = (pbitmapPersistence == 0 ? FALSE : TRUE);
	if (mDeffered.BitmapPersistenceEnabled != bitmapPersistence)
	{
		mDeffered.BitmapPersistenceEnabled = bitmapPersistence;
		PostTransferMessage();
	}

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_BitmapPersistence(long *pbitmapPersistence)
{
	*pbitmapPersistence = mDeffered.BitmapPersistenceEnabled;

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
		if (pminutesToIdleTimeout == 0 && mMinutesToIdleTimeout != 0)
		{
			KillTimer(mIdleTimer);
			mIdleTimer = 0;
		}
		else
		{
			mIdleTimer = SetTimer(mIdleTimer, pminutesToIdleTimeout, NULL);
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
	*pfSmartSizing = (mDeffered.SmartSizing == 0 ? 0 : -1);

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_RdpdrLocalPrintingDocName(BSTR pLocalPrintingDocName)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_RdpdrLocalPrintingDocName(BSTR *pLocalPrintingDocName)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_RdpdrClipCleanTempDirString(BSTR clipCleanTempDirString)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_RdpdrClipCleanTempDirString(BSTR *clipCleanTempDirString)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_RdpdrClipPasteInfoString(BSTR clipPasteInfoString)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_RdpdrClipPasteInfoString(BSTR *clipPasteInfoString)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
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
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_GrabFocusOnConnect(VARIANT_BOOL *pfGrabFocusOnConnect)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
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
	*pRedirectDrives = (mSettings->RedirectDrives == FALSE ? FALSE : -1);
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
	*pRedirectPrinters = (mSettings->RedirectPrinters == FALSE ? FALSE : -1);
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
	*pRedirectPorts = (mSettings->RedirectSerialPorts == FALSE ? FALSE : -1);
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
	*pRedirectSmartCards = (mSettings->RedirectSmartCards == FALSE ? FALSE : -1);
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
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_NotifyTSPublicKey(VARIANT_BOOL pfNotify)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_NotifyTSPublicKey(VARIANT_BOOL *pfNotify)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_CanAutoReconnect(VARIANT_BOOL *pfCanAutoReconnect)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
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
	*pfEnableAutoReconnect = (mSettings->AutoReconnectionEnabled == FALSE ? FALSE : -1);
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
	*pfRedirectClipboard = (mSettings->RedirectClipboard == FALSE ? FALSE : -1);
	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::put_AudioRedirectionMode(unsigned int puiAudioRedirectionMode)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_AudioRedirectionMode(unsigned int *puiAudioRedirectionMode)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
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
	*pfRedirectPnPDevices = (mSettings->DeviceRedirection == FALSE ? FALSE : -1);
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
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_RelativeMouseMode(VARIANT_BOOL *pfRelativeMouseMode)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_AuthenticationServiceClass(BSTR *pbstrAuthServiceClass)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::put_AuthenticationServiceClass(BSTR pbstrAuthServiceClass)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
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
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
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

	return S_OK;
}


STDMETHODIMP CFreeRdpCtrl::get_ConnectToAdministerServer(VARIANT_BOOL *pConnectToAdministerServer)
{
	*pConnectToAdministerServer = (mSettings->RestrictedAdminModeRequired == FALSE ? FALSE : -1);
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
	*pfRedir = (mSettings->AudioCapture == FALSE ? FALSE : -1);
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
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpCtrl::get_ClientProtocolSpec(ClientSpec *pClientMode)
{
	//(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


