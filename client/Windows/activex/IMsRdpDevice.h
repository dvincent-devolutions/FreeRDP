// FreeRdpCtrl.h : Declaration of the CFreeRdpDevice
#pragma once
#include "resource.h"       // main symbols
#include <freerdp/freerdp.h>
#include <freerdp/svc.h>
#include <atlcoll.h>
#include <atlctl.h>
#include <atlstr.h>
#include "FreeRdpAx_i.h"
#include "_IFreeRdpCtrlEvents_CP.h"
#include "IMsTscAxEvents_CP.H"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CFreeRdpDevice
class ATL_NO_VTABLE CFreeRdpDevice :
	public CComObjectRootEx<CComSingleThreadModel>,
	public IMsRdpDevice
{
public:
	CFreeRdpDevice()
	{
	};
	~CFreeRdpDevice()
	{
	};

	BEGIN_COM_MAP(CFreeRdpDevice)
		COM_INTERFACE_ENTRY_IID(IID_IMsRdpDevice, IMsRdpDevice)
	END_COM_MAP()

	//void LinkDevice(CFreeRdpCtrl& ctrl, int deviceIndex);

	// Members.
	//CFreeRdpCtrl* mCtrl;
	int deviceIndex;

	// IMsRdpDevice interface methods.
	STDMETHOD(get_DeviceInstanceId)(BSTR *pDevInstanceId);
	STDMETHOD(get_FriendlyName)(BSTR *pFriendlyName);
	STDMETHOD(get_DeviceDescription)(BSTR *pDeviceDescription);
	STDMETHOD(put_RedirectionState)(VARIANT_BOOL pvboolRedirState);
	STDMETHOD(get_RedirectionState)(VARIANT_BOOL *pvboolRedirState);
};


