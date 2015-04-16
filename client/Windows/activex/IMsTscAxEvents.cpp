// Implementation of the main RDP event interface.

#include "stdafx.h"
#include "FreeRdpActivexCtrl.h"
#include <thread>

enum EventDispid
{
	dispidOnConnecting = 0x00000001,
	dispidOnConnected = 0x00000002,
	dispidOnLoginComplete = 0x00000003,
	dispidOnDisconnected = 0x00000004,
	dispidOnEnterFullScreenMode = 0x00000005,
	dispidOnLeaveFullScreenMode = 0x00000006,
	dispidOnChannelReceivedData = 0x00000007,
	dispidOnRequestGoFullScreen = 0x00000008,
	dispidOnRequestLeaveFullScreen = 0x00000009,
	dispidOnFatalError = 0x0000000a,
	dispidOnWarning = 0x0000000b,
	dispidOnRemoteDesktopSizeChange = 0x0000000c,
	dispidOnIdleTimeoutNotification = 0x0000000d,
	dispidOnRequestContainerMinimize = 0x0000000e,
	dispidOnConfirmClose = 0x0000000f,
	dispidOnReceivedTSPublicKey = 0x00000010,
	dispidOnAutoReconnecting = 0x00000011,
	dispidOnAuthenticationWarningDisplayed = 0x00000012,
	dispidOnAuthenticationWarningDismissed = 0x00000013,
	dispidOnRemoteProgramResult = 0x00000014,
	dispidOnRemoteProgramDisplayed = 0x00000015,
	dispidOnRemoteWindowDisplayed = 0x0000001d,
	dispidOnLogonError = 0x00000016,
	dispidOnFocusReleased = 0x00000017,
	dispidOnUserNameAcquired = 0x00000018,
	dispidOnMouseInputModeChanged = 0x0000001a,
	dispidOnServiceMessageReceived = 0x0000001c,
	dispidOnConnectionBarPullDown = 0x0000001e,
	dispidOnNetworkStatusChanged = 0x00000020,
	dispidOnDevicesButtonPressed = 0x00000023,
	dispidOnAutoReconnected = 0x00000021,
	dispidOnAutoReconnecting2 = 0x00000022,
};


void CFreeRdpActivexCtrl::FireRdpEventV(DISPID dispid, BYTE* pbParams, va_list argList)
{
	COleDispatchDriver driver;

	POSITION pos = m_xMsTscEvents.GetStartPosition();
	LPDISPATCH pDispatch;
	while (pos != NULL)
	{
		pDispatch = (LPDISPATCH)m_xMsTscEvents.GetNextConnection(pos);
		if (pDispatch != NULL)
		{
			driver.AttachDispatch(pDispatch, FALSE);
			TRY
				driver.InvokeHelperV(dispid, DISPATCH_METHOD, VT_EMPTY, NULL, pbParams, argList);
			END_TRY
			driver.DetachDispatch();
		}
	}
}


void AFX_CDECL CFreeRdpActivexCtrl::FireRdpEvent(DISPID dispid, BYTE* pbParams, ...)
{
	va_list argList;
	va_start(argList, pbParams);
	FireRdpEventV(dispid, pbParams, argList);
	va_end(argList);
}


void CFreeRdpActivexCtrl::FireOnConnecting()
{
	mConnectionState = CONNECTING;
	FireRdpEvent(dispidOnConnecting, EVENT_PARAM(VTS_NONE));
}


void CFreeRdpActivexCtrl::FireOnConnected()
{
	mConnectionState = CONNECTED;
	FireRdpEvent(dispidOnConnected, EVENT_PARAM(VTS_NONE));
}


void CFreeRdpActivexCtrl::FireOnLoginCompleted()
{
	mConnectionState = CONNECTED;
	FireRdpEvent(dispidOnLoginComplete, EVENT_PARAM(VTS_NONE));
}


void CFreeRdpActivexCtrl::FireOnDisconnected(LONG reason)
{
	mConnectionState = NOT_CONNECTED;
	FireRdpEvent(dispidOnDisconnected, EVENT_PARAM(VTS_I4), reason);
}


DWORD WINAPI CFreeRdpActivexCtrl::TerminationMonitoringThread(LPVOID parameters)
{
	CFreeRdpActivexCtrl& rThis = *(CFreeRdpActivexCtrl*)parameters;
	WaitForSingleObject(rThis.mFreeRdpThread, INFINITE);

	freerdp_client_stop(rThis.mContext);
	rThis.mFreeRdpThread = NULL; // The handle is closed in freerdp_client_stop();

	rThis.FireOnDisconnected(0);

	return 0;
}


extern "C" void FireOnConnected(void* handle)
{
	((CFreeRdpActivexCtrl*)handle)->FireOnConnected();
}


extern "C" void ConnectionResultHandler(rdpContext* context, ConnectionResultEventArgs* e)
{
	CFreeRdpActivexCtrl* pThis = (CFreeRdpActivexCtrl*)(context->instance->pUser);
	if (!e->result)
	{
		pThis->FireOnLoginCompleted();
	}
	else
	{
		pThis->FireOnDisconnected(0);
	}
}


extern "C" void TerminateHandler(rdpContext* context, TerminateEventArgs* e)
{
	CFreeRdpActivexCtrl* pThis = (CFreeRdpActivexCtrl*)(context->instance->pUser);
	pThis->FireOnDisconnected(0);
}


