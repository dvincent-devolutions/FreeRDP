// FreeRdpCtrl.h : Declaration of the CFreeRdpCtrl
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

extern "C" FREERDP_API int RdpClientEntry(RDP_CLIENT_ENTRY_POINTS* pEntryPoints);

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

#define WM_AX_TRANSFERDEFERRED (WM_USER + 500)
#define WM_AX_STARTFULLSCREEN (WM_USER + 501)
#define WM_AX_ENDFULLSCREEN (WM_USER + 502)

using namespace ATL;


// CFreeRdpCtrl
class ATL_NO_VTABLE CFreeRdpCtrl :
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<IFreeRdpCtrl, &IID_IFreeRdpCtrl>,
	public IDispatchImpl<IMsRdpClient9, &IID_IMsRdpClient9>,
	public IDispatchImpl<IMsRdpClientSecuredSettings2, &IID_IMsRdpClientSecuredSettings2>,
	public IDispatchImpl<IMsRdpClientAdvancedSettings8, &IID_IMsRdpClientAdvancedSettings8>,
	public IDispatchImpl<IMsRdpClientTransportSettings4, &IID_IMsRdpClientTransportSettings4>,
	public IDispatchImpl<ITSRemoteProgram2, &IID_ITSRemoteProgram2>,
	public IDispatchImpl<IMsRdpClientShell, &IID_IMsRdpClientShell>,
	public IDispatchImpl<IMsTscDebug, &IID_IMsTscDebug>,
	public IPersistStreamInitImpl<CFreeRdpCtrl>,
	public IOleControlImpl<CFreeRdpCtrl>,
	public IOleObjectImpl<CFreeRdpCtrl>,
	public IOleInPlaceActiveObjectImpl<CFreeRdpCtrl>,
	public IViewObjectExImpl<CFreeRdpCtrl>,
	public IOleInPlaceObjectWindowlessImpl<CFreeRdpCtrl>,
	public IConnectionPointContainerImpl<CFreeRdpCtrl>,
	public CProxy_IFreeRdpCtrlEvents<CFreeRdpCtrl>,
	public IQuickActivateImpl<CFreeRdpCtrl>,
#ifndef _WIN32_WCE
	public IDataObjectImpl<CFreeRdpCtrl>,
#endif
	public IProvideClassInfo2Impl<&CLSID_FreeRdpCtrl, &__uuidof(_IFreeRdpCtrlEvents), &LIBID_FreeRdpAxLib>,
	public CComCoClass<CFreeRdpCtrl, &CLSID_FreeRdpCtrl>,
	public CComControl<CFreeRdpCtrl>,
	public IMsRdpClientNonScriptable5,
	public IMsRdpDevice,
	public IMsRdpDeviceCollection,
	public IMsRdpDrive,
	public IMsRdpDriveCollection,
	public IMsRdpPreferredRedirectionInfo,
	public CProxyIMsTscAxEvents<CFreeRdpCtrl>
{
public:
	CFreeRdpCtrl();
	~CFreeRdpCtrl();

DECLARE_OLEMISC_STATUS(OLEMISC_RECOMPOSEONRESIZE |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_INSIDEOUT |
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST
)

DECLARE_REGISTRY_RESOURCEID(IDR_FREERDPCTRL)


BEGIN_COM_MAP(CFreeRdpCtrl)
	COM_INTERFACE_ENTRY(IFreeRdpCtrl)

	COM_INTERFACE_ENTRY_IID(IID_IMsTscAx_Redist, IMsRdpClient9)
	COM_INTERFACE_ENTRY_IID(IID_IMsTscAx, IMsRdpClient9)
	COM_INTERFACE_ENTRY_IID(IID_IMsRdpClient, IMsRdpClient9)
	COM_INTERFACE_ENTRY_IID(IID_IMsRdpClient2, IMsRdpClient9)
	COM_INTERFACE_ENTRY_IID(IID_IMsRdpClient3, IMsRdpClient9)
	COM_INTERFACE_ENTRY_IID(IID_IMsRdpClient4, IMsRdpClient9)
	COM_INTERFACE_ENTRY_IID(IID_IMsRdpClient5, IMsRdpClient9)
	COM_INTERFACE_ENTRY_IID(IID_IMsRdpClient6, IMsRdpClient9)
	COM_INTERFACE_ENTRY_IID(IID_IMsRdpClient7, IMsRdpClient9)
	COM_INTERFACE_ENTRY_IID(IID_IMsRdpClient8, IMsRdpClient9)
	COM_INTERFACE_ENTRY(IMsRdpClient9)

	COM_INTERFACE_ENTRY_IID(IID_IMsTscAdvancedSettings, IMsRdpClientAdvancedSettings8)
	COM_INTERFACE_ENTRY_IID(IID_IMsRdpClientAdvancedSettings, IMsRdpClientAdvancedSettings8)
	COM_INTERFACE_ENTRY_IID(IID_IMsRdpClientAdvancedSettings2, IMsRdpClientAdvancedSettings8)
	COM_INTERFACE_ENTRY_IID(IID_IMsRdpClientAdvancedSettings3, IMsRdpClientAdvancedSettings8)
	COM_INTERFACE_ENTRY_IID(IID_IMsRdpClientAdvancedSettings4, IMsRdpClientAdvancedSettings8)
	COM_INTERFACE_ENTRY_IID(IID_IMsRdpClientAdvancedSettings5, IMsRdpClientAdvancedSettings8)
	COM_INTERFACE_ENTRY_IID(IID_IMsRdpClientAdvancedSettings6, IMsRdpClientAdvancedSettings8)
	COM_INTERFACE_ENTRY_IID(IID_IMsRdpClientAdvancedSettings7, IMsRdpClientAdvancedSettings8)
	COM_INTERFACE_ENTRY_IID(IID_IMsRdpClientAdvancedSettings8, IMsRdpClientAdvancedSettings8)

	COM_INTERFACE_ENTRY_IID(IID_IMsTscNonScriptable, IMsRdpClientNonScriptable5)
	COM_INTERFACE_ENTRY_IID(IID_IMsRdpClientNonScriptable, IMsRdpClientNonScriptable5)
	COM_INTERFACE_ENTRY_IID(IID_IMsRdpClientNonScriptable2, IMsRdpClientNonScriptable5)
	COM_INTERFACE_ENTRY_IID(IID_IMsRdpClientNonScriptable3, IMsRdpClientNonScriptable5)
	COM_INTERFACE_ENTRY_IID(IID_IMsRdpClientNonScriptable4, IMsRdpClientNonScriptable5)
	COM_INTERFACE_ENTRY_IID(IID_IMsRdpClientNonScriptable5, IMsRdpClientNonScriptable5)

	COM_INTERFACE_ENTRY_IID(IID_IMsTscSecuredSettings, IMsRdpClientSecuredSettings2)
	COM_INTERFACE_ENTRY_IID(IID_IMsRdpClientSecuredSettings, IMsRdpClientSecuredSettings2)
	COM_INTERFACE_ENTRY_IID(IID_IMsRdpClientSecuredSettings2, IMsRdpClientSecuredSettings2)

	COM_INTERFACE_ENTRY_IID(IID_IMsRdpClientShell, IMsRdpClientShell)

	COM_INTERFACE_ENTRY_IID(IID_IMsRdpClientTransportSettings, IMsRdpClientTransportSettings4)
	COM_INTERFACE_ENTRY_IID(IID_IMsRdpClientTransportSettings2, IMsRdpClientTransportSettings4)
	COM_INTERFACE_ENTRY_IID(IID_IMsRdpClientTransportSettings3, IMsRdpClientTransportSettings4)
	COM_INTERFACE_ENTRY_IID(IID_IMsRdpClientTransportSettings4, IMsRdpClientTransportSettings4)

	COM_INTERFACE_ENTRY_IID(IID_IMsRdpDevice, IMsRdpDevice)
	COM_INTERFACE_ENTRY_IID(IID_IMsRdpDeviceCollection, IMsRdpDeviceCollection)
	COM_INTERFACE_ENTRY_IID(IID_IMsRdpDrive, IMsRdpDrive)
	COM_INTERFACE_ENTRY_IID(IID_IMsRdpDriveCollection, IMsRdpDriveCollection)

	COM_INTERFACE_ENTRY_IID(IID_IMsRdpPreferredRedirectionInfo, IMsRdpPreferredRedirectionInfo)

	COM_INTERFACE_ENTRY_IID(IID_ITSRemoteProgram, ITSRemoteProgram2)
	COM_INTERFACE_ENTRY_IID(IID_ITSRemoteProgram2, ITSRemoteProgram2)

	COM_INTERFACE_ENTRY_IID(IID_IMsTscDebug, IMsTscDebug)

	COM_INTERFACE_ENTRY2(IDispatch, IMsRdpClient9)

	COM_INTERFACE_ENTRY(IViewObjectEx)
	COM_INTERFACE_ENTRY(IViewObject2)
	COM_INTERFACE_ENTRY(IViewObject)
	COM_INTERFACE_ENTRY(IOleInPlaceObjectWindowless)
	COM_INTERFACE_ENTRY(IOleInPlaceObject)
	COM_INTERFACE_ENTRY2(IOleWindow, IOleInPlaceObjectWindowless)
	COM_INTERFACE_ENTRY(IOleInPlaceActiveObject)
	COM_INTERFACE_ENTRY(IOleControl)
	COM_INTERFACE_ENTRY(IOleObject)
	COM_INTERFACE_ENTRY(IPersistStreamInit)
	COM_INTERFACE_ENTRY2(IPersist, IPersistStreamInit)
	COM_INTERFACE_ENTRY(IConnectionPointContainer)
	COM_INTERFACE_ENTRY(IQuickActivate)
#ifndef _WIN32_WCE
	COM_INTERFACE_ENTRY(IDataObject)
#endif
	COM_INTERFACE_ENTRY(IProvideClassInfo)
	COM_INTERFACE_ENTRY(IProvideClassInfo2)
END_COM_MAP()

BEGIN_PROP_MAP(CFreeRdpCtrl)
	PROP_DATA_ENTRY("_cx", m_sizeExtent.cx, VT_UI4)
	PROP_DATA_ENTRY("_cy", m_sizeExtent.cy, VT_UI4)
	// Example entries
	// PROP_ENTRY_TYPE("Property Name", dispid, clsid, vtType)
	// PROP_PAGE(CLSID_StockColorPage)
END_PROP_MAP()

BEGIN_CONNECTION_POINT_MAP(CFreeRdpCtrl)
	CONNECTION_POINT_ENTRY(__uuidof(IMsTscAxEvents))
	CONNECTION_POINT_ENTRY(__uuidof(_IFreeRdpCtrlEvents))
END_CONNECTION_POINT_MAP()

BEGIN_MSG_MAP(CFreeRdpCtrl)
	CHAIN_MSG_MAP(CComControl<CFreeRdpCtrl>)
	MESSAGE_RANGE_HANDLER(WM_MOUSEFIRST, WM_MOUSELAST, OnUserInput)
	MESSAGE_RANGE_HANDLER(WM_KEYFIRST, WM_KEYLAST, OnUserInput)
	MESSAGE_HANDLER(WM_SETFOCUS, OnSetFocus)
	MESSAGE_HANDLER(WM_SIZE, OnSize)
	MESSAGE_HANDLER(WM_HSCROLL, OnHScroll)
	MESSAGE_HANDLER(WM_VSCROLL, OnVScroll)
	MESSAGE_HANDLER(WM_PARENTNOTIFY, OnParentNotify)
	MESSAGE_HANDLER(WM_AX_STARTFULLSCREEN, OnStartFullScreen)
	MESSAGE_HANDLER(WM_AX_ENDFULLSCREEN, OnEndFullScreen)
	MESSAGE_HANDLER(WM_TIMER, OnTimer)
	DEFAULT_REFLECTION_HANDLER()
END_MSG_MAP()

// Handler prototypes:
//  LRESULT MessageHandler(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
//  LRESULT CommandHandler(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled);
//  LRESULT NotifyHandler(int idCtrl, LPNMHDR pnmh, BOOL& bHandled);

// IViewObjectEx
	DECLARE_VIEW_STATUS(VIEWSTATUS_SOLIDBKGND | VIEWSTATUS_OPAQUE)

// IFreeRdpCtrl
public:
	HRESULT OnDrawAdvanced(ATL_DRAWINFO& di);
	void SetupScrollBars(int clientWidth, int clientHeight);
	LRESULT OnSetFocus(UINT, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
	LRESULT OnKillFocus(UINT, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
	LRESULT OnSize(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
	LRESULT OnUserInput(UINT, WPARAM wParam, LPARAM, BOOL&);
	LRESULT OnTimer(UINT, WPARAM, LPARAM lParam, BOOL&);
	LRESULT OnHScroll(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
	LRESULT OnVScroll(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
	static LRESULT InterceptProc(HWND, UINT, WPARAM, LPARAM);
	LRESULT OnParentNotify(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
	void PostTransferMessage();
	LRESULT OnStartFullScreen(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
	LRESULT OnEndFullScreen(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
	static LRESULT FullScreenProc(HWND, UINT, WPARAM, LPARAM);

	void TransferDefferedProperties();
	void StartFullScreen();
	void EndFullScreen();
	static INT_PTR FullScreenBarProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
	void ChangeToConnecting();
	void ChangeToConnected();
	void ChangeToLoginCompleted();
	void ChangeToDisconnected(long reason);
	static DWORD __stdcall TerminationMonitoringThread(LPVOID parameters);

	void ClearVirtualChannels();
	static CFreeRdpCtrl& GetInstanceFromVirtualInitHandle(LPVOID handle);
	static CFreeRdpCtrl& GetInstanceFromVirtualOpenHandle(DWORD handle);
	static void VCAPITYPE VirtualChannelOpenEvent(DWORD openHandle, UINT event, LPVOID pData, UINT32 dataLength, UINT32 totalLength, UINT32 dataFlags);
	static void VCAPITYPE VirtualChannelInitEvent(LPVOID pInitHandle, UINT event, LPVOID pData, UINT dataLength);
	static BOOL VCAPITYPE VirtualChannelEntry(PCHANNEL_ENTRY_POINTS pEntryPoints);
	HRESULT CreateVirtualChannels();
	HRESULT CreateVirtualChannels(CComBSTR& channelList);
	HRESULT SendOnVirtualChannel(CComBSTR& channel, BYTE* data, UINT dataSize);
	HRESULT SetVirtualChannelOptions(CStringA& chanName, long chanOptions);
	HRESULT GetVirtualChannelOptions(CStringA& chanName, long* pChanOptions);
	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct();
	void FinalRelease();

	// Members.
	enum ConnectionState
	{
		NOT_CONNECTED = 0,
		CONNECTED = 1,
		CONNECTING = 2,
	};

	struct ReadChannelBuffer
	{
		BYTE* buffer;
		UINT32 dataSize;
	};

	struct
	{
		BOOL BitmapCacheEnabled;
		BOOL BitmapPersistenceEnabled;
		BOOL CompressionEnabled;
		UINT32 KeyboardLayout;
		BOOL ClipBoardPrinterRedirectionEnabled;
		BOOL SmartSizing;
	} mDeffered;

	int mHorizontalPos;
	int mVerticalPos;
	BOOL mFullScreen;
	SHORT mConnectionState;
	CString mConnectingText;
	CString mDisconnectedText;
	CString mFullScreenTitle;
	CSimpleArray<CHANNEL_DEF> mVirtualChannels;
	LONG mMinutesToIdleTimeout;

	rdpContext* mContext;
	rdpSettings* mSettings;
	UINT_PTR mIdleTimer;
	HANDLE mTerminationMonitoringThread;
	HANDLE mFreeRdpThread;
	RDP_CLIENT_ENTRY_POINTS mClientEntryPoints;
	CHANNEL_ENTRY_POINTS_FREERDP mVirtualChannelEntryPoints;
	LPVOID mVirtualChannelHandle;
	CSimpleArray<DWORD> mOpenedChannelHandles;
	CSimpleArray<ReadChannelBuffer> mReadChannelBuffers;
	HANDLE mOpenedChannelsEvent;
	static CSimpleArray<CFreeRdpCtrl*> instances;
	BOOL mDisableScrollbars;
	BOOL mHasFocus;
	LONG_PTR mChildProc;
	CWindow mFreeRdpWindow;
	CWindow mFullScreenWindow;

	// IMsRdpClient9 interfaces methods.
	STDMETHOD(put_Server)(BSTR serverName);
	STDMETHOD(get_Server)(BSTR* retVal);
	STDMETHOD(put_Domain)(BSTR domainName);
	STDMETHOD(get_Domain)(BSTR* retVal);
	STDMETHOD(put_UserName)(BSTR userName);
	STDMETHOD(get_UserName)(BSTR* retVal);
	STDMETHOD(put_DisconnectedText)(BSTR text);
	STDMETHOD(get_DisconnectedText)(BSTR* retVal);
	STDMETHOD(put_ConnectingText)(BSTR text);
	STDMETHOD(get_ConnectingText)(BSTR* retVal);
	STDMETHOD(get_Connected)(SHORT* retVal);
	STDMETHOD(put_DesktopWidth)(LONG width);
	STDMETHOD(get_DesktopWidth)(LONG* retVal);
	STDMETHOD(put_DesktopHeight)(LONG height);
	STDMETHOD(get_DesktopHeight)(LONG* retVal);
	STDMETHOD(put_StartConnected)(LONG val);
	STDMETHOD(get_StartConnected)(LONG* retVal);
	STDMETHOD(get_HorizontalScrollBarVisible)(LONG* retVal);
	STDMETHOD(get_VerticalScrollBarVisible)(LONG* retVal);
	STDMETHOD(put_FullScreenTitle)(BSTR text);
	STDMETHOD(get_CipherStrength)(LONG* retVal);
	STDMETHOD(get_Version)(BSTR* retVal);
	STDMETHOD(get_SecuredSettingsEnabled)(LONG* retVal);
	STDMETHOD(get_SecuredSettings)(IMsTscSecuredSettings** retVal);
	STDMETHOD(get_AdvancedSettings)(IMsTscAdvancedSettings** retVal);
	STDMETHOD(get_Debugger)(IMsTscDebug** retVal);
	STDMETHOD(Connect)();
	STDMETHOD(Disconnect)();
	STDMETHOD(CreateVirtualChannels)(BSTR channelNames);
	STDMETHOD(SendOnVirtualChannel)(BSTR channelName, BSTR data);

	STDMETHOD(put_ColorDepth)(long pcolorDepth);
	STDMETHOD(get_ColorDepth)(long *pcolorDepth);
	STDMETHOD(get_AdvancedSettings2)(IMsRdpClientAdvancedSettings **ppAdvSettings);
	STDMETHOD(get_SecuredSettings2)(IMsRdpClientSecuredSettings **ppSecuredSettings);
	STDMETHOD(get_ExtendedDisconnectReason)(ExtendedDisconnectReasonCode *pExtendedDisconnectReason);
	STDMETHOD(put_FullScreen)(VARIANT_BOOL pfFullScreen);
	STDMETHOD(get_FullScreen)(VARIANT_BOOL *pfFullScreen);
	STDMETHOD(SetVirtualChannelOptions)(BSTR chanName, long chanOptions);
	STDMETHOD(GetVirtualChannelOptions)(BSTR chanName, long *pChanOptions);
	STDMETHOD(RequestClose)(ControlCloseStatus *pCloseStatus);

	STDMETHOD(get_AdvancedSettings3)(IMsRdpClientAdvancedSettings2 **ppAdvSettings);
	STDMETHOD(put_ConnectedStatusText)(BSTR pConnectedStatusText);
	STDMETHOD(get_ConnectedStatusText)(BSTR *pConnectedStatusText);

	STDMETHOD(get_AdvancedSettings4)(IMsRdpClientAdvancedSettings3 **ppAdvSettings);

	STDMETHOD(get_AdvancedSettings5)(IMsRdpClientAdvancedSettings4 **ppAdvSettings);

	STDMETHOD(get_TransportSettings)(IMsRdpClientTransportSettings **ppXportSet);
	STDMETHOD(get_AdvancedSettings6)(IMsRdpClientAdvancedSettings5 **ppAdvSettings);
	STDMETHOD(GetErrorDescription)(unsigned int disconnectReason, unsigned int ExtendedDisconnectReason, BSTR *pBstrErrorMsg);
	STDMETHOD(get_RemoteProgram)(ITSRemoteProgram **ppRemoteProgram);
	STDMETHOD(get_MsRdpClientShell)(IMsRdpClientShell **ppLauncher);

	STDMETHOD(get_AdvancedSettings7)(IMsRdpClientAdvancedSettings6 **ppAdvSettings);
	STDMETHOD(get_TransportSettings2)(IMsRdpClientTransportSettings2 **ppXportSet2);

	STDMETHOD(get_AdvancedSettings8)(IMsRdpClientAdvancedSettings7 **ppAdvSettings);
	STDMETHOD(get_TransportSettings3)(IMsRdpClientTransportSettings3 **ppXportSet3);
	STDMETHOD(GetStatusText)(unsigned int statusCode, BSTR *pBstrStatusText);
	STDMETHOD(get_SecuredSettings3)(IMsRdpClientSecuredSettings2 **ppSecuredSettings);
	STDMETHOD(get_RemoteProgram2)(ITSRemoteProgram2 **ppRemoteProgram);

	STDMETHOD(SendRemoteAction)(RemoteSessionActionType actionType);
	STDMETHOD(get_AdvancedSettings9)(IMsRdpClientAdvancedSettings8 **ppAdvSettings);
	STDMETHOD(Reconnect)(unsigned long ulWidth, unsigned long ulHeight, ControlReconnectStatus *pReconnectStatus);

	STDMETHOD(get_TransportSettings4)(IMsRdpClientTransportSettings4 **ppXportSet4);
	STDMETHOD(SyncSessionDisplaySettings)(void);
	STDMETHOD(UpdateSessionDisplaySettings)(unsigned long ulDesktopWidth, unsigned long ulDesktopHeight, unsigned long ulPhysicalWidth,
		unsigned long ulPhysicalHeight, unsigned long ulOrientation, unsigned long ulDesktopScaleFactor, unsigned long ulDeviceScaleFactor);
	STDMETHOD(attachEvent)(BSTR eventName, IDispatch *callback);
	STDMETHOD(detachEvent)(BSTR eventName, IDispatch *callback);

	// IMsRdpClientNonScriptable5 interfaces methods.
	STDMETHOD(put_ClearTextPassword)(BSTR rhs);
	STDMETHOD(put_PortablePassword)(BSTR pPortablePass);
	STDMETHOD(get_PortablePassword)(BSTR *pPortablePass);
	STDMETHOD(put_PortableSalt)(BSTR pPortableSalt);
	STDMETHOD(get_PortableSalt)(BSTR *pPortableSalt);
	STDMETHOD(put_BinaryPassword)(BSTR pBinaryPassword);
	STDMETHOD(get_BinaryPassword)(BSTR *pBinaryPassword);
	STDMETHOD(put_BinarySalt)(BSTR pSalt);
	STDMETHOD(get_BinarySalt)(BSTR *pSalt);
	STDMETHOD(ResetPassword)(void);

	STDMETHOD(NotifyRedirectDeviceChange)(UINT_PTR wParam, LONG_PTR lParam);
	STDMETHOD(SendKeys)(long numKeys, VARIANT_BOOL *pbArrayKeyUp, long *plKeyData);

	STDMETHOD(put_UIParentWindowHandle)(wireHWND phwndUIParentWindowHandle);
	STDMETHOD(get_UIParentWindowHandle)(wireHWND *phwndUIParentWindowHandle);

	STDMETHOD(put_ShowRedirectionWarningDialog)(VARIANT_BOOL pfShowRdrDlg);
	STDMETHOD(get_ShowRedirectionWarningDialog)(VARIANT_BOOL *pfShowRdrDlg);
	STDMETHOD(put_PromptForCredentials)(VARIANT_BOOL pfPrompt);
	STDMETHOD(get_PromptForCredentials)(VARIANT_BOOL *pfPrompt);
	STDMETHOD(put_NegotiateSecurityLayer)(VARIANT_BOOL pfNegotiate);
	STDMETHOD(get_NegotiateSecurityLayer)(VARIANT_BOOL *pfNegotiate);
	STDMETHOD(put_EnableCredSspSupport)(VARIANT_BOOL pfEnableSupport);
	STDMETHOD(get_EnableCredSspSupport)(VARIANT_BOOL *pfEnableSupport);
	STDMETHOD(put_RedirectDynamicDrives)(VARIANT_BOOL pfRedirectDynamicDrives);
	STDMETHOD(get_RedirectDynamicDrives)(VARIANT_BOOL *pfRedirectDynamicDrives);
	STDMETHOD(put_RedirectDynamicDevices)(VARIANT_BOOL pfRedirectDynamicDevices);
	STDMETHOD(get_RedirectDynamicDevices)(VARIANT_BOOL *pfRedirectDynamicDevices);
	STDMETHOD(get_DeviceCollection)(IMsRdpDeviceCollection **ppDeviceCollection);
	STDMETHOD(get_DriveCollection)(IMsRdpDriveCollection **ppDeviceCollection);
	STDMETHOD(put_WarnAboutSendingCredentials)(VARIANT_BOOL pfWarn);
	STDMETHOD(get_WarnAboutSendingCredentials)(VARIANT_BOOL *pfWarn);
	STDMETHOD(put_WarnAboutClipboardRedirection)(VARIANT_BOOL pfWarn);
	STDMETHOD(get_WarnAboutClipboardRedirection)(VARIANT_BOOL *pfWarn);
	STDMETHOD(put_ConnectionBarText)(BSTR pConnectionBarText);
	STDMETHOD(get_ConnectionBarText)(BSTR *pConnectionBarText);

	STDMETHOD(put_RedirectionWarningType)(RedirectionWarningType pWrnType);
	STDMETHOD(get_RedirectionWarningType)(RedirectionWarningType *pWrnType);
	STDMETHOD(put_MarkRdpSettingsSecure)(VARIANT_BOOL pfRdpSecure);
	STDMETHOD(get_MarkRdpSettingsSecure)(VARIANT_BOOL *pfRdpSecure);
	STDMETHOD(put_PublisherCertificateChain)(VARIANT *pVarCert);
	STDMETHOD(get_PublisherCertificateChain)(VARIANT *pVarCert);
	STDMETHOD(put_WarnAboutPrinterRedirection)(VARIANT_BOOL pfWarn);
	STDMETHOD(get_WarnAboutPrinterRedirection)(VARIANT_BOOL *pfWarn);
	STDMETHOD(put_AllowCredentialSaving)(VARIANT_BOOL pfAllowSave);
	STDMETHOD(get_AllowCredentialSaving)(VARIANT_BOOL *pfAllowSave);
	STDMETHOD(put_PromptForCredsOnClient)(VARIANT_BOOL pfPromptForCredsOnClient);
	STDMETHOD(get_PromptForCredsOnClient)(VARIANT_BOOL *pfPromptForCredsOnClient);
	STDMETHOD(put_LaunchedViaClientShellInterface)(VARIANT_BOOL pfLaunchedViaClientShellInterface);
	STDMETHOD(get_LaunchedViaClientShellInterface)(VARIANT_BOOL *pfLaunchedViaClientShellInterface);
	STDMETHOD(put_TrustedZoneSite)(VARIANT_BOOL pfIsTrustedZone);
	STDMETHOD(get_TrustedZoneSite)(VARIANT_BOOL *pfIsTrustedZone);

	STDMETHOD(put_UseMultimon)(VARIANT_BOOL pfUseMultimon);
	STDMETHOD(get_UseMultimon)(VARIANT_BOOL *pfUseMultimon);
	STDMETHOD(get_RemoteMonitorCount)(unsigned long *pcRemoteMonitors);
	STDMETHOD(GetRemoteMonitorsBoundingBox)(long *pLeft, long *pTop, long *pRight, long *pBottom);
	STDMETHOD(get_RemoteMonitorLayoutMatchesLocal)(VARIANT_BOOL *pfRemoteMatchesLocal);
	STDMETHOD(put_DisableConnectionBar)(VARIANT_BOOL rhs);
	STDMETHOD(put_DisableRemoteAppCapsCheck)(VARIANT_BOOL pfDisableRemoteAppCapsCheck);
	STDMETHOD(get_DisableRemoteAppCapsCheck)(VARIANT_BOOL *pfDisableRemoteAppCapsCheck);
	STDMETHOD(put_WarnAboutDirectXRedirection)(VARIANT_BOOL pfWarn);
	STDMETHOD(get_WarnAboutDirectXRedirection)(VARIANT_BOOL *pfWarn);
	STDMETHOD(put_AllowPromptingForCredentials)(VARIANT_BOOL pfAllow);
	STDMETHOD(get_AllowPromptingForCredentials)(VARIANT_BOOL *pfAllow);

	// IMsRdpPreferredRedirectionInfo interface methods.
	STDMETHOD(put_UseRedirectionServerName)(VARIANT_BOOL pVal);
	STDMETHOD(get_UseRedirectionServerName)(VARIANT_BOOL *pVal);

	// IMsRdpClientSecuredSettings2 interface methods.
	STDMETHOD(put_StartProgram)(BSTR pStartProgram);
	STDMETHOD(get_StartProgram)(BSTR *pStartProgram);
	STDMETHOD(put_WorkDir)(BSTR pWorkDir);
	STDMETHOD(get_WorkDir)(BSTR *pWorkDir);
	STDMETHOD(put_FullScreen)(long pfFullScreen);
	STDMETHOD(get_FullScreen)(long *pfFullScreen);

	STDMETHOD(put_KeyboardHookMode)(long pkeyboardHookMode);
	STDMETHOD(get_KeyboardHookMode)(long *pkeyboardHookMode);
	STDMETHOD(put_AudioRedirectionMode)(long pAudioRedirectionMode);
	STDMETHOD(get_AudioRedirectionMode)(long *pAudioRedirectionMode);

	STDMETHOD(get_PCB)(BSTR *bstrPCB);
	STDMETHOD(put_PCB)(BSTR bstrPCB);

	// IMsRdpClientAdvancedSettings8 interface methods.
	STDMETHOD(put_Compress)(long pcompress);
	STDMETHOD(get_Compress)(long *pcompress);
	STDMETHOD(put_BitmapPeristence)(long pbitmapPeristence);
	STDMETHOD(get_BitmapPeristence)(long *pbitmapPeristence);
	STDMETHOD(put_allowBackgroundInput)(long pallowBackgroundInput);
	STDMETHOD(get_allowBackgroundInput)(long *pallowBackgroundInput);
	STDMETHOD(put_KeyBoardLayoutStr)(BSTR rhs);
	STDMETHOD(put_PluginDlls)(BSTR rhs);
	STDMETHOD(put_IconFile)(BSTR rhs);
	STDMETHOD(put_IconIndex)(long rhs);
	STDMETHOD(put_ContainerHandledFullScreen)(long pContainerHandledFullScreen);
	STDMETHOD(get_ContainerHandledFullScreen)(long *pContainerHandledFullScreen);
	STDMETHOD(put_DisableRdpdr)(long pDisableRdpdr);
	STDMETHOD(get_DisableRdpdr)(long *pDisableRdpdr);

	STDMETHOD(put_SmoothScroll)(long psmoothScroll);
	STDMETHOD(get_SmoothScroll)(long *psmoothScroll);
	STDMETHOD(put_AcceleratorPassthrough)(long pacceleratorPassthrough);
	STDMETHOD(get_AcceleratorPassthrough)(long *pacceleratorPassthrough);
	STDMETHOD(put_ShadowBitmap)(long pshadowBitmap);
	STDMETHOD(get_ShadowBitmap)(long *pshadowBitmap);
	STDMETHOD(put_TransportType)(long ptransportType);
	STDMETHOD(get_TransportType)(long *ptransportType);
	STDMETHOD(put_SasSequence)(long psasSequence);
	STDMETHOD(get_SasSequence)(long *psasSequence);
	STDMETHOD(put_EncryptionEnabled)(long pencryptionEnabled);
	STDMETHOD(get_EncryptionEnabled)(long *pencryptionEnabled);
	STDMETHOD(put_DedicatedTerminal)(long pdedicatedTerminal);
	STDMETHOD(get_DedicatedTerminal)(long *pdedicatedTerminal);
	STDMETHOD(put_RDPPort)(long prdpPort);
	STDMETHOD(get_RDPPort)(long *prdpPort);
	STDMETHOD(put_EnableMouse)(long penableMouse);
	STDMETHOD(get_EnableMouse)(long *penableMouse);
	STDMETHOD(put_DisableCtrlAltDel)(long pdisableCtrlAltDel);
	STDMETHOD(get_DisableCtrlAltDel)(long *pdisableCtrlAltDel);
	STDMETHOD(put_EnableWindowsKey)(long penableWindowsKey);
	STDMETHOD(get_EnableWindowsKey)(long *penableWindowsKey);
	STDMETHOD(put_DoubleClickDetect)(long pdoubleClickDetect);
	STDMETHOD(get_DoubleClickDetect)(long *pdoubleClickDetect);
	STDMETHOD(put_MaximizeShell)(long pmaximizeShell);
	STDMETHOD(get_MaximizeShell)(long *pmaximizeShell);
	STDMETHOD(put_HotKeyFullScreen)(long photKeyFullScreen);
	STDMETHOD(get_HotKeyFullScreen)(long *photKeyFullScreen);
	STDMETHOD(put_HotKeyCtrlEsc)(long photKeyCtrlEsc);
	STDMETHOD(get_HotKeyCtrlEsc)(long *photKeyCtrlEsc);
	STDMETHOD(put_HotKeyAltEsc)(long photKeyAltEsc);
	STDMETHOD(get_HotKeyAltEsc)(long *photKeyAltEsc);
	STDMETHOD(put_HotKeyAltTab)(long photKeyAltTab);
	STDMETHOD(get_HotKeyAltTab)(long *photKeyAltTab);
	STDMETHOD(put_HotKeyAltShiftTab)(long photKeyAltShiftTab);
	STDMETHOD(get_HotKeyAltShiftTab)(long *photKeyAltShiftTab);
	STDMETHOD(put_HotKeyAltSpace)(long photKeyAltSpace);
	STDMETHOD(get_HotKeyAltSpace)(long *photKeyAltSpace);
	STDMETHOD(put_HotKeyCtrlAltDel)(long photKeyCtrlAltDel);
	STDMETHOD(get_HotKeyCtrlAltDel)(long *photKeyCtrlAltDel);
	STDMETHOD(put_orderDrawThreshold)(long porderDrawThreshold);
	STDMETHOD(get_orderDrawThreshold)(long *porderDrawThreshold);
	STDMETHOD(put_BitmapCacheSize)(long pbitmapCacheSize);
	STDMETHOD(get_BitmapCacheSize)(long *pbitmapCacheSize);
	STDMETHOD(put_BitmapVirtualCacheSize)(long pbitmapVirtualCacheSize);
	STDMETHOD(get_BitmapVirtualCacheSize)(long *pbitmapVirtualCacheSize);
	STDMETHOD(put_ScaleBitmapCachesByBPP)(long pbScale);
	STDMETHOD(get_ScaleBitmapCachesByBPP)(long *pbScale);
	STDMETHOD(put_NumBitmapCaches)(long pnumBitmapCaches);
	STDMETHOD(get_NumBitmapCaches)(long *pnumBitmapCaches);
	STDMETHOD(put_CachePersistenceActive)(long pcachePersistenceActive);
	STDMETHOD(get_CachePersistenceActive)(long *pcachePersistenceActive);
	STDMETHOD(put_PersistCacheDirectory)(BSTR rhs);
	STDMETHOD(put_brushSupportLevel)(long pbrushSupportLevel);
	STDMETHOD(get_brushSupportLevel)(long *pbrushSupportLevel);
	STDMETHOD(put_minInputSendInterval)(long pminInputSendInterval);
	STDMETHOD(get_minInputSendInterval)(long *pminInputSendInterval);
	STDMETHOD(put_InputEventsAtOnce)(long pinputEventsAtOnce);
	STDMETHOD(get_InputEventsAtOnce)(long *pinputEventsAtOnce);
	STDMETHOD(put_maxEventCount)(long pmaxEventCount);
	STDMETHOD(get_maxEventCount)(long *pmaxEventCount);
	STDMETHOD(put_keepAliveInterval)(long pkeepAliveInterval);
	STDMETHOD(get_keepAliveInterval)(long *pkeepAliveInterval);
	STDMETHOD(put_shutdownTimeout)(long pshutdownTimeout);
	STDMETHOD(get_shutdownTimeout)(long *pshutdownTimeout);
	STDMETHOD(put_overallConnectionTimeout)(long poverallConnectionTimeout);
	STDMETHOD(get_overallConnectionTimeout)(long *poverallConnectionTimeout);
	STDMETHOD(put_singleConnectionTimeout)(long psingleConnectionTimeout);
	STDMETHOD(get_singleConnectionTimeout)(long *psingleConnectionTimeout);
	STDMETHOD(put_KeyboardType)(long pkeyboardType);
	STDMETHOD(get_KeyboardType)(long *pkeyboardType);
	STDMETHOD(put_KeyboardSubType)(long pkeyboardSubType);
	STDMETHOD(get_KeyboardSubType)(long *pkeyboardSubType);
	STDMETHOD(put_KeyboardFunctionKey)(long pkeyboardFunctionKey);
	STDMETHOD(get_KeyboardFunctionKey)(long *pkeyboardFunctionKey);
	STDMETHOD(put_WinceFixedPalette)(long pwinceFixedPalette);
	STDMETHOD(get_WinceFixedPalette)(long *pwinceFixedPalette);
	STDMETHOD(put_ConnectToServerConsole)(VARIANT_BOOL pConnectToConsole);
	STDMETHOD(get_ConnectToServerConsole)(VARIANT_BOOL *pConnectToConsole);
	STDMETHOD(put_BitmapPersistence)(long pbitmapPersistence);
	STDMETHOD(get_BitmapPersistence)(long *pbitmapPersistence);
	STDMETHOD(put_MinutesToIdleTimeout)(long pminutesToIdleTimeout);
	STDMETHOD(get_MinutesToIdleTimeout)(long *pminutesToIdleTimeout);
	STDMETHOD(put_SmartSizing)(VARIANT_BOOL pfSmartSizing);
	STDMETHOD(get_SmartSizing)(VARIANT_BOOL *pfSmartSizing);
	STDMETHOD(put_RdpdrLocalPrintingDocName)(BSTR pLocalPrintingDocName);
	STDMETHOD(get_RdpdrLocalPrintingDocName)(BSTR *pLocalPrintingDocName);
	STDMETHOD(put_RdpdrClipCleanTempDirString)(BSTR clipCleanTempDirString);
	STDMETHOD(get_RdpdrClipCleanTempDirString)(BSTR *clipCleanTempDirString);
	STDMETHOD(put_RdpdrClipPasteInfoString)(BSTR clipPasteInfoString);
	STDMETHOD(get_RdpdrClipPasteInfoString)(BSTR *clipPasteInfoString);
	//STDMETHOD(put_ClearTextPassword)(BSTR rhs);
	STDMETHOD(put_DisplayConnectionBar)(VARIANT_BOOL pDisplayConnectionBar);
	STDMETHOD(get_DisplayConnectionBar)(VARIANT_BOOL *pDisplayConnectionBar);
	STDMETHOD(put_PinConnectionBar)(VARIANT_BOOL pPinConnectionBar);
	STDMETHOD(get_PinConnectionBar)(VARIANT_BOOL *pPinConnectionBar);
	STDMETHOD(put_GrabFocusOnConnect)(VARIANT_BOOL pfGrabFocusOnConnect);
	STDMETHOD(get_GrabFocusOnConnect)(VARIANT_BOOL *pfGrabFocusOnConnect);
	STDMETHOD(put_LoadBalanceInfo)(BSTR pLBInfo);
	STDMETHOD(get_LoadBalanceInfo)(BSTR *pLBInfo);
	STDMETHOD(put_RedirectDrives)(VARIANT_BOOL pRedirectDrives);
	STDMETHOD(get_RedirectDrives)(VARIANT_BOOL *pRedirectDrives);
	STDMETHOD(put_RedirectPrinters)(VARIANT_BOOL pRedirectPrinters);
	STDMETHOD(get_RedirectPrinters)(VARIANT_BOOL *pRedirectPrinters);
	STDMETHOD(put_RedirectPorts)(VARIANT_BOOL pRedirectPorts);
	STDMETHOD(get_RedirectPorts)(VARIANT_BOOL *pRedirectPorts);
	STDMETHOD(put_RedirectSmartCards)(VARIANT_BOOL pRedirectSmartCards);
	STDMETHOD(get_RedirectSmartCards)(VARIANT_BOOL *pRedirectSmartCards);
	STDMETHOD(put_BitmapVirtualCache16BppSize)(long pBitmapVirtualCache16BppSize);
	STDMETHOD(get_BitmapVirtualCache16BppSize)(long *pBitmapVirtualCache16BppSize);
	STDMETHOD(put_BitmapVirtualCache24BppSize)(long pBitmapVirtualCache24BppSize);
	STDMETHOD(get_BitmapVirtualCache24BppSize)(long *pBitmapVirtualCache24BppSize);
	STDMETHOD(put_PerformanceFlags)(long pDisableList);
	STDMETHOD(get_PerformanceFlags)(long *pDisableList);
	STDMETHOD(put_ConnectWithEndpoint)(VARIANT *rhs);
	STDMETHOD(put_NotifyTSPublicKey)(VARIANT_BOOL pfNotify);
	STDMETHOD(get_NotifyTSPublicKey)(VARIANT_BOOL *pfNotify);

	STDMETHOD(get_CanAutoReconnect)(VARIANT_BOOL *pfCanAutoReconnect);
	STDMETHOD(put_EnableAutoReconnect)(VARIANT_BOOL pfEnableAutoReconnect);
	STDMETHOD(get_EnableAutoReconnect)(VARIANT_BOOL *pfEnableAutoReconnect);
	STDMETHOD(put_MaxReconnectAttempts)(long pMaxReconnectAttempts);
	STDMETHOD(get_MaxReconnectAttempts)(long *pMaxReconnectAttempts);

	STDMETHOD(put_ConnectionBarShowMinimizeButton)(VARIANT_BOOL pfShowMinimize);
	STDMETHOD(get_ConnectionBarShowMinimizeButton)(VARIANT_BOOL *pfShowMinimize);
	STDMETHOD(put_ConnectionBarShowRestoreButton)(VARIANT_BOOL pfShowRestore);
	STDMETHOD(get_ConnectionBarShowRestoreButton)(VARIANT_BOOL *pfShowRestore);

	STDMETHOD(put_AuthenticationLevel)(unsigned int puiAuthLevel);
	STDMETHOD(get_AuthenticationLevel)(unsigned int *puiAuthLevel);

	STDMETHOD(put_RedirectClipboard)(VARIANT_BOOL pfRedirectClipboard);
	STDMETHOD(get_RedirectClipboard)(VARIANT_BOOL *pfRedirectClipboard);
	STDMETHOD(put_AudioRedirectionMode)(unsigned int puiAudioRedirectionMode);
	STDMETHOD(get_AudioRedirectionMode)(unsigned int *puiAudioRedirectionMode);
	STDMETHOD(put_ConnectionBarShowPinButton)(VARIANT_BOOL pfShowPin);
	STDMETHOD(get_ConnectionBarShowPinButton)(VARIANT_BOOL *pfShowPin);
	STDMETHOD(put_PublicMode)(VARIANT_BOOL pfPublicMode);
	STDMETHOD(get_PublicMode)(VARIANT_BOOL *pfPublicMode);
	STDMETHOD(put_RedirectDevices)(VARIANT_BOOL pfRedirectPnPDevices);
	STDMETHOD(get_RedirectDevices)(VARIANT_BOOL *pfRedirectPnPDevices);
	STDMETHOD(put_RedirectPOSDevices)(VARIANT_BOOL pfRedirectPOSDevices);
	STDMETHOD(get_RedirectPOSDevices)(VARIANT_BOOL *pfRedirectPOSDevices);
	STDMETHOD(put_BitmapVirtualCache32BppSize)(long pBitmapVirtualCache32BppSize);
	STDMETHOD(get_BitmapVirtualCache32BppSize)(long *pBitmapVirtualCache32BppSize);

	STDMETHOD(put_RelativeMouseMode)(VARIANT_BOOL pfRelativeMouseMode);
	STDMETHOD(get_RelativeMouseMode)(VARIANT_BOOL *pfRelativeMouseMode);
	STDMETHOD(get_AuthenticationServiceClass)(BSTR *pbstrAuthServiceClass);
	STDMETHOD(put_AuthenticationServiceClass)(BSTR pbstrAuthServiceClass);
	//STDMETHOD(get_PCB)(BSTR *bstrPCB);
	//STDMETHOD(put_PCB)(BSTR bstrPCB);
	STDMETHOD(put_HotKeyFocusReleaseLeft)(long HotKeyFocusReleaseLeft);
	STDMETHOD(get_HotKeyFocusReleaseLeft)(long *HotKeyFocusReleaseLeft);
	STDMETHOD(put_HotKeyFocusReleaseRight)(long HotKeyFocusReleaseRight);
	STDMETHOD(get_HotKeyFocusReleaseRight)(long *HotKeyFocusReleaseRight);
	//STDMETHOD(put_EnableCredSspSupport)(VARIANT_BOOL pfEnableSupport);
	//STDMETHOD(get_EnableCredSspSupport)(VARIANT_BOOL *pfEnableSupport);
	STDMETHOD(get_AuthenticationType)(unsigned int *puiAuthType);
	STDMETHOD(put_ConnectToAdministerServer)(VARIANT_BOOL pConnectToAdministerServer);
	STDMETHOD(get_ConnectToAdministerServer)(VARIANT_BOOL *pConnectToAdministerServer);

	STDMETHOD(put_AudioCaptureRedirectionMode)(VARIANT_BOOL pfRedir);
	STDMETHOD(get_AudioCaptureRedirectionMode)(VARIANT_BOOL *pfRedir);
	STDMETHOD(put_VideoPlaybackMode)(unsigned int pVideoPlaybackMode);
	STDMETHOD(get_VideoPlaybackMode)(unsigned int *pVideoPlaybackMode);
	STDMETHOD(put_EnableSuperPan)(VARIANT_BOOL pfEnableSuperPan);
	STDMETHOD(get_EnableSuperPan)(VARIANT_BOOL *pfEnableSuperPan);
	STDMETHOD(put_SuperPanAccelerationFactor)(unsigned long puAccelFactor);
	STDMETHOD(get_SuperPanAccelerationFactor)(unsigned long *puAccelFactor);
	//STDMETHOD(put_NegotiateSecurityLayer)(VARIANT_BOOL pfNegotiate);
	//STDMETHOD(get_NegotiateSecurityLayer)(VARIANT_BOOL *pfNegotiate);
	STDMETHOD(put_AudioQualityMode)(unsigned int pAudioQualityMode);
	STDMETHOD(get_AudioQualityMode)(unsigned int *pAudioQualityMode);
	STDMETHOD(put_RedirectDirectX)(VARIANT_BOOL pfRedirectDirectX);
	STDMETHOD(get_RedirectDirectX)(VARIANT_BOOL *pfRedirectDirectX);
	STDMETHOD(put_NetworkConnectionType)(unsigned int pConnectionType);
	STDMETHOD(get_NetworkConnectionType)(unsigned int *pConnectionType);

	STDMETHOD(put_BandwidthDetection)(VARIANT_BOOL pfAutodetect);
	STDMETHOD(get_BandwidthDetection)(VARIANT_BOOL *pfAutodetect);
	STDMETHOD(put_ClientProtocolSpec)(ClientSpec pClientMode);
	STDMETHOD(get_ClientProtocolSpec)(ClientSpec *pClientMode);

	// IMsRdpClientTransportSettings4 interface methods.
	STDMETHOD(put_GatewayHostname)(BSTR pProxyHostname);
	STDMETHOD(get_GatewayHostname)(BSTR *pProxyHostname);
	STDMETHOD(put_GatewayUsageMethod)(unsigned long pulProxyUsageMethod);
	STDMETHOD(get_GatewayUsageMethod)(unsigned long *pulProxyUsageMethod);
	STDMETHOD(put_GatewayProfileUsageMethod)(unsigned long pulProxyProfileUsageMethod);
	STDMETHOD(get_GatewayProfileUsageMethod)(unsigned long *pulProxyProfileUsageMethod);
	STDMETHOD(put_GatewayCredsSource)(unsigned long pulProxyCredsSource);
	STDMETHOD(get_GatewayCredsSource)(unsigned long *pulProxyCredsSource);
	STDMETHOD(put_GatewayUserSelectedCredsSource)(unsigned long pulProxyCredsSource);
	STDMETHOD(get_GatewayUserSelectedCredsSource)(unsigned long *pulProxyCredsSource);
	STDMETHOD(get_GatewayIsSupported)(long *pfProxyIsSupported);
	STDMETHOD(get_GatewayDefaultUsageMethod)(unsigned long *pulProxyDefaultUsageMethod);

	STDMETHOD(put_GatewayCredSharing)(unsigned long pulProxyCredSharing);
	STDMETHOD(get_GatewayCredSharing)(unsigned long *pulProxyCredSharing);
	STDMETHOD(put_GatewayPreAuthRequirement)(unsigned long pulProxyPreAuthRequirement);
	STDMETHOD(get_GatewayPreAuthRequirement)(unsigned long *pulProxyPreAuthRequirement);
	STDMETHOD(put_GatewayPreAuthServerAddr)(BSTR pbstrProxyPreAuthServerAddr);
	STDMETHOD(get_GatewayPreAuthServerAddr)(BSTR *pbstrProxyPreAuthServerAddr);
	STDMETHOD(put_GatewaySupportUrl)(BSTR pbstrProxySupportUrl);
	STDMETHOD(get_GatewaySupportUrl)(BSTR *pbstrProxySupportUrl);
	STDMETHOD(put_GatewayEncryptedOtpCookie)(BSTR pbstrEncryptedOtpCookie);
	STDMETHOD(get_GatewayEncryptedOtpCookie)(BSTR *pbstrEncryptedOtpCookie);
	STDMETHOD(put_GatewayEncryptedOtpCookieSize)(unsigned long pulEncryptedOtpCookieSize);
	STDMETHOD(get_GatewayEncryptedOtpCookieSize)(unsigned long *pulEncryptedOtpCookieSize);
	STDMETHOD(put_GatewayUsername)(BSTR pProxyUsername);
	STDMETHOD(get_GatewayUsername)(BSTR *pProxyUsername);
	STDMETHOD(put_GatewayDomain)(BSTR pProxyDomain);
	STDMETHOD(get_GatewayDomain)(BSTR *pProxyDomain);
	STDMETHOD(put_GatewayPassword)(BSTR rhs);

	STDMETHOD(put_GatewayCredSourceCookie)(unsigned long pulProxyCredSourceCookie);
	STDMETHOD(get_GatewayCredSourceCookie)(unsigned long *pulProxyCredSourceCookie);
	STDMETHOD(put_GatewayAuthCookieServerAddr)(BSTR pbstrProxyAuthCookieServerAddr);
	STDMETHOD(get_GatewayAuthCookieServerAddr)(BSTR *pbstrProxyAuthCookieServerAddr);
	STDMETHOD(put_GatewayEncryptedAuthCookie)(BSTR pbstrEncryptedAuthCookie);
	STDMETHOD(get_GatewayEncryptedAuthCookie)(BSTR *pbstrEncryptedAuthCookie);
	STDMETHOD(put_GatewayEncryptedAuthCookieSize)(unsigned long pulEncryptedAuthCookieSize);
	STDMETHOD(get_GatewayEncryptedAuthCookieSize)(unsigned long *pulEncryptedAuthCookieSize);
	STDMETHOD(put_GatewayAuthLoginPage)(BSTR pbstrProxyAuthLoginPage);
	STDMETHOD(get_GatewayAuthLoginPage)(BSTR *pbstrProxyAuthLoginPage);

	STDMETHOD(put_GatewayBrokeringType)(unsigned long rhs);

	// ITSRemoteProgram2 interface methods.
	STDMETHOD(put_RemoteProgramMode)(VARIANT_BOOL pvboolRemoteProgramMode);
	STDMETHOD(get_RemoteProgramMode)(VARIANT_BOOL *pvboolRemoteProgramMode);
	STDMETHOD(ServerStartProgram)(BSTR bstrExecutablePath, BSTR bstrFilePath, BSTR bstrWorkingDirectory,
		VARIANT_BOOL vbExpandEnvVarInWorkingDirectoryOnServer, BSTR bstrArguments, VARIANT_BOOL vbExpandEnvVarInArgumentsOnServer);

	STDMETHOD(put_RemoteApplicationName)(BSTR rhs);
	STDMETHOD(put_RemoteApplicationProgram)(BSTR rhs);
	STDMETHOD(put_RemoteApplicationArgs)(BSTR rhs);

	// IMsRdpClientShell interface methods.
	STDMETHOD(Launch)(void);
	STDMETHOD(put_RdpFileContents)(BSTR pszRdpFile);
	STDMETHOD(get_RdpFileContents)(BSTR *pszRdpFile);
	STDMETHOD(SetRdpProperty)(BSTR szProperty, VARIANT Value);
	STDMETHOD(GetRdpProperty)(BSTR szProperty, VARIANT *pValue);
	STDMETHOD(get_IsRemoteProgramClientInstalled)(VARIANT_BOOL *pbClientInstalled);
	//STDMETHOD(put_PublicMode)(VARIANT_BOOL pfPublicMode);
	//STDMETHOD(get_PublicMode)(VARIANT_BOOL *pfPublicMode);
	STDMETHOD(ShowTrustedSitesManagementDialog)(void);

	// IMsRdpDevice interface methods.
	STDMETHOD(get_DeviceInstanceId)(BSTR *pDevInstanceId);
	STDMETHOD(get_FriendlyName)(BSTR *pFriendlyName);
	STDMETHOD(get_DeviceDescription)(BSTR *pDeviceDescription);
	STDMETHOD(put_RedirectionState)(VARIANT_BOOL pvboolRedirState);
	STDMETHOD(get_RedirectionState)(VARIANT_BOOL *pvboolRedirState);

	// IMsRdpDeviceCollection interface methods.
	STDMETHOD(RescanDevices)(VARIANT_BOOL vboolDynRedir);
	STDMETHOD(get_DeviceByIndex)(unsigned long index, IMsRdpDevice **ppDevice);
	STDMETHOD(get_DeviceById)(BSTR devInstanceId, IMsRdpDevice **ppDevice);
	STDMETHOD(get_DeviceCount)(unsigned long *pDeviceCount);

	// IMsRdpDrive interface methods.
	STDMETHOD(get_Name)(BSTR *pName);
	//STDMETHOD(put_RedirectionState)(VARIANT_BOOL pvboolRedirState);
	//STDMETHOD(get_RedirectionState)(VARIANT_BOOL *pvboolRedirState);

	// IMsRdpDriveCollection interface methods.
	STDMETHOD(RescanDrives)(VARIANT_BOOL vboolDynRedir);
	STDMETHOD(get_DriveByIndex)(unsigned long index, IMsRdpDrive **ppDevice);
	STDMETHOD(get_DriveCount)(unsigned long *pDriveCount);

	// IMsTscDebug interface methods.
	STDMETHOD(put_HatchBitmapPDU)(long phatchBitmapPDU);
	STDMETHOD(get_HatchBitmapPDU)(long *phatchBitmapPDU);
	STDMETHOD(put_HatchSSBOrder)(long phatchSSBOrder);
	STDMETHOD(get_HatchSSBOrder)(long *phatchSSBOrder);
	STDMETHOD(put_HatchMembltOrder)(long phatchMembltOrder);
	STDMETHOD(get_HatchMembltOrder)(long *phatchMembltOrder);
	STDMETHOD(put_HatchIndexPDU)(long phatchIndexPDU);
	STDMETHOD(get_HatchIndexPDU)(long *phatchIndexPDU);
	STDMETHOD(put_LabelMemblt)(long plabelMemblt);
	STDMETHOD(get_LabelMemblt)(long *plabelMemblt);
	STDMETHOD(put_BitmapCacheMonitor)(long pbitmapCacheMonitor);
	STDMETHOD(get_BitmapCacheMonitor)(long *pbitmapCacheMonitor);
	STDMETHOD(put_MallocFailuresPercent)(long pmallocFailuresPercent);
	STDMETHOD(get_MallocFailuresPercent)(long *pmallocFailuresPercent);
	STDMETHOD(put_MallocHugeFailuresPercent)(long pmallocHugeFailuresPercent);
	STDMETHOD(get_MallocHugeFailuresPercent)(long *pmallocHugeFailuresPercent);
	STDMETHOD(put_NetThroughput)(long NetThroughput);
	STDMETHOD(get_NetThroughput)(long *NetThroughput);
	STDMETHOD(put_CLXCmdLine)(BSTR pCLXCmdLine);
	STDMETHOD(get_CLXCmdLine)(BSTR *pCLXCmdLine);
	STDMETHOD(put_CLXDll)(BSTR pCLXDll);
	STDMETHOD(get_CLXDll)(BSTR *pCLXDll);
	STDMETHOD(put_RemoteProgramsHatchVisibleRegion)(long pcbHatch);
	STDMETHOD(get_RemoteProgramsHatchVisibleRegion)(long *pcbHatch);
	STDMETHOD(put_RemoteProgramsHatchVisibleNoDataRegion)(long pcbHatch);
	STDMETHOD(get_RemoteProgramsHatchVisibleNoDataRegion)(long *pcbHatch);
	STDMETHOD(put_RemoteProgramsHatchNonVisibleRegion)(long pcbHatch);
	STDMETHOD(get_RemoteProgramsHatchNonVisibleRegion)(long *pcbHatch);
	STDMETHOD(put_RemoteProgramsHatchWindow)(long pcbHatch);
	STDMETHOD(get_RemoteProgramsHatchWindow)(long *pcbHatch);
	STDMETHOD(put_RemoteProgramsStayConnectOnBadCaps)(long pcbStayConnected);
	STDMETHOD(get_RemoteProgramsStayConnectOnBadCaps)(long *pcbStayConnected);
	STDMETHOD(get_ControlType)(unsigned int *pControlType);
	STDMETHOD(put_DecodeGfx)(VARIANT_BOOL rhs);
};

OBJECT_ENTRY_AUTO(__uuidof(FreeRdpCtrl), CFreeRdpCtrl)
