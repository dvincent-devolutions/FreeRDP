// Implementation of the main RDP client interface.

#include "stdafx.h"
#include "FreeRdpActivexCtrl.h"


STDMETHODIMP_(ULONG) CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::AddRef()
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return pThis->ExternalAddRef();
}


STDMETHODIMP_(ULONG) CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::Release()
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return pThis->ExternalRelease();
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::QueryInterface(REFIID iid, LPVOID* ppvObj)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return pThis->ExternalQueryInterface(&iid, ppvObj);
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::GetTypeInfoCount(UINT* pCount)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	*pCount = 1;

	return S_OK;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::GetTypeInfo(UINT info, LCID lcid, ITypeInfo** pInfo)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	if (info != 0)
	{
		return DISP_E_BADINDEX;
	}

	if (pThis->mRdpClientAdvancedSettingsTypeInfo == NULL)
	{
		HRESULT result = pThis->GetTypeInfoOfGuid(lcid, IID_IMsRdpClientAdvancedSettings8, &pThis->mRdpClientAdvancedSettingsTypeInfo);
		if (FAILED(result))
		{
			pThis->mRdpClientAdvancedSettingsTypeInfo = NULL;
			return result;
		}
	}
	pThis->mRdpClientAdvancedSettingsTypeInfo->AddRef();
	*pInfo = pThis->mRdpClientAdvancedSettingsTypeInfo;

	return S_OK;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::GetIDsOfNames(REFIID riid, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgdispid)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	if (pThis->mRdpClientAdvancedSettingsTypeInfo == NULL)
	{
		return E_FAIL;
	}

	return DispGetIDsOfNames(pThis->mRdpClientAdvancedSettingsTypeInfo, rgszNames, cNames, rgdispid);
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::Invoke(DISPID dispid, REFIID riid, LCID lcid, WORD flags, DISPPARAMS* pParams, VARIANT* pResult, EXCEPINFO* pExcep, UINT* pErr)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	if (pThis->mRdpClientAdvancedSettingsTypeInfo == NULL)
	{
		return E_FAIL;
	}

	return DispInvoke(this, pThis->mRdpClientAdvancedSettingsTypeInfo, dispid, flags, pParams, pResult, pExcep, pErr);
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_Compress(long pcompress)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_Compress(long *pcompress)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_BitmapPeristence(long pbitmapPeristence)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_BitmapPeristence(long *pbitmapPeristence)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_allowBackgroundInput(long pallowBackgroundInput)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_allowBackgroundInput(long *pallowBackgroundInput)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_KeyBoardLayoutStr(BSTR rhs)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_PluginDlls(BSTR rhs)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_IconFile(BSTR rhs)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_IconIndex(long rhs)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_ContainerHandledFullScreen(long pContainerHandledFullScreen)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_ContainerHandledFullScreen(long *pContainerHandledFullScreen)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_DisableRdpdr(long pDisableRdpdr)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_DisableRdpdr(long *pDisableRdpdr)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_SmoothScroll(long psmoothScroll)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_SmoothScroll(long *psmoothScroll)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_AcceleratorPassthrough(long pacceleratorPassthrough)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_AcceleratorPassthrough(long *pacceleratorPassthrough)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_ShadowBitmap(long pshadowBitmap)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_ShadowBitmap(long *pshadowBitmap)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_TransportType(long ptransportType)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_TransportType(long *ptransportType)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_SasSequence(long psasSequence)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_SasSequence(long *psasSequence)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_EncryptionEnabled(long pencryptionEnabled)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_EncryptionEnabled(long *pencryptionEnabled)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_DedicatedTerminal(long pdedicatedTerminal)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_DedicatedTerminal(long *pdedicatedTerminal)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_RDPPort(long prdpPort)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_RDPPort(long *prdpPort)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_EnableMouse(long penableMouse)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_EnableMouse(long *penableMouse)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_DisableCtrlAltDel(long pdisableCtrlAltDel)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_DisableCtrlAltDel(long *pdisableCtrlAltDel)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_EnableWindowsKey(long penableWindowsKey)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_EnableWindowsKey(long *penableWindowsKey)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_DoubleClickDetect(long pdoubleClickDetect)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_DoubleClickDetect(long *pdoubleClickDetect)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_MaximizeShell(long pmaximizeShell)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_MaximizeShell(long *pmaximizeShell)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_HotKeyFullScreen(long photKeyFullScreen)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_HotKeyFullScreen(long *photKeyFullScreen)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_HotKeyCtrlEsc(long photKeyCtrlEsc)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_HotKeyCtrlEsc(long *photKeyCtrlEsc)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_HotKeyAltEsc(long photKeyAltEsc)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_HotKeyAltEsc(long *photKeyAltEsc)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_HotKeyAltTab(long photKeyAltTab)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_HotKeyAltTab(long *photKeyAltTab)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_HotKeyAltShiftTab(long photKeyAltShiftTab)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_HotKeyAltShiftTab(long *photKeyAltShiftTab)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_HotKeyAltSpace(long photKeyAltSpace)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_HotKeyAltSpace(long *photKeyAltSpace)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_HotKeyCtrlAltDel(long photKeyCtrlAltDel)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_HotKeyCtrlAltDel(long *photKeyCtrlAltDel)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_orderDrawThreshold(long porderDrawThreshold)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_orderDrawThreshold(long *porderDrawThreshold)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_BitmapCacheSize(long pbitmapCacheSize)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_BitmapCacheSize(long *pbitmapCacheSize)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_BitmapVirtualCacheSize(long pbitmapVirtualCacheSize)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_BitmapVirtualCacheSize(long *pbitmapVirtualCacheSize)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_ScaleBitmapCachesByBPP(long pbScale)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_ScaleBitmapCachesByBPP(long *pbScale)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_NumBitmapCaches(long pnumBitmapCaches)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_NumBitmapCaches(long *pnumBitmapCaches)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_CachePersistenceActive(long pcachePersistenceActive)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_CachePersistenceActive(long *pcachePersistenceActive)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_PersistCacheDirectory(BSTR rhs)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_brushSupportLevel(long pbrushSupportLevel)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_brushSupportLevel(long *pbrushSupportLevel)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_minInputSendInterval(long pminInputSendInterval)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_minInputSendInterval(long *pminInputSendInterval)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_InputEventsAtOnce(long pinputEventsAtOnce)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_InputEventsAtOnce(long *pinputEventsAtOnce)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_maxEventCount(long pmaxEventCount)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_maxEventCount(long *pmaxEventCount)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_keepAliveInterval(long pkeepAliveInterval)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_keepAliveInterval(long *pkeepAliveInterval)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_shutdownTimeout(long pshutdownTimeout)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_shutdownTimeout(long *pshutdownTimeout)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_overallConnectionTimeout(long poverallConnectionTimeout)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_overallConnectionTimeout(long *poverallConnectionTimeout)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_singleConnectionTimeout(long psingleConnectionTimeout)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_singleConnectionTimeout(long *psingleConnectionTimeout)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_KeyboardType(long pkeyboardType)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_KeyboardType(long *pkeyboardType)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_KeyboardSubType(long pkeyboardSubType)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_KeyboardSubType(long *pkeyboardSubType)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_KeyboardFunctionKey(long pkeyboardFunctionKey)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_KeyboardFunctionKey(long *pkeyboardFunctionKey)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_WinceFixedPalette(long pwinceFixedPalette)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_WinceFixedPalette(long *pwinceFixedPalette)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_ConnectToServerConsole(VARIANT_BOOL pConnectToConsole)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_ConnectToServerConsole(VARIANT_BOOL *pConnectToConsole)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_BitmapPersistence(long pbitmapPersistence)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_BitmapPersistence(long *pbitmapPersistence)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_MinutesToIdleTimeout(long pminutesToIdleTimeout)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_MinutesToIdleTimeout(long *pminutesToIdleTimeout)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_SmartSizing(VARIANT_BOOL pfSmartSizing)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_SmartSizing(VARIANT_BOOL *pfSmartSizing)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_RdpdrLocalPrintingDocName(BSTR pLocalPrintingDocName)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_RdpdrLocalPrintingDocName(BSTR *pLocalPrintingDocName)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_RdpdrClipCleanTempDirString(BSTR clipCleanTempDirString)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_RdpdrClipCleanTempDirString(BSTR *clipCleanTempDirString)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_RdpdrClipPasteInfoString(BSTR clipPasteInfoString)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_RdpdrClipPasteInfoString(BSTR *clipPasteInfoString)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_ClearTextPassword(BSTR rhs)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return pThis->SetClearTextPassword(rhs);
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_DisplayConnectionBar(VARIANT_BOOL pDisplayConnectionBar)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_DisplayConnectionBar(VARIANT_BOOL *pDisplayConnectionBar)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_PinConnectionBar(VARIANT_BOOL pPinConnectionBar)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_PinConnectionBar(VARIANT_BOOL *pPinConnectionBar)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_GrabFocusOnConnect(VARIANT_BOOL pfGrabFocusOnConnect)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_GrabFocusOnConnect(VARIANT_BOOL *pfGrabFocusOnConnect)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_LoadBalanceInfo(BSTR pLBInfo)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_LoadBalanceInfo(BSTR *pLBInfo)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_RedirectDrives(VARIANT_BOOL pRedirectDrives)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_RedirectDrives(VARIANT_BOOL *pRedirectDrives)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_RedirectPrinters(VARIANT_BOOL pRedirectPrinters)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_RedirectPrinters(VARIANT_BOOL *pRedirectPrinters)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_RedirectPorts(VARIANT_BOOL pRedirectPorts)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_RedirectPorts(VARIANT_BOOL *pRedirectPorts)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_RedirectSmartCards(VARIANT_BOOL pRedirectSmartCards)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_RedirectSmartCards(VARIANT_BOOL *pRedirectSmartCards)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_BitmapVirtualCache16BppSize(long pBitmapVirtualCache16BppSize)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_BitmapVirtualCache16BppSize(long *pBitmapVirtualCache16BppSize)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_BitmapVirtualCache24BppSize(long pBitmapVirtualCache24BppSize)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_BitmapVirtualCache24BppSize(long *pBitmapVirtualCache24BppSize)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_PerformanceFlags(long pDisableList)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_PerformanceFlags(long *pDisableList)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_ConnectWithEndpoint(VARIANT *rhs)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_NotifyTSPublicKey(VARIANT_BOOL pfNotify)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_NotifyTSPublicKey(VARIANT_BOOL *pfNotify)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_CanAutoReconnect(VARIANT_BOOL *pfCanAutoReconnect)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_EnableAutoReconnect(VARIANT_BOOL pfEnableAutoReconnect)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_EnableAutoReconnect(VARIANT_BOOL *pfEnableAutoReconnect)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_MaxReconnectAttempts(long pMaxReconnectAttempts)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_MaxReconnectAttempts(long *pMaxReconnectAttempts)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_ConnectionBarShowMinimizeButton(VARIANT_BOOL pfShowMinimize)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_ConnectionBarShowMinimizeButton(VARIANT_BOOL *pfShowMinimize)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_ConnectionBarShowRestoreButton(VARIANT_BOOL pfShowRestore)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_ConnectionBarShowRestoreButton(VARIANT_BOOL *pfShowRestore)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_AuthenticationLevel(unsigned int puiAuthLevel)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_AuthenticationLevel(unsigned int *puiAuthLevel)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_RedirectClipboard(VARIANT_BOOL pfRedirectClipboard)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_RedirectClipboard(VARIANT_BOOL *pfRedirectClipboard)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_AudioRedirectionMode(unsigned int puiAudioRedirectionMode)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_AudioRedirectionMode(unsigned int *puiAudioRedirectionMode)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_ConnectionBarShowPinButton(VARIANT_BOOL pfShowPin)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_ConnectionBarShowPinButton(VARIANT_BOOL *pfShowPin)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_PublicMode(VARIANT_BOOL pfPublicMode)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_PublicMode(VARIANT_BOOL *pfPublicMode)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_RedirectDevices(VARIANT_BOOL pfRedirectPnPDevices)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_RedirectDevices(VARIANT_BOOL *pfRedirectPnPDevices)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_RedirectPOSDevices(VARIANT_BOOL pfRedirectPOSDevices)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_RedirectPOSDevices(VARIANT_BOOL *pfRedirectPOSDevices)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_BitmapVirtualCache32BppSize(long pBitmapVirtualCache32BppSize)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_BitmapVirtualCache32BppSize(long *pBitmapVirtualCache32BppSize)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_RelativeMouseMode(VARIANT_BOOL pfRelativeMouseMode)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_RelativeMouseMode(VARIANT_BOOL *pfRelativeMouseMode)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_AuthenticationServiceClass(BSTR *pbstrAuthServiceClass)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_AuthenticationServiceClass(BSTR pbstrAuthServiceClass)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_PCB(BSTR *bstrPCB)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_PCB(BSTR bstrPCB)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_HotKeyFocusReleaseLeft(long HotKeyFocusReleaseLeft)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_HotKeyFocusReleaseLeft(long *HotKeyFocusReleaseLeft)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_HotKeyFocusReleaseRight(long HotKeyFocusReleaseRight)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_HotKeyFocusReleaseRight(long *HotKeyFocusReleaseRight)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_EnableCredSspSupport(VARIANT_BOOL pfEnableSupport)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_EnableCredSspSupport(VARIANT_BOOL *pfEnableSupport)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_AuthenticationType(unsigned int *puiAuthType)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_ConnectToAdministerServer(VARIANT_BOOL pConnectToAdministerServer)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_ConnectToAdministerServer(VARIANT_BOOL *pConnectToAdministerServer)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_AudioCaptureRedirectionMode(VARIANT_BOOL pfRedir)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_AudioCaptureRedirectionMode(VARIANT_BOOL *pfRedir)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_VideoPlaybackMode(unsigned int pVideoPlaybackMode)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_VideoPlaybackMode(unsigned int *pVideoPlaybackMode)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_EnableSuperPan(VARIANT_BOOL pfEnableSuperPan)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_EnableSuperPan(VARIANT_BOOL *pfEnableSuperPan)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_SuperPanAccelerationFactor(unsigned long puAccelFactor)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_SuperPanAccelerationFactor(unsigned long *puAccelFactor)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_NegotiateSecurityLayer(VARIANT_BOOL pfNegotiate)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_NegotiateSecurityLayer(VARIANT_BOOL *pfNegotiate)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_AudioQualityMode(unsigned int pAudioQualityMode)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_AudioQualityMode(unsigned int *pAudioQualityMode)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_RedirectDirectX(VARIANT_BOOL pfRedirectDirectX)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_RedirectDirectX(VARIANT_BOOL *pfRedirectDirectX)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_NetworkConnectionType(unsigned int pConnectionType)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_NetworkConnectionType(unsigned int *pConnectionType)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_BandwidthDetection(VARIANT_BOOL pfAutodetect)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_BandwidthDetection(VARIANT_BOOL *pfAutodetect)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::put_ClientProtocolSpec(ClientSpec pClientMode)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


STDMETHODIMP CFreeRdpActivexCtrl::XRdpClientAdvancedSettings::get_ClientProtocolSpec(ClientSpec *pClientMode)
{
	METHOD_PROLOGUE(CFreeRdpActivexCtrl, RdpClientAdvancedSettings);

	return E_NOTIMPL;
}


