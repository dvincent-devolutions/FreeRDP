// Implementation of the main RDP event interface.

#include "stdafx.h"
#include "FreeRdpCtrl.h"
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


DWORD WINAPI CFreeRdpCtrl::TerminationMonitoringThread(LPVOID parameters)
{
	CFreeRdpCtrl& rThis = *(CFreeRdpCtrl*)parameters;
	WaitForSingleObject(rThis.mFreeRdpThread, INFINITE);

	freerdp_client_stop(rThis.mContext);
	rThis.mFreeRdpThread = NULL; // The handle is closed in freerdp_client_stop();

	rThis.ChangeToDisconnected(0);
	if (rThis.m_hWnd != NULL)
	{
		rThis.Invalidate();
		if (rThis.mIdleTimer != 0)
		{
			rThis.KillTimer(rThis.mIdleTimer);
			rThis.mIdleTimer = 0;
		}
	}

	return 0;
}


