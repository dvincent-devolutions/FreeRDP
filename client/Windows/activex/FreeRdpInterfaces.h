

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Thu Apr 16 14:03:25 2015
 */
/* Compiler settings for FreeRdpInterfaces.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __FreeRdpInterfaces_h__
#define __FreeRdpInterfaces_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___DFreeRdpActivex_FWD_DEFINED__
#define ___DFreeRdpActivex_FWD_DEFINED__
typedef interface _DFreeRdpActivex _DFreeRdpActivex;

#endif 	/* ___DFreeRdpActivex_FWD_DEFINED__ */


#ifndef ___DFreeRdpActivexEvents_FWD_DEFINED__
#define ___DFreeRdpActivexEvents_FWD_DEFINED__
typedef interface _DFreeRdpActivexEvents _DFreeRdpActivexEvents;

#endif 	/* ___DFreeRdpActivexEvents_FWD_DEFINED__ */


#ifndef __IMsTscSecuredSettings_FWD_DEFINED__
#define __IMsTscSecuredSettings_FWD_DEFINED__
typedef interface IMsTscSecuredSettings IMsTscSecuredSettings;

#endif 	/* __IMsTscSecuredSettings_FWD_DEFINED__ */


#ifndef __IMsRdpClientSecuredSettings_FWD_DEFINED__
#define __IMsRdpClientSecuredSettings_FWD_DEFINED__
typedef interface IMsRdpClientSecuredSettings IMsRdpClientSecuredSettings;

#endif 	/* __IMsRdpClientSecuredSettings_FWD_DEFINED__ */


#ifndef __IMsRdpClientSecuredSettings2_FWD_DEFINED__
#define __IMsRdpClientSecuredSettings2_FWD_DEFINED__
typedef interface IMsRdpClientSecuredSettings2 IMsRdpClientSecuredSettings2;

#endif 	/* __IMsRdpClientSecuredSettings2_FWD_DEFINED__ */


#ifndef __IMsTscAdvancedSettings_FWD_DEFINED__
#define __IMsTscAdvancedSettings_FWD_DEFINED__
typedef interface IMsTscAdvancedSettings IMsTscAdvancedSettings;

#endif 	/* __IMsTscAdvancedSettings_FWD_DEFINED__ */


#ifndef __IMsRdpClientAdvancedSettings_FWD_DEFINED__
#define __IMsRdpClientAdvancedSettings_FWD_DEFINED__
typedef interface IMsRdpClientAdvancedSettings IMsRdpClientAdvancedSettings;

#endif 	/* __IMsRdpClientAdvancedSettings_FWD_DEFINED__ */


#ifndef __IMsRdpClientAdvancedSettings2_FWD_DEFINED__
#define __IMsRdpClientAdvancedSettings2_FWD_DEFINED__
typedef interface IMsRdpClientAdvancedSettings2 IMsRdpClientAdvancedSettings2;

#endif 	/* __IMsRdpClientAdvancedSettings2_FWD_DEFINED__ */


#ifndef __IMsRdpClientAdvancedSettings3_FWD_DEFINED__
#define __IMsRdpClientAdvancedSettings3_FWD_DEFINED__
typedef interface IMsRdpClientAdvancedSettings3 IMsRdpClientAdvancedSettings3;

#endif 	/* __IMsRdpClientAdvancedSettings3_FWD_DEFINED__ */


#ifndef __IMsRdpClientAdvancedSettings4_FWD_DEFINED__
#define __IMsRdpClientAdvancedSettings4_FWD_DEFINED__
typedef interface IMsRdpClientAdvancedSettings4 IMsRdpClientAdvancedSettings4;

#endif 	/* __IMsRdpClientAdvancedSettings4_FWD_DEFINED__ */


#ifndef __IMsRdpClientAdvancedSettings5_FWD_DEFINED__
#define __IMsRdpClientAdvancedSettings5_FWD_DEFINED__
typedef interface IMsRdpClientAdvancedSettings5 IMsRdpClientAdvancedSettings5;

#endif 	/* __IMsRdpClientAdvancedSettings5_FWD_DEFINED__ */


#ifndef __IMsRdpClientAdvancedSettings6_FWD_DEFINED__
#define __IMsRdpClientAdvancedSettings6_FWD_DEFINED__
typedef interface IMsRdpClientAdvancedSettings6 IMsRdpClientAdvancedSettings6;

#endif 	/* __IMsRdpClientAdvancedSettings6_FWD_DEFINED__ */


#ifndef __IMsRdpClientAdvancedSettings7_FWD_DEFINED__
#define __IMsRdpClientAdvancedSettings7_FWD_DEFINED__
typedef interface IMsRdpClientAdvancedSettings7 IMsRdpClientAdvancedSettings7;

#endif 	/* __IMsRdpClientAdvancedSettings7_FWD_DEFINED__ */


#ifndef __IMsRdpClientAdvancedSettings8_FWD_DEFINED__
#define __IMsRdpClientAdvancedSettings8_FWD_DEFINED__
typedef interface IMsRdpClientAdvancedSettings8 IMsRdpClientAdvancedSettings8;

#endif 	/* __IMsRdpClientAdvancedSettings8_FWD_DEFINED__ */


#ifndef __IMsRdpClientTransportSettings_FWD_DEFINED__
#define __IMsRdpClientTransportSettings_FWD_DEFINED__
typedef interface IMsRdpClientTransportSettings IMsRdpClientTransportSettings;

#endif 	/* __IMsRdpClientTransportSettings_FWD_DEFINED__ */


#ifndef __IMsRdpClientTransportSettings2_FWD_DEFINED__
#define __IMsRdpClientTransportSettings2_FWD_DEFINED__
typedef interface IMsRdpClientTransportSettings2 IMsRdpClientTransportSettings2;

#endif 	/* __IMsRdpClientTransportSettings2_FWD_DEFINED__ */


#ifndef __IMsRdpClientTransportSettings3_FWD_DEFINED__
#define __IMsRdpClientTransportSettings3_FWD_DEFINED__
typedef interface IMsRdpClientTransportSettings3 IMsRdpClientTransportSettings3;

#endif 	/* __IMsRdpClientTransportSettings3_FWD_DEFINED__ */


#ifndef __IMsRdpClientTransportSettings4_FWD_DEFINED__
#define __IMsRdpClientTransportSettings4_FWD_DEFINED__
typedef interface IMsRdpClientTransportSettings4 IMsRdpClientTransportSettings4;

#endif 	/* __IMsRdpClientTransportSettings4_FWD_DEFINED__ */


#ifndef __ITSRemoteProgram_FWD_DEFINED__
#define __ITSRemoteProgram_FWD_DEFINED__
typedef interface ITSRemoteProgram ITSRemoteProgram;

#endif 	/* __ITSRemoteProgram_FWD_DEFINED__ */


#ifndef __ITSRemoteProgram2_FWD_DEFINED__
#define __ITSRemoteProgram2_FWD_DEFINED__
typedef interface ITSRemoteProgram2 ITSRemoteProgram2;

#endif 	/* __ITSRemoteProgram2_FWD_DEFINED__ */


#ifndef __IMsRdpClientShell_FWD_DEFINED__
#define __IMsRdpClientShell_FWD_DEFINED__
typedef interface IMsRdpClientShell IMsRdpClientShell;

#endif 	/* __IMsRdpClientShell_FWD_DEFINED__ */


#ifndef __IMsRdpDevice_FWD_DEFINED__
#define __IMsRdpDevice_FWD_DEFINED__
typedef interface IMsRdpDevice IMsRdpDevice;

#endif 	/* __IMsRdpDevice_FWD_DEFINED__ */


#ifndef __IMsRdpDeviceCollection_FWD_DEFINED__
#define __IMsRdpDeviceCollection_FWD_DEFINED__
typedef interface IMsRdpDeviceCollection IMsRdpDeviceCollection;

#endif 	/* __IMsRdpDeviceCollection_FWD_DEFINED__ */


#ifndef __IMsRdpDrive_FWD_DEFINED__
#define __IMsRdpDrive_FWD_DEFINED__
typedef interface IMsRdpDrive IMsRdpDrive;

#endif 	/* __IMsRdpDrive_FWD_DEFINED__ */


#ifndef __IMsRdpDriveCollection_FWD_DEFINED__
#define __IMsRdpDriveCollection_FWD_DEFINED__
typedef interface IMsRdpDriveCollection IMsRdpDriveCollection;

#endif 	/* __IMsRdpDriveCollection_FWD_DEFINED__ */


#ifndef __IMsTscNonScriptable_FWD_DEFINED__
#define __IMsTscNonScriptable_FWD_DEFINED__
typedef interface IMsTscNonScriptable IMsTscNonScriptable;

#endif 	/* __IMsTscNonScriptable_FWD_DEFINED__ */


#ifndef __IMsRdpClientNonScriptable_FWD_DEFINED__
#define __IMsRdpClientNonScriptable_FWD_DEFINED__
typedef interface IMsRdpClientNonScriptable IMsRdpClientNonScriptable;

#endif 	/* __IMsRdpClientNonScriptable_FWD_DEFINED__ */


#ifndef __IMsRdpClientNonScriptable2_FWD_DEFINED__
#define __IMsRdpClientNonScriptable2_FWD_DEFINED__
typedef interface IMsRdpClientNonScriptable2 IMsRdpClientNonScriptable2;

#endif 	/* __IMsRdpClientNonScriptable2_FWD_DEFINED__ */


#ifndef __IMsRdpClientNonScriptable3_FWD_DEFINED__
#define __IMsRdpClientNonScriptable3_FWD_DEFINED__
typedef interface IMsRdpClientNonScriptable3 IMsRdpClientNonScriptable3;

#endif 	/* __IMsRdpClientNonScriptable3_FWD_DEFINED__ */


#ifndef __IMsRdpClientNonScriptable4_FWD_DEFINED__
#define __IMsRdpClientNonScriptable4_FWD_DEFINED__
typedef interface IMsRdpClientNonScriptable4 IMsRdpClientNonScriptable4;

#endif 	/* __IMsRdpClientNonScriptable4_FWD_DEFINED__ */


#ifndef __IMsRdpClientNonScriptable5_FWD_DEFINED__
#define __IMsRdpClientNonScriptable5_FWD_DEFINED__
typedef interface IMsRdpClientNonScriptable5 IMsRdpClientNonScriptable5;

#endif 	/* __IMsRdpClientNonScriptable5_FWD_DEFINED__ */


#ifndef __IMsRdpPreferredRedirectionInfo_FWD_DEFINED__
#define __IMsRdpPreferredRedirectionInfo_FWD_DEFINED__
typedef interface IMsRdpPreferredRedirectionInfo IMsRdpPreferredRedirectionInfo;

#endif 	/* __IMsRdpPreferredRedirectionInfo_FWD_DEFINED__ */


#ifndef __IMsTscDebug_FWD_DEFINED__
#define __IMsTscDebug_FWD_DEFINED__
typedef interface IMsTscDebug IMsTscDebug;

#endif 	/* __IMsTscDebug_FWD_DEFINED__ */


#ifndef __IMsTscAx_Redist_FWD_DEFINED__
#define __IMsTscAx_Redist_FWD_DEFINED__
typedef interface IMsTscAx_Redist IMsTscAx_Redist;

#endif 	/* __IMsTscAx_Redist_FWD_DEFINED__ */


#ifndef __IMsTscAx_FWD_DEFINED__
#define __IMsTscAx_FWD_DEFINED__
typedef interface IMsTscAx IMsTscAx;

#endif 	/* __IMsTscAx_FWD_DEFINED__ */


#ifndef __IMsRdpClient_FWD_DEFINED__
#define __IMsRdpClient_FWD_DEFINED__
typedef interface IMsRdpClient IMsRdpClient;

#endif 	/* __IMsRdpClient_FWD_DEFINED__ */


#ifndef __IMsRdpClient2_FWD_DEFINED__
#define __IMsRdpClient2_FWD_DEFINED__
typedef interface IMsRdpClient2 IMsRdpClient2;

#endif 	/* __IMsRdpClient2_FWD_DEFINED__ */


#ifndef __IMsRdpClient3_FWD_DEFINED__
#define __IMsRdpClient3_FWD_DEFINED__
typedef interface IMsRdpClient3 IMsRdpClient3;

#endif 	/* __IMsRdpClient3_FWD_DEFINED__ */


#ifndef __IMsRdpClient4_FWD_DEFINED__
#define __IMsRdpClient4_FWD_DEFINED__
typedef interface IMsRdpClient4 IMsRdpClient4;

#endif 	/* __IMsRdpClient4_FWD_DEFINED__ */


#ifndef __IMsRdpClient5_FWD_DEFINED__
#define __IMsRdpClient5_FWD_DEFINED__
typedef interface IMsRdpClient5 IMsRdpClient5;

#endif 	/* __IMsRdpClient5_FWD_DEFINED__ */


#ifndef __IMsRdpClient6_FWD_DEFINED__
#define __IMsRdpClient6_FWD_DEFINED__
typedef interface IMsRdpClient6 IMsRdpClient6;

#endif 	/* __IMsRdpClient6_FWD_DEFINED__ */


#ifndef __IMsRdpClient7_FWD_DEFINED__
#define __IMsRdpClient7_FWD_DEFINED__
typedef interface IMsRdpClient7 IMsRdpClient7;

#endif 	/* __IMsRdpClient7_FWD_DEFINED__ */


#ifndef __IMsRdpClient8_FWD_DEFINED__
#define __IMsRdpClient8_FWD_DEFINED__
typedef interface IMsRdpClient8 IMsRdpClient8;

#endif 	/* __IMsRdpClient8_FWD_DEFINED__ */


#ifndef __IMsRdpClient9_FWD_DEFINED__
#define __IMsRdpClient9_FWD_DEFINED__
typedef interface IMsRdpClient9 IMsRdpClient9;

#endif 	/* __IMsRdpClient9_FWD_DEFINED__ */


#ifndef __IMsTscAxEvents_FWD_DEFINED__
#define __IMsTscAxEvents_FWD_DEFINED__
typedef interface IMsTscAxEvents IMsTscAxEvents;

#endif 	/* __IMsTscAxEvents_FWD_DEFINED__ */


#ifndef __FreeRdpActivex_FWD_DEFINED__
#define __FreeRdpActivex_FWD_DEFINED__

#ifdef __cplusplus
typedef class FreeRdpActivex FreeRdpActivex;
#else
typedef struct FreeRdpActivex FreeRdpActivex;
#endif /* __cplusplus */

#endif 	/* __FreeRdpActivex_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_FreeRdpInterfaces_0000_0000 */
/* [local] */ 

#pragma once
#pragma region Desktop Family
#pragma endregion



extern RPC_IF_HANDLE __MIDL_itf_FreeRdpInterfaces_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_FreeRdpInterfaces_0000_0000_v0_0_s_ifspec;


#ifndef __FreeRdpActivex_LIBRARY_DEFINED__
#define __FreeRdpActivex_LIBRARY_DEFINED__

/* library FreeRdpActivex */
/* [helpstring][version][uuid] */ 

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_FreeRdpInterfaces_0001_0012_0001
    {
        FullMode	= 0,
        ThinClientMode	= 1,
        SmallCacheMode	= 2
    } 	ClientSpec;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_FreeRdpInterfaces_0001_0028_0001
    {
        RedirectionWarningTypeDefault	= 0,
        RedirectionWarningTypeUnsigned	= 1,
        RedirectionWarningTypeUnknown	= 2,
        RedirectionWarningTypeUser	= 3,
        RedirectionWarningTypeThirdPartySigned	= 4,
        RedirectionWarningTypeTrusted	= 5,
        RedirectionWarningTypeMax	= 5
    } 	RedirectionWarningType;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_FreeRdpInterfaces_0001_0034_0001
    {
        exDiscReasonNoInfo	= 0,
        exDiscReasonAPIInitiatedDisconnect	= 1,
        exDiscReasonAPIInitiatedLogoff	= 2,
        exDiscReasonServerIdleTimeout	= 3,
        exDiscReasonServerLogonTimeout	= 4,
        exDiscReasonReplacedByOtherConnection	= 5,
        exDiscReasonOutOfMemory	= 6,
        exDiscReasonServerDeniedConnection	= 7,
        exDiscReasonServerDeniedConnectionFips	= 8,
        exDiscReasonServerInsufficientPrivileges	= 9,
        exDiscReasonServerFreshCredsRequired	= 10,
        exDiscReasonRpcInitiatedDisconnectByUser	= 11,
        exDiscReasonLogoffByUser	= 12,
        exDiscReasonLicenseInternal	= 256,
        exDiscReasonLicenseNoLicenseServer	= 257,
        exDiscReasonLicenseNoLicense	= 258,
        exDiscReasonLicenseErrClientMsg	= 259,
        exDiscReasonLicenseHwidDoesntMatchLicense	= 260,
        exDiscReasonLicenseErrClientLicense	= 261,
        exDiscReasonLicenseCantFinishProtocol	= 262,
        exDiscReasonLicenseClientEndedProtocol	= 263,
        exDiscReasonLicenseErrClientEncryption	= 264,
        exDiscReasonLicenseCantUpgradeLicense	= 265,
        exDiscReasonLicenseNoRemoteConnections	= 266,
        exDiscReasonLicenseCreatingLicStoreAccDenied	= 267,
        exDiscReasonRdpEncInvalidCredentials	= 768,
        exDiscReasonProtocolRangeStart	= 4096,
        exDiscReasonProtocolRangeEnd	= 32767
    } 	ExtendedDisconnectReasonCode;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_FreeRdpInterfaces_0001_0034_0002
    {
        controlCloseCanProceed	= 0,
        controlCloseWaitForEvents	= 1
    } 	ControlCloseStatus;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_FreeRdpInterfaces_0001_0041_0001
    {
        RemoteSessionActionCharms	= 0,
        RemoteSessionActionAppbar	= 1,
        RemoteSessionActionSnap	= 2,
        RemoteSessionActionStartScreen	= 3,
        RemoteSessionActionAppSwitch	= 4
    } 	RemoteSessionActionType;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_FreeRdpInterfaces_0001_0041_0002
    {
        controlReconnectStarted	= 0,
        controlReconnectBlocked	= 1
    } 	ControlReconnectStatus;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_FreeRdpInterfaces_0001_0043_0001
    {
        autoReconnectContinueAutomatic	= 0,
        autoReconnectContinueStop	= 1,
        autoReconnectContinueManual	= 2
    } 	AutoReconnectContinueState;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_FreeRdpInterfaces_0001_0043_0002
    {
        remoteAppResultOk	= 0,
        remoteAppResultLocked	= 1,
        remoteAppResultProtocolError	= 2,
        remoteAppResultNotInWhitelist	= 3,
        remoteAppResultNetworkPathDenied	= 4,
        remoteAppResultFileNotFound	= 5,
        remoteAppResultFailure	= 6,
        remoteAppResultHookNotLoaded	= 7
    } 	RemoteProgramResult;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_FreeRdpInterfaces_0001_0043_0003
    {
        remoteAppWindowNone	= 0,
        remoteAppWindowDisplayed	= 1,
        remoteAppShellIconDisplayed	= 2
    } 	RemoteWindowDisplayedAttribute;


EXTERN_C const IID LIBID_FreeRdpActivex;

#ifndef ___DFreeRdpActivex_DISPINTERFACE_DEFINED__
#define ___DFreeRdpActivex_DISPINTERFACE_DEFINED__

/* dispinterface _DFreeRdpActivex */
/* [uuid] */ 


EXTERN_C const IID DIID__DFreeRdpActivex;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("FEC3E2EA-695D-48F7-9CB6-ADCAD050C7EC")
    _DFreeRdpActivex : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DFreeRdpActivexVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DFreeRdpActivex * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DFreeRdpActivex * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DFreeRdpActivex * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DFreeRdpActivex * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DFreeRdpActivex * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DFreeRdpActivex * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DFreeRdpActivex * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _DFreeRdpActivexVtbl;

    interface _DFreeRdpActivex
    {
        CONST_VTBL struct _DFreeRdpActivexVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DFreeRdpActivex_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DFreeRdpActivex_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DFreeRdpActivex_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DFreeRdpActivex_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DFreeRdpActivex_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DFreeRdpActivex_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DFreeRdpActivex_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DFreeRdpActivex_DISPINTERFACE_DEFINED__ */


#ifndef ___DFreeRdpActivexEvents_DISPINTERFACE_DEFINED__
#define ___DFreeRdpActivexEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DFreeRdpActivexEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__DFreeRdpActivexEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("740FC5CD-B2CD-495B-9628-9CC8351CC13A")
    _DFreeRdpActivexEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DFreeRdpActivexEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DFreeRdpActivexEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DFreeRdpActivexEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DFreeRdpActivexEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DFreeRdpActivexEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DFreeRdpActivexEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DFreeRdpActivexEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DFreeRdpActivexEvents * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _DFreeRdpActivexEventsVtbl;

    interface _DFreeRdpActivexEvents
    {
        CONST_VTBL struct _DFreeRdpActivexEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DFreeRdpActivexEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DFreeRdpActivexEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DFreeRdpActivexEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DFreeRdpActivexEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DFreeRdpActivexEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DFreeRdpActivexEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DFreeRdpActivexEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DFreeRdpActivexEvents_DISPINTERFACE_DEFINED__ */


#ifndef __IMsTscSecuredSettings_INTERFACE_DEFINED__
#define __IMsTscSecuredSettings_INTERFACE_DEFINED__

/* interface IMsTscSecuredSettings */
/* [oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsTscSecuredSettings;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C9D65442-A0F9-45B2-8F73-D61D2DB8CBB6")
    IMsTscSecuredSettings : public IDispatch
    {
    public:
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_StartProgram( 
            /* [in] */ BSTR pStartProgram) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_StartProgram( 
            /* [retval][out] */ BSTR *pStartProgram) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_WorkDir( 
            /* [in] */ BSTR pWorkDir) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_WorkDir( 
            /* [retval][out] */ BSTR *pWorkDir) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_FullScreen( 
            /* [in] */ long pfFullScreen) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FullScreen( 
            /* [retval][out] */ long *pfFullScreen) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMsTscSecuredSettingsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsTscSecuredSettings * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsTscSecuredSettings * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsTscSecuredSettings * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsTscSecuredSettings * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsTscSecuredSettings * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsTscSecuredSettings * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsTscSecuredSettings * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_StartProgram )( 
            IMsTscSecuredSettings * This,
            /* [in] */ BSTR pStartProgram);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_StartProgram )( 
            IMsTscSecuredSettings * This,
            /* [retval][out] */ BSTR *pStartProgram);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_WorkDir )( 
            IMsTscSecuredSettings * This,
            /* [in] */ BSTR pWorkDir);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_WorkDir )( 
            IMsTscSecuredSettings * This,
            /* [retval][out] */ BSTR *pWorkDir);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreen )( 
            IMsTscSecuredSettings * This,
            /* [in] */ long pfFullScreen);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FullScreen )( 
            IMsTscSecuredSettings * This,
            /* [retval][out] */ long *pfFullScreen);
        
        END_INTERFACE
    } IMsTscSecuredSettingsVtbl;

    interface IMsTscSecuredSettings
    {
        CONST_VTBL struct IMsTscSecuredSettingsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsTscSecuredSettings_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsTscSecuredSettings_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsTscSecuredSettings_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsTscSecuredSettings_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsTscSecuredSettings_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsTscSecuredSettings_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsTscSecuredSettings_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMsTscSecuredSettings_put_StartProgram(This,pStartProgram)	\
    ( (This)->lpVtbl -> put_StartProgram(This,pStartProgram) ) 

#define IMsTscSecuredSettings_get_StartProgram(This,pStartProgram)	\
    ( (This)->lpVtbl -> get_StartProgram(This,pStartProgram) ) 

#define IMsTscSecuredSettings_put_WorkDir(This,pWorkDir)	\
    ( (This)->lpVtbl -> put_WorkDir(This,pWorkDir) ) 

#define IMsTscSecuredSettings_get_WorkDir(This,pWorkDir)	\
    ( (This)->lpVtbl -> get_WorkDir(This,pWorkDir) ) 

#define IMsTscSecuredSettings_put_FullScreen(This,pfFullScreen)	\
    ( (This)->lpVtbl -> put_FullScreen(This,pfFullScreen) ) 

#define IMsTscSecuredSettings_get_FullScreen(This,pfFullScreen)	\
    ( (This)->lpVtbl -> get_FullScreen(This,pfFullScreen) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMsTscSecuredSettings_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClientSecuredSettings_INTERFACE_DEFINED__
#define __IMsRdpClientSecuredSettings_INTERFACE_DEFINED__

/* interface IMsRdpClientSecuredSettings */
/* [oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClientSecuredSettings;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("605BEFCF-39C1-45CC-A811-068FB7BE346D")
    IMsRdpClientSecuredSettings : public IMsTscSecuredSettings
    {
    public:
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_KeyboardHookMode( 
            /* [in] */ long pkeyboardHookMode) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_KeyboardHookMode( 
            /* [retval][out] */ long *pkeyboardHookMode) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_AudioRedirectionMode( 
            /* [in] */ long pAudioRedirectionMode) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_AudioRedirectionMode( 
            /* [retval][out] */ long *pAudioRedirectionMode) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMsRdpClientSecuredSettingsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClientSecuredSettings * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClientSecuredSettings * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClientSecuredSettings * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClientSecuredSettings * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClientSecuredSettings * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClientSecuredSettings * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClientSecuredSettings * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_StartProgram )( 
            IMsRdpClientSecuredSettings * This,
            /* [in] */ BSTR pStartProgram);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_StartProgram )( 
            IMsRdpClientSecuredSettings * This,
            /* [retval][out] */ BSTR *pStartProgram);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_WorkDir )( 
            IMsRdpClientSecuredSettings * This,
            /* [in] */ BSTR pWorkDir);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_WorkDir )( 
            IMsRdpClientSecuredSettings * This,
            /* [retval][out] */ BSTR *pWorkDir);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreen )( 
            IMsRdpClientSecuredSettings * This,
            /* [in] */ long pfFullScreen);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FullScreen )( 
            IMsRdpClientSecuredSettings * This,
            /* [retval][out] */ long *pfFullScreen);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardHookMode )( 
            IMsRdpClientSecuredSettings * This,
            /* [in] */ long pkeyboardHookMode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardHookMode )( 
            IMsRdpClientSecuredSettings * This,
            /* [retval][out] */ long *pkeyboardHookMode);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AudioRedirectionMode )( 
            IMsRdpClientSecuredSettings * This,
            /* [in] */ long pAudioRedirectionMode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AudioRedirectionMode )( 
            IMsRdpClientSecuredSettings * This,
            /* [retval][out] */ long *pAudioRedirectionMode);
        
        END_INTERFACE
    } IMsRdpClientSecuredSettingsVtbl;

    interface IMsRdpClientSecuredSettings
    {
        CONST_VTBL struct IMsRdpClientSecuredSettingsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClientSecuredSettings_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClientSecuredSettings_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClientSecuredSettings_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClientSecuredSettings_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClientSecuredSettings_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClientSecuredSettings_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClientSecuredSettings_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMsRdpClientSecuredSettings_put_StartProgram(This,pStartProgram)	\
    ( (This)->lpVtbl -> put_StartProgram(This,pStartProgram) ) 

#define IMsRdpClientSecuredSettings_get_StartProgram(This,pStartProgram)	\
    ( (This)->lpVtbl -> get_StartProgram(This,pStartProgram) ) 

#define IMsRdpClientSecuredSettings_put_WorkDir(This,pWorkDir)	\
    ( (This)->lpVtbl -> put_WorkDir(This,pWorkDir) ) 

#define IMsRdpClientSecuredSettings_get_WorkDir(This,pWorkDir)	\
    ( (This)->lpVtbl -> get_WorkDir(This,pWorkDir) ) 

#define IMsRdpClientSecuredSettings_put_FullScreen(This,pfFullScreen)	\
    ( (This)->lpVtbl -> put_FullScreen(This,pfFullScreen) ) 

#define IMsRdpClientSecuredSettings_get_FullScreen(This,pfFullScreen)	\
    ( (This)->lpVtbl -> get_FullScreen(This,pfFullScreen) ) 


#define IMsRdpClientSecuredSettings_put_KeyboardHookMode(This,pkeyboardHookMode)	\
    ( (This)->lpVtbl -> put_KeyboardHookMode(This,pkeyboardHookMode) ) 

#define IMsRdpClientSecuredSettings_get_KeyboardHookMode(This,pkeyboardHookMode)	\
    ( (This)->lpVtbl -> get_KeyboardHookMode(This,pkeyboardHookMode) ) 

#define IMsRdpClientSecuredSettings_put_AudioRedirectionMode(This,pAudioRedirectionMode)	\
    ( (This)->lpVtbl -> put_AudioRedirectionMode(This,pAudioRedirectionMode) ) 

#define IMsRdpClientSecuredSettings_get_AudioRedirectionMode(This,pAudioRedirectionMode)	\
    ( (This)->lpVtbl -> get_AudioRedirectionMode(This,pAudioRedirectionMode) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMsRdpClientSecuredSettings_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClientSecuredSettings2_INTERFACE_DEFINED__
#define __IMsRdpClientSecuredSettings2_INTERFACE_DEFINED__

/* interface IMsRdpClientSecuredSettings2 */
/* [oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClientSecuredSettings2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("25F2CE20-8B1D-4971-A7CD-549DAE201FC0")
    IMsRdpClientSecuredSettings2 : public IMsRdpClientSecuredSettings
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PCB( 
            /* [retval][out] */ BSTR *bstrPCB) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PCB( 
            /* [in] */ BSTR bstrPCB) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMsRdpClientSecuredSettings2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClientSecuredSettings2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClientSecuredSettings2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClientSecuredSettings2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClientSecuredSettings2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClientSecuredSettings2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClientSecuredSettings2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClientSecuredSettings2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_StartProgram )( 
            IMsRdpClientSecuredSettings2 * This,
            /* [in] */ BSTR pStartProgram);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_StartProgram )( 
            IMsRdpClientSecuredSettings2 * This,
            /* [retval][out] */ BSTR *pStartProgram);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_WorkDir )( 
            IMsRdpClientSecuredSettings2 * This,
            /* [in] */ BSTR pWorkDir);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_WorkDir )( 
            IMsRdpClientSecuredSettings2 * This,
            /* [retval][out] */ BSTR *pWorkDir);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreen )( 
            IMsRdpClientSecuredSettings2 * This,
            /* [in] */ long pfFullScreen);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FullScreen )( 
            IMsRdpClientSecuredSettings2 * This,
            /* [retval][out] */ long *pfFullScreen);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardHookMode )( 
            IMsRdpClientSecuredSettings2 * This,
            /* [in] */ long pkeyboardHookMode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardHookMode )( 
            IMsRdpClientSecuredSettings2 * This,
            /* [retval][out] */ long *pkeyboardHookMode);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AudioRedirectionMode )( 
            IMsRdpClientSecuredSettings2 * This,
            /* [in] */ long pAudioRedirectionMode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AudioRedirectionMode )( 
            IMsRdpClientSecuredSettings2 * This,
            /* [retval][out] */ long *pAudioRedirectionMode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PCB )( 
            IMsRdpClientSecuredSettings2 * This,
            /* [retval][out] */ BSTR *bstrPCB);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PCB )( 
            IMsRdpClientSecuredSettings2 * This,
            /* [in] */ BSTR bstrPCB);
        
        END_INTERFACE
    } IMsRdpClientSecuredSettings2Vtbl;

    interface IMsRdpClientSecuredSettings2
    {
        CONST_VTBL struct IMsRdpClientSecuredSettings2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClientSecuredSettings2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClientSecuredSettings2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClientSecuredSettings2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClientSecuredSettings2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClientSecuredSettings2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClientSecuredSettings2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClientSecuredSettings2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMsRdpClientSecuredSettings2_put_StartProgram(This,pStartProgram)	\
    ( (This)->lpVtbl -> put_StartProgram(This,pStartProgram) ) 

#define IMsRdpClientSecuredSettings2_get_StartProgram(This,pStartProgram)	\
    ( (This)->lpVtbl -> get_StartProgram(This,pStartProgram) ) 

#define IMsRdpClientSecuredSettings2_put_WorkDir(This,pWorkDir)	\
    ( (This)->lpVtbl -> put_WorkDir(This,pWorkDir) ) 

#define IMsRdpClientSecuredSettings2_get_WorkDir(This,pWorkDir)	\
    ( (This)->lpVtbl -> get_WorkDir(This,pWorkDir) ) 

#define IMsRdpClientSecuredSettings2_put_FullScreen(This,pfFullScreen)	\
    ( (This)->lpVtbl -> put_FullScreen(This,pfFullScreen) ) 

#define IMsRdpClientSecuredSettings2_get_FullScreen(This,pfFullScreen)	\
    ( (This)->lpVtbl -> get_FullScreen(This,pfFullScreen) ) 


#define IMsRdpClientSecuredSettings2_put_KeyboardHookMode(This,pkeyboardHookMode)	\
    ( (This)->lpVtbl -> put_KeyboardHookMode(This,pkeyboardHookMode) ) 

#define IMsRdpClientSecuredSettings2_get_KeyboardHookMode(This,pkeyboardHookMode)	\
    ( (This)->lpVtbl -> get_KeyboardHookMode(This,pkeyboardHookMode) ) 

#define IMsRdpClientSecuredSettings2_put_AudioRedirectionMode(This,pAudioRedirectionMode)	\
    ( (This)->lpVtbl -> put_AudioRedirectionMode(This,pAudioRedirectionMode) ) 

#define IMsRdpClientSecuredSettings2_get_AudioRedirectionMode(This,pAudioRedirectionMode)	\
    ( (This)->lpVtbl -> get_AudioRedirectionMode(This,pAudioRedirectionMode) ) 


#define IMsRdpClientSecuredSettings2_get_PCB(This,bstrPCB)	\
    ( (This)->lpVtbl -> get_PCB(This,bstrPCB) ) 

#define IMsRdpClientSecuredSettings2_put_PCB(This,bstrPCB)	\
    ( (This)->lpVtbl -> put_PCB(This,bstrPCB) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMsRdpClientSecuredSettings2_INTERFACE_DEFINED__ */


#ifndef __IMsTscAdvancedSettings_INTERFACE_DEFINED__
#define __IMsTscAdvancedSettings_INTERFACE_DEFINED__

/* interface IMsTscAdvancedSettings */
/* [oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsTscAdvancedSettings;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("809945CC-4B3B-4A92-A6B0-DBF9B5F2EF2D")
    IMsTscAdvancedSettings : public IDispatch
    {
    public:
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Compress( 
            /* [in] */ long pcompress) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Compress( 
            /* [retval][out] */ long *pcompress) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_BitmapPeristence( 
            /* [in] */ long pbitmapPeristence) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_BitmapPeristence( 
            /* [retval][out] */ long *pbitmapPeristence) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_allowBackgroundInput( 
            /* [in] */ long pallowBackgroundInput) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_allowBackgroundInput( 
            /* [retval][out] */ long *pallowBackgroundInput) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_KeyBoardLayoutStr( 
            /* [in] */ BSTR rhs) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PluginDlls( 
            /* [in] */ BSTR rhs) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_IconFile( 
            /* [in] */ BSTR rhs) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_IconIndex( 
            /* [in] */ long rhs) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_ContainerHandledFullScreen( 
            /* [in] */ long pContainerHandledFullScreen) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ContainerHandledFullScreen( 
            /* [retval][out] */ long *pContainerHandledFullScreen) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_DisableRdpdr( 
            /* [in] */ long pDisableRdpdr) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DisableRdpdr( 
            /* [retval][out] */ long *pDisableRdpdr) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMsTscAdvancedSettingsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsTscAdvancedSettings * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsTscAdvancedSettings * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsTscAdvancedSettings * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsTscAdvancedSettings * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsTscAdvancedSettings * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsTscAdvancedSettings * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsTscAdvancedSettings * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Compress )( 
            IMsTscAdvancedSettings * This,
            /* [in] */ long pcompress);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Compress )( 
            IMsTscAdvancedSettings * This,
            /* [retval][out] */ long *pcompress);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapPeristence )( 
            IMsTscAdvancedSettings * This,
            /* [in] */ long pbitmapPeristence);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapPeristence )( 
            IMsTscAdvancedSettings * This,
            /* [retval][out] */ long *pbitmapPeristence);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_allowBackgroundInput )( 
            IMsTscAdvancedSettings * This,
            /* [in] */ long pallowBackgroundInput);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_allowBackgroundInput )( 
            IMsTscAdvancedSettings * This,
            /* [retval][out] */ long *pallowBackgroundInput);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyBoardLayoutStr )( 
            IMsTscAdvancedSettings * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PluginDlls )( 
            IMsTscAdvancedSettings * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IconFile )( 
            IMsTscAdvancedSettings * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IconIndex )( 
            IMsTscAdvancedSettings * This,
            /* [in] */ long rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ContainerHandledFullScreen )( 
            IMsTscAdvancedSettings * This,
            /* [in] */ long pContainerHandledFullScreen);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ContainerHandledFullScreen )( 
            IMsTscAdvancedSettings * This,
            /* [retval][out] */ long *pContainerHandledFullScreen);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisableRdpdr )( 
            IMsTscAdvancedSettings * This,
            /* [in] */ long pDisableRdpdr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisableRdpdr )( 
            IMsTscAdvancedSettings * This,
            /* [retval][out] */ long *pDisableRdpdr);
        
        END_INTERFACE
    } IMsTscAdvancedSettingsVtbl;

    interface IMsTscAdvancedSettings
    {
        CONST_VTBL struct IMsTscAdvancedSettingsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsTscAdvancedSettings_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsTscAdvancedSettings_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsTscAdvancedSettings_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsTscAdvancedSettings_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsTscAdvancedSettings_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsTscAdvancedSettings_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsTscAdvancedSettings_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMsTscAdvancedSettings_put_Compress(This,pcompress)	\
    ( (This)->lpVtbl -> put_Compress(This,pcompress) ) 

#define IMsTscAdvancedSettings_get_Compress(This,pcompress)	\
    ( (This)->lpVtbl -> get_Compress(This,pcompress) ) 

#define IMsTscAdvancedSettings_put_BitmapPeristence(This,pbitmapPeristence)	\
    ( (This)->lpVtbl -> put_BitmapPeristence(This,pbitmapPeristence) ) 

#define IMsTscAdvancedSettings_get_BitmapPeristence(This,pbitmapPeristence)	\
    ( (This)->lpVtbl -> get_BitmapPeristence(This,pbitmapPeristence) ) 

#define IMsTscAdvancedSettings_put_allowBackgroundInput(This,pallowBackgroundInput)	\
    ( (This)->lpVtbl -> put_allowBackgroundInput(This,pallowBackgroundInput) ) 

#define IMsTscAdvancedSettings_get_allowBackgroundInput(This,pallowBackgroundInput)	\
    ( (This)->lpVtbl -> get_allowBackgroundInput(This,pallowBackgroundInput) ) 

#define IMsTscAdvancedSettings_put_KeyBoardLayoutStr(This,rhs)	\
    ( (This)->lpVtbl -> put_KeyBoardLayoutStr(This,rhs) ) 

#define IMsTscAdvancedSettings_put_PluginDlls(This,rhs)	\
    ( (This)->lpVtbl -> put_PluginDlls(This,rhs) ) 

#define IMsTscAdvancedSettings_put_IconFile(This,rhs)	\
    ( (This)->lpVtbl -> put_IconFile(This,rhs) ) 

#define IMsTscAdvancedSettings_put_IconIndex(This,rhs)	\
    ( (This)->lpVtbl -> put_IconIndex(This,rhs) ) 

#define IMsTscAdvancedSettings_put_ContainerHandledFullScreen(This,pContainerHandledFullScreen)	\
    ( (This)->lpVtbl -> put_ContainerHandledFullScreen(This,pContainerHandledFullScreen) ) 

#define IMsTscAdvancedSettings_get_ContainerHandledFullScreen(This,pContainerHandledFullScreen)	\
    ( (This)->lpVtbl -> get_ContainerHandledFullScreen(This,pContainerHandledFullScreen) ) 

#define IMsTscAdvancedSettings_put_DisableRdpdr(This,pDisableRdpdr)	\
    ( (This)->lpVtbl -> put_DisableRdpdr(This,pDisableRdpdr) ) 

#define IMsTscAdvancedSettings_get_DisableRdpdr(This,pDisableRdpdr)	\
    ( (This)->lpVtbl -> get_DisableRdpdr(This,pDisableRdpdr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMsTscAdvancedSettings_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClientAdvancedSettings_INTERFACE_DEFINED__
#define __IMsRdpClientAdvancedSettings_INTERFACE_DEFINED__

/* interface IMsRdpClientAdvancedSettings */
/* [object][oleautomation][dual][uuid] */ 


EXTERN_C const IID IID_IMsRdpClientAdvancedSettings;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3C65B4AB-12B3-465B-ACD4-B8DAD3BFF9E2")
    IMsRdpClientAdvancedSettings : public IMsTscAdvancedSettings
    {
    public:
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_SmoothScroll( 
            /* [in] */ long psmoothScroll) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SmoothScroll( 
            /* [retval][out] */ long *psmoothScroll) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_AcceleratorPassthrough( 
            /* [in] */ long pacceleratorPassthrough) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_AcceleratorPassthrough( 
            /* [retval][out] */ long *pacceleratorPassthrough) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_ShadowBitmap( 
            /* [in] */ long pshadowBitmap) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ShadowBitmap( 
            /* [retval][out] */ long *pshadowBitmap) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_TransportType( 
            /* [in] */ long ptransportType) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TransportType( 
            /* [retval][out] */ long *ptransportType) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_SasSequence( 
            /* [in] */ long psasSequence) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SasSequence( 
            /* [retval][out] */ long *psasSequence) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_EncryptionEnabled( 
            /* [in] */ long pencryptionEnabled) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_EncryptionEnabled( 
            /* [retval][out] */ long *pencryptionEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_DedicatedTerminal( 
            /* [in] */ long pdedicatedTerminal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DedicatedTerminal( 
            /* [retval][out] */ long *pdedicatedTerminal) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_RDPPort( 
            /* [in] */ long prdpPort) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RDPPort( 
            /* [retval][out] */ long *prdpPort) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_EnableMouse( 
            /* [in] */ long penableMouse) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_EnableMouse( 
            /* [retval][out] */ long *penableMouse) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_DisableCtrlAltDel( 
            /* [in] */ long pdisableCtrlAltDel) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DisableCtrlAltDel( 
            /* [retval][out] */ long *pdisableCtrlAltDel) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_EnableWindowsKey( 
            /* [in] */ long penableWindowsKey) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_EnableWindowsKey( 
            /* [retval][out] */ long *penableWindowsKey) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_DoubleClickDetect( 
            /* [in] */ long pdoubleClickDetect) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DoubleClickDetect( 
            /* [retval][out] */ long *pdoubleClickDetect) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_MaximizeShell( 
            /* [in] */ long pmaximizeShell) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_MaximizeShell( 
            /* [retval][out] */ long *pmaximizeShell) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_HotKeyFullScreen( 
            /* [in] */ long photKeyFullScreen) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_HotKeyFullScreen( 
            /* [retval][out] */ long *photKeyFullScreen) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_HotKeyCtrlEsc( 
            /* [in] */ long photKeyCtrlEsc) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_HotKeyCtrlEsc( 
            /* [retval][out] */ long *photKeyCtrlEsc) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_HotKeyAltEsc( 
            /* [in] */ long photKeyAltEsc) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_HotKeyAltEsc( 
            /* [retval][out] */ long *photKeyAltEsc) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_HotKeyAltTab( 
            /* [in] */ long photKeyAltTab) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_HotKeyAltTab( 
            /* [retval][out] */ long *photKeyAltTab) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_HotKeyAltShiftTab( 
            /* [in] */ long photKeyAltShiftTab) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_HotKeyAltShiftTab( 
            /* [retval][out] */ long *photKeyAltShiftTab) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_HotKeyAltSpace( 
            /* [in] */ long photKeyAltSpace) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_HotKeyAltSpace( 
            /* [retval][out] */ long *photKeyAltSpace) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_HotKeyCtrlAltDel( 
            /* [in] */ long photKeyCtrlAltDel) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_HotKeyCtrlAltDel( 
            /* [retval][out] */ long *photKeyCtrlAltDel) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_orderDrawThreshold( 
            /* [in] */ long porderDrawThreshold) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_orderDrawThreshold( 
            /* [retval][out] */ long *porderDrawThreshold) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_BitmapCacheSize( 
            /* [in] */ long pbitmapCacheSize) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_BitmapCacheSize( 
            /* [retval][out] */ long *pbitmapCacheSize) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_BitmapVirtualCacheSize( 
            /* [in] */ long pbitmapVirtualCacheSize) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_BitmapVirtualCacheSize( 
            /* [retval][out] */ long *pbitmapVirtualCacheSize) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_ScaleBitmapCachesByBPP( 
            /* [in] */ long pbScale) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ScaleBitmapCachesByBPP( 
            /* [retval][out] */ long *pbScale) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_NumBitmapCaches( 
            /* [in] */ long pnumBitmapCaches) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_NumBitmapCaches( 
            /* [retval][out] */ long *pnumBitmapCaches) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_CachePersistenceActive( 
            /* [in] */ long pcachePersistenceActive) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_CachePersistenceActive( 
            /* [retval][out] */ long *pcachePersistenceActive) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PersistCacheDirectory( 
            /* [in] */ BSTR rhs) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_brushSupportLevel( 
            /* [in] */ long pbrushSupportLevel) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_brushSupportLevel( 
            /* [retval][out] */ long *pbrushSupportLevel) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_minInputSendInterval( 
            /* [in] */ long pminInputSendInterval) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_minInputSendInterval( 
            /* [retval][out] */ long *pminInputSendInterval) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_InputEventsAtOnce( 
            /* [in] */ long pinputEventsAtOnce) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_InputEventsAtOnce( 
            /* [retval][out] */ long *pinputEventsAtOnce) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_maxEventCount( 
            /* [in] */ long pmaxEventCount) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_maxEventCount( 
            /* [retval][out] */ long *pmaxEventCount) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_keepAliveInterval( 
            /* [in] */ long pkeepAliveInterval) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_keepAliveInterval( 
            /* [retval][out] */ long *pkeepAliveInterval) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_shutdownTimeout( 
            /* [in] */ long pshutdownTimeout) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_shutdownTimeout( 
            /* [retval][out] */ long *pshutdownTimeout) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_overallConnectionTimeout( 
            /* [in] */ long poverallConnectionTimeout) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_overallConnectionTimeout( 
            /* [retval][out] */ long *poverallConnectionTimeout) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_singleConnectionTimeout( 
            /* [in] */ long psingleConnectionTimeout) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_singleConnectionTimeout( 
            /* [retval][out] */ long *psingleConnectionTimeout) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_KeyboardType( 
            /* [in] */ long pkeyboardType) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_KeyboardType( 
            /* [retval][out] */ long *pkeyboardType) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_KeyboardSubType( 
            /* [in] */ long pkeyboardSubType) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_KeyboardSubType( 
            /* [retval][out] */ long *pkeyboardSubType) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_KeyboardFunctionKey( 
            /* [in] */ long pkeyboardFunctionKey) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_KeyboardFunctionKey( 
            /* [retval][out] */ long *pkeyboardFunctionKey) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_WinceFixedPalette( 
            /* [in] */ long pwinceFixedPalette) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_WinceFixedPalette( 
            /* [retval][out] */ long *pwinceFixedPalette) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_ConnectToServerConsole( 
            /* [in] */ VARIANT_BOOL pConnectToConsole) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ConnectToServerConsole( 
            /* [retval][out] */ VARIANT_BOOL *pConnectToConsole) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_BitmapPersistence( 
            /* [in] */ long pbitmapPersistence) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_BitmapPersistence( 
            /* [retval][out] */ long *pbitmapPersistence) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_MinutesToIdleTimeout( 
            /* [in] */ long pminutesToIdleTimeout) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_MinutesToIdleTimeout( 
            /* [retval][out] */ long *pminutesToIdleTimeout) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_SmartSizing( 
            /* [in] */ VARIANT_BOOL pfSmartSizing) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SmartSizing( 
            /* [retval][out] */ VARIANT_BOOL *pfSmartSizing) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_RdpdrLocalPrintingDocName( 
            /* [in] */ BSTR pLocalPrintingDocName) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RdpdrLocalPrintingDocName( 
            /* [retval][out] */ BSTR *pLocalPrintingDocName) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_RdpdrClipCleanTempDirString( 
            /* [in] */ BSTR clipCleanTempDirString) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RdpdrClipCleanTempDirString( 
            /* [retval][out] */ BSTR *clipCleanTempDirString) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_RdpdrClipPasteInfoString( 
            /* [in] */ BSTR clipPasteInfoString) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RdpdrClipPasteInfoString( 
            /* [retval][out] */ BSTR *clipPasteInfoString) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_ClearTextPassword( 
            /* [in] */ BSTR rhs) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_DisplayConnectionBar( 
            /* [in] */ VARIANT_BOOL pDisplayConnectionBar) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DisplayConnectionBar( 
            /* [retval][out] */ VARIANT_BOOL *pDisplayConnectionBar) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PinConnectionBar( 
            /* [in] */ VARIANT_BOOL pPinConnectionBar) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PinConnectionBar( 
            /* [retval][out] */ VARIANT_BOOL *pPinConnectionBar) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_GrabFocusOnConnect( 
            /* [in] */ VARIANT_BOOL pfGrabFocusOnConnect) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_GrabFocusOnConnect( 
            /* [retval][out] */ VARIANT_BOOL *pfGrabFocusOnConnect) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_LoadBalanceInfo( 
            /* [in] */ BSTR pLBInfo) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_LoadBalanceInfo( 
            /* [retval][out] */ BSTR *pLBInfo) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_RedirectDrives( 
            /* [in] */ VARIANT_BOOL pRedirectDrives) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RedirectDrives( 
            /* [retval][out] */ VARIANT_BOOL *pRedirectDrives) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_RedirectPrinters( 
            /* [in] */ VARIANT_BOOL pRedirectPrinters) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RedirectPrinters( 
            /* [retval][out] */ VARIANT_BOOL *pRedirectPrinters) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_RedirectPorts( 
            /* [in] */ VARIANT_BOOL pRedirectPorts) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RedirectPorts( 
            /* [retval][out] */ VARIANT_BOOL *pRedirectPorts) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_RedirectSmartCards( 
            /* [in] */ VARIANT_BOOL pRedirectSmartCards) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RedirectSmartCards( 
            /* [retval][out] */ VARIANT_BOOL *pRedirectSmartCards) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_BitmapVirtualCache16BppSize( 
            /* [in] */ long pBitmapVirtualCache16BppSize) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_BitmapVirtualCache16BppSize( 
            /* [retval][out] */ long *pBitmapVirtualCache16BppSize) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_BitmapVirtualCache24BppSize( 
            /* [in] */ long pBitmapVirtualCache24BppSize) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_BitmapVirtualCache24BppSize( 
            /* [retval][out] */ long *pBitmapVirtualCache24BppSize) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PerformanceFlags( 
            /* [in] */ long pDisableList) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PerformanceFlags( 
            /* [retval][out] */ long *pDisableList) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_ConnectWithEndpoint( 
            /* [in] */ VARIANT *rhs) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_NotifyTSPublicKey( 
            /* [in] */ VARIANT_BOOL pfNotify) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_NotifyTSPublicKey( 
            /* [retval][out] */ VARIANT_BOOL *pfNotify) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMsRdpClientAdvancedSettingsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClientAdvancedSettings * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClientAdvancedSettings * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClientAdvancedSettings * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClientAdvancedSettings * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Compress )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long pcompress);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Compress )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *pcompress);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapPeristence )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long pbitmapPeristence);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapPeristence )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *pbitmapPeristence);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_allowBackgroundInput )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long pallowBackgroundInput);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_allowBackgroundInput )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *pallowBackgroundInput);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyBoardLayoutStr )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PluginDlls )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IconFile )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IconIndex )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ContainerHandledFullScreen )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long pContainerHandledFullScreen);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ContainerHandledFullScreen )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *pContainerHandledFullScreen);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisableRdpdr )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long pDisableRdpdr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisableRdpdr )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *pDisableRdpdr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SmoothScroll )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long psmoothScroll);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SmoothScroll )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *psmoothScroll);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AcceleratorPassthrough )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long pacceleratorPassthrough);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AcceleratorPassthrough )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *pacceleratorPassthrough);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ShadowBitmap )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long pshadowBitmap);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ShadowBitmap )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *pshadowBitmap);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TransportType )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long ptransportType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TransportType )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *ptransportType);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SasSequence )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long psasSequence);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SasSequence )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *psasSequence);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EncryptionEnabled )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long pencryptionEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EncryptionEnabled )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *pencryptionEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DedicatedTerminal )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long pdedicatedTerminal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DedicatedTerminal )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *pdedicatedTerminal);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RDPPort )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long prdpPort);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RDPPort )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *prdpPort);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EnableMouse )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long penableMouse);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EnableMouse )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *penableMouse);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisableCtrlAltDel )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long pdisableCtrlAltDel);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisableCtrlAltDel )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *pdisableCtrlAltDel);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EnableWindowsKey )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long penableWindowsKey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EnableWindowsKey )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *penableWindowsKey);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DoubleClickDetect )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long pdoubleClickDetect);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DoubleClickDetect )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *pdoubleClickDetect);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MaximizeShell )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long pmaximizeShell);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MaximizeShell )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *pmaximizeShell);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyFullScreen )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long photKeyFullScreen);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyFullScreen )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *photKeyFullScreen);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyCtrlEsc )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long photKeyCtrlEsc);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyCtrlEsc )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *photKeyCtrlEsc);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltEsc )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long photKeyAltEsc);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltEsc )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *photKeyAltEsc);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltTab )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long photKeyAltTab);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltTab )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *photKeyAltTab);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltShiftTab )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long photKeyAltShiftTab);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltShiftTab )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *photKeyAltShiftTab);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltSpace )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long photKeyAltSpace);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltSpace )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *photKeyAltSpace);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyCtrlAltDel )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long photKeyCtrlAltDel);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyCtrlAltDel )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *photKeyCtrlAltDel);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_orderDrawThreshold )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long porderDrawThreshold);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_orderDrawThreshold )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *porderDrawThreshold);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapCacheSize )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long pbitmapCacheSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapCacheSize )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *pbitmapCacheSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCacheSize )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long pbitmapVirtualCacheSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCacheSize )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *pbitmapVirtualCacheSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScaleBitmapCachesByBPP )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long pbScale);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScaleBitmapCachesByBPP )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *pbScale);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_NumBitmapCaches )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long pnumBitmapCaches);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NumBitmapCaches )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *pnumBitmapCaches);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_CachePersistenceActive )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long pcachePersistenceActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CachePersistenceActive )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *pcachePersistenceActive);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PersistCacheDirectory )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_brushSupportLevel )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long pbrushSupportLevel);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_brushSupportLevel )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *pbrushSupportLevel);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_minInputSendInterval )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long pminInputSendInterval);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_minInputSendInterval )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *pminInputSendInterval);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_InputEventsAtOnce )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long pinputEventsAtOnce);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InputEventsAtOnce )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *pinputEventsAtOnce);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_maxEventCount )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long pmaxEventCount);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_maxEventCount )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *pmaxEventCount);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_keepAliveInterval )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long pkeepAliveInterval);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_keepAliveInterval )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *pkeepAliveInterval);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_shutdownTimeout )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long pshutdownTimeout);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_shutdownTimeout )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *pshutdownTimeout);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_overallConnectionTimeout )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long poverallConnectionTimeout);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_overallConnectionTimeout )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *poverallConnectionTimeout);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_singleConnectionTimeout )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long psingleConnectionTimeout);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_singleConnectionTimeout )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *psingleConnectionTimeout);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardType )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long pkeyboardType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardType )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *pkeyboardType);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardSubType )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long pkeyboardSubType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardSubType )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *pkeyboardSubType);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardFunctionKey )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long pkeyboardFunctionKey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardFunctionKey )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *pkeyboardFunctionKey);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_WinceFixedPalette )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long pwinceFixedPalette);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_WinceFixedPalette )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *pwinceFixedPalette);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectToServerConsole )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ VARIANT_BOOL pConnectToConsole);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectToServerConsole )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ VARIANT_BOOL *pConnectToConsole);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapPersistence )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long pbitmapPersistence);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapPersistence )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *pbitmapPersistence);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MinutesToIdleTimeout )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long pminutesToIdleTimeout);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MinutesToIdleTimeout )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *pminutesToIdleTimeout);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SmartSizing )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ VARIANT_BOOL pfSmartSizing);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SmartSizing )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ VARIANT_BOOL *pfSmartSizing);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrLocalPrintingDocName )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ BSTR pLocalPrintingDocName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrLocalPrintingDocName )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ BSTR *pLocalPrintingDocName);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrClipCleanTempDirString )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ BSTR clipCleanTempDirString);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrClipCleanTempDirString )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ BSTR *clipCleanTempDirString);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrClipPasteInfoString )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ BSTR clipPasteInfoString);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrClipPasteInfoString )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ BSTR *clipPasteInfoString);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ClearTextPassword )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayConnectionBar )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ VARIANT_BOOL pDisplayConnectionBar);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayConnectionBar )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ VARIANT_BOOL *pDisplayConnectionBar);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PinConnectionBar )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ VARIANT_BOOL pPinConnectionBar);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PinConnectionBar )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ VARIANT_BOOL *pPinConnectionBar);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GrabFocusOnConnect )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ VARIANT_BOOL pfGrabFocusOnConnect);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GrabFocusOnConnect )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ VARIANT_BOOL *pfGrabFocusOnConnect);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_LoadBalanceInfo )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ BSTR pLBInfo);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LoadBalanceInfo )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ BSTR *pLBInfo);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectDrives )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ VARIANT_BOOL pRedirectDrives);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectDrives )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectDrives);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectPrinters )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ VARIANT_BOOL pRedirectPrinters);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectPrinters )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectPrinters);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectPorts )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ VARIANT_BOOL pRedirectPorts);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectPorts )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectPorts);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectSmartCards )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ VARIANT_BOOL pRedirectSmartCards);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectSmartCards )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectSmartCards);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCache16BppSize )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long pBitmapVirtualCache16BppSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCache16BppSize )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *pBitmapVirtualCache16BppSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCache24BppSize )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long pBitmapVirtualCache24BppSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCache24BppSize )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *pBitmapVirtualCache24BppSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PerformanceFlags )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ long pDisableList);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PerformanceFlags )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ long *pDisableList);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectWithEndpoint )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ VARIANT *rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_NotifyTSPublicKey )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ VARIANT_BOOL pfNotify);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NotifyTSPublicKey )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ VARIANT_BOOL *pfNotify);
        
        END_INTERFACE
    } IMsRdpClientAdvancedSettingsVtbl;

    interface IMsRdpClientAdvancedSettings
    {
        CONST_VTBL struct IMsRdpClientAdvancedSettingsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClientAdvancedSettings_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClientAdvancedSettings_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClientAdvancedSettings_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClientAdvancedSettings_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClientAdvancedSettings_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClientAdvancedSettings_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClientAdvancedSettings_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMsRdpClientAdvancedSettings_put_Compress(This,pcompress)	\
    ( (This)->lpVtbl -> put_Compress(This,pcompress) ) 

#define IMsRdpClientAdvancedSettings_get_Compress(This,pcompress)	\
    ( (This)->lpVtbl -> get_Compress(This,pcompress) ) 

#define IMsRdpClientAdvancedSettings_put_BitmapPeristence(This,pbitmapPeristence)	\
    ( (This)->lpVtbl -> put_BitmapPeristence(This,pbitmapPeristence) ) 

#define IMsRdpClientAdvancedSettings_get_BitmapPeristence(This,pbitmapPeristence)	\
    ( (This)->lpVtbl -> get_BitmapPeristence(This,pbitmapPeristence) ) 

#define IMsRdpClientAdvancedSettings_put_allowBackgroundInput(This,pallowBackgroundInput)	\
    ( (This)->lpVtbl -> put_allowBackgroundInput(This,pallowBackgroundInput) ) 

#define IMsRdpClientAdvancedSettings_get_allowBackgroundInput(This,pallowBackgroundInput)	\
    ( (This)->lpVtbl -> get_allowBackgroundInput(This,pallowBackgroundInput) ) 

#define IMsRdpClientAdvancedSettings_put_KeyBoardLayoutStr(This,rhs)	\
    ( (This)->lpVtbl -> put_KeyBoardLayoutStr(This,rhs) ) 

#define IMsRdpClientAdvancedSettings_put_PluginDlls(This,rhs)	\
    ( (This)->lpVtbl -> put_PluginDlls(This,rhs) ) 

#define IMsRdpClientAdvancedSettings_put_IconFile(This,rhs)	\
    ( (This)->lpVtbl -> put_IconFile(This,rhs) ) 

#define IMsRdpClientAdvancedSettings_put_IconIndex(This,rhs)	\
    ( (This)->lpVtbl -> put_IconIndex(This,rhs) ) 

#define IMsRdpClientAdvancedSettings_put_ContainerHandledFullScreen(This,pContainerHandledFullScreen)	\
    ( (This)->lpVtbl -> put_ContainerHandledFullScreen(This,pContainerHandledFullScreen) ) 

#define IMsRdpClientAdvancedSettings_get_ContainerHandledFullScreen(This,pContainerHandledFullScreen)	\
    ( (This)->lpVtbl -> get_ContainerHandledFullScreen(This,pContainerHandledFullScreen) ) 

#define IMsRdpClientAdvancedSettings_put_DisableRdpdr(This,pDisableRdpdr)	\
    ( (This)->lpVtbl -> put_DisableRdpdr(This,pDisableRdpdr) ) 

#define IMsRdpClientAdvancedSettings_get_DisableRdpdr(This,pDisableRdpdr)	\
    ( (This)->lpVtbl -> get_DisableRdpdr(This,pDisableRdpdr) ) 


#define IMsRdpClientAdvancedSettings_put_SmoothScroll(This,psmoothScroll)	\
    ( (This)->lpVtbl -> put_SmoothScroll(This,psmoothScroll) ) 

#define IMsRdpClientAdvancedSettings_get_SmoothScroll(This,psmoothScroll)	\
    ( (This)->lpVtbl -> get_SmoothScroll(This,psmoothScroll) ) 

#define IMsRdpClientAdvancedSettings_put_AcceleratorPassthrough(This,pacceleratorPassthrough)	\
    ( (This)->lpVtbl -> put_AcceleratorPassthrough(This,pacceleratorPassthrough) ) 

#define IMsRdpClientAdvancedSettings_get_AcceleratorPassthrough(This,pacceleratorPassthrough)	\
    ( (This)->lpVtbl -> get_AcceleratorPassthrough(This,pacceleratorPassthrough) ) 

#define IMsRdpClientAdvancedSettings_put_ShadowBitmap(This,pshadowBitmap)	\
    ( (This)->lpVtbl -> put_ShadowBitmap(This,pshadowBitmap) ) 

#define IMsRdpClientAdvancedSettings_get_ShadowBitmap(This,pshadowBitmap)	\
    ( (This)->lpVtbl -> get_ShadowBitmap(This,pshadowBitmap) ) 

#define IMsRdpClientAdvancedSettings_put_TransportType(This,ptransportType)	\
    ( (This)->lpVtbl -> put_TransportType(This,ptransportType) ) 

#define IMsRdpClientAdvancedSettings_get_TransportType(This,ptransportType)	\
    ( (This)->lpVtbl -> get_TransportType(This,ptransportType) ) 

#define IMsRdpClientAdvancedSettings_put_SasSequence(This,psasSequence)	\
    ( (This)->lpVtbl -> put_SasSequence(This,psasSequence) ) 

#define IMsRdpClientAdvancedSettings_get_SasSequence(This,psasSequence)	\
    ( (This)->lpVtbl -> get_SasSequence(This,psasSequence) ) 

#define IMsRdpClientAdvancedSettings_put_EncryptionEnabled(This,pencryptionEnabled)	\
    ( (This)->lpVtbl -> put_EncryptionEnabled(This,pencryptionEnabled) ) 

#define IMsRdpClientAdvancedSettings_get_EncryptionEnabled(This,pencryptionEnabled)	\
    ( (This)->lpVtbl -> get_EncryptionEnabled(This,pencryptionEnabled) ) 

#define IMsRdpClientAdvancedSettings_put_DedicatedTerminal(This,pdedicatedTerminal)	\
    ( (This)->lpVtbl -> put_DedicatedTerminal(This,pdedicatedTerminal) ) 

#define IMsRdpClientAdvancedSettings_get_DedicatedTerminal(This,pdedicatedTerminal)	\
    ( (This)->lpVtbl -> get_DedicatedTerminal(This,pdedicatedTerminal) ) 

#define IMsRdpClientAdvancedSettings_put_RDPPort(This,prdpPort)	\
    ( (This)->lpVtbl -> put_RDPPort(This,prdpPort) ) 

#define IMsRdpClientAdvancedSettings_get_RDPPort(This,prdpPort)	\
    ( (This)->lpVtbl -> get_RDPPort(This,prdpPort) ) 

#define IMsRdpClientAdvancedSettings_put_EnableMouse(This,penableMouse)	\
    ( (This)->lpVtbl -> put_EnableMouse(This,penableMouse) ) 

#define IMsRdpClientAdvancedSettings_get_EnableMouse(This,penableMouse)	\
    ( (This)->lpVtbl -> get_EnableMouse(This,penableMouse) ) 

#define IMsRdpClientAdvancedSettings_put_DisableCtrlAltDel(This,pdisableCtrlAltDel)	\
    ( (This)->lpVtbl -> put_DisableCtrlAltDel(This,pdisableCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings_get_DisableCtrlAltDel(This,pdisableCtrlAltDel)	\
    ( (This)->lpVtbl -> get_DisableCtrlAltDel(This,pdisableCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings_put_EnableWindowsKey(This,penableWindowsKey)	\
    ( (This)->lpVtbl -> put_EnableWindowsKey(This,penableWindowsKey) ) 

#define IMsRdpClientAdvancedSettings_get_EnableWindowsKey(This,penableWindowsKey)	\
    ( (This)->lpVtbl -> get_EnableWindowsKey(This,penableWindowsKey) ) 

#define IMsRdpClientAdvancedSettings_put_DoubleClickDetect(This,pdoubleClickDetect)	\
    ( (This)->lpVtbl -> put_DoubleClickDetect(This,pdoubleClickDetect) ) 

#define IMsRdpClientAdvancedSettings_get_DoubleClickDetect(This,pdoubleClickDetect)	\
    ( (This)->lpVtbl -> get_DoubleClickDetect(This,pdoubleClickDetect) ) 

#define IMsRdpClientAdvancedSettings_put_MaximizeShell(This,pmaximizeShell)	\
    ( (This)->lpVtbl -> put_MaximizeShell(This,pmaximizeShell) ) 

#define IMsRdpClientAdvancedSettings_get_MaximizeShell(This,pmaximizeShell)	\
    ( (This)->lpVtbl -> get_MaximizeShell(This,pmaximizeShell) ) 

#define IMsRdpClientAdvancedSettings_put_HotKeyFullScreen(This,photKeyFullScreen)	\
    ( (This)->lpVtbl -> put_HotKeyFullScreen(This,photKeyFullScreen) ) 

#define IMsRdpClientAdvancedSettings_get_HotKeyFullScreen(This,photKeyFullScreen)	\
    ( (This)->lpVtbl -> get_HotKeyFullScreen(This,photKeyFullScreen) ) 

#define IMsRdpClientAdvancedSettings_put_HotKeyCtrlEsc(This,photKeyCtrlEsc)	\
    ( (This)->lpVtbl -> put_HotKeyCtrlEsc(This,photKeyCtrlEsc) ) 

#define IMsRdpClientAdvancedSettings_get_HotKeyCtrlEsc(This,photKeyCtrlEsc)	\
    ( (This)->lpVtbl -> get_HotKeyCtrlEsc(This,photKeyCtrlEsc) ) 

#define IMsRdpClientAdvancedSettings_put_HotKeyAltEsc(This,photKeyAltEsc)	\
    ( (This)->lpVtbl -> put_HotKeyAltEsc(This,photKeyAltEsc) ) 

#define IMsRdpClientAdvancedSettings_get_HotKeyAltEsc(This,photKeyAltEsc)	\
    ( (This)->lpVtbl -> get_HotKeyAltEsc(This,photKeyAltEsc) ) 

#define IMsRdpClientAdvancedSettings_put_HotKeyAltTab(This,photKeyAltTab)	\
    ( (This)->lpVtbl -> put_HotKeyAltTab(This,photKeyAltTab) ) 

#define IMsRdpClientAdvancedSettings_get_HotKeyAltTab(This,photKeyAltTab)	\
    ( (This)->lpVtbl -> get_HotKeyAltTab(This,photKeyAltTab) ) 

#define IMsRdpClientAdvancedSettings_put_HotKeyAltShiftTab(This,photKeyAltShiftTab)	\
    ( (This)->lpVtbl -> put_HotKeyAltShiftTab(This,photKeyAltShiftTab) ) 

#define IMsRdpClientAdvancedSettings_get_HotKeyAltShiftTab(This,photKeyAltShiftTab)	\
    ( (This)->lpVtbl -> get_HotKeyAltShiftTab(This,photKeyAltShiftTab) ) 

#define IMsRdpClientAdvancedSettings_put_HotKeyAltSpace(This,photKeyAltSpace)	\
    ( (This)->lpVtbl -> put_HotKeyAltSpace(This,photKeyAltSpace) ) 

#define IMsRdpClientAdvancedSettings_get_HotKeyAltSpace(This,photKeyAltSpace)	\
    ( (This)->lpVtbl -> get_HotKeyAltSpace(This,photKeyAltSpace) ) 

#define IMsRdpClientAdvancedSettings_put_HotKeyCtrlAltDel(This,photKeyCtrlAltDel)	\
    ( (This)->lpVtbl -> put_HotKeyCtrlAltDel(This,photKeyCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings_get_HotKeyCtrlAltDel(This,photKeyCtrlAltDel)	\
    ( (This)->lpVtbl -> get_HotKeyCtrlAltDel(This,photKeyCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings_put_orderDrawThreshold(This,porderDrawThreshold)	\
    ( (This)->lpVtbl -> put_orderDrawThreshold(This,porderDrawThreshold) ) 

#define IMsRdpClientAdvancedSettings_get_orderDrawThreshold(This,porderDrawThreshold)	\
    ( (This)->lpVtbl -> get_orderDrawThreshold(This,porderDrawThreshold) ) 

#define IMsRdpClientAdvancedSettings_put_BitmapCacheSize(This,pbitmapCacheSize)	\
    ( (This)->lpVtbl -> put_BitmapCacheSize(This,pbitmapCacheSize) ) 

#define IMsRdpClientAdvancedSettings_get_BitmapCacheSize(This,pbitmapCacheSize)	\
    ( (This)->lpVtbl -> get_BitmapCacheSize(This,pbitmapCacheSize) ) 

#define IMsRdpClientAdvancedSettings_put_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize)	\
    ( (This)->lpVtbl -> put_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize) ) 

#define IMsRdpClientAdvancedSettings_get_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize)	\
    ( (This)->lpVtbl -> get_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize) ) 

#define IMsRdpClientAdvancedSettings_put_ScaleBitmapCachesByBPP(This,pbScale)	\
    ( (This)->lpVtbl -> put_ScaleBitmapCachesByBPP(This,pbScale) ) 

#define IMsRdpClientAdvancedSettings_get_ScaleBitmapCachesByBPP(This,pbScale)	\
    ( (This)->lpVtbl -> get_ScaleBitmapCachesByBPP(This,pbScale) ) 

#define IMsRdpClientAdvancedSettings_put_NumBitmapCaches(This,pnumBitmapCaches)	\
    ( (This)->lpVtbl -> put_NumBitmapCaches(This,pnumBitmapCaches) ) 

#define IMsRdpClientAdvancedSettings_get_NumBitmapCaches(This,pnumBitmapCaches)	\
    ( (This)->lpVtbl -> get_NumBitmapCaches(This,pnumBitmapCaches) ) 

#define IMsRdpClientAdvancedSettings_put_CachePersistenceActive(This,pcachePersistenceActive)	\
    ( (This)->lpVtbl -> put_CachePersistenceActive(This,pcachePersistenceActive) ) 

#define IMsRdpClientAdvancedSettings_get_CachePersistenceActive(This,pcachePersistenceActive)	\
    ( (This)->lpVtbl -> get_CachePersistenceActive(This,pcachePersistenceActive) ) 

#define IMsRdpClientAdvancedSettings_put_PersistCacheDirectory(This,rhs)	\
    ( (This)->lpVtbl -> put_PersistCacheDirectory(This,rhs) ) 

#define IMsRdpClientAdvancedSettings_put_brushSupportLevel(This,pbrushSupportLevel)	\
    ( (This)->lpVtbl -> put_brushSupportLevel(This,pbrushSupportLevel) ) 

#define IMsRdpClientAdvancedSettings_get_brushSupportLevel(This,pbrushSupportLevel)	\
    ( (This)->lpVtbl -> get_brushSupportLevel(This,pbrushSupportLevel) ) 

#define IMsRdpClientAdvancedSettings_put_minInputSendInterval(This,pminInputSendInterval)	\
    ( (This)->lpVtbl -> put_minInputSendInterval(This,pminInputSendInterval) ) 

#define IMsRdpClientAdvancedSettings_get_minInputSendInterval(This,pminInputSendInterval)	\
    ( (This)->lpVtbl -> get_minInputSendInterval(This,pminInputSendInterval) ) 

#define IMsRdpClientAdvancedSettings_put_InputEventsAtOnce(This,pinputEventsAtOnce)	\
    ( (This)->lpVtbl -> put_InputEventsAtOnce(This,pinputEventsAtOnce) ) 

#define IMsRdpClientAdvancedSettings_get_InputEventsAtOnce(This,pinputEventsAtOnce)	\
    ( (This)->lpVtbl -> get_InputEventsAtOnce(This,pinputEventsAtOnce) ) 

#define IMsRdpClientAdvancedSettings_put_maxEventCount(This,pmaxEventCount)	\
    ( (This)->lpVtbl -> put_maxEventCount(This,pmaxEventCount) ) 

#define IMsRdpClientAdvancedSettings_get_maxEventCount(This,pmaxEventCount)	\
    ( (This)->lpVtbl -> get_maxEventCount(This,pmaxEventCount) ) 

#define IMsRdpClientAdvancedSettings_put_keepAliveInterval(This,pkeepAliveInterval)	\
    ( (This)->lpVtbl -> put_keepAliveInterval(This,pkeepAliveInterval) ) 

#define IMsRdpClientAdvancedSettings_get_keepAliveInterval(This,pkeepAliveInterval)	\
    ( (This)->lpVtbl -> get_keepAliveInterval(This,pkeepAliveInterval) ) 

#define IMsRdpClientAdvancedSettings_put_shutdownTimeout(This,pshutdownTimeout)	\
    ( (This)->lpVtbl -> put_shutdownTimeout(This,pshutdownTimeout) ) 

#define IMsRdpClientAdvancedSettings_get_shutdownTimeout(This,pshutdownTimeout)	\
    ( (This)->lpVtbl -> get_shutdownTimeout(This,pshutdownTimeout) ) 

#define IMsRdpClientAdvancedSettings_put_overallConnectionTimeout(This,poverallConnectionTimeout)	\
    ( (This)->lpVtbl -> put_overallConnectionTimeout(This,poverallConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings_get_overallConnectionTimeout(This,poverallConnectionTimeout)	\
    ( (This)->lpVtbl -> get_overallConnectionTimeout(This,poverallConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings_put_singleConnectionTimeout(This,psingleConnectionTimeout)	\
    ( (This)->lpVtbl -> put_singleConnectionTimeout(This,psingleConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings_get_singleConnectionTimeout(This,psingleConnectionTimeout)	\
    ( (This)->lpVtbl -> get_singleConnectionTimeout(This,psingleConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings_put_KeyboardType(This,pkeyboardType)	\
    ( (This)->lpVtbl -> put_KeyboardType(This,pkeyboardType) ) 

#define IMsRdpClientAdvancedSettings_get_KeyboardType(This,pkeyboardType)	\
    ( (This)->lpVtbl -> get_KeyboardType(This,pkeyboardType) ) 

#define IMsRdpClientAdvancedSettings_put_KeyboardSubType(This,pkeyboardSubType)	\
    ( (This)->lpVtbl -> put_KeyboardSubType(This,pkeyboardSubType) ) 

#define IMsRdpClientAdvancedSettings_get_KeyboardSubType(This,pkeyboardSubType)	\
    ( (This)->lpVtbl -> get_KeyboardSubType(This,pkeyboardSubType) ) 

#define IMsRdpClientAdvancedSettings_put_KeyboardFunctionKey(This,pkeyboardFunctionKey)	\
    ( (This)->lpVtbl -> put_KeyboardFunctionKey(This,pkeyboardFunctionKey) ) 

#define IMsRdpClientAdvancedSettings_get_KeyboardFunctionKey(This,pkeyboardFunctionKey)	\
    ( (This)->lpVtbl -> get_KeyboardFunctionKey(This,pkeyboardFunctionKey) ) 

#define IMsRdpClientAdvancedSettings_put_WinceFixedPalette(This,pwinceFixedPalette)	\
    ( (This)->lpVtbl -> put_WinceFixedPalette(This,pwinceFixedPalette) ) 

#define IMsRdpClientAdvancedSettings_get_WinceFixedPalette(This,pwinceFixedPalette)	\
    ( (This)->lpVtbl -> get_WinceFixedPalette(This,pwinceFixedPalette) ) 

#define IMsRdpClientAdvancedSettings_put_ConnectToServerConsole(This,pConnectToConsole)	\
    ( (This)->lpVtbl -> put_ConnectToServerConsole(This,pConnectToConsole) ) 

#define IMsRdpClientAdvancedSettings_get_ConnectToServerConsole(This,pConnectToConsole)	\
    ( (This)->lpVtbl -> get_ConnectToServerConsole(This,pConnectToConsole) ) 

#define IMsRdpClientAdvancedSettings_put_BitmapPersistence(This,pbitmapPersistence)	\
    ( (This)->lpVtbl -> put_BitmapPersistence(This,pbitmapPersistence) ) 

#define IMsRdpClientAdvancedSettings_get_BitmapPersistence(This,pbitmapPersistence)	\
    ( (This)->lpVtbl -> get_BitmapPersistence(This,pbitmapPersistence) ) 

#define IMsRdpClientAdvancedSettings_put_MinutesToIdleTimeout(This,pminutesToIdleTimeout)	\
    ( (This)->lpVtbl -> put_MinutesToIdleTimeout(This,pminutesToIdleTimeout) ) 

#define IMsRdpClientAdvancedSettings_get_MinutesToIdleTimeout(This,pminutesToIdleTimeout)	\
    ( (This)->lpVtbl -> get_MinutesToIdleTimeout(This,pminutesToIdleTimeout) ) 

#define IMsRdpClientAdvancedSettings_put_SmartSizing(This,pfSmartSizing)	\
    ( (This)->lpVtbl -> put_SmartSizing(This,pfSmartSizing) ) 

#define IMsRdpClientAdvancedSettings_get_SmartSizing(This,pfSmartSizing)	\
    ( (This)->lpVtbl -> get_SmartSizing(This,pfSmartSizing) ) 

#define IMsRdpClientAdvancedSettings_put_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName)	\
    ( (This)->lpVtbl -> put_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName) ) 

#define IMsRdpClientAdvancedSettings_get_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName)	\
    ( (This)->lpVtbl -> get_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName) ) 

#define IMsRdpClientAdvancedSettings_put_RdpdrClipCleanTempDirString(This,clipCleanTempDirString)	\
    ( (This)->lpVtbl -> put_RdpdrClipCleanTempDirString(This,clipCleanTempDirString) ) 

#define IMsRdpClientAdvancedSettings_get_RdpdrClipCleanTempDirString(This,clipCleanTempDirString)	\
    ( (This)->lpVtbl -> get_RdpdrClipCleanTempDirString(This,clipCleanTempDirString) ) 

#define IMsRdpClientAdvancedSettings_put_RdpdrClipPasteInfoString(This,clipPasteInfoString)	\
    ( (This)->lpVtbl -> put_RdpdrClipPasteInfoString(This,clipPasteInfoString) ) 

#define IMsRdpClientAdvancedSettings_get_RdpdrClipPasteInfoString(This,clipPasteInfoString)	\
    ( (This)->lpVtbl -> get_RdpdrClipPasteInfoString(This,clipPasteInfoString) ) 

#define IMsRdpClientAdvancedSettings_put_ClearTextPassword(This,rhs)	\
    ( (This)->lpVtbl -> put_ClearTextPassword(This,rhs) ) 

#define IMsRdpClientAdvancedSettings_put_DisplayConnectionBar(This,pDisplayConnectionBar)	\
    ( (This)->lpVtbl -> put_DisplayConnectionBar(This,pDisplayConnectionBar) ) 

#define IMsRdpClientAdvancedSettings_get_DisplayConnectionBar(This,pDisplayConnectionBar)	\
    ( (This)->lpVtbl -> get_DisplayConnectionBar(This,pDisplayConnectionBar) ) 

#define IMsRdpClientAdvancedSettings_put_PinConnectionBar(This,pPinConnectionBar)	\
    ( (This)->lpVtbl -> put_PinConnectionBar(This,pPinConnectionBar) ) 

#define IMsRdpClientAdvancedSettings_get_PinConnectionBar(This,pPinConnectionBar)	\
    ( (This)->lpVtbl -> get_PinConnectionBar(This,pPinConnectionBar) ) 

#define IMsRdpClientAdvancedSettings_put_GrabFocusOnConnect(This,pfGrabFocusOnConnect)	\
    ( (This)->lpVtbl -> put_GrabFocusOnConnect(This,pfGrabFocusOnConnect) ) 

#define IMsRdpClientAdvancedSettings_get_GrabFocusOnConnect(This,pfGrabFocusOnConnect)	\
    ( (This)->lpVtbl -> get_GrabFocusOnConnect(This,pfGrabFocusOnConnect) ) 

#define IMsRdpClientAdvancedSettings_put_LoadBalanceInfo(This,pLBInfo)	\
    ( (This)->lpVtbl -> put_LoadBalanceInfo(This,pLBInfo) ) 

#define IMsRdpClientAdvancedSettings_get_LoadBalanceInfo(This,pLBInfo)	\
    ( (This)->lpVtbl -> get_LoadBalanceInfo(This,pLBInfo) ) 

#define IMsRdpClientAdvancedSettings_put_RedirectDrives(This,pRedirectDrives)	\
    ( (This)->lpVtbl -> put_RedirectDrives(This,pRedirectDrives) ) 

#define IMsRdpClientAdvancedSettings_get_RedirectDrives(This,pRedirectDrives)	\
    ( (This)->lpVtbl -> get_RedirectDrives(This,pRedirectDrives) ) 

#define IMsRdpClientAdvancedSettings_put_RedirectPrinters(This,pRedirectPrinters)	\
    ( (This)->lpVtbl -> put_RedirectPrinters(This,pRedirectPrinters) ) 

#define IMsRdpClientAdvancedSettings_get_RedirectPrinters(This,pRedirectPrinters)	\
    ( (This)->lpVtbl -> get_RedirectPrinters(This,pRedirectPrinters) ) 

#define IMsRdpClientAdvancedSettings_put_RedirectPorts(This,pRedirectPorts)	\
    ( (This)->lpVtbl -> put_RedirectPorts(This,pRedirectPorts) ) 

#define IMsRdpClientAdvancedSettings_get_RedirectPorts(This,pRedirectPorts)	\
    ( (This)->lpVtbl -> get_RedirectPorts(This,pRedirectPorts) ) 

#define IMsRdpClientAdvancedSettings_put_RedirectSmartCards(This,pRedirectSmartCards)	\
    ( (This)->lpVtbl -> put_RedirectSmartCards(This,pRedirectSmartCards) ) 

#define IMsRdpClientAdvancedSettings_get_RedirectSmartCards(This,pRedirectSmartCards)	\
    ( (This)->lpVtbl -> get_RedirectSmartCards(This,pRedirectSmartCards) ) 

#define IMsRdpClientAdvancedSettings_put_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize)	\
    ( (This)->lpVtbl -> put_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize) ) 

#define IMsRdpClientAdvancedSettings_get_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize)	\
    ( (This)->lpVtbl -> get_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize) ) 

#define IMsRdpClientAdvancedSettings_put_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize)	\
    ( (This)->lpVtbl -> put_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize) ) 

#define IMsRdpClientAdvancedSettings_get_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize)	\
    ( (This)->lpVtbl -> get_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize) ) 

#define IMsRdpClientAdvancedSettings_put_PerformanceFlags(This,pDisableList)	\
    ( (This)->lpVtbl -> put_PerformanceFlags(This,pDisableList) ) 

#define IMsRdpClientAdvancedSettings_get_PerformanceFlags(This,pDisableList)	\
    ( (This)->lpVtbl -> get_PerformanceFlags(This,pDisableList) ) 

#define IMsRdpClientAdvancedSettings_put_ConnectWithEndpoint(This,rhs)	\
    ( (This)->lpVtbl -> put_ConnectWithEndpoint(This,rhs) ) 

#define IMsRdpClientAdvancedSettings_put_NotifyTSPublicKey(This,pfNotify)	\
    ( (This)->lpVtbl -> put_NotifyTSPublicKey(This,pfNotify) ) 

#define IMsRdpClientAdvancedSettings_get_NotifyTSPublicKey(This,pfNotify)	\
    ( (This)->lpVtbl -> get_NotifyTSPublicKey(This,pfNotify) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings_get_RedirectSmartCards_Proxy( 
    IMsRdpClientAdvancedSettings * This,
    /* [retval][out] */ VARIANT_BOOL *pRedirectSmartCards);


void __RPC_STUB IMsRdpClientAdvancedSettings_get_RedirectSmartCards_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings_put_BitmapVirtualCache16BppSize_Proxy( 
    IMsRdpClientAdvancedSettings * This,
    /* [in] */ long pBitmapVirtualCache16BppSize);


void __RPC_STUB IMsRdpClientAdvancedSettings_put_BitmapVirtualCache16BppSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings_get_BitmapVirtualCache16BppSize_Proxy( 
    IMsRdpClientAdvancedSettings * This,
    /* [retval][out] */ long *pBitmapVirtualCache16BppSize);


void __RPC_STUB IMsRdpClientAdvancedSettings_get_BitmapVirtualCache16BppSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings_put_BitmapVirtualCache24BppSize_Proxy( 
    IMsRdpClientAdvancedSettings * This,
    /* [in] */ long pBitmapVirtualCache24BppSize);


void __RPC_STUB IMsRdpClientAdvancedSettings_put_BitmapVirtualCache24BppSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings_get_BitmapVirtualCache24BppSize_Proxy( 
    IMsRdpClientAdvancedSettings * This,
    /* [retval][out] */ long *pBitmapVirtualCache24BppSize);


void __RPC_STUB IMsRdpClientAdvancedSettings_get_BitmapVirtualCache24BppSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings_put_PerformanceFlags_Proxy( 
    IMsRdpClientAdvancedSettings * This,
    /* [in] */ long pDisableList);


void __RPC_STUB IMsRdpClientAdvancedSettings_put_PerformanceFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings_get_PerformanceFlags_Proxy( 
    IMsRdpClientAdvancedSettings * This,
    /* [retval][out] */ long *pDisableList);


void __RPC_STUB IMsRdpClientAdvancedSettings_get_PerformanceFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings_put_ConnectWithEndpoint_Proxy( 
    IMsRdpClientAdvancedSettings * This,
    /* [in] */ VARIANT *rhs);


void __RPC_STUB IMsRdpClientAdvancedSettings_put_ConnectWithEndpoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings_put_NotifyTSPublicKey_Proxy( 
    IMsRdpClientAdvancedSettings * This,
    /* [in] */ VARIANT_BOOL pfNotify);


void __RPC_STUB IMsRdpClientAdvancedSettings_put_NotifyTSPublicKey_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings_get_NotifyTSPublicKey_Proxy( 
    IMsRdpClientAdvancedSettings * This,
    /* [retval][out] */ VARIANT_BOOL *pfNotify);


void __RPC_STUB IMsRdpClientAdvancedSettings_get_NotifyTSPublicKey_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMsRdpClientAdvancedSettings_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClientAdvancedSettings2_INTERFACE_DEFINED__
#define __IMsRdpClientAdvancedSettings2_INTERFACE_DEFINED__

/* interface IMsRdpClientAdvancedSettings2 */
/* [oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClientAdvancedSettings2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9AC42117-2B76-4320-AA44-0E616AB8437B")
    IMsRdpClientAdvancedSettings2 : public IMsRdpClientAdvancedSettings
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_CanAutoReconnect( 
            /* [retval][out] */ VARIANT_BOOL *pfCanAutoReconnect) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_EnableAutoReconnect( 
            /* [in] */ VARIANT_BOOL pfEnableAutoReconnect) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_EnableAutoReconnect( 
            /* [retval][out] */ VARIANT_BOOL *pfEnableAutoReconnect) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_MaxReconnectAttempts( 
            /* [in] */ long pMaxReconnectAttempts) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_MaxReconnectAttempts( 
            /* [retval][out] */ long *pMaxReconnectAttempts) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMsRdpClientAdvancedSettings2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClientAdvancedSettings2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClientAdvancedSettings2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Compress )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long pcompress);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Compress )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *pcompress);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapPeristence )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long pbitmapPeristence);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapPeristence )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *pbitmapPeristence);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_allowBackgroundInput )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long pallowBackgroundInput);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_allowBackgroundInput )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *pallowBackgroundInput);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyBoardLayoutStr )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PluginDlls )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IconFile )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IconIndex )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ContainerHandledFullScreen )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long pContainerHandledFullScreen);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ContainerHandledFullScreen )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *pContainerHandledFullScreen);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisableRdpdr )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long pDisableRdpdr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisableRdpdr )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *pDisableRdpdr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SmoothScroll )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long psmoothScroll);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SmoothScroll )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *psmoothScroll);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AcceleratorPassthrough )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long pacceleratorPassthrough);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AcceleratorPassthrough )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *pacceleratorPassthrough);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ShadowBitmap )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long pshadowBitmap);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ShadowBitmap )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *pshadowBitmap);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TransportType )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long ptransportType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TransportType )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *ptransportType);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SasSequence )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long psasSequence);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SasSequence )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *psasSequence);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EncryptionEnabled )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long pencryptionEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EncryptionEnabled )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *pencryptionEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DedicatedTerminal )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long pdedicatedTerminal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DedicatedTerminal )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *pdedicatedTerminal);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RDPPort )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long prdpPort);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RDPPort )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *prdpPort);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EnableMouse )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long penableMouse);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EnableMouse )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *penableMouse);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisableCtrlAltDel )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long pdisableCtrlAltDel);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisableCtrlAltDel )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *pdisableCtrlAltDel);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EnableWindowsKey )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long penableWindowsKey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EnableWindowsKey )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *penableWindowsKey);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DoubleClickDetect )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long pdoubleClickDetect);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DoubleClickDetect )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *pdoubleClickDetect);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MaximizeShell )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long pmaximizeShell);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MaximizeShell )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *pmaximizeShell);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyFullScreen )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long photKeyFullScreen);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyFullScreen )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *photKeyFullScreen);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyCtrlEsc )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long photKeyCtrlEsc);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyCtrlEsc )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *photKeyCtrlEsc);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltEsc )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long photKeyAltEsc);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltEsc )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *photKeyAltEsc);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltTab )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long photKeyAltTab);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltTab )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *photKeyAltTab);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltShiftTab )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long photKeyAltShiftTab);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltShiftTab )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *photKeyAltShiftTab);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltSpace )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long photKeyAltSpace);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltSpace )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *photKeyAltSpace);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyCtrlAltDel )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long photKeyCtrlAltDel);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyCtrlAltDel )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *photKeyCtrlAltDel);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_orderDrawThreshold )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long porderDrawThreshold);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_orderDrawThreshold )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *porderDrawThreshold);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapCacheSize )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long pbitmapCacheSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapCacheSize )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *pbitmapCacheSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCacheSize )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long pbitmapVirtualCacheSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCacheSize )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *pbitmapVirtualCacheSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScaleBitmapCachesByBPP )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long pbScale);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScaleBitmapCachesByBPP )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *pbScale);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_NumBitmapCaches )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long pnumBitmapCaches);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NumBitmapCaches )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *pnumBitmapCaches);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_CachePersistenceActive )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long pcachePersistenceActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CachePersistenceActive )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *pcachePersistenceActive);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PersistCacheDirectory )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_brushSupportLevel )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long pbrushSupportLevel);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_brushSupportLevel )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *pbrushSupportLevel);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_minInputSendInterval )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long pminInputSendInterval);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_minInputSendInterval )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *pminInputSendInterval);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_InputEventsAtOnce )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long pinputEventsAtOnce);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InputEventsAtOnce )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *pinputEventsAtOnce);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_maxEventCount )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long pmaxEventCount);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_maxEventCount )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *pmaxEventCount);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_keepAliveInterval )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long pkeepAliveInterval);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_keepAliveInterval )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *pkeepAliveInterval);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_shutdownTimeout )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long pshutdownTimeout);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_shutdownTimeout )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *pshutdownTimeout);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_overallConnectionTimeout )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long poverallConnectionTimeout);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_overallConnectionTimeout )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *poverallConnectionTimeout);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_singleConnectionTimeout )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long psingleConnectionTimeout);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_singleConnectionTimeout )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *psingleConnectionTimeout);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardType )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long pkeyboardType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardType )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *pkeyboardType);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardSubType )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long pkeyboardSubType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardSubType )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *pkeyboardSubType);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardFunctionKey )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long pkeyboardFunctionKey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardFunctionKey )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *pkeyboardFunctionKey);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_WinceFixedPalette )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long pwinceFixedPalette);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_WinceFixedPalette )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *pwinceFixedPalette);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectToServerConsole )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ VARIANT_BOOL pConnectToConsole);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectToServerConsole )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ VARIANT_BOOL *pConnectToConsole);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapPersistence )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long pbitmapPersistence);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapPersistence )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *pbitmapPersistence);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MinutesToIdleTimeout )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long pminutesToIdleTimeout);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MinutesToIdleTimeout )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *pminutesToIdleTimeout);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SmartSizing )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ VARIANT_BOOL pfSmartSizing);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SmartSizing )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ VARIANT_BOOL *pfSmartSizing);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrLocalPrintingDocName )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ BSTR pLocalPrintingDocName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrLocalPrintingDocName )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ BSTR *pLocalPrintingDocName);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrClipCleanTempDirString )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ BSTR clipCleanTempDirString);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrClipCleanTempDirString )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ BSTR *clipCleanTempDirString);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrClipPasteInfoString )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ BSTR clipPasteInfoString);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrClipPasteInfoString )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ BSTR *clipPasteInfoString);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ClearTextPassword )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayConnectionBar )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ VARIANT_BOOL pDisplayConnectionBar);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayConnectionBar )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ VARIANT_BOOL *pDisplayConnectionBar);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PinConnectionBar )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ VARIANT_BOOL pPinConnectionBar);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PinConnectionBar )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ VARIANT_BOOL *pPinConnectionBar);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GrabFocusOnConnect )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ VARIANT_BOOL pfGrabFocusOnConnect);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GrabFocusOnConnect )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ VARIANT_BOOL *pfGrabFocusOnConnect);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_LoadBalanceInfo )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ BSTR pLBInfo);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LoadBalanceInfo )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ BSTR *pLBInfo);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectDrives )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ VARIANT_BOOL pRedirectDrives);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectDrives )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectDrives);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectPrinters )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ VARIANT_BOOL pRedirectPrinters);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectPrinters )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectPrinters);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectPorts )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ VARIANT_BOOL pRedirectPorts);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectPorts )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectPorts);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectSmartCards )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ VARIANT_BOOL pRedirectSmartCards);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectSmartCards )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectSmartCards);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCache16BppSize )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long pBitmapVirtualCache16BppSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCache16BppSize )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *pBitmapVirtualCache16BppSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCache24BppSize )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long pBitmapVirtualCache24BppSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCache24BppSize )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *pBitmapVirtualCache24BppSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PerformanceFlags )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long pDisableList);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PerformanceFlags )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *pDisableList);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectWithEndpoint )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ VARIANT *rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_NotifyTSPublicKey )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ VARIANT_BOOL pfNotify);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NotifyTSPublicKey )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ VARIANT_BOOL *pfNotify);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CanAutoReconnect )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ VARIANT_BOOL *pfCanAutoReconnect);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EnableAutoReconnect )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ VARIANT_BOOL pfEnableAutoReconnect);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EnableAutoReconnect )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ VARIANT_BOOL *pfEnableAutoReconnect);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MaxReconnectAttempts )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ long pMaxReconnectAttempts);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MaxReconnectAttempts )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ long *pMaxReconnectAttempts);
        
        END_INTERFACE
    } IMsRdpClientAdvancedSettings2Vtbl;

    interface IMsRdpClientAdvancedSettings2
    {
        CONST_VTBL struct IMsRdpClientAdvancedSettings2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClientAdvancedSettings2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClientAdvancedSettings2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClientAdvancedSettings2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClientAdvancedSettings2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClientAdvancedSettings2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClientAdvancedSettings2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClientAdvancedSettings2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMsRdpClientAdvancedSettings2_put_Compress(This,pcompress)	\
    ( (This)->lpVtbl -> put_Compress(This,pcompress) ) 

#define IMsRdpClientAdvancedSettings2_get_Compress(This,pcompress)	\
    ( (This)->lpVtbl -> get_Compress(This,pcompress) ) 

#define IMsRdpClientAdvancedSettings2_put_BitmapPeristence(This,pbitmapPeristence)	\
    ( (This)->lpVtbl -> put_BitmapPeristence(This,pbitmapPeristence) ) 

#define IMsRdpClientAdvancedSettings2_get_BitmapPeristence(This,pbitmapPeristence)	\
    ( (This)->lpVtbl -> get_BitmapPeristence(This,pbitmapPeristence) ) 

#define IMsRdpClientAdvancedSettings2_put_allowBackgroundInput(This,pallowBackgroundInput)	\
    ( (This)->lpVtbl -> put_allowBackgroundInput(This,pallowBackgroundInput) ) 

#define IMsRdpClientAdvancedSettings2_get_allowBackgroundInput(This,pallowBackgroundInput)	\
    ( (This)->lpVtbl -> get_allowBackgroundInput(This,pallowBackgroundInput) ) 

#define IMsRdpClientAdvancedSettings2_put_KeyBoardLayoutStr(This,rhs)	\
    ( (This)->lpVtbl -> put_KeyBoardLayoutStr(This,rhs) ) 

#define IMsRdpClientAdvancedSettings2_put_PluginDlls(This,rhs)	\
    ( (This)->lpVtbl -> put_PluginDlls(This,rhs) ) 

#define IMsRdpClientAdvancedSettings2_put_IconFile(This,rhs)	\
    ( (This)->lpVtbl -> put_IconFile(This,rhs) ) 

#define IMsRdpClientAdvancedSettings2_put_IconIndex(This,rhs)	\
    ( (This)->lpVtbl -> put_IconIndex(This,rhs) ) 

#define IMsRdpClientAdvancedSettings2_put_ContainerHandledFullScreen(This,pContainerHandledFullScreen)	\
    ( (This)->lpVtbl -> put_ContainerHandledFullScreen(This,pContainerHandledFullScreen) ) 

#define IMsRdpClientAdvancedSettings2_get_ContainerHandledFullScreen(This,pContainerHandledFullScreen)	\
    ( (This)->lpVtbl -> get_ContainerHandledFullScreen(This,pContainerHandledFullScreen) ) 

#define IMsRdpClientAdvancedSettings2_put_DisableRdpdr(This,pDisableRdpdr)	\
    ( (This)->lpVtbl -> put_DisableRdpdr(This,pDisableRdpdr) ) 

#define IMsRdpClientAdvancedSettings2_get_DisableRdpdr(This,pDisableRdpdr)	\
    ( (This)->lpVtbl -> get_DisableRdpdr(This,pDisableRdpdr) ) 


#define IMsRdpClientAdvancedSettings2_put_SmoothScroll(This,psmoothScroll)	\
    ( (This)->lpVtbl -> put_SmoothScroll(This,psmoothScroll) ) 

#define IMsRdpClientAdvancedSettings2_get_SmoothScroll(This,psmoothScroll)	\
    ( (This)->lpVtbl -> get_SmoothScroll(This,psmoothScroll) ) 

#define IMsRdpClientAdvancedSettings2_put_AcceleratorPassthrough(This,pacceleratorPassthrough)	\
    ( (This)->lpVtbl -> put_AcceleratorPassthrough(This,pacceleratorPassthrough) ) 

#define IMsRdpClientAdvancedSettings2_get_AcceleratorPassthrough(This,pacceleratorPassthrough)	\
    ( (This)->lpVtbl -> get_AcceleratorPassthrough(This,pacceleratorPassthrough) ) 

#define IMsRdpClientAdvancedSettings2_put_ShadowBitmap(This,pshadowBitmap)	\
    ( (This)->lpVtbl -> put_ShadowBitmap(This,pshadowBitmap) ) 

#define IMsRdpClientAdvancedSettings2_get_ShadowBitmap(This,pshadowBitmap)	\
    ( (This)->lpVtbl -> get_ShadowBitmap(This,pshadowBitmap) ) 

#define IMsRdpClientAdvancedSettings2_put_TransportType(This,ptransportType)	\
    ( (This)->lpVtbl -> put_TransportType(This,ptransportType) ) 

#define IMsRdpClientAdvancedSettings2_get_TransportType(This,ptransportType)	\
    ( (This)->lpVtbl -> get_TransportType(This,ptransportType) ) 

#define IMsRdpClientAdvancedSettings2_put_SasSequence(This,psasSequence)	\
    ( (This)->lpVtbl -> put_SasSequence(This,psasSequence) ) 

#define IMsRdpClientAdvancedSettings2_get_SasSequence(This,psasSequence)	\
    ( (This)->lpVtbl -> get_SasSequence(This,psasSequence) ) 

#define IMsRdpClientAdvancedSettings2_put_EncryptionEnabled(This,pencryptionEnabled)	\
    ( (This)->lpVtbl -> put_EncryptionEnabled(This,pencryptionEnabled) ) 

#define IMsRdpClientAdvancedSettings2_get_EncryptionEnabled(This,pencryptionEnabled)	\
    ( (This)->lpVtbl -> get_EncryptionEnabled(This,pencryptionEnabled) ) 

#define IMsRdpClientAdvancedSettings2_put_DedicatedTerminal(This,pdedicatedTerminal)	\
    ( (This)->lpVtbl -> put_DedicatedTerminal(This,pdedicatedTerminal) ) 

#define IMsRdpClientAdvancedSettings2_get_DedicatedTerminal(This,pdedicatedTerminal)	\
    ( (This)->lpVtbl -> get_DedicatedTerminal(This,pdedicatedTerminal) ) 

#define IMsRdpClientAdvancedSettings2_put_RDPPort(This,prdpPort)	\
    ( (This)->lpVtbl -> put_RDPPort(This,prdpPort) ) 

#define IMsRdpClientAdvancedSettings2_get_RDPPort(This,prdpPort)	\
    ( (This)->lpVtbl -> get_RDPPort(This,prdpPort) ) 

#define IMsRdpClientAdvancedSettings2_put_EnableMouse(This,penableMouse)	\
    ( (This)->lpVtbl -> put_EnableMouse(This,penableMouse) ) 

#define IMsRdpClientAdvancedSettings2_get_EnableMouse(This,penableMouse)	\
    ( (This)->lpVtbl -> get_EnableMouse(This,penableMouse) ) 

#define IMsRdpClientAdvancedSettings2_put_DisableCtrlAltDel(This,pdisableCtrlAltDel)	\
    ( (This)->lpVtbl -> put_DisableCtrlAltDel(This,pdisableCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings2_get_DisableCtrlAltDel(This,pdisableCtrlAltDel)	\
    ( (This)->lpVtbl -> get_DisableCtrlAltDel(This,pdisableCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings2_put_EnableWindowsKey(This,penableWindowsKey)	\
    ( (This)->lpVtbl -> put_EnableWindowsKey(This,penableWindowsKey) ) 

#define IMsRdpClientAdvancedSettings2_get_EnableWindowsKey(This,penableWindowsKey)	\
    ( (This)->lpVtbl -> get_EnableWindowsKey(This,penableWindowsKey) ) 

#define IMsRdpClientAdvancedSettings2_put_DoubleClickDetect(This,pdoubleClickDetect)	\
    ( (This)->lpVtbl -> put_DoubleClickDetect(This,pdoubleClickDetect) ) 

#define IMsRdpClientAdvancedSettings2_get_DoubleClickDetect(This,pdoubleClickDetect)	\
    ( (This)->lpVtbl -> get_DoubleClickDetect(This,pdoubleClickDetect) ) 

#define IMsRdpClientAdvancedSettings2_put_MaximizeShell(This,pmaximizeShell)	\
    ( (This)->lpVtbl -> put_MaximizeShell(This,pmaximizeShell) ) 

#define IMsRdpClientAdvancedSettings2_get_MaximizeShell(This,pmaximizeShell)	\
    ( (This)->lpVtbl -> get_MaximizeShell(This,pmaximizeShell) ) 

#define IMsRdpClientAdvancedSettings2_put_HotKeyFullScreen(This,photKeyFullScreen)	\
    ( (This)->lpVtbl -> put_HotKeyFullScreen(This,photKeyFullScreen) ) 

#define IMsRdpClientAdvancedSettings2_get_HotKeyFullScreen(This,photKeyFullScreen)	\
    ( (This)->lpVtbl -> get_HotKeyFullScreen(This,photKeyFullScreen) ) 

#define IMsRdpClientAdvancedSettings2_put_HotKeyCtrlEsc(This,photKeyCtrlEsc)	\
    ( (This)->lpVtbl -> put_HotKeyCtrlEsc(This,photKeyCtrlEsc) ) 

#define IMsRdpClientAdvancedSettings2_get_HotKeyCtrlEsc(This,photKeyCtrlEsc)	\
    ( (This)->lpVtbl -> get_HotKeyCtrlEsc(This,photKeyCtrlEsc) ) 

#define IMsRdpClientAdvancedSettings2_put_HotKeyAltEsc(This,photKeyAltEsc)	\
    ( (This)->lpVtbl -> put_HotKeyAltEsc(This,photKeyAltEsc) ) 

#define IMsRdpClientAdvancedSettings2_get_HotKeyAltEsc(This,photKeyAltEsc)	\
    ( (This)->lpVtbl -> get_HotKeyAltEsc(This,photKeyAltEsc) ) 

#define IMsRdpClientAdvancedSettings2_put_HotKeyAltTab(This,photKeyAltTab)	\
    ( (This)->lpVtbl -> put_HotKeyAltTab(This,photKeyAltTab) ) 

#define IMsRdpClientAdvancedSettings2_get_HotKeyAltTab(This,photKeyAltTab)	\
    ( (This)->lpVtbl -> get_HotKeyAltTab(This,photKeyAltTab) ) 

#define IMsRdpClientAdvancedSettings2_put_HotKeyAltShiftTab(This,photKeyAltShiftTab)	\
    ( (This)->lpVtbl -> put_HotKeyAltShiftTab(This,photKeyAltShiftTab) ) 

#define IMsRdpClientAdvancedSettings2_get_HotKeyAltShiftTab(This,photKeyAltShiftTab)	\
    ( (This)->lpVtbl -> get_HotKeyAltShiftTab(This,photKeyAltShiftTab) ) 

#define IMsRdpClientAdvancedSettings2_put_HotKeyAltSpace(This,photKeyAltSpace)	\
    ( (This)->lpVtbl -> put_HotKeyAltSpace(This,photKeyAltSpace) ) 

#define IMsRdpClientAdvancedSettings2_get_HotKeyAltSpace(This,photKeyAltSpace)	\
    ( (This)->lpVtbl -> get_HotKeyAltSpace(This,photKeyAltSpace) ) 

#define IMsRdpClientAdvancedSettings2_put_HotKeyCtrlAltDel(This,photKeyCtrlAltDel)	\
    ( (This)->lpVtbl -> put_HotKeyCtrlAltDel(This,photKeyCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings2_get_HotKeyCtrlAltDel(This,photKeyCtrlAltDel)	\
    ( (This)->lpVtbl -> get_HotKeyCtrlAltDel(This,photKeyCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings2_put_orderDrawThreshold(This,porderDrawThreshold)	\
    ( (This)->lpVtbl -> put_orderDrawThreshold(This,porderDrawThreshold) ) 

#define IMsRdpClientAdvancedSettings2_get_orderDrawThreshold(This,porderDrawThreshold)	\
    ( (This)->lpVtbl -> get_orderDrawThreshold(This,porderDrawThreshold) ) 

#define IMsRdpClientAdvancedSettings2_put_BitmapCacheSize(This,pbitmapCacheSize)	\
    ( (This)->lpVtbl -> put_BitmapCacheSize(This,pbitmapCacheSize) ) 

#define IMsRdpClientAdvancedSettings2_get_BitmapCacheSize(This,pbitmapCacheSize)	\
    ( (This)->lpVtbl -> get_BitmapCacheSize(This,pbitmapCacheSize) ) 

#define IMsRdpClientAdvancedSettings2_put_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize)	\
    ( (This)->lpVtbl -> put_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize) ) 

#define IMsRdpClientAdvancedSettings2_get_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize)	\
    ( (This)->lpVtbl -> get_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize) ) 

#define IMsRdpClientAdvancedSettings2_put_ScaleBitmapCachesByBPP(This,pbScale)	\
    ( (This)->lpVtbl -> put_ScaleBitmapCachesByBPP(This,pbScale) ) 

#define IMsRdpClientAdvancedSettings2_get_ScaleBitmapCachesByBPP(This,pbScale)	\
    ( (This)->lpVtbl -> get_ScaleBitmapCachesByBPP(This,pbScale) ) 

#define IMsRdpClientAdvancedSettings2_put_NumBitmapCaches(This,pnumBitmapCaches)	\
    ( (This)->lpVtbl -> put_NumBitmapCaches(This,pnumBitmapCaches) ) 

#define IMsRdpClientAdvancedSettings2_get_NumBitmapCaches(This,pnumBitmapCaches)	\
    ( (This)->lpVtbl -> get_NumBitmapCaches(This,pnumBitmapCaches) ) 

#define IMsRdpClientAdvancedSettings2_put_CachePersistenceActive(This,pcachePersistenceActive)	\
    ( (This)->lpVtbl -> put_CachePersistenceActive(This,pcachePersistenceActive) ) 

#define IMsRdpClientAdvancedSettings2_get_CachePersistenceActive(This,pcachePersistenceActive)	\
    ( (This)->lpVtbl -> get_CachePersistenceActive(This,pcachePersistenceActive) ) 

#define IMsRdpClientAdvancedSettings2_put_PersistCacheDirectory(This,rhs)	\
    ( (This)->lpVtbl -> put_PersistCacheDirectory(This,rhs) ) 

#define IMsRdpClientAdvancedSettings2_put_brushSupportLevel(This,pbrushSupportLevel)	\
    ( (This)->lpVtbl -> put_brushSupportLevel(This,pbrushSupportLevel) ) 

#define IMsRdpClientAdvancedSettings2_get_brushSupportLevel(This,pbrushSupportLevel)	\
    ( (This)->lpVtbl -> get_brushSupportLevel(This,pbrushSupportLevel) ) 

#define IMsRdpClientAdvancedSettings2_put_minInputSendInterval(This,pminInputSendInterval)	\
    ( (This)->lpVtbl -> put_minInputSendInterval(This,pminInputSendInterval) ) 

#define IMsRdpClientAdvancedSettings2_get_minInputSendInterval(This,pminInputSendInterval)	\
    ( (This)->lpVtbl -> get_minInputSendInterval(This,pminInputSendInterval) ) 

#define IMsRdpClientAdvancedSettings2_put_InputEventsAtOnce(This,pinputEventsAtOnce)	\
    ( (This)->lpVtbl -> put_InputEventsAtOnce(This,pinputEventsAtOnce) ) 

#define IMsRdpClientAdvancedSettings2_get_InputEventsAtOnce(This,pinputEventsAtOnce)	\
    ( (This)->lpVtbl -> get_InputEventsAtOnce(This,pinputEventsAtOnce) ) 

#define IMsRdpClientAdvancedSettings2_put_maxEventCount(This,pmaxEventCount)	\
    ( (This)->lpVtbl -> put_maxEventCount(This,pmaxEventCount) ) 

#define IMsRdpClientAdvancedSettings2_get_maxEventCount(This,pmaxEventCount)	\
    ( (This)->lpVtbl -> get_maxEventCount(This,pmaxEventCount) ) 

#define IMsRdpClientAdvancedSettings2_put_keepAliveInterval(This,pkeepAliveInterval)	\
    ( (This)->lpVtbl -> put_keepAliveInterval(This,pkeepAliveInterval) ) 

#define IMsRdpClientAdvancedSettings2_get_keepAliveInterval(This,pkeepAliveInterval)	\
    ( (This)->lpVtbl -> get_keepAliveInterval(This,pkeepAliveInterval) ) 

#define IMsRdpClientAdvancedSettings2_put_shutdownTimeout(This,pshutdownTimeout)	\
    ( (This)->lpVtbl -> put_shutdownTimeout(This,pshutdownTimeout) ) 

#define IMsRdpClientAdvancedSettings2_get_shutdownTimeout(This,pshutdownTimeout)	\
    ( (This)->lpVtbl -> get_shutdownTimeout(This,pshutdownTimeout) ) 

#define IMsRdpClientAdvancedSettings2_put_overallConnectionTimeout(This,poverallConnectionTimeout)	\
    ( (This)->lpVtbl -> put_overallConnectionTimeout(This,poverallConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings2_get_overallConnectionTimeout(This,poverallConnectionTimeout)	\
    ( (This)->lpVtbl -> get_overallConnectionTimeout(This,poverallConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings2_put_singleConnectionTimeout(This,psingleConnectionTimeout)	\
    ( (This)->lpVtbl -> put_singleConnectionTimeout(This,psingleConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings2_get_singleConnectionTimeout(This,psingleConnectionTimeout)	\
    ( (This)->lpVtbl -> get_singleConnectionTimeout(This,psingleConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings2_put_KeyboardType(This,pkeyboardType)	\
    ( (This)->lpVtbl -> put_KeyboardType(This,pkeyboardType) ) 

#define IMsRdpClientAdvancedSettings2_get_KeyboardType(This,pkeyboardType)	\
    ( (This)->lpVtbl -> get_KeyboardType(This,pkeyboardType) ) 

#define IMsRdpClientAdvancedSettings2_put_KeyboardSubType(This,pkeyboardSubType)	\
    ( (This)->lpVtbl -> put_KeyboardSubType(This,pkeyboardSubType) ) 

#define IMsRdpClientAdvancedSettings2_get_KeyboardSubType(This,pkeyboardSubType)	\
    ( (This)->lpVtbl -> get_KeyboardSubType(This,pkeyboardSubType) ) 

#define IMsRdpClientAdvancedSettings2_put_KeyboardFunctionKey(This,pkeyboardFunctionKey)	\
    ( (This)->lpVtbl -> put_KeyboardFunctionKey(This,pkeyboardFunctionKey) ) 

#define IMsRdpClientAdvancedSettings2_get_KeyboardFunctionKey(This,pkeyboardFunctionKey)	\
    ( (This)->lpVtbl -> get_KeyboardFunctionKey(This,pkeyboardFunctionKey) ) 

#define IMsRdpClientAdvancedSettings2_put_WinceFixedPalette(This,pwinceFixedPalette)	\
    ( (This)->lpVtbl -> put_WinceFixedPalette(This,pwinceFixedPalette) ) 

#define IMsRdpClientAdvancedSettings2_get_WinceFixedPalette(This,pwinceFixedPalette)	\
    ( (This)->lpVtbl -> get_WinceFixedPalette(This,pwinceFixedPalette) ) 

#define IMsRdpClientAdvancedSettings2_put_ConnectToServerConsole(This,pConnectToConsole)	\
    ( (This)->lpVtbl -> put_ConnectToServerConsole(This,pConnectToConsole) ) 

#define IMsRdpClientAdvancedSettings2_get_ConnectToServerConsole(This,pConnectToConsole)	\
    ( (This)->lpVtbl -> get_ConnectToServerConsole(This,pConnectToConsole) ) 

#define IMsRdpClientAdvancedSettings2_put_BitmapPersistence(This,pbitmapPersistence)	\
    ( (This)->lpVtbl -> put_BitmapPersistence(This,pbitmapPersistence) ) 

#define IMsRdpClientAdvancedSettings2_get_BitmapPersistence(This,pbitmapPersistence)	\
    ( (This)->lpVtbl -> get_BitmapPersistence(This,pbitmapPersistence) ) 

#define IMsRdpClientAdvancedSettings2_put_MinutesToIdleTimeout(This,pminutesToIdleTimeout)	\
    ( (This)->lpVtbl -> put_MinutesToIdleTimeout(This,pminutesToIdleTimeout) ) 

#define IMsRdpClientAdvancedSettings2_get_MinutesToIdleTimeout(This,pminutesToIdleTimeout)	\
    ( (This)->lpVtbl -> get_MinutesToIdleTimeout(This,pminutesToIdleTimeout) ) 

#define IMsRdpClientAdvancedSettings2_put_SmartSizing(This,pfSmartSizing)	\
    ( (This)->lpVtbl -> put_SmartSizing(This,pfSmartSizing) ) 

#define IMsRdpClientAdvancedSettings2_get_SmartSizing(This,pfSmartSizing)	\
    ( (This)->lpVtbl -> get_SmartSizing(This,pfSmartSizing) ) 

#define IMsRdpClientAdvancedSettings2_put_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName)	\
    ( (This)->lpVtbl -> put_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName) ) 

#define IMsRdpClientAdvancedSettings2_get_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName)	\
    ( (This)->lpVtbl -> get_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName) ) 

#define IMsRdpClientAdvancedSettings2_put_RdpdrClipCleanTempDirString(This,clipCleanTempDirString)	\
    ( (This)->lpVtbl -> put_RdpdrClipCleanTempDirString(This,clipCleanTempDirString) ) 

#define IMsRdpClientAdvancedSettings2_get_RdpdrClipCleanTempDirString(This,clipCleanTempDirString)	\
    ( (This)->lpVtbl -> get_RdpdrClipCleanTempDirString(This,clipCleanTempDirString) ) 

#define IMsRdpClientAdvancedSettings2_put_RdpdrClipPasteInfoString(This,clipPasteInfoString)	\
    ( (This)->lpVtbl -> put_RdpdrClipPasteInfoString(This,clipPasteInfoString) ) 

#define IMsRdpClientAdvancedSettings2_get_RdpdrClipPasteInfoString(This,clipPasteInfoString)	\
    ( (This)->lpVtbl -> get_RdpdrClipPasteInfoString(This,clipPasteInfoString) ) 

#define IMsRdpClientAdvancedSettings2_put_ClearTextPassword(This,rhs)	\
    ( (This)->lpVtbl -> put_ClearTextPassword(This,rhs) ) 

#define IMsRdpClientAdvancedSettings2_put_DisplayConnectionBar(This,pDisplayConnectionBar)	\
    ( (This)->lpVtbl -> put_DisplayConnectionBar(This,pDisplayConnectionBar) ) 

#define IMsRdpClientAdvancedSettings2_get_DisplayConnectionBar(This,pDisplayConnectionBar)	\
    ( (This)->lpVtbl -> get_DisplayConnectionBar(This,pDisplayConnectionBar) ) 

#define IMsRdpClientAdvancedSettings2_put_PinConnectionBar(This,pPinConnectionBar)	\
    ( (This)->lpVtbl -> put_PinConnectionBar(This,pPinConnectionBar) ) 

#define IMsRdpClientAdvancedSettings2_get_PinConnectionBar(This,pPinConnectionBar)	\
    ( (This)->lpVtbl -> get_PinConnectionBar(This,pPinConnectionBar) ) 

#define IMsRdpClientAdvancedSettings2_put_GrabFocusOnConnect(This,pfGrabFocusOnConnect)	\
    ( (This)->lpVtbl -> put_GrabFocusOnConnect(This,pfGrabFocusOnConnect) ) 

#define IMsRdpClientAdvancedSettings2_get_GrabFocusOnConnect(This,pfGrabFocusOnConnect)	\
    ( (This)->lpVtbl -> get_GrabFocusOnConnect(This,pfGrabFocusOnConnect) ) 

#define IMsRdpClientAdvancedSettings2_put_LoadBalanceInfo(This,pLBInfo)	\
    ( (This)->lpVtbl -> put_LoadBalanceInfo(This,pLBInfo) ) 

#define IMsRdpClientAdvancedSettings2_get_LoadBalanceInfo(This,pLBInfo)	\
    ( (This)->lpVtbl -> get_LoadBalanceInfo(This,pLBInfo) ) 

#define IMsRdpClientAdvancedSettings2_put_RedirectDrives(This,pRedirectDrives)	\
    ( (This)->lpVtbl -> put_RedirectDrives(This,pRedirectDrives) ) 

#define IMsRdpClientAdvancedSettings2_get_RedirectDrives(This,pRedirectDrives)	\
    ( (This)->lpVtbl -> get_RedirectDrives(This,pRedirectDrives) ) 

#define IMsRdpClientAdvancedSettings2_put_RedirectPrinters(This,pRedirectPrinters)	\
    ( (This)->lpVtbl -> put_RedirectPrinters(This,pRedirectPrinters) ) 

#define IMsRdpClientAdvancedSettings2_get_RedirectPrinters(This,pRedirectPrinters)	\
    ( (This)->lpVtbl -> get_RedirectPrinters(This,pRedirectPrinters) ) 

#define IMsRdpClientAdvancedSettings2_put_RedirectPorts(This,pRedirectPorts)	\
    ( (This)->lpVtbl -> put_RedirectPorts(This,pRedirectPorts) ) 

#define IMsRdpClientAdvancedSettings2_get_RedirectPorts(This,pRedirectPorts)	\
    ( (This)->lpVtbl -> get_RedirectPorts(This,pRedirectPorts) ) 

#define IMsRdpClientAdvancedSettings2_put_RedirectSmartCards(This,pRedirectSmartCards)	\
    ( (This)->lpVtbl -> put_RedirectSmartCards(This,pRedirectSmartCards) ) 

#define IMsRdpClientAdvancedSettings2_get_RedirectSmartCards(This,pRedirectSmartCards)	\
    ( (This)->lpVtbl -> get_RedirectSmartCards(This,pRedirectSmartCards) ) 

#define IMsRdpClientAdvancedSettings2_put_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize)	\
    ( (This)->lpVtbl -> put_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize) ) 

#define IMsRdpClientAdvancedSettings2_get_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize)	\
    ( (This)->lpVtbl -> get_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize) ) 

#define IMsRdpClientAdvancedSettings2_put_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize)	\
    ( (This)->lpVtbl -> put_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize) ) 

#define IMsRdpClientAdvancedSettings2_get_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize)	\
    ( (This)->lpVtbl -> get_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize) ) 

#define IMsRdpClientAdvancedSettings2_put_PerformanceFlags(This,pDisableList)	\
    ( (This)->lpVtbl -> put_PerformanceFlags(This,pDisableList) ) 

#define IMsRdpClientAdvancedSettings2_get_PerformanceFlags(This,pDisableList)	\
    ( (This)->lpVtbl -> get_PerformanceFlags(This,pDisableList) ) 

#define IMsRdpClientAdvancedSettings2_put_ConnectWithEndpoint(This,rhs)	\
    ( (This)->lpVtbl -> put_ConnectWithEndpoint(This,rhs) ) 

#define IMsRdpClientAdvancedSettings2_put_NotifyTSPublicKey(This,pfNotify)	\
    ( (This)->lpVtbl -> put_NotifyTSPublicKey(This,pfNotify) ) 

#define IMsRdpClientAdvancedSettings2_get_NotifyTSPublicKey(This,pfNotify)	\
    ( (This)->lpVtbl -> get_NotifyTSPublicKey(This,pfNotify) ) 


#define IMsRdpClientAdvancedSettings2_get_CanAutoReconnect(This,pfCanAutoReconnect)	\
    ( (This)->lpVtbl -> get_CanAutoReconnect(This,pfCanAutoReconnect) ) 

#define IMsRdpClientAdvancedSettings2_put_EnableAutoReconnect(This,pfEnableAutoReconnect)	\
    ( (This)->lpVtbl -> put_EnableAutoReconnect(This,pfEnableAutoReconnect) ) 

#define IMsRdpClientAdvancedSettings2_get_EnableAutoReconnect(This,pfEnableAutoReconnect)	\
    ( (This)->lpVtbl -> get_EnableAutoReconnect(This,pfEnableAutoReconnect) ) 

#define IMsRdpClientAdvancedSettings2_put_MaxReconnectAttempts(This,pMaxReconnectAttempts)	\
    ( (This)->lpVtbl -> put_MaxReconnectAttempts(This,pMaxReconnectAttempts) ) 

#define IMsRdpClientAdvancedSettings2_get_MaxReconnectAttempts(This,pMaxReconnectAttempts)	\
    ( (This)->lpVtbl -> get_MaxReconnectAttempts(This,pMaxReconnectAttempts) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings2_get_CanAutoReconnect_Proxy( 
    IMsRdpClientAdvancedSettings2 * This,
    /* [retval][out] */ VARIANT_BOOL *pfCanAutoReconnect);


void __RPC_STUB IMsRdpClientAdvancedSettings2_get_CanAutoReconnect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings2_put_EnableAutoReconnect_Proxy( 
    IMsRdpClientAdvancedSettings2 * This,
    /* [in] */ VARIANT_BOOL pfEnableAutoReconnect);


void __RPC_STUB IMsRdpClientAdvancedSettings2_put_EnableAutoReconnect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings2_get_EnableAutoReconnect_Proxy( 
    IMsRdpClientAdvancedSettings2 * This,
    /* [retval][out] */ VARIANT_BOOL *pfEnableAutoReconnect);


void __RPC_STUB IMsRdpClientAdvancedSettings2_get_EnableAutoReconnect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings2_put_MaxReconnectAttempts_Proxy( 
    IMsRdpClientAdvancedSettings2 * This,
    /* [in] */ long pMaxReconnectAttempts);


void __RPC_STUB IMsRdpClientAdvancedSettings2_put_MaxReconnectAttempts_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings2_get_MaxReconnectAttempts_Proxy( 
    IMsRdpClientAdvancedSettings2 * This,
    /* [retval][out] */ long *pMaxReconnectAttempts);


void __RPC_STUB IMsRdpClientAdvancedSettings2_get_MaxReconnectAttempts_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMsRdpClientAdvancedSettings2_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClientAdvancedSettings3_INTERFACE_DEFINED__
#define __IMsRdpClientAdvancedSettings3_INTERFACE_DEFINED__

/* interface IMsRdpClientAdvancedSettings3 */
/* [oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClientAdvancedSettings3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("19CD856B-C542-4C53-ACEE-F127E3BE1A59")
    IMsRdpClientAdvancedSettings3 : public IMsRdpClientAdvancedSettings2
    {
    public:
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_ConnectionBarShowMinimizeButton( 
            /* [in] */ VARIANT_BOOL pfShowMinimize) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ConnectionBarShowMinimizeButton( 
            /* [retval][out] */ VARIANT_BOOL *pfShowMinimize) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_ConnectionBarShowRestoreButton( 
            /* [in] */ VARIANT_BOOL pfShowRestore) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ConnectionBarShowRestoreButton( 
            /* [retval][out] */ VARIANT_BOOL *pfShowRestore) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMsRdpClientAdvancedSettings3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClientAdvancedSettings3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClientAdvancedSettings3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Compress )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long pcompress);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Compress )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *pcompress);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapPeristence )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long pbitmapPeristence);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapPeristence )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *pbitmapPeristence);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_allowBackgroundInput )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long pallowBackgroundInput);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_allowBackgroundInput )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *pallowBackgroundInput);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyBoardLayoutStr )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PluginDlls )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IconFile )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IconIndex )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ContainerHandledFullScreen )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long pContainerHandledFullScreen);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ContainerHandledFullScreen )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *pContainerHandledFullScreen);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisableRdpdr )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long pDisableRdpdr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisableRdpdr )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *pDisableRdpdr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SmoothScroll )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long psmoothScroll);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SmoothScroll )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *psmoothScroll);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AcceleratorPassthrough )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long pacceleratorPassthrough);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AcceleratorPassthrough )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *pacceleratorPassthrough);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ShadowBitmap )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long pshadowBitmap);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ShadowBitmap )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *pshadowBitmap);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TransportType )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long ptransportType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TransportType )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *ptransportType);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SasSequence )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long psasSequence);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SasSequence )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *psasSequence);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EncryptionEnabled )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long pencryptionEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EncryptionEnabled )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *pencryptionEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DedicatedTerminal )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long pdedicatedTerminal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DedicatedTerminal )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *pdedicatedTerminal);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RDPPort )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long prdpPort);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RDPPort )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *prdpPort);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EnableMouse )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long penableMouse);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EnableMouse )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *penableMouse);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisableCtrlAltDel )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long pdisableCtrlAltDel);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisableCtrlAltDel )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *pdisableCtrlAltDel);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EnableWindowsKey )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long penableWindowsKey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EnableWindowsKey )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *penableWindowsKey);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DoubleClickDetect )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long pdoubleClickDetect);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DoubleClickDetect )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *pdoubleClickDetect);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MaximizeShell )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long pmaximizeShell);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MaximizeShell )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *pmaximizeShell);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyFullScreen )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long photKeyFullScreen);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyFullScreen )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *photKeyFullScreen);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyCtrlEsc )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long photKeyCtrlEsc);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyCtrlEsc )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *photKeyCtrlEsc);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltEsc )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long photKeyAltEsc);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltEsc )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *photKeyAltEsc);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltTab )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long photKeyAltTab);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltTab )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *photKeyAltTab);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltShiftTab )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long photKeyAltShiftTab);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltShiftTab )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *photKeyAltShiftTab);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltSpace )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long photKeyAltSpace);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltSpace )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *photKeyAltSpace);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyCtrlAltDel )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long photKeyCtrlAltDel);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyCtrlAltDel )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *photKeyCtrlAltDel);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_orderDrawThreshold )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long porderDrawThreshold);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_orderDrawThreshold )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *porderDrawThreshold);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapCacheSize )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long pbitmapCacheSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapCacheSize )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *pbitmapCacheSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCacheSize )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long pbitmapVirtualCacheSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCacheSize )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *pbitmapVirtualCacheSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScaleBitmapCachesByBPP )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long pbScale);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScaleBitmapCachesByBPP )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *pbScale);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_NumBitmapCaches )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long pnumBitmapCaches);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NumBitmapCaches )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *pnumBitmapCaches);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_CachePersistenceActive )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long pcachePersistenceActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CachePersistenceActive )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *pcachePersistenceActive);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PersistCacheDirectory )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_brushSupportLevel )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long pbrushSupportLevel);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_brushSupportLevel )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *pbrushSupportLevel);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_minInputSendInterval )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long pminInputSendInterval);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_minInputSendInterval )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *pminInputSendInterval);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_InputEventsAtOnce )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long pinputEventsAtOnce);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InputEventsAtOnce )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *pinputEventsAtOnce);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_maxEventCount )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long pmaxEventCount);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_maxEventCount )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *pmaxEventCount);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_keepAliveInterval )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long pkeepAliveInterval);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_keepAliveInterval )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *pkeepAliveInterval);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_shutdownTimeout )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long pshutdownTimeout);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_shutdownTimeout )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *pshutdownTimeout);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_overallConnectionTimeout )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long poverallConnectionTimeout);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_overallConnectionTimeout )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *poverallConnectionTimeout);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_singleConnectionTimeout )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long psingleConnectionTimeout);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_singleConnectionTimeout )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *psingleConnectionTimeout);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardType )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long pkeyboardType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardType )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *pkeyboardType);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardSubType )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long pkeyboardSubType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardSubType )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *pkeyboardSubType);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardFunctionKey )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long pkeyboardFunctionKey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardFunctionKey )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *pkeyboardFunctionKey);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_WinceFixedPalette )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long pwinceFixedPalette);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_WinceFixedPalette )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *pwinceFixedPalette);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectToServerConsole )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ VARIANT_BOOL pConnectToConsole);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectToServerConsole )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ VARIANT_BOOL *pConnectToConsole);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapPersistence )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long pbitmapPersistence);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapPersistence )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *pbitmapPersistence);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MinutesToIdleTimeout )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long pminutesToIdleTimeout);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MinutesToIdleTimeout )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *pminutesToIdleTimeout);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SmartSizing )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ VARIANT_BOOL pfSmartSizing);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SmartSizing )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ VARIANT_BOOL *pfSmartSizing);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrLocalPrintingDocName )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ BSTR pLocalPrintingDocName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrLocalPrintingDocName )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ BSTR *pLocalPrintingDocName);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrClipCleanTempDirString )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ BSTR clipCleanTempDirString);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrClipCleanTempDirString )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ BSTR *clipCleanTempDirString);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrClipPasteInfoString )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ BSTR clipPasteInfoString);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrClipPasteInfoString )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ BSTR *clipPasteInfoString);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ClearTextPassword )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayConnectionBar )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ VARIANT_BOOL pDisplayConnectionBar);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayConnectionBar )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ VARIANT_BOOL *pDisplayConnectionBar);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PinConnectionBar )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ VARIANT_BOOL pPinConnectionBar);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PinConnectionBar )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ VARIANT_BOOL *pPinConnectionBar);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GrabFocusOnConnect )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ VARIANT_BOOL pfGrabFocusOnConnect);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GrabFocusOnConnect )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ VARIANT_BOOL *pfGrabFocusOnConnect);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_LoadBalanceInfo )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ BSTR pLBInfo);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LoadBalanceInfo )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ BSTR *pLBInfo);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectDrives )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ VARIANT_BOOL pRedirectDrives);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectDrives )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectDrives);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectPrinters )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ VARIANT_BOOL pRedirectPrinters);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectPrinters )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectPrinters);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectPorts )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ VARIANT_BOOL pRedirectPorts);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectPorts )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectPorts);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectSmartCards )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ VARIANT_BOOL pRedirectSmartCards);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectSmartCards )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectSmartCards);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCache16BppSize )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long pBitmapVirtualCache16BppSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCache16BppSize )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *pBitmapVirtualCache16BppSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCache24BppSize )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long pBitmapVirtualCache24BppSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCache24BppSize )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *pBitmapVirtualCache24BppSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PerformanceFlags )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long pDisableList);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PerformanceFlags )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *pDisableList);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectWithEndpoint )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ VARIANT *rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_NotifyTSPublicKey )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ VARIANT_BOOL pfNotify);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NotifyTSPublicKey )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ VARIANT_BOOL *pfNotify);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CanAutoReconnect )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ VARIANT_BOOL *pfCanAutoReconnect);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EnableAutoReconnect )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ VARIANT_BOOL pfEnableAutoReconnect);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EnableAutoReconnect )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ VARIANT_BOOL *pfEnableAutoReconnect);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MaxReconnectAttempts )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ long pMaxReconnectAttempts);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MaxReconnectAttempts )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ long *pMaxReconnectAttempts);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionBarShowMinimizeButton )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ VARIANT_BOOL pfShowMinimize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionBarShowMinimizeButton )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ VARIANT_BOOL *pfShowMinimize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionBarShowRestoreButton )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ VARIANT_BOOL pfShowRestore);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionBarShowRestoreButton )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ VARIANT_BOOL *pfShowRestore);
        
        END_INTERFACE
    } IMsRdpClientAdvancedSettings3Vtbl;

    interface IMsRdpClientAdvancedSettings3
    {
        CONST_VTBL struct IMsRdpClientAdvancedSettings3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClientAdvancedSettings3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClientAdvancedSettings3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClientAdvancedSettings3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClientAdvancedSettings3_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClientAdvancedSettings3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClientAdvancedSettings3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClientAdvancedSettings3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMsRdpClientAdvancedSettings3_put_Compress(This,pcompress)	\
    ( (This)->lpVtbl -> put_Compress(This,pcompress) ) 

#define IMsRdpClientAdvancedSettings3_get_Compress(This,pcompress)	\
    ( (This)->lpVtbl -> get_Compress(This,pcompress) ) 

#define IMsRdpClientAdvancedSettings3_put_BitmapPeristence(This,pbitmapPeristence)	\
    ( (This)->lpVtbl -> put_BitmapPeristence(This,pbitmapPeristence) ) 

#define IMsRdpClientAdvancedSettings3_get_BitmapPeristence(This,pbitmapPeristence)	\
    ( (This)->lpVtbl -> get_BitmapPeristence(This,pbitmapPeristence) ) 

#define IMsRdpClientAdvancedSettings3_put_allowBackgroundInput(This,pallowBackgroundInput)	\
    ( (This)->lpVtbl -> put_allowBackgroundInput(This,pallowBackgroundInput) ) 

#define IMsRdpClientAdvancedSettings3_get_allowBackgroundInput(This,pallowBackgroundInput)	\
    ( (This)->lpVtbl -> get_allowBackgroundInput(This,pallowBackgroundInput) ) 

#define IMsRdpClientAdvancedSettings3_put_KeyBoardLayoutStr(This,rhs)	\
    ( (This)->lpVtbl -> put_KeyBoardLayoutStr(This,rhs) ) 

#define IMsRdpClientAdvancedSettings3_put_PluginDlls(This,rhs)	\
    ( (This)->lpVtbl -> put_PluginDlls(This,rhs) ) 

#define IMsRdpClientAdvancedSettings3_put_IconFile(This,rhs)	\
    ( (This)->lpVtbl -> put_IconFile(This,rhs) ) 

#define IMsRdpClientAdvancedSettings3_put_IconIndex(This,rhs)	\
    ( (This)->lpVtbl -> put_IconIndex(This,rhs) ) 

#define IMsRdpClientAdvancedSettings3_put_ContainerHandledFullScreen(This,pContainerHandledFullScreen)	\
    ( (This)->lpVtbl -> put_ContainerHandledFullScreen(This,pContainerHandledFullScreen) ) 

#define IMsRdpClientAdvancedSettings3_get_ContainerHandledFullScreen(This,pContainerHandledFullScreen)	\
    ( (This)->lpVtbl -> get_ContainerHandledFullScreen(This,pContainerHandledFullScreen) ) 

#define IMsRdpClientAdvancedSettings3_put_DisableRdpdr(This,pDisableRdpdr)	\
    ( (This)->lpVtbl -> put_DisableRdpdr(This,pDisableRdpdr) ) 

#define IMsRdpClientAdvancedSettings3_get_DisableRdpdr(This,pDisableRdpdr)	\
    ( (This)->lpVtbl -> get_DisableRdpdr(This,pDisableRdpdr) ) 


#define IMsRdpClientAdvancedSettings3_put_SmoothScroll(This,psmoothScroll)	\
    ( (This)->lpVtbl -> put_SmoothScroll(This,psmoothScroll) ) 

#define IMsRdpClientAdvancedSettings3_get_SmoothScroll(This,psmoothScroll)	\
    ( (This)->lpVtbl -> get_SmoothScroll(This,psmoothScroll) ) 

#define IMsRdpClientAdvancedSettings3_put_AcceleratorPassthrough(This,pacceleratorPassthrough)	\
    ( (This)->lpVtbl -> put_AcceleratorPassthrough(This,pacceleratorPassthrough) ) 

#define IMsRdpClientAdvancedSettings3_get_AcceleratorPassthrough(This,pacceleratorPassthrough)	\
    ( (This)->lpVtbl -> get_AcceleratorPassthrough(This,pacceleratorPassthrough) ) 

#define IMsRdpClientAdvancedSettings3_put_ShadowBitmap(This,pshadowBitmap)	\
    ( (This)->lpVtbl -> put_ShadowBitmap(This,pshadowBitmap) ) 

#define IMsRdpClientAdvancedSettings3_get_ShadowBitmap(This,pshadowBitmap)	\
    ( (This)->lpVtbl -> get_ShadowBitmap(This,pshadowBitmap) ) 

#define IMsRdpClientAdvancedSettings3_put_TransportType(This,ptransportType)	\
    ( (This)->lpVtbl -> put_TransportType(This,ptransportType) ) 

#define IMsRdpClientAdvancedSettings3_get_TransportType(This,ptransportType)	\
    ( (This)->lpVtbl -> get_TransportType(This,ptransportType) ) 

#define IMsRdpClientAdvancedSettings3_put_SasSequence(This,psasSequence)	\
    ( (This)->lpVtbl -> put_SasSequence(This,psasSequence) ) 

#define IMsRdpClientAdvancedSettings3_get_SasSequence(This,psasSequence)	\
    ( (This)->lpVtbl -> get_SasSequence(This,psasSequence) ) 

#define IMsRdpClientAdvancedSettings3_put_EncryptionEnabled(This,pencryptionEnabled)	\
    ( (This)->lpVtbl -> put_EncryptionEnabled(This,pencryptionEnabled) ) 

#define IMsRdpClientAdvancedSettings3_get_EncryptionEnabled(This,pencryptionEnabled)	\
    ( (This)->lpVtbl -> get_EncryptionEnabled(This,pencryptionEnabled) ) 

#define IMsRdpClientAdvancedSettings3_put_DedicatedTerminal(This,pdedicatedTerminal)	\
    ( (This)->lpVtbl -> put_DedicatedTerminal(This,pdedicatedTerminal) ) 

#define IMsRdpClientAdvancedSettings3_get_DedicatedTerminal(This,pdedicatedTerminal)	\
    ( (This)->lpVtbl -> get_DedicatedTerminal(This,pdedicatedTerminal) ) 

#define IMsRdpClientAdvancedSettings3_put_RDPPort(This,prdpPort)	\
    ( (This)->lpVtbl -> put_RDPPort(This,prdpPort) ) 

#define IMsRdpClientAdvancedSettings3_get_RDPPort(This,prdpPort)	\
    ( (This)->lpVtbl -> get_RDPPort(This,prdpPort) ) 

#define IMsRdpClientAdvancedSettings3_put_EnableMouse(This,penableMouse)	\
    ( (This)->lpVtbl -> put_EnableMouse(This,penableMouse) ) 

#define IMsRdpClientAdvancedSettings3_get_EnableMouse(This,penableMouse)	\
    ( (This)->lpVtbl -> get_EnableMouse(This,penableMouse) ) 

#define IMsRdpClientAdvancedSettings3_put_DisableCtrlAltDel(This,pdisableCtrlAltDel)	\
    ( (This)->lpVtbl -> put_DisableCtrlAltDel(This,pdisableCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings3_get_DisableCtrlAltDel(This,pdisableCtrlAltDel)	\
    ( (This)->lpVtbl -> get_DisableCtrlAltDel(This,pdisableCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings3_put_EnableWindowsKey(This,penableWindowsKey)	\
    ( (This)->lpVtbl -> put_EnableWindowsKey(This,penableWindowsKey) ) 

#define IMsRdpClientAdvancedSettings3_get_EnableWindowsKey(This,penableWindowsKey)	\
    ( (This)->lpVtbl -> get_EnableWindowsKey(This,penableWindowsKey) ) 

#define IMsRdpClientAdvancedSettings3_put_DoubleClickDetect(This,pdoubleClickDetect)	\
    ( (This)->lpVtbl -> put_DoubleClickDetect(This,pdoubleClickDetect) ) 

#define IMsRdpClientAdvancedSettings3_get_DoubleClickDetect(This,pdoubleClickDetect)	\
    ( (This)->lpVtbl -> get_DoubleClickDetect(This,pdoubleClickDetect) ) 

#define IMsRdpClientAdvancedSettings3_put_MaximizeShell(This,pmaximizeShell)	\
    ( (This)->lpVtbl -> put_MaximizeShell(This,pmaximizeShell) ) 

#define IMsRdpClientAdvancedSettings3_get_MaximizeShell(This,pmaximizeShell)	\
    ( (This)->lpVtbl -> get_MaximizeShell(This,pmaximizeShell) ) 

#define IMsRdpClientAdvancedSettings3_put_HotKeyFullScreen(This,photKeyFullScreen)	\
    ( (This)->lpVtbl -> put_HotKeyFullScreen(This,photKeyFullScreen) ) 

#define IMsRdpClientAdvancedSettings3_get_HotKeyFullScreen(This,photKeyFullScreen)	\
    ( (This)->lpVtbl -> get_HotKeyFullScreen(This,photKeyFullScreen) ) 

#define IMsRdpClientAdvancedSettings3_put_HotKeyCtrlEsc(This,photKeyCtrlEsc)	\
    ( (This)->lpVtbl -> put_HotKeyCtrlEsc(This,photKeyCtrlEsc) ) 

#define IMsRdpClientAdvancedSettings3_get_HotKeyCtrlEsc(This,photKeyCtrlEsc)	\
    ( (This)->lpVtbl -> get_HotKeyCtrlEsc(This,photKeyCtrlEsc) ) 

#define IMsRdpClientAdvancedSettings3_put_HotKeyAltEsc(This,photKeyAltEsc)	\
    ( (This)->lpVtbl -> put_HotKeyAltEsc(This,photKeyAltEsc) ) 

#define IMsRdpClientAdvancedSettings3_get_HotKeyAltEsc(This,photKeyAltEsc)	\
    ( (This)->lpVtbl -> get_HotKeyAltEsc(This,photKeyAltEsc) ) 

#define IMsRdpClientAdvancedSettings3_put_HotKeyAltTab(This,photKeyAltTab)	\
    ( (This)->lpVtbl -> put_HotKeyAltTab(This,photKeyAltTab) ) 

#define IMsRdpClientAdvancedSettings3_get_HotKeyAltTab(This,photKeyAltTab)	\
    ( (This)->lpVtbl -> get_HotKeyAltTab(This,photKeyAltTab) ) 

#define IMsRdpClientAdvancedSettings3_put_HotKeyAltShiftTab(This,photKeyAltShiftTab)	\
    ( (This)->lpVtbl -> put_HotKeyAltShiftTab(This,photKeyAltShiftTab) ) 

#define IMsRdpClientAdvancedSettings3_get_HotKeyAltShiftTab(This,photKeyAltShiftTab)	\
    ( (This)->lpVtbl -> get_HotKeyAltShiftTab(This,photKeyAltShiftTab) ) 

#define IMsRdpClientAdvancedSettings3_put_HotKeyAltSpace(This,photKeyAltSpace)	\
    ( (This)->lpVtbl -> put_HotKeyAltSpace(This,photKeyAltSpace) ) 

#define IMsRdpClientAdvancedSettings3_get_HotKeyAltSpace(This,photKeyAltSpace)	\
    ( (This)->lpVtbl -> get_HotKeyAltSpace(This,photKeyAltSpace) ) 

#define IMsRdpClientAdvancedSettings3_put_HotKeyCtrlAltDel(This,photKeyCtrlAltDel)	\
    ( (This)->lpVtbl -> put_HotKeyCtrlAltDel(This,photKeyCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings3_get_HotKeyCtrlAltDel(This,photKeyCtrlAltDel)	\
    ( (This)->lpVtbl -> get_HotKeyCtrlAltDel(This,photKeyCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings3_put_orderDrawThreshold(This,porderDrawThreshold)	\
    ( (This)->lpVtbl -> put_orderDrawThreshold(This,porderDrawThreshold) ) 

#define IMsRdpClientAdvancedSettings3_get_orderDrawThreshold(This,porderDrawThreshold)	\
    ( (This)->lpVtbl -> get_orderDrawThreshold(This,porderDrawThreshold) ) 

#define IMsRdpClientAdvancedSettings3_put_BitmapCacheSize(This,pbitmapCacheSize)	\
    ( (This)->lpVtbl -> put_BitmapCacheSize(This,pbitmapCacheSize) ) 

#define IMsRdpClientAdvancedSettings3_get_BitmapCacheSize(This,pbitmapCacheSize)	\
    ( (This)->lpVtbl -> get_BitmapCacheSize(This,pbitmapCacheSize) ) 

#define IMsRdpClientAdvancedSettings3_put_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize)	\
    ( (This)->lpVtbl -> put_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize) ) 

#define IMsRdpClientAdvancedSettings3_get_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize)	\
    ( (This)->lpVtbl -> get_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize) ) 

#define IMsRdpClientAdvancedSettings3_put_ScaleBitmapCachesByBPP(This,pbScale)	\
    ( (This)->lpVtbl -> put_ScaleBitmapCachesByBPP(This,pbScale) ) 

#define IMsRdpClientAdvancedSettings3_get_ScaleBitmapCachesByBPP(This,pbScale)	\
    ( (This)->lpVtbl -> get_ScaleBitmapCachesByBPP(This,pbScale) ) 

#define IMsRdpClientAdvancedSettings3_put_NumBitmapCaches(This,pnumBitmapCaches)	\
    ( (This)->lpVtbl -> put_NumBitmapCaches(This,pnumBitmapCaches) ) 

#define IMsRdpClientAdvancedSettings3_get_NumBitmapCaches(This,pnumBitmapCaches)	\
    ( (This)->lpVtbl -> get_NumBitmapCaches(This,pnumBitmapCaches) ) 

#define IMsRdpClientAdvancedSettings3_put_CachePersistenceActive(This,pcachePersistenceActive)	\
    ( (This)->lpVtbl -> put_CachePersistenceActive(This,pcachePersistenceActive) ) 

#define IMsRdpClientAdvancedSettings3_get_CachePersistenceActive(This,pcachePersistenceActive)	\
    ( (This)->lpVtbl -> get_CachePersistenceActive(This,pcachePersistenceActive) ) 

#define IMsRdpClientAdvancedSettings3_put_PersistCacheDirectory(This,rhs)	\
    ( (This)->lpVtbl -> put_PersistCacheDirectory(This,rhs) ) 

#define IMsRdpClientAdvancedSettings3_put_brushSupportLevel(This,pbrushSupportLevel)	\
    ( (This)->lpVtbl -> put_brushSupportLevel(This,pbrushSupportLevel) ) 

#define IMsRdpClientAdvancedSettings3_get_brushSupportLevel(This,pbrushSupportLevel)	\
    ( (This)->lpVtbl -> get_brushSupportLevel(This,pbrushSupportLevel) ) 

#define IMsRdpClientAdvancedSettings3_put_minInputSendInterval(This,pminInputSendInterval)	\
    ( (This)->lpVtbl -> put_minInputSendInterval(This,pminInputSendInterval) ) 

#define IMsRdpClientAdvancedSettings3_get_minInputSendInterval(This,pminInputSendInterval)	\
    ( (This)->lpVtbl -> get_minInputSendInterval(This,pminInputSendInterval) ) 

#define IMsRdpClientAdvancedSettings3_put_InputEventsAtOnce(This,pinputEventsAtOnce)	\
    ( (This)->lpVtbl -> put_InputEventsAtOnce(This,pinputEventsAtOnce) ) 

#define IMsRdpClientAdvancedSettings3_get_InputEventsAtOnce(This,pinputEventsAtOnce)	\
    ( (This)->lpVtbl -> get_InputEventsAtOnce(This,pinputEventsAtOnce) ) 

#define IMsRdpClientAdvancedSettings3_put_maxEventCount(This,pmaxEventCount)	\
    ( (This)->lpVtbl -> put_maxEventCount(This,pmaxEventCount) ) 

#define IMsRdpClientAdvancedSettings3_get_maxEventCount(This,pmaxEventCount)	\
    ( (This)->lpVtbl -> get_maxEventCount(This,pmaxEventCount) ) 

#define IMsRdpClientAdvancedSettings3_put_keepAliveInterval(This,pkeepAliveInterval)	\
    ( (This)->lpVtbl -> put_keepAliveInterval(This,pkeepAliveInterval) ) 

#define IMsRdpClientAdvancedSettings3_get_keepAliveInterval(This,pkeepAliveInterval)	\
    ( (This)->lpVtbl -> get_keepAliveInterval(This,pkeepAliveInterval) ) 

#define IMsRdpClientAdvancedSettings3_put_shutdownTimeout(This,pshutdownTimeout)	\
    ( (This)->lpVtbl -> put_shutdownTimeout(This,pshutdownTimeout) ) 

#define IMsRdpClientAdvancedSettings3_get_shutdownTimeout(This,pshutdownTimeout)	\
    ( (This)->lpVtbl -> get_shutdownTimeout(This,pshutdownTimeout) ) 

#define IMsRdpClientAdvancedSettings3_put_overallConnectionTimeout(This,poverallConnectionTimeout)	\
    ( (This)->lpVtbl -> put_overallConnectionTimeout(This,poverallConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings3_get_overallConnectionTimeout(This,poverallConnectionTimeout)	\
    ( (This)->lpVtbl -> get_overallConnectionTimeout(This,poverallConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings3_put_singleConnectionTimeout(This,psingleConnectionTimeout)	\
    ( (This)->lpVtbl -> put_singleConnectionTimeout(This,psingleConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings3_get_singleConnectionTimeout(This,psingleConnectionTimeout)	\
    ( (This)->lpVtbl -> get_singleConnectionTimeout(This,psingleConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings3_put_KeyboardType(This,pkeyboardType)	\
    ( (This)->lpVtbl -> put_KeyboardType(This,pkeyboardType) ) 

#define IMsRdpClientAdvancedSettings3_get_KeyboardType(This,pkeyboardType)	\
    ( (This)->lpVtbl -> get_KeyboardType(This,pkeyboardType) ) 

#define IMsRdpClientAdvancedSettings3_put_KeyboardSubType(This,pkeyboardSubType)	\
    ( (This)->lpVtbl -> put_KeyboardSubType(This,pkeyboardSubType) ) 

#define IMsRdpClientAdvancedSettings3_get_KeyboardSubType(This,pkeyboardSubType)	\
    ( (This)->lpVtbl -> get_KeyboardSubType(This,pkeyboardSubType) ) 

#define IMsRdpClientAdvancedSettings3_put_KeyboardFunctionKey(This,pkeyboardFunctionKey)	\
    ( (This)->lpVtbl -> put_KeyboardFunctionKey(This,pkeyboardFunctionKey) ) 

#define IMsRdpClientAdvancedSettings3_get_KeyboardFunctionKey(This,pkeyboardFunctionKey)	\
    ( (This)->lpVtbl -> get_KeyboardFunctionKey(This,pkeyboardFunctionKey) ) 

#define IMsRdpClientAdvancedSettings3_put_WinceFixedPalette(This,pwinceFixedPalette)	\
    ( (This)->lpVtbl -> put_WinceFixedPalette(This,pwinceFixedPalette) ) 

#define IMsRdpClientAdvancedSettings3_get_WinceFixedPalette(This,pwinceFixedPalette)	\
    ( (This)->lpVtbl -> get_WinceFixedPalette(This,pwinceFixedPalette) ) 

#define IMsRdpClientAdvancedSettings3_put_ConnectToServerConsole(This,pConnectToConsole)	\
    ( (This)->lpVtbl -> put_ConnectToServerConsole(This,pConnectToConsole) ) 

#define IMsRdpClientAdvancedSettings3_get_ConnectToServerConsole(This,pConnectToConsole)	\
    ( (This)->lpVtbl -> get_ConnectToServerConsole(This,pConnectToConsole) ) 

#define IMsRdpClientAdvancedSettings3_put_BitmapPersistence(This,pbitmapPersistence)	\
    ( (This)->lpVtbl -> put_BitmapPersistence(This,pbitmapPersistence) ) 

#define IMsRdpClientAdvancedSettings3_get_BitmapPersistence(This,pbitmapPersistence)	\
    ( (This)->lpVtbl -> get_BitmapPersistence(This,pbitmapPersistence) ) 

#define IMsRdpClientAdvancedSettings3_put_MinutesToIdleTimeout(This,pminutesToIdleTimeout)	\
    ( (This)->lpVtbl -> put_MinutesToIdleTimeout(This,pminutesToIdleTimeout) ) 

#define IMsRdpClientAdvancedSettings3_get_MinutesToIdleTimeout(This,pminutesToIdleTimeout)	\
    ( (This)->lpVtbl -> get_MinutesToIdleTimeout(This,pminutesToIdleTimeout) ) 

#define IMsRdpClientAdvancedSettings3_put_SmartSizing(This,pfSmartSizing)	\
    ( (This)->lpVtbl -> put_SmartSizing(This,pfSmartSizing) ) 

#define IMsRdpClientAdvancedSettings3_get_SmartSizing(This,pfSmartSizing)	\
    ( (This)->lpVtbl -> get_SmartSizing(This,pfSmartSizing) ) 

#define IMsRdpClientAdvancedSettings3_put_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName)	\
    ( (This)->lpVtbl -> put_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName) ) 

#define IMsRdpClientAdvancedSettings3_get_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName)	\
    ( (This)->lpVtbl -> get_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName) ) 

#define IMsRdpClientAdvancedSettings3_put_RdpdrClipCleanTempDirString(This,clipCleanTempDirString)	\
    ( (This)->lpVtbl -> put_RdpdrClipCleanTempDirString(This,clipCleanTempDirString) ) 

#define IMsRdpClientAdvancedSettings3_get_RdpdrClipCleanTempDirString(This,clipCleanTempDirString)	\
    ( (This)->lpVtbl -> get_RdpdrClipCleanTempDirString(This,clipCleanTempDirString) ) 

#define IMsRdpClientAdvancedSettings3_put_RdpdrClipPasteInfoString(This,clipPasteInfoString)	\
    ( (This)->lpVtbl -> put_RdpdrClipPasteInfoString(This,clipPasteInfoString) ) 

#define IMsRdpClientAdvancedSettings3_get_RdpdrClipPasteInfoString(This,clipPasteInfoString)	\
    ( (This)->lpVtbl -> get_RdpdrClipPasteInfoString(This,clipPasteInfoString) ) 

#define IMsRdpClientAdvancedSettings3_put_ClearTextPassword(This,rhs)	\
    ( (This)->lpVtbl -> put_ClearTextPassword(This,rhs) ) 

#define IMsRdpClientAdvancedSettings3_put_DisplayConnectionBar(This,pDisplayConnectionBar)	\
    ( (This)->lpVtbl -> put_DisplayConnectionBar(This,pDisplayConnectionBar) ) 

#define IMsRdpClientAdvancedSettings3_get_DisplayConnectionBar(This,pDisplayConnectionBar)	\
    ( (This)->lpVtbl -> get_DisplayConnectionBar(This,pDisplayConnectionBar) ) 

#define IMsRdpClientAdvancedSettings3_put_PinConnectionBar(This,pPinConnectionBar)	\
    ( (This)->lpVtbl -> put_PinConnectionBar(This,pPinConnectionBar) ) 

#define IMsRdpClientAdvancedSettings3_get_PinConnectionBar(This,pPinConnectionBar)	\
    ( (This)->lpVtbl -> get_PinConnectionBar(This,pPinConnectionBar) ) 

#define IMsRdpClientAdvancedSettings3_put_GrabFocusOnConnect(This,pfGrabFocusOnConnect)	\
    ( (This)->lpVtbl -> put_GrabFocusOnConnect(This,pfGrabFocusOnConnect) ) 

#define IMsRdpClientAdvancedSettings3_get_GrabFocusOnConnect(This,pfGrabFocusOnConnect)	\
    ( (This)->lpVtbl -> get_GrabFocusOnConnect(This,pfGrabFocusOnConnect) ) 

#define IMsRdpClientAdvancedSettings3_put_LoadBalanceInfo(This,pLBInfo)	\
    ( (This)->lpVtbl -> put_LoadBalanceInfo(This,pLBInfo) ) 

#define IMsRdpClientAdvancedSettings3_get_LoadBalanceInfo(This,pLBInfo)	\
    ( (This)->lpVtbl -> get_LoadBalanceInfo(This,pLBInfo) ) 

#define IMsRdpClientAdvancedSettings3_put_RedirectDrives(This,pRedirectDrives)	\
    ( (This)->lpVtbl -> put_RedirectDrives(This,pRedirectDrives) ) 

#define IMsRdpClientAdvancedSettings3_get_RedirectDrives(This,pRedirectDrives)	\
    ( (This)->lpVtbl -> get_RedirectDrives(This,pRedirectDrives) ) 

#define IMsRdpClientAdvancedSettings3_put_RedirectPrinters(This,pRedirectPrinters)	\
    ( (This)->lpVtbl -> put_RedirectPrinters(This,pRedirectPrinters) ) 

#define IMsRdpClientAdvancedSettings3_get_RedirectPrinters(This,pRedirectPrinters)	\
    ( (This)->lpVtbl -> get_RedirectPrinters(This,pRedirectPrinters) ) 

#define IMsRdpClientAdvancedSettings3_put_RedirectPorts(This,pRedirectPorts)	\
    ( (This)->lpVtbl -> put_RedirectPorts(This,pRedirectPorts) ) 

#define IMsRdpClientAdvancedSettings3_get_RedirectPorts(This,pRedirectPorts)	\
    ( (This)->lpVtbl -> get_RedirectPorts(This,pRedirectPorts) ) 

#define IMsRdpClientAdvancedSettings3_put_RedirectSmartCards(This,pRedirectSmartCards)	\
    ( (This)->lpVtbl -> put_RedirectSmartCards(This,pRedirectSmartCards) ) 

#define IMsRdpClientAdvancedSettings3_get_RedirectSmartCards(This,pRedirectSmartCards)	\
    ( (This)->lpVtbl -> get_RedirectSmartCards(This,pRedirectSmartCards) ) 

#define IMsRdpClientAdvancedSettings3_put_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize)	\
    ( (This)->lpVtbl -> put_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize) ) 

#define IMsRdpClientAdvancedSettings3_get_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize)	\
    ( (This)->lpVtbl -> get_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize) ) 

#define IMsRdpClientAdvancedSettings3_put_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize)	\
    ( (This)->lpVtbl -> put_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize) ) 

#define IMsRdpClientAdvancedSettings3_get_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize)	\
    ( (This)->lpVtbl -> get_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize) ) 

#define IMsRdpClientAdvancedSettings3_put_PerformanceFlags(This,pDisableList)	\
    ( (This)->lpVtbl -> put_PerformanceFlags(This,pDisableList) ) 

#define IMsRdpClientAdvancedSettings3_get_PerformanceFlags(This,pDisableList)	\
    ( (This)->lpVtbl -> get_PerformanceFlags(This,pDisableList) ) 

#define IMsRdpClientAdvancedSettings3_put_ConnectWithEndpoint(This,rhs)	\
    ( (This)->lpVtbl -> put_ConnectWithEndpoint(This,rhs) ) 

#define IMsRdpClientAdvancedSettings3_put_NotifyTSPublicKey(This,pfNotify)	\
    ( (This)->lpVtbl -> put_NotifyTSPublicKey(This,pfNotify) ) 

#define IMsRdpClientAdvancedSettings3_get_NotifyTSPublicKey(This,pfNotify)	\
    ( (This)->lpVtbl -> get_NotifyTSPublicKey(This,pfNotify) ) 


#define IMsRdpClientAdvancedSettings3_get_CanAutoReconnect(This,pfCanAutoReconnect)	\
    ( (This)->lpVtbl -> get_CanAutoReconnect(This,pfCanAutoReconnect) ) 

#define IMsRdpClientAdvancedSettings3_put_EnableAutoReconnect(This,pfEnableAutoReconnect)	\
    ( (This)->lpVtbl -> put_EnableAutoReconnect(This,pfEnableAutoReconnect) ) 

#define IMsRdpClientAdvancedSettings3_get_EnableAutoReconnect(This,pfEnableAutoReconnect)	\
    ( (This)->lpVtbl -> get_EnableAutoReconnect(This,pfEnableAutoReconnect) ) 

#define IMsRdpClientAdvancedSettings3_put_MaxReconnectAttempts(This,pMaxReconnectAttempts)	\
    ( (This)->lpVtbl -> put_MaxReconnectAttempts(This,pMaxReconnectAttempts) ) 

#define IMsRdpClientAdvancedSettings3_get_MaxReconnectAttempts(This,pMaxReconnectAttempts)	\
    ( (This)->lpVtbl -> get_MaxReconnectAttempts(This,pMaxReconnectAttempts) ) 


#define IMsRdpClientAdvancedSettings3_put_ConnectionBarShowMinimizeButton(This,pfShowMinimize)	\
    ( (This)->lpVtbl -> put_ConnectionBarShowMinimizeButton(This,pfShowMinimize) ) 

#define IMsRdpClientAdvancedSettings3_get_ConnectionBarShowMinimizeButton(This,pfShowMinimize)	\
    ( (This)->lpVtbl -> get_ConnectionBarShowMinimizeButton(This,pfShowMinimize) ) 

#define IMsRdpClientAdvancedSettings3_put_ConnectionBarShowRestoreButton(This,pfShowRestore)	\
    ( (This)->lpVtbl -> put_ConnectionBarShowRestoreButton(This,pfShowRestore) ) 

#define IMsRdpClientAdvancedSettings3_get_ConnectionBarShowRestoreButton(This,pfShowRestore)	\
    ( (This)->lpVtbl -> get_ConnectionBarShowRestoreButton(This,pfShowRestore) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propput][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings3_put_ConnectionBarShowMinimizeButton_Proxy( 
    IMsRdpClientAdvancedSettings3 * This,
    /* [in] */ VARIANT_BOOL pfShowMinimize);


void __RPC_STUB IMsRdpClientAdvancedSettings3_put_ConnectionBarShowMinimizeButton_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings3_get_ConnectionBarShowMinimizeButton_Proxy( 
    IMsRdpClientAdvancedSettings3 * This,
    /* [retval][out] */ VARIANT_BOOL *pfShowMinimize);


void __RPC_STUB IMsRdpClientAdvancedSettings3_get_ConnectionBarShowMinimizeButton_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings3_put_ConnectionBarShowRestoreButton_Proxy( 
    IMsRdpClientAdvancedSettings3 * This,
    /* [in] */ VARIANT_BOOL pfShowRestore);


void __RPC_STUB IMsRdpClientAdvancedSettings3_put_ConnectionBarShowRestoreButton_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings3_get_ConnectionBarShowRestoreButton_Proxy( 
    IMsRdpClientAdvancedSettings3 * This,
    /* [retval][out] */ VARIANT_BOOL *pfShowRestore);


void __RPC_STUB IMsRdpClientAdvancedSettings3_get_ConnectionBarShowRestoreButton_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMsRdpClientAdvancedSettings3_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClientAdvancedSettings4_INTERFACE_DEFINED__
#define __IMsRdpClientAdvancedSettings4_INTERFACE_DEFINED__

/* interface IMsRdpClientAdvancedSettings4 */
/* [oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClientAdvancedSettings4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FBA7F64E-7345-4405-AE50-FA4A763DC0DE")
    IMsRdpClientAdvancedSettings4 : public IMsRdpClientAdvancedSettings3
    {
    public:
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_AuthenticationLevel( 
            /* [in] */ unsigned int puiAuthLevel) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_AuthenticationLevel( 
            /* [retval][out] */ unsigned int *puiAuthLevel) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMsRdpClientAdvancedSettings4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClientAdvancedSettings4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClientAdvancedSettings4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Compress )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long pcompress);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Compress )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *pcompress);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapPeristence )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long pbitmapPeristence);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapPeristence )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *pbitmapPeristence);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_allowBackgroundInput )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long pallowBackgroundInput);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_allowBackgroundInput )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *pallowBackgroundInput);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyBoardLayoutStr )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PluginDlls )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IconFile )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IconIndex )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ContainerHandledFullScreen )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long pContainerHandledFullScreen);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ContainerHandledFullScreen )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *pContainerHandledFullScreen);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisableRdpdr )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long pDisableRdpdr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisableRdpdr )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *pDisableRdpdr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SmoothScroll )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long psmoothScroll);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SmoothScroll )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *psmoothScroll);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AcceleratorPassthrough )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long pacceleratorPassthrough);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AcceleratorPassthrough )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *pacceleratorPassthrough);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ShadowBitmap )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long pshadowBitmap);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ShadowBitmap )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *pshadowBitmap);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TransportType )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long ptransportType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TransportType )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *ptransportType);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SasSequence )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long psasSequence);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SasSequence )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *psasSequence);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EncryptionEnabled )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long pencryptionEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EncryptionEnabled )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *pencryptionEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DedicatedTerminal )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long pdedicatedTerminal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DedicatedTerminal )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *pdedicatedTerminal);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RDPPort )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long prdpPort);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RDPPort )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *prdpPort);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EnableMouse )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long penableMouse);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EnableMouse )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *penableMouse);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisableCtrlAltDel )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long pdisableCtrlAltDel);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisableCtrlAltDel )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *pdisableCtrlAltDel);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EnableWindowsKey )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long penableWindowsKey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EnableWindowsKey )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *penableWindowsKey);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DoubleClickDetect )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long pdoubleClickDetect);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DoubleClickDetect )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *pdoubleClickDetect);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MaximizeShell )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long pmaximizeShell);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MaximizeShell )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *pmaximizeShell);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyFullScreen )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long photKeyFullScreen);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyFullScreen )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *photKeyFullScreen);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyCtrlEsc )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long photKeyCtrlEsc);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyCtrlEsc )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *photKeyCtrlEsc);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltEsc )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long photKeyAltEsc);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltEsc )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *photKeyAltEsc);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltTab )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long photKeyAltTab);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltTab )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *photKeyAltTab);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltShiftTab )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long photKeyAltShiftTab);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltShiftTab )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *photKeyAltShiftTab);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltSpace )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long photKeyAltSpace);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltSpace )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *photKeyAltSpace);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyCtrlAltDel )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long photKeyCtrlAltDel);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyCtrlAltDel )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *photKeyCtrlAltDel);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_orderDrawThreshold )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long porderDrawThreshold);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_orderDrawThreshold )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *porderDrawThreshold);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapCacheSize )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long pbitmapCacheSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapCacheSize )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *pbitmapCacheSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCacheSize )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long pbitmapVirtualCacheSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCacheSize )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *pbitmapVirtualCacheSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScaleBitmapCachesByBPP )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long pbScale);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScaleBitmapCachesByBPP )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *pbScale);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_NumBitmapCaches )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long pnumBitmapCaches);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NumBitmapCaches )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *pnumBitmapCaches);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_CachePersistenceActive )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long pcachePersistenceActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CachePersistenceActive )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *pcachePersistenceActive);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PersistCacheDirectory )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_brushSupportLevel )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long pbrushSupportLevel);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_brushSupportLevel )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *pbrushSupportLevel);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_minInputSendInterval )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long pminInputSendInterval);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_minInputSendInterval )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *pminInputSendInterval);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_InputEventsAtOnce )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long pinputEventsAtOnce);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InputEventsAtOnce )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *pinputEventsAtOnce);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_maxEventCount )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long pmaxEventCount);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_maxEventCount )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *pmaxEventCount);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_keepAliveInterval )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long pkeepAliveInterval);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_keepAliveInterval )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *pkeepAliveInterval);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_shutdownTimeout )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long pshutdownTimeout);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_shutdownTimeout )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *pshutdownTimeout);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_overallConnectionTimeout )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long poverallConnectionTimeout);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_overallConnectionTimeout )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *poverallConnectionTimeout);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_singleConnectionTimeout )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long psingleConnectionTimeout);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_singleConnectionTimeout )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *psingleConnectionTimeout);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardType )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long pkeyboardType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardType )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *pkeyboardType);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardSubType )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long pkeyboardSubType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardSubType )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *pkeyboardSubType);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardFunctionKey )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long pkeyboardFunctionKey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardFunctionKey )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *pkeyboardFunctionKey);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_WinceFixedPalette )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long pwinceFixedPalette);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_WinceFixedPalette )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *pwinceFixedPalette);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectToServerConsole )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ VARIANT_BOOL pConnectToConsole);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectToServerConsole )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ VARIANT_BOOL *pConnectToConsole);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapPersistence )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long pbitmapPersistence);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapPersistence )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *pbitmapPersistence);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MinutesToIdleTimeout )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long pminutesToIdleTimeout);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MinutesToIdleTimeout )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *pminutesToIdleTimeout);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SmartSizing )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ VARIANT_BOOL pfSmartSizing);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SmartSizing )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfSmartSizing);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrLocalPrintingDocName )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ BSTR pLocalPrintingDocName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrLocalPrintingDocName )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ BSTR *pLocalPrintingDocName);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrClipCleanTempDirString )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ BSTR clipCleanTempDirString);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrClipCleanTempDirString )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ BSTR *clipCleanTempDirString);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrClipPasteInfoString )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ BSTR clipPasteInfoString);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrClipPasteInfoString )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ BSTR *clipPasteInfoString);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ClearTextPassword )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayConnectionBar )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ VARIANT_BOOL pDisplayConnectionBar);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayConnectionBar )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ VARIANT_BOOL *pDisplayConnectionBar);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PinConnectionBar )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ VARIANT_BOOL pPinConnectionBar);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PinConnectionBar )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ VARIANT_BOOL *pPinConnectionBar);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GrabFocusOnConnect )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ VARIANT_BOOL pfGrabFocusOnConnect);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GrabFocusOnConnect )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfGrabFocusOnConnect);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_LoadBalanceInfo )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ BSTR pLBInfo);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LoadBalanceInfo )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ BSTR *pLBInfo);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectDrives )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ VARIANT_BOOL pRedirectDrives);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectDrives )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectDrives);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectPrinters )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ VARIANT_BOOL pRedirectPrinters);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectPrinters )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectPrinters);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectPorts )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ VARIANT_BOOL pRedirectPorts);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectPorts )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectPorts);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectSmartCards )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ VARIANT_BOOL pRedirectSmartCards);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectSmartCards )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectSmartCards);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCache16BppSize )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long pBitmapVirtualCache16BppSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCache16BppSize )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *pBitmapVirtualCache16BppSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCache24BppSize )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long pBitmapVirtualCache24BppSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCache24BppSize )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *pBitmapVirtualCache24BppSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PerformanceFlags )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long pDisableList);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PerformanceFlags )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *pDisableList);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectWithEndpoint )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ VARIANT *rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_NotifyTSPublicKey )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ VARIANT_BOOL pfNotify);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NotifyTSPublicKey )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfNotify);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CanAutoReconnect )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfCanAutoReconnect);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EnableAutoReconnect )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ VARIANT_BOOL pfEnableAutoReconnect);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EnableAutoReconnect )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfEnableAutoReconnect);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MaxReconnectAttempts )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ long pMaxReconnectAttempts);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MaxReconnectAttempts )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ long *pMaxReconnectAttempts);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionBarShowMinimizeButton )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ VARIANT_BOOL pfShowMinimize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionBarShowMinimizeButton )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfShowMinimize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionBarShowRestoreButton )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ VARIANT_BOOL pfShowRestore);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionBarShowRestoreButton )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfShowRestore);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AuthenticationLevel )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ unsigned int puiAuthLevel);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AuthenticationLevel )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ unsigned int *puiAuthLevel);
        
        END_INTERFACE
    } IMsRdpClientAdvancedSettings4Vtbl;

    interface IMsRdpClientAdvancedSettings4
    {
        CONST_VTBL struct IMsRdpClientAdvancedSettings4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClientAdvancedSettings4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClientAdvancedSettings4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClientAdvancedSettings4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClientAdvancedSettings4_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClientAdvancedSettings4_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClientAdvancedSettings4_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClientAdvancedSettings4_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMsRdpClientAdvancedSettings4_put_Compress(This,pcompress)	\
    ( (This)->lpVtbl -> put_Compress(This,pcompress) ) 

#define IMsRdpClientAdvancedSettings4_get_Compress(This,pcompress)	\
    ( (This)->lpVtbl -> get_Compress(This,pcompress) ) 

#define IMsRdpClientAdvancedSettings4_put_BitmapPeristence(This,pbitmapPeristence)	\
    ( (This)->lpVtbl -> put_BitmapPeristence(This,pbitmapPeristence) ) 

#define IMsRdpClientAdvancedSettings4_get_BitmapPeristence(This,pbitmapPeristence)	\
    ( (This)->lpVtbl -> get_BitmapPeristence(This,pbitmapPeristence) ) 

#define IMsRdpClientAdvancedSettings4_put_allowBackgroundInput(This,pallowBackgroundInput)	\
    ( (This)->lpVtbl -> put_allowBackgroundInput(This,pallowBackgroundInput) ) 

#define IMsRdpClientAdvancedSettings4_get_allowBackgroundInput(This,pallowBackgroundInput)	\
    ( (This)->lpVtbl -> get_allowBackgroundInput(This,pallowBackgroundInput) ) 

#define IMsRdpClientAdvancedSettings4_put_KeyBoardLayoutStr(This,rhs)	\
    ( (This)->lpVtbl -> put_KeyBoardLayoutStr(This,rhs) ) 

#define IMsRdpClientAdvancedSettings4_put_PluginDlls(This,rhs)	\
    ( (This)->lpVtbl -> put_PluginDlls(This,rhs) ) 

#define IMsRdpClientAdvancedSettings4_put_IconFile(This,rhs)	\
    ( (This)->lpVtbl -> put_IconFile(This,rhs) ) 

#define IMsRdpClientAdvancedSettings4_put_IconIndex(This,rhs)	\
    ( (This)->lpVtbl -> put_IconIndex(This,rhs) ) 

#define IMsRdpClientAdvancedSettings4_put_ContainerHandledFullScreen(This,pContainerHandledFullScreen)	\
    ( (This)->lpVtbl -> put_ContainerHandledFullScreen(This,pContainerHandledFullScreen) ) 

#define IMsRdpClientAdvancedSettings4_get_ContainerHandledFullScreen(This,pContainerHandledFullScreen)	\
    ( (This)->lpVtbl -> get_ContainerHandledFullScreen(This,pContainerHandledFullScreen) ) 

#define IMsRdpClientAdvancedSettings4_put_DisableRdpdr(This,pDisableRdpdr)	\
    ( (This)->lpVtbl -> put_DisableRdpdr(This,pDisableRdpdr) ) 

#define IMsRdpClientAdvancedSettings4_get_DisableRdpdr(This,pDisableRdpdr)	\
    ( (This)->lpVtbl -> get_DisableRdpdr(This,pDisableRdpdr) ) 


#define IMsRdpClientAdvancedSettings4_put_SmoothScroll(This,psmoothScroll)	\
    ( (This)->lpVtbl -> put_SmoothScroll(This,psmoothScroll) ) 

#define IMsRdpClientAdvancedSettings4_get_SmoothScroll(This,psmoothScroll)	\
    ( (This)->lpVtbl -> get_SmoothScroll(This,psmoothScroll) ) 

#define IMsRdpClientAdvancedSettings4_put_AcceleratorPassthrough(This,pacceleratorPassthrough)	\
    ( (This)->lpVtbl -> put_AcceleratorPassthrough(This,pacceleratorPassthrough) ) 

#define IMsRdpClientAdvancedSettings4_get_AcceleratorPassthrough(This,pacceleratorPassthrough)	\
    ( (This)->lpVtbl -> get_AcceleratorPassthrough(This,pacceleratorPassthrough) ) 

#define IMsRdpClientAdvancedSettings4_put_ShadowBitmap(This,pshadowBitmap)	\
    ( (This)->lpVtbl -> put_ShadowBitmap(This,pshadowBitmap) ) 

#define IMsRdpClientAdvancedSettings4_get_ShadowBitmap(This,pshadowBitmap)	\
    ( (This)->lpVtbl -> get_ShadowBitmap(This,pshadowBitmap) ) 

#define IMsRdpClientAdvancedSettings4_put_TransportType(This,ptransportType)	\
    ( (This)->lpVtbl -> put_TransportType(This,ptransportType) ) 

#define IMsRdpClientAdvancedSettings4_get_TransportType(This,ptransportType)	\
    ( (This)->lpVtbl -> get_TransportType(This,ptransportType) ) 

#define IMsRdpClientAdvancedSettings4_put_SasSequence(This,psasSequence)	\
    ( (This)->lpVtbl -> put_SasSequence(This,psasSequence) ) 

#define IMsRdpClientAdvancedSettings4_get_SasSequence(This,psasSequence)	\
    ( (This)->lpVtbl -> get_SasSequence(This,psasSequence) ) 

#define IMsRdpClientAdvancedSettings4_put_EncryptionEnabled(This,pencryptionEnabled)	\
    ( (This)->lpVtbl -> put_EncryptionEnabled(This,pencryptionEnabled) ) 

#define IMsRdpClientAdvancedSettings4_get_EncryptionEnabled(This,pencryptionEnabled)	\
    ( (This)->lpVtbl -> get_EncryptionEnabled(This,pencryptionEnabled) ) 

#define IMsRdpClientAdvancedSettings4_put_DedicatedTerminal(This,pdedicatedTerminal)	\
    ( (This)->lpVtbl -> put_DedicatedTerminal(This,pdedicatedTerminal) ) 

#define IMsRdpClientAdvancedSettings4_get_DedicatedTerminal(This,pdedicatedTerminal)	\
    ( (This)->lpVtbl -> get_DedicatedTerminal(This,pdedicatedTerminal) ) 

#define IMsRdpClientAdvancedSettings4_put_RDPPort(This,prdpPort)	\
    ( (This)->lpVtbl -> put_RDPPort(This,prdpPort) ) 

#define IMsRdpClientAdvancedSettings4_get_RDPPort(This,prdpPort)	\
    ( (This)->lpVtbl -> get_RDPPort(This,prdpPort) ) 

#define IMsRdpClientAdvancedSettings4_put_EnableMouse(This,penableMouse)	\
    ( (This)->lpVtbl -> put_EnableMouse(This,penableMouse) ) 

#define IMsRdpClientAdvancedSettings4_get_EnableMouse(This,penableMouse)	\
    ( (This)->lpVtbl -> get_EnableMouse(This,penableMouse) ) 

#define IMsRdpClientAdvancedSettings4_put_DisableCtrlAltDel(This,pdisableCtrlAltDel)	\
    ( (This)->lpVtbl -> put_DisableCtrlAltDel(This,pdisableCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings4_get_DisableCtrlAltDel(This,pdisableCtrlAltDel)	\
    ( (This)->lpVtbl -> get_DisableCtrlAltDel(This,pdisableCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings4_put_EnableWindowsKey(This,penableWindowsKey)	\
    ( (This)->lpVtbl -> put_EnableWindowsKey(This,penableWindowsKey) ) 

#define IMsRdpClientAdvancedSettings4_get_EnableWindowsKey(This,penableWindowsKey)	\
    ( (This)->lpVtbl -> get_EnableWindowsKey(This,penableWindowsKey) ) 

#define IMsRdpClientAdvancedSettings4_put_DoubleClickDetect(This,pdoubleClickDetect)	\
    ( (This)->lpVtbl -> put_DoubleClickDetect(This,pdoubleClickDetect) ) 

#define IMsRdpClientAdvancedSettings4_get_DoubleClickDetect(This,pdoubleClickDetect)	\
    ( (This)->lpVtbl -> get_DoubleClickDetect(This,pdoubleClickDetect) ) 

#define IMsRdpClientAdvancedSettings4_put_MaximizeShell(This,pmaximizeShell)	\
    ( (This)->lpVtbl -> put_MaximizeShell(This,pmaximizeShell) ) 

#define IMsRdpClientAdvancedSettings4_get_MaximizeShell(This,pmaximizeShell)	\
    ( (This)->lpVtbl -> get_MaximizeShell(This,pmaximizeShell) ) 

#define IMsRdpClientAdvancedSettings4_put_HotKeyFullScreen(This,photKeyFullScreen)	\
    ( (This)->lpVtbl -> put_HotKeyFullScreen(This,photKeyFullScreen) ) 

#define IMsRdpClientAdvancedSettings4_get_HotKeyFullScreen(This,photKeyFullScreen)	\
    ( (This)->lpVtbl -> get_HotKeyFullScreen(This,photKeyFullScreen) ) 

#define IMsRdpClientAdvancedSettings4_put_HotKeyCtrlEsc(This,photKeyCtrlEsc)	\
    ( (This)->lpVtbl -> put_HotKeyCtrlEsc(This,photKeyCtrlEsc) ) 

#define IMsRdpClientAdvancedSettings4_get_HotKeyCtrlEsc(This,photKeyCtrlEsc)	\
    ( (This)->lpVtbl -> get_HotKeyCtrlEsc(This,photKeyCtrlEsc) ) 

#define IMsRdpClientAdvancedSettings4_put_HotKeyAltEsc(This,photKeyAltEsc)	\
    ( (This)->lpVtbl -> put_HotKeyAltEsc(This,photKeyAltEsc) ) 

#define IMsRdpClientAdvancedSettings4_get_HotKeyAltEsc(This,photKeyAltEsc)	\
    ( (This)->lpVtbl -> get_HotKeyAltEsc(This,photKeyAltEsc) ) 

#define IMsRdpClientAdvancedSettings4_put_HotKeyAltTab(This,photKeyAltTab)	\
    ( (This)->lpVtbl -> put_HotKeyAltTab(This,photKeyAltTab) ) 

#define IMsRdpClientAdvancedSettings4_get_HotKeyAltTab(This,photKeyAltTab)	\
    ( (This)->lpVtbl -> get_HotKeyAltTab(This,photKeyAltTab) ) 

#define IMsRdpClientAdvancedSettings4_put_HotKeyAltShiftTab(This,photKeyAltShiftTab)	\
    ( (This)->lpVtbl -> put_HotKeyAltShiftTab(This,photKeyAltShiftTab) ) 

#define IMsRdpClientAdvancedSettings4_get_HotKeyAltShiftTab(This,photKeyAltShiftTab)	\
    ( (This)->lpVtbl -> get_HotKeyAltShiftTab(This,photKeyAltShiftTab) ) 

#define IMsRdpClientAdvancedSettings4_put_HotKeyAltSpace(This,photKeyAltSpace)	\
    ( (This)->lpVtbl -> put_HotKeyAltSpace(This,photKeyAltSpace) ) 

#define IMsRdpClientAdvancedSettings4_get_HotKeyAltSpace(This,photKeyAltSpace)	\
    ( (This)->lpVtbl -> get_HotKeyAltSpace(This,photKeyAltSpace) ) 

#define IMsRdpClientAdvancedSettings4_put_HotKeyCtrlAltDel(This,photKeyCtrlAltDel)	\
    ( (This)->lpVtbl -> put_HotKeyCtrlAltDel(This,photKeyCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings4_get_HotKeyCtrlAltDel(This,photKeyCtrlAltDel)	\
    ( (This)->lpVtbl -> get_HotKeyCtrlAltDel(This,photKeyCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings4_put_orderDrawThreshold(This,porderDrawThreshold)	\
    ( (This)->lpVtbl -> put_orderDrawThreshold(This,porderDrawThreshold) ) 

#define IMsRdpClientAdvancedSettings4_get_orderDrawThreshold(This,porderDrawThreshold)	\
    ( (This)->lpVtbl -> get_orderDrawThreshold(This,porderDrawThreshold) ) 

#define IMsRdpClientAdvancedSettings4_put_BitmapCacheSize(This,pbitmapCacheSize)	\
    ( (This)->lpVtbl -> put_BitmapCacheSize(This,pbitmapCacheSize) ) 

#define IMsRdpClientAdvancedSettings4_get_BitmapCacheSize(This,pbitmapCacheSize)	\
    ( (This)->lpVtbl -> get_BitmapCacheSize(This,pbitmapCacheSize) ) 

#define IMsRdpClientAdvancedSettings4_put_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize)	\
    ( (This)->lpVtbl -> put_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize) ) 

#define IMsRdpClientAdvancedSettings4_get_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize)	\
    ( (This)->lpVtbl -> get_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize) ) 

#define IMsRdpClientAdvancedSettings4_put_ScaleBitmapCachesByBPP(This,pbScale)	\
    ( (This)->lpVtbl -> put_ScaleBitmapCachesByBPP(This,pbScale) ) 

#define IMsRdpClientAdvancedSettings4_get_ScaleBitmapCachesByBPP(This,pbScale)	\
    ( (This)->lpVtbl -> get_ScaleBitmapCachesByBPP(This,pbScale) ) 

#define IMsRdpClientAdvancedSettings4_put_NumBitmapCaches(This,pnumBitmapCaches)	\
    ( (This)->lpVtbl -> put_NumBitmapCaches(This,pnumBitmapCaches) ) 

#define IMsRdpClientAdvancedSettings4_get_NumBitmapCaches(This,pnumBitmapCaches)	\
    ( (This)->lpVtbl -> get_NumBitmapCaches(This,pnumBitmapCaches) ) 

#define IMsRdpClientAdvancedSettings4_put_CachePersistenceActive(This,pcachePersistenceActive)	\
    ( (This)->lpVtbl -> put_CachePersistenceActive(This,pcachePersistenceActive) ) 

#define IMsRdpClientAdvancedSettings4_get_CachePersistenceActive(This,pcachePersistenceActive)	\
    ( (This)->lpVtbl -> get_CachePersistenceActive(This,pcachePersistenceActive) ) 

#define IMsRdpClientAdvancedSettings4_put_PersistCacheDirectory(This,rhs)	\
    ( (This)->lpVtbl -> put_PersistCacheDirectory(This,rhs) ) 

#define IMsRdpClientAdvancedSettings4_put_brushSupportLevel(This,pbrushSupportLevel)	\
    ( (This)->lpVtbl -> put_brushSupportLevel(This,pbrushSupportLevel) ) 

#define IMsRdpClientAdvancedSettings4_get_brushSupportLevel(This,pbrushSupportLevel)	\
    ( (This)->lpVtbl -> get_brushSupportLevel(This,pbrushSupportLevel) ) 

#define IMsRdpClientAdvancedSettings4_put_minInputSendInterval(This,pminInputSendInterval)	\
    ( (This)->lpVtbl -> put_minInputSendInterval(This,pminInputSendInterval) ) 

#define IMsRdpClientAdvancedSettings4_get_minInputSendInterval(This,pminInputSendInterval)	\
    ( (This)->lpVtbl -> get_minInputSendInterval(This,pminInputSendInterval) ) 

#define IMsRdpClientAdvancedSettings4_put_InputEventsAtOnce(This,pinputEventsAtOnce)	\
    ( (This)->lpVtbl -> put_InputEventsAtOnce(This,pinputEventsAtOnce) ) 

#define IMsRdpClientAdvancedSettings4_get_InputEventsAtOnce(This,pinputEventsAtOnce)	\
    ( (This)->lpVtbl -> get_InputEventsAtOnce(This,pinputEventsAtOnce) ) 

#define IMsRdpClientAdvancedSettings4_put_maxEventCount(This,pmaxEventCount)	\
    ( (This)->lpVtbl -> put_maxEventCount(This,pmaxEventCount) ) 

#define IMsRdpClientAdvancedSettings4_get_maxEventCount(This,pmaxEventCount)	\
    ( (This)->lpVtbl -> get_maxEventCount(This,pmaxEventCount) ) 

#define IMsRdpClientAdvancedSettings4_put_keepAliveInterval(This,pkeepAliveInterval)	\
    ( (This)->lpVtbl -> put_keepAliveInterval(This,pkeepAliveInterval) ) 

#define IMsRdpClientAdvancedSettings4_get_keepAliveInterval(This,pkeepAliveInterval)	\
    ( (This)->lpVtbl -> get_keepAliveInterval(This,pkeepAliveInterval) ) 

#define IMsRdpClientAdvancedSettings4_put_shutdownTimeout(This,pshutdownTimeout)	\
    ( (This)->lpVtbl -> put_shutdownTimeout(This,pshutdownTimeout) ) 

#define IMsRdpClientAdvancedSettings4_get_shutdownTimeout(This,pshutdownTimeout)	\
    ( (This)->lpVtbl -> get_shutdownTimeout(This,pshutdownTimeout) ) 

#define IMsRdpClientAdvancedSettings4_put_overallConnectionTimeout(This,poverallConnectionTimeout)	\
    ( (This)->lpVtbl -> put_overallConnectionTimeout(This,poverallConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings4_get_overallConnectionTimeout(This,poverallConnectionTimeout)	\
    ( (This)->lpVtbl -> get_overallConnectionTimeout(This,poverallConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings4_put_singleConnectionTimeout(This,psingleConnectionTimeout)	\
    ( (This)->lpVtbl -> put_singleConnectionTimeout(This,psingleConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings4_get_singleConnectionTimeout(This,psingleConnectionTimeout)	\
    ( (This)->lpVtbl -> get_singleConnectionTimeout(This,psingleConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings4_put_KeyboardType(This,pkeyboardType)	\
    ( (This)->lpVtbl -> put_KeyboardType(This,pkeyboardType) ) 

#define IMsRdpClientAdvancedSettings4_get_KeyboardType(This,pkeyboardType)	\
    ( (This)->lpVtbl -> get_KeyboardType(This,pkeyboardType) ) 

#define IMsRdpClientAdvancedSettings4_put_KeyboardSubType(This,pkeyboardSubType)	\
    ( (This)->lpVtbl -> put_KeyboardSubType(This,pkeyboardSubType) ) 

#define IMsRdpClientAdvancedSettings4_get_KeyboardSubType(This,pkeyboardSubType)	\
    ( (This)->lpVtbl -> get_KeyboardSubType(This,pkeyboardSubType) ) 

#define IMsRdpClientAdvancedSettings4_put_KeyboardFunctionKey(This,pkeyboardFunctionKey)	\
    ( (This)->lpVtbl -> put_KeyboardFunctionKey(This,pkeyboardFunctionKey) ) 

#define IMsRdpClientAdvancedSettings4_get_KeyboardFunctionKey(This,pkeyboardFunctionKey)	\
    ( (This)->lpVtbl -> get_KeyboardFunctionKey(This,pkeyboardFunctionKey) ) 

#define IMsRdpClientAdvancedSettings4_put_WinceFixedPalette(This,pwinceFixedPalette)	\
    ( (This)->lpVtbl -> put_WinceFixedPalette(This,pwinceFixedPalette) ) 

#define IMsRdpClientAdvancedSettings4_get_WinceFixedPalette(This,pwinceFixedPalette)	\
    ( (This)->lpVtbl -> get_WinceFixedPalette(This,pwinceFixedPalette) ) 

#define IMsRdpClientAdvancedSettings4_put_ConnectToServerConsole(This,pConnectToConsole)	\
    ( (This)->lpVtbl -> put_ConnectToServerConsole(This,pConnectToConsole) ) 

#define IMsRdpClientAdvancedSettings4_get_ConnectToServerConsole(This,pConnectToConsole)	\
    ( (This)->lpVtbl -> get_ConnectToServerConsole(This,pConnectToConsole) ) 

#define IMsRdpClientAdvancedSettings4_put_BitmapPersistence(This,pbitmapPersistence)	\
    ( (This)->lpVtbl -> put_BitmapPersistence(This,pbitmapPersistence) ) 

#define IMsRdpClientAdvancedSettings4_get_BitmapPersistence(This,pbitmapPersistence)	\
    ( (This)->lpVtbl -> get_BitmapPersistence(This,pbitmapPersistence) ) 

#define IMsRdpClientAdvancedSettings4_put_MinutesToIdleTimeout(This,pminutesToIdleTimeout)	\
    ( (This)->lpVtbl -> put_MinutesToIdleTimeout(This,pminutesToIdleTimeout) ) 

#define IMsRdpClientAdvancedSettings4_get_MinutesToIdleTimeout(This,pminutesToIdleTimeout)	\
    ( (This)->lpVtbl -> get_MinutesToIdleTimeout(This,pminutesToIdleTimeout) ) 

#define IMsRdpClientAdvancedSettings4_put_SmartSizing(This,pfSmartSizing)	\
    ( (This)->lpVtbl -> put_SmartSizing(This,pfSmartSizing) ) 

#define IMsRdpClientAdvancedSettings4_get_SmartSizing(This,pfSmartSizing)	\
    ( (This)->lpVtbl -> get_SmartSizing(This,pfSmartSizing) ) 

#define IMsRdpClientAdvancedSettings4_put_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName)	\
    ( (This)->lpVtbl -> put_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName) ) 

#define IMsRdpClientAdvancedSettings4_get_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName)	\
    ( (This)->lpVtbl -> get_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName) ) 

#define IMsRdpClientAdvancedSettings4_put_RdpdrClipCleanTempDirString(This,clipCleanTempDirString)	\
    ( (This)->lpVtbl -> put_RdpdrClipCleanTempDirString(This,clipCleanTempDirString) ) 

#define IMsRdpClientAdvancedSettings4_get_RdpdrClipCleanTempDirString(This,clipCleanTempDirString)	\
    ( (This)->lpVtbl -> get_RdpdrClipCleanTempDirString(This,clipCleanTempDirString) ) 

#define IMsRdpClientAdvancedSettings4_put_RdpdrClipPasteInfoString(This,clipPasteInfoString)	\
    ( (This)->lpVtbl -> put_RdpdrClipPasteInfoString(This,clipPasteInfoString) ) 

#define IMsRdpClientAdvancedSettings4_get_RdpdrClipPasteInfoString(This,clipPasteInfoString)	\
    ( (This)->lpVtbl -> get_RdpdrClipPasteInfoString(This,clipPasteInfoString) ) 

#define IMsRdpClientAdvancedSettings4_put_ClearTextPassword(This,rhs)	\
    ( (This)->lpVtbl -> put_ClearTextPassword(This,rhs) ) 

#define IMsRdpClientAdvancedSettings4_put_DisplayConnectionBar(This,pDisplayConnectionBar)	\
    ( (This)->lpVtbl -> put_DisplayConnectionBar(This,pDisplayConnectionBar) ) 

#define IMsRdpClientAdvancedSettings4_get_DisplayConnectionBar(This,pDisplayConnectionBar)	\
    ( (This)->lpVtbl -> get_DisplayConnectionBar(This,pDisplayConnectionBar) ) 

#define IMsRdpClientAdvancedSettings4_put_PinConnectionBar(This,pPinConnectionBar)	\
    ( (This)->lpVtbl -> put_PinConnectionBar(This,pPinConnectionBar) ) 

#define IMsRdpClientAdvancedSettings4_get_PinConnectionBar(This,pPinConnectionBar)	\
    ( (This)->lpVtbl -> get_PinConnectionBar(This,pPinConnectionBar) ) 

#define IMsRdpClientAdvancedSettings4_put_GrabFocusOnConnect(This,pfGrabFocusOnConnect)	\
    ( (This)->lpVtbl -> put_GrabFocusOnConnect(This,pfGrabFocusOnConnect) ) 

#define IMsRdpClientAdvancedSettings4_get_GrabFocusOnConnect(This,pfGrabFocusOnConnect)	\
    ( (This)->lpVtbl -> get_GrabFocusOnConnect(This,pfGrabFocusOnConnect) ) 

#define IMsRdpClientAdvancedSettings4_put_LoadBalanceInfo(This,pLBInfo)	\
    ( (This)->lpVtbl -> put_LoadBalanceInfo(This,pLBInfo) ) 

#define IMsRdpClientAdvancedSettings4_get_LoadBalanceInfo(This,pLBInfo)	\
    ( (This)->lpVtbl -> get_LoadBalanceInfo(This,pLBInfo) ) 

#define IMsRdpClientAdvancedSettings4_put_RedirectDrives(This,pRedirectDrives)	\
    ( (This)->lpVtbl -> put_RedirectDrives(This,pRedirectDrives) ) 

#define IMsRdpClientAdvancedSettings4_get_RedirectDrives(This,pRedirectDrives)	\
    ( (This)->lpVtbl -> get_RedirectDrives(This,pRedirectDrives) ) 

#define IMsRdpClientAdvancedSettings4_put_RedirectPrinters(This,pRedirectPrinters)	\
    ( (This)->lpVtbl -> put_RedirectPrinters(This,pRedirectPrinters) ) 

#define IMsRdpClientAdvancedSettings4_get_RedirectPrinters(This,pRedirectPrinters)	\
    ( (This)->lpVtbl -> get_RedirectPrinters(This,pRedirectPrinters) ) 

#define IMsRdpClientAdvancedSettings4_put_RedirectPorts(This,pRedirectPorts)	\
    ( (This)->lpVtbl -> put_RedirectPorts(This,pRedirectPorts) ) 

#define IMsRdpClientAdvancedSettings4_get_RedirectPorts(This,pRedirectPorts)	\
    ( (This)->lpVtbl -> get_RedirectPorts(This,pRedirectPorts) ) 

#define IMsRdpClientAdvancedSettings4_put_RedirectSmartCards(This,pRedirectSmartCards)	\
    ( (This)->lpVtbl -> put_RedirectSmartCards(This,pRedirectSmartCards) ) 

#define IMsRdpClientAdvancedSettings4_get_RedirectSmartCards(This,pRedirectSmartCards)	\
    ( (This)->lpVtbl -> get_RedirectSmartCards(This,pRedirectSmartCards) ) 

#define IMsRdpClientAdvancedSettings4_put_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize)	\
    ( (This)->lpVtbl -> put_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize) ) 

#define IMsRdpClientAdvancedSettings4_get_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize)	\
    ( (This)->lpVtbl -> get_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize) ) 

#define IMsRdpClientAdvancedSettings4_put_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize)	\
    ( (This)->lpVtbl -> put_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize) ) 

#define IMsRdpClientAdvancedSettings4_get_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize)	\
    ( (This)->lpVtbl -> get_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize) ) 

#define IMsRdpClientAdvancedSettings4_put_PerformanceFlags(This,pDisableList)	\
    ( (This)->lpVtbl -> put_PerformanceFlags(This,pDisableList) ) 

#define IMsRdpClientAdvancedSettings4_get_PerformanceFlags(This,pDisableList)	\
    ( (This)->lpVtbl -> get_PerformanceFlags(This,pDisableList) ) 

#define IMsRdpClientAdvancedSettings4_put_ConnectWithEndpoint(This,rhs)	\
    ( (This)->lpVtbl -> put_ConnectWithEndpoint(This,rhs) ) 

#define IMsRdpClientAdvancedSettings4_put_NotifyTSPublicKey(This,pfNotify)	\
    ( (This)->lpVtbl -> put_NotifyTSPublicKey(This,pfNotify) ) 

#define IMsRdpClientAdvancedSettings4_get_NotifyTSPublicKey(This,pfNotify)	\
    ( (This)->lpVtbl -> get_NotifyTSPublicKey(This,pfNotify) ) 


#define IMsRdpClientAdvancedSettings4_get_CanAutoReconnect(This,pfCanAutoReconnect)	\
    ( (This)->lpVtbl -> get_CanAutoReconnect(This,pfCanAutoReconnect) ) 

#define IMsRdpClientAdvancedSettings4_put_EnableAutoReconnect(This,pfEnableAutoReconnect)	\
    ( (This)->lpVtbl -> put_EnableAutoReconnect(This,pfEnableAutoReconnect) ) 

#define IMsRdpClientAdvancedSettings4_get_EnableAutoReconnect(This,pfEnableAutoReconnect)	\
    ( (This)->lpVtbl -> get_EnableAutoReconnect(This,pfEnableAutoReconnect) ) 

#define IMsRdpClientAdvancedSettings4_put_MaxReconnectAttempts(This,pMaxReconnectAttempts)	\
    ( (This)->lpVtbl -> put_MaxReconnectAttempts(This,pMaxReconnectAttempts) ) 

#define IMsRdpClientAdvancedSettings4_get_MaxReconnectAttempts(This,pMaxReconnectAttempts)	\
    ( (This)->lpVtbl -> get_MaxReconnectAttempts(This,pMaxReconnectAttempts) ) 


#define IMsRdpClientAdvancedSettings4_put_ConnectionBarShowMinimizeButton(This,pfShowMinimize)	\
    ( (This)->lpVtbl -> put_ConnectionBarShowMinimizeButton(This,pfShowMinimize) ) 

#define IMsRdpClientAdvancedSettings4_get_ConnectionBarShowMinimizeButton(This,pfShowMinimize)	\
    ( (This)->lpVtbl -> get_ConnectionBarShowMinimizeButton(This,pfShowMinimize) ) 

#define IMsRdpClientAdvancedSettings4_put_ConnectionBarShowRestoreButton(This,pfShowRestore)	\
    ( (This)->lpVtbl -> put_ConnectionBarShowRestoreButton(This,pfShowRestore) ) 

#define IMsRdpClientAdvancedSettings4_get_ConnectionBarShowRestoreButton(This,pfShowRestore)	\
    ( (This)->lpVtbl -> get_ConnectionBarShowRestoreButton(This,pfShowRestore) ) 


#define IMsRdpClientAdvancedSettings4_put_AuthenticationLevel(This,puiAuthLevel)	\
    ( (This)->lpVtbl -> put_AuthenticationLevel(This,puiAuthLevel) ) 

#define IMsRdpClientAdvancedSettings4_get_AuthenticationLevel(This,puiAuthLevel)	\
    ( (This)->lpVtbl -> get_AuthenticationLevel(This,puiAuthLevel) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propput][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings4_put_AuthenticationLevel_Proxy( 
    IMsRdpClientAdvancedSettings4 * This,
    /* [in] */ unsigned int puiAuthLevel);


void __RPC_STUB IMsRdpClientAdvancedSettings4_put_AuthenticationLevel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings4_get_AuthenticationLevel_Proxy( 
    IMsRdpClientAdvancedSettings4 * This,
    /* [retval][out] */ unsigned int *puiAuthLevel);


void __RPC_STUB IMsRdpClientAdvancedSettings4_get_AuthenticationLevel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMsRdpClientAdvancedSettings4_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClientAdvancedSettings5_INTERFACE_DEFINED__
#define __IMsRdpClientAdvancedSettings5_INTERFACE_DEFINED__

/* interface IMsRdpClientAdvancedSettings5 */
/* [oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClientAdvancedSettings5;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FBA7F64E-6783-4405-DA45-FA4A763DABD0")
    IMsRdpClientAdvancedSettings5 : public IMsRdpClientAdvancedSettings4
    {
    public:
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_RedirectClipboard( 
            /* [in] */ VARIANT_BOOL pfRedirectClipboard) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RedirectClipboard( 
            /* [retval][out] */ VARIANT_BOOL *pfRedirectClipboard) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_AudioRedirectionMode( 
            /* [in] */ unsigned int puiAudioRedirectionMode) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_AudioRedirectionMode( 
            /* [retval][out] */ unsigned int *puiAudioRedirectionMode) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_ConnectionBarShowPinButton( 
            /* [in] */ VARIANT_BOOL pfShowPin) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ConnectionBarShowPinButton( 
            /* [retval][out] */ VARIANT_BOOL *pfShowPin) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PublicMode( 
            /* [in] */ VARIANT_BOOL pfPublicMode) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PublicMode( 
            /* [retval][out] */ VARIANT_BOOL *pfPublicMode) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_RedirectDevices( 
            /* [in] */ VARIANT_BOOL pfRedirectPnPDevices) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RedirectDevices( 
            /* [retval][out] */ VARIANT_BOOL *pfRedirectPnPDevices) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_RedirectPOSDevices( 
            /* [in] */ VARIANT_BOOL pfRedirectPOSDevices) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RedirectPOSDevices( 
            /* [retval][out] */ VARIANT_BOOL *pfRedirectPOSDevices) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_BitmapVirtualCache32BppSize( 
            /* [in] */ long pBitmapVirtualCache32BppSize) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_BitmapVirtualCache32BppSize( 
            /* [retval][out] */ long *pBitmapVirtualCache32BppSize) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMsRdpClientAdvancedSettings5Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClientAdvancedSettings5 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClientAdvancedSettings5 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Compress )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long pcompress);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Compress )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *pcompress);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapPeristence )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long pbitmapPeristence);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapPeristence )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *pbitmapPeristence);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_allowBackgroundInput )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long pallowBackgroundInput);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_allowBackgroundInput )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *pallowBackgroundInput);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyBoardLayoutStr )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PluginDlls )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IconFile )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IconIndex )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ContainerHandledFullScreen )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long pContainerHandledFullScreen);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ContainerHandledFullScreen )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *pContainerHandledFullScreen);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisableRdpdr )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long pDisableRdpdr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisableRdpdr )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *pDisableRdpdr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SmoothScroll )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long psmoothScroll);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SmoothScroll )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *psmoothScroll);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AcceleratorPassthrough )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long pacceleratorPassthrough);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AcceleratorPassthrough )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *pacceleratorPassthrough);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ShadowBitmap )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long pshadowBitmap);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ShadowBitmap )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *pshadowBitmap);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TransportType )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long ptransportType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TransportType )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *ptransportType);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SasSequence )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long psasSequence);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SasSequence )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *psasSequence);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EncryptionEnabled )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long pencryptionEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EncryptionEnabled )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *pencryptionEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DedicatedTerminal )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long pdedicatedTerminal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DedicatedTerminal )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *pdedicatedTerminal);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RDPPort )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long prdpPort);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RDPPort )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *prdpPort);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EnableMouse )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long penableMouse);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EnableMouse )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *penableMouse);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisableCtrlAltDel )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long pdisableCtrlAltDel);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisableCtrlAltDel )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *pdisableCtrlAltDel);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EnableWindowsKey )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long penableWindowsKey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EnableWindowsKey )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *penableWindowsKey);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DoubleClickDetect )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long pdoubleClickDetect);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DoubleClickDetect )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *pdoubleClickDetect);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MaximizeShell )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long pmaximizeShell);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MaximizeShell )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *pmaximizeShell);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyFullScreen )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long photKeyFullScreen);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyFullScreen )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *photKeyFullScreen);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyCtrlEsc )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long photKeyCtrlEsc);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyCtrlEsc )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *photKeyCtrlEsc);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltEsc )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long photKeyAltEsc);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltEsc )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *photKeyAltEsc);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltTab )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long photKeyAltTab);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltTab )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *photKeyAltTab);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltShiftTab )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long photKeyAltShiftTab);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltShiftTab )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *photKeyAltShiftTab);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltSpace )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long photKeyAltSpace);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltSpace )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *photKeyAltSpace);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyCtrlAltDel )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long photKeyCtrlAltDel);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyCtrlAltDel )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *photKeyCtrlAltDel);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_orderDrawThreshold )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long porderDrawThreshold);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_orderDrawThreshold )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *porderDrawThreshold);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapCacheSize )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long pbitmapCacheSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapCacheSize )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *pbitmapCacheSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCacheSize )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long pbitmapVirtualCacheSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCacheSize )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *pbitmapVirtualCacheSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScaleBitmapCachesByBPP )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long pbScale);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScaleBitmapCachesByBPP )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *pbScale);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_NumBitmapCaches )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long pnumBitmapCaches);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NumBitmapCaches )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *pnumBitmapCaches);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_CachePersistenceActive )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long pcachePersistenceActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CachePersistenceActive )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *pcachePersistenceActive);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PersistCacheDirectory )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_brushSupportLevel )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long pbrushSupportLevel);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_brushSupportLevel )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *pbrushSupportLevel);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_minInputSendInterval )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long pminInputSendInterval);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_minInputSendInterval )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *pminInputSendInterval);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_InputEventsAtOnce )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long pinputEventsAtOnce);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InputEventsAtOnce )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *pinputEventsAtOnce);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_maxEventCount )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long pmaxEventCount);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_maxEventCount )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *pmaxEventCount);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_keepAliveInterval )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long pkeepAliveInterval);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_keepAliveInterval )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *pkeepAliveInterval);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_shutdownTimeout )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long pshutdownTimeout);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_shutdownTimeout )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *pshutdownTimeout);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_overallConnectionTimeout )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long poverallConnectionTimeout);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_overallConnectionTimeout )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *poverallConnectionTimeout);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_singleConnectionTimeout )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long psingleConnectionTimeout);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_singleConnectionTimeout )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *psingleConnectionTimeout);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardType )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long pkeyboardType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardType )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *pkeyboardType);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardSubType )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long pkeyboardSubType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardSubType )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *pkeyboardSubType);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardFunctionKey )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long pkeyboardFunctionKey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardFunctionKey )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *pkeyboardFunctionKey);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_WinceFixedPalette )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long pwinceFixedPalette);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_WinceFixedPalette )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *pwinceFixedPalette);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectToServerConsole )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ VARIANT_BOOL pConnectToConsole);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectToServerConsole )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ VARIANT_BOOL *pConnectToConsole);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapPersistence )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long pbitmapPersistence);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapPersistence )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *pbitmapPersistence);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MinutesToIdleTimeout )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long pminutesToIdleTimeout);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MinutesToIdleTimeout )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *pminutesToIdleTimeout);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SmartSizing )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ VARIANT_BOOL pfSmartSizing);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SmartSizing )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfSmartSizing);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrLocalPrintingDocName )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ BSTR pLocalPrintingDocName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrLocalPrintingDocName )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ BSTR *pLocalPrintingDocName);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrClipCleanTempDirString )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ BSTR clipCleanTempDirString);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrClipCleanTempDirString )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ BSTR *clipCleanTempDirString);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrClipPasteInfoString )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ BSTR clipPasteInfoString);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrClipPasteInfoString )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ BSTR *clipPasteInfoString);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ClearTextPassword )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayConnectionBar )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ VARIANT_BOOL pDisplayConnectionBar);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayConnectionBar )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ VARIANT_BOOL *pDisplayConnectionBar);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PinConnectionBar )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ VARIANT_BOOL pPinConnectionBar);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PinConnectionBar )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ VARIANT_BOOL *pPinConnectionBar);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GrabFocusOnConnect )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ VARIANT_BOOL pfGrabFocusOnConnect);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GrabFocusOnConnect )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfGrabFocusOnConnect);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_LoadBalanceInfo )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ BSTR pLBInfo);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LoadBalanceInfo )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ BSTR *pLBInfo);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectDrives )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ VARIANT_BOOL pRedirectDrives);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectDrives )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectDrives);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectPrinters )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ VARIANT_BOOL pRedirectPrinters);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectPrinters )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectPrinters);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectPorts )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ VARIANT_BOOL pRedirectPorts);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectPorts )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectPorts);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectSmartCards )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ VARIANT_BOOL pRedirectSmartCards);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectSmartCards )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectSmartCards);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCache16BppSize )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long pBitmapVirtualCache16BppSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCache16BppSize )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *pBitmapVirtualCache16BppSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCache24BppSize )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long pBitmapVirtualCache24BppSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCache24BppSize )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *pBitmapVirtualCache24BppSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PerformanceFlags )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long pDisableList);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PerformanceFlags )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *pDisableList);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectWithEndpoint )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ VARIANT *rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_NotifyTSPublicKey )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ VARIANT_BOOL pfNotify);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NotifyTSPublicKey )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfNotify);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CanAutoReconnect )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfCanAutoReconnect);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EnableAutoReconnect )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ VARIANT_BOOL pfEnableAutoReconnect);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EnableAutoReconnect )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfEnableAutoReconnect);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MaxReconnectAttempts )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long pMaxReconnectAttempts);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MaxReconnectAttempts )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *pMaxReconnectAttempts);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionBarShowMinimizeButton )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ VARIANT_BOOL pfShowMinimize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionBarShowMinimizeButton )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfShowMinimize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionBarShowRestoreButton )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ VARIANT_BOOL pfShowRestore);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionBarShowRestoreButton )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfShowRestore);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AuthenticationLevel )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ unsigned int puiAuthLevel);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AuthenticationLevel )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ unsigned int *puiAuthLevel);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectClipboard )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ VARIANT_BOOL pfRedirectClipboard);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectClipboard )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRedirectClipboard);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AudioRedirectionMode )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ unsigned int puiAudioRedirectionMode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AudioRedirectionMode )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ unsigned int *puiAudioRedirectionMode);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionBarShowPinButton )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ VARIANT_BOOL pfShowPin);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionBarShowPinButton )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfShowPin);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PublicMode )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ VARIANT_BOOL pfPublicMode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PublicMode )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfPublicMode);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectDevices )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ VARIANT_BOOL pfRedirectPnPDevices);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectDevices )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRedirectPnPDevices);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectPOSDevices )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ VARIANT_BOOL pfRedirectPOSDevices);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectPOSDevices )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRedirectPOSDevices);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCache32BppSize )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ long pBitmapVirtualCache32BppSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCache32BppSize )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ long *pBitmapVirtualCache32BppSize);
        
        END_INTERFACE
    } IMsRdpClientAdvancedSettings5Vtbl;

    interface IMsRdpClientAdvancedSettings5
    {
        CONST_VTBL struct IMsRdpClientAdvancedSettings5Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClientAdvancedSettings5_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClientAdvancedSettings5_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClientAdvancedSettings5_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClientAdvancedSettings5_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClientAdvancedSettings5_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClientAdvancedSettings5_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClientAdvancedSettings5_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMsRdpClientAdvancedSettings5_put_Compress(This,pcompress)	\
    ( (This)->lpVtbl -> put_Compress(This,pcompress) ) 

#define IMsRdpClientAdvancedSettings5_get_Compress(This,pcompress)	\
    ( (This)->lpVtbl -> get_Compress(This,pcompress) ) 

#define IMsRdpClientAdvancedSettings5_put_BitmapPeristence(This,pbitmapPeristence)	\
    ( (This)->lpVtbl -> put_BitmapPeristence(This,pbitmapPeristence) ) 

#define IMsRdpClientAdvancedSettings5_get_BitmapPeristence(This,pbitmapPeristence)	\
    ( (This)->lpVtbl -> get_BitmapPeristence(This,pbitmapPeristence) ) 

#define IMsRdpClientAdvancedSettings5_put_allowBackgroundInput(This,pallowBackgroundInput)	\
    ( (This)->lpVtbl -> put_allowBackgroundInput(This,pallowBackgroundInput) ) 

#define IMsRdpClientAdvancedSettings5_get_allowBackgroundInput(This,pallowBackgroundInput)	\
    ( (This)->lpVtbl -> get_allowBackgroundInput(This,pallowBackgroundInput) ) 

#define IMsRdpClientAdvancedSettings5_put_KeyBoardLayoutStr(This,rhs)	\
    ( (This)->lpVtbl -> put_KeyBoardLayoutStr(This,rhs) ) 

#define IMsRdpClientAdvancedSettings5_put_PluginDlls(This,rhs)	\
    ( (This)->lpVtbl -> put_PluginDlls(This,rhs) ) 

#define IMsRdpClientAdvancedSettings5_put_IconFile(This,rhs)	\
    ( (This)->lpVtbl -> put_IconFile(This,rhs) ) 

#define IMsRdpClientAdvancedSettings5_put_IconIndex(This,rhs)	\
    ( (This)->lpVtbl -> put_IconIndex(This,rhs) ) 

#define IMsRdpClientAdvancedSettings5_put_ContainerHandledFullScreen(This,pContainerHandledFullScreen)	\
    ( (This)->lpVtbl -> put_ContainerHandledFullScreen(This,pContainerHandledFullScreen) ) 

#define IMsRdpClientAdvancedSettings5_get_ContainerHandledFullScreen(This,pContainerHandledFullScreen)	\
    ( (This)->lpVtbl -> get_ContainerHandledFullScreen(This,pContainerHandledFullScreen) ) 

#define IMsRdpClientAdvancedSettings5_put_DisableRdpdr(This,pDisableRdpdr)	\
    ( (This)->lpVtbl -> put_DisableRdpdr(This,pDisableRdpdr) ) 

#define IMsRdpClientAdvancedSettings5_get_DisableRdpdr(This,pDisableRdpdr)	\
    ( (This)->lpVtbl -> get_DisableRdpdr(This,pDisableRdpdr) ) 


#define IMsRdpClientAdvancedSettings5_put_SmoothScroll(This,psmoothScroll)	\
    ( (This)->lpVtbl -> put_SmoothScroll(This,psmoothScroll) ) 

#define IMsRdpClientAdvancedSettings5_get_SmoothScroll(This,psmoothScroll)	\
    ( (This)->lpVtbl -> get_SmoothScroll(This,psmoothScroll) ) 

#define IMsRdpClientAdvancedSettings5_put_AcceleratorPassthrough(This,pacceleratorPassthrough)	\
    ( (This)->lpVtbl -> put_AcceleratorPassthrough(This,pacceleratorPassthrough) ) 

#define IMsRdpClientAdvancedSettings5_get_AcceleratorPassthrough(This,pacceleratorPassthrough)	\
    ( (This)->lpVtbl -> get_AcceleratorPassthrough(This,pacceleratorPassthrough) ) 

#define IMsRdpClientAdvancedSettings5_put_ShadowBitmap(This,pshadowBitmap)	\
    ( (This)->lpVtbl -> put_ShadowBitmap(This,pshadowBitmap) ) 

#define IMsRdpClientAdvancedSettings5_get_ShadowBitmap(This,pshadowBitmap)	\
    ( (This)->lpVtbl -> get_ShadowBitmap(This,pshadowBitmap) ) 

#define IMsRdpClientAdvancedSettings5_put_TransportType(This,ptransportType)	\
    ( (This)->lpVtbl -> put_TransportType(This,ptransportType) ) 

#define IMsRdpClientAdvancedSettings5_get_TransportType(This,ptransportType)	\
    ( (This)->lpVtbl -> get_TransportType(This,ptransportType) ) 

#define IMsRdpClientAdvancedSettings5_put_SasSequence(This,psasSequence)	\
    ( (This)->lpVtbl -> put_SasSequence(This,psasSequence) ) 

#define IMsRdpClientAdvancedSettings5_get_SasSequence(This,psasSequence)	\
    ( (This)->lpVtbl -> get_SasSequence(This,psasSequence) ) 

#define IMsRdpClientAdvancedSettings5_put_EncryptionEnabled(This,pencryptionEnabled)	\
    ( (This)->lpVtbl -> put_EncryptionEnabled(This,pencryptionEnabled) ) 

#define IMsRdpClientAdvancedSettings5_get_EncryptionEnabled(This,pencryptionEnabled)	\
    ( (This)->lpVtbl -> get_EncryptionEnabled(This,pencryptionEnabled) ) 

#define IMsRdpClientAdvancedSettings5_put_DedicatedTerminal(This,pdedicatedTerminal)	\
    ( (This)->lpVtbl -> put_DedicatedTerminal(This,pdedicatedTerminal) ) 

#define IMsRdpClientAdvancedSettings5_get_DedicatedTerminal(This,pdedicatedTerminal)	\
    ( (This)->lpVtbl -> get_DedicatedTerminal(This,pdedicatedTerminal) ) 

#define IMsRdpClientAdvancedSettings5_put_RDPPort(This,prdpPort)	\
    ( (This)->lpVtbl -> put_RDPPort(This,prdpPort) ) 

#define IMsRdpClientAdvancedSettings5_get_RDPPort(This,prdpPort)	\
    ( (This)->lpVtbl -> get_RDPPort(This,prdpPort) ) 

#define IMsRdpClientAdvancedSettings5_put_EnableMouse(This,penableMouse)	\
    ( (This)->lpVtbl -> put_EnableMouse(This,penableMouse) ) 

#define IMsRdpClientAdvancedSettings5_get_EnableMouse(This,penableMouse)	\
    ( (This)->lpVtbl -> get_EnableMouse(This,penableMouse) ) 

#define IMsRdpClientAdvancedSettings5_put_DisableCtrlAltDel(This,pdisableCtrlAltDel)	\
    ( (This)->lpVtbl -> put_DisableCtrlAltDel(This,pdisableCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings5_get_DisableCtrlAltDel(This,pdisableCtrlAltDel)	\
    ( (This)->lpVtbl -> get_DisableCtrlAltDel(This,pdisableCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings5_put_EnableWindowsKey(This,penableWindowsKey)	\
    ( (This)->lpVtbl -> put_EnableWindowsKey(This,penableWindowsKey) ) 

#define IMsRdpClientAdvancedSettings5_get_EnableWindowsKey(This,penableWindowsKey)	\
    ( (This)->lpVtbl -> get_EnableWindowsKey(This,penableWindowsKey) ) 

#define IMsRdpClientAdvancedSettings5_put_DoubleClickDetect(This,pdoubleClickDetect)	\
    ( (This)->lpVtbl -> put_DoubleClickDetect(This,pdoubleClickDetect) ) 

#define IMsRdpClientAdvancedSettings5_get_DoubleClickDetect(This,pdoubleClickDetect)	\
    ( (This)->lpVtbl -> get_DoubleClickDetect(This,pdoubleClickDetect) ) 

#define IMsRdpClientAdvancedSettings5_put_MaximizeShell(This,pmaximizeShell)	\
    ( (This)->lpVtbl -> put_MaximizeShell(This,pmaximizeShell) ) 

#define IMsRdpClientAdvancedSettings5_get_MaximizeShell(This,pmaximizeShell)	\
    ( (This)->lpVtbl -> get_MaximizeShell(This,pmaximizeShell) ) 

#define IMsRdpClientAdvancedSettings5_put_HotKeyFullScreen(This,photKeyFullScreen)	\
    ( (This)->lpVtbl -> put_HotKeyFullScreen(This,photKeyFullScreen) ) 

#define IMsRdpClientAdvancedSettings5_get_HotKeyFullScreen(This,photKeyFullScreen)	\
    ( (This)->lpVtbl -> get_HotKeyFullScreen(This,photKeyFullScreen) ) 

#define IMsRdpClientAdvancedSettings5_put_HotKeyCtrlEsc(This,photKeyCtrlEsc)	\
    ( (This)->lpVtbl -> put_HotKeyCtrlEsc(This,photKeyCtrlEsc) ) 

#define IMsRdpClientAdvancedSettings5_get_HotKeyCtrlEsc(This,photKeyCtrlEsc)	\
    ( (This)->lpVtbl -> get_HotKeyCtrlEsc(This,photKeyCtrlEsc) ) 

#define IMsRdpClientAdvancedSettings5_put_HotKeyAltEsc(This,photKeyAltEsc)	\
    ( (This)->lpVtbl -> put_HotKeyAltEsc(This,photKeyAltEsc) ) 

#define IMsRdpClientAdvancedSettings5_get_HotKeyAltEsc(This,photKeyAltEsc)	\
    ( (This)->lpVtbl -> get_HotKeyAltEsc(This,photKeyAltEsc) ) 

#define IMsRdpClientAdvancedSettings5_put_HotKeyAltTab(This,photKeyAltTab)	\
    ( (This)->lpVtbl -> put_HotKeyAltTab(This,photKeyAltTab) ) 

#define IMsRdpClientAdvancedSettings5_get_HotKeyAltTab(This,photKeyAltTab)	\
    ( (This)->lpVtbl -> get_HotKeyAltTab(This,photKeyAltTab) ) 

#define IMsRdpClientAdvancedSettings5_put_HotKeyAltShiftTab(This,photKeyAltShiftTab)	\
    ( (This)->lpVtbl -> put_HotKeyAltShiftTab(This,photKeyAltShiftTab) ) 

#define IMsRdpClientAdvancedSettings5_get_HotKeyAltShiftTab(This,photKeyAltShiftTab)	\
    ( (This)->lpVtbl -> get_HotKeyAltShiftTab(This,photKeyAltShiftTab) ) 

#define IMsRdpClientAdvancedSettings5_put_HotKeyAltSpace(This,photKeyAltSpace)	\
    ( (This)->lpVtbl -> put_HotKeyAltSpace(This,photKeyAltSpace) ) 

#define IMsRdpClientAdvancedSettings5_get_HotKeyAltSpace(This,photKeyAltSpace)	\
    ( (This)->lpVtbl -> get_HotKeyAltSpace(This,photKeyAltSpace) ) 

#define IMsRdpClientAdvancedSettings5_put_HotKeyCtrlAltDel(This,photKeyCtrlAltDel)	\
    ( (This)->lpVtbl -> put_HotKeyCtrlAltDel(This,photKeyCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings5_get_HotKeyCtrlAltDel(This,photKeyCtrlAltDel)	\
    ( (This)->lpVtbl -> get_HotKeyCtrlAltDel(This,photKeyCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings5_put_orderDrawThreshold(This,porderDrawThreshold)	\
    ( (This)->lpVtbl -> put_orderDrawThreshold(This,porderDrawThreshold) ) 

#define IMsRdpClientAdvancedSettings5_get_orderDrawThreshold(This,porderDrawThreshold)	\
    ( (This)->lpVtbl -> get_orderDrawThreshold(This,porderDrawThreshold) ) 

#define IMsRdpClientAdvancedSettings5_put_BitmapCacheSize(This,pbitmapCacheSize)	\
    ( (This)->lpVtbl -> put_BitmapCacheSize(This,pbitmapCacheSize) ) 

#define IMsRdpClientAdvancedSettings5_get_BitmapCacheSize(This,pbitmapCacheSize)	\
    ( (This)->lpVtbl -> get_BitmapCacheSize(This,pbitmapCacheSize) ) 

#define IMsRdpClientAdvancedSettings5_put_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize)	\
    ( (This)->lpVtbl -> put_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize) ) 

#define IMsRdpClientAdvancedSettings5_get_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize)	\
    ( (This)->lpVtbl -> get_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize) ) 

#define IMsRdpClientAdvancedSettings5_put_ScaleBitmapCachesByBPP(This,pbScale)	\
    ( (This)->lpVtbl -> put_ScaleBitmapCachesByBPP(This,pbScale) ) 

#define IMsRdpClientAdvancedSettings5_get_ScaleBitmapCachesByBPP(This,pbScale)	\
    ( (This)->lpVtbl -> get_ScaleBitmapCachesByBPP(This,pbScale) ) 

#define IMsRdpClientAdvancedSettings5_put_NumBitmapCaches(This,pnumBitmapCaches)	\
    ( (This)->lpVtbl -> put_NumBitmapCaches(This,pnumBitmapCaches) ) 

#define IMsRdpClientAdvancedSettings5_get_NumBitmapCaches(This,pnumBitmapCaches)	\
    ( (This)->lpVtbl -> get_NumBitmapCaches(This,pnumBitmapCaches) ) 

#define IMsRdpClientAdvancedSettings5_put_CachePersistenceActive(This,pcachePersistenceActive)	\
    ( (This)->lpVtbl -> put_CachePersistenceActive(This,pcachePersistenceActive) ) 

#define IMsRdpClientAdvancedSettings5_get_CachePersistenceActive(This,pcachePersistenceActive)	\
    ( (This)->lpVtbl -> get_CachePersistenceActive(This,pcachePersistenceActive) ) 

#define IMsRdpClientAdvancedSettings5_put_PersistCacheDirectory(This,rhs)	\
    ( (This)->lpVtbl -> put_PersistCacheDirectory(This,rhs) ) 

#define IMsRdpClientAdvancedSettings5_put_brushSupportLevel(This,pbrushSupportLevel)	\
    ( (This)->lpVtbl -> put_brushSupportLevel(This,pbrushSupportLevel) ) 

#define IMsRdpClientAdvancedSettings5_get_brushSupportLevel(This,pbrushSupportLevel)	\
    ( (This)->lpVtbl -> get_brushSupportLevel(This,pbrushSupportLevel) ) 

#define IMsRdpClientAdvancedSettings5_put_minInputSendInterval(This,pminInputSendInterval)	\
    ( (This)->lpVtbl -> put_minInputSendInterval(This,pminInputSendInterval) ) 

#define IMsRdpClientAdvancedSettings5_get_minInputSendInterval(This,pminInputSendInterval)	\
    ( (This)->lpVtbl -> get_minInputSendInterval(This,pminInputSendInterval) ) 

#define IMsRdpClientAdvancedSettings5_put_InputEventsAtOnce(This,pinputEventsAtOnce)	\
    ( (This)->lpVtbl -> put_InputEventsAtOnce(This,pinputEventsAtOnce) ) 

#define IMsRdpClientAdvancedSettings5_get_InputEventsAtOnce(This,pinputEventsAtOnce)	\
    ( (This)->lpVtbl -> get_InputEventsAtOnce(This,pinputEventsAtOnce) ) 

#define IMsRdpClientAdvancedSettings5_put_maxEventCount(This,pmaxEventCount)	\
    ( (This)->lpVtbl -> put_maxEventCount(This,pmaxEventCount) ) 

#define IMsRdpClientAdvancedSettings5_get_maxEventCount(This,pmaxEventCount)	\
    ( (This)->lpVtbl -> get_maxEventCount(This,pmaxEventCount) ) 

#define IMsRdpClientAdvancedSettings5_put_keepAliveInterval(This,pkeepAliveInterval)	\
    ( (This)->lpVtbl -> put_keepAliveInterval(This,pkeepAliveInterval) ) 

#define IMsRdpClientAdvancedSettings5_get_keepAliveInterval(This,pkeepAliveInterval)	\
    ( (This)->lpVtbl -> get_keepAliveInterval(This,pkeepAliveInterval) ) 

#define IMsRdpClientAdvancedSettings5_put_shutdownTimeout(This,pshutdownTimeout)	\
    ( (This)->lpVtbl -> put_shutdownTimeout(This,pshutdownTimeout) ) 

#define IMsRdpClientAdvancedSettings5_get_shutdownTimeout(This,pshutdownTimeout)	\
    ( (This)->lpVtbl -> get_shutdownTimeout(This,pshutdownTimeout) ) 

#define IMsRdpClientAdvancedSettings5_put_overallConnectionTimeout(This,poverallConnectionTimeout)	\
    ( (This)->lpVtbl -> put_overallConnectionTimeout(This,poverallConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings5_get_overallConnectionTimeout(This,poverallConnectionTimeout)	\
    ( (This)->lpVtbl -> get_overallConnectionTimeout(This,poverallConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings5_put_singleConnectionTimeout(This,psingleConnectionTimeout)	\
    ( (This)->lpVtbl -> put_singleConnectionTimeout(This,psingleConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings5_get_singleConnectionTimeout(This,psingleConnectionTimeout)	\
    ( (This)->lpVtbl -> get_singleConnectionTimeout(This,psingleConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings5_put_KeyboardType(This,pkeyboardType)	\
    ( (This)->lpVtbl -> put_KeyboardType(This,pkeyboardType) ) 

#define IMsRdpClientAdvancedSettings5_get_KeyboardType(This,pkeyboardType)	\
    ( (This)->lpVtbl -> get_KeyboardType(This,pkeyboardType) ) 

#define IMsRdpClientAdvancedSettings5_put_KeyboardSubType(This,pkeyboardSubType)	\
    ( (This)->lpVtbl -> put_KeyboardSubType(This,pkeyboardSubType) ) 

#define IMsRdpClientAdvancedSettings5_get_KeyboardSubType(This,pkeyboardSubType)	\
    ( (This)->lpVtbl -> get_KeyboardSubType(This,pkeyboardSubType) ) 

#define IMsRdpClientAdvancedSettings5_put_KeyboardFunctionKey(This,pkeyboardFunctionKey)	\
    ( (This)->lpVtbl -> put_KeyboardFunctionKey(This,pkeyboardFunctionKey) ) 

#define IMsRdpClientAdvancedSettings5_get_KeyboardFunctionKey(This,pkeyboardFunctionKey)	\
    ( (This)->lpVtbl -> get_KeyboardFunctionKey(This,pkeyboardFunctionKey) ) 

#define IMsRdpClientAdvancedSettings5_put_WinceFixedPalette(This,pwinceFixedPalette)	\
    ( (This)->lpVtbl -> put_WinceFixedPalette(This,pwinceFixedPalette) ) 

#define IMsRdpClientAdvancedSettings5_get_WinceFixedPalette(This,pwinceFixedPalette)	\
    ( (This)->lpVtbl -> get_WinceFixedPalette(This,pwinceFixedPalette) ) 

#define IMsRdpClientAdvancedSettings5_put_ConnectToServerConsole(This,pConnectToConsole)	\
    ( (This)->lpVtbl -> put_ConnectToServerConsole(This,pConnectToConsole) ) 

#define IMsRdpClientAdvancedSettings5_get_ConnectToServerConsole(This,pConnectToConsole)	\
    ( (This)->lpVtbl -> get_ConnectToServerConsole(This,pConnectToConsole) ) 

#define IMsRdpClientAdvancedSettings5_put_BitmapPersistence(This,pbitmapPersistence)	\
    ( (This)->lpVtbl -> put_BitmapPersistence(This,pbitmapPersistence) ) 

#define IMsRdpClientAdvancedSettings5_get_BitmapPersistence(This,pbitmapPersistence)	\
    ( (This)->lpVtbl -> get_BitmapPersistence(This,pbitmapPersistence) ) 

#define IMsRdpClientAdvancedSettings5_put_MinutesToIdleTimeout(This,pminutesToIdleTimeout)	\
    ( (This)->lpVtbl -> put_MinutesToIdleTimeout(This,pminutesToIdleTimeout) ) 

#define IMsRdpClientAdvancedSettings5_get_MinutesToIdleTimeout(This,pminutesToIdleTimeout)	\
    ( (This)->lpVtbl -> get_MinutesToIdleTimeout(This,pminutesToIdleTimeout) ) 

#define IMsRdpClientAdvancedSettings5_put_SmartSizing(This,pfSmartSizing)	\
    ( (This)->lpVtbl -> put_SmartSizing(This,pfSmartSizing) ) 

#define IMsRdpClientAdvancedSettings5_get_SmartSizing(This,pfSmartSizing)	\
    ( (This)->lpVtbl -> get_SmartSizing(This,pfSmartSizing) ) 

#define IMsRdpClientAdvancedSettings5_put_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName)	\
    ( (This)->lpVtbl -> put_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName) ) 

#define IMsRdpClientAdvancedSettings5_get_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName)	\
    ( (This)->lpVtbl -> get_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName) ) 

#define IMsRdpClientAdvancedSettings5_put_RdpdrClipCleanTempDirString(This,clipCleanTempDirString)	\
    ( (This)->lpVtbl -> put_RdpdrClipCleanTempDirString(This,clipCleanTempDirString) ) 

#define IMsRdpClientAdvancedSettings5_get_RdpdrClipCleanTempDirString(This,clipCleanTempDirString)	\
    ( (This)->lpVtbl -> get_RdpdrClipCleanTempDirString(This,clipCleanTempDirString) ) 

#define IMsRdpClientAdvancedSettings5_put_RdpdrClipPasteInfoString(This,clipPasteInfoString)	\
    ( (This)->lpVtbl -> put_RdpdrClipPasteInfoString(This,clipPasteInfoString) ) 

#define IMsRdpClientAdvancedSettings5_get_RdpdrClipPasteInfoString(This,clipPasteInfoString)	\
    ( (This)->lpVtbl -> get_RdpdrClipPasteInfoString(This,clipPasteInfoString) ) 

#define IMsRdpClientAdvancedSettings5_put_ClearTextPassword(This,rhs)	\
    ( (This)->lpVtbl -> put_ClearTextPassword(This,rhs) ) 

#define IMsRdpClientAdvancedSettings5_put_DisplayConnectionBar(This,pDisplayConnectionBar)	\
    ( (This)->lpVtbl -> put_DisplayConnectionBar(This,pDisplayConnectionBar) ) 

#define IMsRdpClientAdvancedSettings5_get_DisplayConnectionBar(This,pDisplayConnectionBar)	\
    ( (This)->lpVtbl -> get_DisplayConnectionBar(This,pDisplayConnectionBar) ) 

#define IMsRdpClientAdvancedSettings5_put_PinConnectionBar(This,pPinConnectionBar)	\
    ( (This)->lpVtbl -> put_PinConnectionBar(This,pPinConnectionBar) ) 

#define IMsRdpClientAdvancedSettings5_get_PinConnectionBar(This,pPinConnectionBar)	\
    ( (This)->lpVtbl -> get_PinConnectionBar(This,pPinConnectionBar) ) 

#define IMsRdpClientAdvancedSettings5_put_GrabFocusOnConnect(This,pfGrabFocusOnConnect)	\
    ( (This)->lpVtbl -> put_GrabFocusOnConnect(This,pfGrabFocusOnConnect) ) 

#define IMsRdpClientAdvancedSettings5_get_GrabFocusOnConnect(This,pfGrabFocusOnConnect)	\
    ( (This)->lpVtbl -> get_GrabFocusOnConnect(This,pfGrabFocusOnConnect) ) 

#define IMsRdpClientAdvancedSettings5_put_LoadBalanceInfo(This,pLBInfo)	\
    ( (This)->lpVtbl -> put_LoadBalanceInfo(This,pLBInfo) ) 

#define IMsRdpClientAdvancedSettings5_get_LoadBalanceInfo(This,pLBInfo)	\
    ( (This)->lpVtbl -> get_LoadBalanceInfo(This,pLBInfo) ) 

#define IMsRdpClientAdvancedSettings5_put_RedirectDrives(This,pRedirectDrives)	\
    ( (This)->lpVtbl -> put_RedirectDrives(This,pRedirectDrives) ) 

#define IMsRdpClientAdvancedSettings5_get_RedirectDrives(This,pRedirectDrives)	\
    ( (This)->lpVtbl -> get_RedirectDrives(This,pRedirectDrives) ) 

#define IMsRdpClientAdvancedSettings5_put_RedirectPrinters(This,pRedirectPrinters)	\
    ( (This)->lpVtbl -> put_RedirectPrinters(This,pRedirectPrinters) ) 

#define IMsRdpClientAdvancedSettings5_get_RedirectPrinters(This,pRedirectPrinters)	\
    ( (This)->lpVtbl -> get_RedirectPrinters(This,pRedirectPrinters) ) 

#define IMsRdpClientAdvancedSettings5_put_RedirectPorts(This,pRedirectPorts)	\
    ( (This)->lpVtbl -> put_RedirectPorts(This,pRedirectPorts) ) 

#define IMsRdpClientAdvancedSettings5_get_RedirectPorts(This,pRedirectPorts)	\
    ( (This)->lpVtbl -> get_RedirectPorts(This,pRedirectPorts) ) 

#define IMsRdpClientAdvancedSettings5_put_RedirectSmartCards(This,pRedirectSmartCards)	\
    ( (This)->lpVtbl -> put_RedirectSmartCards(This,pRedirectSmartCards) ) 

#define IMsRdpClientAdvancedSettings5_get_RedirectSmartCards(This,pRedirectSmartCards)	\
    ( (This)->lpVtbl -> get_RedirectSmartCards(This,pRedirectSmartCards) ) 

#define IMsRdpClientAdvancedSettings5_put_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize)	\
    ( (This)->lpVtbl -> put_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize) ) 

#define IMsRdpClientAdvancedSettings5_get_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize)	\
    ( (This)->lpVtbl -> get_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize) ) 

#define IMsRdpClientAdvancedSettings5_put_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize)	\
    ( (This)->lpVtbl -> put_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize) ) 

#define IMsRdpClientAdvancedSettings5_get_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize)	\
    ( (This)->lpVtbl -> get_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize) ) 

#define IMsRdpClientAdvancedSettings5_put_PerformanceFlags(This,pDisableList)	\
    ( (This)->lpVtbl -> put_PerformanceFlags(This,pDisableList) ) 

#define IMsRdpClientAdvancedSettings5_get_PerformanceFlags(This,pDisableList)	\
    ( (This)->lpVtbl -> get_PerformanceFlags(This,pDisableList) ) 

#define IMsRdpClientAdvancedSettings5_put_ConnectWithEndpoint(This,rhs)	\
    ( (This)->lpVtbl -> put_ConnectWithEndpoint(This,rhs) ) 

#define IMsRdpClientAdvancedSettings5_put_NotifyTSPublicKey(This,pfNotify)	\
    ( (This)->lpVtbl -> put_NotifyTSPublicKey(This,pfNotify) ) 

#define IMsRdpClientAdvancedSettings5_get_NotifyTSPublicKey(This,pfNotify)	\
    ( (This)->lpVtbl -> get_NotifyTSPublicKey(This,pfNotify) ) 


#define IMsRdpClientAdvancedSettings5_get_CanAutoReconnect(This,pfCanAutoReconnect)	\
    ( (This)->lpVtbl -> get_CanAutoReconnect(This,pfCanAutoReconnect) ) 

#define IMsRdpClientAdvancedSettings5_put_EnableAutoReconnect(This,pfEnableAutoReconnect)	\
    ( (This)->lpVtbl -> put_EnableAutoReconnect(This,pfEnableAutoReconnect) ) 

#define IMsRdpClientAdvancedSettings5_get_EnableAutoReconnect(This,pfEnableAutoReconnect)	\
    ( (This)->lpVtbl -> get_EnableAutoReconnect(This,pfEnableAutoReconnect) ) 

#define IMsRdpClientAdvancedSettings5_put_MaxReconnectAttempts(This,pMaxReconnectAttempts)	\
    ( (This)->lpVtbl -> put_MaxReconnectAttempts(This,pMaxReconnectAttempts) ) 

#define IMsRdpClientAdvancedSettings5_get_MaxReconnectAttempts(This,pMaxReconnectAttempts)	\
    ( (This)->lpVtbl -> get_MaxReconnectAttempts(This,pMaxReconnectAttempts) ) 


#define IMsRdpClientAdvancedSettings5_put_ConnectionBarShowMinimizeButton(This,pfShowMinimize)	\
    ( (This)->lpVtbl -> put_ConnectionBarShowMinimizeButton(This,pfShowMinimize) ) 

#define IMsRdpClientAdvancedSettings5_get_ConnectionBarShowMinimizeButton(This,pfShowMinimize)	\
    ( (This)->lpVtbl -> get_ConnectionBarShowMinimizeButton(This,pfShowMinimize) ) 

#define IMsRdpClientAdvancedSettings5_put_ConnectionBarShowRestoreButton(This,pfShowRestore)	\
    ( (This)->lpVtbl -> put_ConnectionBarShowRestoreButton(This,pfShowRestore) ) 

#define IMsRdpClientAdvancedSettings5_get_ConnectionBarShowRestoreButton(This,pfShowRestore)	\
    ( (This)->lpVtbl -> get_ConnectionBarShowRestoreButton(This,pfShowRestore) ) 


#define IMsRdpClientAdvancedSettings5_put_AuthenticationLevel(This,puiAuthLevel)	\
    ( (This)->lpVtbl -> put_AuthenticationLevel(This,puiAuthLevel) ) 

#define IMsRdpClientAdvancedSettings5_get_AuthenticationLevel(This,puiAuthLevel)	\
    ( (This)->lpVtbl -> get_AuthenticationLevel(This,puiAuthLevel) ) 


#define IMsRdpClientAdvancedSettings5_put_RedirectClipboard(This,pfRedirectClipboard)	\
    ( (This)->lpVtbl -> put_RedirectClipboard(This,pfRedirectClipboard) ) 

#define IMsRdpClientAdvancedSettings5_get_RedirectClipboard(This,pfRedirectClipboard)	\
    ( (This)->lpVtbl -> get_RedirectClipboard(This,pfRedirectClipboard) ) 

#define IMsRdpClientAdvancedSettings5_put_AudioRedirectionMode(This,puiAudioRedirectionMode)	\
    ( (This)->lpVtbl -> put_AudioRedirectionMode(This,puiAudioRedirectionMode) ) 

#define IMsRdpClientAdvancedSettings5_get_AudioRedirectionMode(This,puiAudioRedirectionMode)	\
    ( (This)->lpVtbl -> get_AudioRedirectionMode(This,puiAudioRedirectionMode) ) 

#define IMsRdpClientAdvancedSettings5_put_ConnectionBarShowPinButton(This,pfShowPin)	\
    ( (This)->lpVtbl -> put_ConnectionBarShowPinButton(This,pfShowPin) ) 

#define IMsRdpClientAdvancedSettings5_get_ConnectionBarShowPinButton(This,pfShowPin)	\
    ( (This)->lpVtbl -> get_ConnectionBarShowPinButton(This,pfShowPin) ) 

#define IMsRdpClientAdvancedSettings5_put_PublicMode(This,pfPublicMode)	\
    ( (This)->lpVtbl -> put_PublicMode(This,pfPublicMode) ) 

#define IMsRdpClientAdvancedSettings5_get_PublicMode(This,pfPublicMode)	\
    ( (This)->lpVtbl -> get_PublicMode(This,pfPublicMode) ) 

#define IMsRdpClientAdvancedSettings5_put_RedirectDevices(This,pfRedirectPnPDevices)	\
    ( (This)->lpVtbl -> put_RedirectDevices(This,pfRedirectPnPDevices) ) 

#define IMsRdpClientAdvancedSettings5_get_RedirectDevices(This,pfRedirectPnPDevices)	\
    ( (This)->lpVtbl -> get_RedirectDevices(This,pfRedirectPnPDevices) ) 

#define IMsRdpClientAdvancedSettings5_put_RedirectPOSDevices(This,pfRedirectPOSDevices)	\
    ( (This)->lpVtbl -> put_RedirectPOSDevices(This,pfRedirectPOSDevices) ) 

#define IMsRdpClientAdvancedSettings5_get_RedirectPOSDevices(This,pfRedirectPOSDevices)	\
    ( (This)->lpVtbl -> get_RedirectPOSDevices(This,pfRedirectPOSDevices) ) 

#define IMsRdpClientAdvancedSettings5_put_BitmapVirtualCache32BppSize(This,pBitmapVirtualCache32BppSize)	\
    ( (This)->lpVtbl -> put_BitmapVirtualCache32BppSize(This,pBitmapVirtualCache32BppSize) ) 

#define IMsRdpClientAdvancedSettings5_get_BitmapVirtualCache32BppSize(This,pBitmapVirtualCache32BppSize)	\
    ( (This)->lpVtbl -> get_BitmapVirtualCache32BppSize(This,pBitmapVirtualCache32BppSize) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propput][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings5_put_RedirectClipboard_Proxy( 
    IMsRdpClientAdvancedSettings5 * This,
    /* [in] */ VARIANT_BOOL pfRedirectClipboard);


void __RPC_STUB IMsRdpClientAdvancedSettings5_put_RedirectClipboard_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings5_get_RedirectClipboard_Proxy( 
    IMsRdpClientAdvancedSettings5 * This,
    /* [retval][out] */ VARIANT_BOOL *pfRedirectClipboard);


void __RPC_STUB IMsRdpClientAdvancedSettings5_get_RedirectClipboard_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings5_put_AudioRedirectionMode_Proxy( 
    IMsRdpClientAdvancedSettings5 * This,
    /* [in] */ unsigned int puiAudioRedirectionMode);


void __RPC_STUB IMsRdpClientAdvancedSettings5_put_AudioRedirectionMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings5_get_AudioRedirectionMode_Proxy( 
    IMsRdpClientAdvancedSettings5 * This,
    /* [retval][out] */ unsigned int *puiAudioRedirectionMode);


void __RPC_STUB IMsRdpClientAdvancedSettings5_get_AudioRedirectionMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings5_put_ConnectionBarShowPinButton_Proxy( 
    IMsRdpClientAdvancedSettings5 * This,
    /* [in] */ VARIANT_BOOL pfShowPin);


void __RPC_STUB IMsRdpClientAdvancedSettings5_put_ConnectionBarShowPinButton_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings5_get_ConnectionBarShowPinButton_Proxy( 
    IMsRdpClientAdvancedSettings5 * This,
    /* [retval][out] */ VARIANT_BOOL *pfShowPin);


void __RPC_STUB IMsRdpClientAdvancedSettings5_get_ConnectionBarShowPinButton_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings5_put_PublicMode_Proxy( 
    IMsRdpClientAdvancedSettings5 * This,
    /* [in] */ VARIANT_BOOL pfPublicMode);


void __RPC_STUB IMsRdpClientAdvancedSettings5_put_PublicMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings5_get_PublicMode_Proxy( 
    IMsRdpClientAdvancedSettings5 * This,
    /* [retval][out] */ VARIANT_BOOL *pfPublicMode);


void __RPC_STUB IMsRdpClientAdvancedSettings5_get_PublicMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings5_put_RedirectDevices_Proxy( 
    IMsRdpClientAdvancedSettings5 * This,
    /* [in] */ VARIANT_BOOL pfRedirectPnPDevices);


void __RPC_STUB IMsRdpClientAdvancedSettings5_put_RedirectDevices_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings5_get_RedirectDevices_Proxy( 
    IMsRdpClientAdvancedSettings5 * This,
    /* [retval][out] */ VARIANT_BOOL *pfRedirectPnPDevices);


void __RPC_STUB IMsRdpClientAdvancedSettings5_get_RedirectDevices_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings5_put_RedirectPOSDevices_Proxy( 
    IMsRdpClientAdvancedSettings5 * This,
    /* [in] */ VARIANT_BOOL pfRedirectPOSDevices);


void __RPC_STUB IMsRdpClientAdvancedSettings5_put_RedirectPOSDevices_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings5_get_RedirectPOSDevices_Proxy( 
    IMsRdpClientAdvancedSettings5 * This,
    /* [retval][out] */ VARIANT_BOOL *pfRedirectPOSDevices);


void __RPC_STUB IMsRdpClientAdvancedSettings5_get_RedirectPOSDevices_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings5_put_BitmapVirtualCache32BppSize_Proxy( 
    IMsRdpClientAdvancedSettings5 * This,
    /* [in] */ long pBitmapVirtualCache32BppSize);


void __RPC_STUB IMsRdpClientAdvancedSettings5_put_BitmapVirtualCache32BppSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings5_get_BitmapVirtualCache32BppSize_Proxy( 
    IMsRdpClientAdvancedSettings5 * This,
    /* [retval][out] */ long *pBitmapVirtualCache32BppSize);


void __RPC_STUB IMsRdpClientAdvancedSettings5_get_BitmapVirtualCache32BppSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMsRdpClientAdvancedSettings5_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClientAdvancedSettings6_INTERFACE_DEFINED__
#define __IMsRdpClientAdvancedSettings6_INTERFACE_DEFINED__

/* interface IMsRdpClientAdvancedSettings6 */
/* [oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClientAdvancedSettings6;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("222C4B5D-45D9-4DF0-A7C6-60CF9089D285")
    IMsRdpClientAdvancedSettings6 : public IMsRdpClientAdvancedSettings5
    {
    public:
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_RelativeMouseMode( 
            /* [in] */ VARIANT_BOOL pfRelativeMouseMode) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RelativeMouseMode( 
            /* [retval][out] */ VARIANT_BOOL *pfRelativeMouseMode) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_AuthenticationServiceClass( 
            /* [retval][out] */ BSTR *pbstrAuthServiceClass) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_AuthenticationServiceClass( 
            /* [in] */ BSTR pbstrAuthServiceClass) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PCB( 
            /* [retval][out] */ BSTR *bstrPCB) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PCB( 
            /* [in] */ BSTR bstrPCB) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_HotKeyFocusReleaseLeft( 
            /* [in] */ long HotKeyFocusReleaseLeft) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_HotKeyFocusReleaseLeft( 
            /* [retval][out] */ long *HotKeyFocusReleaseLeft) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_HotKeyFocusReleaseRight( 
            /* [in] */ long HotKeyFocusReleaseRight) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_HotKeyFocusReleaseRight( 
            /* [retval][out] */ long *HotKeyFocusReleaseRight) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_EnableCredSspSupport( 
            /* [in] */ VARIANT_BOOL pfEnableSupport) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_EnableCredSspSupport( 
            /* [retval][out] */ VARIANT_BOOL *pfEnableSupport) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_AuthenticationType( 
            /* [retval][out] */ unsigned int *puiAuthType) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_ConnectToAdministerServer( 
            /* [in] */ VARIANT_BOOL pConnectToAdministerServer) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ConnectToAdministerServer( 
            /* [retval][out] */ VARIANT_BOOL *pConnectToAdministerServer) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMsRdpClientAdvancedSettings6Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClientAdvancedSettings6 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClientAdvancedSettings6 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Compress )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long pcompress);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Compress )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *pcompress);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapPeristence )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long pbitmapPeristence);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapPeristence )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *pbitmapPeristence);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_allowBackgroundInput )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long pallowBackgroundInput);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_allowBackgroundInput )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *pallowBackgroundInput);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyBoardLayoutStr )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PluginDlls )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IconFile )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IconIndex )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ContainerHandledFullScreen )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long pContainerHandledFullScreen);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ContainerHandledFullScreen )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *pContainerHandledFullScreen);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisableRdpdr )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long pDisableRdpdr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisableRdpdr )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *pDisableRdpdr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SmoothScroll )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long psmoothScroll);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SmoothScroll )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *psmoothScroll);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AcceleratorPassthrough )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long pacceleratorPassthrough);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AcceleratorPassthrough )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *pacceleratorPassthrough);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ShadowBitmap )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long pshadowBitmap);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ShadowBitmap )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *pshadowBitmap);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TransportType )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long ptransportType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TransportType )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *ptransportType);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SasSequence )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long psasSequence);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SasSequence )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *psasSequence);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EncryptionEnabled )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long pencryptionEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EncryptionEnabled )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *pencryptionEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DedicatedTerminal )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long pdedicatedTerminal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DedicatedTerminal )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *pdedicatedTerminal);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RDPPort )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long prdpPort);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RDPPort )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *prdpPort);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EnableMouse )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long penableMouse);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EnableMouse )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *penableMouse);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisableCtrlAltDel )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long pdisableCtrlAltDel);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisableCtrlAltDel )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *pdisableCtrlAltDel);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EnableWindowsKey )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long penableWindowsKey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EnableWindowsKey )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *penableWindowsKey);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DoubleClickDetect )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long pdoubleClickDetect);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DoubleClickDetect )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *pdoubleClickDetect);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MaximizeShell )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long pmaximizeShell);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MaximizeShell )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *pmaximizeShell);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyFullScreen )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long photKeyFullScreen);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyFullScreen )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *photKeyFullScreen);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyCtrlEsc )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long photKeyCtrlEsc);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyCtrlEsc )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *photKeyCtrlEsc);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltEsc )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long photKeyAltEsc);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltEsc )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *photKeyAltEsc);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltTab )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long photKeyAltTab);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltTab )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *photKeyAltTab);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltShiftTab )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long photKeyAltShiftTab);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltShiftTab )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *photKeyAltShiftTab);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltSpace )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long photKeyAltSpace);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltSpace )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *photKeyAltSpace);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyCtrlAltDel )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long photKeyCtrlAltDel);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyCtrlAltDel )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *photKeyCtrlAltDel);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_orderDrawThreshold )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long porderDrawThreshold);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_orderDrawThreshold )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *porderDrawThreshold);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapCacheSize )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long pbitmapCacheSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapCacheSize )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *pbitmapCacheSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCacheSize )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long pbitmapVirtualCacheSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCacheSize )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *pbitmapVirtualCacheSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScaleBitmapCachesByBPP )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long pbScale);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScaleBitmapCachesByBPP )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *pbScale);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_NumBitmapCaches )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long pnumBitmapCaches);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NumBitmapCaches )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *pnumBitmapCaches);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_CachePersistenceActive )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long pcachePersistenceActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CachePersistenceActive )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *pcachePersistenceActive);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PersistCacheDirectory )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_brushSupportLevel )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long pbrushSupportLevel);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_brushSupportLevel )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *pbrushSupportLevel);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_minInputSendInterval )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long pminInputSendInterval);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_minInputSendInterval )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *pminInputSendInterval);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_InputEventsAtOnce )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long pinputEventsAtOnce);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InputEventsAtOnce )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *pinputEventsAtOnce);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_maxEventCount )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long pmaxEventCount);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_maxEventCount )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *pmaxEventCount);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_keepAliveInterval )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long pkeepAliveInterval);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_keepAliveInterval )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *pkeepAliveInterval);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_shutdownTimeout )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long pshutdownTimeout);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_shutdownTimeout )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *pshutdownTimeout);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_overallConnectionTimeout )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long poverallConnectionTimeout);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_overallConnectionTimeout )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *poverallConnectionTimeout);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_singleConnectionTimeout )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long psingleConnectionTimeout);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_singleConnectionTimeout )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *psingleConnectionTimeout);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardType )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long pkeyboardType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardType )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *pkeyboardType);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardSubType )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long pkeyboardSubType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardSubType )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *pkeyboardSubType);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardFunctionKey )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long pkeyboardFunctionKey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardFunctionKey )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *pkeyboardFunctionKey);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_WinceFixedPalette )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long pwinceFixedPalette);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_WinceFixedPalette )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *pwinceFixedPalette);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectToServerConsole )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL pConnectToConsole);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectToServerConsole )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pConnectToConsole);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapPersistence )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long pbitmapPersistence);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapPersistence )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *pbitmapPersistence);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MinutesToIdleTimeout )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long pminutesToIdleTimeout);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MinutesToIdleTimeout )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *pminutesToIdleTimeout);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SmartSizing )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL pfSmartSizing);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SmartSizing )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pfSmartSizing);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrLocalPrintingDocName )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ BSTR pLocalPrintingDocName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrLocalPrintingDocName )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ BSTR *pLocalPrintingDocName);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrClipCleanTempDirString )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ BSTR clipCleanTempDirString);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrClipCleanTempDirString )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ BSTR *clipCleanTempDirString);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrClipPasteInfoString )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ BSTR clipPasteInfoString);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrClipPasteInfoString )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ BSTR *clipPasteInfoString);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ClearTextPassword )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayConnectionBar )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL pDisplayConnectionBar);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayConnectionBar )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pDisplayConnectionBar);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PinConnectionBar )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL pPinConnectionBar);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PinConnectionBar )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pPinConnectionBar);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GrabFocusOnConnect )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL pfGrabFocusOnConnect);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GrabFocusOnConnect )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pfGrabFocusOnConnect);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_LoadBalanceInfo )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ BSTR pLBInfo);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LoadBalanceInfo )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ BSTR *pLBInfo);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectDrives )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL pRedirectDrives);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectDrives )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectDrives);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectPrinters )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL pRedirectPrinters);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectPrinters )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectPrinters);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectPorts )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL pRedirectPorts);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectPorts )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectPorts);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectSmartCards )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL pRedirectSmartCards);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectSmartCards )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectSmartCards);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCache16BppSize )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long pBitmapVirtualCache16BppSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCache16BppSize )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *pBitmapVirtualCache16BppSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCache24BppSize )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long pBitmapVirtualCache24BppSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCache24BppSize )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *pBitmapVirtualCache24BppSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PerformanceFlags )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long pDisableList);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PerformanceFlags )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *pDisableList);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectWithEndpoint )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT *rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_NotifyTSPublicKey )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL pfNotify);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NotifyTSPublicKey )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pfNotify);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CanAutoReconnect )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pfCanAutoReconnect);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EnableAutoReconnect )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL pfEnableAutoReconnect);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EnableAutoReconnect )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pfEnableAutoReconnect);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MaxReconnectAttempts )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long pMaxReconnectAttempts);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MaxReconnectAttempts )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *pMaxReconnectAttempts);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionBarShowMinimizeButton )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL pfShowMinimize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionBarShowMinimizeButton )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pfShowMinimize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionBarShowRestoreButton )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL pfShowRestore);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionBarShowRestoreButton )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pfShowRestore);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AuthenticationLevel )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ unsigned int puiAuthLevel);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AuthenticationLevel )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ unsigned int *puiAuthLevel);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectClipboard )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL pfRedirectClipboard);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectClipboard )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRedirectClipboard);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AudioRedirectionMode )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ unsigned int puiAudioRedirectionMode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AudioRedirectionMode )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ unsigned int *puiAudioRedirectionMode);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionBarShowPinButton )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL pfShowPin);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionBarShowPinButton )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pfShowPin);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PublicMode )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL pfPublicMode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PublicMode )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pfPublicMode);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectDevices )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL pfRedirectPnPDevices);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectDevices )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRedirectPnPDevices);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectPOSDevices )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL pfRedirectPOSDevices);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectPOSDevices )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRedirectPOSDevices);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCache32BppSize )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long pBitmapVirtualCache32BppSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCache32BppSize )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *pBitmapVirtualCache32BppSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RelativeMouseMode )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL pfRelativeMouseMode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RelativeMouseMode )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRelativeMouseMode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AuthenticationServiceClass )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ BSTR *pbstrAuthServiceClass);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AuthenticationServiceClass )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ BSTR pbstrAuthServiceClass);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PCB )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ BSTR *bstrPCB);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PCB )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ BSTR bstrPCB);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyFocusReleaseLeft )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long HotKeyFocusReleaseLeft);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyFocusReleaseLeft )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *HotKeyFocusReleaseLeft);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyFocusReleaseRight )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ long HotKeyFocusReleaseRight);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyFocusReleaseRight )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ long *HotKeyFocusReleaseRight);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EnableCredSspSupport )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL pfEnableSupport);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EnableCredSspSupport )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pfEnableSupport);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AuthenticationType )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ unsigned int *puiAuthType);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectToAdministerServer )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL pConnectToAdministerServer);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectToAdministerServer )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pConnectToAdministerServer);
        
        END_INTERFACE
    } IMsRdpClientAdvancedSettings6Vtbl;

    interface IMsRdpClientAdvancedSettings6
    {
        CONST_VTBL struct IMsRdpClientAdvancedSettings6Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClientAdvancedSettings6_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClientAdvancedSettings6_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClientAdvancedSettings6_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClientAdvancedSettings6_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClientAdvancedSettings6_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClientAdvancedSettings6_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClientAdvancedSettings6_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMsRdpClientAdvancedSettings6_put_Compress(This,pcompress)	\
    ( (This)->lpVtbl -> put_Compress(This,pcompress) ) 

#define IMsRdpClientAdvancedSettings6_get_Compress(This,pcompress)	\
    ( (This)->lpVtbl -> get_Compress(This,pcompress) ) 

#define IMsRdpClientAdvancedSettings6_put_BitmapPeristence(This,pbitmapPeristence)	\
    ( (This)->lpVtbl -> put_BitmapPeristence(This,pbitmapPeristence) ) 

#define IMsRdpClientAdvancedSettings6_get_BitmapPeristence(This,pbitmapPeristence)	\
    ( (This)->lpVtbl -> get_BitmapPeristence(This,pbitmapPeristence) ) 

#define IMsRdpClientAdvancedSettings6_put_allowBackgroundInput(This,pallowBackgroundInput)	\
    ( (This)->lpVtbl -> put_allowBackgroundInput(This,pallowBackgroundInput) ) 

#define IMsRdpClientAdvancedSettings6_get_allowBackgroundInput(This,pallowBackgroundInput)	\
    ( (This)->lpVtbl -> get_allowBackgroundInput(This,pallowBackgroundInput) ) 

#define IMsRdpClientAdvancedSettings6_put_KeyBoardLayoutStr(This,rhs)	\
    ( (This)->lpVtbl -> put_KeyBoardLayoutStr(This,rhs) ) 

#define IMsRdpClientAdvancedSettings6_put_PluginDlls(This,rhs)	\
    ( (This)->lpVtbl -> put_PluginDlls(This,rhs) ) 

#define IMsRdpClientAdvancedSettings6_put_IconFile(This,rhs)	\
    ( (This)->lpVtbl -> put_IconFile(This,rhs) ) 

#define IMsRdpClientAdvancedSettings6_put_IconIndex(This,rhs)	\
    ( (This)->lpVtbl -> put_IconIndex(This,rhs) ) 

#define IMsRdpClientAdvancedSettings6_put_ContainerHandledFullScreen(This,pContainerHandledFullScreen)	\
    ( (This)->lpVtbl -> put_ContainerHandledFullScreen(This,pContainerHandledFullScreen) ) 

#define IMsRdpClientAdvancedSettings6_get_ContainerHandledFullScreen(This,pContainerHandledFullScreen)	\
    ( (This)->lpVtbl -> get_ContainerHandledFullScreen(This,pContainerHandledFullScreen) ) 

#define IMsRdpClientAdvancedSettings6_put_DisableRdpdr(This,pDisableRdpdr)	\
    ( (This)->lpVtbl -> put_DisableRdpdr(This,pDisableRdpdr) ) 

#define IMsRdpClientAdvancedSettings6_get_DisableRdpdr(This,pDisableRdpdr)	\
    ( (This)->lpVtbl -> get_DisableRdpdr(This,pDisableRdpdr) ) 


#define IMsRdpClientAdvancedSettings6_put_SmoothScroll(This,psmoothScroll)	\
    ( (This)->lpVtbl -> put_SmoothScroll(This,psmoothScroll) ) 

#define IMsRdpClientAdvancedSettings6_get_SmoothScroll(This,psmoothScroll)	\
    ( (This)->lpVtbl -> get_SmoothScroll(This,psmoothScroll) ) 

#define IMsRdpClientAdvancedSettings6_put_AcceleratorPassthrough(This,pacceleratorPassthrough)	\
    ( (This)->lpVtbl -> put_AcceleratorPassthrough(This,pacceleratorPassthrough) ) 

#define IMsRdpClientAdvancedSettings6_get_AcceleratorPassthrough(This,pacceleratorPassthrough)	\
    ( (This)->lpVtbl -> get_AcceleratorPassthrough(This,pacceleratorPassthrough) ) 

#define IMsRdpClientAdvancedSettings6_put_ShadowBitmap(This,pshadowBitmap)	\
    ( (This)->lpVtbl -> put_ShadowBitmap(This,pshadowBitmap) ) 

#define IMsRdpClientAdvancedSettings6_get_ShadowBitmap(This,pshadowBitmap)	\
    ( (This)->lpVtbl -> get_ShadowBitmap(This,pshadowBitmap) ) 

#define IMsRdpClientAdvancedSettings6_put_TransportType(This,ptransportType)	\
    ( (This)->lpVtbl -> put_TransportType(This,ptransportType) ) 

#define IMsRdpClientAdvancedSettings6_get_TransportType(This,ptransportType)	\
    ( (This)->lpVtbl -> get_TransportType(This,ptransportType) ) 

#define IMsRdpClientAdvancedSettings6_put_SasSequence(This,psasSequence)	\
    ( (This)->lpVtbl -> put_SasSequence(This,psasSequence) ) 

#define IMsRdpClientAdvancedSettings6_get_SasSequence(This,psasSequence)	\
    ( (This)->lpVtbl -> get_SasSequence(This,psasSequence) ) 

#define IMsRdpClientAdvancedSettings6_put_EncryptionEnabled(This,pencryptionEnabled)	\
    ( (This)->lpVtbl -> put_EncryptionEnabled(This,pencryptionEnabled) ) 

#define IMsRdpClientAdvancedSettings6_get_EncryptionEnabled(This,pencryptionEnabled)	\
    ( (This)->lpVtbl -> get_EncryptionEnabled(This,pencryptionEnabled) ) 

#define IMsRdpClientAdvancedSettings6_put_DedicatedTerminal(This,pdedicatedTerminal)	\
    ( (This)->lpVtbl -> put_DedicatedTerminal(This,pdedicatedTerminal) ) 

#define IMsRdpClientAdvancedSettings6_get_DedicatedTerminal(This,pdedicatedTerminal)	\
    ( (This)->lpVtbl -> get_DedicatedTerminal(This,pdedicatedTerminal) ) 

#define IMsRdpClientAdvancedSettings6_put_RDPPort(This,prdpPort)	\
    ( (This)->lpVtbl -> put_RDPPort(This,prdpPort) ) 

#define IMsRdpClientAdvancedSettings6_get_RDPPort(This,prdpPort)	\
    ( (This)->lpVtbl -> get_RDPPort(This,prdpPort) ) 

#define IMsRdpClientAdvancedSettings6_put_EnableMouse(This,penableMouse)	\
    ( (This)->lpVtbl -> put_EnableMouse(This,penableMouse) ) 

#define IMsRdpClientAdvancedSettings6_get_EnableMouse(This,penableMouse)	\
    ( (This)->lpVtbl -> get_EnableMouse(This,penableMouse) ) 

#define IMsRdpClientAdvancedSettings6_put_DisableCtrlAltDel(This,pdisableCtrlAltDel)	\
    ( (This)->lpVtbl -> put_DisableCtrlAltDel(This,pdisableCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings6_get_DisableCtrlAltDel(This,pdisableCtrlAltDel)	\
    ( (This)->lpVtbl -> get_DisableCtrlAltDel(This,pdisableCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings6_put_EnableWindowsKey(This,penableWindowsKey)	\
    ( (This)->lpVtbl -> put_EnableWindowsKey(This,penableWindowsKey) ) 

#define IMsRdpClientAdvancedSettings6_get_EnableWindowsKey(This,penableWindowsKey)	\
    ( (This)->lpVtbl -> get_EnableWindowsKey(This,penableWindowsKey) ) 

#define IMsRdpClientAdvancedSettings6_put_DoubleClickDetect(This,pdoubleClickDetect)	\
    ( (This)->lpVtbl -> put_DoubleClickDetect(This,pdoubleClickDetect) ) 

#define IMsRdpClientAdvancedSettings6_get_DoubleClickDetect(This,pdoubleClickDetect)	\
    ( (This)->lpVtbl -> get_DoubleClickDetect(This,pdoubleClickDetect) ) 

#define IMsRdpClientAdvancedSettings6_put_MaximizeShell(This,pmaximizeShell)	\
    ( (This)->lpVtbl -> put_MaximizeShell(This,pmaximizeShell) ) 

#define IMsRdpClientAdvancedSettings6_get_MaximizeShell(This,pmaximizeShell)	\
    ( (This)->lpVtbl -> get_MaximizeShell(This,pmaximizeShell) ) 

#define IMsRdpClientAdvancedSettings6_put_HotKeyFullScreen(This,photKeyFullScreen)	\
    ( (This)->lpVtbl -> put_HotKeyFullScreen(This,photKeyFullScreen) ) 

#define IMsRdpClientAdvancedSettings6_get_HotKeyFullScreen(This,photKeyFullScreen)	\
    ( (This)->lpVtbl -> get_HotKeyFullScreen(This,photKeyFullScreen) ) 

#define IMsRdpClientAdvancedSettings6_put_HotKeyCtrlEsc(This,photKeyCtrlEsc)	\
    ( (This)->lpVtbl -> put_HotKeyCtrlEsc(This,photKeyCtrlEsc) ) 

#define IMsRdpClientAdvancedSettings6_get_HotKeyCtrlEsc(This,photKeyCtrlEsc)	\
    ( (This)->lpVtbl -> get_HotKeyCtrlEsc(This,photKeyCtrlEsc) ) 

#define IMsRdpClientAdvancedSettings6_put_HotKeyAltEsc(This,photKeyAltEsc)	\
    ( (This)->lpVtbl -> put_HotKeyAltEsc(This,photKeyAltEsc) ) 

#define IMsRdpClientAdvancedSettings6_get_HotKeyAltEsc(This,photKeyAltEsc)	\
    ( (This)->lpVtbl -> get_HotKeyAltEsc(This,photKeyAltEsc) ) 

#define IMsRdpClientAdvancedSettings6_put_HotKeyAltTab(This,photKeyAltTab)	\
    ( (This)->lpVtbl -> put_HotKeyAltTab(This,photKeyAltTab) ) 

#define IMsRdpClientAdvancedSettings6_get_HotKeyAltTab(This,photKeyAltTab)	\
    ( (This)->lpVtbl -> get_HotKeyAltTab(This,photKeyAltTab) ) 

#define IMsRdpClientAdvancedSettings6_put_HotKeyAltShiftTab(This,photKeyAltShiftTab)	\
    ( (This)->lpVtbl -> put_HotKeyAltShiftTab(This,photKeyAltShiftTab) ) 

#define IMsRdpClientAdvancedSettings6_get_HotKeyAltShiftTab(This,photKeyAltShiftTab)	\
    ( (This)->lpVtbl -> get_HotKeyAltShiftTab(This,photKeyAltShiftTab) ) 

#define IMsRdpClientAdvancedSettings6_put_HotKeyAltSpace(This,photKeyAltSpace)	\
    ( (This)->lpVtbl -> put_HotKeyAltSpace(This,photKeyAltSpace) ) 

#define IMsRdpClientAdvancedSettings6_get_HotKeyAltSpace(This,photKeyAltSpace)	\
    ( (This)->lpVtbl -> get_HotKeyAltSpace(This,photKeyAltSpace) ) 

#define IMsRdpClientAdvancedSettings6_put_HotKeyCtrlAltDel(This,photKeyCtrlAltDel)	\
    ( (This)->lpVtbl -> put_HotKeyCtrlAltDel(This,photKeyCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings6_get_HotKeyCtrlAltDel(This,photKeyCtrlAltDel)	\
    ( (This)->lpVtbl -> get_HotKeyCtrlAltDel(This,photKeyCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings6_put_orderDrawThreshold(This,porderDrawThreshold)	\
    ( (This)->lpVtbl -> put_orderDrawThreshold(This,porderDrawThreshold) ) 

#define IMsRdpClientAdvancedSettings6_get_orderDrawThreshold(This,porderDrawThreshold)	\
    ( (This)->lpVtbl -> get_orderDrawThreshold(This,porderDrawThreshold) ) 

#define IMsRdpClientAdvancedSettings6_put_BitmapCacheSize(This,pbitmapCacheSize)	\
    ( (This)->lpVtbl -> put_BitmapCacheSize(This,pbitmapCacheSize) ) 

#define IMsRdpClientAdvancedSettings6_get_BitmapCacheSize(This,pbitmapCacheSize)	\
    ( (This)->lpVtbl -> get_BitmapCacheSize(This,pbitmapCacheSize) ) 

#define IMsRdpClientAdvancedSettings6_put_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize)	\
    ( (This)->lpVtbl -> put_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize) ) 

#define IMsRdpClientAdvancedSettings6_get_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize)	\
    ( (This)->lpVtbl -> get_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize) ) 

#define IMsRdpClientAdvancedSettings6_put_ScaleBitmapCachesByBPP(This,pbScale)	\
    ( (This)->lpVtbl -> put_ScaleBitmapCachesByBPP(This,pbScale) ) 

#define IMsRdpClientAdvancedSettings6_get_ScaleBitmapCachesByBPP(This,pbScale)	\
    ( (This)->lpVtbl -> get_ScaleBitmapCachesByBPP(This,pbScale) ) 

#define IMsRdpClientAdvancedSettings6_put_NumBitmapCaches(This,pnumBitmapCaches)	\
    ( (This)->lpVtbl -> put_NumBitmapCaches(This,pnumBitmapCaches) ) 

#define IMsRdpClientAdvancedSettings6_get_NumBitmapCaches(This,pnumBitmapCaches)	\
    ( (This)->lpVtbl -> get_NumBitmapCaches(This,pnumBitmapCaches) ) 

#define IMsRdpClientAdvancedSettings6_put_CachePersistenceActive(This,pcachePersistenceActive)	\
    ( (This)->lpVtbl -> put_CachePersistenceActive(This,pcachePersistenceActive) ) 

#define IMsRdpClientAdvancedSettings6_get_CachePersistenceActive(This,pcachePersistenceActive)	\
    ( (This)->lpVtbl -> get_CachePersistenceActive(This,pcachePersistenceActive) ) 

#define IMsRdpClientAdvancedSettings6_put_PersistCacheDirectory(This,rhs)	\
    ( (This)->lpVtbl -> put_PersistCacheDirectory(This,rhs) ) 

#define IMsRdpClientAdvancedSettings6_put_brushSupportLevel(This,pbrushSupportLevel)	\
    ( (This)->lpVtbl -> put_brushSupportLevel(This,pbrushSupportLevel) ) 

#define IMsRdpClientAdvancedSettings6_get_brushSupportLevel(This,pbrushSupportLevel)	\
    ( (This)->lpVtbl -> get_brushSupportLevel(This,pbrushSupportLevel) ) 

#define IMsRdpClientAdvancedSettings6_put_minInputSendInterval(This,pminInputSendInterval)	\
    ( (This)->lpVtbl -> put_minInputSendInterval(This,pminInputSendInterval) ) 

#define IMsRdpClientAdvancedSettings6_get_minInputSendInterval(This,pminInputSendInterval)	\
    ( (This)->lpVtbl -> get_minInputSendInterval(This,pminInputSendInterval) ) 

#define IMsRdpClientAdvancedSettings6_put_InputEventsAtOnce(This,pinputEventsAtOnce)	\
    ( (This)->lpVtbl -> put_InputEventsAtOnce(This,pinputEventsAtOnce) ) 

#define IMsRdpClientAdvancedSettings6_get_InputEventsAtOnce(This,pinputEventsAtOnce)	\
    ( (This)->lpVtbl -> get_InputEventsAtOnce(This,pinputEventsAtOnce) ) 

#define IMsRdpClientAdvancedSettings6_put_maxEventCount(This,pmaxEventCount)	\
    ( (This)->lpVtbl -> put_maxEventCount(This,pmaxEventCount) ) 

#define IMsRdpClientAdvancedSettings6_get_maxEventCount(This,pmaxEventCount)	\
    ( (This)->lpVtbl -> get_maxEventCount(This,pmaxEventCount) ) 

#define IMsRdpClientAdvancedSettings6_put_keepAliveInterval(This,pkeepAliveInterval)	\
    ( (This)->lpVtbl -> put_keepAliveInterval(This,pkeepAliveInterval) ) 

#define IMsRdpClientAdvancedSettings6_get_keepAliveInterval(This,pkeepAliveInterval)	\
    ( (This)->lpVtbl -> get_keepAliveInterval(This,pkeepAliveInterval) ) 

#define IMsRdpClientAdvancedSettings6_put_shutdownTimeout(This,pshutdownTimeout)	\
    ( (This)->lpVtbl -> put_shutdownTimeout(This,pshutdownTimeout) ) 

#define IMsRdpClientAdvancedSettings6_get_shutdownTimeout(This,pshutdownTimeout)	\
    ( (This)->lpVtbl -> get_shutdownTimeout(This,pshutdownTimeout) ) 

#define IMsRdpClientAdvancedSettings6_put_overallConnectionTimeout(This,poverallConnectionTimeout)	\
    ( (This)->lpVtbl -> put_overallConnectionTimeout(This,poverallConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings6_get_overallConnectionTimeout(This,poverallConnectionTimeout)	\
    ( (This)->lpVtbl -> get_overallConnectionTimeout(This,poverallConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings6_put_singleConnectionTimeout(This,psingleConnectionTimeout)	\
    ( (This)->lpVtbl -> put_singleConnectionTimeout(This,psingleConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings6_get_singleConnectionTimeout(This,psingleConnectionTimeout)	\
    ( (This)->lpVtbl -> get_singleConnectionTimeout(This,psingleConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings6_put_KeyboardType(This,pkeyboardType)	\
    ( (This)->lpVtbl -> put_KeyboardType(This,pkeyboardType) ) 

#define IMsRdpClientAdvancedSettings6_get_KeyboardType(This,pkeyboardType)	\
    ( (This)->lpVtbl -> get_KeyboardType(This,pkeyboardType) ) 

#define IMsRdpClientAdvancedSettings6_put_KeyboardSubType(This,pkeyboardSubType)	\
    ( (This)->lpVtbl -> put_KeyboardSubType(This,pkeyboardSubType) ) 

#define IMsRdpClientAdvancedSettings6_get_KeyboardSubType(This,pkeyboardSubType)	\
    ( (This)->lpVtbl -> get_KeyboardSubType(This,pkeyboardSubType) ) 

#define IMsRdpClientAdvancedSettings6_put_KeyboardFunctionKey(This,pkeyboardFunctionKey)	\
    ( (This)->lpVtbl -> put_KeyboardFunctionKey(This,pkeyboardFunctionKey) ) 

#define IMsRdpClientAdvancedSettings6_get_KeyboardFunctionKey(This,pkeyboardFunctionKey)	\
    ( (This)->lpVtbl -> get_KeyboardFunctionKey(This,pkeyboardFunctionKey) ) 

#define IMsRdpClientAdvancedSettings6_put_WinceFixedPalette(This,pwinceFixedPalette)	\
    ( (This)->lpVtbl -> put_WinceFixedPalette(This,pwinceFixedPalette) ) 

#define IMsRdpClientAdvancedSettings6_get_WinceFixedPalette(This,pwinceFixedPalette)	\
    ( (This)->lpVtbl -> get_WinceFixedPalette(This,pwinceFixedPalette) ) 

#define IMsRdpClientAdvancedSettings6_put_ConnectToServerConsole(This,pConnectToConsole)	\
    ( (This)->lpVtbl -> put_ConnectToServerConsole(This,pConnectToConsole) ) 

#define IMsRdpClientAdvancedSettings6_get_ConnectToServerConsole(This,pConnectToConsole)	\
    ( (This)->lpVtbl -> get_ConnectToServerConsole(This,pConnectToConsole) ) 

#define IMsRdpClientAdvancedSettings6_put_BitmapPersistence(This,pbitmapPersistence)	\
    ( (This)->lpVtbl -> put_BitmapPersistence(This,pbitmapPersistence) ) 

#define IMsRdpClientAdvancedSettings6_get_BitmapPersistence(This,pbitmapPersistence)	\
    ( (This)->lpVtbl -> get_BitmapPersistence(This,pbitmapPersistence) ) 

#define IMsRdpClientAdvancedSettings6_put_MinutesToIdleTimeout(This,pminutesToIdleTimeout)	\
    ( (This)->lpVtbl -> put_MinutesToIdleTimeout(This,pminutesToIdleTimeout) ) 

#define IMsRdpClientAdvancedSettings6_get_MinutesToIdleTimeout(This,pminutesToIdleTimeout)	\
    ( (This)->lpVtbl -> get_MinutesToIdleTimeout(This,pminutesToIdleTimeout) ) 

#define IMsRdpClientAdvancedSettings6_put_SmartSizing(This,pfSmartSizing)	\
    ( (This)->lpVtbl -> put_SmartSizing(This,pfSmartSizing) ) 

#define IMsRdpClientAdvancedSettings6_get_SmartSizing(This,pfSmartSizing)	\
    ( (This)->lpVtbl -> get_SmartSizing(This,pfSmartSizing) ) 

#define IMsRdpClientAdvancedSettings6_put_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName)	\
    ( (This)->lpVtbl -> put_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName) ) 

#define IMsRdpClientAdvancedSettings6_get_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName)	\
    ( (This)->lpVtbl -> get_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName) ) 

#define IMsRdpClientAdvancedSettings6_put_RdpdrClipCleanTempDirString(This,clipCleanTempDirString)	\
    ( (This)->lpVtbl -> put_RdpdrClipCleanTempDirString(This,clipCleanTempDirString) ) 

#define IMsRdpClientAdvancedSettings6_get_RdpdrClipCleanTempDirString(This,clipCleanTempDirString)	\
    ( (This)->lpVtbl -> get_RdpdrClipCleanTempDirString(This,clipCleanTempDirString) ) 

#define IMsRdpClientAdvancedSettings6_put_RdpdrClipPasteInfoString(This,clipPasteInfoString)	\
    ( (This)->lpVtbl -> put_RdpdrClipPasteInfoString(This,clipPasteInfoString) ) 

#define IMsRdpClientAdvancedSettings6_get_RdpdrClipPasteInfoString(This,clipPasteInfoString)	\
    ( (This)->lpVtbl -> get_RdpdrClipPasteInfoString(This,clipPasteInfoString) ) 

#define IMsRdpClientAdvancedSettings6_put_ClearTextPassword(This,rhs)	\
    ( (This)->lpVtbl -> put_ClearTextPassword(This,rhs) ) 

#define IMsRdpClientAdvancedSettings6_put_DisplayConnectionBar(This,pDisplayConnectionBar)	\
    ( (This)->lpVtbl -> put_DisplayConnectionBar(This,pDisplayConnectionBar) ) 

#define IMsRdpClientAdvancedSettings6_get_DisplayConnectionBar(This,pDisplayConnectionBar)	\
    ( (This)->lpVtbl -> get_DisplayConnectionBar(This,pDisplayConnectionBar) ) 

#define IMsRdpClientAdvancedSettings6_put_PinConnectionBar(This,pPinConnectionBar)	\
    ( (This)->lpVtbl -> put_PinConnectionBar(This,pPinConnectionBar) ) 

#define IMsRdpClientAdvancedSettings6_get_PinConnectionBar(This,pPinConnectionBar)	\
    ( (This)->lpVtbl -> get_PinConnectionBar(This,pPinConnectionBar) ) 

#define IMsRdpClientAdvancedSettings6_put_GrabFocusOnConnect(This,pfGrabFocusOnConnect)	\
    ( (This)->lpVtbl -> put_GrabFocusOnConnect(This,pfGrabFocusOnConnect) ) 

#define IMsRdpClientAdvancedSettings6_get_GrabFocusOnConnect(This,pfGrabFocusOnConnect)	\
    ( (This)->lpVtbl -> get_GrabFocusOnConnect(This,pfGrabFocusOnConnect) ) 

#define IMsRdpClientAdvancedSettings6_put_LoadBalanceInfo(This,pLBInfo)	\
    ( (This)->lpVtbl -> put_LoadBalanceInfo(This,pLBInfo) ) 

#define IMsRdpClientAdvancedSettings6_get_LoadBalanceInfo(This,pLBInfo)	\
    ( (This)->lpVtbl -> get_LoadBalanceInfo(This,pLBInfo) ) 

#define IMsRdpClientAdvancedSettings6_put_RedirectDrives(This,pRedirectDrives)	\
    ( (This)->lpVtbl -> put_RedirectDrives(This,pRedirectDrives) ) 

#define IMsRdpClientAdvancedSettings6_get_RedirectDrives(This,pRedirectDrives)	\
    ( (This)->lpVtbl -> get_RedirectDrives(This,pRedirectDrives) ) 

#define IMsRdpClientAdvancedSettings6_put_RedirectPrinters(This,pRedirectPrinters)	\
    ( (This)->lpVtbl -> put_RedirectPrinters(This,pRedirectPrinters) ) 

#define IMsRdpClientAdvancedSettings6_get_RedirectPrinters(This,pRedirectPrinters)	\
    ( (This)->lpVtbl -> get_RedirectPrinters(This,pRedirectPrinters) ) 

#define IMsRdpClientAdvancedSettings6_put_RedirectPorts(This,pRedirectPorts)	\
    ( (This)->lpVtbl -> put_RedirectPorts(This,pRedirectPorts) ) 

#define IMsRdpClientAdvancedSettings6_get_RedirectPorts(This,pRedirectPorts)	\
    ( (This)->lpVtbl -> get_RedirectPorts(This,pRedirectPorts) ) 

#define IMsRdpClientAdvancedSettings6_put_RedirectSmartCards(This,pRedirectSmartCards)	\
    ( (This)->lpVtbl -> put_RedirectSmartCards(This,pRedirectSmartCards) ) 

#define IMsRdpClientAdvancedSettings6_get_RedirectSmartCards(This,pRedirectSmartCards)	\
    ( (This)->lpVtbl -> get_RedirectSmartCards(This,pRedirectSmartCards) ) 

#define IMsRdpClientAdvancedSettings6_put_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize)	\
    ( (This)->lpVtbl -> put_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize) ) 

#define IMsRdpClientAdvancedSettings6_get_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize)	\
    ( (This)->lpVtbl -> get_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize) ) 

#define IMsRdpClientAdvancedSettings6_put_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize)	\
    ( (This)->lpVtbl -> put_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize) ) 

#define IMsRdpClientAdvancedSettings6_get_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize)	\
    ( (This)->lpVtbl -> get_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize) ) 

#define IMsRdpClientAdvancedSettings6_put_PerformanceFlags(This,pDisableList)	\
    ( (This)->lpVtbl -> put_PerformanceFlags(This,pDisableList) ) 

#define IMsRdpClientAdvancedSettings6_get_PerformanceFlags(This,pDisableList)	\
    ( (This)->lpVtbl -> get_PerformanceFlags(This,pDisableList) ) 

#define IMsRdpClientAdvancedSettings6_put_ConnectWithEndpoint(This,rhs)	\
    ( (This)->lpVtbl -> put_ConnectWithEndpoint(This,rhs) ) 

#define IMsRdpClientAdvancedSettings6_put_NotifyTSPublicKey(This,pfNotify)	\
    ( (This)->lpVtbl -> put_NotifyTSPublicKey(This,pfNotify) ) 

#define IMsRdpClientAdvancedSettings6_get_NotifyTSPublicKey(This,pfNotify)	\
    ( (This)->lpVtbl -> get_NotifyTSPublicKey(This,pfNotify) ) 


#define IMsRdpClientAdvancedSettings6_get_CanAutoReconnect(This,pfCanAutoReconnect)	\
    ( (This)->lpVtbl -> get_CanAutoReconnect(This,pfCanAutoReconnect) ) 

#define IMsRdpClientAdvancedSettings6_put_EnableAutoReconnect(This,pfEnableAutoReconnect)	\
    ( (This)->lpVtbl -> put_EnableAutoReconnect(This,pfEnableAutoReconnect) ) 

#define IMsRdpClientAdvancedSettings6_get_EnableAutoReconnect(This,pfEnableAutoReconnect)	\
    ( (This)->lpVtbl -> get_EnableAutoReconnect(This,pfEnableAutoReconnect) ) 

#define IMsRdpClientAdvancedSettings6_put_MaxReconnectAttempts(This,pMaxReconnectAttempts)	\
    ( (This)->lpVtbl -> put_MaxReconnectAttempts(This,pMaxReconnectAttempts) ) 

#define IMsRdpClientAdvancedSettings6_get_MaxReconnectAttempts(This,pMaxReconnectAttempts)	\
    ( (This)->lpVtbl -> get_MaxReconnectAttempts(This,pMaxReconnectAttempts) ) 


#define IMsRdpClientAdvancedSettings6_put_ConnectionBarShowMinimizeButton(This,pfShowMinimize)	\
    ( (This)->lpVtbl -> put_ConnectionBarShowMinimizeButton(This,pfShowMinimize) ) 

#define IMsRdpClientAdvancedSettings6_get_ConnectionBarShowMinimizeButton(This,pfShowMinimize)	\
    ( (This)->lpVtbl -> get_ConnectionBarShowMinimizeButton(This,pfShowMinimize) ) 

#define IMsRdpClientAdvancedSettings6_put_ConnectionBarShowRestoreButton(This,pfShowRestore)	\
    ( (This)->lpVtbl -> put_ConnectionBarShowRestoreButton(This,pfShowRestore) ) 

#define IMsRdpClientAdvancedSettings6_get_ConnectionBarShowRestoreButton(This,pfShowRestore)	\
    ( (This)->lpVtbl -> get_ConnectionBarShowRestoreButton(This,pfShowRestore) ) 


#define IMsRdpClientAdvancedSettings6_put_AuthenticationLevel(This,puiAuthLevel)	\
    ( (This)->lpVtbl -> put_AuthenticationLevel(This,puiAuthLevel) ) 

#define IMsRdpClientAdvancedSettings6_get_AuthenticationLevel(This,puiAuthLevel)	\
    ( (This)->lpVtbl -> get_AuthenticationLevel(This,puiAuthLevel) ) 


#define IMsRdpClientAdvancedSettings6_put_RedirectClipboard(This,pfRedirectClipboard)	\
    ( (This)->lpVtbl -> put_RedirectClipboard(This,pfRedirectClipboard) ) 

#define IMsRdpClientAdvancedSettings6_get_RedirectClipboard(This,pfRedirectClipboard)	\
    ( (This)->lpVtbl -> get_RedirectClipboard(This,pfRedirectClipboard) ) 

#define IMsRdpClientAdvancedSettings6_put_AudioRedirectionMode(This,puiAudioRedirectionMode)	\
    ( (This)->lpVtbl -> put_AudioRedirectionMode(This,puiAudioRedirectionMode) ) 

#define IMsRdpClientAdvancedSettings6_get_AudioRedirectionMode(This,puiAudioRedirectionMode)	\
    ( (This)->lpVtbl -> get_AudioRedirectionMode(This,puiAudioRedirectionMode) ) 

#define IMsRdpClientAdvancedSettings6_put_ConnectionBarShowPinButton(This,pfShowPin)	\
    ( (This)->lpVtbl -> put_ConnectionBarShowPinButton(This,pfShowPin) ) 

#define IMsRdpClientAdvancedSettings6_get_ConnectionBarShowPinButton(This,pfShowPin)	\
    ( (This)->lpVtbl -> get_ConnectionBarShowPinButton(This,pfShowPin) ) 

#define IMsRdpClientAdvancedSettings6_put_PublicMode(This,pfPublicMode)	\
    ( (This)->lpVtbl -> put_PublicMode(This,pfPublicMode) ) 

#define IMsRdpClientAdvancedSettings6_get_PublicMode(This,pfPublicMode)	\
    ( (This)->lpVtbl -> get_PublicMode(This,pfPublicMode) ) 

#define IMsRdpClientAdvancedSettings6_put_RedirectDevices(This,pfRedirectPnPDevices)	\
    ( (This)->lpVtbl -> put_RedirectDevices(This,pfRedirectPnPDevices) ) 

#define IMsRdpClientAdvancedSettings6_get_RedirectDevices(This,pfRedirectPnPDevices)	\
    ( (This)->lpVtbl -> get_RedirectDevices(This,pfRedirectPnPDevices) ) 

#define IMsRdpClientAdvancedSettings6_put_RedirectPOSDevices(This,pfRedirectPOSDevices)	\
    ( (This)->lpVtbl -> put_RedirectPOSDevices(This,pfRedirectPOSDevices) ) 

#define IMsRdpClientAdvancedSettings6_get_RedirectPOSDevices(This,pfRedirectPOSDevices)	\
    ( (This)->lpVtbl -> get_RedirectPOSDevices(This,pfRedirectPOSDevices) ) 

#define IMsRdpClientAdvancedSettings6_put_BitmapVirtualCache32BppSize(This,pBitmapVirtualCache32BppSize)	\
    ( (This)->lpVtbl -> put_BitmapVirtualCache32BppSize(This,pBitmapVirtualCache32BppSize) ) 

#define IMsRdpClientAdvancedSettings6_get_BitmapVirtualCache32BppSize(This,pBitmapVirtualCache32BppSize)	\
    ( (This)->lpVtbl -> get_BitmapVirtualCache32BppSize(This,pBitmapVirtualCache32BppSize) ) 


#define IMsRdpClientAdvancedSettings6_put_RelativeMouseMode(This,pfRelativeMouseMode)	\
    ( (This)->lpVtbl -> put_RelativeMouseMode(This,pfRelativeMouseMode) ) 

#define IMsRdpClientAdvancedSettings6_get_RelativeMouseMode(This,pfRelativeMouseMode)	\
    ( (This)->lpVtbl -> get_RelativeMouseMode(This,pfRelativeMouseMode) ) 

#define IMsRdpClientAdvancedSettings6_get_AuthenticationServiceClass(This,pbstrAuthServiceClass)	\
    ( (This)->lpVtbl -> get_AuthenticationServiceClass(This,pbstrAuthServiceClass) ) 

#define IMsRdpClientAdvancedSettings6_put_AuthenticationServiceClass(This,pbstrAuthServiceClass)	\
    ( (This)->lpVtbl -> put_AuthenticationServiceClass(This,pbstrAuthServiceClass) ) 

#define IMsRdpClientAdvancedSettings6_get_PCB(This,bstrPCB)	\
    ( (This)->lpVtbl -> get_PCB(This,bstrPCB) ) 

#define IMsRdpClientAdvancedSettings6_put_PCB(This,bstrPCB)	\
    ( (This)->lpVtbl -> put_PCB(This,bstrPCB) ) 

#define IMsRdpClientAdvancedSettings6_put_HotKeyFocusReleaseLeft(This,HotKeyFocusReleaseLeft)	\
    ( (This)->lpVtbl -> put_HotKeyFocusReleaseLeft(This,HotKeyFocusReleaseLeft) ) 

#define IMsRdpClientAdvancedSettings6_get_HotKeyFocusReleaseLeft(This,HotKeyFocusReleaseLeft)	\
    ( (This)->lpVtbl -> get_HotKeyFocusReleaseLeft(This,HotKeyFocusReleaseLeft) ) 

#define IMsRdpClientAdvancedSettings6_put_HotKeyFocusReleaseRight(This,HotKeyFocusReleaseRight)	\
    ( (This)->lpVtbl -> put_HotKeyFocusReleaseRight(This,HotKeyFocusReleaseRight) ) 

#define IMsRdpClientAdvancedSettings6_get_HotKeyFocusReleaseRight(This,HotKeyFocusReleaseRight)	\
    ( (This)->lpVtbl -> get_HotKeyFocusReleaseRight(This,HotKeyFocusReleaseRight) ) 

#define IMsRdpClientAdvancedSettings6_put_EnableCredSspSupport(This,pfEnableSupport)	\
    ( (This)->lpVtbl -> put_EnableCredSspSupport(This,pfEnableSupport) ) 

#define IMsRdpClientAdvancedSettings6_get_EnableCredSspSupport(This,pfEnableSupport)	\
    ( (This)->lpVtbl -> get_EnableCredSspSupport(This,pfEnableSupport) ) 

#define IMsRdpClientAdvancedSettings6_get_AuthenticationType(This,puiAuthType)	\
    ( (This)->lpVtbl -> get_AuthenticationType(This,puiAuthType) ) 

#define IMsRdpClientAdvancedSettings6_put_ConnectToAdministerServer(This,pConnectToAdministerServer)	\
    ( (This)->lpVtbl -> put_ConnectToAdministerServer(This,pConnectToAdministerServer) ) 

#define IMsRdpClientAdvancedSettings6_get_ConnectToAdministerServer(This,pConnectToAdministerServer)	\
    ( (This)->lpVtbl -> get_ConnectToAdministerServer(This,pConnectToAdministerServer) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propput][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings6_put_RelativeMouseMode_Proxy( 
    IMsRdpClientAdvancedSettings6 * This,
    /* [in] */ VARIANT_BOOL pfRelativeMouseMode);


void __RPC_STUB IMsRdpClientAdvancedSettings6_put_RelativeMouseMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings6_get_RelativeMouseMode_Proxy( 
    IMsRdpClientAdvancedSettings6 * This,
    /* [retval][out] */ VARIANT_BOOL *pfRelativeMouseMode);


void __RPC_STUB IMsRdpClientAdvancedSettings6_get_RelativeMouseMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings6_get_AuthenticationServiceClass_Proxy( 
    IMsRdpClientAdvancedSettings6 * This,
    /* [retval][out] */ BSTR *pbstrAuthServiceClass);


void __RPC_STUB IMsRdpClientAdvancedSettings6_get_AuthenticationServiceClass_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings6_put_AuthenticationServiceClass_Proxy( 
    IMsRdpClientAdvancedSettings6 * This,
    /* [in] */ BSTR pbstrAuthServiceClass);


void __RPC_STUB IMsRdpClientAdvancedSettings6_put_AuthenticationServiceClass_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings6_get_PCB_Proxy( 
    IMsRdpClientAdvancedSettings6 * This,
    /* [retval][out] */ BSTR *bstrPCB);


void __RPC_STUB IMsRdpClientAdvancedSettings6_get_PCB_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings6_put_PCB_Proxy( 
    IMsRdpClientAdvancedSettings6 * This,
    /* [in] */ BSTR bstrPCB);


void __RPC_STUB IMsRdpClientAdvancedSettings6_put_PCB_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings6_put_HotKeyFocusReleaseLeft_Proxy( 
    IMsRdpClientAdvancedSettings6 * This,
    /* [in] */ long HotKeyFocusReleaseLeft);


void __RPC_STUB IMsRdpClientAdvancedSettings6_put_HotKeyFocusReleaseLeft_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings6_get_HotKeyFocusReleaseLeft_Proxy( 
    IMsRdpClientAdvancedSettings6 * This,
    /* [retval][out] */ long *HotKeyFocusReleaseLeft);


void __RPC_STUB IMsRdpClientAdvancedSettings6_get_HotKeyFocusReleaseLeft_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings6_put_HotKeyFocusReleaseRight_Proxy( 
    IMsRdpClientAdvancedSettings6 * This,
    /* [in] */ long HotKeyFocusReleaseRight);


void __RPC_STUB IMsRdpClientAdvancedSettings6_put_HotKeyFocusReleaseRight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings6_get_HotKeyFocusReleaseRight_Proxy( 
    IMsRdpClientAdvancedSettings6 * This,
    /* [retval][out] */ long *HotKeyFocusReleaseRight);


void __RPC_STUB IMsRdpClientAdvancedSettings6_get_HotKeyFocusReleaseRight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings6_put_EnableCredSspSupport_Proxy( 
    IMsRdpClientAdvancedSettings6 * This,
    /* [in] */ VARIANT_BOOL pfEnableSupport);


void __RPC_STUB IMsRdpClientAdvancedSettings6_put_EnableCredSspSupport_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings6_get_EnableCredSspSupport_Proxy( 
    IMsRdpClientAdvancedSettings6 * This,
    /* [retval][out] */ VARIANT_BOOL *pfEnableSupport);


void __RPC_STUB IMsRdpClientAdvancedSettings6_get_EnableCredSspSupport_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings6_get_AuthenticationType_Proxy( 
    IMsRdpClientAdvancedSettings6 * This,
    /* [retval][out] */ unsigned int *puiAuthType);


void __RPC_STUB IMsRdpClientAdvancedSettings6_get_AuthenticationType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings6_put_ConnectToAdministerServer_Proxy( 
    IMsRdpClientAdvancedSettings6 * This,
    /* [in] */ VARIANT_BOOL pConnectToAdministerServer);


void __RPC_STUB IMsRdpClientAdvancedSettings6_put_ConnectToAdministerServer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings6_get_ConnectToAdministerServer_Proxy( 
    IMsRdpClientAdvancedSettings6 * This,
    /* [retval][out] */ VARIANT_BOOL *pConnectToAdministerServer);


void __RPC_STUB IMsRdpClientAdvancedSettings6_get_ConnectToAdministerServer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMsRdpClientAdvancedSettings6_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClientAdvancedSettings7_INTERFACE_DEFINED__
#define __IMsRdpClientAdvancedSettings7_INTERFACE_DEFINED__

/* interface IMsRdpClientAdvancedSettings7 */
/* [oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClientAdvancedSettings7;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("26036036-4010-4578-8091-0DB9A1EDF9C3")
    IMsRdpClientAdvancedSettings7 : public IMsRdpClientAdvancedSettings6
    {
    public:
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_AudioCaptureRedirectionMode( 
            /* [in] */ VARIANT_BOOL pfRedir) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_AudioCaptureRedirectionMode( 
            /* [retval][out] */ VARIANT_BOOL *pfRedir) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_VideoPlaybackMode( 
            /* [in] */ unsigned int pVideoPlaybackMode) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_VideoPlaybackMode( 
            /* [retval][out] */ unsigned int *pVideoPlaybackMode) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_EnableSuperPan( 
            /* [in] */ VARIANT_BOOL pfEnableSuperPan) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_EnableSuperPan( 
            /* [retval][out] */ VARIANT_BOOL *pfEnableSuperPan) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_SuperPanAccelerationFactor( 
            /* [in] */ unsigned long puAccelFactor) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SuperPanAccelerationFactor( 
            /* [retval][out] */ unsigned long *puAccelFactor) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_NegotiateSecurityLayer( 
            /* [in] */ VARIANT_BOOL pfNegotiate) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_NegotiateSecurityLayer( 
            /* [retval][out] */ VARIANT_BOOL *pfNegotiate) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_AudioQualityMode( 
            /* [in] */ unsigned int pAudioQualityMode) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_AudioQualityMode( 
            /* [retval][out] */ unsigned int *pAudioQualityMode) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_RedirectDirectX( 
            /* [in] */ VARIANT_BOOL pfRedirectDirectX) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RedirectDirectX( 
            /* [retval][out] */ VARIANT_BOOL *pfRedirectDirectX) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_NetworkConnectionType( 
            /* [in] */ unsigned int pConnectionType) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_NetworkConnectionType( 
            /* [retval][out] */ unsigned int *pConnectionType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMsRdpClientAdvancedSettings7Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClientAdvancedSettings7 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClientAdvancedSettings7 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Compress )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long pcompress);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Compress )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *pcompress);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapPeristence )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long pbitmapPeristence);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapPeristence )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *pbitmapPeristence);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_allowBackgroundInput )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long pallowBackgroundInput);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_allowBackgroundInput )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *pallowBackgroundInput);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyBoardLayoutStr )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PluginDlls )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IconFile )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IconIndex )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ContainerHandledFullScreen )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long pContainerHandledFullScreen);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ContainerHandledFullScreen )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *pContainerHandledFullScreen);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisableRdpdr )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long pDisableRdpdr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisableRdpdr )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *pDisableRdpdr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SmoothScroll )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long psmoothScroll);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SmoothScroll )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *psmoothScroll);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AcceleratorPassthrough )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long pacceleratorPassthrough);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AcceleratorPassthrough )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *pacceleratorPassthrough);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ShadowBitmap )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long pshadowBitmap);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ShadowBitmap )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *pshadowBitmap);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TransportType )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long ptransportType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TransportType )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *ptransportType);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SasSequence )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long psasSequence);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SasSequence )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *psasSequence);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EncryptionEnabled )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long pencryptionEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EncryptionEnabled )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *pencryptionEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DedicatedTerminal )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long pdedicatedTerminal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DedicatedTerminal )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *pdedicatedTerminal);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RDPPort )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long prdpPort);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RDPPort )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *prdpPort);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EnableMouse )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long penableMouse);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EnableMouse )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *penableMouse);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisableCtrlAltDel )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long pdisableCtrlAltDel);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisableCtrlAltDel )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *pdisableCtrlAltDel);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EnableWindowsKey )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long penableWindowsKey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EnableWindowsKey )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *penableWindowsKey);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DoubleClickDetect )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long pdoubleClickDetect);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DoubleClickDetect )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *pdoubleClickDetect);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MaximizeShell )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long pmaximizeShell);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MaximizeShell )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *pmaximizeShell);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyFullScreen )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long photKeyFullScreen);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyFullScreen )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *photKeyFullScreen);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyCtrlEsc )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long photKeyCtrlEsc);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyCtrlEsc )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *photKeyCtrlEsc);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltEsc )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long photKeyAltEsc);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltEsc )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *photKeyAltEsc);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltTab )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long photKeyAltTab);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltTab )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *photKeyAltTab);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltShiftTab )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long photKeyAltShiftTab);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltShiftTab )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *photKeyAltShiftTab);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltSpace )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long photKeyAltSpace);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltSpace )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *photKeyAltSpace);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyCtrlAltDel )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long photKeyCtrlAltDel);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyCtrlAltDel )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *photKeyCtrlAltDel);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_orderDrawThreshold )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long porderDrawThreshold);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_orderDrawThreshold )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *porderDrawThreshold);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapCacheSize )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long pbitmapCacheSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapCacheSize )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *pbitmapCacheSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCacheSize )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long pbitmapVirtualCacheSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCacheSize )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *pbitmapVirtualCacheSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScaleBitmapCachesByBPP )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long pbScale);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScaleBitmapCachesByBPP )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *pbScale);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_NumBitmapCaches )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long pnumBitmapCaches);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NumBitmapCaches )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *pnumBitmapCaches);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_CachePersistenceActive )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long pcachePersistenceActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CachePersistenceActive )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *pcachePersistenceActive);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PersistCacheDirectory )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_brushSupportLevel )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long pbrushSupportLevel);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_brushSupportLevel )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *pbrushSupportLevel);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_minInputSendInterval )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long pminInputSendInterval);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_minInputSendInterval )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *pminInputSendInterval);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_InputEventsAtOnce )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long pinputEventsAtOnce);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InputEventsAtOnce )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *pinputEventsAtOnce);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_maxEventCount )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long pmaxEventCount);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_maxEventCount )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *pmaxEventCount);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_keepAliveInterval )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long pkeepAliveInterval);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_keepAliveInterval )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *pkeepAliveInterval);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_shutdownTimeout )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long pshutdownTimeout);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_shutdownTimeout )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *pshutdownTimeout);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_overallConnectionTimeout )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long poverallConnectionTimeout);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_overallConnectionTimeout )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *poverallConnectionTimeout);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_singleConnectionTimeout )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long psingleConnectionTimeout);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_singleConnectionTimeout )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *psingleConnectionTimeout);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardType )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long pkeyboardType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardType )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *pkeyboardType);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardSubType )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long pkeyboardSubType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardSubType )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *pkeyboardSubType);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardFunctionKey )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long pkeyboardFunctionKey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardFunctionKey )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *pkeyboardFunctionKey);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_WinceFixedPalette )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long pwinceFixedPalette);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_WinceFixedPalette )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *pwinceFixedPalette);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectToServerConsole )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL pConnectToConsole);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectToServerConsole )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pConnectToConsole);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapPersistence )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long pbitmapPersistence);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapPersistence )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *pbitmapPersistence);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MinutesToIdleTimeout )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long pminutesToIdleTimeout);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MinutesToIdleTimeout )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *pminutesToIdleTimeout);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SmartSizing )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL pfSmartSizing);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SmartSizing )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pfSmartSizing);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrLocalPrintingDocName )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ BSTR pLocalPrintingDocName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrLocalPrintingDocName )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ BSTR *pLocalPrintingDocName);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrClipCleanTempDirString )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ BSTR clipCleanTempDirString);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrClipCleanTempDirString )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ BSTR *clipCleanTempDirString);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrClipPasteInfoString )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ BSTR clipPasteInfoString);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrClipPasteInfoString )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ BSTR *clipPasteInfoString);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ClearTextPassword )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayConnectionBar )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL pDisplayConnectionBar);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayConnectionBar )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pDisplayConnectionBar);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PinConnectionBar )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL pPinConnectionBar);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PinConnectionBar )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pPinConnectionBar);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GrabFocusOnConnect )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL pfGrabFocusOnConnect);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GrabFocusOnConnect )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pfGrabFocusOnConnect);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_LoadBalanceInfo )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ BSTR pLBInfo);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LoadBalanceInfo )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ BSTR *pLBInfo);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectDrives )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL pRedirectDrives);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectDrives )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectDrives);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectPrinters )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL pRedirectPrinters);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectPrinters )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectPrinters);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectPorts )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL pRedirectPorts);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectPorts )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectPorts);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectSmartCards )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL pRedirectSmartCards);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectSmartCards )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectSmartCards);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCache16BppSize )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long pBitmapVirtualCache16BppSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCache16BppSize )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *pBitmapVirtualCache16BppSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCache24BppSize )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long pBitmapVirtualCache24BppSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCache24BppSize )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *pBitmapVirtualCache24BppSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PerformanceFlags )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long pDisableList);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PerformanceFlags )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *pDisableList);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectWithEndpoint )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT *rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_NotifyTSPublicKey )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL pfNotify);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NotifyTSPublicKey )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pfNotify);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CanAutoReconnect )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pfCanAutoReconnect);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EnableAutoReconnect )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL pfEnableAutoReconnect);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EnableAutoReconnect )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pfEnableAutoReconnect);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MaxReconnectAttempts )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long pMaxReconnectAttempts);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MaxReconnectAttempts )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *pMaxReconnectAttempts);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionBarShowMinimizeButton )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL pfShowMinimize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionBarShowMinimizeButton )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pfShowMinimize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionBarShowRestoreButton )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL pfShowRestore);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionBarShowRestoreButton )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pfShowRestore);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AuthenticationLevel )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ unsigned int puiAuthLevel);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AuthenticationLevel )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ unsigned int *puiAuthLevel);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectClipboard )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL pfRedirectClipboard);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectClipboard )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRedirectClipboard);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AudioRedirectionMode )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ unsigned int puiAudioRedirectionMode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AudioRedirectionMode )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ unsigned int *puiAudioRedirectionMode);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionBarShowPinButton )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL pfShowPin);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionBarShowPinButton )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pfShowPin);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PublicMode )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL pfPublicMode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PublicMode )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pfPublicMode);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectDevices )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL pfRedirectPnPDevices);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectDevices )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRedirectPnPDevices);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectPOSDevices )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL pfRedirectPOSDevices);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectPOSDevices )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRedirectPOSDevices);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCache32BppSize )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long pBitmapVirtualCache32BppSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCache32BppSize )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *pBitmapVirtualCache32BppSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RelativeMouseMode )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL pfRelativeMouseMode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RelativeMouseMode )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRelativeMouseMode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AuthenticationServiceClass )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ BSTR *pbstrAuthServiceClass);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AuthenticationServiceClass )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ BSTR pbstrAuthServiceClass);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PCB )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ BSTR *bstrPCB);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PCB )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ BSTR bstrPCB);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyFocusReleaseLeft )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long HotKeyFocusReleaseLeft);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyFocusReleaseLeft )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *HotKeyFocusReleaseLeft);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyFocusReleaseRight )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ long HotKeyFocusReleaseRight);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyFocusReleaseRight )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ long *HotKeyFocusReleaseRight);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EnableCredSspSupport )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL pfEnableSupport);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EnableCredSspSupport )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pfEnableSupport);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AuthenticationType )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ unsigned int *puiAuthType);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectToAdministerServer )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL pConnectToAdministerServer);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectToAdministerServer )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pConnectToAdministerServer);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AudioCaptureRedirectionMode )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL pfRedir);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AudioCaptureRedirectionMode )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRedir);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_VideoPlaybackMode )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ unsigned int pVideoPlaybackMode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VideoPlaybackMode )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ unsigned int *pVideoPlaybackMode);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EnableSuperPan )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL pfEnableSuperPan);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EnableSuperPan )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pfEnableSuperPan);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SuperPanAccelerationFactor )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ unsigned long puAccelFactor);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SuperPanAccelerationFactor )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ unsigned long *puAccelFactor);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_NegotiateSecurityLayer )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL pfNegotiate);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NegotiateSecurityLayer )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pfNegotiate);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AudioQualityMode )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ unsigned int pAudioQualityMode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AudioQualityMode )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ unsigned int *pAudioQualityMode);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectDirectX )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL pfRedirectDirectX);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectDirectX )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRedirectDirectX);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_NetworkConnectionType )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ unsigned int pConnectionType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NetworkConnectionType )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ unsigned int *pConnectionType);
        
        END_INTERFACE
    } IMsRdpClientAdvancedSettings7Vtbl;

    interface IMsRdpClientAdvancedSettings7
    {
        CONST_VTBL struct IMsRdpClientAdvancedSettings7Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClientAdvancedSettings7_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClientAdvancedSettings7_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClientAdvancedSettings7_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClientAdvancedSettings7_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClientAdvancedSettings7_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClientAdvancedSettings7_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClientAdvancedSettings7_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMsRdpClientAdvancedSettings7_put_Compress(This,pcompress)	\
    ( (This)->lpVtbl -> put_Compress(This,pcompress) ) 

#define IMsRdpClientAdvancedSettings7_get_Compress(This,pcompress)	\
    ( (This)->lpVtbl -> get_Compress(This,pcompress) ) 

#define IMsRdpClientAdvancedSettings7_put_BitmapPeristence(This,pbitmapPeristence)	\
    ( (This)->lpVtbl -> put_BitmapPeristence(This,pbitmapPeristence) ) 

#define IMsRdpClientAdvancedSettings7_get_BitmapPeristence(This,pbitmapPeristence)	\
    ( (This)->lpVtbl -> get_BitmapPeristence(This,pbitmapPeristence) ) 

#define IMsRdpClientAdvancedSettings7_put_allowBackgroundInput(This,pallowBackgroundInput)	\
    ( (This)->lpVtbl -> put_allowBackgroundInput(This,pallowBackgroundInput) ) 

#define IMsRdpClientAdvancedSettings7_get_allowBackgroundInput(This,pallowBackgroundInput)	\
    ( (This)->lpVtbl -> get_allowBackgroundInput(This,pallowBackgroundInput) ) 

#define IMsRdpClientAdvancedSettings7_put_KeyBoardLayoutStr(This,rhs)	\
    ( (This)->lpVtbl -> put_KeyBoardLayoutStr(This,rhs) ) 

#define IMsRdpClientAdvancedSettings7_put_PluginDlls(This,rhs)	\
    ( (This)->lpVtbl -> put_PluginDlls(This,rhs) ) 

#define IMsRdpClientAdvancedSettings7_put_IconFile(This,rhs)	\
    ( (This)->lpVtbl -> put_IconFile(This,rhs) ) 

#define IMsRdpClientAdvancedSettings7_put_IconIndex(This,rhs)	\
    ( (This)->lpVtbl -> put_IconIndex(This,rhs) ) 

#define IMsRdpClientAdvancedSettings7_put_ContainerHandledFullScreen(This,pContainerHandledFullScreen)	\
    ( (This)->lpVtbl -> put_ContainerHandledFullScreen(This,pContainerHandledFullScreen) ) 

#define IMsRdpClientAdvancedSettings7_get_ContainerHandledFullScreen(This,pContainerHandledFullScreen)	\
    ( (This)->lpVtbl -> get_ContainerHandledFullScreen(This,pContainerHandledFullScreen) ) 

#define IMsRdpClientAdvancedSettings7_put_DisableRdpdr(This,pDisableRdpdr)	\
    ( (This)->lpVtbl -> put_DisableRdpdr(This,pDisableRdpdr) ) 

#define IMsRdpClientAdvancedSettings7_get_DisableRdpdr(This,pDisableRdpdr)	\
    ( (This)->lpVtbl -> get_DisableRdpdr(This,pDisableRdpdr) ) 


#define IMsRdpClientAdvancedSettings7_put_SmoothScroll(This,psmoothScroll)	\
    ( (This)->lpVtbl -> put_SmoothScroll(This,psmoothScroll) ) 

#define IMsRdpClientAdvancedSettings7_get_SmoothScroll(This,psmoothScroll)	\
    ( (This)->lpVtbl -> get_SmoothScroll(This,psmoothScroll) ) 

#define IMsRdpClientAdvancedSettings7_put_AcceleratorPassthrough(This,pacceleratorPassthrough)	\
    ( (This)->lpVtbl -> put_AcceleratorPassthrough(This,pacceleratorPassthrough) ) 

#define IMsRdpClientAdvancedSettings7_get_AcceleratorPassthrough(This,pacceleratorPassthrough)	\
    ( (This)->lpVtbl -> get_AcceleratorPassthrough(This,pacceleratorPassthrough) ) 

#define IMsRdpClientAdvancedSettings7_put_ShadowBitmap(This,pshadowBitmap)	\
    ( (This)->lpVtbl -> put_ShadowBitmap(This,pshadowBitmap) ) 

#define IMsRdpClientAdvancedSettings7_get_ShadowBitmap(This,pshadowBitmap)	\
    ( (This)->lpVtbl -> get_ShadowBitmap(This,pshadowBitmap) ) 

#define IMsRdpClientAdvancedSettings7_put_TransportType(This,ptransportType)	\
    ( (This)->lpVtbl -> put_TransportType(This,ptransportType) ) 

#define IMsRdpClientAdvancedSettings7_get_TransportType(This,ptransportType)	\
    ( (This)->lpVtbl -> get_TransportType(This,ptransportType) ) 

#define IMsRdpClientAdvancedSettings7_put_SasSequence(This,psasSequence)	\
    ( (This)->lpVtbl -> put_SasSequence(This,psasSequence) ) 

#define IMsRdpClientAdvancedSettings7_get_SasSequence(This,psasSequence)	\
    ( (This)->lpVtbl -> get_SasSequence(This,psasSequence) ) 

#define IMsRdpClientAdvancedSettings7_put_EncryptionEnabled(This,pencryptionEnabled)	\
    ( (This)->lpVtbl -> put_EncryptionEnabled(This,pencryptionEnabled) ) 

#define IMsRdpClientAdvancedSettings7_get_EncryptionEnabled(This,pencryptionEnabled)	\
    ( (This)->lpVtbl -> get_EncryptionEnabled(This,pencryptionEnabled) ) 

#define IMsRdpClientAdvancedSettings7_put_DedicatedTerminal(This,pdedicatedTerminal)	\
    ( (This)->lpVtbl -> put_DedicatedTerminal(This,pdedicatedTerminal) ) 

#define IMsRdpClientAdvancedSettings7_get_DedicatedTerminal(This,pdedicatedTerminal)	\
    ( (This)->lpVtbl -> get_DedicatedTerminal(This,pdedicatedTerminal) ) 

#define IMsRdpClientAdvancedSettings7_put_RDPPort(This,prdpPort)	\
    ( (This)->lpVtbl -> put_RDPPort(This,prdpPort) ) 

#define IMsRdpClientAdvancedSettings7_get_RDPPort(This,prdpPort)	\
    ( (This)->lpVtbl -> get_RDPPort(This,prdpPort) ) 

#define IMsRdpClientAdvancedSettings7_put_EnableMouse(This,penableMouse)	\
    ( (This)->lpVtbl -> put_EnableMouse(This,penableMouse) ) 

#define IMsRdpClientAdvancedSettings7_get_EnableMouse(This,penableMouse)	\
    ( (This)->lpVtbl -> get_EnableMouse(This,penableMouse) ) 

#define IMsRdpClientAdvancedSettings7_put_DisableCtrlAltDel(This,pdisableCtrlAltDel)	\
    ( (This)->lpVtbl -> put_DisableCtrlAltDel(This,pdisableCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings7_get_DisableCtrlAltDel(This,pdisableCtrlAltDel)	\
    ( (This)->lpVtbl -> get_DisableCtrlAltDel(This,pdisableCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings7_put_EnableWindowsKey(This,penableWindowsKey)	\
    ( (This)->lpVtbl -> put_EnableWindowsKey(This,penableWindowsKey) ) 

#define IMsRdpClientAdvancedSettings7_get_EnableWindowsKey(This,penableWindowsKey)	\
    ( (This)->lpVtbl -> get_EnableWindowsKey(This,penableWindowsKey) ) 

#define IMsRdpClientAdvancedSettings7_put_DoubleClickDetect(This,pdoubleClickDetect)	\
    ( (This)->lpVtbl -> put_DoubleClickDetect(This,pdoubleClickDetect) ) 

#define IMsRdpClientAdvancedSettings7_get_DoubleClickDetect(This,pdoubleClickDetect)	\
    ( (This)->lpVtbl -> get_DoubleClickDetect(This,pdoubleClickDetect) ) 

#define IMsRdpClientAdvancedSettings7_put_MaximizeShell(This,pmaximizeShell)	\
    ( (This)->lpVtbl -> put_MaximizeShell(This,pmaximizeShell) ) 

#define IMsRdpClientAdvancedSettings7_get_MaximizeShell(This,pmaximizeShell)	\
    ( (This)->lpVtbl -> get_MaximizeShell(This,pmaximizeShell) ) 

#define IMsRdpClientAdvancedSettings7_put_HotKeyFullScreen(This,photKeyFullScreen)	\
    ( (This)->lpVtbl -> put_HotKeyFullScreen(This,photKeyFullScreen) ) 

#define IMsRdpClientAdvancedSettings7_get_HotKeyFullScreen(This,photKeyFullScreen)	\
    ( (This)->lpVtbl -> get_HotKeyFullScreen(This,photKeyFullScreen) ) 

#define IMsRdpClientAdvancedSettings7_put_HotKeyCtrlEsc(This,photKeyCtrlEsc)	\
    ( (This)->lpVtbl -> put_HotKeyCtrlEsc(This,photKeyCtrlEsc) ) 

#define IMsRdpClientAdvancedSettings7_get_HotKeyCtrlEsc(This,photKeyCtrlEsc)	\
    ( (This)->lpVtbl -> get_HotKeyCtrlEsc(This,photKeyCtrlEsc) ) 

#define IMsRdpClientAdvancedSettings7_put_HotKeyAltEsc(This,photKeyAltEsc)	\
    ( (This)->lpVtbl -> put_HotKeyAltEsc(This,photKeyAltEsc) ) 

#define IMsRdpClientAdvancedSettings7_get_HotKeyAltEsc(This,photKeyAltEsc)	\
    ( (This)->lpVtbl -> get_HotKeyAltEsc(This,photKeyAltEsc) ) 

#define IMsRdpClientAdvancedSettings7_put_HotKeyAltTab(This,photKeyAltTab)	\
    ( (This)->lpVtbl -> put_HotKeyAltTab(This,photKeyAltTab) ) 

#define IMsRdpClientAdvancedSettings7_get_HotKeyAltTab(This,photKeyAltTab)	\
    ( (This)->lpVtbl -> get_HotKeyAltTab(This,photKeyAltTab) ) 

#define IMsRdpClientAdvancedSettings7_put_HotKeyAltShiftTab(This,photKeyAltShiftTab)	\
    ( (This)->lpVtbl -> put_HotKeyAltShiftTab(This,photKeyAltShiftTab) ) 

#define IMsRdpClientAdvancedSettings7_get_HotKeyAltShiftTab(This,photKeyAltShiftTab)	\
    ( (This)->lpVtbl -> get_HotKeyAltShiftTab(This,photKeyAltShiftTab) ) 

#define IMsRdpClientAdvancedSettings7_put_HotKeyAltSpace(This,photKeyAltSpace)	\
    ( (This)->lpVtbl -> put_HotKeyAltSpace(This,photKeyAltSpace) ) 

#define IMsRdpClientAdvancedSettings7_get_HotKeyAltSpace(This,photKeyAltSpace)	\
    ( (This)->lpVtbl -> get_HotKeyAltSpace(This,photKeyAltSpace) ) 

#define IMsRdpClientAdvancedSettings7_put_HotKeyCtrlAltDel(This,photKeyCtrlAltDel)	\
    ( (This)->lpVtbl -> put_HotKeyCtrlAltDel(This,photKeyCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings7_get_HotKeyCtrlAltDel(This,photKeyCtrlAltDel)	\
    ( (This)->lpVtbl -> get_HotKeyCtrlAltDel(This,photKeyCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings7_put_orderDrawThreshold(This,porderDrawThreshold)	\
    ( (This)->lpVtbl -> put_orderDrawThreshold(This,porderDrawThreshold) ) 

#define IMsRdpClientAdvancedSettings7_get_orderDrawThreshold(This,porderDrawThreshold)	\
    ( (This)->lpVtbl -> get_orderDrawThreshold(This,porderDrawThreshold) ) 

#define IMsRdpClientAdvancedSettings7_put_BitmapCacheSize(This,pbitmapCacheSize)	\
    ( (This)->lpVtbl -> put_BitmapCacheSize(This,pbitmapCacheSize) ) 

#define IMsRdpClientAdvancedSettings7_get_BitmapCacheSize(This,pbitmapCacheSize)	\
    ( (This)->lpVtbl -> get_BitmapCacheSize(This,pbitmapCacheSize) ) 

#define IMsRdpClientAdvancedSettings7_put_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize)	\
    ( (This)->lpVtbl -> put_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize) ) 

#define IMsRdpClientAdvancedSettings7_get_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize)	\
    ( (This)->lpVtbl -> get_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize) ) 

#define IMsRdpClientAdvancedSettings7_put_ScaleBitmapCachesByBPP(This,pbScale)	\
    ( (This)->lpVtbl -> put_ScaleBitmapCachesByBPP(This,pbScale) ) 

#define IMsRdpClientAdvancedSettings7_get_ScaleBitmapCachesByBPP(This,pbScale)	\
    ( (This)->lpVtbl -> get_ScaleBitmapCachesByBPP(This,pbScale) ) 

#define IMsRdpClientAdvancedSettings7_put_NumBitmapCaches(This,pnumBitmapCaches)	\
    ( (This)->lpVtbl -> put_NumBitmapCaches(This,pnumBitmapCaches) ) 

#define IMsRdpClientAdvancedSettings7_get_NumBitmapCaches(This,pnumBitmapCaches)	\
    ( (This)->lpVtbl -> get_NumBitmapCaches(This,pnumBitmapCaches) ) 

#define IMsRdpClientAdvancedSettings7_put_CachePersistenceActive(This,pcachePersistenceActive)	\
    ( (This)->lpVtbl -> put_CachePersistenceActive(This,pcachePersistenceActive) ) 

#define IMsRdpClientAdvancedSettings7_get_CachePersistenceActive(This,pcachePersistenceActive)	\
    ( (This)->lpVtbl -> get_CachePersistenceActive(This,pcachePersistenceActive) ) 

#define IMsRdpClientAdvancedSettings7_put_PersistCacheDirectory(This,rhs)	\
    ( (This)->lpVtbl -> put_PersistCacheDirectory(This,rhs) ) 

#define IMsRdpClientAdvancedSettings7_put_brushSupportLevel(This,pbrushSupportLevel)	\
    ( (This)->lpVtbl -> put_brushSupportLevel(This,pbrushSupportLevel) ) 

#define IMsRdpClientAdvancedSettings7_get_brushSupportLevel(This,pbrushSupportLevel)	\
    ( (This)->lpVtbl -> get_brushSupportLevel(This,pbrushSupportLevel) ) 

#define IMsRdpClientAdvancedSettings7_put_minInputSendInterval(This,pminInputSendInterval)	\
    ( (This)->lpVtbl -> put_minInputSendInterval(This,pminInputSendInterval) ) 

#define IMsRdpClientAdvancedSettings7_get_minInputSendInterval(This,pminInputSendInterval)	\
    ( (This)->lpVtbl -> get_minInputSendInterval(This,pminInputSendInterval) ) 

#define IMsRdpClientAdvancedSettings7_put_InputEventsAtOnce(This,pinputEventsAtOnce)	\
    ( (This)->lpVtbl -> put_InputEventsAtOnce(This,pinputEventsAtOnce) ) 

#define IMsRdpClientAdvancedSettings7_get_InputEventsAtOnce(This,pinputEventsAtOnce)	\
    ( (This)->lpVtbl -> get_InputEventsAtOnce(This,pinputEventsAtOnce) ) 

#define IMsRdpClientAdvancedSettings7_put_maxEventCount(This,pmaxEventCount)	\
    ( (This)->lpVtbl -> put_maxEventCount(This,pmaxEventCount) ) 

#define IMsRdpClientAdvancedSettings7_get_maxEventCount(This,pmaxEventCount)	\
    ( (This)->lpVtbl -> get_maxEventCount(This,pmaxEventCount) ) 

#define IMsRdpClientAdvancedSettings7_put_keepAliveInterval(This,pkeepAliveInterval)	\
    ( (This)->lpVtbl -> put_keepAliveInterval(This,pkeepAliveInterval) ) 

#define IMsRdpClientAdvancedSettings7_get_keepAliveInterval(This,pkeepAliveInterval)	\
    ( (This)->lpVtbl -> get_keepAliveInterval(This,pkeepAliveInterval) ) 

#define IMsRdpClientAdvancedSettings7_put_shutdownTimeout(This,pshutdownTimeout)	\
    ( (This)->lpVtbl -> put_shutdownTimeout(This,pshutdownTimeout) ) 

#define IMsRdpClientAdvancedSettings7_get_shutdownTimeout(This,pshutdownTimeout)	\
    ( (This)->lpVtbl -> get_shutdownTimeout(This,pshutdownTimeout) ) 

#define IMsRdpClientAdvancedSettings7_put_overallConnectionTimeout(This,poverallConnectionTimeout)	\
    ( (This)->lpVtbl -> put_overallConnectionTimeout(This,poverallConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings7_get_overallConnectionTimeout(This,poverallConnectionTimeout)	\
    ( (This)->lpVtbl -> get_overallConnectionTimeout(This,poverallConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings7_put_singleConnectionTimeout(This,psingleConnectionTimeout)	\
    ( (This)->lpVtbl -> put_singleConnectionTimeout(This,psingleConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings7_get_singleConnectionTimeout(This,psingleConnectionTimeout)	\
    ( (This)->lpVtbl -> get_singleConnectionTimeout(This,psingleConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings7_put_KeyboardType(This,pkeyboardType)	\
    ( (This)->lpVtbl -> put_KeyboardType(This,pkeyboardType) ) 

#define IMsRdpClientAdvancedSettings7_get_KeyboardType(This,pkeyboardType)	\
    ( (This)->lpVtbl -> get_KeyboardType(This,pkeyboardType) ) 

#define IMsRdpClientAdvancedSettings7_put_KeyboardSubType(This,pkeyboardSubType)	\
    ( (This)->lpVtbl -> put_KeyboardSubType(This,pkeyboardSubType) ) 

#define IMsRdpClientAdvancedSettings7_get_KeyboardSubType(This,pkeyboardSubType)	\
    ( (This)->lpVtbl -> get_KeyboardSubType(This,pkeyboardSubType) ) 

#define IMsRdpClientAdvancedSettings7_put_KeyboardFunctionKey(This,pkeyboardFunctionKey)	\
    ( (This)->lpVtbl -> put_KeyboardFunctionKey(This,pkeyboardFunctionKey) ) 

#define IMsRdpClientAdvancedSettings7_get_KeyboardFunctionKey(This,pkeyboardFunctionKey)	\
    ( (This)->lpVtbl -> get_KeyboardFunctionKey(This,pkeyboardFunctionKey) ) 

#define IMsRdpClientAdvancedSettings7_put_WinceFixedPalette(This,pwinceFixedPalette)	\
    ( (This)->lpVtbl -> put_WinceFixedPalette(This,pwinceFixedPalette) ) 

#define IMsRdpClientAdvancedSettings7_get_WinceFixedPalette(This,pwinceFixedPalette)	\
    ( (This)->lpVtbl -> get_WinceFixedPalette(This,pwinceFixedPalette) ) 

#define IMsRdpClientAdvancedSettings7_put_ConnectToServerConsole(This,pConnectToConsole)	\
    ( (This)->lpVtbl -> put_ConnectToServerConsole(This,pConnectToConsole) ) 

#define IMsRdpClientAdvancedSettings7_get_ConnectToServerConsole(This,pConnectToConsole)	\
    ( (This)->lpVtbl -> get_ConnectToServerConsole(This,pConnectToConsole) ) 

#define IMsRdpClientAdvancedSettings7_put_BitmapPersistence(This,pbitmapPersistence)	\
    ( (This)->lpVtbl -> put_BitmapPersistence(This,pbitmapPersistence) ) 

#define IMsRdpClientAdvancedSettings7_get_BitmapPersistence(This,pbitmapPersistence)	\
    ( (This)->lpVtbl -> get_BitmapPersistence(This,pbitmapPersistence) ) 

#define IMsRdpClientAdvancedSettings7_put_MinutesToIdleTimeout(This,pminutesToIdleTimeout)	\
    ( (This)->lpVtbl -> put_MinutesToIdleTimeout(This,pminutesToIdleTimeout) ) 

#define IMsRdpClientAdvancedSettings7_get_MinutesToIdleTimeout(This,pminutesToIdleTimeout)	\
    ( (This)->lpVtbl -> get_MinutesToIdleTimeout(This,pminutesToIdleTimeout) ) 

#define IMsRdpClientAdvancedSettings7_put_SmartSizing(This,pfSmartSizing)	\
    ( (This)->lpVtbl -> put_SmartSizing(This,pfSmartSizing) ) 

#define IMsRdpClientAdvancedSettings7_get_SmartSizing(This,pfSmartSizing)	\
    ( (This)->lpVtbl -> get_SmartSizing(This,pfSmartSizing) ) 

#define IMsRdpClientAdvancedSettings7_put_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName)	\
    ( (This)->lpVtbl -> put_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName) ) 

#define IMsRdpClientAdvancedSettings7_get_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName)	\
    ( (This)->lpVtbl -> get_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName) ) 

#define IMsRdpClientAdvancedSettings7_put_RdpdrClipCleanTempDirString(This,clipCleanTempDirString)	\
    ( (This)->lpVtbl -> put_RdpdrClipCleanTempDirString(This,clipCleanTempDirString) ) 

#define IMsRdpClientAdvancedSettings7_get_RdpdrClipCleanTempDirString(This,clipCleanTempDirString)	\
    ( (This)->lpVtbl -> get_RdpdrClipCleanTempDirString(This,clipCleanTempDirString) ) 

#define IMsRdpClientAdvancedSettings7_put_RdpdrClipPasteInfoString(This,clipPasteInfoString)	\
    ( (This)->lpVtbl -> put_RdpdrClipPasteInfoString(This,clipPasteInfoString) ) 

#define IMsRdpClientAdvancedSettings7_get_RdpdrClipPasteInfoString(This,clipPasteInfoString)	\
    ( (This)->lpVtbl -> get_RdpdrClipPasteInfoString(This,clipPasteInfoString) ) 

#define IMsRdpClientAdvancedSettings7_put_ClearTextPassword(This,rhs)	\
    ( (This)->lpVtbl -> put_ClearTextPassword(This,rhs) ) 

#define IMsRdpClientAdvancedSettings7_put_DisplayConnectionBar(This,pDisplayConnectionBar)	\
    ( (This)->lpVtbl -> put_DisplayConnectionBar(This,pDisplayConnectionBar) ) 

#define IMsRdpClientAdvancedSettings7_get_DisplayConnectionBar(This,pDisplayConnectionBar)	\
    ( (This)->lpVtbl -> get_DisplayConnectionBar(This,pDisplayConnectionBar) ) 

#define IMsRdpClientAdvancedSettings7_put_PinConnectionBar(This,pPinConnectionBar)	\
    ( (This)->lpVtbl -> put_PinConnectionBar(This,pPinConnectionBar) ) 

#define IMsRdpClientAdvancedSettings7_get_PinConnectionBar(This,pPinConnectionBar)	\
    ( (This)->lpVtbl -> get_PinConnectionBar(This,pPinConnectionBar) ) 

#define IMsRdpClientAdvancedSettings7_put_GrabFocusOnConnect(This,pfGrabFocusOnConnect)	\
    ( (This)->lpVtbl -> put_GrabFocusOnConnect(This,pfGrabFocusOnConnect) ) 

#define IMsRdpClientAdvancedSettings7_get_GrabFocusOnConnect(This,pfGrabFocusOnConnect)	\
    ( (This)->lpVtbl -> get_GrabFocusOnConnect(This,pfGrabFocusOnConnect) ) 

#define IMsRdpClientAdvancedSettings7_put_LoadBalanceInfo(This,pLBInfo)	\
    ( (This)->lpVtbl -> put_LoadBalanceInfo(This,pLBInfo) ) 

#define IMsRdpClientAdvancedSettings7_get_LoadBalanceInfo(This,pLBInfo)	\
    ( (This)->lpVtbl -> get_LoadBalanceInfo(This,pLBInfo) ) 

#define IMsRdpClientAdvancedSettings7_put_RedirectDrives(This,pRedirectDrives)	\
    ( (This)->lpVtbl -> put_RedirectDrives(This,pRedirectDrives) ) 

#define IMsRdpClientAdvancedSettings7_get_RedirectDrives(This,pRedirectDrives)	\
    ( (This)->lpVtbl -> get_RedirectDrives(This,pRedirectDrives) ) 

#define IMsRdpClientAdvancedSettings7_put_RedirectPrinters(This,pRedirectPrinters)	\
    ( (This)->lpVtbl -> put_RedirectPrinters(This,pRedirectPrinters) ) 

#define IMsRdpClientAdvancedSettings7_get_RedirectPrinters(This,pRedirectPrinters)	\
    ( (This)->lpVtbl -> get_RedirectPrinters(This,pRedirectPrinters) ) 

#define IMsRdpClientAdvancedSettings7_put_RedirectPorts(This,pRedirectPorts)	\
    ( (This)->lpVtbl -> put_RedirectPorts(This,pRedirectPorts) ) 

#define IMsRdpClientAdvancedSettings7_get_RedirectPorts(This,pRedirectPorts)	\
    ( (This)->lpVtbl -> get_RedirectPorts(This,pRedirectPorts) ) 

#define IMsRdpClientAdvancedSettings7_put_RedirectSmartCards(This,pRedirectSmartCards)	\
    ( (This)->lpVtbl -> put_RedirectSmartCards(This,pRedirectSmartCards) ) 

#define IMsRdpClientAdvancedSettings7_get_RedirectSmartCards(This,pRedirectSmartCards)	\
    ( (This)->lpVtbl -> get_RedirectSmartCards(This,pRedirectSmartCards) ) 

#define IMsRdpClientAdvancedSettings7_put_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize)	\
    ( (This)->lpVtbl -> put_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize) ) 

#define IMsRdpClientAdvancedSettings7_get_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize)	\
    ( (This)->lpVtbl -> get_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize) ) 

#define IMsRdpClientAdvancedSettings7_put_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize)	\
    ( (This)->lpVtbl -> put_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize) ) 

#define IMsRdpClientAdvancedSettings7_get_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize)	\
    ( (This)->lpVtbl -> get_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize) ) 

#define IMsRdpClientAdvancedSettings7_put_PerformanceFlags(This,pDisableList)	\
    ( (This)->lpVtbl -> put_PerformanceFlags(This,pDisableList) ) 

#define IMsRdpClientAdvancedSettings7_get_PerformanceFlags(This,pDisableList)	\
    ( (This)->lpVtbl -> get_PerformanceFlags(This,pDisableList) ) 

#define IMsRdpClientAdvancedSettings7_put_ConnectWithEndpoint(This,rhs)	\
    ( (This)->lpVtbl -> put_ConnectWithEndpoint(This,rhs) ) 

#define IMsRdpClientAdvancedSettings7_put_NotifyTSPublicKey(This,pfNotify)	\
    ( (This)->lpVtbl -> put_NotifyTSPublicKey(This,pfNotify) ) 

#define IMsRdpClientAdvancedSettings7_get_NotifyTSPublicKey(This,pfNotify)	\
    ( (This)->lpVtbl -> get_NotifyTSPublicKey(This,pfNotify) ) 


#define IMsRdpClientAdvancedSettings7_get_CanAutoReconnect(This,pfCanAutoReconnect)	\
    ( (This)->lpVtbl -> get_CanAutoReconnect(This,pfCanAutoReconnect) ) 

#define IMsRdpClientAdvancedSettings7_put_EnableAutoReconnect(This,pfEnableAutoReconnect)	\
    ( (This)->lpVtbl -> put_EnableAutoReconnect(This,pfEnableAutoReconnect) ) 

#define IMsRdpClientAdvancedSettings7_get_EnableAutoReconnect(This,pfEnableAutoReconnect)	\
    ( (This)->lpVtbl -> get_EnableAutoReconnect(This,pfEnableAutoReconnect) ) 

#define IMsRdpClientAdvancedSettings7_put_MaxReconnectAttempts(This,pMaxReconnectAttempts)	\
    ( (This)->lpVtbl -> put_MaxReconnectAttempts(This,pMaxReconnectAttempts) ) 

#define IMsRdpClientAdvancedSettings7_get_MaxReconnectAttempts(This,pMaxReconnectAttempts)	\
    ( (This)->lpVtbl -> get_MaxReconnectAttempts(This,pMaxReconnectAttempts) ) 


#define IMsRdpClientAdvancedSettings7_put_ConnectionBarShowMinimizeButton(This,pfShowMinimize)	\
    ( (This)->lpVtbl -> put_ConnectionBarShowMinimizeButton(This,pfShowMinimize) ) 

#define IMsRdpClientAdvancedSettings7_get_ConnectionBarShowMinimizeButton(This,pfShowMinimize)	\
    ( (This)->lpVtbl -> get_ConnectionBarShowMinimizeButton(This,pfShowMinimize) ) 

#define IMsRdpClientAdvancedSettings7_put_ConnectionBarShowRestoreButton(This,pfShowRestore)	\
    ( (This)->lpVtbl -> put_ConnectionBarShowRestoreButton(This,pfShowRestore) ) 

#define IMsRdpClientAdvancedSettings7_get_ConnectionBarShowRestoreButton(This,pfShowRestore)	\
    ( (This)->lpVtbl -> get_ConnectionBarShowRestoreButton(This,pfShowRestore) ) 


#define IMsRdpClientAdvancedSettings7_put_AuthenticationLevel(This,puiAuthLevel)	\
    ( (This)->lpVtbl -> put_AuthenticationLevel(This,puiAuthLevel) ) 

#define IMsRdpClientAdvancedSettings7_get_AuthenticationLevel(This,puiAuthLevel)	\
    ( (This)->lpVtbl -> get_AuthenticationLevel(This,puiAuthLevel) ) 


#define IMsRdpClientAdvancedSettings7_put_RedirectClipboard(This,pfRedirectClipboard)	\
    ( (This)->lpVtbl -> put_RedirectClipboard(This,pfRedirectClipboard) ) 

#define IMsRdpClientAdvancedSettings7_get_RedirectClipboard(This,pfRedirectClipboard)	\
    ( (This)->lpVtbl -> get_RedirectClipboard(This,pfRedirectClipboard) ) 

#define IMsRdpClientAdvancedSettings7_put_AudioRedirectionMode(This,puiAudioRedirectionMode)	\
    ( (This)->lpVtbl -> put_AudioRedirectionMode(This,puiAudioRedirectionMode) ) 

#define IMsRdpClientAdvancedSettings7_get_AudioRedirectionMode(This,puiAudioRedirectionMode)	\
    ( (This)->lpVtbl -> get_AudioRedirectionMode(This,puiAudioRedirectionMode) ) 

#define IMsRdpClientAdvancedSettings7_put_ConnectionBarShowPinButton(This,pfShowPin)	\
    ( (This)->lpVtbl -> put_ConnectionBarShowPinButton(This,pfShowPin) ) 

#define IMsRdpClientAdvancedSettings7_get_ConnectionBarShowPinButton(This,pfShowPin)	\
    ( (This)->lpVtbl -> get_ConnectionBarShowPinButton(This,pfShowPin) ) 

#define IMsRdpClientAdvancedSettings7_put_PublicMode(This,pfPublicMode)	\
    ( (This)->lpVtbl -> put_PublicMode(This,pfPublicMode) ) 

#define IMsRdpClientAdvancedSettings7_get_PublicMode(This,pfPublicMode)	\
    ( (This)->lpVtbl -> get_PublicMode(This,pfPublicMode) ) 

#define IMsRdpClientAdvancedSettings7_put_RedirectDevices(This,pfRedirectPnPDevices)	\
    ( (This)->lpVtbl -> put_RedirectDevices(This,pfRedirectPnPDevices) ) 

#define IMsRdpClientAdvancedSettings7_get_RedirectDevices(This,pfRedirectPnPDevices)	\
    ( (This)->lpVtbl -> get_RedirectDevices(This,pfRedirectPnPDevices) ) 

#define IMsRdpClientAdvancedSettings7_put_RedirectPOSDevices(This,pfRedirectPOSDevices)	\
    ( (This)->lpVtbl -> put_RedirectPOSDevices(This,pfRedirectPOSDevices) ) 

#define IMsRdpClientAdvancedSettings7_get_RedirectPOSDevices(This,pfRedirectPOSDevices)	\
    ( (This)->lpVtbl -> get_RedirectPOSDevices(This,pfRedirectPOSDevices) ) 

#define IMsRdpClientAdvancedSettings7_put_BitmapVirtualCache32BppSize(This,pBitmapVirtualCache32BppSize)	\
    ( (This)->lpVtbl -> put_BitmapVirtualCache32BppSize(This,pBitmapVirtualCache32BppSize) ) 

#define IMsRdpClientAdvancedSettings7_get_BitmapVirtualCache32BppSize(This,pBitmapVirtualCache32BppSize)	\
    ( (This)->lpVtbl -> get_BitmapVirtualCache32BppSize(This,pBitmapVirtualCache32BppSize) ) 


#define IMsRdpClientAdvancedSettings7_put_RelativeMouseMode(This,pfRelativeMouseMode)	\
    ( (This)->lpVtbl -> put_RelativeMouseMode(This,pfRelativeMouseMode) ) 

#define IMsRdpClientAdvancedSettings7_get_RelativeMouseMode(This,pfRelativeMouseMode)	\
    ( (This)->lpVtbl -> get_RelativeMouseMode(This,pfRelativeMouseMode) ) 

#define IMsRdpClientAdvancedSettings7_get_AuthenticationServiceClass(This,pbstrAuthServiceClass)	\
    ( (This)->lpVtbl -> get_AuthenticationServiceClass(This,pbstrAuthServiceClass) ) 

#define IMsRdpClientAdvancedSettings7_put_AuthenticationServiceClass(This,pbstrAuthServiceClass)	\
    ( (This)->lpVtbl -> put_AuthenticationServiceClass(This,pbstrAuthServiceClass) ) 

#define IMsRdpClientAdvancedSettings7_get_PCB(This,bstrPCB)	\
    ( (This)->lpVtbl -> get_PCB(This,bstrPCB) ) 

#define IMsRdpClientAdvancedSettings7_put_PCB(This,bstrPCB)	\
    ( (This)->lpVtbl -> put_PCB(This,bstrPCB) ) 

#define IMsRdpClientAdvancedSettings7_put_HotKeyFocusReleaseLeft(This,HotKeyFocusReleaseLeft)	\
    ( (This)->lpVtbl -> put_HotKeyFocusReleaseLeft(This,HotKeyFocusReleaseLeft) ) 

#define IMsRdpClientAdvancedSettings7_get_HotKeyFocusReleaseLeft(This,HotKeyFocusReleaseLeft)	\
    ( (This)->lpVtbl -> get_HotKeyFocusReleaseLeft(This,HotKeyFocusReleaseLeft) ) 

#define IMsRdpClientAdvancedSettings7_put_HotKeyFocusReleaseRight(This,HotKeyFocusReleaseRight)	\
    ( (This)->lpVtbl -> put_HotKeyFocusReleaseRight(This,HotKeyFocusReleaseRight) ) 

#define IMsRdpClientAdvancedSettings7_get_HotKeyFocusReleaseRight(This,HotKeyFocusReleaseRight)	\
    ( (This)->lpVtbl -> get_HotKeyFocusReleaseRight(This,HotKeyFocusReleaseRight) ) 

#define IMsRdpClientAdvancedSettings7_put_EnableCredSspSupport(This,pfEnableSupport)	\
    ( (This)->lpVtbl -> put_EnableCredSspSupport(This,pfEnableSupport) ) 

#define IMsRdpClientAdvancedSettings7_get_EnableCredSspSupport(This,pfEnableSupport)	\
    ( (This)->lpVtbl -> get_EnableCredSspSupport(This,pfEnableSupport) ) 

#define IMsRdpClientAdvancedSettings7_get_AuthenticationType(This,puiAuthType)	\
    ( (This)->lpVtbl -> get_AuthenticationType(This,puiAuthType) ) 

#define IMsRdpClientAdvancedSettings7_put_ConnectToAdministerServer(This,pConnectToAdministerServer)	\
    ( (This)->lpVtbl -> put_ConnectToAdministerServer(This,pConnectToAdministerServer) ) 

#define IMsRdpClientAdvancedSettings7_get_ConnectToAdministerServer(This,pConnectToAdministerServer)	\
    ( (This)->lpVtbl -> get_ConnectToAdministerServer(This,pConnectToAdministerServer) ) 


#define IMsRdpClientAdvancedSettings7_put_AudioCaptureRedirectionMode(This,pfRedir)	\
    ( (This)->lpVtbl -> put_AudioCaptureRedirectionMode(This,pfRedir) ) 

#define IMsRdpClientAdvancedSettings7_get_AudioCaptureRedirectionMode(This,pfRedir)	\
    ( (This)->lpVtbl -> get_AudioCaptureRedirectionMode(This,pfRedir) ) 

#define IMsRdpClientAdvancedSettings7_put_VideoPlaybackMode(This,pVideoPlaybackMode)	\
    ( (This)->lpVtbl -> put_VideoPlaybackMode(This,pVideoPlaybackMode) ) 

#define IMsRdpClientAdvancedSettings7_get_VideoPlaybackMode(This,pVideoPlaybackMode)	\
    ( (This)->lpVtbl -> get_VideoPlaybackMode(This,pVideoPlaybackMode) ) 

#define IMsRdpClientAdvancedSettings7_put_EnableSuperPan(This,pfEnableSuperPan)	\
    ( (This)->lpVtbl -> put_EnableSuperPan(This,pfEnableSuperPan) ) 

#define IMsRdpClientAdvancedSettings7_get_EnableSuperPan(This,pfEnableSuperPan)	\
    ( (This)->lpVtbl -> get_EnableSuperPan(This,pfEnableSuperPan) ) 

#define IMsRdpClientAdvancedSettings7_put_SuperPanAccelerationFactor(This,puAccelFactor)	\
    ( (This)->lpVtbl -> put_SuperPanAccelerationFactor(This,puAccelFactor) ) 

#define IMsRdpClientAdvancedSettings7_get_SuperPanAccelerationFactor(This,puAccelFactor)	\
    ( (This)->lpVtbl -> get_SuperPanAccelerationFactor(This,puAccelFactor) ) 

#define IMsRdpClientAdvancedSettings7_put_NegotiateSecurityLayer(This,pfNegotiate)	\
    ( (This)->lpVtbl -> put_NegotiateSecurityLayer(This,pfNegotiate) ) 

#define IMsRdpClientAdvancedSettings7_get_NegotiateSecurityLayer(This,pfNegotiate)	\
    ( (This)->lpVtbl -> get_NegotiateSecurityLayer(This,pfNegotiate) ) 

#define IMsRdpClientAdvancedSettings7_put_AudioQualityMode(This,pAudioQualityMode)	\
    ( (This)->lpVtbl -> put_AudioQualityMode(This,pAudioQualityMode) ) 

#define IMsRdpClientAdvancedSettings7_get_AudioQualityMode(This,pAudioQualityMode)	\
    ( (This)->lpVtbl -> get_AudioQualityMode(This,pAudioQualityMode) ) 

#define IMsRdpClientAdvancedSettings7_put_RedirectDirectX(This,pfRedirectDirectX)	\
    ( (This)->lpVtbl -> put_RedirectDirectX(This,pfRedirectDirectX) ) 

#define IMsRdpClientAdvancedSettings7_get_RedirectDirectX(This,pfRedirectDirectX)	\
    ( (This)->lpVtbl -> get_RedirectDirectX(This,pfRedirectDirectX) ) 

#define IMsRdpClientAdvancedSettings7_put_NetworkConnectionType(This,pConnectionType)	\
    ( (This)->lpVtbl -> put_NetworkConnectionType(This,pConnectionType) ) 

#define IMsRdpClientAdvancedSettings7_get_NetworkConnectionType(This,pConnectionType)	\
    ( (This)->lpVtbl -> get_NetworkConnectionType(This,pConnectionType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propput][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings7_put_AudioCaptureRedirectionMode_Proxy( 
    IMsRdpClientAdvancedSettings7 * This,
    /* [in] */ VARIANT_BOOL pfRedir);


void __RPC_STUB IMsRdpClientAdvancedSettings7_put_AudioCaptureRedirectionMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings7_get_AudioCaptureRedirectionMode_Proxy( 
    IMsRdpClientAdvancedSettings7 * This,
    /* [retval][out] */ VARIANT_BOOL *pfRedir);


void __RPC_STUB IMsRdpClientAdvancedSettings7_get_AudioCaptureRedirectionMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings7_put_VideoPlaybackMode_Proxy( 
    IMsRdpClientAdvancedSettings7 * This,
    /* [in] */ unsigned int pVideoPlaybackMode);


void __RPC_STUB IMsRdpClientAdvancedSettings7_put_VideoPlaybackMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings7_get_VideoPlaybackMode_Proxy( 
    IMsRdpClientAdvancedSettings7 * This,
    /* [retval][out] */ unsigned int *pVideoPlaybackMode);


void __RPC_STUB IMsRdpClientAdvancedSettings7_get_VideoPlaybackMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings7_put_EnableSuperPan_Proxy( 
    IMsRdpClientAdvancedSettings7 * This,
    /* [in] */ VARIANT_BOOL pfEnableSuperPan);


void __RPC_STUB IMsRdpClientAdvancedSettings7_put_EnableSuperPan_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings7_get_EnableSuperPan_Proxy( 
    IMsRdpClientAdvancedSettings7 * This,
    /* [retval][out] */ VARIANT_BOOL *pfEnableSuperPan);


void __RPC_STUB IMsRdpClientAdvancedSettings7_get_EnableSuperPan_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings7_put_SuperPanAccelerationFactor_Proxy( 
    IMsRdpClientAdvancedSettings7 * This,
    /* [in] */ unsigned long puAccelFactor);


void __RPC_STUB IMsRdpClientAdvancedSettings7_put_SuperPanAccelerationFactor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings7_get_SuperPanAccelerationFactor_Proxy( 
    IMsRdpClientAdvancedSettings7 * This,
    /* [retval][out] */ unsigned long *puAccelFactor);


void __RPC_STUB IMsRdpClientAdvancedSettings7_get_SuperPanAccelerationFactor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings7_put_NegotiateSecurityLayer_Proxy( 
    IMsRdpClientAdvancedSettings7 * This,
    /* [in] */ VARIANT_BOOL pfNegotiate);


void __RPC_STUB IMsRdpClientAdvancedSettings7_put_NegotiateSecurityLayer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings7_get_NegotiateSecurityLayer_Proxy( 
    IMsRdpClientAdvancedSettings7 * This,
    /* [retval][out] */ VARIANT_BOOL *pfNegotiate);


void __RPC_STUB IMsRdpClientAdvancedSettings7_get_NegotiateSecurityLayer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings7_put_AudioQualityMode_Proxy( 
    IMsRdpClientAdvancedSettings7 * This,
    /* [in] */ unsigned int pAudioQualityMode);


void __RPC_STUB IMsRdpClientAdvancedSettings7_put_AudioQualityMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings7_get_AudioQualityMode_Proxy( 
    IMsRdpClientAdvancedSettings7 * This,
    /* [retval][out] */ unsigned int *pAudioQualityMode);


void __RPC_STUB IMsRdpClientAdvancedSettings7_get_AudioQualityMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings7_put_RedirectDirectX_Proxy( 
    IMsRdpClientAdvancedSettings7 * This,
    /* [in] */ VARIANT_BOOL pfRedirectDirectX);


void __RPC_STUB IMsRdpClientAdvancedSettings7_put_RedirectDirectX_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings7_get_RedirectDirectX_Proxy( 
    IMsRdpClientAdvancedSettings7 * This,
    /* [retval][out] */ VARIANT_BOOL *pfRedirectDirectX);


void __RPC_STUB IMsRdpClientAdvancedSettings7_get_RedirectDirectX_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings7_put_NetworkConnectionType_Proxy( 
    IMsRdpClientAdvancedSettings7 * This,
    /* [in] */ unsigned int pConnectionType);


void __RPC_STUB IMsRdpClientAdvancedSettings7_put_NetworkConnectionType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings7_get_NetworkConnectionType_Proxy( 
    IMsRdpClientAdvancedSettings7 * This,
    /* [retval][out] */ unsigned int *pConnectionType);


void __RPC_STUB IMsRdpClientAdvancedSettings7_get_NetworkConnectionType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMsRdpClientAdvancedSettings7_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClientAdvancedSettings8_INTERFACE_DEFINED__
#define __IMsRdpClientAdvancedSettings8_INTERFACE_DEFINED__

/* interface IMsRdpClientAdvancedSettings8 */
/* [oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClientAdvancedSettings8;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("89ACB528-2557-4D16-8625-226A30E97E9A")
    IMsRdpClientAdvancedSettings8 : public IMsRdpClientAdvancedSettings7
    {
    public:
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_BandwidthDetection( 
            /* [in] */ VARIANT_BOOL pfAutodetect) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_BandwidthDetection( 
            /* [retval][out] */ VARIANT_BOOL *pfAutodetect) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ClientProtocolSpec( 
            /* [in] */ ClientSpec pClientMode) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ClientProtocolSpec( 
            /* [retval][out] */ ClientSpec *pClientMode) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMsRdpClientAdvancedSettings8Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClientAdvancedSettings8 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClientAdvancedSettings8 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Compress )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long pcompress);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Compress )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *pcompress);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapPeristence )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long pbitmapPeristence);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapPeristence )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *pbitmapPeristence);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_allowBackgroundInput )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long pallowBackgroundInput);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_allowBackgroundInput )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *pallowBackgroundInput);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyBoardLayoutStr )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PluginDlls )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IconFile )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IconIndex )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ContainerHandledFullScreen )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long pContainerHandledFullScreen);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ContainerHandledFullScreen )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *pContainerHandledFullScreen);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisableRdpdr )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long pDisableRdpdr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisableRdpdr )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *pDisableRdpdr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SmoothScroll )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long psmoothScroll);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SmoothScroll )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *psmoothScroll);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AcceleratorPassthrough )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long pacceleratorPassthrough);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AcceleratorPassthrough )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *pacceleratorPassthrough);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ShadowBitmap )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long pshadowBitmap);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ShadowBitmap )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *pshadowBitmap);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TransportType )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long ptransportType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TransportType )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *ptransportType);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SasSequence )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long psasSequence);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SasSequence )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *psasSequence);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EncryptionEnabled )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long pencryptionEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EncryptionEnabled )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *pencryptionEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DedicatedTerminal )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long pdedicatedTerminal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DedicatedTerminal )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *pdedicatedTerminal);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RDPPort )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long prdpPort);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RDPPort )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *prdpPort);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EnableMouse )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long penableMouse);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EnableMouse )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *penableMouse);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisableCtrlAltDel )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long pdisableCtrlAltDel);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisableCtrlAltDel )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *pdisableCtrlAltDel);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EnableWindowsKey )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long penableWindowsKey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EnableWindowsKey )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *penableWindowsKey);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DoubleClickDetect )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long pdoubleClickDetect);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DoubleClickDetect )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *pdoubleClickDetect);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MaximizeShell )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long pmaximizeShell);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MaximizeShell )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *pmaximizeShell);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyFullScreen )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long photKeyFullScreen);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyFullScreen )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *photKeyFullScreen);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyCtrlEsc )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long photKeyCtrlEsc);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyCtrlEsc )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *photKeyCtrlEsc);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltEsc )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long photKeyAltEsc);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltEsc )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *photKeyAltEsc);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltTab )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long photKeyAltTab);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltTab )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *photKeyAltTab);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltShiftTab )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long photKeyAltShiftTab);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltShiftTab )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *photKeyAltShiftTab);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltSpace )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long photKeyAltSpace);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltSpace )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *photKeyAltSpace);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyCtrlAltDel )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long photKeyCtrlAltDel);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyCtrlAltDel )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *photKeyCtrlAltDel);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_orderDrawThreshold )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long porderDrawThreshold);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_orderDrawThreshold )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *porderDrawThreshold);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapCacheSize )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long pbitmapCacheSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapCacheSize )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *pbitmapCacheSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCacheSize )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long pbitmapVirtualCacheSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCacheSize )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *pbitmapVirtualCacheSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScaleBitmapCachesByBPP )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long pbScale);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScaleBitmapCachesByBPP )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *pbScale);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_NumBitmapCaches )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long pnumBitmapCaches);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NumBitmapCaches )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *pnumBitmapCaches);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_CachePersistenceActive )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long pcachePersistenceActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CachePersistenceActive )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *pcachePersistenceActive);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PersistCacheDirectory )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_brushSupportLevel )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long pbrushSupportLevel);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_brushSupportLevel )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *pbrushSupportLevel);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_minInputSendInterval )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long pminInputSendInterval);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_minInputSendInterval )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *pminInputSendInterval);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_InputEventsAtOnce )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long pinputEventsAtOnce);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InputEventsAtOnce )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *pinputEventsAtOnce);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_maxEventCount )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long pmaxEventCount);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_maxEventCount )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *pmaxEventCount);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_keepAliveInterval )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long pkeepAliveInterval);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_keepAliveInterval )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *pkeepAliveInterval);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_shutdownTimeout )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long pshutdownTimeout);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_shutdownTimeout )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *pshutdownTimeout);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_overallConnectionTimeout )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long poverallConnectionTimeout);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_overallConnectionTimeout )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *poverallConnectionTimeout);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_singleConnectionTimeout )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long psingleConnectionTimeout);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_singleConnectionTimeout )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *psingleConnectionTimeout);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardType )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long pkeyboardType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardType )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *pkeyboardType);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardSubType )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long pkeyboardSubType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardSubType )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *pkeyboardSubType);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardFunctionKey )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long pkeyboardFunctionKey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardFunctionKey )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *pkeyboardFunctionKey);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_WinceFixedPalette )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long pwinceFixedPalette);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_WinceFixedPalette )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *pwinceFixedPalette);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectToServerConsole )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ VARIANT_BOOL pConnectToConsole);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectToServerConsole )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ VARIANT_BOOL *pConnectToConsole);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapPersistence )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long pbitmapPersistence);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapPersistence )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *pbitmapPersistence);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MinutesToIdleTimeout )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long pminutesToIdleTimeout);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MinutesToIdleTimeout )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *pminutesToIdleTimeout);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SmartSizing )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ VARIANT_BOOL pfSmartSizing);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SmartSizing )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ VARIANT_BOOL *pfSmartSizing);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrLocalPrintingDocName )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ BSTR pLocalPrintingDocName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrLocalPrintingDocName )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ BSTR *pLocalPrintingDocName);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrClipCleanTempDirString )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ BSTR clipCleanTempDirString);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrClipCleanTempDirString )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ BSTR *clipCleanTempDirString);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrClipPasteInfoString )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ BSTR clipPasteInfoString);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrClipPasteInfoString )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ BSTR *clipPasteInfoString);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ClearTextPassword )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayConnectionBar )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ VARIANT_BOOL pDisplayConnectionBar);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayConnectionBar )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ VARIANT_BOOL *pDisplayConnectionBar);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PinConnectionBar )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ VARIANT_BOOL pPinConnectionBar);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PinConnectionBar )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ VARIANT_BOOL *pPinConnectionBar);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GrabFocusOnConnect )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ VARIANT_BOOL pfGrabFocusOnConnect);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GrabFocusOnConnect )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ VARIANT_BOOL *pfGrabFocusOnConnect);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_LoadBalanceInfo )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ BSTR pLBInfo);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LoadBalanceInfo )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ BSTR *pLBInfo);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectDrives )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ VARIANT_BOOL pRedirectDrives);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectDrives )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectDrives);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectPrinters )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ VARIANT_BOOL pRedirectPrinters);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectPrinters )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectPrinters);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectPorts )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ VARIANT_BOOL pRedirectPorts);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectPorts )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectPorts);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectSmartCards )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ VARIANT_BOOL pRedirectSmartCards);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectSmartCards )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectSmartCards);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCache16BppSize )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long pBitmapVirtualCache16BppSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCache16BppSize )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *pBitmapVirtualCache16BppSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCache24BppSize )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long pBitmapVirtualCache24BppSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCache24BppSize )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *pBitmapVirtualCache24BppSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PerformanceFlags )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long pDisableList);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PerformanceFlags )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *pDisableList);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectWithEndpoint )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ VARIANT *rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_NotifyTSPublicKey )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ VARIANT_BOOL pfNotify);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NotifyTSPublicKey )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ VARIANT_BOOL *pfNotify);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CanAutoReconnect )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ VARIANT_BOOL *pfCanAutoReconnect);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EnableAutoReconnect )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ VARIANT_BOOL pfEnableAutoReconnect);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EnableAutoReconnect )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ VARIANT_BOOL *pfEnableAutoReconnect);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MaxReconnectAttempts )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long pMaxReconnectAttempts);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MaxReconnectAttempts )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *pMaxReconnectAttempts);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionBarShowMinimizeButton )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ VARIANT_BOOL pfShowMinimize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionBarShowMinimizeButton )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ VARIANT_BOOL *pfShowMinimize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionBarShowRestoreButton )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ VARIANT_BOOL pfShowRestore);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionBarShowRestoreButton )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ VARIANT_BOOL *pfShowRestore);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AuthenticationLevel )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ unsigned int puiAuthLevel);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AuthenticationLevel )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ unsigned int *puiAuthLevel);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectClipboard )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ VARIANT_BOOL pfRedirectClipboard);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectClipboard )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRedirectClipboard);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AudioRedirectionMode )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ unsigned int puiAudioRedirectionMode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AudioRedirectionMode )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ unsigned int *puiAudioRedirectionMode);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionBarShowPinButton )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ VARIANT_BOOL pfShowPin);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionBarShowPinButton )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ VARIANT_BOOL *pfShowPin);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PublicMode )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ VARIANT_BOOL pfPublicMode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PublicMode )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ VARIANT_BOOL *pfPublicMode);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectDevices )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ VARIANT_BOOL pfRedirectPnPDevices);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectDevices )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRedirectPnPDevices);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectPOSDevices )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ VARIANT_BOOL pfRedirectPOSDevices);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectPOSDevices )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRedirectPOSDevices);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCache32BppSize )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long pBitmapVirtualCache32BppSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCache32BppSize )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *pBitmapVirtualCache32BppSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RelativeMouseMode )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ VARIANT_BOOL pfRelativeMouseMode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RelativeMouseMode )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRelativeMouseMode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AuthenticationServiceClass )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ BSTR *pbstrAuthServiceClass);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AuthenticationServiceClass )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ BSTR pbstrAuthServiceClass);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PCB )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ BSTR *bstrPCB);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PCB )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ BSTR bstrPCB);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyFocusReleaseLeft )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long HotKeyFocusReleaseLeft);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyFocusReleaseLeft )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *HotKeyFocusReleaseLeft);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyFocusReleaseRight )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ long HotKeyFocusReleaseRight);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyFocusReleaseRight )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ long *HotKeyFocusReleaseRight);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EnableCredSspSupport )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ VARIANT_BOOL pfEnableSupport);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EnableCredSspSupport )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ VARIANT_BOOL *pfEnableSupport);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AuthenticationType )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ unsigned int *puiAuthType);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectToAdministerServer )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ VARIANT_BOOL pConnectToAdministerServer);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectToAdministerServer )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ VARIANT_BOOL *pConnectToAdministerServer);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AudioCaptureRedirectionMode )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ VARIANT_BOOL pfRedir);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AudioCaptureRedirectionMode )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRedir);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_VideoPlaybackMode )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ unsigned int pVideoPlaybackMode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VideoPlaybackMode )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ unsigned int *pVideoPlaybackMode);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EnableSuperPan )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ VARIANT_BOOL pfEnableSuperPan);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EnableSuperPan )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ VARIANT_BOOL *pfEnableSuperPan);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SuperPanAccelerationFactor )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ unsigned long puAccelFactor);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SuperPanAccelerationFactor )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ unsigned long *puAccelFactor);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_NegotiateSecurityLayer )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ VARIANT_BOOL pfNegotiate);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NegotiateSecurityLayer )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ VARIANT_BOOL *pfNegotiate);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AudioQualityMode )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ unsigned int pAudioQualityMode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AudioQualityMode )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ unsigned int *pAudioQualityMode);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectDirectX )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ VARIANT_BOOL pfRedirectDirectX);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectDirectX )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRedirectDirectX);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_NetworkConnectionType )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ unsigned int pConnectionType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NetworkConnectionType )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ unsigned int *pConnectionType);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BandwidthDetection )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ VARIANT_BOOL pfAutodetect);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BandwidthDetection )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ VARIANT_BOOL *pfAutodetect);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ClientProtocolSpec )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [in] */ ClientSpec pClientMode);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClientProtocolSpec )( 
            IMsRdpClientAdvancedSettings8 * This,
            /* [retval][out] */ ClientSpec *pClientMode);
        
        END_INTERFACE
    } IMsRdpClientAdvancedSettings8Vtbl;

    interface IMsRdpClientAdvancedSettings8
    {
        CONST_VTBL struct IMsRdpClientAdvancedSettings8Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClientAdvancedSettings8_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClientAdvancedSettings8_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClientAdvancedSettings8_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClientAdvancedSettings8_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClientAdvancedSettings8_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClientAdvancedSettings8_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClientAdvancedSettings8_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMsRdpClientAdvancedSettings8_put_Compress(This,pcompress)	\
    ( (This)->lpVtbl -> put_Compress(This,pcompress) ) 

#define IMsRdpClientAdvancedSettings8_get_Compress(This,pcompress)	\
    ( (This)->lpVtbl -> get_Compress(This,pcompress) ) 

#define IMsRdpClientAdvancedSettings8_put_BitmapPeristence(This,pbitmapPeristence)	\
    ( (This)->lpVtbl -> put_BitmapPeristence(This,pbitmapPeristence) ) 

#define IMsRdpClientAdvancedSettings8_get_BitmapPeristence(This,pbitmapPeristence)	\
    ( (This)->lpVtbl -> get_BitmapPeristence(This,pbitmapPeristence) ) 

#define IMsRdpClientAdvancedSettings8_put_allowBackgroundInput(This,pallowBackgroundInput)	\
    ( (This)->lpVtbl -> put_allowBackgroundInput(This,pallowBackgroundInput) ) 

#define IMsRdpClientAdvancedSettings8_get_allowBackgroundInput(This,pallowBackgroundInput)	\
    ( (This)->lpVtbl -> get_allowBackgroundInput(This,pallowBackgroundInput) ) 

#define IMsRdpClientAdvancedSettings8_put_KeyBoardLayoutStr(This,rhs)	\
    ( (This)->lpVtbl -> put_KeyBoardLayoutStr(This,rhs) ) 

#define IMsRdpClientAdvancedSettings8_put_PluginDlls(This,rhs)	\
    ( (This)->lpVtbl -> put_PluginDlls(This,rhs) ) 

#define IMsRdpClientAdvancedSettings8_put_IconFile(This,rhs)	\
    ( (This)->lpVtbl -> put_IconFile(This,rhs) ) 

#define IMsRdpClientAdvancedSettings8_put_IconIndex(This,rhs)	\
    ( (This)->lpVtbl -> put_IconIndex(This,rhs) ) 

#define IMsRdpClientAdvancedSettings8_put_ContainerHandledFullScreen(This,pContainerHandledFullScreen)	\
    ( (This)->lpVtbl -> put_ContainerHandledFullScreen(This,pContainerHandledFullScreen) ) 

#define IMsRdpClientAdvancedSettings8_get_ContainerHandledFullScreen(This,pContainerHandledFullScreen)	\
    ( (This)->lpVtbl -> get_ContainerHandledFullScreen(This,pContainerHandledFullScreen) ) 

#define IMsRdpClientAdvancedSettings8_put_DisableRdpdr(This,pDisableRdpdr)	\
    ( (This)->lpVtbl -> put_DisableRdpdr(This,pDisableRdpdr) ) 

#define IMsRdpClientAdvancedSettings8_get_DisableRdpdr(This,pDisableRdpdr)	\
    ( (This)->lpVtbl -> get_DisableRdpdr(This,pDisableRdpdr) ) 


#define IMsRdpClientAdvancedSettings8_put_SmoothScroll(This,psmoothScroll)	\
    ( (This)->lpVtbl -> put_SmoothScroll(This,psmoothScroll) ) 

#define IMsRdpClientAdvancedSettings8_get_SmoothScroll(This,psmoothScroll)	\
    ( (This)->lpVtbl -> get_SmoothScroll(This,psmoothScroll) ) 

#define IMsRdpClientAdvancedSettings8_put_AcceleratorPassthrough(This,pacceleratorPassthrough)	\
    ( (This)->lpVtbl -> put_AcceleratorPassthrough(This,pacceleratorPassthrough) ) 

#define IMsRdpClientAdvancedSettings8_get_AcceleratorPassthrough(This,pacceleratorPassthrough)	\
    ( (This)->lpVtbl -> get_AcceleratorPassthrough(This,pacceleratorPassthrough) ) 

#define IMsRdpClientAdvancedSettings8_put_ShadowBitmap(This,pshadowBitmap)	\
    ( (This)->lpVtbl -> put_ShadowBitmap(This,pshadowBitmap) ) 

#define IMsRdpClientAdvancedSettings8_get_ShadowBitmap(This,pshadowBitmap)	\
    ( (This)->lpVtbl -> get_ShadowBitmap(This,pshadowBitmap) ) 

#define IMsRdpClientAdvancedSettings8_put_TransportType(This,ptransportType)	\
    ( (This)->lpVtbl -> put_TransportType(This,ptransportType) ) 

#define IMsRdpClientAdvancedSettings8_get_TransportType(This,ptransportType)	\
    ( (This)->lpVtbl -> get_TransportType(This,ptransportType) ) 

#define IMsRdpClientAdvancedSettings8_put_SasSequence(This,psasSequence)	\
    ( (This)->lpVtbl -> put_SasSequence(This,psasSequence) ) 

#define IMsRdpClientAdvancedSettings8_get_SasSequence(This,psasSequence)	\
    ( (This)->lpVtbl -> get_SasSequence(This,psasSequence) ) 

#define IMsRdpClientAdvancedSettings8_put_EncryptionEnabled(This,pencryptionEnabled)	\
    ( (This)->lpVtbl -> put_EncryptionEnabled(This,pencryptionEnabled) ) 

#define IMsRdpClientAdvancedSettings8_get_EncryptionEnabled(This,pencryptionEnabled)	\
    ( (This)->lpVtbl -> get_EncryptionEnabled(This,pencryptionEnabled) ) 

#define IMsRdpClientAdvancedSettings8_put_DedicatedTerminal(This,pdedicatedTerminal)	\
    ( (This)->lpVtbl -> put_DedicatedTerminal(This,pdedicatedTerminal) ) 

#define IMsRdpClientAdvancedSettings8_get_DedicatedTerminal(This,pdedicatedTerminal)	\
    ( (This)->lpVtbl -> get_DedicatedTerminal(This,pdedicatedTerminal) ) 

#define IMsRdpClientAdvancedSettings8_put_RDPPort(This,prdpPort)	\
    ( (This)->lpVtbl -> put_RDPPort(This,prdpPort) ) 

#define IMsRdpClientAdvancedSettings8_get_RDPPort(This,prdpPort)	\
    ( (This)->lpVtbl -> get_RDPPort(This,prdpPort) ) 

#define IMsRdpClientAdvancedSettings8_put_EnableMouse(This,penableMouse)	\
    ( (This)->lpVtbl -> put_EnableMouse(This,penableMouse) ) 

#define IMsRdpClientAdvancedSettings8_get_EnableMouse(This,penableMouse)	\
    ( (This)->lpVtbl -> get_EnableMouse(This,penableMouse) ) 

#define IMsRdpClientAdvancedSettings8_put_DisableCtrlAltDel(This,pdisableCtrlAltDel)	\
    ( (This)->lpVtbl -> put_DisableCtrlAltDel(This,pdisableCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings8_get_DisableCtrlAltDel(This,pdisableCtrlAltDel)	\
    ( (This)->lpVtbl -> get_DisableCtrlAltDel(This,pdisableCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings8_put_EnableWindowsKey(This,penableWindowsKey)	\
    ( (This)->lpVtbl -> put_EnableWindowsKey(This,penableWindowsKey) ) 

#define IMsRdpClientAdvancedSettings8_get_EnableWindowsKey(This,penableWindowsKey)	\
    ( (This)->lpVtbl -> get_EnableWindowsKey(This,penableWindowsKey) ) 

#define IMsRdpClientAdvancedSettings8_put_DoubleClickDetect(This,pdoubleClickDetect)	\
    ( (This)->lpVtbl -> put_DoubleClickDetect(This,pdoubleClickDetect) ) 

#define IMsRdpClientAdvancedSettings8_get_DoubleClickDetect(This,pdoubleClickDetect)	\
    ( (This)->lpVtbl -> get_DoubleClickDetect(This,pdoubleClickDetect) ) 

#define IMsRdpClientAdvancedSettings8_put_MaximizeShell(This,pmaximizeShell)	\
    ( (This)->lpVtbl -> put_MaximizeShell(This,pmaximizeShell) ) 

#define IMsRdpClientAdvancedSettings8_get_MaximizeShell(This,pmaximizeShell)	\
    ( (This)->lpVtbl -> get_MaximizeShell(This,pmaximizeShell) ) 

#define IMsRdpClientAdvancedSettings8_put_HotKeyFullScreen(This,photKeyFullScreen)	\
    ( (This)->lpVtbl -> put_HotKeyFullScreen(This,photKeyFullScreen) ) 

#define IMsRdpClientAdvancedSettings8_get_HotKeyFullScreen(This,photKeyFullScreen)	\
    ( (This)->lpVtbl -> get_HotKeyFullScreen(This,photKeyFullScreen) ) 

#define IMsRdpClientAdvancedSettings8_put_HotKeyCtrlEsc(This,photKeyCtrlEsc)	\
    ( (This)->lpVtbl -> put_HotKeyCtrlEsc(This,photKeyCtrlEsc) ) 

#define IMsRdpClientAdvancedSettings8_get_HotKeyCtrlEsc(This,photKeyCtrlEsc)	\
    ( (This)->lpVtbl -> get_HotKeyCtrlEsc(This,photKeyCtrlEsc) ) 

#define IMsRdpClientAdvancedSettings8_put_HotKeyAltEsc(This,photKeyAltEsc)	\
    ( (This)->lpVtbl -> put_HotKeyAltEsc(This,photKeyAltEsc) ) 

#define IMsRdpClientAdvancedSettings8_get_HotKeyAltEsc(This,photKeyAltEsc)	\
    ( (This)->lpVtbl -> get_HotKeyAltEsc(This,photKeyAltEsc) ) 

#define IMsRdpClientAdvancedSettings8_put_HotKeyAltTab(This,photKeyAltTab)	\
    ( (This)->lpVtbl -> put_HotKeyAltTab(This,photKeyAltTab) ) 

#define IMsRdpClientAdvancedSettings8_get_HotKeyAltTab(This,photKeyAltTab)	\
    ( (This)->lpVtbl -> get_HotKeyAltTab(This,photKeyAltTab) ) 

#define IMsRdpClientAdvancedSettings8_put_HotKeyAltShiftTab(This,photKeyAltShiftTab)	\
    ( (This)->lpVtbl -> put_HotKeyAltShiftTab(This,photKeyAltShiftTab) ) 

#define IMsRdpClientAdvancedSettings8_get_HotKeyAltShiftTab(This,photKeyAltShiftTab)	\
    ( (This)->lpVtbl -> get_HotKeyAltShiftTab(This,photKeyAltShiftTab) ) 

#define IMsRdpClientAdvancedSettings8_put_HotKeyAltSpace(This,photKeyAltSpace)	\
    ( (This)->lpVtbl -> put_HotKeyAltSpace(This,photKeyAltSpace) ) 

#define IMsRdpClientAdvancedSettings8_get_HotKeyAltSpace(This,photKeyAltSpace)	\
    ( (This)->lpVtbl -> get_HotKeyAltSpace(This,photKeyAltSpace) ) 

#define IMsRdpClientAdvancedSettings8_put_HotKeyCtrlAltDel(This,photKeyCtrlAltDel)	\
    ( (This)->lpVtbl -> put_HotKeyCtrlAltDel(This,photKeyCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings8_get_HotKeyCtrlAltDel(This,photKeyCtrlAltDel)	\
    ( (This)->lpVtbl -> get_HotKeyCtrlAltDel(This,photKeyCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings8_put_orderDrawThreshold(This,porderDrawThreshold)	\
    ( (This)->lpVtbl -> put_orderDrawThreshold(This,porderDrawThreshold) ) 

#define IMsRdpClientAdvancedSettings8_get_orderDrawThreshold(This,porderDrawThreshold)	\
    ( (This)->lpVtbl -> get_orderDrawThreshold(This,porderDrawThreshold) ) 

#define IMsRdpClientAdvancedSettings8_put_BitmapCacheSize(This,pbitmapCacheSize)	\
    ( (This)->lpVtbl -> put_BitmapCacheSize(This,pbitmapCacheSize) ) 

#define IMsRdpClientAdvancedSettings8_get_BitmapCacheSize(This,pbitmapCacheSize)	\
    ( (This)->lpVtbl -> get_BitmapCacheSize(This,pbitmapCacheSize) ) 

#define IMsRdpClientAdvancedSettings8_put_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize)	\
    ( (This)->lpVtbl -> put_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize) ) 

#define IMsRdpClientAdvancedSettings8_get_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize)	\
    ( (This)->lpVtbl -> get_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize) ) 

#define IMsRdpClientAdvancedSettings8_put_ScaleBitmapCachesByBPP(This,pbScale)	\
    ( (This)->lpVtbl -> put_ScaleBitmapCachesByBPP(This,pbScale) ) 

#define IMsRdpClientAdvancedSettings8_get_ScaleBitmapCachesByBPP(This,pbScale)	\
    ( (This)->lpVtbl -> get_ScaleBitmapCachesByBPP(This,pbScale) ) 

#define IMsRdpClientAdvancedSettings8_put_NumBitmapCaches(This,pnumBitmapCaches)	\
    ( (This)->lpVtbl -> put_NumBitmapCaches(This,pnumBitmapCaches) ) 

#define IMsRdpClientAdvancedSettings8_get_NumBitmapCaches(This,pnumBitmapCaches)	\
    ( (This)->lpVtbl -> get_NumBitmapCaches(This,pnumBitmapCaches) ) 

#define IMsRdpClientAdvancedSettings8_put_CachePersistenceActive(This,pcachePersistenceActive)	\
    ( (This)->lpVtbl -> put_CachePersistenceActive(This,pcachePersistenceActive) ) 

#define IMsRdpClientAdvancedSettings8_get_CachePersistenceActive(This,pcachePersistenceActive)	\
    ( (This)->lpVtbl -> get_CachePersistenceActive(This,pcachePersistenceActive) ) 

#define IMsRdpClientAdvancedSettings8_put_PersistCacheDirectory(This,rhs)	\
    ( (This)->lpVtbl -> put_PersistCacheDirectory(This,rhs) ) 

#define IMsRdpClientAdvancedSettings8_put_brushSupportLevel(This,pbrushSupportLevel)	\
    ( (This)->lpVtbl -> put_brushSupportLevel(This,pbrushSupportLevel) ) 

#define IMsRdpClientAdvancedSettings8_get_brushSupportLevel(This,pbrushSupportLevel)	\
    ( (This)->lpVtbl -> get_brushSupportLevel(This,pbrushSupportLevel) ) 

#define IMsRdpClientAdvancedSettings8_put_minInputSendInterval(This,pminInputSendInterval)	\
    ( (This)->lpVtbl -> put_minInputSendInterval(This,pminInputSendInterval) ) 

#define IMsRdpClientAdvancedSettings8_get_minInputSendInterval(This,pminInputSendInterval)	\
    ( (This)->lpVtbl -> get_minInputSendInterval(This,pminInputSendInterval) ) 

#define IMsRdpClientAdvancedSettings8_put_InputEventsAtOnce(This,pinputEventsAtOnce)	\
    ( (This)->lpVtbl -> put_InputEventsAtOnce(This,pinputEventsAtOnce) ) 

#define IMsRdpClientAdvancedSettings8_get_InputEventsAtOnce(This,pinputEventsAtOnce)	\
    ( (This)->lpVtbl -> get_InputEventsAtOnce(This,pinputEventsAtOnce) ) 

#define IMsRdpClientAdvancedSettings8_put_maxEventCount(This,pmaxEventCount)	\
    ( (This)->lpVtbl -> put_maxEventCount(This,pmaxEventCount) ) 

#define IMsRdpClientAdvancedSettings8_get_maxEventCount(This,pmaxEventCount)	\
    ( (This)->lpVtbl -> get_maxEventCount(This,pmaxEventCount) ) 

#define IMsRdpClientAdvancedSettings8_put_keepAliveInterval(This,pkeepAliveInterval)	\
    ( (This)->lpVtbl -> put_keepAliveInterval(This,pkeepAliveInterval) ) 

#define IMsRdpClientAdvancedSettings8_get_keepAliveInterval(This,pkeepAliveInterval)	\
    ( (This)->lpVtbl -> get_keepAliveInterval(This,pkeepAliveInterval) ) 

#define IMsRdpClientAdvancedSettings8_put_shutdownTimeout(This,pshutdownTimeout)	\
    ( (This)->lpVtbl -> put_shutdownTimeout(This,pshutdownTimeout) ) 

#define IMsRdpClientAdvancedSettings8_get_shutdownTimeout(This,pshutdownTimeout)	\
    ( (This)->lpVtbl -> get_shutdownTimeout(This,pshutdownTimeout) ) 

#define IMsRdpClientAdvancedSettings8_put_overallConnectionTimeout(This,poverallConnectionTimeout)	\
    ( (This)->lpVtbl -> put_overallConnectionTimeout(This,poverallConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings8_get_overallConnectionTimeout(This,poverallConnectionTimeout)	\
    ( (This)->lpVtbl -> get_overallConnectionTimeout(This,poverallConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings8_put_singleConnectionTimeout(This,psingleConnectionTimeout)	\
    ( (This)->lpVtbl -> put_singleConnectionTimeout(This,psingleConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings8_get_singleConnectionTimeout(This,psingleConnectionTimeout)	\
    ( (This)->lpVtbl -> get_singleConnectionTimeout(This,psingleConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings8_put_KeyboardType(This,pkeyboardType)	\
    ( (This)->lpVtbl -> put_KeyboardType(This,pkeyboardType) ) 

#define IMsRdpClientAdvancedSettings8_get_KeyboardType(This,pkeyboardType)	\
    ( (This)->lpVtbl -> get_KeyboardType(This,pkeyboardType) ) 

#define IMsRdpClientAdvancedSettings8_put_KeyboardSubType(This,pkeyboardSubType)	\
    ( (This)->lpVtbl -> put_KeyboardSubType(This,pkeyboardSubType) ) 

#define IMsRdpClientAdvancedSettings8_get_KeyboardSubType(This,pkeyboardSubType)	\
    ( (This)->lpVtbl -> get_KeyboardSubType(This,pkeyboardSubType) ) 

#define IMsRdpClientAdvancedSettings8_put_KeyboardFunctionKey(This,pkeyboardFunctionKey)	\
    ( (This)->lpVtbl -> put_KeyboardFunctionKey(This,pkeyboardFunctionKey) ) 

#define IMsRdpClientAdvancedSettings8_get_KeyboardFunctionKey(This,pkeyboardFunctionKey)	\
    ( (This)->lpVtbl -> get_KeyboardFunctionKey(This,pkeyboardFunctionKey) ) 

#define IMsRdpClientAdvancedSettings8_put_WinceFixedPalette(This,pwinceFixedPalette)	\
    ( (This)->lpVtbl -> put_WinceFixedPalette(This,pwinceFixedPalette) ) 

#define IMsRdpClientAdvancedSettings8_get_WinceFixedPalette(This,pwinceFixedPalette)	\
    ( (This)->lpVtbl -> get_WinceFixedPalette(This,pwinceFixedPalette) ) 

#define IMsRdpClientAdvancedSettings8_put_ConnectToServerConsole(This,pConnectToConsole)	\
    ( (This)->lpVtbl -> put_ConnectToServerConsole(This,pConnectToConsole) ) 

#define IMsRdpClientAdvancedSettings8_get_ConnectToServerConsole(This,pConnectToConsole)	\
    ( (This)->lpVtbl -> get_ConnectToServerConsole(This,pConnectToConsole) ) 

#define IMsRdpClientAdvancedSettings8_put_BitmapPersistence(This,pbitmapPersistence)	\
    ( (This)->lpVtbl -> put_BitmapPersistence(This,pbitmapPersistence) ) 

#define IMsRdpClientAdvancedSettings8_get_BitmapPersistence(This,pbitmapPersistence)	\
    ( (This)->lpVtbl -> get_BitmapPersistence(This,pbitmapPersistence) ) 

#define IMsRdpClientAdvancedSettings8_put_MinutesToIdleTimeout(This,pminutesToIdleTimeout)	\
    ( (This)->lpVtbl -> put_MinutesToIdleTimeout(This,pminutesToIdleTimeout) ) 

#define IMsRdpClientAdvancedSettings8_get_MinutesToIdleTimeout(This,pminutesToIdleTimeout)	\
    ( (This)->lpVtbl -> get_MinutesToIdleTimeout(This,pminutesToIdleTimeout) ) 

#define IMsRdpClientAdvancedSettings8_put_SmartSizing(This,pfSmartSizing)	\
    ( (This)->lpVtbl -> put_SmartSizing(This,pfSmartSizing) ) 

#define IMsRdpClientAdvancedSettings8_get_SmartSizing(This,pfSmartSizing)	\
    ( (This)->lpVtbl -> get_SmartSizing(This,pfSmartSizing) ) 

#define IMsRdpClientAdvancedSettings8_put_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName)	\
    ( (This)->lpVtbl -> put_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName) ) 

#define IMsRdpClientAdvancedSettings8_get_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName)	\
    ( (This)->lpVtbl -> get_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName) ) 

#define IMsRdpClientAdvancedSettings8_put_RdpdrClipCleanTempDirString(This,clipCleanTempDirString)	\
    ( (This)->lpVtbl -> put_RdpdrClipCleanTempDirString(This,clipCleanTempDirString) ) 

#define IMsRdpClientAdvancedSettings8_get_RdpdrClipCleanTempDirString(This,clipCleanTempDirString)	\
    ( (This)->lpVtbl -> get_RdpdrClipCleanTempDirString(This,clipCleanTempDirString) ) 

#define IMsRdpClientAdvancedSettings8_put_RdpdrClipPasteInfoString(This,clipPasteInfoString)	\
    ( (This)->lpVtbl -> put_RdpdrClipPasteInfoString(This,clipPasteInfoString) ) 

#define IMsRdpClientAdvancedSettings8_get_RdpdrClipPasteInfoString(This,clipPasteInfoString)	\
    ( (This)->lpVtbl -> get_RdpdrClipPasteInfoString(This,clipPasteInfoString) ) 

#define IMsRdpClientAdvancedSettings8_put_ClearTextPassword(This,rhs)	\
    ( (This)->lpVtbl -> put_ClearTextPassword(This,rhs) ) 

#define IMsRdpClientAdvancedSettings8_put_DisplayConnectionBar(This,pDisplayConnectionBar)	\
    ( (This)->lpVtbl -> put_DisplayConnectionBar(This,pDisplayConnectionBar) ) 

#define IMsRdpClientAdvancedSettings8_get_DisplayConnectionBar(This,pDisplayConnectionBar)	\
    ( (This)->lpVtbl -> get_DisplayConnectionBar(This,pDisplayConnectionBar) ) 

#define IMsRdpClientAdvancedSettings8_put_PinConnectionBar(This,pPinConnectionBar)	\
    ( (This)->lpVtbl -> put_PinConnectionBar(This,pPinConnectionBar) ) 

#define IMsRdpClientAdvancedSettings8_get_PinConnectionBar(This,pPinConnectionBar)	\
    ( (This)->lpVtbl -> get_PinConnectionBar(This,pPinConnectionBar) ) 

#define IMsRdpClientAdvancedSettings8_put_GrabFocusOnConnect(This,pfGrabFocusOnConnect)	\
    ( (This)->lpVtbl -> put_GrabFocusOnConnect(This,pfGrabFocusOnConnect) ) 

#define IMsRdpClientAdvancedSettings8_get_GrabFocusOnConnect(This,pfGrabFocusOnConnect)	\
    ( (This)->lpVtbl -> get_GrabFocusOnConnect(This,pfGrabFocusOnConnect) ) 

#define IMsRdpClientAdvancedSettings8_put_LoadBalanceInfo(This,pLBInfo)	\
    ( (This)->lpVtbl -> put_LoadBalanceInfo(This,pLBInfo) ) 

#define IMsRdpClientAdvancedSettings8_get_LoadBalanceInfo(This,pLBInfo)	\
    ( (This)->lpVtbl -> get_LoadBalanceInfo(This,pLBInfo) ) 

#define IMsRdpClientAdvancedSettings8_put_RedirectDrives(This,pRedirectDrives)	\
    ( (This)->lpVtbl -> put_RedirectDrives(This,pRedirectDrives) ) 

#define IMsRdpClientAdvancedSettings8_get_RedirectDrives(This,pRedirectDrives)	\
    ( (This)->lpVtbl -> get_RedirectDrives(This,pRedirectDrives) ) 

#define IMsRdpClientAdvancedSettings8_put_RedirectPrinters(This,pRedirectPrinters)	\
    ( (This)->lpVtbl -> put_RedirectPrinters(This,pRedirectPrinters) ) 

#define IMsRdpClientAdvancedSettings8_get_RedirectPrinters(This,pRedirectPrinters)	\
    ( (This)->lpVtbl -> get_RedirectPrinters(This,pRedirectPrinters) ) 

#define IMsRdpClientAdvancedSettings8_put_RedirectPorts(This,pRedirectPorts)	\
    ( (This)->lpVtbl -> put_RedirectPorts(This,pRedirectPorts) ) 

#define IMsRdpClientAdvancedSettings8_get_RedirectPorts(This,pRedirectPorts)	\
    ( (This)->lpVtbl -> get_RedirectPorts(This,pRedirectPorts) ) 

#define IMsRdpClientAdvancedSettings8_put_RedirectSmartCards(This,pRedirectSmartCards)	\
    ( (This)->lpVtbl -> put_RedirectSmartCards(This,pRedirectSmartCards) ) 

#define IMsRdpClientAdvancedSettings8_get_RedirectSmartCards(This,pRedirectSmartCards)	\
    ( (This)->lpVtbl -> get_RedirectSmartCards(This,pRedirectSmartCards) ) 

#define IMsRdpClientAdvancedSettings8_put_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize)	\
    ( (This)->lpVtbl -> put_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize) ) 

#define IMsRdpClientAdvancedSettings8_get_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize)	\
    ( (This)->lpVtbl -> get_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize) ) 

#define IMsRdpClientAdvancedSettings8_put_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize)	\
    ( (This)->lpVtbl -> put_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize) ) 

#define IMsRdpClientAdvancedSettings8_get_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize)	\
    ( (This)->lpVtbl -> get_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize) ) 

#define IMsRdpClientAdvancedSettings8_put_PerformanceFlags(This,pDisableList)	\
    ( (This)->lpVtbl -> put_PerformanceFlags(This,pDisableList) ) 

#define IMsRdpClientAdvancedSettings8_get_PerformanceFlags(This,pDisableList)	\
    ( (This)->lpVtbl -> get_PerformanceFlags(This,pDisableList) ) 

#define IMsRdpClientAdvancedSettings8_put_ConnectWithEndpoint(This,rhs)	\
    ( (This)->lpVtbl -> put_ConnectWithEndpoint(This,rhs) ) 

#define IMsRdpClientAdvancedSettings8_put_NotifyTSPublicKey(This,pfNotify)	\
    ( (This)->lpVtbl -> put_NotifyTSPublicKey(This,pfNotify) ) 

#define IMsRdpClientAdvancedSettings8_get_NotifyTSPublicKey(This,pfNotify)	\
    ( (This)->lpVtbl -> get_NotifyTSPublicKey(This,pfNotify) ) 


#define IMsRdpClientAdvancedSettings8_get_CanAutoReconnect(This,pfCanAutoReconnect)	\
    ( (This)->lpVtbl -> get_CanAutoReconnect(This,pfCanAutoReconnect) ) 

#define IMsRdpClientAdvancedSettings8_put_EnableAutoReconnect(This,pfEnableAutoReconnect)	\
    ( (This)->lpVtbl -> put_EnableAutoReconnect(This,pfEnableAutoReconnect) ) 

#define IMsRdpClientAdvancedSettings8_get_EnableAutoReconnect(This,pfEnableAutoReconnect)	\
    ( (This)->lpVtbl -> get_EnableAutoReconnect(This,pfEnableAutoReconnect) ) 

#define IMsRdpClientAdvancedSettings8_put_MaxReconnectAttempts(This,pMaxReconnectAttempts)	\
    ( (This)->lpVtbl -> put_MaxReconnectAttempts(This,pMaxReconnectAttempts) ) 

#define IMsRdpClientAdvancedSettings8_get_MaxReconnectAttempts(This,pMaxReconnectAttempts)	\
    ( (This)->lpVtbl -> get_MaxReconnectAttempts(This,pMaxReconnectAttempts) ) 


#define IMsRdpClientAdvancedSettings8_put_ConnectionBarShowMinimizeButton(This,pfShowMinimize)	\
    ( (This)->lpVtbl -> put_ConnectionBarShowMinimizeButton(This,pfShowMinimize) ) 

#define IMsRdpClientAdvancedSettings8_get_ConnectionBarShowMinimizeButton(This,pfShowMinimize)	\
    ( (This)->lpVtbl -> get_ConnectionBarShowMinimizeButton(This,pfShowMinimize) ) 

#define IMsRdpClientAdvancedSettings8_put_ConnectionBarShowRestoreButton(This,pfShowRestore)	\
    ( (This)->lpVtbl -> put_ConnectionBarShowRestoreButton(This,pfShowRestore) ) 

#define IMsRdpClientAdvancedSettings8_get_ConnectionBarShowRestoreButton(This,pfShowRestore)	\
    ( (This)->lpVtbl -> get_ConnectionBarShowRestoreButton(This,pfShowRestore) ) 


#define IMsRdpClientAdvancedSettings8_put_AuthenticationLevel(This,puiAuthLevel)	\
    ( (This)->lpVtbl -> put_AuthenticationLevel(This,puiAuthLevel) ) 

#define IMsRdpClientAdvancedSettings8_get_AuthenticationLevel(This,puiAuthLevel)	\
    ( (This)->lpVtbl -> get_AuthenticationLevel(This,puiAuthLevel) ) 


#define IMsRdpClientAdvancedSettings8_put_RedirectClipboard(This,pfRedirectClipboard)	\
    ( (This)->lpVtbl -> put_RedirectClipboard(This,pfRedirectClipboard) ) 

#define IMsRdpClientAdvancedSettings8_get_RedirectClipboard(This,pfRedirectClipboard)	\
    ( (This)->lpVtbl -> get_RedirectClipboard(This,pfRedirectClipboard) ) 

#define IMsRdpClientAdvancedSettings8_put_AudioRedirectionMode(This,puiAudioRedirectionMode)	\
    ( (This)->lpVtbl -> put_AudioRedirectionMode(This,puiAudioRedirectionMode) ) 

#define IMsRdpClientAdvancedSettings8_get_AudioRedirectionMode(This,puiAudioRedirectionMode)	\
    ( (This)->lpVtbl -> get_AudioRedirectionMode(This,puiAudioRedirectionMode) ) 

#define IMsRdpClientAdvancedSettings8_put_ConnectionBarShowPinButton(This,pfShowPin)	\
    ( (This)->lpVtbl -> put_ConnectionBarShowPinButton(This,pfShowPin) ) 

#define IMsRdpClientAdvancedSettings8_get_ConnectionBarShowPinButton(This,pfShowPin)	\
    ( (This)->lpVtbl -> get_ConnectionBarShowPinButton(This,pfShowPin) ) 

#define IMsRdpClientAdvancedSettings8_put_PublicMode(This,pfPublicMode)	\
    ( (This)->lpVtbl -> put_PublicMode(This,pfPublicMode) ) 

#define IMsRdpClientAdvancedSettings8_get_PublicMode(This,pfPublicMode)	\
    ( (This)->lpVtbl -> get_PublicMode(This,pfPublicMode) ) 

#define IMsRdpClientAdvancedSettings8_put_RedirectDevices(This,pfRedirectPnPDevices)	\
    ( (This)->lpVtbl -> put_RedirectDevices(This,pfRedirectPnPDevices) ) 

#define IMsRdpClientAdvancedSettings8_get_RedirectDevices(This,pfRedirectPnPDevices)	\
    ( (This)->lpVtbl -> get_RedirectDevices(This,pfRedirectPnPDevices) ) 

#define IMsRdpClientAdvancedSettings8_put_RedirectPOSDevices(This,pfRedirectPOSDevices)	\
    ( (This)->lpVtbl -> put_RedirectPOSDevices(This,pfRedirectPOSDevices) ) 

#define IMsRdpClientAdvancedSettings8_get_RedirectPOSDevices(This,pfRedirectPOSDevices)	\
    ( (This)->lpVtbl -> get_RedirectPOSDevices(This,pfRedirectPOSDevices) ) 

#define IMsRdpClientAdvancedSettings8_put_BitmapVirtualCache32BppSize(This,pBitmapVirtualCache32BppSize)	\
    ( (This)->lpVtbl -> put_BitmapVirtualCache32BppSize(This,pBitmapVirtualCache32BppSize) ) 

#define IMsRdpClientAdvancedSettings8_get_BitmapVirtualCache32BppSize(This,pBitmapVirtualCache32BppSize)	\
    ( (This)->lpVtbl -> get_BitmapVirtualCache32BppSize(This,pBitmapVirtualCache32BppSize) ) 


#define IMsRdpClientAdvancedSettings8_put_RelativeMouseMode(This,pfRelativeMouseMode)	\
    ( (This)->lpVtbl -> put_RelativeMouseMode(This,pfRelativeMouseMode) ) 

#define IMsRdpClientAdvancedSettings8_get_RelativeMouseMode(This,pfRelativeMouseMode)	\
    ( (This)->lpVtbl -> get_RelativeMouseMode(This,pfRelativeMouseMode) ) 

#define IMsRdpClientAdvancedSettings8_get_AuthenticationServiceClass(This,pbstrAuthServiceClass)	\
    ( (This)->lpVtbl -> get_AuthenticationServiceClass(This,pbstrAuthServiceClass) ) 

#define IMsRdpClientAdvancedSettings8_put_AuthenticationServiceClass(This,pbstrAuthServiceClass)	\
    ( (This)->lpVtbl -> put_AuthenticationServiceClass(This,pbstrAuthServiceClass) ) 

#define IMsRdpClientAdvancedSettings8_get_PCB(This,bstrPCB)	\
    ( (This)->lpVtbl -> get_PCB(This,bstrPCB) ) 

#define IMsRdpClientAdvancedSettings8_put_PCB(This,bstrPCB)	\
    ( (This)->lpVtbl -> put_PCB(This,bstrPCB) ) 

#define IMsRdpClientAdvancedSettings8_put_HotKeyFocusReleaseLeft(This,HotKeyFocusReleaseLeft)	\
    ( (This)->lpVtbl -> put_HotKeyFocusReleaseLeft(This,HotKeyFocusReleaseLeft) ) 

#define IMsRdpClientAdvancedSettings8_get_HotKeyFocusReleaseLeft(This,HotKeyFocusReleaseLeft)	\
    ( (This)->lpVtbl -> get_HotKeyFocusReleaseLeft(This,HotKeyFocusReleaseLeft) ) 

#define IMsRdpClientAdvancedSettings8_put_HotKeyFocusReleaseRight(This,HotKeyFocusReleaseRight)	\
    ( (This)->lpVtbl -> put_HotKeyFocusReleaseRight(This,HotKeyFocusReleaseRight) ) 

#define IMsRdpClientAdvancedSettings8_get_HotKeyFocusReleaseRight(This,HotKeyFocusReleaseRight)	\
    ( (This)->lpVtbl -> get_HotKeyFocusReleaseRight(This,HotKeyFocusReleaseRight) ) 

#define IMsRdpClientAdvancedSettings8_put_EnableCredSspSupport(This,pfEnableSupport)	\
    ( (This)->lpVtbl -> put_EnableCredSspSupport(This,pfEnableSupport) ) 

#define IMsRdpClientAdvancedSettings8_get_EnableCredSspSupport(This,pfEnableSupport)	\
    ( (This)->lpVtbl -> get_EnableCredSspSupport(This,pfEnableSupport) ) 

#define IMsRdpClientAdvancedSettings8_get_AuthenticationType(This,puiAuthType)	\
    ( (This)->lpVtbl -> get_AuthenticationType(This,puiAuthType) ) 

#define IMsRdpClientAdvancedSettings8_put_ConnectToAdministerServer(This,pConnectToAdministerServer)	\
    ( (This)->lpVtbl -> put_ConnectToAdministerServer(This,pConnectToAdministerServer) ) 

#define IMsRdpClientAdvancedSettings8_get_ConnectToAdministerServer(This,pConnectToAdministerServer)	\
    ( (This)->lpVtbl -> get_ConnectToAdministerServer(This,pConnectToAdministerServer) ) 


#define IMsRdpClientAdvancedSettings8_put_AudioCaptureRedirectionMode(This,pfRedir)	\
    ( (This)->lpVtbl -> put_AudioCaptureRedirectionMode(This,pfRedir) ) 

#define IMsRdpClientAdvancedSettings8_get_AudioCaptureRedirectionMode(This,pfRedir)	\
    ( (This)->lpVtbl -> get_AudioCaptureRedirectionMode(This,pfRedir) ) 

#define IMsRdpClientAdvancedSettings8_put_VideoPlaybackMode(This,pVideoPlaybackMode)	\
    ( (This)->lpVtbl -> put_VideoPlaybackMode(This,pVideoPlaybackMode) ) 

#define IMsRdpClientAdvancedSettings8_get_VideoPlaybackMode(This,pVideoPlaybackMode)	\
    ( (This)->lpVtbl -> get_VideoPlaybackMode(This,pVideoPlaybackMode) ) 

#define IMsRdpClientAdvancedSettings8_put_EnableSuperPan(This,pfEnableSuperPan)	\
    ( (This)->lpVtbl -> put_EnableSuperPan(This,pfEnableSuperPan) ) 

#define IMsRdpClientAdvancedSettings8_get_EnableSuperPan(This,pfEnableSuperPan)	\
    ( (This)->lpVtbl -> get_EnableSuperPan(This,pfEnableSuperPan) ) 

#define IMsRdpClientAdvancedSettings8_put_SuperPanAccelerationFactor(This,puAccelFactor)	\
    ( (This)->lpVtbl -> put_SuperPanAccelerationFactor(This,puAccelFactor) ) 

#define IMsRdpClientAdvancedSettings8_get_SuperPanAccelerationFactor(This,puAccelFactor)	\
    ( (This)->lpVtbl -> get_SuperPanAccelerationFactor(This,puAccelFactor) ) 

#define IMsRdpClientAdvancedSettings8_put_NegotiateSecurityLayer(This,pfNegotiate)	\
    ( (This)->lpVtbl -> put_NegotiateSecurityLayer(This,pfNegotiate) ) 

#define IMsRdpClientAdvancedSettings8_get_NegotiateSecurityLayer(This,pfNegotiate)	\
    ( (This)->lpVtbl -> get_NegotiateSecurityLayer(This,pfNegotiate) ) 

#define IMsRdpClientAdvancedSettings8_put_AudioQualityMode(This,pAudioQualityMode)	\
    ( (This)->lpVtbl -> put_AudioQualityMode(This,pAudioQualityMode) ) 

#define IMsRdpClientAdvancedSettings8_get_AudioQualityMode(This,pAudioQualityMode)	\
    ( (This)->lpVtbl -> get_AudioQualityMode(This,pAudioQualityMode) ) 

#define IMsRdpClientAdvancedSettings8_put_RedirectDirectX(This,pfRedirectDirectX)	\
    ( (This)->lpVtbl -> put_RedirectDirectX(This,pfRedirectDirectX) ) 

#define IMsRdpClientAdvancedSettings8_get_RedirectDirectX(This,pfRedirectDirectX)	\
    ( (This)->lpVtbl -> get_RedirectDirectX(This,pfRedirectDirectX) ) 

#define IMsRdpClientAdvancedSettings8_put_NetworkConnectionType(This,pConnectionType)	\
    ( (This)->lpVtbl -> put_NetworkConnectionType(This,pConnectionType) ) 

#define IMsRdpClientAdvancedSettings8_get_NetworkConnectionType(This,pConnectionType)	\
    ( (This)->lpVtbl -> get_NetworkConnectionType(This,pConnectionType) ) 


#define IMsRdpClientAdvancedSettings8_put_BandwidthDetection(This,pfAutodetect)	\
    ( (This)->lpVtbl -> put_BandwidthDetection(This,pfAutodetect) ) 

#define IMsRdpClientAdvancedSettings8_get_BandwidthDetection(This,pfAutodetect)	\
    ( (This)->lpVtbl -> get_BandwidthDetection(This,pfAutodetect) ) 

#define IMsRdpClientAdvancedSettings8_put_ClientProtocolSpec(This,pClientMode)	\
    ( (This)->lpVtbl -> put_ClientProtocolSpec(This,pClientMode) ) 

#define IMsRdpClientAdvancedSettings8_get_ClientProtocolSpec(This,pClientMode)	\
    ( (This)->lpVtbl -> get_ClientProtocolSpec(This,pClientMode) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propput][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings8_put_BandwidthDetection_Proxy( 
    IMsRdpClientAdvancedSettings8 * This,
    /* [in] */ VARIANT_BOOL pfAutodetect);


void __RPC_STUB IMsRdpClientAdvancedSettings8_put_BandwidthDetection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings8_get_BandwidthDetection_Proxy( 
    IMsRdpClientAdvancedSettings8 * This,
    /* [retval][out] */ VARIANT_BOOL *pfAutodetect);


void __RPC_STUB IMsRdpClientAdvancedSettings8_get_BandwidthDetection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings8_put_ClientProtocolSpec_Proxy( 
    IMsRdpClientAdvancedSettings8 * This,
    /* [in] */ ClientSpec pClientMode);


void __RPC_STUB IMsRdpClientAdvancedSettings8_put_ClientProtocolSpec_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings8_get_ClientProtocolSpec_Proxy( 
    IMsRdpClientAdvancedSettings8 * This,
    /* [retval][out] */ ClientSpec *pClientMode);


void __RPC_STUB IMsRdpClientAdvancedSettings8_get_ClientProtocolSpec_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMsRdpClientAdvancedSettings8_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClientTransportSettings_INTERFACE_DEFINED__
#define __IMsRdpClientTransportSettings_INTERFACE_DEFINED__

/* interface IMsRdpClientTransportSettings */
/* [oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClientTransportSettings;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("720298C0-A099-46F5-9F82-96921BAE4701")
    IMsRdpClientTransportSettings : public IDispatch
    {
    public:
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_GatewayHostname( 
            /* [in] */ BSTR pProxyHostname) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_GatewayHostname( 
            /* [retval][out] */ BSTR *pProxyHostname) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_GatewayUsageMethod( 
            /* [in] */ unsigned long pulProxyUsageMethod) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_GatewayUsageMethod( 
            /* [retval][out] */ unsigned long *pulProxyUsageMethod) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_GatewayProfileUsageMethod( 
            /* [in] */ unsigned long pulProxyProfileUsageMethod) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_GatewayProfileUsageMethod( 
            /* [retval][out] */ unsigned long *pulProxyProfileUsageMethod) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_GatewayCredsSource( 
            /* [in] */ unsigned long pulProxyCredsSource) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_GatewayCredsSource( 
            /* [retval][out] */ unsigned long *pulProxyCredsSource) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_GatewayUserSelectedCredsSource( 
            /* [in] */ unsigned long pulProxyCredsSource) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_GatewayUserSelectedCredsSource( 
            /* [retval][out] */ unsigned long *pulProxyCredsSource) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_GatewayIsSupported( 
            /* [retval][out] */ long *pfProxyIsSupported) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_GatewayDefaultUsageMethod( 
            /* [retval][out] */ unsigned long *pulProxyDefaultUsageMethod) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMsRdpClientTransportSettingsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClientTransportSettings * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClientTransportSettings * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClientTransportSettings * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClientTransportSettings * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClientTransportSettings * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClientTransportSettings * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClientTransportSettings * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayHostname )( 
            IMsRdpClientTransportSettings * This,
            /* [in] */ BSTR pProxyHostname);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayHostname )( 
            IMsRdpClientTransportSettings * This,
            /* [retval][out] */ BSTR *pProxyHostname);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayUsageMethod )( 
            IMsRdpClientTransportSettings * This,
            /* [in] */ unsigned long pulProxyUsageMethod);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayUsageMethod )( 
            IMsRdpClientTransportSettings * This,
            /* [retval][out] */ unsigned long *pulProxyUsageMethod);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayProfileUsageMethod )( 
            IMsRdpClientTransportSettings * This,
            /* [in] */ unsigned long pulProxyProfileUsageMethod);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayProfileUsageMethod )( 
            IMsRdpClientTransportSettings * This,
            /* [retval][out] */ unsigned long *pulProxyProfileUsageMethod);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayCredsSource )( 
            IMsRdpClientTransportSettings * This,
            /* [in] */ unsigned long pulProxyCredsSource);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayCredsSource )( 
            IMsRdpClientTransportSettings * This,
            /* [retval][out] */ unsigned long *pulProxyCredsSource);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayUserSelectedCredsSource )( 
            IMsRdpClientTransportSettings * This,
            /* [in] */ unsigned long pulProxyCredsSource);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayUserSelectedCredsSource )( 
            IMsRdpClientTransportSettings * This,
            /* [retval][out] */ unsigned long *pulProxyCredsSource);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayIsSupported )( 
            IMsRdpClientTransportSettings * This,
            /* [retval][out] */ long *pfProxyIsSupported);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayDefaultUsageMethod )( 
            IMsRdpClientTransportSettings * This,
            /* [retval][out] */ unsigned long *pulProxyDefaultUsageMethod);
        
        END_INTERFACE
    } IMsRdpClientTransportSettingsVtbl;

    interface IMsRdpClientTransportSettings
    {
        CONST_VTBL struct IMsRdpClientTransportSettingsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClientTransportSettings_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClientTransportSettings_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClientTransportSettings_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClientTransportSettings_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClientTransportSettings_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClientTransportSettings_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClientTransportSettings_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMsRdpClientTransportSettings_put_GatewayHostname(This,pProxyHostname)	\
    ( (This)->lpVtbl -> put_GatewayHostname(This,pProxyHostname) ) 

#define IMsRdpClientTransportSettings_get_GatewayHostname(This,pProxyHostname)	\
    ( (This)->lpVtbl -> get_GatewayHostname(This,pProxyHostname) ) 

#define IMsRdpClientTransportSettings_put_GatewayUsageMethod(This,pulProxyUsageMethod)	\
    ( (This)->lpVtbl -> put_GatewayUsageMethod(This,pulProxyUsageMethod) ) 

#define IMsRdpClientTransportSettings_get_GatewayUsageMethod(This,pulProxyUsageMethod)	\
    ( (This)->lpVtbl -> get_GatewayUsageMethod(This,pulProxyUsageMethod) ) 

#define IMsRdpClientTransportSettings_put_GatewayProfileUsageMethod(This,pulProxyProfileUsageMethod)	\
    ( (This)->lpVtbl -> put_GatewayProfileUsageMethod(This,pulProxyProfileUsageMethod) ) 

#define IMsRdpClientTransportSettings_get_GatewayProfileUsageMethod(This,pulProxyProfileUsageMethod)	\
    ( (This)->lpVtbl -> get_GatewayProfileUsageMethod(This,pulProxyProfileUsageMethod) ) 

#define IMsRdpClientTransportSettings_put_GatewayCredsSource(This,pulProxyCredsSource)	\
    ( (This)->lpVtbl -> put_GatewayCredsSource(This,pulProxyCredsSource) ) 

#define IMsRdpClientTransportSettings_get_GatewayCredsSource(This,pulProxyCredsSource)	\
    ( (This)->lpVtbl -> get_GatewayCredsSource(This,pulProxyCredsSource) ) 

#define IMsRdpClientTransportSettings_put_GatewayUserSelectedCredsSource(This,pulProxyCredsSource)	\
    ( (This)->lpVtbl -> put_GatewayUserSelectedCredsSource(This,pulProxyCredsSource) ) 

#define IMsRdpClientTransportSettings_get_GatewayUserSelectedCredsSource(This,pulProxyCredsSource)	\
    ( (This)->lpVtbl -> get_GatewayUserSelectedCredsSource(This,pulProxyCredsSource) ) 

#define IMsRdpClientTransportSettings_get_GatewayIsSupported(This,pfProxyIsSupported)	\
    ( (This)->lpVtbl -> get_GatewayIsSupported(This,pfProxyIsSupported) ) 

#define IMsRdpClientTransportSettings_get_GatewayDefaultUsageMethod(This,pulProxyDefaultUsageMethod)	\
    ( (This)->lpVtbl -> get_GatewayDefaultUsageMethod(This,pulProxyDefaultUsageMethod) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMsRdpClientTransportSettings_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClientTransportSettings2_INTERFACE_DEFINED__
#define __IMsRdpClientTransportSettings2_INTERFACE_DEFINED__

/* interface IMsRdpClientTransportSettings2 */
/* [oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClientTransportSettings2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("67341688-D606-4C73-A5D2-2E0489009319")
    IMsRdpClientTransportSettings2 : public IMsRdpClientTransportSettings
    {
    public:
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_GatewayCredSharing( 
            /* [in] */ unsigned long pulProxyCredSharing) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_GatewayCredSharing( 
            /* [retval][out] */ unsigned long *pulProxyCredSharing) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_GatewayPreAuthRequirement( 
            /* [in] */ unsigned long pulProxyPreAuthRequirement) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_GatewayPreAuthRequirement( 
            /* [retval][out] */ unsigned long *pulProxyPreAuthRequirement) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_GatewayPreAuthServerAddr( 
            /* [in] */ BSTR pbstrProxyPreAuthServerAddr) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_GatewayPreAuthServerAddr( 
            /* [retval][out] */ BSTR *pbstrProxyPreAuthServerAddr) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_GatewaySupportUrl( 
            /* [in] */ BSTR pbstrProxySupportUrl) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_GatewaySupportUrl( 
            /* [retval][out] */ BSTR *pbstrProxySupportUrl) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_GatewayEncryptedOtpCookie( 
            /* [in] */ BSTR pbstrEncryptedOtpCookie) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_GatewayEncryptedOtpCookie( 
            /* [retval][out] */ BSTR *pbstrEncryptedOtpCookie) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_GatewayEncryptedOtpCookieSize( 
            /* [in] */ unsigned long pulEncryptedOtpCookieSize) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_GatewayEncryptedOtpCookieSize( 
            /* [retval][out] */ unsigned long *pulEncryptedOtpCookieSize) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_GatewayUsername( 
            /* [in] */ BSTR pProxyUsername) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_GatewayUsername( 
            /* [retval][out] */ BSTR *pProxyUsername) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_GatewayDomain( 
            /* [in] */ BSTR pProxyDomain) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_GatewayDomain( 
            /* [retval][out] */ BSTR *pProxyDomain) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_GatewayPassword( 
            /* [in] */ BSTR rhs) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMsRdpClientTransportSettings2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClientTransportSettings2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClientTransportSettings2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClientTransportSettings2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClientTransportSettings2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClientTransportSettings2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClientTransportSettings2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClientTransportSettings2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayHostname )( 
            IMsRdpClientTransportSettings2 * This,
            /* [in] */ BSTR pProxyHostname);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayHostname )( 
            IMsRdpClientTransportSettings2 * This,
            /* [retval][out] */ BSTR *pProxyHostname);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayUsageMethod )( 
            IMsRdpClientTransportSettings2 * This,
            /* [in] */ unsigned long pulProxyUsageMethod);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayUsageMethod )( 
            IMsRdpClientTransportSettings2 * This,
            /* [retval][out] */ unsigned long *pulProxyUsageMethod);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayProfileUsageMethod )( 
            IMsRdpClientTransportSettings2 * This,
            /* [in] */ unsigned long pulProxyProfileUsageMethod);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayProfileUsageMethod )( 
            IMsRdpClientTransportSettings2 * This,
            /* [retval][out] */ unsigned long *pulProxyProfileUsageMethod);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayCredsSource )( 
            IMsRdpClientTransportSettings2 * This,
            /* [in] */ unsigned long pulProxyCredsSource);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayCredsSource )( 
            IMsRdpClientTransportSettings2 * This,
            /* [retval][out] */ unsigned long *pulProxyCredsSource);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayUserSelectedCredsSource )( 
            IMsRdpClientTransportSettings2 * This,
            /* [in] */ unsigned long pulProxyCredsSource);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayUserSelectedCredsSource )( 
            IMsRdpClientTransportSettings2 * This,
            /* [retval][out] */ unsigned long *pulProxyCredsSource);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayIsSupported )( 
            IMsRdpClientTransportSettings2 * This,
            /* [retval][out] */ long *pfProxyIsSupported);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayDefaultUsageMethod )( 
            IMsRdpClientTransportSettings2 * This,
            /* [retval][out] */ unsigned long *pulProxyDefaultUsageMethod);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayCredSharing )( 
            IMsRdpClientTransportSettings2 * This,
            /* [in] */ unsigned long pulProxyCredSharing);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayCredSharing )( 
            IMsRdpClientTransportSettings2 * This,
            /* [retval][out] */ unsigned long *pulProxyCredSharing);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayPreAuthRequirement )( 
            IMsRdpClientTransportSettings2 * This,
            /* [in] */ unsigned long pulProxyPreAuthRequirement);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayPreAuthRequirement )( 
            IMsRdpClientTransportSettings2 * This,
            /* [retval][out] */ unsigned long *pulProxyPreAuthRequirement);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayPreAuthServerAddr )( 
            IMsRdpClientTransportSettings2 * This,
            /* [in] */ BSTR pbstrProxyPreAuthServerAddr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayPreAuthServerAddr )( 
            IMsRdpClientTransportSettings2 * This,
            /* [retval][out] */ BSTR *pbstrProxyPreAuthServerAddr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewaySupportUrl )( 
            IMsRdpClientTransportSettings2 * This,
            /* [in] */ BSTR pbstrProxySupportUrl);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewaySupportUrl )( 
            IMsRdpClientTransportSettings2 * This,
            /* [retval][out] */ BSTR *pbstrProxySupportUrl);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayEncryptedOtpCookie )( 
            IMsRdpClientTransportSettings2 * This,
            /* [in] */ BSTR pbstrEncryptedOtpCookie);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayEncryptedOtpCookie )( 
            IMsRdpClientTransportSettings2 * This,
            /* [retval][out] */ BSTR *pbstrEncryptedOtpCookie);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayEncryptedOtpCookieSize )( 
            IMsRdpClientTransportSettings2 * This,
            /* [in] */ unsigned long pulEncryptedOtpCookieSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayEncryptedOtpCookieSize )( 
            IMsRdpClientTransportSettings2 * This,
            /* [retval][out] */ unsigned long *pulEncryptedOtpCookieSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayUsername )( 
            IMsRdpClientTransportSettings2 * This,
            /* [in] */ BSTR pProxyUsername);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayUsername )( 
            IMsRdpClientTransportSettings2 * This,
            /* [retval][out] */ BSTR *pProxyUsername);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayDomain )( 
            IMsRdpClientTransportSettings2 * This,
            /* [in] */ BSTR pProxyDomain);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayDomain )( 
            IMsRdpClientTransportSettings2 * This,
            /* [retval][out] */ BSTR *pProxyDomain);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayPassword )( 
            IMsRdpClientTransportSettings2 * This,
            /* [in] */ BSTR rhs);
        
        END_INTERFACE
    } IMsRdpClientTransportSettings2Vtbl;

    interface IMsRdpClientTransportSettings2
    {
        CONST_VTBL struct IMsRdpClientTransportSettings2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClientTransportSettings2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClientTransportSettings2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClientTransportSettings2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClientTransportSettings2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClientTransportSettings2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClientTransportSettings2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClientTransportSettings2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMsRdpClientTransportSettings2_put_GatewayHostname(This,pProxyHostname)	\
    ( (This)->lpVtbl -> put_GatewayHostname(This,pProxyHostname) ) 

#define IMsRdpClientTransportSettings2_get_GatewayHostname(This,pProxyHostname)	\
    ( (This)->lpVtbl -> get_GatewayHostname(This,pProxyHostname) ) 

#define IMsRdpClientTransportSettings2_put_GatewayUsageMethod(This,pulProxyUsageMethod)	\
    ( (This)->lpVtbl -> put_GatewayUsageMethod(This,pulProxyUsageMethod) ) 

#define IMsRdpClientTransportSettings2_get_GatewayUsageMethod(This,pulProxyUsageMethod)	\
    ( (This)->lpVtbl -> get_GatewayUsageMethod(This,pulProxyUsageMethod) ) 

#define IMsRdpClientTransportSettings2_put_GatewayProfileUsageMethod(This,pulProxyProfileUsageMethod)	\
    ( (This)->lpVtbl -> put_GatewayProfileUsageMethod(This,pulProxyProfileUsageMethod) ) 

#define IMsRdpClientTransportSettings2_get_GatewayProfileUsageMethod(This,pulProxyProfileUsageMethod)	\
    ( (This)->lpVtbl -> get_GatewayProfileUsageMethod(This,pulProxyProfileUsageMethod) ) 

#define IMsRdpClientTransportSettings2_put_GatewayCredsSource(This,pulProxyCredsSource)	\
    ( (This)->lpVtbl -> put_GatewayCredsSource(This,pulProxyCredsSource) ) 

#define IMsRdpClientTransportSettings2_get_GatewayCredsSource(This,pulProxyCredsSource)	\
    ( (This)->lpVtbl -> get_GatewayCredsSource(This,pulProxyCredsSource) ) 

#define IMsRdpClientTransportSettings2_put_GatewayUserSelectedCredsSource(This,pulProxyCredsSource)	\
    ( (This)->lpVtbl -> put_GatewayUserSelectedCredsSource(This,pulProxyCredsSource) ) 

#define IMsRdpClientTransportSettings2_get_GatewayUserSelectedCredsSource(This,pulProxyCredsSource)	\
    ( (This)->lpVtbl -> get_GatewayUserSelectedCredsSource(This,pulProxyCredsSource) ) 

#define IMsRdpClientTransportSettings2_get_GatewayIsSupported(This,pfProxyIsSupported)	\
    ( (This)->lpVtbl -> get_GatewayIsSupported(This,pfProxyIsSupported) ) 

#define IMsRdpClientTransportSettings2_get_GatewayDefaultUsageMethod(This,pulProxyDefaultUsageMethod)	\
    ( (This)->lpVtbl -> get_GatewayDefaultUsageMethod(This,pulProxyDefaultUsageMethod) ) 


#define IMsRdpClientTransportSettings2_put_GatewayCredSharing(This,pulProxyCredSharing)	\
    ( (This)->lpVtbl -> put_GatewayCredSharing(This,pulProxyCredSharing) ) 

#define IMsRdpClientTransportSettings2_get_GatewayCredSharing(This,pulProxyCredSharing)	\
    ( (This)->lpVtbl -> get_GatewayCredSharing(This,pulProxyCredSharing) ) 

#define IMsRdpClientTransportSettings2_put_GatewayPreAuthRequirement(This,pulProxyPreAuthRequirement)	\
    ( (This)->lpVtbl -> put_GatewayPreAuthRequirement(This,pulProxyPreAuthRequirement) ) 

#define IMsRdpClientTransportSettings2_get_GatewayPreAuthRequirement(This,pulProxyPreAuthRequirement)	\
    ( (This)->lpVtbl -> get_GatewayPreAuthRequirement(This,pulProxyPreAuthRequirement) ) 

#define IMsRdpClientTransportSettings2_put_GatewayPreAuthServerAddr(This,pbstrProxyPreAuthServerAddr)	\
    ( (This)->lpVtbl -> put_GatewayPreAuthServerAddr(This,pbstrProxyPreAuthServerAddr) ) 

#define IMsRdpClientTransportSettings2_get_GatewayPreAuthServerAddr(This,pbstrProxyPreAuthServerAddr)	\
    ( (This)->lpVtbl -> get_GatewayPreAuthServerAddr(This,pbstrProxyPreAuthServerAddr) ) 

#define IMsRdpClientTransportSettings2_put_GatewaySupportUrl(This,pbstrProxySupportUrl)	\
    ( (This)->lpVtbl -> put_GatewaySupportUrl(This,pbstrProxySupportUrl) ) 

#define IMsRdpClientTransportSettings2_get_GatewaySupportUrl(This,pbstrProxySupportUrl)	\
    ( (This)->lpVtbl -> get_GatewaySupportUrl(This,pbstrProxySupportUrl) ) 

#define IMsRdpClientTransportSettings2_put_GatewayEncryptedOtpCookie(This,pbstrEncryptedOtpCookie)	\
    ( (This)->lpVtbl -> put_GatewayEncryptedOtpCookie(This,pbstrEncryptedOtpCookie) ) 

#define IMsRdpClientTransportSettings2_get_GatewayEncryptedOtpCookie(This,pbstrEncryptedOtpCookie)	\
    ( (This)->lpVtbl -> get_GatewayEncryptedOtpCookie(This,pbstrEncryptedOtpCookie) ) 

#define IMsRdpClientTransportSettings2_put_GatewayEncryptedOtpCookieSize(This,pulEncryptedOtpCookieSize)	\
    ( (This)->lpVtbl -> put_GatewayEncryptedOtpCookieSize(This,pulEncryptedOtpCookieSize) ) 

#define IMsRdpClientTransportSettings2_get_GatewayEncryptedOtpCookieSize(This,pulEncryptedOtpCookieSize)	\
    ( (This)->lpVtbl -> get_GatewayEncryptedOtpCookieSize(This,pulEncryptedOtpCookieSize) ) 

#define IMsRdpClientTransportSettings2_put_GatewayUsername(This,pProxyUsername)	\
    ( (This)->lpVtbl -> put_GatewayUsername(This,pProxyUsername) ) 

#define IMsRdpClientTransportSettings2_get_GatewayUsername(This,pProxyUsername)	\
    ( (This)->lpVtbl -> get_GatewayUsername(This,pProxyUsername) ) 

#define IMsRdpClientTransportSettings2_put_GatewayDomain(This,pProxyDomain)	\
    ( (This)->lpVtbl -> put_GatewayDomain(This,pProxyDomain) ) 

#define IMsRdpClientTransportSettings2_get_GatewayDomain(This,pProxyDomain)	\
    ( (This)->lpVtbl -> get_GatewayDomain(This,pProxyDomain) ) 

#define IMsRdpClientTransportSettings2_put_GatewayPassword(This,rhs)	\
    ( (This)->lpVtbl -> put_GatewayPassword(This,rhs) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMsRdpClientTransportSettings2_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClientTransportSettings3_INTERFACE_DEFINED__
#define __IMsRdpClientTransportSettings3_INTERFACE_DEFINED__

/* interface IMsRdpClientTransportSettings3 */
/* [oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClientTransportSettings3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3D5B21AC-748D-41DE-8F30-E15169586BD4")
    IMsRdpClientTransportSettings3 : public IMsRdpClientTransportSettings2
    {
    public:
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_GatewayCredSourceCookie( 
            /* [in] */ unsigned long pulProxyCredSourceCookie) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_GatewayCredSourceCookie( 
            /* [retval][out] */ unsigned long *pulProxyCredSourceCookie) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_GatewayAuthCookieServerAddr( 
            /* [in] */ BSTR pbstrProxyAuthCookieServerAddr) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_GatewayAuthCookieServerAddr( 
            /* [retval][out] */ BSTR *pbstrProxyAuthCookieServerAddr) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_GatewayEncryptedAuthCookie( 
            /* [in] */ BSTR pbstrEncryptedAuthCookie) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_GatewayEncryptedAuthCookie( 
            /* [retval][out] */ BSTR *pbstrEncryptedAuthCookie) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_GatewayEncryptedAuthCookieSize( 
            /* [in] */ unsigned long pulEncryptedAuthCookieSize) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_GatewayEncryptedAuthCookieSize( 
            /* [retval][out] */ unsigned long *pulEncryptedAuthCookieSize) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_GatewayAuthLoginPage( 
            /* [in] */ BSTR pbstrProxyAuthLoginPage) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_GatewayAuthLoginPage( 
            /* [retval][out] */ BSTR *pbstrProxyAuthLoginPage) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMsRdpClientTransportSettings3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClientTransportSettings3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClientTransportSettings3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClientTransportSettings3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClientTransportSettings3 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClientTransportSettings3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClientTransportSettings3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClientTransportSettings3 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayHostname )( 
            IMsRdpClientTransportSettings3 * This,
            /* [in] */ BSTR pProxyHostname);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayHostname )( 
            IMsRdpClientTransportSettings3 * This,
            /* [retval][out] */ BSTR *pProxyHostname);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayUsageMethod )( 
            IMsRdpClientTransportSettings3 * This,
            /* [in] */ unsigned long pulProxyUsageMethod);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayUsageMethod )( 
            IMsRdpClientTransportSettings3 * This,
            /* [retval][out] */ unsigned long *pulProxyUsageMethod);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayProfileUsageMethod )( 
            IMsRdpClientTransportSettings3 * This,
            /* [in] */ unsigned long pulProxyProfileUsageMethod);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayProfileUsageMethod )( 
            IMsRdpClientTransportSettings3 * This,
            /* [retval][out] */ unsigned long *pulProxyProfileUsageMethod);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayCredsSource )( 
            IMsRdpClientTransportSettings3 * This,
            /* [in] */ unsigned long pulProxyCredsSource);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayCredsSource )( 
            IMsRdpClientTransportSettings3 * This,
            /* [retval][out] */ unsigned long *pulProxyCredsSource);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayUserSelectedCredsSource )( 
            IMsRdpClientTransportSettings3 * This,
            /* [in] */ unsigned long pulProxyCredsSource);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayUserSelectedCredsSource )( 
            IMsRdpClientTransportSettings3 * This,
            /* [retval][out] */ unsigned long *pulProxyCredsSource);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayIsSupported )( 
            IMsRdpClientTransportSettings3 * This,
            /* [retval][out] */ long *pfProxyIsSupported);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayDefaultUsageMethod )( 
            IMsRdpClientTransportSettings3 * This,
            /* [retval][out] */ unsigned long *pulProxyDefaultUsageMethod);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayCredSharing )( 
            IMsRdpClientTransportSettings3 * This,
            /* [in] */ unsigned long pulProxyCredSharing);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayCredSharing )( 
            IMsRdpClientTransportSettings3 * This,
            /* [retval][out] */ unsigned long *pulProxyCredSharing);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayPreAuthRequirement )( 
            IMsRdpClientTransportSettings3 * This,
            /* [in] */ unsigned long pulProxyPreAuthRequirement);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayPreAuthRequirement )( 
            IMsRdpClientTransportSettings3 * This,
            /* [retval][out] */ unsigned long *pulProxyPreAuthRequirement);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayPreAuthServerAddr )( 
            IMsRdpClientTransportSettings3 * This,
            /* [in] */ BSTR pbstrProxyPreAuthServerAddr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayPreAuthServerAddr )( 
            IMsRdpClientTransportSettings3 * This,
            /* [retval][out] */ BSTR *pbstrProxyPreAuthServerAddr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewaySupportUrl )( 
            IMsRdpClientTransportSettings3 * This,
            /* [in] */ BSTR pbstrProxySupportUrl);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewaySupportUrl )( 
            IMsRdpClientTransportSettings3 * This,
            /* [retval][out] */ BSTR *pbstrProxySupportUrl);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayEncryptedOtpCookie )( 
            IMsRdpClientTransportSettings3 * This,
            /* [in] */ BSTR pbstrEncryptedOtpCookie);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayEncryptedOtpCookie )( 
            IMsRdpClientTransportSettings3 * This,
            /* [retval][out] */ BSTR *pbstrEncryptedOtpCookie);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayEncryptedOtpCookieSize )( 
            IMsRdpClientTransportSettings3 * This,
            /* [in] */ unsigned long pulEncryptedOtpCookieSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayEncryptedOtpCookieSize )( 
            IMsRdpClientTransportSettings3 * This,
            /* [retval][out] */ unsigned long *pulEncryptedOtpCookieSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayUsername )( 
            IMsRdpClientTransportSettings3 * This,
            /* [in] */ BSTR pProxyUsername);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayUsername )( 
            IMsRdpClientTransportSettings3 * This,
            /* [retval][out] */ BSTR *pProxyUsername);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayDomain )( 
            IMsRdpClientTransportSettings3 * This,
            /* [in] */ BSTR pProxyDomain);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayDomain )( 
            IMsRdpClientTransportSettings3 * This,
            /* [retval][out] */ BSTR *pProxyDomain);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayPassword )( 
            IMsRdpClientTransportSettings3 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayCredSourceCookie )( 
            IMsRdpClientTransportSettings3 * This,
            /* [in] */ unsigned long pulProxyCredSourceCookie);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayCredSourceCookie )( 
            IMsRdpClientTransportSettings3 * This,
            /* [retval][out] */ unsigned long *pulProxyCredSourceCookie);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayAuthCookieServerAddr )( 
            IMsRdpClientTransportSettings3 * This,
            /* [in] */ BSTR pbstrProxyAuthCookieServerAddr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayAuthCookieServerAddr )( 
            IMsRdpClientTransportSettings3 * This,
            /* [retval][out] */ BSTR *pbstrProxyAuthCookieServerAddr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayEncryptedAuthCookie )( 
            IMsRdpClientTransportSettings3 * This,
            /* [in] */ BSTR pbstrEncryptedAuthCookie);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayEncryptedAuthCookie )( 
            IMsRdpClientTransportSettings3 * This,
            /* [retval][out] */ BSTR *pbstrEncryptedAuthCookie);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayEncryptedAuthCookieSize )( 
            IMsRdpClientTransportSettings3 * This,
            /* [in] */ unsigned long pulEncryptedAuthCookieSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayEncryptedAuthCookieSize )( 
            IMsRdpClientTransportSettings3 * This,
            /* [retval][out] */ unsigned long *pulEncryptedAuthCookieSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayAuthLoginPage )( 
            IMsRdpClientTransportSettings3 * This,
            /* [in] */ BSTR pbstrProxyAuthLoginPage);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayAuthLoginPage )( 
            IMsRdpClientTransportSettings3 * This,
            /* [retval][out] */ BSTR *pbstrProxyAuthLoginPage);
        
        END_INTERFACE
    } IMsRdpClientTransportSettings3Vtbl;

    interface IMsRdpClientTransportSettings3
    {
        CONST_VTBL struct IMsRdpClientTransportSettings3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClientTransportSettings3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClientTransportSettings3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClientTransportSettings3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClientTransportSettings3_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClientTransportSettings3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClientTransportSettings3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClientTransportSettings3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMsRdpClientTransportSettings3_put_GatewayHostname(This,pProxyHostname)	\
    ( (This)->lpVtbl -> put_GatewayHostname(This,pProxyHostname) ) 

#define IMsRdpClientTransportSettings3_get_GatewayHostname(This,pProxyHostname)	\
    ( (This)->lpVtbl -> get_GatewayHostname(This,pProxyHostname) ) 

#define IMsRdpClientTransportSettings3_put_GatewayUsageMethod(This,pulProxyUsageMethod)	\
    ( (This)->lpVtbl -> put_GatewayUsageMethod(This,pulProxyUsageMethod) ) 

#define IMsRdpClientTransportSettings3_get_GatewayUsageMethod(This,pulProxyUsageMethod)	\
    ( (This)->lpVtbl -> get_GatewayUsageMethod(This,pulProxyUsageMethod) ) 

#define IMsRdpClientTransportSettings3_put_GatewayProfileUsageMethod(This,pulProxyProfileUsageMethod)	\
    ( (This)->lpVtbl -> put_GatewayProfileUsageMethod(This,pulProxyProfileUsageMethod) ) 

#define IMsRdpClientTransportSettings3_get_GatewayProfileUsageMethod(This,pulProxyProfileUsageMethod)	\
    ( (This)->lpVtbl -> get_GatewayProfileUsageMethod(This,pulProxyProfileUsageMethod) ) 

#define IMsRdpClientTransportSettings3_put_GatewayCredsSource(This,pulProxyCredsSource)	\
    ( (This)->lpVtbl -> put_GatewayCredsSource(This,pulProxyCredsSource) ) 

#define IMsRdpClientTransportSettings3_get_GatewayCredsSource(This,pulProxyCredsSource)	\
    ( (This)->lpVtbl -> get_GatewayCredsSource(This,pulProxyCredsSource) ) 

#define IMsRdpClientTransportSettings3_put_GatewayUserSelectedCredsSource(This,pulProxyCredsSource)	\
    ( (This)->lpVtbl -> put_GatewayUserSelectedCredsSource(This,pulProxyCredsSource) ) 

#define IMsRdpClientTransportSettings3_get_GatewayUserSelectedCredsSource(This,pulProxyCredsSource)	\
    ( (This)->lpVtbl -> get_GatewayUserSelectedCredsSource(This,pulProxyCredsSource) ) 

#define IMsRdpClientTransportSettings3_get_GatewayIsSupported(This,pfProxyIsSupported)	\
    ( (This)->lpVtbl -> get_GatewayIsSupported(This,pfProxyIsSupported) ) 

#define IMsRdpClientTransportSettings3_get_GatewayDefaultUsageMethod(This,pulProxyDefaultUsageMethod)	\
    ( (This)->lpVtbl -> get_GatewayDefaultUsageMethod(This,pulProxyDefaultUsageMethod) ) 


#define IMsRdpClientTransportSettings3_put_GatewayCredSharing(This,pulProxyCredSharing)	\
    ( (This)->lpVtbl -> put_GatewayCredSharing(This,pulProxyCredSharing) ) 

#define IMsRdpClientTransportSettings3_get_GatewayCredSharing(This,pulProxyCredSharing)	\
    ( (This)->lpVtbl -> get_GatewayCredSharing(This,pulProxyCredSharing) ) 

#define IMsRdpClientTransportSettings3_put_GatewayPreAuthRequirement(This,pulProxyPreAuthRequirement)	\
    ( (This)->lpVtbl -> put_GatewayPreAuthRequirement(This,pulProxyPreAuthRequirement) ) 

#define IMsRdpClientTransportSettings3_get_GatewayPreAuthRequirement(This,pulProxyPreAuthRequirement)	\
    ( (This)->lpVtbl -> get_GatewayPreAuthRequirement(This,pulProxyPreAuthRequirement) ) 

#define IMsRdpClientTransportSettings3_put_GatewayPreAuthServerAddr(This,pbstrProxyPreAuthServerAddr)	\
    ( (This)->lpVtbl -> put_GatewayPreAuthServerAddr(This,pbstrProxyPreAuthServerAddr) ) 

#define IMsRdpClientTransportSettings3_get_GatewayPreAuthServerAddr(This,pbstrProxyPreAuthServerAddr)	\
    ( (This)->lpVtbl -> get_GatewayPreAuthServerAddr(This,pbstrProxyPreAuthServerAddr) ) 

#define IMsRdpClientTransportSettings3_put_GatewaySupportUrl(This,pbstrProxySupportUrl)	\
    ( (This)->lpVtbl -> put_GatewaySupportUrl(This,pbstrProxySupportUrl) ) 

#define IMsRdpClientTransportSettings3_get_GatewaySupportUrl(This,pbstrProxySupportUrl)	\
    ( (This)->lpVtbl -> get_GatewaySupportUrl(This,pbstrProxySupportUrl) ) 

#define IMsRdpClientTransportSettings3_put_GatewayEncryptedOtpCookie(This,pbstrEncryptedOtpCookie)	\
    ( (This)->lpVtbl -> put_GatewayEncryptedOtpCookie(This,pbstrEncryptedOtpCookie) ) 

#define IMsRdpClientTransportSettings3_get_GatewayEncryptedOtpCookie(This,pbstrEncryptedOtpCookie)	\
    ( (This)->lpVtbl -> get_GatewayEncryptedOtpCookie(This,pbstrEncryptedOtpCookie) ) 

#define IMsRdpClientTransportSettings3_put_GatewayEncryptedOtpCookieSize(This,pulEncryptedOtpCookieSize)	\
    ( (This)->lpVtbl -> put_GatewayEncryptedOtpCookieSize(This,pulEncryptedOtpCookieSize) ) 

#define IMsRdpClientTransportSettings3_get_GatewayEncryptedOtpCookieSize(This,pulEncryptedOtpCookieSize)	\
    ( (This)->lpVtbl -> get_GatewayEncryptedOtpCookieSize(This,pulEncryptedOtpCookieSize) ) 

#define IMsRdpClientTransportSettings3_put_GatewayUsername(This,pProxyUsername)	\
    ( (This)->lpVtbl -> put_GatewayUsername(This,pProxyUsername) ) 

#define IMsRdpClientTransportSettings3_get_GatewayUsername(This,pProxyUsername)	\
    ( (This)->lpVtbl -> get_GatewayUsername(This,pProxyUsername) ) 

#define IMsRdpClientTransportSettings3_put_GatewayDomain(This,pProxyDomain)	\
    ( (This)->lpVtbl -> put_GatewayDomain(This,pProxyDomain) ) 

#define IMsRdpClientTransportSettings3_get_GatewayDomain(This,pProxyDomain)	\
    ( (This)->lpVtbl -> get_GatewayDomain(This,pProxyDomain) ) 

#define IMsRdpClientTransportSettings3_put_GatewayPassword(This,rhs)	\
    ( (This)->lpVtbl -> put_GatewayPassword(This,rhs) ) 


#define IMsRdpClientTransportSettings3_put_GatewayCredSourceCookie(This,pulProxyCredSourceCookie)	\
    ( (This)->lpVtbl -> put_GatewayCredSourceCookie(This,pulProxyCredSourceCookie) ) 

#define IMsRdpClientTransportSettings3_get_GatewayCredSourceCookie(This,pulProxyCredSourceCookie)	\
    ( (This)->lpVtbl -> get_GatewayCredSourceCookie(This,pulProxyCredSourceCookie) ) 

#define IMsRdpClientTransportSettings3_put_GatewayAuthCookieServerAddr(This,pbstrProxyAuthCookieServerAddr)	\
    ( (This)->lpVtbl -> put_GatewayAuthCookieServerAddr(This,pbstrProxyAuthCookieServerAddr) ) 

#define IMsRdpClientTransportSettings3_get_GatewayAuthCookieServerAddr(This,pbstrProxyAuthCookieServerAddr)	\
    ( (This)->lpVtbl -> get_GatewayAuthCookieServerAddr(This,pbstrProxyAuthCookieServerAddr) ) 

#define IMsRdpClientTransportSettings3_put_GatewayEncryptedAuthCookie(This,pbstrEncryptedAuthCookie)	\
    ( (This)->lpVtbl -> put_GatewayEncryptedAuthCookie(This,pbstrEncryptedAuthCookie) ) 

#define IMsRdpClientTransportSettings3_get_GatewayEncryptedAuthCookie(This,pbstrEncryptedAuthCookie)	\
    ( (This)->lpVtbl -> get_GatewayEncryptedAuthCookie(This,pbstrEncryptedAuthCookie) ) 

#define IMsRdpClientTransportSettings3_put_GatewayEncryptedAuthCookieSize(This,pulEncryptedAuthCookieSize)	\
    ( (This)->lpVtbl -> put_GatewayEncryptedAuthCookieSize(This,pulEncryptedAuthCookieSize) ) 

#define IMsRdpClientTransportSettings3_get_GatewayEncryptedAuthCookieSize(This,pulEncryptedAuthCookieSize)	\
    ( (This)->lpVtbl -> get_GatewayEncryptedAuthCookieSize(This,pulEncryptedAuthCookieSize) ) 

#define IMsRdpClientTransportSettings3_put_GatewayAuthLoginPage(This,pbstrProxyAuthLoginPage)	\
    ( (This)->lpVtbl -> put_GatewayAuthLoginPage(This,pbstrProxyAuthLoginPage) ) 

#define IMsRdpClientTransportSettings3_get_GatewayAuthLoginPage(This,pbstrProxyAuthLoginPage)	\
    ( (This)->lpVtbl -> get_GatewayAuthLoginPage(This,pbstrProxyAuthLoginPage) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMsRdpClientTransportSettings3_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClientTransportSettings4_INTERFACE_DEFINED__
#define __IMsRdpClientTransportSettings4_INTERFACE_DEFINED__

/* interface IMsRdpClientTransportSettings4 */
/* [oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClientTransportSettings4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("011C3236-4D81-4515-9143-067AB630D299")
    IMsRdpClientTransportSettings4 : public IMsRdpClientTransportSettings3
    {
    public:
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_GatewayBrokeringType( 
            /* [in] */ unsigned long rhs) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMsRdpClientTransportSettings4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClientTransportSettings4 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClientTransportSettings4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClientTransportSettings4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClientTransportSettings4 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClientTransportSettings4 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClientTransportSettings4 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClientTransportSettings4 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayHostname )( 
            IMsRdpClientTransportSettings4 * This,
            /* [in] */ BSTR pProxyHostname);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayHostname )( 
            IMsRdpClientTransportSettings4 * This,
            /* [retval][out] */ BSTR *pProxyHostname);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayUsageMethod )( 
            IMsRdpClientTransportSettings4 * This,
            /* [in] */ unsigned long pulProxyUsageMethod);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayUsageMethod )( 
            IMsRdpClientTransportSettings4 * This,
            /* [retval][out] */ unsigned long *pulProxyUsageMethod);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayProfileUsageMethod )( 
            IMsRdpClientTransportSettings4 * This,
            /* [in] */ unsigned long pulProxyProfileUsageMethod);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayProfileUsageMethod )( 
            IMsRdpClientTransportSettings4 * This,
            /* [retval][out] */ unsigned long *pulProxyProfileUsageMethod);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayCredsSource )( 
            IMsRdpClientTransportSettings4 * This,
            /* [in] */ unsigned long pulProxyCredsSource);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayCredsSource )( 
            IMsRdpClientTransportSettings4 * This,
            /* [retval][out] */ unsigned long *pulProxyCredsSource);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayUserSelectedCredsSource )( 
            IMsRdpClientTransportSettings4 * This,
            /* [in] */ unsigned long pulProxyCredsSource);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayUserSelectedCredsSource )( 
            IMsRdpClientTransportSettings4 * This,
            /* [retval][out] */ unsigned long *pulProxyCredsSource);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayIsSupported )( 
            IMsRdpClientTransportSettings4 * This,
            /* [retval][out] */ long *pfProxyIsSupported);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayDefaultUsageMethod )( 
            IMsRdpClientTransportSettings4 * This,
            /* [retval][out] */ unsigned long *pulProxyDefaultUsageMethod);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayCredSharing )( 
            IMsRdpClientTransportSettings4 * This,
            /* [in] */ unsigned long pulProxyCredSharing);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayCredSharing )( 
            IMsRdpClientTransportSettings4 * This,
            /* [retval][out] */ unsigned long *pulProxyCredSharing);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayPreAuthRequirement )( 
            IMsRdpClientTransportSettings4 * This,
            /* [in] */ unsigned long pulProxyPreAuthRequirement);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayPreAuthRequirement )( 
            IMsRdpClientTransportSettings4 * This,
            /* [retval][out] */ unsigned long *pulProxyPreAuthRequirement);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayPreAuthServerAddr )( 
            IMsRdpClientTransportSettings4 * This,
            /* [in] */ BSTR pbstrProxyPreAuthServerAddr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayPreAuthServerAddr )( 
            IMsRdpClientTransportSettings4 * This,
            /* [retval][out] */ BSTR *pbstrProxyPreAuthServerAddr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewaySupportUrl )( 
            IMsRdpClientTransportSettings4 * This,
            /* [in] */ BSTR pbstrProxySupportUrl);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewaySupportUrl )( 
            IMsRdpClientTransportSettings4 * This,
            /* [retval][out] */ BSTR *pbstrProxySupportUrl);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayEncryptedOtpCookie )( 
            IMsRdpClientTransportSettings4 * This,
            /* [in] */ BSTR pbstrEncryptedOtpCookie);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayEncryptedOtpCookie )( 
            IMsRdpClientTransportSettings4 * This,
            /* [retval][out] */ BSTR *pbstrEncryptedOtpCookie);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayEncryptedOtpCookieSize )( 
            IMsRdpClientTransportSettings4 * This,
            /* [in] */ unsigned long pulEncryptedOtpCookieSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayEncryptedOtpCookieSize )( 
            IMsRdpClientTransportSettings4 * This,
            /* [retval][out] */ unsigned long *pulEncryptedOtpCookieSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayUsername )( 
            IMsRdpClientTransportSettings4 * This,
            /* [in] */ BSTR pProxyUsername);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayUsername )( 
            IMsRdpClientTransportSettings4 * This,
            /* [retval][out] */ BSTR *pProxyUsername);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayDomain )( 
            IMsRdpClientTransportSettings4 * This,
            /* [in] */ BSTR pProxyDomain);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayDomain )( 
            IMsRdpClientTransportSettings4 * This,
            /* [retval][out] */ BSTR *pProxyDomain);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayPassword )( 
            IMsRdpClientTransportSettings4 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayCredSourceCookie )( 
            IMsRdpClientTransportSettings4 * This,
            /* [in] */ unsigned long pulProxyCredSourceCookie);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayCredSourceCookie )( 
            IMsRdpClientTransportSettings4 * This,
            /* [retval][out] */ unsigned long *pulProxyCredSourceCookie);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayAuthCookieServerAddr )( 
            IMsRdpClientTransportSettings4 * This,
            /* [in] */ BSTR pbstrProxyAuthCookieServerAddr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayAuthCookieServerAddr )( 
            IMsRdpClientTransportSettings4 * This,
            /* [retval][out] */ BSTR *pbstrProxyAuthCookieServerAddr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayEncryptedAuthCookie )( 
            IMsRdpClientTransportSettings4 * This,
            /* [in] */ BSTR pbstrEncryptedAuthCookie);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayEncryptedAuthCookie )( 
            IMsRdpClientTransportSettings4 * This,
            /* [retval][out] */ BSTR *pbstrEncryptedAuthCookie);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayEncryptedAuthCookieSize )( 
            IMsRdpClientTransportSettings4 * This,
            /* [in] */ unsigned long pulEncryptedAuthCookieSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayEncryptedAuthCookieSize )( 
            IMsRdpClientTransportSettings4 * This,
            /* [retval][out] */ unsigned long *pulEncryptedAuthCookieSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayAuthLoginPage )( 
            IMsRdpClientTransportSettings4 * This,
            /* [in] */ BSTR pbstrProxyAuthLoginPage);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GatewayAuthLoginPage )( 
            IMsRdpClientTransportSettings4 * This,
            /* [retval][out] */ BSTR *pbstrProxyAuthLoginPage);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GatewayBrokeringType )( 
            IMsRdpClientTransportSettings4 * This,
            /* [in] */ unsigned long rhs);
        
        END_INTERFACE
    } IMsRdpClientTransportSettings4Vtbl;

    interface IMsRdpClientTransportSettings4
    {
        CONST_VTBL struct IMsRdpClientTransportSettings4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClientTransportSettings4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClientTransportSettings4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClientTransportSettings4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClientTransportSettings4_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClientTransportSettings4_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClientTransportSettings4_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClientTransportSettings4_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMsRdpClientTransportSettings4_put_GatewayHostname(This,pProxyHostname)	\
    ( (This)->lpVtbl -> put_GatewayHostname(This,pProxyHostname) ) 

#define IMsRdpClientTransportSettings4_get_GatewayHostname(This,pProxyHostname)	\
    ( (This)->lpVtbl -> get_GatewayHostname(This,pProxyHostname) ) 

#define IMsRdpClientTransportSettings4_put_GatewayUsageMethod(This,pulProxyUsageMethod)	\
    ( (This)->lpVtbl -> put_GatewayUsageMethod(This,pulProxyUsageMethod) ) 

#define IMsRdpClientTransportSettings4_get_GatewayUsageMethod(This,pulProxyUsageMethod)	\
    ( (This)->lpVtbl -> get_GatewayUsageMethod(This,pulProxyUsageMethod) ) 

#define IMsRdpClientTransportSettings4_put_GatewayProfileUsageMethod(This,pulProxyProfileUsageMethod)	\
    ( (This)->lpVtbl -> put_GatewayProfileUsageMethod(This,pulProxyProfileUsageMethod) ) 

#define IMsRdpClientTransportSettings4_get_GatewayProfileUsageMethod(This,pulProxyProfileUsageMethod)	\
    ( (This)->lpVtbl -> get_GatewayProfileUsageMethod(This,pulProxyProfileUsageMethod) ) 

#define IMsRdpClientTransportSettings4_put_GatewayCredsSource(This,pulProxyCredsSource)	\
    ( (This)->lpVtbl -> put_GatewayCredsSource(This,pulProxyCredsSource) ) 

#define IMsRdpClientTransportSettings4_get_GatewayCredsSource(This,pulProxyCredsSource)	\
    ( (This)->lpVtbl -> get_GatewayCredsSource(This,pulProxyCredsSource) ) 

#define IMsRdpClientTransportSettings4_put_GatewayUserSelectedCredsSource(This,pulProxyCredsSource)	\
    ( (This)->lpVtbl -> put_GatewayUserSelectedCredsSource(This,pulProxyCredsSource) ) 

#define IMsRdpClientTransportSettings4_get_GatewayUserSelectedCredsSource(This,pulProxyCredsSource)	\
    ( (This)->lpVtbl -> get_GatewayUserSelectedCredsSource(This,pulProxyCredsSource) ) 

#define IMsRdpClientTransportSettings4_get_GatewayIsSupported(This,pfProxyIsSupported)	\
    ( (This)->lpVtbl -> get_GatewayIsSupported(This,pfProxyIsSupported) ) 

#define IMsRdpClientTransportSettings4_get_GatewayDefaultUsageMethod(This,pulProxyDefaultUsageMethod)	\
    ( (This)->lpVtbl -> get_GatewayDefaultUsageMethod(This,pulProxyDefaultUsageMethod) ) 


#define IMsRdpClientTransportSettings4_put_GatewayCredSharing(This,pulProxyCredSharing)	\
    ( (This)->lpVtbl -> put_GatewayCredSharing(This,pulProxyCredSharing) ) 

#define IMsRdpClientTransportSettings4_get_GatewayCredSharing(This,pulProxyCredSharing)	\
    ( (This)->lpVtbl -> get_GatewayCredSharing(This,pulProxyCredSharing) ) 

#define IMsRdpClientTransportSettings4_put_GatewayPreAuthRequirement(This,pulProxyPreAuthRequirement)	\
    ( (This)->lpVtbl -> put_GatewayPreAuthRequirement(This,pulProxyPreAuthRequirement) ) 

#define IMsRdpClientTransportSettings4_get_GatewayPreAuthRequirement(This,pulProxyPreAuthRequirement)	\
    ( (This)->lpVtbl -> get_GatewayPreAuthRequirement(This,pulProxyPreAuthRequirement) ) 

#define IMsRdpClientTransportSettings4_put_GatewayPreAuthServerAddr(This,pbstrProxyPreAuthServerAddr)	\
    ( (This)->lpVtbl -> put_GatewayPreAuthServerAddr(This,pbstrProxyPreAuthServerAddr) ) 

#define IMsRdpClientTransportSettings4_get_GatewayPreAuthServerAddr(This,pbstrProxyPreAuthServerAddr)	\
    ( (This)->lpVtbl -> get_GatewayPreAuthServerAddr(This,pbstrProxyPreAuthServerAddr) ) 

#define IMsRdpClientTransportSettings4_put_GatewaySupportUrl(This,pbstrProxySupportUrl)	\
    ( (This)->lpVtbl -> put_GatewaySupportUrl(This,pbstrProxySupportUrl) ) 

#define IMsRdpClientTransportSettings4_get_GatewaySupportUrl(This,pbstrProxySupportUrl)	\
    ( (This)->lpVtbl -> get_GatewaySupportUrl(This,pbstrProxySupportUrl) ) 

#define IMsRdpClientTransportSettings4_put_GatewayEncryptedOtpCookie(This,pbstrEncryptedOtpCookie)	\
    ( (This)->lpVtbl -> put_GatewayEncryptedOtpCookie(This,pbstrEncryptedOtpCookie) ) 

#define IMsRdpClientTransportSettings4_get_GatewayEncryptedOtpCookie(This,pbstrEncryptedOtpCookie)	\
    ( (This)->lpVtbl -> get_GatewayEncryptedOtpCookie(This,pbstrEncryptedOtpCookie) ) 

#define IMsRdpClientTransportSettings4_put_GatewayEncryptedOtpCookieSize(This,pulEncryptedOtpCookieSize)	\
    ( (This)->lpVtbl -> put_GatewayEncryptedOtpCookieSize(This,pulEncryptedOtpCookieSize) ) 

#define IMsRdpClientTransportSettings4_get_GatewayEncryptedOtpCookieSize(This,pulEncryptedOtpCookieSize)	\
    ( (This)->lpVtbl -> get_GatewayEncryptedOtpCookieSize(This,pulEncryptedOtpCookieSize) ) 

#define IMsRdpClientTransportSettings4_put_GatewayUsername(This,pProxyUsername)	\
    ( (This)->lpVtbl -> put_GatewayUsername(This,pProxyUsername) ) 

#define IMsRdpClientTransportSettings4_get_GatewayUsername(This,pProxyUsername)	\
    ( (This)->lpVtbl -> get_GatewayUsername(This,pProxyUsername) ) 

#define IMsRdpClientTransportSettings4_put_GatewayDomain(This,pProxyDomain)	\
    ( (This)->lpVtbl -> put_GatewayDomain(This,pProxyDomain) ) 

#define IMsRdpClientTransportSettings4_get_GatewayDomain(This,pProxyDomain)	\
    ( (This)->lpVtbl -> get_GatewayDomain(This,pProxyDomain) ) 

#define IMsRdpClientTransportSettings4_put_GatewayPassword(This,rhs)	\
    ( (This)->lpVtbl -> put_GatewayPassword(This,rhs) ) 


#define IMsRdpClientTransportSettings4_put_GatewayCredSourceCookie(This,pulProxyCredSourceCookie)	\
    ( (This)->lpVtbl -> put_GatewayCredSourceCookie(This,pulProxyCredSourceCookie) ) 

#define IMsRdpClientTransportSettings4_get_GatewayCredSourceCookie(This,pulProxyCredSourceCookie)	\
    ( (This)->lpVtbl -> get_GatewayCredSourceCookie(This,pulProxyCredSourceCookie) ) 

#define IMsRdpClientTransportSettings4_put_GatewayAuthCookieServerAddr(This,pbstrProxyAuthCookieServerAddr)	\
    ( (This)->lpVtbl -> put_GatewayAuthCookieServerAddr(This,pbstrProxyAuthCookieServerAddr) ) 

#define IMsRdpClientTransportSettings4_get_GatewayAuthCookieServerAddr(This,pbstrProxyAuthCookieServerAddr)	\
    ( (This)->lpVtbl -> get_GatewayAuthCookieServerAddr(This,pbstrProxyAuthCookieServerAddr) ) 

#define IMsRdpClientTransportSettings4_put_GatewayEncryptedAuthCookie(This,pbstrEncryptedAuthCookie)	\
    ( (This)->lpVtbl -> put_GatewayEncryptedAuthCookie(This,pbstrEncryptedAuthCookie) ) 

#define IMsRdpClientTransportSettings4_get_GatewayEncryptedAuthCookie(This,pbstrEncryptedAuthCookie)	\
    ( (This)->lpVtbl -> get_GatewayEncryptedAuthCookie(This,pbstrEncryptedAuthCookie) ) 

#define IMsRdpClientTransportSettings4_put_GatewayEncryptedAuthCookieSize(This,pulEncryptedAuthCookieSize)	\
    ( (This)->lpVtbl -> put_GatewayEncryptedAuthCookieSize(This,pulEncryptedAuthCookieSize) ) 

#define IMsRdpClientTransportSettings4_get_GatewayEncryptedAuthCookieSize(This,pulEncryptedAuthCookieSize)	\
    ( (This)->lpVtbl -> get_GatewayEncryptedAuthCookieSize(This,pulEncryptedAuthCookieSize) ) 

#define IMsRdpClientTransportSettings4_put_GatewayAuthLoginPage(This,pbstrProxyAuthLoginPage)	\
    ( (This)->lpVtbl -> put_GatewayAuthLoginPage(This,pbstrProxyAuthLoginPage) ) 

#define IMsRdpClientTransportSettings4_get_GatewayAuthLoginPage(This,pbstrProxyAuthLoginPage)	\
    ( (This)->lpVtbl -> get_GatewayAuthLoginPage(This,pbstrProxyAuthLoginPage) ) 


#define IMsRdpClientTransportSettings4_put_GatewayBrokeringType(This,rhs)	\
    ( (This)->lpVtbl -> put_GatewayBrokeringType(This,rhs) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMsRdpClientTransportSettings4_INTERFACE_DEFINED__ */


#ifndef __ITSRemoteProgram_INTERFACE_DEFINED__
#define __ITSRemoteProgram_INTERFACE_DEFINED__

/* interface ITSRemoteProgram */
/* [oleautomation][dual][hidden][uuid][object] */ 


EXTERN_C const IID IID_ITSRemoteProgram;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FDD029F9-467A-4C49-8529-64B521DBD1B4")
    ITSRemoteProgram : public IDispatch
    {
    public:
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_RemoteProgramMode( 
            /* [in] */ VARIANT_BOOL pvboolRemoteProgramMode) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RemoteProgramMode( 
            /* [retval][out] */ VARIANT_BOOL *pvboolRemoteProgramMode) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ServerStartProgram( 
            /* [in] */ BSTR bstrExecutablePath,
            /* [in] */ BSTR bstrFilePath,
            /* [in] */ BSTR bstrWorkingDirectory,
            /* [in] */ VARIANT_BOOL vbExpandEnvVarInWorkingDirectoryOnServer,
            /* [in] */ BSTR bstrArguments,
            /* [in] */ VARIANT_BOOL vbExpandEnvVarInArgumentsOnServer) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITSRemoteProgramVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITSRemoteProgram * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITSRemoteProgram * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITSRemoteProgram * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITSRemoteProgram * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITSRemoteProgram * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITSRemoteProgram * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITSRemoteProgram * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RemoteProgramMode )( 
            ITSRemoteProgram * This,
            /* [in] */ VARIANT_BOOL pvboolRemoteProgramMode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RemoteProgramMode )( 
            ITSRemoteProgram * This,
            /* [retval][out] */ VARIANT_BOOL *pvboolRemoteProgramMode);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ServerStartProgram )( 
            ITSRemoteProgram * This,
            /* [in] */ BSTR bstrExecutablePath,
            /* [in] */ BSTR bstrFilePath,
            /* [in] */ BSTR bstrWorkingDirectory,
            /* [in] */ VARIANT_BOOL vbExpandEnvVarInWorkingDirectoryOnServer,
            /* [in] */ BSTR bstrArguments,
            /* [in] */ VARIANT_BOOL vbExpandEnvVarInArgumentsOnServer);
        
        END_INTERFACE
    } ITSRemoteProgramVtbl;

    interface ITSRemoteProgram
    {
        CONST_VTBL struct ITSRemoteProgramVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITSRemoteProgram_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITSRemoteProgram_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITSRemoteProgram_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITSRemoteProgram_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITSRemoteProgram_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITSRemoteProgram_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITSRemoteProgram_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITSRemoteProgram_put_RemoteProgramMode(This,pvboolRemoteProgramMode)	\
    ( (This)->lpVtbl -> put_RemoteProgramMode(This,pvboolRemoteProgramMode) ) 

#define ITSRemoteProgram_get_RemoteProgramMode(This,pvboolRemoteProgramMode)	\
    ( (This)->lpVtbl -> get_RemoteProgramMode(This,pvboolRemoteProgramMode) ) 

#define ITSRemoteProgram_ServerStartProgram(This,bstrExecutablePath,bstrFilePath,bstrWorkingDirectory,vbExpandEnvVarInWorkingDirectoryOnServer,bstrArguments,vbExpandEnvVarInArgumentsOnServer)	\
    ( (This)->lpVtbl -> ServerStartProgram(This,bstrExecutablePath,bstrFilePath,bstrWorkingDirectory,vbExpandEnvVarInWorkingDirectoryOnServer,bstrArguments,vbExpandEnvVarInArgumentsOnServer) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITSRemoteProgram_INTERFACE_DEFINED__ */


#ifndef __ITSRemoteProgram2_INTERFACE_DEFINED__
#define __ITSRemoteProgram2_INTERFACE_DEFINED__

/* interface ITSRemoteProgram2 */
/* [oleautomation][dual][hidden][uuid][object] */ 


EXTERN_C const IID IID_ITSRemoteProgram2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("92C38A7D-241A-418C-9936-099872C9AF20")
    ITSRemoteProgram2 : public ITSRemoteProgram
    {
    public:
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_RemoteApplicationName( 
            /* [in] */ BSTR rhs) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_RemoteApplicationProgram( 
            /* [in] */ BSTR rhs) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_RemoteApplicationArgs( 
            /* [in] */ BSTR rhs) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITSRemoteProgram2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITSRemoteProgram2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITSRemoteProgram2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITSRemoteProgram2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITSRemoteProgram2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITSRemoteProgram2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITSRemoteProgram2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITSRemoteProgram2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RemoteProgramMode )( 
            ITSRemoteProgram2 * This,
            /* [in] */ VARIANT_BOOL pvboolRemoteProgramMode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RemoteProgramMode )( 
            ITSRemoteProgram2 * This,
            /* [retval][out] */ VARIANT_BOOL *pvboolRemoteProgramMode);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ServerStartProgram )( 
            ITSRemoteProgram2 * This,
            /* [in] */ BSTR bstrExecutablePath,
            /* [in] */ BSTR bstrFilePath,
            /* [in] */ BSTR bstrWorkingDirectory,
            /* [in] */ VARIANT_BOOL vbExpandEnvVarInWorkingDirectoryOnServer,
            /* [in] */ BSTR bstrArguments,
            /* [in] */ VARIANT_BOOL vbExpandEnvVarInArgumentsOnServer);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RemoteApplicationName )( 
            ITSRemoteProgram2 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RemoteApplicationProgram )( 
            ITSRemoteProgram2 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RemoteApplicationArgs )( 
            ITSRemoteProgram2 * This,
            /* [in] */ BSTR rhs);
        
        END_INTERFACE
    } ITSRemoteProgram2Vtbl;

    interface ITSRemoteProgram2
    {
        CONST_VTBL struct ITSRemoteProgram2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITSRemoteProgram2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITSRemoteProgram2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITSRemoteProgram2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITSRemoteProgram2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITSRemoteProgram2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITSRemoteProgram2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITSRemoteProgram2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITSRemoteProgram2_put_RemoteProgramMode(This,pvboolRemoteProgramMode)	\
    ( (This)->lpVtbl -> put_RemoteProgramMode(This,pvboolRemoteProgramMode) ) 

#define ITSRemoteProgram2_get_RemoteProgramMode(This,pvboolRemoteProgramMode)	\
    ( (This)->lpVtbl -> get_RemoteProgramMode(This,pvboolRemoteProgramMode) ) 

#define ITSRemoteProgram2_ServerStartProgram(This,bstrExecutablePath,bstrFilePath,bstrWorkingDirectory,vbExpandEnvVarInWorkingDirectoryOnServer,bstrArguments,vbExpandEnvVarInArgumentsOnServer)	\
    ( (This)->lpVtbl -> ServerStartProgram(This,bstrExecutablePath,bstrFilePath,bstrWorkingDirectory,vbExpandEnvVarInWorkingDirectoryOnServer,bstrArguments,vbExpandEnvVarInArgumentsOnServer) ) 


#define ITSRemoteProgram2_put_RemoteApplicationName(This,rhs)	\
    ( (This)->lpVtbl -> put_RemoteApplicationName(This,rhs) ) 

#define ITSRemoteProgram2_put_RemoteApplicationProgram(This,rhs)	\
    ( (This)->lpVtbl -> put_RemoteApplicationProgram(This,rhs) ) 

#define ITSRemoteProgram2_put_RemoteApplicationArgs(This,rhs)	\
    ( (This)->lpVtbl -> put_RemoteApplicationArgs(This,rhs) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITSRemoteProgram2_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClientShell_INTERFACE_DEFINED__
#define __IMsRdpClientShell_INTERFACE_DEFINED__

/* interface IMsRdpClientShell */
/* [oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClientShell;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D012AE6D-C19A-4BFE-B367-201F8911F134")
    IMsRdpClientShell : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Launch( void) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_RdpFileContents( 
            /* [in] */ BSTR pszRdpFile) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RdpFileContents( 
            /* [retval][out] */ BSTR *pszRdpFile) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetRdpProperty( 
            /* [in] */ BSTR szProperty,
            /* [in] */ VARIANT Value) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetRdpProperty( 
            /* [in] */ BSTR szProperty,
            /* [retval][out] */ VARIANT *pValue) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_IsRemoteProgramClientInstalled( 
            /* [retval][out] */ VARIANT_BOOL *pbClientInstalled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PublicMode( 
            /* [in] */ VARIANT_BOOL pfPublicMode) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PublicMode( 
            /* [retval][out] */ VARIANT_BOOL *pfPublicMode) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowTrustedSitesManagementDialog( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMsRdpClientShellVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClientShell * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClientShell * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClientShell * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClientShell * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClientShell * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClientShell * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClientShell * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Launch )( 
            IMsRdpClientShell * This);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RdpFileContents )( 
            IMsRdpClientShell * This,
            /* [in] */ BSTR pszRdpFile);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RdpFileContents )( 
            IMsRdpClientShell * This,
            /* [retval][out] */ BSTR *pszRdpFile);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetRdpProperty )( 
            IMsRdpClientShell * This,
            /* [in] */ BSTR szProperty,
            /* [in] */ VARIANT Value);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetRdpProperty )( 
            IMsRdpClientShell * This,
            /* [in] */ BSTR szProperty,
            /* [retval][out] */ VARIANT *pValue);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsRemoteProgramClientInstalled )( 
            IMsRdpClientShell * This,
            /* [retval][out] */ VARIANT_BOOL *pbClientInstalled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PublicMode )( 
            IMsRdpClientShell * This,
            /* [in] */ VARIANT_BOOL pfPublicMode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PublicMode )( 
            IMsRdpClientShell * This,
            /* [retval][out] */ VARIANT_BOOL *pfPublicMode);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowTrustedSitesManagementDialog )( 
            IMsRdpClientShell * This);
        
        END_INTERFACE
    } IMsRdpClientShellVtbl;

    interface IMsRdpClientShell
    {
        CONST_VTBL struct IMsRdpClientShellVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClientShell_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClientShell_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClientShell_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClientShell_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClientShell_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClientShell_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClientShell_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMsRdpClientShell_Launch(This)	\
    ( (This)->lpVtbl -> Launch(This) ) 

#define IMsRdpClientShell_put_RdpFileContents(This,pszRdpFile)	\
    ( (This)->lpVtbl -> put_RdpFileContents(This,pszRdpFile) ) 

#define IMsRdpClientShell_get_RdpFileContents(This,pszRdpFile)	\
    ( (This)->lpVtbl -> get_RdpFileContents(This,pszRdpFile) ) 

#define IMsRdpClientShell_SetRdpProperty(This,szProperty,Value)	\
    ( (This)->lpVtbl -> SetRdpProperty(This,szProperty,Value) ) 

#define IMsRdpClientShell_GetRdpProperty(This,szProperty,pValue)	\
    ( (This)->lpVtbl -> GetRdpProperty(This,szProperty,pValue) ) 

#define IMsRdpClientShell_get_IsRemoteProgramClientInstalled(This,pbClientInstalled)	\
    ( (This)->lpVtbl -> get_IsRemoteProgramClientInstalled(This,pbClientInstalled) ) 

#define IMsRdpClientShell_put_PublicMode(This,pfPublicMode)	\
    ( (This)->lpVtbl -> put_PublicMode(This,pfPublicMode) ) 

#define IMsRdpClientShell_get_PublicMode(This,pfPublicMode)	\
    ( (This)->lpVtbl -> get_PublicMode(This,pfPublicMode) ) 

#define IMsRdpClientShell_ShowTrustedSitesManagementDialog(This)	\
    ( (This)->lpVtbl -> ShowTrustedSitesManagementDialog(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMsRdpClientShell_INTERFACE_DEFINED__ */


#ifndef __IMsRdpDevice_INTERFACE_DEFINED__
#define __IMsRdpDevice_INTERFACE_DEFINED__

/* interface IMsRdpDevice */
/* [uuid][object] */ 


EXTERN_C const IID IID_IMsRdpDevice;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("60C3B9C8-9E92-4F5E-A3E7-604A912093EA")
    IMsRdpDevice : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT __stdcall get_DeviceInstanceId( 
            /* [retval][out] */ BSTR *pDevInstanceId) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_FriendlyName( 
            /* [retval][out] */ BSTR *pFriendlyName) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_DeviceDescription( 
            /* [retval][out] */ BSTR *pDeviceDescription) = 0;
        
        virtual /* [propput] */ HRESULT __stdcall put_RedirectionState( 
            /* [in] */ VARIANT_BOOL pvboolRedirState) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_RedirectionState( 
            /* [retval][out] */ VARIANT_BOOL *pvboolRedirState) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMsRdpDeviceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpDevice * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpDevice * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpDevice * This);
        
        /* [propget] */ HRESULT ( __stdcall *get_DeviceInstanceId )( 
            IMsRdpDevice * This,
            /* [retval][out] */ BSTR *pDevInstanceId);
        
        /* [propget] */ HRESULT ( __stdcall *get_FriendlyName )( 
            IMsRdpDevice * This,
            /* [retval][out] */ BSTR *pFriendlyName);
        
        /* [propget] */ HRESULT ( __stdcall *get_DeviceDescription )( 
            IMsRdpDevice * This,
            /* [retval][out] */ BSTR *pDeviceDescription);
        
        /* [propput] */ HRESULT ( __stdcall *put_RedirectionState )( 
            IMsRdpDevice * This,
            /* [in] */ VARIANT_BOOL pvboolRedirState);
        
        /* [propget] */ HRESULT ( __stdcall *get_RedirectionState )( 
            IMsRdpDevice * This,
            /* [retval][out] */ VARIANT_BOOL *pvboolRedirState);
        
        END_INTERFACE
    } IMsRdpDeviceVtbl;

    interface IMsRdpDevice
    {
        CONST_VTBL struct IMsRdpDeviceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpDevice_get_DeviceInstanceId(This,pDevInstanceId)	\
    ( (This)->lpVtbl -> get_DeviceInstanceId(This,pDevInstanceId) ) 

#define IMsRdpDevice_get_FriendlyName(This,pFriendlyName)	\
    ( (This)->lpVtbl -> get_FriendlyName(This,pFriendlyName) ) 

#define IMsRdpDevice_get_DeviceDescription(This,pDeviceDescription)	\
    ( (This)->lpVtbl -> get_DeviceDescription(This,pDeviceDescription) ) 

#define IMsRdpDevice_put_RedirectionState(This,pvboolRedirState)	\
    ( (This)->lpVtbl -> put_RedirectionState(This,pvboolRedirState) ) 

#define IMsRdpDevice_get_RedirectionState(This,pvboolRedirState)	\
    ( (This)->lpVtbl -> get_RedirectionState(This,pvboolRedirState) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMsRdpDevice_INTERFACE_DEFINED__ */


#ifndef __IMsRdpDeviceCollection_INTERFACE_DEFINED__
#define __IMsRdpDeviceCollection_INTERFACE_DEFINED__

/* interface IMsRdpDeviceCollection */
/* [uuid][object] */ 


EXTERN_C const IID IID_IMsRdpDeviceCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("56540617-D281-488C-8738-6A8FDF64A118")
    IMsRdpDeviceCollection : public IUnknown
    {
    public:
        virtual HRESULT __stdcall RescanDevices( 
            /* [in] */ VARIANT_BOOL vboolDynRedir) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_DeviceByIndex( 
            /* [in] */ unsigned long index,
            /* [retval][out] */ IMsRdpDevice **ppDevice) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_DeviceById( 
            /* [in] */ BSTR devInstanceId,
            /* [retval][out] */ IMsRdpDevice **ppDevice) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_DeviceCount( 
            /* [retval][out] */ unsigned long *pDeviceCount) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMsRdpDeviceCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpDeviceCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpDeviceCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpDeviceCollection * This);
        
        HRESULT ( __stdcall *RescanDevices )( 
            IMsRdpDeviceCollection * This,
            /* [in] */ VARIANT_BOOL vboolDynRedir);
        
        /* [propget] */ HRESULT ( __stdcall *get_DeviceByIndex )( 
            IMsRdpDeviceCollection * This,
            /* [in] */ unsigned long index,
            /* [retval][out] */ IMsRdpDevice **ppDevice);
        
        /* [propget] */ HRESULT ( __stdcall *get_DeviceById )( 
            IMsRdpDeviceCollection * This,
            /* [in] */ BSTR devInstanceId,
            /* [retval][out] */ IMsRdpDevice **ppDevice);
        
        /* [propget] */ HRESULT ( __stdcall *get_DeviceCount )( 
            IMsRdpDeviceCollection * This,
            /* [retval][out] */ unsigned long *pDeviceCount);
        
        END_INTERFACE
    } IMsRdpDeviceCollectionVtbl;

    interface IMsRdpDeviceCollection
    {
        CONST_VTBL struct IMsRdpDeviceCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpDeviceCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpDeviceCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpDeviceCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpDeviceCollection_RescanDevices(This,vboolDynRedir)	\
    ( (This)->lpVtbl -> RescanDevices(This,vboolDynRedir) ) 

#define IMsRdpDeviceCollection_get_DeviceByIndex(This,index,ppDevice)	\
    ( (This)->lpVtbl -> get_DeviceByIndex(This,index,ppDevice) ) 

#define IMsRdpDeviceCollection_get_DeviceById(This,devInstanceId,ppDevice)	\
    ( (This)->lpVtbl -> get_DeviceById(This,devInstanceId,ppDevice) ) 

#define IMsRdpDeviceCollection_get_DeviceCount(This,pDeviceCount)	\
    ( (This)->lpVtbl -> get_DeviceCount(This,pDeviceCount) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMsRdpDeviceCollection_INTERFACE_DEFINED__ */


#ifndef __IMsRdpDrive_INTERFACE_DEFINED__
#define __IMsRdpDrive_INTERFACE_DEFINED__

/* interface IMsRdpDrive */
/* [uuid][object] */ 


EXTERN_C const IID IID_IMsRdpDrive;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D28B5458-F694-47A8-8E61-40356A767E46")
    IMsRdpDrive : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT __stdcall get_Name( 
            /* [retval][out] */ BSTR *pName) = 0;
        
        virtual /* [propput] */ HRESULT __stdcall put_RedirectionState( 
            /* [in] */ VARIANT_BOOL pvboolRedirState) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_RedirectionState( 
            /* [retval][out] */ VARIANT_BOOL *pvboolRedirState) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMsRdpDriveVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpDrive * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpDrive * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpDrive * This);
        
        /* [propget] */ HRESULT ( __stdcall *get_Name )( 
            IMsRdpDrive * This,
            /* [retval][out] */ BSTR *pName);
        
        /* [propput] */ HRESULT ( __stdcall *put_RedirectionState )( 
            IMsRdpDrive * This,
            /* [in] */ VARIANT_BOOL pvboolRedirState);
        
        /* [propget] */ HRESULT ( __stdcall *get_RedirectionState )( 
            IMsRdpDrive * This,
            /* [retval][out] */ VARIANT_BOOL *pvboolRedirState);
        
        END_INTERFACE
    } IMsRdpDriveVtbl;

    interface IMsRdpDrive
    {
        CONST_VTBL struct IMsRdpDriveVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpDrive_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpDrive_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpDrive_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpDrive_get_Name(This,pName)	\
    ( (This)->lpVtbl -> get_Name(This,pName) ) 

#define IMsRdpDrive_put_RedirectionState(This,pvboolRedirState)	\
    ( (This)->lpVtbl -> put_RedirectionState(This,pvboolRedirState) ) 

#define IMsRdpDrive_get_RedirectionState(This,pvboolRedirState)	\
    ( (This)->lpVtbl -> get_RedirectionState(This,pvboolRedirState) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMsRdpDrive_INTERFACE_DEFINED__ */


#ifndef __IMsRdpDriveCollection_INTERFACE_DEFINED__
#define __IMsRdpDriveCollection_INTERFACE_DEFINED__

/* interface IMsRdpDriveCollection */
/* [uuid][object] */ 


EXTERN_C const IID IID_IMsRdpDriveCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7FF17599-DA2C-4677-AD35-F60C04FE1585")
    IMsRdpDriveCollection : public IUnknown
    {
    public:
        virtual HRESULT __stdcall RescanDrives( 
            VARIANT_BOOL vboolDynRedir) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_DriveByIndex( 
            /* [in] */ unsigned long index,
            /* [retval][out] */ IMsRdpDrive **ppDevice) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_DriveCount( 
            /* [retval][out] */ unsigned long *pDriveCount) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMsRdpDriveCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpDriveCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpDriveCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpDriveCollection * This);
        
        HRESULT ( __stdcall *RescanDrives )( 
            IMsRdpDriveCollection * This,
            VARIANT_BOOL vboolDynRedir);
        
        /* [propget] */ HRESULT ( __stdcall *get_DriveByIndex )( 
            IMsRdpDriveCollection * This,
            /* [in] */ unsigned long index,
            /* [retval][out] */ IMsRdpDrive **ppDevice);
        
        /* [propget] */ HRESULT ( __stdcall *get_DriveCount )( 
            IMsRdpDriveCollection * This,
            /* [retval][out] */ unsigned long *pDriveCount);
        
        END_INTERFACE
    } IMsRdpDriveCollectionVtbl;

    interface IMsRdpDriveCollection
    {
        CONST_VTBL struct IMsRdpDriveCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpDriveCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpDriveCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpDriveCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpDriveCollection_RescanDrives(This,vboolDynRedir)	\
    ( (This)->lpVtbl -> RescanDrives(This,vboolDynRedir) ) 

#define IMsRdpDriveCollection_get_DriveByIndex(This,index,ppDevice)	\
    ( (This)->lpVtbl -> get_DriveByIndex(This,index,ppDevice) ) 

#define IMsRdpDriveCollection_get_DriveCount(This,pDriveCount)	\
    ( (This)->lpVtbl -> get_DriveCount(This,pDriveCount) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMsRdpDriveCollection_INTERFACE_DEFINED__ */


#ifndef __IMsTscNonScriptable_INTERFACE_DEFINED__
#define __IMsTscNonScriptable_INTERFACE_DEFINED__

/* interface IMsTscNonScriptable */
/* [uuid][object] */ 


EXTERN_C const IID IID_IMsTscNonScriptable;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C1E6743A-41C1-4A74-832A-0DD06C1C7A0E")
    IMsTscNonScriptable : public IUnknown
    {
    public:
        virtual /* [propput] */ HRESULT __stdcall put_ClearTextPassword( 
            /* [in] */ BSTR rhs) = 0;
        
        virtual /* [propput] */ HRESULT __stdcall put_PortablePassword( 
            /* [in] */ BSTR pPortablePass) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_PortablePassword( 
            /* [retval][out] */ BSTR *pPortablePass) = 0;
        
        virtual /* [propput] */ HRESULT __stdcall put_PortableSalt( 
            /* [in] */ BSTR pPortableSalt) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_PortableSalt( 
            /* [retval][out] */ BSTR *pPortableSalt) = 0;
        
        virtual /* [propput] */ HRESULT __stdcall put_BinaryPassword( 
            /* [in] */ BSTR pBinaryPassword) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_BinaryPassword( 
            /* [retval][out] */ BSTR *pBinaryPassword) = 0;
        
        virtual /* [propput] */ HRESULT __stdcall put_BinarySalt( 
            /* [in] */ BSTR pSalt) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_BinarySalt( 
            /* [retval][out] */ BSTR *pSalt) = 0;
        
        virtual HRESULT __stdcall ResetPassword( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMsTscNonScriptableVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsTscNonScriptable * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsTscNonScriptable * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsTscNonScriptable * This);
        
        /* [propput] */ HRESULT ( __stdcall *put_ClearTextPassword )( 
            IMsTscNonScriptable * This,
            /* [in] */ BSTR rhs);
        
        /* [propput] */ HRESULT ( __stdcall *put_PortablePassword )( 
            IMsTscNonScriptable * This,
            /* [in] */ BSTR pPortablePass);
        
        /* [propget] */ HRESULT ( __stdcall *get_PortablePassword )( 
            IMsTscNonScriptable * This,
            /* [retval][out] */ BSTR *pPortablePass);
        
        /* [propput] */ HRESULT ( __stdcall *put_PortableSalt )( 
            IMsTscNonScriptable * This,
            /* [in] */ BSTR pPortableSalt);
        
        /* [propget] */ HRESULT ( __stdcall *get_PortableSalt )( 
            IMsTscNonScriptable * This,
            /* [retval][out] */ BSTR *pPortableSalt);
        
        /* [propput] */ HRESULT ( __stdcall *put_BinaryPassword )( 
            IMsTscNonScriptable * This,
            /* [in] */ BSTR pBinaryPassword);
        
        /* [propget] */ HRESULT ( __stdcall *get_BinaryPassword )( 
            IMsTscNonScriptable * This,
            /* [retval][out] */ BSTR *pBinaryPassword);
        
        /* [propput] */ HRESULT ( __stdcall *put_BinarySalt )( 
            IMsTscNonScriptable * This,
            /* [in] */ BSTR pSalt);
        
        /* [propget] */ HRESULT ( __stdcall *get_BinarySalt )( 
            IMsTscNonScriptable * This,
            /* [retval][out] */ BSTR *pSalt);
        
        HRESULT ( __stdcall *ResetPassword )( 
            IMsTscNonScriptable * This);
        
        END_INTERFACE
    } IMsTscNonScriptableVtbl;

    interface IMsTscNonScriptable
    {
        CONST_VTBL struct IMsTscNonScriptableVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsTscNonScriptable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsTscNonScriptable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsTscNonScriptable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsTscNonScriptable_put_ClearTextPassword(This,rhs)	\
    ( (This)->lpVtbl -> put_ClearTextPassword(This,rhs) ) 

#define IMsTscNonScriptable_put_PortablePassword(This,pPortablePass)	\
    ( (This)->lpVtbl -> put_PortablePassword(This,pPortablePass) ) 

#define IMsTscNonScriptable_get_PortablePassword(This,pPortablePass)	\
    ( (This)->lpVtbl -> get_PortablePassword(This,pPortablePass) ) 

#define IMsTscNonScriptable_put_PortableSalt(This,pPortableSalt)	\
    ( (This)->lpVtbl -> put_PortableSalt(This,pPortableSalt) ) 

#define IMsTscNonScriptable_get_PortableSalt(This,pPortableSalt)	\
    ( (This)->lpVtbl -> get_PortableSalt(This,pPortableSalt) ) 

#define IMsTscNonScriptable_put_BinaryPassword(This,pBinaryPassword)	\
    ( (This)->lpVtbl -> put_BinaryPassword(This,pBinaryPassword) ) 

#define IMsTscNonScriptable_get_BinaryPassword(This,pBinaryPassword)	\
    ( (This)->lpVtbl -> get_BinaryPassword(This,pBinaryPassword) ) 

#define IMsTscNonScriptable_put_BinarySalt(This,pSalt)	\
    ( (This)->lpVtbl -> put_BinarySalt(This,pSalt) ) 

#define IMsTscNonScriptable_get_BinarySalt(This,pSalt)	\
    ( (This)->lpVtbl -> get_BinarySalt(This,pSalt) ) 

#define IMsTscNonScriptable_ResetPassword(This)	\
    ( (This)->lpVtbl -> ResetPassword(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMsTscNonScriptable_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClientNonScriptable_INTERFACE_DEFINED__
#define __IMsRdpClientNonScriptable_INTERFACE_DEFINED__

/* interface IMsRdpClientNonScriptable */
/* [uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClientNonScriptable;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2F079C4C-87B2-4AFD-97AB-20CDB43038AE")
    IMsRdpClientNonScriptable : public IMsTscNonScriptable
    {
    public:
        virtual HRESULT __stdcall NotifyRedirectDeviceChange( 
            /* [in] */ UINT_PTR wParam,
            /* [in] */ LONG_PTR lParam) = 0;
        
        virtual HRESULT __stdcall SendKeys( 
            /* [in] */ long numKeys,
            /* [in] */ VARIANT_BOOL *pbArrayKeyUp,
            /* [in] */ long *plKeyData) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMsRdpClientNonScriptableVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClientNonScriptable * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClientNonScriptable * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClientNonScriptable * This);
        
        /* [propput] */ HRESULT ( __stdcall *put_ClearTextPassword )( 
            IMsRdpClientNonScriptable * This,
            /* [in] */ BSTR rhs);
        
        /* [propput] */ HRESULT ( __stdcall *put_PortablePassword )( 
            IMsRdpClientNonScriptable * This,
            /* [in] */ BSTR pPortablePass);
        
        /* [propget] */ HRESULT ( __stdcall *get_PortablePassword )( 
            IMsRdpClientNonScriptable * This,
            /* [retval][out] */ BSTR *pPortablePass);
        
        /* [propput] */ HRESULT ( __stdcall *put_PortableSalt )( 
            IMsRdpClientNonScriptable * This,
            /* [in] */ BSTR pPortableSalt);
        
        /* [propget] */ HRESULT ( __stdcall *get_PortableSalt )( 
            IMsRdpClientNonScriptable * This,
            /* [retval][out] */ BSTR *pPortableSalt);
        
        /* [propput] */ HRESULT ( __stdcall *put_BinaryPassword )( 
            IMsRdpClientNonScriptable * This,
            /* [in] */ BSTR pBinaryPassword);
        
        /* [propget] */ HRESULT ( __stdcall *get_BinaryPassword )( 
            IMsRdpClientNonScriptable * This,
            /* [retval][out] */ BSTR *pBinaryPassword);
        
        /* [propput] */ HRESULT ( __stdcall *put_BinarySalt )( 
            IMsRdpClientNonScriptable * This,
            /* [in] */ BSTR pSalt);
        
        /* [propget] */ HRESULT ( __stdcall *get_BinarySalt )( 
            IMsRdpClientNonScriptable * This,
            /* [retval][out] */ BSTR *pSalt);
        
        HRESULT ( __stdcall *ResetPassword )( 
            IMsRdpClientNonScriptable * This);
        
        HRESULT ( __stdcall *NotifyRedirectDeviceChange )( 
            IMsRdpClientNonScriptable * This,
            /* [in] */ UINT_PTR wParam,
            /* [in] */ LONG_PTR lParam);
        
        HRESULT ( __stdcall *SendKeys )( 
            IMsRdpClientNonScriptable * This,
            /* [in] */ long numKeys,
            /* [in] */ VARIANT_BOOL *pbArrayKeyUp,
            /* [in] */ long *plKeyData);
        
        END_INTERFACE
    } IMsRdpClientNonScriptableVtbl;

    interface IMsRdpClientNonScriptable
    {
        CONST_VTBL struct IMsRdpClientNonScriptableVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClientNonScriptable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClientNonScriptable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClientNonScriptable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClientNonScriptable_put_ClearTextPassword(This,rhs)	\
    ( (This)->lpVtbl -> put_ClearTextPassword(This,rhs) ) 

#define IMsRdpClientNonScriptable_put_PortablePassword(This,pPortablePass)	\
    ( (This)->lpVtbl -> put_PortablePassword(This,pPortablePass) ) 

#define IMsRdpClientNonScriptable_get_PortablePassword(This,pPortablePass)	\
    ( (This)->lpVtbl -> get_PortablePassword(This,pPortablePass) ) 

#define IMsRdpClientNonScriptable_put_PortableSalt(This,pPortableSalt)	\
    ( (This)->lpVtbl -> put_PortableSalt(This,pPortableSalt) ) 

#define IMsRdpClientNonScriptable_get_PortableSalt(This,pPortableSalt)	\
    ( (This)->lpVtbl -> get_PortableSalt(This,pPortableSalt) ) 

#define IMsRdpClientNonScriptable_put_BinaryPassword(This,pBinaryPassword)	\
    ( (This)->lpVtbl -> put_BinaryPassword(This,pBinaryPassword) ) 

#define IMsRdpClientNonScriptable_get_BinaryPassword(This,pBinaryPassword)	\
    ( (This)->lpVtbl -> get_BinaryPassword(This,pBinaryPassword) ) 

#define IMsRdpClientNonScriptable_put_BinarySalt(This,pSalt)	\
    ( (This)->lpVtbl -> put_BinarySalt(This,pSalt) ) 

#define IMsRdpClientNonScriptable_get_BinarySalt(This,pSalt)	\
    ( (This)->lpVtbl -> get_BinarySalt(This,pSalt) ) 

#define IMsRdpClientNonScriptable_ResetPassword(This)	\
    ( (This)->lpVtbl -> ResetPassword(This) ) 


#define IMsRdpClientNonScriptable_NotifyRedirectDeviceChange(This,wParam,lParam)	\
    ( (This)->lpVtbl -> NotifyRedirectDeviceChange(This,wParam,lParam) ) 

#define IMsRdpClientNonScriptable_SendKeys(This,numKeys,pbArrayKeyUp,plKeyData)	\
    ( (This)->lpVtbl -> SendKeys(This,numKeys,pbArrayKeyUp,plKeyData) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMsRdpClientNonScriptable_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClientNonScriptable2_INTERFACE_DEFINED__
#define __IMsRdpClientNonScriptable2_INTERFACE_DEFINED__

/* interface IMsRdpClientNonScriptable2 */
/* [uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClientNonScriptable2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("17A5E535-4072-4FA4-AF32-C8D0D47345E9")
    IMsRdpClientNonScriptable2 : public IMsRdpClientNonScriptable
    {
    public:
        virtual /* [propput] */ HRESULT __stdcall put_UIParentWindowHandle( 
            /* [in] */ wireHWND phwndUIParentWindowHandle) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_UIParentWindowHandle( 
            /* [retval][out] */ wireHWND *phwndUIParentWindowHandle) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMsRdpClientNonScriptable2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClientNonScriptable2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClientNonScriptable2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClientNonScriptable2 * This);
        
        /* [propput] */ HRESULT ( __stdcall *put_ClearTextPassword )( 
            IMsRdpClientNonScriptable2 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput] */ HRESULT ( __stdcall *put_PortablePassword )( 
            IMsRdpClientNonScriptable2 * This,
            /* [in] */ BSTR pPortablePass);
        
        /* [propget] */ HRESULT ( __stdcall *get_PortablePassword )( 
            IMsRdpClientNonScriptable2 * This,
            /* [retval][out] */ BSTR *pPortablePass);
        
        /* [propput] */ HRESULT ( __stdcall *put_PortableSalt )( 
            IMsRdpClientNonScriptable2 * This,
            /* [in] */ BSTR pPortableSalt);
        
        /* [propget] */ HRESULT ( __stdcall *get_PortableSalt )( 
            IMsRdpClientNonScriptable2 * This,
            /* [retval][out] */ BSTR *pPortableSalt);
        
        /* [propput] */ HRESULT ( __stdcall *put_BinaryPassword )( 
            IMsRdpClientNonScriptable2 * This,
            /* [in] */ BSTR pBinaryPassword);
        
        /* [propget] */ HRESULT ( __stdcall *get_BinaryPassword )( 
            IMsRdpClientNonScriptable2 * This,
            /* [retval][out] */ BSTR *pBinaryPassword);
        
        /* [propput] */ HRESULT ( __stdcall *put_BinarySalt )( 
            IMsRdpClientNonScriptable2 * This,
            /* [in] */ BSTR pSalt);
        
        /* [propget] */ HRESULT ( __stdcall *get_BinarySalt )( 
            IMsRdpClientNonScriptable2 * This,
            /* [retval][out] */ BSTR *pSalt);
        
        HRESULT ( __stdcall *ResetPassword )( 
            IMsRdpClientNonScriptable2 * This);
        
        HRESULT ( __stdcall *NotifyRedirectDeviceChange )( 
            IMsRdpClientNonScriptable2 * This,
            /* [in] */ UINT_PTR wParam,
            /* [in] */ LONG_PTR lParam);
        
        HRESULT ( __stdcall *SendKeys )( 
            IMsRdpClientNonScriptable2 * This,
            /* [in] */ long numKeys,
            /* [in] */ VARIANT_BOOL *pbArrayKeyUp,
            /* [in] */ long *plKeyData);
        
        /* [propput] */ HRESULT ( __stdcall *put_UIParentWindowHandle )( 
            IMsRdpClientNonScriptable2 * This,
            /* [in] */ wireHWND phwndUIParentWindowHandle);
        
        /* [propget] */ HRESULT ( __stdcall *get_UIParentWindowHandle )( 
            IMsRdpClientNonScriptable2 * This,
            /* [retval][out] */ wireHWND *phwndUIParentWindowHandle);
        
        END_INTERFACE
    } IMsRdpClientNonScriptable2Vtbl;

    interface IMsRdpClientNonScriptable2
    {
        CONST_VTBL struct IMsRdpClientNonScriptable2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClientNonScriptable2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClientNonScriptable2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClientNonScriptable2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClientNonScriptable2_put_ClearTextPassword(This,rhs)	\
    ( (This)->lpVtbl -> put_ClearTextPassword(This,rhs) ) 

#define IMsRdpClientNonScriptable2_put_PortablePassword(This,pPortablePass)	\
    ( (This)->lpVtbl -> put_PortablePassword(This,pPortablePass) ) 

#define IMsRdpClientNonScriptable2_get_PortablePassword(This,pPortablePass)	\
    ( (This)->lpVtbl -> get_PortablePassword(This,pPortablePass) ) 

#define IMsRdpClientNonScriptable2_put_PortableSalt(This,pPortableSalt)	\
    ( (This)->lpVtbl -> put_PortableSalt(This,pPortableSalt) ) 

#define IMsRdpClientNonScriptable2_get_PortableSalt(This,pPortableSalt)	\
    ( (This)->lpVtbl -> get_PortableSalt(This,pPortableSalt) ) 

#define IMsRdpClientNonScriptable2_put_BinaryPassword(This,pBinaryPassword)	\
    ( (This)->lpVtbl -> put_BinaryPassword(This,pBinaryPassword) ) 

#define IMsRdpClientNonScriptable2_get_BinaryPassword(This,pBinaryPassword)	\
    ( (This)->lpVtbl -> get_BinaryPassword(This,pBinaryPassword) ) 

#define IMsRdpClientNonScriptable2_put_BinarySalt(This,pSalt)	\
    ( (This)->lpVtbl -> put_BinarySalt(This,pSalt) ) 

#define IMsRdpClientNonScriptable2_get_BinarySalt(This,pSalt)	\
    ( (This)->lpVtbl -> get_BinarySalt(This,pSalt) ) 

#define IMsRdpClientNonScriptable2_ResetPassword(This)	\
    ( (This)->lpVtbl -> ResetPassword(This) ) 


#define IMsRdpClientNonScriptable2_NotifyRedirectDeviceChange(This,wParam,lParam)	\
    ( (This)->lpVtbl -> NotifyRedirectDeviceChange(This,wParam,lParam) ) 

#define IMsRdpClientNonScriptable2_SendKeys(This,numKeys,pbArrayKeyUp,plKeyData)	\
    ( (This)->lpVtbl -> SendKeys(This,numKeys,pbArrayKeyUp,plKeyData) ) 


#define IMsRdpClientNonScriptable2_put_UIParentWindowHandle(This,phwndUIParentWindowHandle)	\
    ( (This)->lpVtbl -> put_UIParentWindowHandle(This,phwndUIParentWindowHandle) ) 

#define IMsRdpClientNonScriptable2_get_UIParentWindowHandle(This,phwndUIParentWindowHandle)	\
    ( (This)->lpVtbl -> get_UIParentWindowHandle(This,phwndUIParentWindowHandle) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMsRdpClientNonScriptable2_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClientNonScriptable3_INTERFACE_DEFINED__
#define __IMsRdpClientNonScriptable3_INTERFACE_DEFINED__

/* interface IMsRdpClientNonScriptable3 */
/* [uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClientNonScriptable3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B3378D90-0728-45C7-8ED7-B6159FB92219")
    IMsRdpClientNonScriptable3 : public IMsRdpClientNonScriptable2
    {
    public:
        virtual /* [propput] */ HRESULT __stdcall put_ShowRedirectionWarningDialog( 
            /* [in] */ VARIANT_BOOL pfShowRdrDlg) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_ShowRedirectionWarningDialog( 
            /* [retval][out] */ VARIANT_BOOL *pfShowRdrDlg) = 0;
        
        virtual /* [propput] */ HRESULT __stdcall put_PromptForCredentials( 
            /* [in] */ VARIANT_BOOL pfPrompt) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_PromptForCredentials( 
            /* [retval][out] */ VARIANT_BOOL *pfPrompt) = 0;
        
        virtual /* [propput] */ HRESULT __stdcall put_NegotiateSecurityLayer( 
            /* [in] */ VARIANT_BOOL pfNegotiate) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_NegotiateSecurityLayer( 
            /* [retval][out] */ VARIANT_BOOL *pfNegotiate) = 0;
        
        virtual /* [propput] */ HRESULT __stdcall put_EnableCredSspSupport( 
            /* [in] */ VARIANT_BOOL pfEnableSupport) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_EnableCredSspSupport( 
            /* [retval][out] */ VARIANT_BOOL *pfEnableSupport) = 0;
        
        virtual /* [propput] */ HRESULT __stdcall put_RedirectDynamicDrives( 
            /* [in] */ VARIANT_BOOL pfRedirectDynamicDrives) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_RedirectDynamicDrives( 
            /* [retval][out] */ VARIANT_BOOL *pfRedirectDynamicDrives) = 0;
        
        virtual /* [propput] */ HRESULT __stdcall put_RedirectDynamicDevices( 
            /* [in] */ VARIANT_BOOL pfRedirectDynamicDevices) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_RedirectDynamicDevices( 
            /* [retval][out] */ VARIANT_BOOL *pfRedirectDynamicDevices) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_DeviceCollection( 
            /* [retval][out] */ IMsRdpDeviceCollection **ppDeviceCollection) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_DriveCollection( 
            /* [retval][out] */ IMsRdpDriveCollection **ppDeviceCollection) = 0;
        
        virtual /* [propput] */ HRESULT __stdcall put_WarnAboutSendingCredentials( 
            /* [in] */ VARIANT_BOOL pfWarn) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_WarnAboutSendingCredentials( 
            /* [retval][out] */ VARIANT_BOOL *pfWarn) = 0;
        
        virtual /* [propput] */ HRESULT __stdcall put_WarnAboutClipboardRedirection( 
            /* [in] */ VARIANT_BOOL pfWarn) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_WarnAboutClipboardRedirection( 
            /* [retval][out] */ VARIANT_BOOL *pfWarn) = 0;
        
        virtual /* [propput] */ HRESULT __stdcall put_ConnectionBarText( 
            /* [in] */ BSTR pConnectionBarText) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_ConnectionBarText( 
            /* [retval][out] */ BSTR *pConnectionBarText) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMsRdpClientNonScriptable3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClientNonScriptable3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClientNonScriptable3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClientNonScriptable3 * This);
        
        /* [propput] */ HRESULT ( __stdcall *put_ClearTextPassword )( 
            IMsRdpClientNonScriptable3 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput] */ HRESULT ( __stdcall *put_PortablePassword )( 
            IMsRdpClientNonScriptable3 * This,
            /* [in] */ BSTR pPortablePass);
        
        /* [propget] */ HRESULT ( __stdcall *get_PortablePassword )( 
            IMsRdpClientNonScriptable3 * This,
            /* [retval][out] */ BSTR *pPortablePass);
        
        /* [propput] */ HRESULT ( __stdcall *put_PortableSalt )( 
            IMsRdpClientNonScriptable3 * This,
            /* [in] */ BSTR pPortableSalt);
        
        /* [propget] */ HRESULT ( __stdcall *get_PortableSalt )( 
            IMsRdpClientNonScriptable3 * This,
            /* [retval][out] */ BSTR *pPortableSalt);
        
        /* [propput] */ HRESULT ( __stdcall *put_BinaryPassword )( 
            IMsRdpClientNonScriptable3 * This,
            /* [in] */ BSTR pBinaryPassword);
        
        /* [propget] */ HRESULT ( __stdcall *get_BinaryPassword )( 
            IMsRdpClientNonScriptable3 * This,
            /* [retval][out] */ BSTR *pBinaryPassword);
        
        /* [propput] */ HRESULT ( __stdcall *put_BinarySalt )( 
            IMsRdpClientNonScriptable3 * This,
            /* [in] */ BSTR pSalt);
        
        /* [propget] */ HRESULT ( __stdcall *get_BinarySalt )( 
            IMsRdpClientNonScriptable3 * This,
            /* [retval][out] */ BSTR *pSalt);
        
        HRESULT ( __stdcall *ResetPassword )( 
            IMsRdpClientNonScriptable3 * This);
        
        HRESULT ( __stdcall *NotifyRedirectDeviceChange )( 
            IMsRdpClientNonScriptable3 * This,
            /* [in] */ UINT_PTR wParam,
            /* [in] */ LONG_PTR lParam);
        
        HRESULT ( __stdcall *SendKeys )( 
            IMsRdpClientNonScriptable3 * This,
            /* [in] */ long numKeys,
            /* [in] */ VARIANT_BOOL *pbArrayKeyUp,
            /* [in] */ long *plKeyData);
        
        /* [propput] */ HRESULT ( __stdcall *put_UIParentWindowHandle )( 
            IMsRdpClientNonScriptable3 * This,
            /* [in] */ wireHWND phwndUIParentWindowHandle);
        
        /* [propget] */ HRESULT ( __stdcall *get_UIParentWindowHandle )( 
            IMsRdpClientNonScriptable3 * This,
            /* [retval][out] */ wireHWND *phwndUIParentWindowHandle);
        
        /* [propput] */ HRESULT ( __stdcall *put_ShowRedirectionWarningDialog )( 
            IMsRdpClientNonScriptable3 * This,
            /* [in] */ VARIANT_BOOL pfShowRdrDlg);
        
        /* [propget] */ HRESULT ( __stdcall *get_ShowRedirectionWarningDialog )( 
            IMsRdpClientNonScriptable3 * This,
            /* [retval][out] */ VARIANT_BOOL *pfShowRdrDlg);
        
        /* [propput] */ HRESULT ( __stdcall *put_PromptForCredentials )( 
            IMsRdpClientNonScriptable3 * This,
            /* [in] */ VARIANT_BOOL pfPrompt);
        
        /* [propget] */ HRESULT ( __stdcall *get_PromptForCredentials )( 
            IMsRdpClientNonScriptable3 * This,
            /* [retval][out] */ VARIANT_BOOL *pfPrompt);
        
        /* [propput] */ HRESULT ( __stdcall *put_NegotiateSecurityLayer )( 
            IMsRdpClientNonScriptable3 * This,
            /* [in] */ VARIANT_BOOL pfNegotiate);
        
        /* [propget] */ HRESULT ( __stdcall *get_NegotiateSecurityLayer )( 
            IMsRdpClientNonScriptable3 * This,
            /* [retval][out] */ VARIANT_BOOL *pfNegotiate);
        
        /* [propput] */ HRESULT ( __stdcall *put_EnableCredSspSupport )( 
            IMsRdpClientNonScriptable3 * This,
            /* [in] */ VARIANT_BOOL pfEnableSupport);
        
        /* [propget] */ HRESULT ( __stdcall *get_EnableCredSspSupport )( 
            IMsRdpClientNonScriptable3 * This,
            /* [retval][out] */ VARIANT_BOOL *pfEnableSupport);
        
        /* [propput] */ HRESULT ( __stdcall *put_RedirectDynamicDrives )( 
            IMsRdpClientNonScriptable3 * This,
            /* [in] */ VARIANT_BOOL pfRedirectDynamicDrives);
        
        /* [propget] */ HRESULT ( __stdcall *get_RedirectDynamicDrives )( 
            IMsRdpClientNonScriptable3 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRedirectDynamicDrives);
        
        /* [propput] */ HRESULT ( __stdcall *put_RedirectDynamicDevices )( 
            IMsRdpClientNonScriptable3 * This,
            /* [in] */ VARIANT_BOOL pfRedirectDynamicDevices);
        
        /* [propget] */ HRESULT ( __stdcall *get_RedirectDynamicDevices )( 
            IMsRdpClientNonScriptable3 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRedirectDynamicDevices);
        
        /* [propget] */ HRESULT ( __stdcall *get_DeviceCollection )( 
            IMsRdpClientNonScriptable3 * This,
            /* [retval][out] */ IMsRdpDeviceCollection **ppDeviceCollection);
        
        /* [propget] */ HRESULT ( __stdcall *get_DriveCollection )( 
            IMsRdpClientNonScriptable3 * This,
            /* [retval][out] */ IMsRdpDriveCollection **ppDeviceCollection);
        
        /* [propput] */ HRESULT ( __stdcall *put_WarnAboutSendingCredentials )( 
            IMsRdpClientNonScriptable3 * This,
            /* [in] */ VARIANT_BOOL pfWarn);
        
        /* [propget] */ HRESULT ( __stdcall *get_WarnAboutSendingCredentials )( 
            IMsRdpClientNonScriptable3 * This,
            /* [retval][out] */ VARIANT_BOOL *pfWarn);
        
        /* [propput] */ HRESULT ( __stdcall *put_WarnAboutClipboardRedirection )( 
            IMsRdpClientNonScriptable3 * This,
            /* [in] */ VARIANT_BOOL pfWarn);
        
        /* [propget] */ HRESULT ( __stdcall *get_WarnAboutClipboardRedirection )( 
            IMsRdpClientNonScriptable3 * This,
            /* [retval][out] */ VARIANT_BOOL *pfWarn);
        
        /* [propput] */ HRESULT ( __stdcall *put_ConnectionBarText )( 
            IMsRdpClientNonScriptable3 * This,
            /* [in] */ BSTR pConnectionBarText);
        
        /* [propget] */ HRESULT ( __stdcall *get_ConnectionBarText )( 
            IMsRdpClientNonScriptable3 * This,
            /* [retval][out] */ BSTR *pConnectionBarText);
        
        END_INTERFACE
    } IMsRdpClientNonScriptable3Vtbl;

    interface IMsRdpClientNonScriptable3
    {
        CONST_VTBL struct IMsRdpClientNonScriptable3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClientNonScriptable3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClientNonScriptable3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClientNonScriptable3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClientNonScriptable3_put_ClearTextPassword(This,rhs)	\
    ( (This)->lpVtbl -> put_ClearTextPassword(This,rhs) ) 

#define IMsRdpClientNonScriptable3_put_PortablePassword(This,pPortablePass)	\
    ( (This)->lpVtbl -> put_PortablePassword(This,pPortablePass) ) 

#define IMsRdpClientNonScriptable3_get_PortablePassword(This,pPortablePass)	\
    ( (This)->lpVtbl -> get_PortablePassword(This,pPortablePass) ) 

#define IMsRdpClientNonScriptable3_put_PortableSalt(This,pPortableSalt)	\
    ( (This)->lpVtbl -> put_PortableSalt(This,pPortableSalt) ) 

#define IMsRdpClientNonScriptable3_get_PortableSalt(This,pPortableSalt)	\
    ( (This)->lpVtbl -> get_PortableSalt(This,pPortableSalt) ) 

#define IMsRdpClientNonScriptable3_put_BinaryPassword(This,pBinaryPassword)	\
    ( (This)->lpVtbl -> put_BinaryPassword(This,pBinaryPassword) ) 

#define IMsRdpClientNonScriptable3_get_BinaryPassword(This,pBinaryPassword)	\
    ( (This)->lpVtbl -> get_BinaryPassword(This,pBinaryPassword) ) 

#define IMsRdpClientNonScriptable3_put_BinarySalt(This,pSalt)	\
    ( (This)->lpVtbl -> put_BinarySalt(This,pSalt) ) 

#define IMsRdpClientNonScriptable3_get_BinarySalt(This,pSalt)	\
    ( (This)->lpVtbl -> get_BinarySalt(This,pSalt) ) 

#define IMsRdpClientNonScriptable3_ResetPassword(This)	\
    ( (This)->lpVtbl -> ResetPassword(This) ) 


#define IMsRdpClientNonScriptable3_NotifyRedirectDeviceChange(This,wParam,lParam)	\
    ( (This)->lpVtbl -> NotifyRedirectDeviceChange(This,wParam,lParam) ) 

#define IMsRdpClientNonScriptable3_SendKeys(This,numKeys,pbArrayKeyUp,plKeyData)	\
    ( (This)->lpVtbl -> SendKeys(This,numKeys,pbArrayKeyUp,plKeyData) ) 


#define IMsRdpClientNonScriptable3_put_UIParentWindowHandle(This,phwndUIParentWindowHandle)	\
    ( (This)->lpVtbl -> put_UIParentWindowHandle(This,phwndUIParentWindowHandle) ) 

#define IMsRdpClientNonScriptable3_get_UIParentWindowHandle(This,phwndUIParentWindowHandle)	\
    ( (This)->lpVtbl -> get_UIParentWindowHandle(This,phwndUIParentWindowHandle) ) 


#define IMsRdpClientNonScriptable3_put_ShowRedirectionWarningDialog(This,pfShowRdrDlg)	\
    ( (This)->lpVtbl -> put_ShowRedirectionWarningDialog(This,pfShowRdrDlg) ) 

#define IMsRdpClientNonScriptable3_get_ShowRedirectionWarningDialog(This,pfShowRdrDlg)	\
    ( (This)->lpVtbl -> get_ShowRedirectionWarningDialog(This,pfShowRdrDlg) ) 

#define IMsRdpClientNonScriptable3_put_PromptForCredentials(This,pfPrompt)	\
    ( (This)->lpVtbl -> put_PromptForCredentials(This,pfPrompt) ) 

#define IMsRdpClientNonScriptable3_get_PromptForCredentials(This,pfPrompt)	\
    ( (This)->lpVtbl -> get_PromptForCredentials(This,pfPrompt) ) 

#define IMsRdpClientNonScriptable3_put_NegotiateSecurityLayer(This,pfNegotiate)	\
    ( (This)->lpVtbl -> put_NegotiateSecurityLayer(This,pfNegotiate) ) 

#define IMsRdpClientNonScriptable3_get_NegotiateSecurityLayer(This,pfNegotiate)	\
    ( (This)->lpVtbl -> get_NegotiateSecurityLayer(This,pfNegotiate) ) 

#define IMsRdpClientNonScriptable3_put_EnableCredSspSupport(This,pfEnableSupport)	\
    ( (This)->lpVtbl -> put_EnableCredSspSupport(This,pfEnableSupport) ) 

#define IMsRdpClientNonScriptable3_get_EnableCredSspSupport(This,pfEnableSupport)	\
    ( (This)->lpVtbl -> get_EnableCredSspSupport(This,pfEnableSupport) ) 

#define IMsRdpClientNonScriptable3_put_RedirectDynamicDrives(This,pfRedirectDynamicDrives)	\
    ( (This)->lpVtbl -> put_RedirectDynamicDrives(This,pfRedirectDynamicDrives) ) 

#define IMsRdpClientNonScriptable3_get_RedirectDynamicDrives(This,pfRedirectDynamicDrives)	\
    ( (This)->lpVtbl -> get_RedirectDynamicDrives(This,pfRedirectDynamicDrives) ) 

#define IMsRdpClientNonScriptable3_put_RedirectDynamicDevices(This,pfRedirectDynamicDevices)	\
    ( (This)->lpVtbl -> put_RedirectDynamicDevices(This,pfRedirectDynamicDevices) ) 

#define IMsRdpClientNonScriptable3_get_RedirectDynamicDevices(This,pfRedirectDynamicDevices)	\
    ( (This)->lpVtbl -> get_RedirectDynamicDevices(This,pfRedirectDynamicDevices) ) 

#define IMsRdpClientNonScriptable3_get_DeviceCollection(This,ppDeviceCollection)	\
    ( (This)->lpVtbl -> get_DeviceCollection(This,ppDeviceCollection) ) 

#define IMsRdpClientNonScriptable3_get_DriveCollection(This,ppDeviceCollection)	\
    ( (This)->lpVtbl -> get_DriveCollection(This,ppDeviceCollection) ) 

#define IMsRdpClientNonScriptable3_put_WarnAboutSendingCredentials(This,pfWarn)	\
    ( (This)->lpVtbl -> put_WarnAboutSendingCredentials(This,pfWarn) ) 

#define IMsRdpClientNonScriptable3_get_WarnAboutSendingCredentials(This,pfWarn)	\
    ( (This)->lpVtbl -> get_WarnAboutSendingCredentials(This,pfWarn) ) 

#define IMsRdpClientNonScriptable3_put_WarnAboutClipboardRedirection(This,pfWarn)	\
    ( (This)->lpVtbl -> put_WarnAboutClipboardRedirection(This,pfWarn) ) 

#define IMsRdpClientNonScriptable3_get_WarnAboutClipboardRedirection(This,pfWarn)	\
    ( (This)->lpVtbl -> get_WarnAboutClipboardRedirection(This,pfWarn) ) 

#define IMsRdpClientNonScriptable3_put_ConnectionBarText(This,pConnectionBarText)	\
    ( (This)->lpVtbl -> put_ConnectionBarText(This,pConnectionBarText) ) 

#define IMsRdpClientNonScriptable3_get_ConnectionBarText(This,pConnectionBarText)	\
    ( (This)->lpVtbl -> get_ConnectionBarText(This,pConnectionBarText) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMsRdpClientNonScriptable3_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClientNonScriptable4_INTERFACE_DEFINED__
#define __IMsRdpClientNonScriptable4_INTERFACE_DEFINED__

/* interface IMsRdpClientNonScriptable4 */
/* [uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClientNonScriptable4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F50FA8AA-1C7D-4F59-B15C-A90CACAE1FCB")
    IMsRdpClientNonScriptable4 : public IMsRdpClientNonScriptable3
    {
    public:
        virtual /* [propput] */ HRESULT __stdcall put_RedirectionWarningType( 
            /* [in] */ RedirectionWarningType pWrnType) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_RedirectionWarningType( 
            /* [retval][out] */ RedirectionWarningType *pWrnType) = 0;
        
        virtual /* [propput] */ HRESULT __stdcall put_MarkRdpSettingsSecure( 
            /* [in] */ VARIANT_BOOL pfRdpSecure) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_MarkRdpSettingsSecure( 
            /* [retval][out] */ VARIANT_BOOL *pfRdpSecure) = 0;
        
        virtual /* [propput] */ HRESULT __stdcall put_PublisherCertificateChain( 
            /* [in] */ VARIANT *pVarCert) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_PublisherCertificateChain( 
            /* [retval][out] */ VARIANT *pVarCert) = 0;
        
        virtual /* [propput] */ HRESULT __stdcall put_WarnAboutPrinterRedirection( 
            /* [in] */ VARIANT_BOOL pfWarn) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_WarnAboutPrinterRedirection( 
            /* [retval][out] */ VARIANT_BOOL *pfWarn) = 0;
        
        virtual /* [propput] */ HRESULT __stdcall put_AllowCredentialSaving( 
            /* [in] */ VARIANT_BOOL pfAllowSave) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_AllowCredentialSaving( 
            /* [retval][out] */ VARIANT_BOOL *pfAllowSave) = 0;
        
        virtual /* [propput] */ HRESULT __stdcall put_PromptForCredsOnClient( 
            /* [in] */ VARIANT_BOOL pfPromptForCredsOnClient) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_PromptForCredsOnClient( 
            /* [retval][out] */ VARIANT_BOOL *pfPromptForCredsOnClient) = 0;
        
        virtual /* [propput] */ HRESULT __stdcall put_LaunchedViaClientShellInterface( 
            /* [in] */ VARIANT_BOOL pfLaunchedViaClientShellInterface) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_LaunchedViaClientShellInterface( 
            /* [retval][out] */ VARIANT_BOOL *pfLaunchedViaClientShellInterface) = 0;
        
        virtual /* [propput] */ HRESULT __stdcall put_TrustedZoneSite( 
            /* [in] */ VARIANT_BOOL pfIsTrustedZone) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_TrustedZoneSite( 
            /* [retval][out] */ VARIANT_BOOL *pfIsTrustedZone) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMsRdpClientNonScriptable4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClientNonScriptable4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClientNonScriptable4 * This);
        
        /* [propput] */ HRESULT ( __stdcall *put_ClearTextPassword )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput] */ HRESULT ( __stdcall *put_PortablePassword )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ BSTR pPortablePass);
        
        /* [propget] */ HRESULT ( __stdcall *get_PortablePassword )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ BSTR *pPortablePass);
        
        /* [propput] */ HRESULT ( __stdcall *put_PortableSalt )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ BSTR pPortableSalt);
        
        /* [propget] */ HRESULT ( __stdcall *get_PortableSalt )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ BSTR *pPortableSalt);
        
        /* [propput] */ HRESULT ( __stdcall *put_BinaryPassword )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ BSTR pBinaryPassword);
        
        /* [propget] */ HRESULT ( __stdcall *get_BinaryPassword )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ BSTR *pBinaryPassword);
        
        /* [propput] */ HRESULT ( __stdcall *put_BinarySalt )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ BSTR pSalt);
        
        /* [propget] */ HRESULT ( __stdcall *get_BinarySalt )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ BSTR *pSalt);
        
        HRESULT ( __stdcall *ResetPassword )( 
            IMsRdpClientNonScriptable4 * This);
        
        HRESULT ( __stdcall *NotifyRedirectDeviceChange )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ UINT_PTR wParam,
            /* [in] */ LONG_PTR lParam);
        
        HRESULT ( __stdcall *SendKeys )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ long numKeys,
            /* [in] */ VARIANT_BOOL *pbArrayKeyUp,
            /* [in] */ long *plKeyData);
        
        /* [propput] */ HRESULT ( __stdcall *put_UIParentWindowHandle )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ wireHWND phwndUIParentWindowHandle);
        
        /* [propget] */ HRESULT ( __stdcall *get_UIParentWindowHandle )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ wireHWND *phwndUIParentWindowHandle);
        
        /* [propput] */ HRESULT ( __stdcall *put_ShowRedirectionWarningDialog )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ VARIANT_BOOL pfShowRdrDlg);
        
        /* [propget] */ HRESULT ( __stdcall *get_ShowRedirectionWarningDialog )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfShowRdrDlg);
        
        /* [propput] */ HRESULT ( __stdcall *put_PromptForCredentials )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ VARIANT_BOOL pfPrompt);
        
        /* [propget] */ HRESULT ( __stdcall *get_PromptForCredentials )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfPrompt);
        
        /* [propput] */ HRESULT ( __stdcall *put_NegotiateSecurityLayer )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ VARIANT_BOOL pfNegotiate);
        
        /* [propget] */ HRESULT ( __stdcall *get_NegotiateSecurityLayer )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfNegotiate);
        
        /* [propput] */ HRESULT ( __stdcall *put_EnableCredSspSupport )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ VARIANT_BOOL pfEnableSupport);
        
        /* [propget] */ HRESULT ( __stdcall *get_EnableCredSspSupport )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfEnableSupport);
        
        /* [propput] */ HRESULT ( __stdcall *put_RedirectDynamicDrives )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ VARIANT_BOOL pfRedirectDynamicDrives);
        
        /* [propget] */ HRESULT ( __stdcall *get_RedirectDynamicDrives )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRedirectDynamicDrives);
        
        /* [propput] */ HRESULT ( __stdcall *put_RedirectDynamicDevices )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ VARIANT_BOOL pfRedirectDynamicDevices);
        
        /* [propget] */ HRESULT ( __stdcall *get_RedirectDynamicDevices )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRedirectDynamicDevices);
        
        /* [propget] */ HRESULT ( __stdcall *get_DeviceCollection )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ IMsRdpDeviceCollection **ppDeviceCollection);
        
        /* [propget] */ HRESULT ( __stdcall *get_DriveCollection )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ IMsRdpDriveCollection **ppDeviceCollection);
        
        /* [propput] */ HRESULT ( __stdcall *put_WarnAboutSendingCredentials )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ VARIANT_BOOL pfWarn);
        
        /* [propget] */ HRESULT ( __stdcall *get_WarnAboutSendingCredentials )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfWarn);
        
        /* [propput] */ HRESULT ( __stdcall *put_WarnAboutClipboardRedirection )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ VARIANT_BOOL pfWarn);
        
        /* [propget] */ HRESULT ( __stdcall *get_WarnAboutClipboardRedirection )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfWarn);
        
        /* [propput] */ HRESULT ( __stdcall *put_ConnectionBarText )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ BSTR pConnectionBarText);
        
        /* [propget] */ HRESULT ( __stdcall *get_ConnectionBarText )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ BSTR *pConnectionBarText);
        
        /* [propput] */ HRESULT ( __stdcall *put_RedirectionWarningType )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ RedirectionWarningType pWrnType);
        
        /* [propget] */ HRESULT ( __stdcall *get_RedirectionWarningType )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ RedirectionWarningType *pWrnType);
        
        /* [propput] */ HRESULT ( __stdcall *put_MarkRdpSettingsSecure )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ VARIANT_BOOL pfRdpSecure);
        
        /* [propget] */ HRESULT ( __stdcall *get_MarkRdpSettingsSecure )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRdpSecure);
        
        /* [propput] */ HRESULT ( __stdcall *put_PublisherCertificateChain )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ VARIANT *pVarCert);
        
        /* [propget] */ HRESULT ( __stdcall *get_PublisherCertificateChain )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ VARIANT *pVarCert);
        
        /* [propput] */ HRESULT ( __stdcall *put_WarnAboutPrinterRedirection )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ VARIANT_BOOL pfWarn);
        
        /* [propget] */ HRESULT ( __stdcall *get_WarnAboutPrinterRedirection )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfWarn);
        
        /* [propput] */ HRESULT ( __stdcall *put_AllowCredentialSaving )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ VARIANT_BOOL pfAllowSave);
        
        /* [propget] */ HRESULT ( __stdcall *get_AllowCredentialSaving )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfAllowSave);
        
        /* [propput] */ HRESULT ( __stdcall *put_PromptForCredsOnClient )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ VARIANT_BOOL pfPromptForCredsOnClient);
        
        /* [propget] */ HRESULT ( __stdcall *get_PromptForCredsOnClient )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfPromptForCredsOnClient);
        
        /* [propput] */ HRESULT ( __stdcall *put_LaunchedViaClientShellInterface )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ VARIANT_BOOL pfLaunchedViaClientShellInterface);
        
        /* [propget] */ HRESULT ( __stdcall *get_LaunchedViaClientShellInterface )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfLaunchedViaClientShellInterface);
        
        /* [propput] */ HRESULT ( __stdcall *put_TrustedZoneSite )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ VARIANT_BOOL pfIsTrustedZone);
        
        /* [propget] */ HRESULT ( __stdcall *get_TrustedZoneSite )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfIsTrustedZone);
        
        END_INTERFACE
    } IMsRdpClientNonScriptable4Vtbl;

    interface IMsRdpClientNonScriptable4
    {
        CONST_VTBL struct IMsRdpClientNonScriptable4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClientNonScriptable4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClientNonScriptable4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClientNonScriptable4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClientNonScriptable4_put_ClearTextPassword(This,rhs)	\
    ( (This)->lpVtbl -> put_ClearTextPassword(This,rhs) ) 

#define IMsRdpClientNonScriptable4_put_PortablePassword(This,pPortablePass)	\
    ( (This)->lpVtbl -> put_PortablePassword(This,pPortablePass) ) 

#define IMsRdpClientNonScriptable4_get_PortablePassword(This,pPortablePass)	\
    ( (This)->lpVtbl -> get_PortablePassword(This,pPortablePass) ) 

#define IMsRdpClientNonScriptable4_put_PortableSalt(This,pPortableSalt)	\
    ( (This)->lpVtbl -> put_PortableSalt(This,pPortableSalt) ) 

#define IMsRdpClientNonScriptable4_get_PortableSalt(This,pPortableSalt)	\
    ( (This)->lpVtbl -> get_PortableSalt(This,pPortableSalt) ) 

#define IMsRdpClientNonScriptable4_put_BinaryPassword(This,pBinaryPassword)	\
    ( (This)->lpVtbl -> put_BinaryPassword(This,pBinaryPassword) ) 

#define IMsRdpClientNonScriptable4_get_BinaryPassword(This,pBinaryPassword)	\
    ( (This)->lpVtbl -> get_BinaryPassword(This,pBinaryPassword) ) 

#define IMsRdpClientNonScriptable4_put_BinarySalt(This,pSalt)	\
    ( (This)->lpVtbl -> put_BinarySalt(This,pSalt) ) 

#define IMsRdpClientNonScriptable4_get_BinarySalt(This,pSalt)	\
    ( (This)->lpVtbl -> get_BinarySalt(This,pSalt) ) 

#define IMsRdpClientNonScriptable4_ResetPassword(This)	\
    ( (This)->lpVtbl -> ResetPassword(This) ) 


#define IMsRdpClientNonScriptable4_NotifyRedirectDeviceChange(This,wParam,lParam)	\
    ( (This)->lpVtbl -> NotifyRedirectDeviceChange(This,wParam,lParam) ) 

#define IMsRdpClientNonScriptable4_SendKeys(This,numKeys,pbArrayKeyUp,plKeyData)	\
    ( (This)->lpVtbl -> SendKeys(This,numKeys,pbArrayKeyUp,plKeyData) ) 


#define IMsRdpClientNonScriptable4_put_UIParentWindowHandle(This,phwndUIParentWindowHandle)	\
    ( (This)->lpVtbl -> put_UIParentWindowHandle(This,phwndUIParentWindowHandle) ) 

#define IMsRdpClientNonScriptable4_get_UIParentWindowHandle(This,phwndUIParentWindowHandle)	\
    ( (This)->lpVtbl -> get_UIParentWindowHandle(This,phwndUIParentWindowHandle) ) 


#define IMsRdpClientNonScriptable4_put_ShowRedirectionWarningDialog(This,pfShowRdrDlg)	\
    ( (This)->lpVtbl -> put_ShowRedirectionWarningDialog(This,pfShowRdrDlg) ) 

#define IMsRdpClientNonScriptable4_get_ShowRedirectionWarningDialog(This,pfShowRdrDlg)	\
    ( (This)->lpVtbl -> get_ShowRedirectionWarningDialog(This,pfShowRdrDlg) ) 

#define IMsRdpClientNonScriptable4_put_PromptForCredentials(This,pfPrompt)	\
    ( (This)->lpVtbl -> put_PromptForCredentials(This,pfPrompt) ) 

#define IMsRdpClientNonScriptable4_get_PromptForCredentials(This,pfPrompt)	\
    ( (This)->lpVtbl -> get_PromptForCredentials(This,pfPrompt) ) 

#define IMsRdpClientNonScriptable4_put_NegotiateSecurityLayer(This,pfNegotiate)	\
    ( (This)->lpVtbl -> put_NegotiateSecurityLayer(This,pfNegotiate) ) 

#define IMsRdpClientNonScriptable4_get_NegotiateSecurityLayer(This,pfNegotiate)	\
    ( (This)->lpVtbl -> get_NegotiateSecurityLayer(This,pfNegotiate) ) 

#define IMsRdpClientNonScriptable4_put_EnableCredSspSupport(This,pfEnableSupport)	\
    ( (This)->lpVtbl -> put_EnableCredSspSupport(This,pfEnableSupport) ) 

#define IMsRdpClientNonScriptable4_get_EnableCredSspSupport(This,pfEnableSupport)	\
    ( (This)->lpVtbl -> get_EnableCredSspSupport(This,pfEnableSupport) ) 

#define IMsRdpClientNonScriptable4_put_RedirectDynamicDrives(This,pfRedirectDynamicDrives)	\
    ( (This)->lpVtbl -> put_RedirectDynamicDrives(This,pfRedirectDynamicDrives) ) 

#define IMsRdpClientNonScriptable4_get_RedirectDynamicDrives(This,pfRedirectDynamicDrives)	\
    ( (This)->lpVtbl -> get_RedirectDynamicDrives(This,pfRedirectDynamicDrives) ) 

#define IMsRdpClientNonScriptable4_put_RedirectDynamicDevices(This,pfRedirectDynamicDevices)	\
    ( (This)->lpVtbl -> put_RedirectDynamicDevices(This,pfRedirectDynamicDevices) ) 

#define IMsRdpClientNonScriptable4_get_RedirectDynamicDevices(This,pfRedirectDynamicDevices)	\
    ( (This)->lpVtbl -> get_RedirectDynamicDevices(This,pfRedirectDynamicDevices) ) 

#define IMsRdpClientNonScriptable4_get_DeviceCollection(This,ppDeviceCollection)	\
    ( (This)->lpVtbl -> get_DeviceCollection(This,ppDeviceCollection) ) 

#define IMsRdpClientNonScriptable4_get_DriveCollection(This,ppDeviceCollection)	\
    ( (This)->lpVtbl -> get_DriveCollection(This,ppDeviceCollection) ) 

#define IMsRdpClientNonScriptable4_put_WarnAboutSendingCredentials(This,pfWarn)	\
    ( (This)->lpVtbl -> put_WarnAboutSendingCredentials(This,pfWarn) ) 

#define IMsRdpClientNonScriptable4_get_WarnAboutSendingCredentials(This,pfWarn)	\
    ( (This)->lpVtbl -> get_WarnAboutSendingCredentials(This,pfWarn) ) 

#define IMsRdpClientNonScriptable4_put_WarnAboutClipboardRedirection(This,pfWarn)	\
    ( (This)->lpVtbl -> put_WarnAboutClipboardRedirection(This,pfWarn) ) 

#define IMsRdpClientNonScriptable4_get_WarnAboutClipboardRedirection(This,pfWarn)	\
    ( (This)->lpVtbl -> get_WarnAboutClipboardRedirection(This,pfWarn) ) 

#define IMsRdpClientNonScriptable4_put_ConnectionBarText(This,pConnectionBarText)	\
    ( (This)->lpVtbl -> put_ConnectionBarText(This,pConnectionBarText) ) 

#define IMsRdpClientNonScriptable4_get_ConnectionBarText(This,pConnectionBarText)	\
    ( (This)->lpVtbl -> get_ConnectionBarText(This,pConnectionBarText) ) 


#define IMsRdpClientNonScriptable4_put_RedirectionWarningType(This,pWrnType)	\
    ( (This)->lpVtbl -> put_RedirectionWarningType(This,pWrnType) ) 

#define IMsRdpClientNonScriptable4_get_RedirectionWarningType(This,pWrnType)	\
    ( (This)->lpVtbl -> get_RedirectionWarningType(This,pWrnType) ) 

#define IMsRdpClientNonScriptable4_put_MarkRdpSettingsSecure(This,pfRdpSecure)	\
    ( (This)->lpVtbl -> put_MarkRdpSettingsSecure(This,pfRdpSecure) ) 

#define IMsRdpClientNonScriptable4_get_MarkRdpSettingsSecure(This,pfRdpSecure)	\
    ( (This)->lpVtbl -> get_MarkRdpSettingsSecure(This,pfRdpSecure) ) 

#define IMsRdpClientNonScriptable4_put_PublisherCertificateChain(This,pVarCert)	\
    ( (This)->lpVtbl -> put_PublisherCertificateChain(This,pVarCert) ) 

#define IMsRdpClientNonScriptable4_get_PublisherCertificateChain(This,pVarCert)	\
    ( (This)->lpVtbl -> get_PublisherCertificateChain(This,pVarCert) ) 

#define IMsRdpClientNonScriptable4_put_WarnAboutPrinterRedirection(This,pfWarn)	\
    ( (This)->lpVtbl -> put_WarnAboutPrinterRedirection(This,pfWarn) ) 

#define IMsRdpClientNonScriptable4_get_WarnAboutPrinterRedirection(This,pfWarn)	\
    ( (This)->lpVtbl -> get_WarnAboutPrinterRedirection(This,pfWarn) ) 

#define IMsRdpClientNonScriptable4_put_AllowCredentialSaving(This,pfAllowSave)	\
    ( (This)->lpVtbl -> put_AllowCredentialSaving(This,pfAllowSave) ) 

#define IMsRdpClientNonScriptable4_get_AllowCredentialSaving(This,pfAllowSave)	\
    ( (This)->lpVtbl -> get_AllowCredentialSaving(This,pfAllowSave) ) 

#define IMsRdpClientNonScriptable4_put_PromptForCredsOnClient(This,pfPromptForCredsOnClient)	\
    ( (This)->lpVtbl -> put_PromptForCredsOnClient(This,pfPromptForCredsOnClient) ) 

#define IMsRdpClientNonScriptable4_get_PromptForCredsOnClient(This,pfPromptForCredsOnClient)	\
    ( (This)->lpVtbl -> get_PromptForCredsOnClient(This,pfPromptForCredsOnClient) ) 

#define IMsRdpClientNonScriptable4_put_LaunchedViaClientShellInterface(This,pfLaunchedViaClientShellInterface)	\
    ( (This)->lpVtbl -> put_LaunchedViaClientShellInterface(This,pfLaunchedViaClientShellInterface) ) 

#define IMsRdpClientNonScriptable4_get_LaunchedViaClientShellInterface(This,pfLaunchedViaClientShellInterface)	\
    ( (This)->lpVtbl -> get_LaunchedViaClientShellInterface(This,pfLaunchedViaClientShellInterface) ) 

#define IMsRdpClientNonScriptable4_put_TrustedZoneSite(This,pfIsTrustedZone)	\
    ( (This)->lpVtbl -> put_TrustedZoneSite(This,pfIsTrustedZone) ) 

#define IMsRdpClientNonScriptable4_get_TrustedZoneSite(This,pfIsTrustedZone)	\
    ( (This)->lpVtbl -> get_TrustedZoneSite(This,pfIsTrustedZone) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMsRdpClientNonScriptable4_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClientNonScriptable5_INTERFACE_DEFINED__
#define __IMsRdpClientNonScriptable5_INTERFACE_DEFINED__

/* interface IMsRdpClientNonScriptable5 */
/* [uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClientNonScriptable5;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4F6996D5-D7B1-412C-B0FF-063718566907")
    IMsRdpClientNonScriptable5 : public IMsRdpClientNonScriptable4
    {
    public:
        virtual /* [propput] */ HRESULT __stdcall put_UseMultimon( 
            /* [in] */ VARIANT_BOOL pfUseMultimon) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_UseMultimon( 
            /* [retval][out] */ VARIANT_BOOL *pfUseMultimon) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_RemoteMonitorCount( 
            /* [retval][out] */ unsigned long *pcRemoteMonitors) = 0;
        
        virtual HRESULT __stdcall GetRemoteMonitorsBoundingBox( 
            /* [out] */ long *pLeft,
            /* [out] */ long *pTop,
            /* [out] */ long *pRight,
            /* [out] */ long *pBottom) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_RemoteMonitorLayoutMatchesLocal( 
            /* [retval][out] */ VARIANT_BOOL *pfRemoteMatchesLocal) = 0;
        
        virtual /* [propput] */ HRESULT __stdcall put_DisableConnectionBar( 
            /* [in] */ VARIANT_BOOL rhs) = 0;
        
        virtual /* [propput] */ HRESULT __stdcall put_DisableRemoteAppCapsCheck( 
            /* [in] */ VARIANT_BOOL pfDisableRemoteAppCapsCheck) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_DisableRemoteAppCapsCheck( 
            /* [retval][out] */ VARIANT_BOOL *pfDisableRemoteAppCapsCheck) = 0;
        
        virtual /* [propput] */ HRESULT __stdcall put_WarnAboutDirectXRedirection( 
            /* [in] */ VARIANT_BOOL pfWarn) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_WarnAboutDirectXRedirection( 
            /* [retval][out] */ VARIANT_BOOL *pfWarn) = 0;
        
        virtual /* [propput] */ HRESULT __stdcall put_AllowPromptingForCredentials( 
            /* [in] */ VARIANT_BOOL pfAllow) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_AllowPromptingForCredentials( 
            /* [retval][out] */ VARIANT_BOOL *pfAllow) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMsRdpClientNonScriptable5Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClientNonScriptable5 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClientNonScriptable5 * This);
        
        /* [propput] */ HRESULT ( __stdcall *put_ClearTextPassword )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ BSTR rhs);
        
        /* [propput] */ HRESULT ( __stdcall *put_PortablePassword )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ BSTR pPortablePass);
        
        /* [propget] */ HRESULT ( __stdcall *get_PortablePassword )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ BSTR *pPortablePass);
        
        /* [propput] */ HRESULT ( __stdcall *put_PortableSalt )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ BSTR pPortableSalt);
        
        /* [propget] */ HRESULT ( __stdcall *get_PortableSalt )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ BSTR *pPortableSalt);
        
        /* [propput] */ HRESULT ( __stdcall *put_BinaryPassword )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ BSTR pBinaryPassword);
        
        /* [propget] */ HRESULT ( __stdcall *get_BinaryPassword )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ BSTR *pBinaryPassword);
        
        /* [propput] */ HRESULT ( __stdcall *put_BinarySalt )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ BSTR pSalt);
        
        /* [propget] */ HRESULT ( __stdcall *get_BinarySalt )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ BSTR *pSalt);
        
        HRESULT ( __stdcall *ResetPassword )( 
            IMsRdpClientNonScriptable5 * This);
        
        HRESULT ( __stdcall *NotifyRedirectDeviceChange )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ UINT_PTR wParam,
            /* [in] */ LONG_PTR lParam);
        
        HRESULT ( __stdcall *SendKeys )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ long numKeys,
            /* [in] */ VARIANT_BOOL *pbArrayKeyUp,
            /* [in] */ long *plKeyData);
        
        /* [propput] */ HRESULT ( __stdcall *put_UIParentWindowHandle )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ wireHWND phwndUIParentWindowHandle);
        
        /* [propget] */ HRESULT ( __stdcall *get_UIParentWindowHandle )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ wireHWND *phwndUIParentWindowHandle);
        
        /* [propput] */ HRESULT ( __stdcall *put_ShowRedirectionWarningDialog )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT_BOOL pfShowRdrDlg);
        
        /* [propget] */ HRESULT ( __stdcall *get_ShowRedirectionWarningDialog )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfShowRdrDlg);
        
        /* [propput] */ HRESULT ( __stdcall *put_PromptForCredentials )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT_BOOL pfPrompt);
        
        /* [propget] */ HRESULT ( __stdcall *get_PromptForCredentials )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfPrompt);
        
        /* [propput] */ HRESULT ( __stdcall *put_NegotiateSecurityLayer )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT_BOOL pfNegotiate);
        
        /* [propget] */ HRESULT ( __stdcall *get_NegotiateSecurityLayer )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfNegotiate);
        
        /* [propput] */ HRESULT ( __stdcall *put_EnableCredSspSupport )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT_BOOL pfEnableSupport);
        
        /* [propget] */ HRESULT ( __stdcall *get_EnableCredSspSupport )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfEnableSupport);
        
        /* [propput] */ HRESULT ( __stdcall *put_RedirectDynamicDrives )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT_BOOL pfRedirectDynamicDrives);
        
        /* [propget] */ HRESULT ( __stdcall *get_RedirectDynamicDrives )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRedirectDynamicDrives);
        
        /* [propput] */ HRESULT ( __stdcall *put_RedirectDynamicDevices )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT_BOOL pfRedirectDynamicDevices);
        
        /* [propget] */ HRESULT ( __stdcall *get_RedirectDynamicDevices )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRedirectDynamicDevices);
        
        /* [propget] */ HRESULT ( __stdcall *get_DeviceCollection )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ IMsRdpDeviceCollection **ppDeviceCollection);
        
        /* [propget] */ HRESULT ( __stdcall *get_DriveCollection )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ IMsRdpDriveCollection **ppDeviceCollection);
        
        /* [propput] */ HRESULT ( __stdcall *put_WarnAboutSendingCredentials )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT_BOOL pfWarn);
        
        /* [propget] */ HRESULT ( __stdcall *get_WarnAboutSendingCredentials )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfWarn);
        
        /* [propput] */ HRESULT ( __stdcall *put_WarnAboutClipboardRedirection )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT_BOOL pfWarn);
        
        /* [propget] */ HRESULT ( __stdcall *get_WarnAboutClipboardRedirection )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfWarn);
        
        /* [propput] */ HRESULT ( __stdcall *put_ConnectionBarText )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ BSTR pConnectionBarText);
        
        /* [propget] */ HRESULT ( __stdcall *get_ConnectionBarText )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ BSTR *pConnectionBarText);
        
        /* [propput] */ HRESULT ( __stdcall *put_RedirectionWarningType )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ RedirectionWarningType pWrnType);
        
        /* [propget] */ HRESULT ( __stdcall *get_RedirectionWarningType )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ RedirectionWarningType *pWrnType);
        
        /* [propput] */ HRESULT ( __stdcall *put_MarkRdpSettingsSecure )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT_BOOL pfRdpSecure);
        
        /* [propget] */ HRESULT ( __stdcall *get_MarkRdpSettingsSecure )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRdpSecure);
        
        /* [propput] */ HRESULT ( __stdcall *put_PublisherCertificateChain )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT *pVarCert);
        
        /* [propget] */ HRESULT ( __stdcall *get_PublisherCertificateChain )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT *pVarCert);
        
        /* [propput] */ HRESULT ( __stdcall *put_WarnAboutPrinterRedirection )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT_BOOL pfWarn);
        
        /* [propget] */ HRESULT ( __stdcall *get_WarnAboutPrinterRedirection )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfWarn);
        
        /* [propput] */ HRESULT ( __stdcall *put_AllowCredentialSaving )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT_BOOL pfAllowSave);
        
        /* [propget] */ HRESULT ( __stdcall *get_AllowCredentialSaving )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfAllowSave);
        
        /* [propput] */ HRESULT ( __stdcall *put_PromptForCredsOnClient )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT_BOOL pfPromptForCredsOnClient);
        
        /* [propget] */ HRESULT ( __stdcall *get_PromptForCredsOnClient )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfPromptForCredsOnClient);
        
        /* [propput] */ HRESULT ( __stdcall *put_LaunchedViaClientShellInterface )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT_BOOL pfLaunchedViaClientShellInterface);
        
        /* [propget] */ HRESULT ( __stdcall *get_LaunchedViaClientShellInterface )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfLaunchedViaClientShellInterface);
        
        /* [propput] */ HRESULT ( __stdcall *put_TrustedZoneSite )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT_BOOL pfIsTrustedZone);
        
        /* [propget] */ HRESULT ( __stdcall *get_TrustedZoneSite )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfIsTrustedZone);
        
        /* [propput] */ HRESULT ( __stdcall *put_UseMultimon )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT_BOOL pfUseMultimon);
        
        /* [propget] */ HRESULT ( __stdcall *get_UseMultimon )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfUseMultimon);
        
        /* [propget] */ HRESULT ( __stdcall *get_RemoteMonitorCount )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ unsigned long *pcRemoteMonitors);
        
        HRESULT ( __stdcall *GetRemoteMonitorsBoundingBox )( 
            IMsRdpClientNonScriptable5 * This,
            /* [out] */ long *pLeft,
            /* [out] */ long *pTop,
            /* [out] */ long *pRight,
            /* [out] */ long *pBottom);
        
        /* [propget] */ HRESULT ( __stdcall *get_RemoteMonitorLayoutMatchesLocal )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRemoteMatchesLocal);
        
        /* [propput] */ HRESULT ( __stdcall *put_DisableConnectionBar )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT_BOOL rhs);
        
        /* [propput] */ HRESULT ( __stdcall *put_DisableRemoteAppCapsCheck )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT_BOOL pfDisableRemoteAppCapsCheck);
        
        /* [propget] */ HRESULT ( __stdcall *get_DisableRemoteAppCapsCheck )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfDisableRemoteAppCapsCheck);
        
        /* [propput] */ HRESULT ( __stdcall *put_WarnAboutDirectXRedirection )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT_BOOL pfWarn);
        
        /* [propget] */ HRESULT ( __stdcall *get_WarnAboutDirectXRedirection )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfWarn);
        
        /* [propput] */ HRESULT ( __stdcall *put_AllowPromptingForCredentials )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT_BOOL pfAllow);
        
        /* [propget] */ HRESULT ( __stdcall *get_AllowPromptingForCredentials )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfAllow);
        
        END_INTERFACE
    } IMsRdpClientNonScriptable5Vtbl;

    interface IMsRdpClientNonScriptable5
    {
        CONST_VTBL struct IMsRdpClientNonScriptable5Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClientNonScriptable5_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClientNonScriptable5_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClientNonScriptable5_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClientNonScriptable5_put_ClearTextPassword(This,rhs)	\
    ( (This)->lpVtbl -> put_ClearTextPassword(This,rhs) ) 

#define IMsRdpClientNonScriptable5_put_PortablePassword(This,pPortablePass)	\
    ( (This)->lpVtbl -> put_PortablePassword(This,pPortablePass) ) 

#define IMsRdpClientNonScriptable5_get_PortablePassword(This,pPortablePass)	\
    ( (This)->lpVtbl -> get_PortablePassword(This,pPortablePass) ) 

#define IMsRdpClientNonScriptable5_put_PortableSalt(This,pPortableSalt)	\
    ( (This)->lpVtbl -> put_PortableSalt(This,pPortableSalt) ) 

#define IMsRdpClientNonScriptable5_get_PortableSalt(This,pPortableSalt)	\
    ( (This)->lpVtbl -> get_PortableSalt(This,pPortableSalt) ) 

#define IMsRdpClientNonScriptable5_put_BinaryPassword(This,pBinaryPassword)	\
    ( (This)->lpVtbl -> put_BinaryPassword(This,pBinaryPassword) ) 

#define IMsRdpClientNonScriptable5_get_BinaryPassword(This,pBinaryPassword)	\
    ( (This)->lpVtbl -> get_BinaryPassword(This,pBinaryPassword) ) 

#define IMsRdpClientNonScriptable5_put_BinarySalt(This,pSalt)	\
    ( (This)->lpVtbl -> put_BinarySalt(This,pSalt) ) 

#define IMsRdpClientNonScriptable5_get_BinarySalt(This,pSalt)	\
    ( (This)->lpVtbl -> get_BinarySalt(This,pSalt) ) 

#define IMsRdpClientNonScriptable5_ResetPassword(This)	\
    ( (This)->lpVtbl -> ResetPassword(This) ) 


#define IMsRdpClientNonScriptable5_NotifyRedirectDeviceChange(This,wParam,lParam)	\
    ( (This)->lpVtbl -> NotifyRedirectDeviceChange(This,wParam,lParam) ) 

#define IMsRdpClientNonScriptable5_SendKeys(This,numKeys,pbArrayKeyUp,plKeyData)	\
    ( (This)->lpVtbl -> SendKeys(This,numKeys,pbArrayKeyUp,plKeyData) ) 


#define IMsRdpClientNonScriptable5_put_UIParentWindowHandle(This,phwndUIParentWindowHandle)	\
    ( (This)->lpVtbl -> put_UIParentWindowHandle(This,phwndUIParentWindowHandle) ) 

#define IMsRdpClientNonScriptable5_get_UIParentWindowHandle(This,phwndUIParentWindowHandle)	\
    ( (This)->lpVtbl -> get_UIParentWindowHandle(This,phwndUIParentWindowHandle) ) 


#define IMsRdpClientNonScriptable5_put_ShowRedirectionWarningDialog(This,pfShowRdrDlg)	\
    ( (This)->lpVtbl -> put_ShowRedirectionWarningDialog(This,pfShowRdrDlg) ) 

#define IMsRdpClientNonScriptable5_get_ShowRedirectionWarningDialog(This,pfShowRdrDlg)	\
    ( (This)->lpVtbl -> get_ShowRedirectionWarningDialog(This,pfShowRdrDlg) ) 

#define IMsRdpClientNonScriptable5_put_PromptForCredentials(This,pfPrompt)	\
    ( (This)->lpVtbl -> put_PromptForCredentials(This,pfPrompt) ) 

#define IMsRdpClientNonScriptable5_get_PromptForCredentials(This,pfPrompt)	\
    ( (This)->lpVtbl -> get_PromptForCredentials(This,pfPrompt) ) 

#define IMsRdpClientNonScriptable5_put_NegotiateSecurityLayer(This,pfNegotiate)	\
    ( (This)->lpVtbl -> put_NegotiateSecurityLayer(This,pfNegotiate) ) 

#define IMsRdpClientNonScriptable5_get_NegotiateSecurityLayer(This,pfNegotiate)	\
    ( (This)->lpVtbl -> get_NegotiateSecurityLayer(This,pfNegotiate) ) 

#define IMsRdpClientNonScriptable5_put_EnableCredSspSupport(This,pfEnableSupport)	\
    ( (This)->lpVtbl -> put_EnableCredSspSupport(This,pfEnableSupport) ) 

#define IMsRdpClientNonScriptable5_get_EnableCredSspSupport(This,pfEnableSupport)	\
    ( (This)->lpVtbl -> get_EnableCredSspSupport(This,pfEnableSupport) ) 

#define IMsRdpClientNonScriptable5_put_RedirectDynamicDrives(This,pfRedirectDynamicDrives)	\
    ( (This)->lpVtbl -> put_RedirectDynamicDrives(This,pfRedirectDynamicDrives) ) 

#define IMsRdpClientNonScriptable5_get_RedirectDynamicDrives(This,pfRedirectDynamicDrives)	\
    ( (This)->lpVtbl -> get_RedirectDynamicDrives(This,pfRedirectDynamicDrives) ) 

#define IMsRdpClientNonScriptable5_put_RedirectDynamicDevices(This,pfRedirectDynamicDevices)	\
    ( (This)->lpVtbl -> put_RedirectDynamicDevices(This,pfRedirectDynamicDevices) ) 

#define IMsRdpClientNonScriptable5_get_RedirectDynamicDevices(This,pfRedirectDynamicDevices)	\
    ( (This)->lpVtbl -> get_RedirectDynamicDevices(This,pfRedirectDynamicDevices) ) 

#define IMsRdpClientNonScriptable5_get_DeviceCollection(This,ppDeviceCollection)	\
    ( (This)->lpVtbl -> get_DeviceCollection(This,ppDeviceCollection) ) 

#define IMsRdpClientNonScriptable5_get_DriveCollection(This,ppDeviceCollection)	\
    ( (This)->lpVtbl -> get_DriveCollection(This,ppDeviceCollection) ) 

#define IMsRdpClientNonScriptable5_put_WarnAboutSendingCredentials(This,pfWarn)	\
    ( (This)->lpVtbl -> put_WarnAboutSendingCredentials(This,pfWarn) ) 

#define IMsRdpClientNonScriptable5_get_WarnAboutSendingCredentials(This,pfWarn)	\
    ( (This)->lpVtbl -> get_WarnAboutSendingCredentials(This,pfWarn) ) 

#define IMsRdpClientNonScriptable5_put_WarnAboutClipboardRedirection(This,pfWarn)	\
    ( (This)->lpVtbl -> put_WarnAboutClipboardRedirection(This,pfWarn) ) 

#define IMsRdpClientNonScriptable5_get_WarnAboutClipboardRedirection(This,pfWarn)	\
    ( (This)->lpVtbl -> get_WarnAboutClipboardRedirection(This,pfWarn) ) 

#define IMsRdpClientNonScriptable5_put_ConnectionBarText(This,pConnectionBarText)	\
    ( (This)->lpVtbl -> put_ConnectionBarText(This,pConnectionBarText) ) 

#define IMsRdpClientNonScriptable5_get_ConnectionBarText(This,pConnectionBarText)	\
    ( (This)->lpVtbl -> get_ConnectionBarText(This,pConnectionBarText) ) 


#define IMsRdpClientNonScriptable5_put_RedirectionWarningType(This,pWrnType)	\
    ( (This)->lpVtbl -> put_RedirectionWarningType(This,pWrnType) ) 

#define IMsRdpClientNonScriptable5_get_RedirectionWarningType(This,pWrnType)	\
    ( (This)->lpVtbl -> get_RedirectionWarningType(This,pWrnType) ) 

#define IMsRdpClientNonScriptable5_put_MarkRdpSettingsSecure(This,pfRdpSecure)	\
    ( (This)->lpVtbl -> put_MarkRdpSettingsSecure(This,pfRdpSecure) ) 

#define IMsRdpClientNonScriptable5_get_MarkRdpSettingsSecure(This,pfRdpSecure)	\
    ( (This)->lpVtbl -> get_MarkRdpSettingsSecure(This,pfRdpSecure) ) 

#define IMsRdpClientNonScriptable5_put_PublisherCertificateChain(This,pVarCert)	\
    ( (This)->lpVtbl -> put_PublisherCertificateChain(This,pVarCert) ) 

#define IMsRdpClientNonScriptable5_get_PublisherCertificateChain(This,pVarCert)	\
    ( (This)->lpVtbl -> get_PublisherCertificateChain(This,pVarCert) ) 

#define IMsRdpClientNonScriptable5_put_WarnAboutPrinterRedirection(This,pfWarn)	\
    ( (This)->lpVtbl -> put_WarnAboutPrinterRedirection(This,pfWarn) ) 

#define IMsRdpClientNonScriptable5_get_WarnAboutPrinterRedirection(This,pfWarn)	\
    ( (This)->lpVtbl -> get_WarnAboutPrinterRedirection(This,pfWarn) ) 

#define IMsRdpClientNonScriptable5_put_AllowCredentialSaving(This,pfAllowSave)	\
    ( (This)->lpVtbl -> put_AllowCredentialSaving(This,pfAllowSave) ) 

#define IMsRdpClientNonScriptable5_get_AllowCredentialSaving(This,pfAllowSave)	\
    ( (This)->lpVtbl -> get_AllowCredentialSaving(This,pfAllowSave) ) 

#define IMsRdpClientNonScriptable5_put_PromptForCredsOnClient(This,pfPromptForCredsOnClient)	\
    ( (This)->lpVtbl -> put_PromptForCredsOnClient(This,pfPromptForCredsOnClient) ) 

#define IMsRdpClientNonScriptable5_get_PromptForCredsOnClient(This,pfPromptForCredsOnClient)	\
    ( (This)->lpVtbl -> get_PromptForCredsOnClient(This,pfPromptForCredsOnClient) ) 

#define IMsRdpClientNonScriptable5_put_LaunchedViaClientShellInterface(This,pfLaunchedViaClientShellInterface)	\
    ( (This)->lpVtbl -> put_LaunchedViaClientShellInterface(This,pfLaunchedViaClientShellInterface) ) 

#define IMsRdpClientNonScriptable5_get_LaunchedViaClientShellInterface(This,pfLaunchedViaClientShellInterface)	\
    ( (This)->lpVtbl -> get_LaunchedViaClientShellInterface(This,pfLaunchedViaClientShellInterface) ) 

#define IMsRdpClientNonScriptable5_put_TrustedZoneSite(This,pfIsTrustedZone)	\
    ( (This)->lpVtbl -> put_TrustedZoneSite(This,pfIsTrustedZone) ) 

#define IMsRdpClientNonScriptable5_get_TrustedZoneSite(This,pfIsTrustedZone)	\
    ( (This)->lpVtbl -> get_TrustedZoneSite(This,pfIsTrustedZone) ) 


#define IMsRdpClientNonScriptable5_put_UseMultimon(This,pfUseMultimon)	\
    ( (This)->lpVtbl -> put_UseMultimon(This,pfUseMultimon) ) 

#define IMsRdpClientNonScriptable5_get_UseMultimon(This,pfUseMultimon)	\
    ( (This)->lpVtbl -> get_UseMultimon(This,pfUseMultimon) ) 

#define IMsRdpClientNonScriptable5_get_RemoteMonitorCount(This,pcRemoteMonitors)	\
    ( (This)->lpVtbl -> get_RemoteMonitorCount(This,pcRemoteMonitors) ) 

#define IMsRdpClientNonScriptable5_GetRemoteMonitorsBoundingBox(This,pLeft,pTop,pRight,pBottom)	\
    ( (This)->lpVtbl -> GetRemoteMonitorsBoundingBox(This,pLeft,pTop,pRight,pBottom) ) 

#define IMsRdpClientNonScriptable5_get_RemoteMonitorLayoutMatchesLocal(This,pfRemoteMatchesLocal)	\
    ( (This)->lpVtbl -> get_RemoteMonitorLayoutMatchesLocal(This,pfRemoteMatchesLocal) ) 

#define IMsRdpClientNonScriptable5_put_DisableConnectionBar(This,rhs)	\
    ( (This)->lpVtbl -> put_DisableConnectionBar(This,rhs) ) 

#define IMsRdpClientNonScriptable5_put_DisableRemoteAppCapsCheck(This,pfDisableRemoteAppCapsCheck)	\
    ( (This)->lpVtbl -> put_DisableRemoteAppCapsCheck(This,pfDisableRemoteAppCapsCheck) ) 

#define IMsRdpClientNonScriptable5_get_DisableRemoteAppCapsCheck(This,pfDisableRemoteAppCapsCheck)	\
    ( (This)->lpVtbl -> get_DisableRemoteAppCapsCheck(This,pfDisableRemoteAppCapsCheck) ) 

#define IMsRdpClientNonScriptable5_put_WarnAboutDirectXRedirection(This,pfWarn)	\
    ( (This)->lpVtbl -> put_WarnAboutDirectXRedirection(This,pfWarn) ) 

#define IMsRdpClientNonScriptable5_get_WarnAboutDirectXRedirection(This,pfWarn)	\
    ( (This)->lpVtbl -> get_WarnAboutDirectXRedirection(This,pfWarn) ) 

#define IMsRdpClientNonScriptable5_put_AllowPromptingForCredentials(This,pfAllow)	\
    ( (This)->lpVtbl -> put_AllowPromptingForCredentials(This,pfAllow) ) 

#define IMsRdpClientNonScriptable5_get_AllowPromptingForCredentials(This,pfAllow)	\
    ( (This)->lpVtbl -> get_AllowPromptingForCredentials(This,pfAllow) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMsRdpClientNonScriptable5_INTERFACE_DEFINED__ */


#ifndef __IMsRdpPreferredRedirectionInfo_INTERFACE_DEFINED__
#define __IMsRdpPreferredRedirectionInfo_INTERFACE_DEFINED__

/* interface IMsRdpPreferredRedirectionInfo */
/* [uuid][object] */ 


EXTERN_C const IID IID_IMsRdpPreferredRedirectionInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FDD029F9-9574-4DEF-8529-64B521CCCAA4")
    IMsRdpPreferredRedirectionInfo : public IUnknown
    {
    public:
        virtual /* [propput] */ HRESULT __stdcall put_UseRedirectionServerName( 
            /* [in] */ VARIANT_BOOL pVal) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_UseRedirectionServerName( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMsRdpPreferredRedirectionInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpPreferredRedirectionInfo * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpPreferredRedirectionInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpPreferredRedirectionInfo * This);
        
        /* [propput] */ HRESULT ( __stdcall *put_UseRedirectionServerName )( 
            IMsRdpPreferredRedirectionInfo * This,
            /* [in] */ VARIANT_BOOL pVal);
        
        /* [propget] */ HRESULT ( __stdcall *get_UseRedirectionServerName )( 
            IMsRdpPreferredRedirectionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        END_INTERFACE
    } IMsRdpPreferredRedirectionInfoVtbl;

    interface IMsRdpPreferredRedirectionInfo
    {
        CONST_VTBL struct IMsRdpPreferredRedirectionInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpPreferredRedirectionInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpPreferredRedirectionInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpPreferredRedirectionInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpPreferredRedirectionInfo_put_UseRedirectionServerName(This,pVal)	\
    ( (This)->lpVtbl -> put_UseRedirectionServerName(This,pVal) ) 

#define IMsRdpPreferredRedirectionInfo_get_UseRedirectionServerName(This,pVal)	\
    ( (This)->lpVtbl -> get_UseRedirectionServerName(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMsRdpPreferredRedirectionInfo_INTERFACE_DEFINED__ */


#ifndef __IMsTscDebug_INTERFACE_DEFINED__
#define __IMsTscDebug_INTERFACE_DEFINED__

/* interface IMsTscDebug */
/* [oleautomation][dual][hidden][uuid][object] */ 


EXTERN_C const IID IID_IMsTscDebug;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("209D0EB9-6254-47B1-9033-A98DAE55BB27")
    IMsTscDebug : public IDispatch
    {
    public:
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_HatchBitmapPDU( 
            /* [in] */ long phatchBitmapPDU) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_HatchBitmapPDU( 
            /* [retval][out] */ long *phatchBitmapPDU) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_HatchSSBOrder( 
            /* [in] */ long phatchSSBOrder) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_HatchSSBOrder( 
            /* [retval][out] */ long *phatchSSBOrder) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_HatchMembltOrder( 
            /* [in] */ long phatchMembltOrder) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_HatchMembltOrder( 
            /* [retval][out] */ long *phatchMembltOrder) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_HatchIndexPDU( 
            /* [in] */ long phatchIndexPDU) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_HatchIndexPDU( 
            /* [retval][out] */ long *phatchIndexPDU) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_LabelMemblt( 
            /* [in] */ long plabelMemblt) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_LabelMemblt( 
            /* [retval][out] */ long *plabelMemblt) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_BitmapCacheMonitor( 
            /* [in] */ long pbitmapCacheMonitor) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_BitmapCacheMonitor( 
            /* [retval][out] */ long *pbitmapCacheMonitor) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_MallocFailuresPercent( 
            /* [in] */ long pmallocFailuresPercent) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_MallocFailuresPercent( 
            /* [retval][out] */ long *pmallocFailuresPercent) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_MallocHugeFailuresPercent( 
            /* [in] */ long pmallocHugeFailuresPercent) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_MallocHugeFailuresPercent( 
            /* [retval][out] */ long *pmallocHugeFailuresPercent) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_NetThroughput( 
            /* [in] */ long NetThroughput) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_NetThroughput( 
            /* [retval][out] */ long *NetThroughput) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_CLXCmdLine( 
            /* [in] */ BSTR pCLXCmdLine) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_CLXCmdLine( 
            /* [retval][out] */ BSTR *pCLXCmdLine) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_CLXDll( 
            /* [in] */ BSTR pCLXDll) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_CLXDll( 
            /* [retval][out] */ BSTR *pCLXDll) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_RemoteProgramsHatchVisibleRegion( 
            /* [in] */ long pcbHatch) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RemoteProgramsHatchVisibleRegion( 
            /* [retval][out] */ long *pcbHatch) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_RemoteProgramsHatchVisibleNoDataRegion( 
            /* [in] */ long pcbHatch) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RemoteProgramsHatchVisibleNoDataRegion( 
            /* [retval][out] */ long *pcbHatch) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_RemoteProgramsHatchNonVisibleRegion( 
            /* [in] */ long pcbHatch) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RemoteProgramsHatchNonVisibleRegion( 
            /* [retval][out] */ long *pcbHatch) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_RemoteProgramsHatchWindow( 
            /* [in] */ long pcbHatch) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RemoteProgramsHatchWindow( 
            /* [retval][out] */ long *pcbHatch) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_RemoteProgramsStayConnectOnBadCaps( 
            /* [in] */ long pcbStayConnected) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RemoteProgramsStayConnectOnBadCaps( 
            /* [retval][out] */ long *pcbStayConnected) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ControlType( 
            /* [retval][out] */ unsigned int *pControlType) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_DecodeGfx( 
            /* [in] */ VARIANT_BOOL rhs) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMsTscDebugVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsTscDebug * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsTscDebug * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsTscDebug * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsTscDebug * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsTscDebug * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsTscDebug * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsTscDebug * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HatchBitmapPDU )( 
            IMsTscDebug * This,
            /* [in] */ long phatchBitmapPDU);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HatchBitmapPDU )( 
            IMsTscDebug * This,
            /* [retval][out] */ long *phatchBitmapPDU);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HatchSSBOrder )( 
            IMsTscDebug * This,
            /* [in] */ long phatchSSBOrder);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HatchSSBOrder )( 
            IMsTscDebug * This,
            /* [retval][out] */ long *phatchSSBOrder);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HatchMembltOrder )( 
            IMsTscDebug * This,
            /* [in] */ long phatchMembltOrder);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HatchMembltOrder )( 
            IMsTscDebug * This,
            /* [retval][out] */ long *phatchMembltOrder);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HatchIndexPDU )( 
            IMsTscDebug * This,
            /* [in] */ long phatchIndexPDU);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HatchIndexPDU )( 
            IMsTscDebug * This,
            /* [retval][out] */ long *phatchIndexPDU);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_LabelMemblt )( 
            IMsTscDebug * This,
            /* [in] */ long plabelMemblt);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LabelMemblt )( 
            IMsTscDebug * This,
            /* [retval][out] */ long *plabelMemblt);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapCacheMonitor )( 
            IMsTscDebug * This,
            /* [in] */ long pbitmapCacheMonitor);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapCacheMonitor )( 
            IMsTscDebug * This,
            /* [retval][out] */ long *pbitmapCacheMonitor);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MallocFailuresPercent )( 
            IMsTscDebug * This,
            /* [in] */ long pmallocFailuresPercent);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MallocFailuresPercent )( 
            IMsTscDebug * This,
            /* [retval][out] */ long *pmallocFailuresPercent);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MallocHugeFailuresPercent )( 
            IMsTscDebug * This,
            /* [in] */ long pmallocHugeFailuresPercent);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MallocHugeFailuresPercent )( 
            IMsTscDebug * This,
            /* [retval][out] */ long *pmallocHugeFailuresPercent);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_NetThroughput )( 
            IMsTscDebug * This,
            /* [in] */ long NetThroughput);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NetThroughput )( 
            IMsTscDebug * This,
            /* [retval][out] */ long *NetThroughput);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_CLXCmdLine )( 
            IMsTscDebug * This,
            /* [in] */ BSTR pCLXCmdLine);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CLXCmdLine )( 
            IMsTscDebug * This,
            /* [retval][out] */ BSTR *pCLXCmdLine);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_CLXDll )( 
            IMsTscDebug * This,
            /* [in] */ BSTR pCLXDll);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CLXDll )( 
            IMsTscDebug * This,
            /* [retval][out] */ BSTR *pCLXDll);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RemoteProgramsHatchVisibleRegion )( 
            IMsTscDebug * This,
            /* [in] */ long pcbHatch);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RemoteProgramsHatchVisibleRegion )( 
            IMsTscDebug * This,
            /* [retval][out] */ long *pcbHatch);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RemoteProgramsHatchVisibleNoDataRegion )( 
            IMsTscDebug * This,
            /* [in] */ long pcbHatch);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RemoteProgramsHatchVisibleNoDataRegion )( 
            IMsTscDebug * This,
            /* [retval][out] */ long *pcbHatch);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RemoteProgramsHatchNonVisibleRegion )( 
            IMsTscDebug * This,
            /* [in] */ long pcbHatch);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RemoteProgramsHatchNonVisibleRegion )( 
            IMsTscDebug * This,
            /* [retval][out] */ long *pcbHatch);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RemoteProgramsHatchWindow )( 
            IMsTscDebug * This,
            /* [in] */ long pcbHatch);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RemoteProgramsHatchWindow )( 
            IMsTscDebug * This,
            /* [retval][out] */ long *pcbHatch);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RemoteProgramsStayConnectOnBadCaps )( 
            IMsTscDebug * This,
            /* [in] */ long pcbStayConnected);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RemoteProgramsStayConnectOnBadCaps )( 
            IMsTscDebug * This,
            /* [retval][out] */ long *pcbStayConnected);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ControlType )( 
            IMsTscDebug * This,
            /* [retval][out] */ unsigned int *pControlType);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DecodeGfx )( 
            IMsTscDebug * This,
            /* [in] */ VARIANT_BOOL rhs);
        
        END_INTERFACE
    } IMsTscDebugVtbl;

    interface IMsTscDebug
    {
        CONST_VTBL struct IMsTscDebugVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsTscDebug_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsTscDebug_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsTscDebug_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsTscDebug_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsTscDebug_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsTscDebug_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsTscDebug_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMsTscDebug_put_HatchBitmapPDU(This,phatchBitmapPDU)	\
    ( (This)->lpVtbl -> put_HatchBitmapPDU(This,phatchBitmapPDU) ) 

#define IMsTscDebug_get_HatchBitmapPDU(This,phatchBitmapPDU)	\
    ( (This)->lpVtbl -> get_HatchBitmapPDU(This,phatchBitmapPDU) ) 

#define IMsTscDebug_put_HatchSSBOrder(This,phatchSSBOrder)	\
    ( (This)->lpVtbl -> put_HatchSSBOrder(This,phatchSSBOrder) ) 

#define IMsTscDebug_get_HatchSSBOrder(This,phatchSSBOrder)	\
    ( (This)->lpVtbl -> get_HatchSSBOrder(This,phatchSSBOrder) ) 

#define IMsTscDebug_put_HatchMembltOrder(This,phatchMembltOrder)	\
    ( (This)->lpVtbl -> put_HatchMembltOrder(This,phatchMembltOrder) ) 

#define IMsTscDebug_get_HatchMembltOrder(This,phatchMembltOrder)	\
    ( (This)->lpVtbl -> get_HatchMembltOrder(This,phatchMembltOrder) ) 

#define IMsTscDebug_put_HatchIndexPDU(This,phatchIndexPDU)	\
    ( (This)->lpVtbl -> put_HatchIndexPDU(This,phatchIndexPDU) ) 

#define IMsTscDebug_get_HatchIndexPDU(This,phatchIndexPDU)	\
    ( (This)->lpVtbl -> get_HatchIndexPDU(This,phatchIndexPDU) ) 

#define IMsTscDebug_put_LabelMemblt(This,plabelMemblt)	\
    ( (This)->lpVtbl -> put_LabelMemblt(This,plabelMemblt) ) 

#define IMsTscDebug_get_LabelMemblt(This,plabelMemblt)	\
    ( (This)->lpVtbl -> get_LabelMemblt(This,plabelMemblt) ) 

#define IMsTscDebug_put_BitmapCacheMonitor(This,pbitmapCacheMonitor)	\
    ( (This)->lpVtbl -> put_BitmapCacheMonitor(This,pbitmapCacheMonitor) ) 

#define IMsTscDebug_get_BitmapCacheMonitor(This,pbitmapCacheMonitor)	\
    ( (This)->lpVtbl -> get_BitmapCacheMonitor(This,pbitmapCacheMonitor) ) 

#define IMsTscDebug_put_MallocFailuresPercent(This,pmallocFailuresPercent)	\
    ( (This)->lpVtbl -> put_MallocFailuresPercent(This,pmallocFailuresPercent) ) 

#define IMsTscDebug_get_MallocFailuresPercent(This,pmallocFailuresPercent)	\
    ( (This)->lpVtbl -> get_MallocFailuresPercent(This,pmallocFailuresPercent) ) 

#define IMsTscDebug_put_MallocHugeFailuresPercent(This,pmallocHugeFailuresPercent)	\
    ( (This)->lpVtbl -> put_MallocHugeFailuresPercent(This,pmallocHugeFailuresPercent) ) 

#define IMsTscDebug_get_MallocHugeFailuresPercent(This,pmallocHugeFailuresPercent)	\
    ( (This)->lpVtbl -> get_MallocHugeFailuresPercent(This,pmallocHugeFailuresPercent) ) 

#define IMsTscDebug_put_NetThroughput(This,NetThroughput)	\
    ( (This)->lpVtbl -> put_NetThroughput(This,NetThroughput) ) 

#define IMsTscDebug_get_NetThroughput(This,NetThroughput)	\
    ( (This)->lpVtbl -> get_NetThroughput(This,NetThroughput) ) 

#define IMsTscDebug_put_CLXCmdLine(This,pCLXCmdLine)	\
    ( (This)->lpVtbl -> put_CLXCmdLine(This,pCLXCmdLine) ) 

#define IMsTscDebug_get_CLXCmdLine(This,pCLXCmdLine)	\
    ( (This)->lpVtbl -> get_CLXCmdLine(This,pCLXCmdLine) ) 

#define IMsTscDebug_put_CLXDll(This,pCLXDll)	\
    ( (This)->lpVtbl -> put_CLXDll(This,pCLXDll) ) 

#define IMsTscDebug_get_CLXDll(This,pCLXDll)	\
    ( (This)->lpVtbl -> get_CLXDll(This,pCLXDll) ) 

#define IMsTscDebug_put_RemoteProgramsHatchVisibleRegion(This,pcbHatch)	\
    ( (This)->lpVtbl -> put_RemoteProgramsHatchVisibleRegion(This,pcbHatch) ) 

#define IMsTscDebug_get_RemoteProgramsHatchVisibleRegion(This,pcbHatch)	\
    ( (This)->lpVtbl -> get_RemoteProgramsHatchVisibleRegion(This,pcbHatch) ) 

#define IMsTscDebug_put_RemoteProgramsHatchVisibleNoDataRegion(This,pcbHatch)	\
    ( (This)->lpVtbl -> put_RemoteProgramsHatchVisibleNoDataRegion(This,pcbHatch) ) 

#define IMsTscDebug_get_RemoteProgramsHatchVisibleNoDataRegion(This,pcbHatch)	\
    ( (This)->lpVtbl -> get_RemoteProgramsHatchVisibleNoDataRegion(This,pcbHatch) ) 

#define IMsTscDebug_put_RemoteProgramsHatchNonVisibleRegion(This,pcbHatch)	\
    ( (This)->lpVtbl -> put_RemoteProgramsHatchNonVisibleRegion(This,pcbHatch) ) 

#define IMsTscDebug_get_RemoteProgramsHatchNonVisibleRegion(This,pcbHatch)	\
    ( (This)->lpVtbl -> get_RemoteProgramsHatchNonVisibleRegion(This,pcbHatch) ) 

#define IMsTscDebug_put_RemoteProgramsHatchWindow(This,pcbHatch)	\
    ( (This)->lpVtbl -> put_RemoteProgramsHatchWindow(This,pcbHatch) ) 

#define IMsTscDebug_get_RemoteProgramsHatchWindow(This,pcbHatch)	\
    ( (This)->lpVtbl -> get_RemoteProgramsHatchWindow(This,pcbHatch) ) 

#define IMsTscDebug_put_RemoteProgramsStayConnectOnBadCaps(This,pcbStayConnected)	\
    ( (This)->lpVtbl -> put_RemoteProgramsStayConnectOnBadCaps(This,pcbStayConnected) ) 

#define IMsTscDebug_get_RemoteProgramsStayConnectOnBadCaps(This,pcbStayConnected)	\
    ( (This)->lpVtbl -> get_RemoteProgramsStayConnectOnBadCaps(This,pcbStayConnected) ) 

#define IMsTscDebug_get_ControlType(This,pControlType)	\
    ( (This)->lpVtbl -> get_ControlType(This,pControlType) ) 

#define IMsTscDebug_put_DecodeGfx(This,rhs)	\
    ( (This)->lpVtbl -> put_DecodeGfx(This,rhs) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMsTscDebug_INTERFACE_DEFINED__ */


#ifndef __IMsTscAx_Redist_INTERFACE_DEFINED__
#define __IMsTscAx_Redist_INTERFACE_DEFINED__

/* interface IMsTscAx_Redist */
/* [oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsTscAx_Redist;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("327BB5CD-834E-4400-AEF2-B30E15E5D680")
    IMsTscAx_Redist : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IMsTscAx_RedistVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsTscAx_Redist * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsTscAx_Redist * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsTscAx_Redist * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsTscAx_Redist * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsTscAx_Redist * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsTscAx_Redist * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsTscAx_Redist * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IMsTscAx_RedistVtbl;

    interface IMsTscAx_Redist
    {
        CONST_VTBL struct IMsTscAx_RedistVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsTscAx_Redist_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsTscAx_Redist_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsTscAx_Redist_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsTscAx_Redist_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsTscAx_Redist_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsTscAx_Redist_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsTscAx_Redist_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMsTscAx_Redist_INTERFACE_DEFINED__ */


#ifndef __IMsTscAx_INTERFACE_DEFINED__
#define __IMsTscAx_INTERFACE_DEFINED__

/* interface IMsTscAx */
/* [oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsTscAx;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8C11EFAE-92C3-11D1-BC1E-00C04FA31489")
    IMsTscAx : public IMsTscAx_Redist
    {
    public:
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Server( 
            /* [in] */ BSTR pServer) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Server( 
            /* [retval][out] */ BSTR *pServer) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Domain( 
            /* [in] */ BSTR pDomain) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Domain( 
            /* [retval][out] */ BSTR *pDomain) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_UserName( 
            /* [in] */ BSTR pUserName) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_UserName( 
            /* [retval][out] */ BSTR *pUserName) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_DisconnectedText( 
            /* [in] */ BSTR pDisconnectedText) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DisconnectedText( 
            /* [retval][out] */ BSTR *pDisconnectedText) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_ConnectingText( 
            /* [in] */ BSTR pConnectingText) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ConnectingText( 
            /* [retval][out] */ BSTR *pConnectingText) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Connected( 
            /* [retval][out] */ short *pIsConnected) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_DesktopWidth( 
            /* [in] */ long pVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DesktopWidth( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_DesktopHeight( 
            /* [in] */ long pVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DesktopHeight( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_StartConnected( 
            /* [in] */ long pfStartConnected) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_StartConnected( 
            /* [retval][out] */ long *pfStartConnected) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_HorizontalScrollBarVisible( 
            /* [retval][out] */ long *pfHScrollVisible) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_VerticalScrollBarVisible( 
            /* [retval][out] */ long *pfVScrollVisible) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_FullScreenTitle( 
            /* [in] */ BSTR rhs) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_CipherStrength( 
            /* [retval][out] */ long *pCipherStrength) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVersion) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SecuredSettingsEnabled( 
            /* [retval][out] */ long *pSecuredSettingsEnabled) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SecuredSettings( 
            /* [retval][out] */ IMsTscSecuredSettings **ppSecuredSettings) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_AdvancedSettings( 
            /* [retval][out] */ IMsTscAdvancedSettings **ppAdvSettings) = 0;
        
        virtual /* [hidden][propget][id] */ HRESULT STDMETHODCALLTYPE get_Debugger( 
            /* [retval][out] */ IMsTscDebug **ppDebugger) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Connect( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Disconnect( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CreateVirtualChannels( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SendOnVirtualChannel( 
            /* [in] */ BSTR chanName,
            /* [in] */ BSTR ChanData) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMsTscAxVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsTscAx * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsTscAx * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsTscAx * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsTscAx * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsTscAx * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsTscAx * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsTscAx * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Server )( 
            IMsTscAx * This,
            /* [in] */ BSTR pServer);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Server )( 
            IMsTscAx * This,
            /* [retval][out] */ BSTR *pServer);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Domain )( 
            IMsTscAx * This,
            /* [in] */ BSTR pDomain);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Domain )( 
            IMsTscAx * This,
            /* [retval][out] */ BSTR *pDomain);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_UserName )( 
            IMsTscAx * This,
            /* [in] */ BSTR pUserName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UserName )( 
            IMsTscAx * This,
            /* [retval][out] */ BSTR *pUserName);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisconnectedText )( 
            IMsTscAx * This,
            /* [in] */ BSTR pDisconnectedText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisconnectedText )( 
            IMsTscAx * This,
            /* [retval][out] */ BSTR *pDisconnectedText);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectingText )( 
            IMsTscAx * This,
            /* [in] */ BSTR pConnectingText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectingText )( 
            IMsTscAx * This,
            /* [retval][out] */ BSTR *pConnectingText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Connected )( 
            IMsTscAx * This,
            /* [retval][out] */ short *pIsConnected);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DesktopWidth )( 
            IMsTscAx * This,
            /* [in] */ long pVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DesktopWidth )( 
            IMsTscAx * This,
            /* [retval][out] */ long *pVal);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DesktopHeight )( 
            IMsTscAx * This,
            /* [in] */ long pVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DesktopHeight )( 
            IMsTscAx * This,
            /* [retval][out] */ long *pVal);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_StartConnected )( 
            IMsTscAx * This,
            /* [in] */ long pfStartConnected);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_StartConnected )( 
            IMsTscAx * This,
            /* [retval][out] */ long *pfStartConnected);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HorizontalScrollBarVisible )( 
            IMsTscAx * This,
            /* [retval][out] */ long *pfHScrollVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VerticalScrollBarVisible )( 
            IMsTscAx * This,
            /* [retval][out] */ long *pfVScrollVisible);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreenTitle )( 
            IMsTscAx * This,
            /* [in] */ BSTR rhs);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CipherStrength )( 
            IMsTscAx * This,
            /* [retval][out] */ long *pCipherStrength);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IMsTscAx * This,
            /* [retval][out] */ BSTR *pVersion);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettingsEnabled )( 
            IMsTscAx * This,
            /* [retval][out] */ long *pSecuredSettingsEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettings )( 
            IMsTscAx * This,
            /* [retval][out] */ IMsTscSecuredSettings **ppSecuredSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings )( 
            IMsTscAx * This,
            /* [retval][out] */ IMsTscAdvancedSettings **ppAdvSettings);
        
        /* [hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Debugger )( 
            IMsTscAx * This,
            /* [retval][out] */ IMsTscDebug **ppDebugger);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
            IMsTscAx * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            IMsTscAx * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CreateVirtualChannels )( 
            IMsTscAx * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendOnVirtualChannel )( 
            IMsTscAx * This,
            /* [in] */ BSTR chanName,
            /* [in] */ BSTR ChanData);
        
        END_INTERFACE
    } IMsTscAxVtbl;

    interface IMsTscAx
    {
        CONST_VTBL struct IMsTscAxVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsTscAx_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsTscAx_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsTscAx_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsTscAx_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsTscAx_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsTscAx_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsTscAx_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 



#define IMsTscAx_put_Server(This,pServer)	\
    ( (This)->lpVtbl -> put_Server(This,pServer) ) 

#define IMsTscAx_get_Server(This,pServer)	\
    ( (This)->lpVtbl -> get_Server(This,pServer) ) 

#define IMsTscAx_put_Domain(This,pDomain)	\
    ( (This)->lpVtbl -> put_Domain(This,pDomain) ) 

#define IMsTscAx_get_Domain(This,pDomain)	\
    ( (This)->lpVtbl -> get_Domain(This,pDomain) ) 

#define IMsTscAx_put_UserName(This,pUserName)	\
    ( (This)->lpVtbl -> put_UserName(This,pUserName) ) 

#define IMsTscAx_get_UserName(This,pUserName)	\
    ( (This)->lpVtbl -> get_UserName(This,pUserName) ) 

#define IMsTscAx_put_DisconnectedText(This,pDisconnectedText)	\
    ( (This)->lpVtbl -> put_DisconnectedText(This,pDisconnectedText) ) 

#define IMsTscAx_get_DisconnectedText(This,pDisconnectedText)	\
    ( (This)->lpVtbl -> get_DisconnectedText(This,pDisconnectedText) ) 

#define IMsTscAx_put_ConnectingText(This,pConnectingText)	\
    ( (This)->lpVtbl -> put_ConnectingText(This,pConnectingText) ) 

#define IMsTscAx_get_ConnectingText(This,pConnectingText)	\
    ( (This)->lpVtbl -> get_ConnectingText(This,pConnectingText) ) 

#define IMsTscAx_get_Connected(This,pIsConnected)	\
    ( (This)->lpVtbl -> get_Connected(This,pIsConnected) ) 

#define IMsTscAx_put_DesktopWidth(This,pVal)	\
    ( (This)->lpVtbl -> put_DesktopWidth(This,pVal) ) 

#define IMsTscAx_get_DesktopWidth(This,pVal)	\
    ( (This)->lpVtbl -> get_DesktopWidth(This,pVal) ) 

#define IMsTscAx_put_DesktopHeight(This,pVal)	\
    ( (This)->lpVtbl -> put_DesktopHeight(This,pVal) ) 

#define IMsTscAx_get_DesktopHeight(This,pVal)	\
    ( (This)->lpVtbl -> get_DesktopHeight(This,pVal) ) 

#define IMsTscAx_put_StartConnected(This,pfStartConnected)	\
    ( (This)->lpVtbl -> put_StartConnected(This,pfStartConnected) ) 

#define IMsTscAx_get_StartConnected(This,pfStartConnected)	\
    ( (This)->lpVtbl -> get_StartConnected(This,pfStartConnected) ) 

#define IMsTscAx_get_HorizontalScrollBarVisible(This,pfHScrollVisible)	\
    ( (This)->lpVtbl -> get_HorizontalScrollBarVisible(This,pfHScrollVisible) ) 

#define IMsTscAx_get_VerticalScrollBarVisible(This,pfVScrollVisible)	\
    ( (This)->lpVtbl -> get_VerticalScrollBarVisible(This,pfVScrollVisible) ) 

#define IMsTscAx_put_FullScreenTitle(This,rhs)	\
    ( (This)->lpVtbl -> put_FullScreenTitle(This,rhs) ) 

#define IMsTscAx_get_CipherStrength(This,pCipherStrength)	\
    ( (This)->lpVtbl -> get_CipherStrength(This,pCipherStrength) ) 

#define IMsTscAx_get_Version(This,pVersion)	\
    ( (This)->lpVtbl -> get_Version(This,pVersion) ) 

#define IMsTscAx_get_SecuredSettingsEnabled(This,pSecuredSettingsEnabled)	\
    ( (This)->lpVtbl -> get_SecuredSettingsEnabled(This,pSecuredSettingsEnabled) ) 

#define IMsTscAx_get_SecuredSettings(This,ppSecuredSettings)	\
    ( (This)->lpVtbl -> get_SecuredSettings(This,ppSecuredSettings) ) 

#define IMsTscAx_get_AdvancedSettings(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings(This,ppAdvSettings) ) 

#define IMsTscAx_get_Debugger(This,ppDebugger)	\
    ( (This)->lpVtbl -> get_Debugger(This,ppDebugger) ) 

#define IMsTscAx_Connect(This)	\
    ( (This)->lpVtbl -> Connect(This) ) 

#define IMsTscAx_Disconnect(This)	\
    ( (This)->lpVtbl -> Disconnect(This) ) 

#define IMsTscAx_CreateVirtualChannels(This,newVal)	\
    ( (This)->lpVtbl -> CreateVirtualChannels(This,newVal) ) 

#define IMsTscAx_SendOnVirtualChannel(This,chanName,ChanData)	\
    ( (This)->lpVtbl -> SendOnVirtualChannel(This,chanName,ChanData) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMsTscAx_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClient_INTERFACE_DEFINED__
#define __IMsRdpClient_INTERFACE_DEFINED__

/* interface IMsRdpClient */
/* [oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClient;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("92B4A539-7115-4B7C-A5A9-E5D9EFC2780A")
    IMsRdpClient : public IMsTscAx
    {
    public:
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_ColorDepth( 
            /* [in] */ long pcolorDepth) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ColorDepth( 
            /* [retval][out] */ long *pcolorDepth) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_AdvancedSettings2( 
            /* [retval][out] */ IMsRdpClientAdvancedSettings **ppAdvSettings) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SecuredSettings2( 
            /* [retval][out] */ IMsRdpClientSecuredSettings **ppSecuredSettings) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ExtendedDisconnectReason( 
            /* [retval][out] */ ExtendedDisconnectReasonCode *pExtendedDisconnectReason) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_FullScreen( 
            /* [in] */ VARIANT_BOOL pfFullScreen) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FullScreen( 
            /* [retval][out] */ VARIANT_BOOL *pfFullScreen) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetVirtualChannelOptions( 
            /* [in] */ BSTR chanName,
            /* [in] */ long chanOptions) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetVirtualChannelOptions( 
            /* [in] */ BSTR chanName,
            /* [retval][out] */ long *pChanOptions) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RequestClose( 
            /* [retval][out] */ ControlCloseStatus *pCloseStatus) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMsRdpClientVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClient * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClient * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClient * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClient * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClient * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClient * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClient * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Server )( 
            IMsRdpClient * This,
            /* [in] */ BSTR pServer);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Server )( 
            IMsRdpClient * This,
            /* [retval][out] */ BSTR *pServer);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Domain )( 
            IMsRdpClient * This,
            /* [in] */ BSTR pDomain);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Domain )( 
            IMsRdpClient * This,
            /* [retval][out] */ BSTR *pDomain);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_UserName )( 
            IMsRdpClient * This,
            /* [in] */ BSTR pUserName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UserName )( 
            IMsRdpClient * This,
            /* [retval][out] */ BSTR *pUserName);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisconnectedText )( 
            IMsRdpClient * This,
            /* [in] */ BSTR pDisconnectedText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisconnectedText )( 
            IMsRdpClient * This,
            /* [retval][out] */ BSTR *pDisconnectedText);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectingText )( 
            IMsRdpClient * This,
            /* [in] */ BSTR pConnectingText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectingText )( 
            IMsRdpClient * This,
            /* [retval][out] */ BSTR *pConnectingText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Connected )( 
            IMsRdpClient * This,
            /* [retval][out] */ short *pIsConnected);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DesktopWidth )( 
            IMsRdpClient * This,
            /* [in] */ long pVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DesktopWidth )( 
            IMsRdpClient * This,
            /* [retval][out] */ long *pVal);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DesktopHeight )( 
            IMsRdpClient * This,
            /* [in] */ long pVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DesktopHeight )( 
            IMsRdpClient * This,
            /* [retval][out] */ long *pVal);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_StartConnected )( 
            IMsRdpClient * This,
            /* [in] */ long pfStartConnected);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_StartConnected )( 
            IMsRdpClient * This,
            /* [retval][out] */ long *pfStartConnected);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HorizontalScrollBarVisible )( 
            IMsRdpClient * This,
            /* [retval][out] */ long *pfHScrollVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VerticalScrollBarVisible )( 
            IMsRdpClient * This,
            /* [retval][out] */ long *pfVScrollVisible);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreenTitle )( 
            IMsRdpClient * This,
            /* [in] */ BSTR rhs);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CipherStrength )( 
            IMsRdpClient * This,
            /* [retval][out] */ long *pCipherStrength);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IMsRdpClient * This,
            /* [retval][out] */ BSTR *pVersion);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettingsEnabled )( 
            IMsRdpClient * This,
            /* [retval][out] */ long *pSecuredSettingsEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettings )( 
            IMsRdpClient * This,
            /* [retval][out] */ IMsTscSecuredSettings **ppSecuredSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings )( 
            IMsRdpClient * This,
            /* [retval][out] */ IMsTscAdvancedSettings **ppAdvSettings);
        
        /* [hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Debugger )( 
            IMsRdpClient * This,
            /* [retval][out] */ IMsTscDebug **ppDebugger);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
            IMsRdpClient * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            IMsRdpClient * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CreateVirtualChannels )( 
            IMsRdpClient * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendOnVirtualChannel )( 
            IMsRdpClient * This,
            /* [in] */ BSTR chanName,
            /* [in] */ BSTR ChanData);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ColorDepth )( 
            IMsRdpClient * This,
            /* [in] */ long pcolorDepth);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ColorDepth )( 
            IMsRdpClient * This,
            /* [retval][out] */ long *pcolorDepth);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings2 )( 
            IMsRdpClient * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings **ppAdvSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettings2 )( 
            IMsRdpClient * This,
            /* [retval][out] */ IMsRdpClientSecuredSettings **ppSecuredSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ExtendedDisconnectReason )( 
            IMsRdpClient * This,
            /* [retval][out] */ ExtendedDisconnectReasonCode *pExtendedDisconnectReason);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreen )( 
            IMsRdpClient * This,
            /* [in] */ VARIANT_BOOL pfFullScreen);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FullScreen )( 
            IMsRdpClient * This,
            /* [retval][out] */ VARIANT_BOOL *pfFullScreen);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetVirtualChannelOptions )( 
            IMsRdpClient * This,
            /* [in] */ BSTR chanName,
            /* [in] */ long chanOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetVirtualChannelOptions )( 
            IMsRdpClient * This,
            /* [in] */ BSTR chanName,
            /* [retval][out] */ long *pChanOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RequestClose )( 
            IMsRdpClient * This,
            /* [retval][out] */ ControlCloseStatus *pCloseStatus);
        
        END_INTERFACE
    } IMsRdpClientVtbl;

    interface IMsRdpClient
    {
        CONST_VTBL struct IMsRdpClientVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClient_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClient_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClient_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClient_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClient_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClient_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClient_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 



#define IMsRdpClient_put_Server(This,pServer)	\
    ( (This)->lpVtbl -> put_Server(This,pServer) ) 

#define IMsRdpClient_get_Server(This,pServer)	\
    ( (This)->lpVtbl -> get_Server(This,pServer) ) 

#define IMsRdpClient_put_Domain(This,pDomain)	\
    ( (This)->lpVtbl -> put_Domain(This,pDomain) ) 

#define IMsRdpClient_get_Domain(This,pDomain)	\
    ( (This)->lpVtbl -> get_Domain(This,pDomain) ) 

#define IMsRdpClient_put_UserName(This,pUserName)	\
    ( (This)->lpVtbl -> put_UserName(This,pUserName) ) 

#define IMsRdpClient_get_UserName(This,pUserName)	\
    ( (This)->lpVtbl -> get_UserName(This,pUserName) ) 

#define IMsRdpClient_put_DisconnectedText(This,pDisconnectedText)	\
    ( (This)->lpVtbl -> put_DisconnectedText(This,pDisconnectedText) ) 

#define IMsRdpClient_get_DisconnectedText(This,pDisconnectedText)	\
    ( (This)->lpVtbl -> get_DisconnectedText(This,pDisconnectedText) ) 

#define IMsRdpClient_put_ConnectingText(This,pConnectingText)	\
    ( (This)->lpVtbl -> put_ConnectingText(This,pConnectingText) ) 

#define IMsRdpClient_get_ConnectingText(This,pConnectingText)	\
    ( (This)->lpVtbl -> get_ConnectingText(This,pConnectingText) ) 

#define IMsRdpClient_get_Connected(This,pIsConnected)	\
    ( (This)->lpVtbl -> get_Connected(This,pIsConnected) ) 

#define IMsRdpClient_put_DesktopWidth(This,pVal)	\
    ( (This)->lpVtbl -> put_DesktopWidth(This,pVal) ) 

#define IMsRdpClient_get_DesktopWidth(This,pVal)	\
    ( (This)->lpVtbl -> get_DesktopWidth(This,pVal) ) 

#define IMsRdpClient_put_DesktopHeight(This,pVal)	\
    ( (This)->lpVtbl -> put_DesktopHeight(This,pVal) ) 

#define IMsRdpClient_get_DesktopHeight(This,pVal)	\
    ( (This)->lpVtbl -> get_DesktopHeight(This,pVal) ) 

#define IMsRdpClient_put_StartConnected(This,pfStartConnected)	\
    ( (This)->lpVtbl -> put_StartConnected(This,pfStartConnected) ) 

#define IMsRdpClient_get_StartConnected(This,pfStartConnected)	\
    ( (This)->lpVtbl -> get_StartConnected(This,pfStartConnected) ) 

#define IMsRdpClient_get_HorizontalScrollBarVisible(This,pfHScrollVisible)	\
    ( (This)->lpVtbl -> get_HorizontalScrollBarVisible(This,pfHScrollVisible) ) 

#define IMsRdpClient_get_VerticalScrollBarVisible(This,pfVScrollVisible)	\
    ( (This)->lpVtbl -> get_VerticalScrollBarVisible(This,pfVScrollVisible) ) 

#define IMsRdpClient_put_FullScreenTitle(This,rhs)	\
    ( (This)->lpVtbl -> put_FullScreenTitle(This,rhs) ) 

#define IMsRdpClient_get_CipherStrength(This,pCipherStrength)	\
    ( (This)->lpVtbl -> get_CipherStrength(This,pCipherStrength) ) 

#define IMsRdpClient_get_Version(This,pVersion)	\
    ( (This)->lpVtbl -> get_Version(This,pVersion) ) 

#define IMsRdpClient_get_SecuredSettingsEnabled(This,pSecuredSettingsEnabled)	\
    ( (This)->lpVtbl -> get_SecuredSettingsEnabled(This,pSecuredSettingsEnabled) ) 

#define IMsRdpClient_get_SecuredSettings(This,ppSecuredSettings)	\
    ( (This)->lpVtbl -> get_SecuredSettings(This,ppSecuredSettings) ) 

#define IMsRdpClient_get_AdvancedSettings(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings(This,ppAdvSettings) ) 

#define IMsRdpClient_get_Debugger(This,ppDebugger)	\
    ( (This)->lpVtbl -> get_Debugger(This,ppDebugger) ) 

#define IMsRdpClient_Connect(This)	\
    ( (This)->lpVtbl -> Connect(This) ) 

#define IMsRdpClient_Disconnect(This)	\
    ( (This)->lpVtbl -> Disconnect(This) ) 

#define IMsRdpClient_CreateVirtualChannels(This,newVal)	\
    ( (This)->lpVtbl -> CreateVirtualChannels(This,newVal) ) 

#define IMsRdpClient_SendOnVirtualChannel(This,chanName,ChanData)	\
    ( (This)->lpVtbl -> SendOnVirtualChannel(This,chanName,ChanData) ) 


#define IMsRdpClient_put_ColorDepth(This,pcolorDepth)	\
    ( (This)->lpVtbl -> put_ColorDepth(This,pcolorDepth) ) 

#define IMsRdpClient_get_ColorDepth(This,pcolorDepth)	\
    ( (This)->lpVtbl -> get_ColorDepth(This,pcolorDepth) ) 

#define IMsRdpClient_get_AdvancedSettings2(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings2(This,ppAdvSettings) ) 

#define IMsRdpClient_get_SecuredSettings2(This,ppSecuredSettings)	\
    ( (This)->lpVtbl -> get_SecuredSettings2(This,ppSecuredSettings) ) 

#define IMsRdpClient_get_ExtendedDisconnectReason(This,pExtendedDisconnectReason)	\
    ( (This)->lpVtbl -> get_ExtendedDisconnectReason(This,pExtendedDisconnectReason) ) 

#define IMsRdpClient_put_FullScreen(This,pfFullScreen)	\
    ( (This)->lpVtbl -> put_FullScreen(This,pfFullScreen) ) 

#define IMsRdpClient_get_FullScreen(This,pfFullScreen)	\
    ( (This)->lpVtbl -> get_FullScreen(This,pfFullScreen) ) 

#define IMsRdpClient_SetVirtualChannelOptions(This,chanName,chanOptions)	\
    ( (This)->lpVtbl -> SetVirtualChannelOptions(This,chanName,chanOptions) ) 

#define IMsRdpClient_GetVirtualChannelOptions(This,chanName,pChanOptions)	\
    ( (This)->lpVtbl -> GetVirtualChannelOptions(This,chanName,pChanOptions) ) 

#define IMsRdpClient_RequestClose(This,pCloseStatus)	\
    ( (This)->lpVtbl -> RequestClose(This,pCloseStatus) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMsRdpClient_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClient2_INTERFACE_DEFINED__
#define __IMsRdpClient2_INTERFACE_DEFINED__

/* interface IMsRdpClient2 */
/* [oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClient2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E7E17DC4-3B71-4BA7-A8E6-281FFADCA28F")
    IMsRdpClient2 : public IMsRdpClient
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_AdvancedSettings3( 
            /* [retval][out] */ IMsRdpClientAdvancedSettings2 **ppAdvSettings) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_ConnectedStatusText( 
            /* [in] */ BSTR pConnectedStatusText) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ConnectedStatusText( 
            /* [retval][out] */ BSTR *pConnectedStatusText) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMsRdpClient2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClient2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClient2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClient2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClient2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClient2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClient2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClient2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Server )( 
            IMsRdpClient2 * This,
            /* [in] */ BSTR pServer);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Server )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ BSTR *pServer);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Domain )( 
            IMsRdpClient2 * This,
            /* [in] */ BSTR pDomain);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Domain )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ BSTR *pDomain);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_UserName )( 
            IMsRdpClient2 * This,
            /* [in] */ BSTR pUserName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UserName )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ BSTR *pUserName);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisconnectedText )( 
            IMsRdpClient2 * This,
            /* [in] */ BSTR pDisconnectedText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisconnectedText )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ BSTR *pDisconnectedText);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectingText )( 
            IMsRdpClient2 * This,
            /* [in] */ BSTR pConnectingText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectingText )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ BSTR *pConnectingText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Connected )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ short *pIsConnected);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DesktopWidth )( 
            IMsRdpClient2 * This,
            /* [in] */ long pVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DesktopWidth )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ long *pVal);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DesktopHeight )( 
            IMsRdpClient2 * This,
            /* [in] */ long pVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DesktopHeight )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ long *pVal);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_StartConnected )( 
            IMsRdpClient2 * This,
            /* [in] */ long pfStartConnected);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_StartConnected )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ long *pfStartConnected);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HorizontalScrollBarVisible )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ long *pfHScrollVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VerticalScrollBarVisible )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ long *pfVScrollVisible);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreenTitle )( 
            IMsRdpClient2 * This,
            /* [in] */ BSTR rhs);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CipherStrength )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ long *pCipherStrength);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ BSTR *pVersion);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettingsEnabled )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ long *pSecuredSettingsEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettings )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ IMsTscSecuredSettings **ppSecuredSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ IMsTscAdvancedSettings **ppAdvSettings);
        
        /* [hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Debugger )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ IMsTscDebug **ppDebugger);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
            IMsRdpClient2 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            IMsRdpClient2 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CreateVirtualChannels )( 
            IMsRdpClient2 * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendOnVirtualChannel )( 
            IMsRdpClient2 * This,
            /* [in] */ BSTR chanName,
            /* [in] */ BSTR ChanData);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ColorDepth )( 
            IMsRdpClient2 * This,
            /* [in] */ long pcolorDepth);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ColorDepth )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ long *pcolorDepth);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings2 )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings **ppAdvSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettings2 )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ IMsRdpClientSecuredSettings **ppSecuredSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ExtendedDisconnectReason )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ ExtendedDisconnectReasonCode *pExtendedDisconnectReason);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreen )( 
            IMsRdpClient2 * This,
            /* [in] */ VARIANT_BOOL pfFullScreen);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FullScreen )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ VARIANT_BOOL *pfFullScreen);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetVirtualChannelOptions )( 
            IMsRdpClient2 * This,
            /* [in] */ BSTR chanName,
            /* [in] */ long chanOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetVirtualChannelOptions )( 
            IMsRdpClient2 * This,
            /* [in] */ BSTR chanName,
            /* [retval][out] */ long *pChanOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RequestClose )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ ControlCloseStatus *pCloseStatus);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings3 )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings2 **ppAdvSettings);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectedStatusText )( 
            IMsRdpClient2 * This,
            /* [in] */ BSTR pConnectedStatusText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectedStatusText )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ BSTR *pConnectedStatusText);
        
        END_INTERFACE
    } IMsRdpClient2Vtbl;

    interface IMsRdpClient2
    {
        CONST_VTBL struct IMsRdpClient2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClient2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClient2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClient2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClient2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClient2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClient2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClient2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 



#define IMsRdpClient2_put_Server(This,pServer)	\
    ( (This)->lpVtbl -> put_Server(This,pServer) ) 

#define IMsRdpClient2_get_Server(This,pServer)	\
    ( (This)->lpVtbl -> get_Server(This,pServer) ) 

#define IMsRdpClient2_put_Domain(This,pDomain)	\
    ( (This)->lpVtbl -> put_Domain(This,pDomain) ) 

#define IMsRdpClient2_get_Domain(This,pDomain)	\
    ( (This)->lpVtbl -> get_Domain(This,pDomain) ) 

#define IMsRdpClient2_put_UserName(This,pUserName)	\
    ( (This)->lpVtbl -> put_UserName(This,pUserName) ) 

#define IMsRdpClient2_get_UserName(This,pUserName)	\
    ( (This)->lpVtbl -> get_UserName(This,pUserName) ) 

#define IMsRdpClient2_put_DisconnectedText(This,pDisconnectedText)	\
    ( (This)->lpVtbl -> put_DisconnectedText(This,pDisconnectedText) ) 

#define IMsRdpClient2_get_DisconnectedText(This,pDisconnectedText)	\
    ( (This)->lpVtbl -> get_DisconnectedText(This,pDisconnectedText) ) 

#define IMsRdpClient2_put_ConnectingText(This,pConnectingText)	\
    ( (This)->lpVtbl -> put_ConnectingText(This,pConnectingText) ) 

#define IMsRdpClient2_get_ConnectingText(This,pConnectingText)	\
    ( (This)->lpVtbl -> get_ConnectingText(This,pConnectingText) ) 

#define IMsRdpClient2_get_Connected(This,pIsConnected)	\
    ( (This)->lpVtbl -> get_Connected(This,pIsConnected) ) 

#define IMsRdpClient2_put_DesktopWidth(This,pVal)	\
    ( (This)->lpVtbl -> put_DesktopWidth(This,pVal) ) 

#define IMsRdpClient2_get_DesktopWidth(This,pVal)	\
    ( (This)->lpVtbl -> get_DesktopWidth(This,pVal) ) 

#define IMsRdpClient2_put_DesktopHeight(This,pVal)	\
    ( (This)->lpVtbl -> put_DesktopHeight(This,pVal) ) 

#define IMsRdpClient2_get_DesktopHeight(This,pVal)	\
    ( (This)->lpVtbl -> get_DesktopHeight(This,pVal) ) 

#define IMsRdpClient2_put_StartConnected(This,pfStartConnected)	\
    ( (This)->lpVtbl -> put_StartConnected(This,pfStartConnected) ) 

#define IMsRdpClient2_get_StartConnected(This,pfStartConnected)	\
    ( (This)->lpVtbl -> get_StartConnected(This,pfStartConnected) ) 

#define IMsRdpClient2_get_HorizontalScrollBarVisible(This,pfHScrollVisible)	\
    ( (This)->lpVtbl -> get_HorizontalScrollBarVisible(This,pfHScrollVisible) ) 

#define IMsRdpClient2_get_VerticalScrollBarVisible(This,pfVScrollVisible)	\
    ( (This)->lpVtbl -> get_VerticalScrollBarVisible(This,pfVScrollVisible) ) 

#define IMsRdpClient2_put_FullScreenTitle(This,rhs)	\
    ( (This)->lpVtbl -> put_FullScreenTitle(This,rhs) ) 

#define IMsRdpClient2_get_CipherStrength(This,pCipherStrength)	\
    ( (This)->lpVtbl -> get_CipherStrength(This,pCipherStrength) ) 

#define IMsRdpClient2_get_Version(This,pVersion)	\
    ( (This)->lpVtbl -> get_Version(This,pVersion) ) 

#define IMsRdpClient2_get_SecuredSettingsEnabled(This,pSecuredSettingsEnabled)	\
    ( (This)->lpVtbl -> get_SecuredSettingsEnabled(This,pSecuredSettingsEnabled) ) 

#define IMsRdpClient2_get_SecuredSettings(This,ppSecuredSettings)	\
    ( (This)->lpVtbl -> get_SecuredSettings(This,ppSecuredSettings) ) 

#define IMsRdpClient2_get_AdvancedSettings(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings(This,ppAdvSettings) ) 

#define IMsRdpClient2_get_Debugger(This,ppDebugger)	\
    ( (This)->lpVtbl -> get_Debugger(This,ppDebugger) ) 

#define IMsRdpClient2_Connect(This)	\
    ( (This)->lpVtbl -> Connect(This) ) 

#define IMsRdpClient2_Disconnect(This)	\
    ( (This)->lpVtbl -> Disconnect(This) ) 

#define IMsRdpClient2_CreateVirtualChannels(This,newVal)	\
    ( (This)->lpVtbl -> CreateVirtualChannels(This,newVal) ) 

#define IMsRdpClient2_SendOnVirtualChannel(This,chanName,ChanData)	\
    ( (This)->lpVtbl -> SendOnVirtualChannel(This,chanName,ChanData) ) 


#define IMsRdpClient2_put_ColorDepth(This,pcolorDepth)	\
    ( (This)->lpVtbl -> put_ColorDepth(This,pcolorDepth) ) 

#define IMsRdpClient2_get_ColorDepth(This,pcolorDepth)	\
    ( (This)->lpVtbl -> get_ColorDepth(This,pcolorDepth) ) 

#define IMsRdpClient2_get_AdvancedSettings2(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings2(This,ppAdvSettings) ) 

#define IMsRdpClient2_get_SecuredSettings2(This,ppSecuredSettings)	\
    ( (This)->lpVtbl -> get_SecuredSettings2(This,ppSecuredSettings) ) 

#define IMsRdpClient2_get_ExtendedDisconnectReason(This,pExtendedDisconnectReason)	\
    ( (This)->lpVtbl -> get_ExtendedDisconnectReason(This,pExtendedDisconnectReason) ) 

#define IMsRdpClient2_put_FullScreen(This,pfFullScreen)	\
    ( (This)->lpVtbl -> put_FullScreen(This,pfFullScreen) ) 

#define IMsRdpClient2_get_FullScreen(This,pfFullScreen)	\
    ( (This)->lpVtbl -> get_FullScreen(This,pfFullScreen) ) 

#define IMsRdpClient2_SetVirtualChannelOptions(This,chanName,chanOptions)	\
    ( (This)->lpVtbl -> SetVirtualChannelOptions(This,chanName,chanOptions) ) 

#define IMsRdpClient2_GetVirtualChannelOptions(This,chanName,pChanOptions)	\
    ( (This)->lpVtbl -> GetVirtualChannelOptions(This,chanName,pChanOptions) ) 

#define IMsRdpClient2_RequestClose(This,pCloseStatus)	\
    ( (This)->lpVtbl -> RequestClose(This,pCloseStatus) ) 


#define IMsRdpClient2_get_AdvancedSettings3(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings3(This,ppAdvSettings) ) 

#define IMsRdpClient2_put_ConnectedStatusText(This,pConnectedStatusText)	\
    ( (This)->lpVtbl -> put_ConnectedStatusText(This,pConnectedStatusText) ) 

#define IMsRdpClient2_get_ConnectedStatusText(This,pConnectedStatusText)	\
    ( (This)->lpVtbl -> get_ConnectedStatusText(This,pConnectedStatusText) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMsRdpClient2_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClient3_INTERFACE_DEFINED__
#define __IMsRdpClient3_INTERFACE_DEFINED__

/* interface IMsRdpClient3 */
/* [oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClient3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("91B7CBC5-A72E-4FA0-9300-D647D7E897FF")
    IMsRdpClient3 : public IMsRdpClient2
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_AdvancedSettings4( 
            /* [retval][out] */ IMsRdpClientAdvancedSettings3 **ppAdvSettings) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMsRdpClient3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClient3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClient3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClient3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClient3 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClient3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClient3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClient3 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Server )( 
            IMsRdpClient3 * This,
            /* [in] */ BSTR pServer);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Server )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ BSTR *pServer);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Domain )( 
            IMsRdpClient3 * This,
            /* [in] */ BSTR pDomain);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Domain )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ BSTR *pDomain);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_UserName )( 
            IMsRdpClient3 * This,
            /* [in] */ BSTR pUserName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UserName )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ BSTR *pUserName);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisconnectedText )( 
            IMsRdpClient3 * This,
            /* [in] */ BSTR pDisconnectedText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisconnectedText )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ BSTR *pDisconnectedText);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectingText )( 
            IMsRdpClient3 * This,
            /* [in] */ BSTR pConnectingText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectingText )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ BSTR *pConnectingText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Connected )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ short *pIsConnected);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DesktopWidth )( 
            IMsRdpClient3 * This,
            /* [in] */ long pVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DesktopWidth )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ long *pVal);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DesktopHeight )( 
            IMsRdpClient3 * This,
            /* [in] */ long pVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DesktopHeight )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ long *pVal);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_StartConnected )( 
            IMsRdpClient3 * This,
            /* [in] */ long pfStartConnected);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_StartConnected )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ long *pfStartConnected);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HorizontalScrollBarVisible )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ long *pfHScrollVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VerticalScrollBarVisible )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ long *pfVScrollVisible);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreenTitle )( 
            IMsRdpClient3 * This,
            /* [in] */ BSTR rhs);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CipherStrength )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ long *pCipherStrength);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ BSTR *pVersion);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettingsEnabled )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ long *pSecuredSettingsEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettings )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ IMsTscSecuredSettings **ppSecuredSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ IMsTscAdvancedSettings **ppAdvSettings);
        
        /* [hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Debugger )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ IMsTscDebug **ppDebugger);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
            IMsRdpClient3 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            IMsRdpClient3 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CreateVirtualChannels )( 
            IMsRdpClient3 * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendOnVirtualChannel )( 
            IMsRdpClient3 * This,
            /* [in] */ BSTR chanName,
            /* [in] */ BSTR ChanData);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ColorDepth )( 
            IMsRdpClient3 * This,
            /* [in] */ long pcolorDepth);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ColorDepth )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ long *pcolorDepth);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings2 )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings **ppAdvSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettings2 )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ IMsRdpClientSecuredSettings **ppSecuredSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ExtendedDisconnectReason )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ ExtendedDisconnectReasonCode *pExtendedDisconnectReason);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreen )( 
            IMsRdpClient3 * This,
            /* [in] */ VARIANT_BOOL pfFullScreen);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FullScreen )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ VARIANT_BOOL *pfFullScreen);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetVirtualChannelOptions )( 
            IMsRdpClient3 * This,
            /* [in] */ BSTR chanName,
            /* [in] */ long chanOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetVirtualChannelOptions )( 
            IMsRdpClient3 * This,
            /* [in] */ BSTR chanName,
            /* [retval][out] */ long *pChanOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RequestClose )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ ControlCloseStatus *pCloseStatus);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings3 )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings2 **ppAdvSettings);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectedStatusText )( 
            IMsRdpClient3 * This,
            /* [in] */ BSTR pConnectedStatusText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectedStatusText )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ BSTR *pConnectedStatusText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings4 )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings3 **ppAdvSettings);
        
        END_INTERFACE
    } IMsRdpClient3Vtbl;

    interface IMsRdpClient3
    {
        CONST_VTBL struct IMsRdpClient3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClient3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClient3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClient3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClient3_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClient3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClient3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClient3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 



#define IMsRdpClient3_put_Server(This,pServer)	\
    ( (This)->lpVtbl -> put_Server(This,pServer) ) 

#define IMsRdpClient3_get_Server(This,pServer)	\
    ( (This)->lpVtbl -> get_Server(This,pServer) ) 

#define IMsRdpClient3_put_Domain(This,pDomain)	\
    ( (This)->lpVtbl -> put_Domain(This,pDomain) ) 

#define IMsRdpClient3_get_Domain(This,pDomain)	\
    ( (This)->lpVtbl -> get_Domain(This,pDomain) ) 

#define IMsRdpClient3_put_UserName(This,pUserName)	\
    ( (This)->lpVtbl -> put_UserName(This,pUserName) ) 

#define IMsRdpClient3_get_UserName(This,pUserName)	\
    ( (This)->lpVtbl -> get_UserName(This,pUserName) ) 

#define IMsRdpClient3_put_DisconnectedText(This,pDisconnectedText)	\
    ( (This)->lpVtbl -> put_DisconnectedText(This,pDisconnectedText) ) 

#define IMsRdpClient3_get_DisconnectedText(This,pDisconnectedText)	\
    ( (This)->lpVtbl -> get_DisconnectedText(This,pDisconnectedText) ) 

#define IMsRdpClient3_put_ConnectingText(This,pConnectingText)	\
    ( (This)->lpVtbl -> put_ConnectingText(This,pConnectingText) ) 

#define IMsRdpClient3_get_ConnectingText(This,pConnectingText)	\
    ( (This)->lpVtbl -> get_ConnectingText(This,pConnectingText) ) 

#define IMsRdpClient3_get_Connected(This,pIsConnected)	\
    ( (This)->lpVtbl -> get_Connected(This,pIsConnected) ) 

#define IMsRdpClient3_put_DesktopWidth(This,pVal)	\
    ( (This)->lpVtbl -> put_DesktopWidth(This,pVal) ) 

#define IMsRdpClient3_get_DesktopWidth(This,pVal)	\
    ( (This)->lpVtbl -> get_DesktopWidth(This,pVal) ) 

#define IMsRdpClient3_put_DesktopHeight(This,pVal)	\
    ( (This)->lpVtbl -> put_DesktopHeight(This,pVal) ) 

#define IMsRdpClient3_get_DesktopHeight(This,pVal)	\
    ( (This)->lpVtbl -> get_DesktopHeight(This,pVal) ) 

#define IMsRdpClient3_put_StartConnected(This,pfStartConnected)	\
    ( (This)->lpVtbl -> put_StartConnected(This,pfStartConnected) ) 

#define IMsRdpClient3_get_StartConnected(This,pfStartConnected)	\
    ( (This)->lpVtbl -> get_StartConnected(This,pfStartConnected) ) 

#define IMsRdpClient3_get_HorizontalScrollBarVisible(This,pfHScrollVisible)	\
    ( (This)->lpVtbl -> get_HorizontalScrollBarVisible(This,pfHScrollVisible) ) 

#define IMsRdpClient3_get_VerticalScrollBarVisible(This,pfVScrollVisible)	\
    ( (This)->lpVtbl -> get_VerticalScrollBarVisible(This,pfVScrollVisible) ) 

#define IMsRdpClient3_put_FullScreenTitle(This,rhs)	\
    ( (This)->lpVtbl -> put_FullScreenTitle(This,rhs) ) 

#define IMsRdpClient3_get_CipherStrength(This,pCipherStrength)	\
    ( (This)->lpVtbl -> get_CipherStrength(This,pCipherStrength) ) 

#define IMsRdpClient3_get_Version(This,pVersion)	\
    ( (This)->lpVtbl -> get_Version(This,pVersion) ) 

#define IMsRdpClient3_get_SecuredSettingsEnabled(This,pSecuredSettingsEnabled)	\
    ( (This)->lpVtbl -> get_SecuredSettingsEnabled(This,pSecuredSettingsEnabled) ) 

#define IMsRdpClient3_get_SecuredSettings(This,ppSecuredSettings)	\
    ( (This)->lpVtbl -> get_SecuredSettings(This,ppSecuredSettings) ) 

#define IMsRdpClient3_get_AdvancedSettings(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings(This,ppAdvSettings) ) 

#define IMsRdpClient3_get_Debugger(This,ppDebugger)	\
    ( (This)->lpVtbl -> get_Debugger(This,ppDebugger) ) 

#define IMsRdpClient3_Connect(This)	\
    ( (This)->lpVtbl -> Connect(This) ) 

#define IMsRdpClient3_Disconnect(This)	\
    ( (This)->lpVtbl -> Disconnect(This) ) 

#define IMsRdpClient3_CreateVirtualChannels(This,newVal)	\
    ( (This)->lpVtbl -> CreateVirtualChannels(This,newVal) ) 

#define IMsRdpClient3_SendOnVirtualChannel(This,chanName,ChanData)	\
    ( (This)->lpVtbl -> SendOnVirtualChannel(This,chanName,ChanData) ) 


#define IMsRdpClient3_put_ColorDepth(This,pcolorDepth)	\
    ( (This)->lpVtbl -> put_ColorDepth(This,pcolorDepth) ) 

#define IMsRdpClient3_get_ColorDepth(This,pcolorDepth)	\
    ( (This)->lpVtbl -> get_ColorDepth(This,pcolorDepth) ) 

#define IMsRdpClient3_get_AdvancedSettings2(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings2(This,ppAdvSettings) ) 

#define IMsRdpClient3_get_SecuredSettings2(This,ppSecuredSettings)	\
    ( (This)->lpVtbl -> get_SecuredSettings2(This,ppSecuredSettings) ) 

#define IMsRdpClient3_get_ExtendedDisconnectReason(This,pExtendedDisconnectReason)	\
    ( (This)->lpVtbl -> get_ExtendedDisconnectReason(This,pExtendedDisconnectReason) ) 

#define IMsRdpClient3_put_FullScreen(This,pfFullScreen)	\
    ( (This)->lpVtbl -> put_FullScreen(This,pfFullScreen) ) 

#define IMsRdpClient3_get_FullScreen(This,pfFullScreen)	\
    ( (This)->lpVtbl -> get_FullScreen(This,pfFullScreen) ) 

#define IMsRdpClient3_SetVirtualChannelOptions(This,chanName,chanOptions)	\
    ( (This)->lpVtbl -> SetVirtualChannelOptions(This,chanName,chanOptions) ) 

#define IMsRdpClient3_GetVirtualChannelOptions(This,chanName,pChanOptions)	\
    ( (This)->lpVtbl -> GetVirtualChannelOptions(This,chanName,pChanOptions) ) 

#define IMsRdpClient3_RequestClose(This,pCloseStatus)	\
    ( (This)->lpVtbl -> RequestClose(This,pCloseStatus) ) 


#define IMsRdpClient3_get_AdvancedSettings3(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings3(This,ppAdvSettings) ) 

#define IMsRdpClient3_put_ConnectedStatusText(This,pConnectedStatusText)	\
    ( (This)->lpVtbl -> put_ConnectedStatusText(This,pConnectedStatusText) ) 

#define IMsRdpClient3_get_ConnectedStatusText(This,pConnectedStatusText)	\
    ( (This)->lpVtbl -> get_ConnectedStatusText(This,pConnectedStatusText) ) 


#define IMsRdpClient3_get_AdvancedSettings4(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings4(This,ppAdvSettings) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMsRdpClient3_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClient4_INTERFACE_DEFINED__
#define __IMsRdpClient4_INTERFACE_DEFINED__

/* interface IMsRdpClient4 */
/* [oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClient4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("095E0738-D97D-488B-B9F6-DD0E8D66C0DE")
    IMsRdpClient4 : public IMsRdpClient3
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_AdvancedSettings5( 
            /* [retval][out] */ IMsRdpClientAdvancedSettings4 **ppAdvSettings) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMsRdpClient4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClient4 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClient4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClient4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClient4 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClient4 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClient4 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClient4 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Server )( 
            IMsRdpClient4 * This,
            /* [in] */ BSTR pServer);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Server )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ BSTR *pServer);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Domain )( 
            IMsRdpClient4 * This,
            /* [in] */ BSTR pDomain);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Domain )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ BSTR *pDomain);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_UserName )( 
            IMsRdpClient4 * This,
            /* [in] */ BSTR pUserName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UserName )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ BSTR *pUserName);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisconnectedText )( 
            IMsRdpClient4 * This,
            /* [in] */ BSTR pDisconnectedText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisconnectedText )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ BSTR *pDisconnectedText);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectingText )( 
            IMsRdpClient4 * This,
            /* [in] */ BSTR pConnectingText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectingText )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ BSTR *pConnectingText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Connected )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ short *pIsConnected);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DesktopWidth )( 
            IMsRdpClient4 * This,
            /* [in] */ long pVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DesktopWidth )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ long *pVal);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DesktopHeight )( 
            IMsRdpClient4 * This,
            /* [in] */ long pVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DesktopHeight )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ long *pVal);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_StartConnected )( 
            IMsRdpClient4 * This,
            /* [in] */ long pfStartConnected);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_StartConnected )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ long *pfStartConnected);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HorizontalScrollBarVisible )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ long *pfHScrollVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VerticalScrollBarVisible )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ long *pfVScrollVisible);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreenTitle )( 
            IMsRdpClient4 * This,
            /* [in] */ BSTR rhs);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CipherStrength )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ long *pCipherStrength);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ BSTR *pVersion);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettingsEnabled )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ long *pSecuredSettingsEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettings )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ IMsTscSecuredSettings **ppSecuredSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ IMsTscAdvancedSettings **ppAdvSettings);
        
        /* [hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Debugger )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ IMsTscDebug **ppDebugger);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
            IMsRdpClient4 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            IMsRdpClient4 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CreateVirtualChannels )( 
            IMsRdpClient4 * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendOnVirtualChannel )( 
            IMsRdpClient4 * This,
            /* [in] */ BSTR chanName,
            /* [in] */ BSTR ChanData);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ColorDepth )( 
            IMsRdpClient4 * This,
            /* [in] */ long pcolorDepth);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ColorDepth )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ long *pcolorDepth);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings2 )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings **ppAdvSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettings2 )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ IMsRdpClientSecuredSettings **ppSecuredSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ExtendedDisconnectReason )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ ExtendedDisconnectReasonCode *pExtendedDisconnectReason);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreen )( 
            IMsRdpClient4 * This,
            /* [in] */ VARIANT_BOOL pfFullScreen);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FullScreen )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfFullScreen);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetVirtualChannelOptions )( 
            IMsRdpClient4 * This,
            /* [in] */ BSTR chanName,
            /* [in] */ long chanOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetVirtualChannelOptions )( 
            IMsRdpClient4 * This,
            /* [in] */ BSTR chanName,
            /* [retval][out] */ long *pChanOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RequestClose )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ ControlCloseStatus *pCloseStatus);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings3 )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings2 **ppAdvSettings);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectedStatusText )( 
            IMsRdpClient4 * This,
            /* [in] */ BSTR pConnectedStatusText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectedStatusText )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ BSTR *pConnectedStatusText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings4 )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings3 **ppAdvSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings5 )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings4 **ppAdvSettings);
        
        END_INTERFACE
    } IMsRdpClient4Vtbl;

    interface IMsRdpClient4
    {
        CONST_VTBL struct IMsRdpClient4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClient4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClient4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClient4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClient4_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClient4_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClient4_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClient4_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 



#define IMsRdpClient4_put_Server(This,pServer)	\
    ( (This)->lpVtbl -> put_Server(This,pServer) ) 

#define IMsRdpClient4_get_Server(This,pServer)	\
    ( (This)->lpVtbl -> get_Server(This,pServer) ) 

#define IMsRdpClient4_put_Domain(This,pDomain)	\
    ( (This)->lpVtbl -> put_Domain(This,pDomain) ) 

#define IMsRdpClient4_get_Domain(This,pDomain)	\
    ( (This)->lpVtbl -> get_Domain(This,pDomain) ) 

#define IMsRdpClient4_put_UserName(This,pUserName)	\
    ( (This)->lpVtbl -> put_UserName(This,pUserName) ) 

#define IMsRdpClient4_get_UserName(This,pUserName)	\
    ( (This)->lpVtbl -> get_UserName(This,pUserName) ) 

#define IMsRdpClient4_put_DisconnectedText(This,pDisconnectedText)	\
    ( (This)->lpVtbl -> put_DisconnectedText(This,pDisconnectedText) ) 

#define IMsRdpClient4_get_DisconnectedText(This,pDisconnectedText)	\
    ( (This)->lpVtbl -> get_DisconnectedText(This,pDisconnectedText) ) 

#define IMsRdpClient4_put_ConnectingText(This,pConnectingText)	\
    ( (This)->lpVtbl -> put_ConnectingText(This,pConnectingText) ) 

#define IMsRdpClient4_get_ConnectingText(This,pConnectingText)	\
    ( (This)->lpVtbl -> get_ConnectingText(This,pConnectingText) ) 

#define IMsRdpClient4_get_Connected(This,pIsConnected)	\
    ( (This)->lpVtbl -> get_Connected(This,pIsConnected) ) 

#define IMsRdpClient4_put_DesktopWidth(This,pVal)	\
    ( (This)->lpVtbl -> put_DesktopWidth(This,pVal) ) 

#define IMsRdpClient4_get_DesktopWidth(This,pVal)	\
    ( (This)->lpVtbl -> get_DesktopWidth(This,pVal) ) 

#define IMsRdpClient4_put_DesktopHeight(This,pVal)	\
    ( (This)->lpVtbl -> put_DesktopHeight(This,pVal) ) 

#define IMsRdpClient4_get_DesktopHeight(This,pVal)	\
    ( (This)->lpVtbl -> get_DesktopHeight(This,pVal) ) 

#define IMsRdpClient4_put_StartConnected(This,pfStartConnected)	\
    ( (This)->lpVtbl -> put_StartConnected(This,pfStartConnected) ) 

#define IMsRdpClient4_get_StartConnected(This,pfStartConnected)	\
    ( (This)->lpVtbl -> get_StartConnected(This,pfStartConnected) ) 

#define IMsRdpClient4_get_HorizontalScrollBarVisible(This,pfHScrollVisible)	\
    ( (This)->lpVtbl -> get_HorizontalScrollBarVisible(This,pfHScrollVisible) ) 

#define IMsRdpClient4_get_VerticalScrollBarVisible(This,pfVScrollVisible)	\
    ( (This)->lpVtbl -> get_VerticalScrollBarVisible(This,pfVScrollVisible) ) 

#define IMsRdpClient4_put_FullScreenTitle(This,rhs)	\
    ( (This)->lpVtbl -> put_FullScreenTitle(This,rhs) ) 

#define IMsRdpClient4_get_CipherStrength(This,pCipherStrength)	\
    ( (This)->lpVtbl -> get_CipherStrength(This,pCipherStrength) ) 

#define IMsRdpClient4_get_Version(This,pVersion)	\
    ( (This)->lpVtbl -> get_Version(This,pVersion) ) 

#define IMsRdpClient4_get_SecuredSettingsEnabled(This,pSecuredSettingsEnabled)	\
    ( (This)->lpVtbl -> get_SecuredSettingsEnabled(This,pSecuredSettingsEnabled) ) 

#define IMsRdpClient4_get_SecuredSettings(This,ppSecuredSettings)	\
    ( (This)->lpVtbl -> get_SecuredSettings(This,ppSecuredSettings) ) 

#define IMsRdpClient4_get_AdvancedSettings(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings(This,ppAdvSettings) ) 

#define IMsRdpClient4_get_Debugger(This,ppDebugger)	\
    ( (This)->lpVtbl -> get_Debugger(This,ppDebugger) ) 

#define IMsRdpClient4_Connect(This)	\
    ( (This)->lpVtbl -> Connect(This) ) 

#define IMsRdpClient4_Disconnect(This)	\
    ( (This)->lpVtbl -> Disconnect(This) ) 

#define IMsRdpClient4_CreateVirtualChannels(This,newVal)	\
    ( (This)->lpVtbl -> CreateVirtualChannels(This,newVal) ) 

#define IMsRdpClient4_SendOnVirtualChannel(This,chanName,ChanData)	\
    ( (This)->lpVtbl -> SendOnVirtualChannel(This,chanName,ChanData) ) 


#define IMsRdpClient4_put_ColorDepth(This,pcolorDepth)	\
    ( (This)->lpVtbl -> put_ColorDepth(This,pcolorDepth) ) 

#define IMsRdpClient4_get_ColorDepth(This,pcolorDepth)	\
    ( (This)->lpVtbl -> get_ColorDepth(This,pcolorDepth) ) 

#define IMsRdpClient4_get_AdvancedSettings2(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings2(This,ppAdvSettings) ) 

#define IMsRdpClient4_get_SecuredSettings2(This,ppSecuredSettings)	\
    ( (This)->lpVtbl -> get_SecuredSettings2(This,ppSecuredSettings) ) 

#define IMsRdpClient4_get_ExtendedDisconnectReason(This,pExtendedDisconnectReason)	\
    ( (This)->lpVtbl -> get_ExtendedDisconnectReason(This,pExtendedDisconnectReason) ) 

#define IMsRdpClient4_put_FullScreen(This,pfFullScreen)	\
    ( (This)->lpVtbl -> put_FullScreen(This,pfFullScreen) ) 

#define IMsRdpClient4_get_FullScreen(This,pfFullScreen)	\
    ( (This)->lpVtbl -> get_FullScreen(This,pfFullScreen) ) 

#define IMsRdpClient4_SetVirtualChannelOptions(This,chanName,chanOptions)	\
    ( (This)->lpVtbl -> SetVirtualChannelOptions(This,chanName,chanOptions) ) 

#define IMsRdpClient4_GetVirtualChannelOptions(This,chanName,pChanOptions)	\
    ( (This)->lpVtbl -> GetVirtualChannelOptions(This,chanName,pChanOptions) ) 

#define IMsRdpClient4_RequestClose(This,pCloseStatus)	\
    ( (This)->lpVtbl -> RequestClose(This,pCloseStatus) ) 


#define IMsRdpClient4_get_AdvancedSettings3(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings3(This,ppAdvSettings) ) 

#define IMsRdpClient4_put_ConnectedStatusText(This,pConnectedStatusText)	\
    ( (This)->lpVtbl -> put_ConnectedStatusText(This,pConnectedStatusText) ) 

#define IMsRdpClient4_get_ConnectedStatusText(This,pConnectedStatusText)	\
    ( (This)->lpVtbl -> get_ConnectedStatusText(This,pConnectedStatusText) ) 


#define IMsRdpClient4_get_AdvancedSettings4(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings4(This,ppAdvSettings) ) 


#define IMsRdpClient4_get_AdvancedSettings5(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings5(This,ppAdvSettings) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMsRdpClient4_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClient5_INTERFACE_DEFINED__
#define __IMsRdpClient5_INTERFACE_DEFINED__

/* interface IMsRdpClient5 */
/* [oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClient5;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4EB5335B-6429-477D-B922-E06A28ECD8BF")
    IMsRdpClient5 : public IMsRdpClient4
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TransportSettings( 
            /* [retval][out] */ IMsRdpClientTransportSettings **ppXportSet) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_AdvancedSettings6( 
            /* [retval][out] */ IMsRdpClientAdvancedSettings5 **ppAdvSettings) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            /* [in] */ unsigned int disconnectReason,
            /* [in] */ unsigned int ExtendedDisconnectReason,
            /* [retval][out] */ BSTR *pBstrErrorMsg) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RemoteProgram( 
            /* [retval][out] */ ITSRemoteProgram **ppRemoteProgram) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_MsRdpClientShell( 
            /* [retval][out] */ IMsRdpClientShell **ppLauncher) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMsRdpClient5Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClient5 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClient5 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClient5 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClient5 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClient5 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClient5 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClient5 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Server )( 
            IMsRdpClient5 * This,
            /* [in] */ BSTR pServer);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Server )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ BSTR *pServer);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Domain )( 
            IMsRdpClient5 * This,
            /* [in] */ BSTR pDomain);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Domain )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ BSTR *pDomain);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_UserName )( 
            IMsRdpClient5 * This,
            /* [in] */ BSTR pUserName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UserName )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ BSTR *pUserName);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisconnectedText )( 
            IMsRdpClient5 * This,
            /* [in] */ BSTR pDisconnectedText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisconnectedText )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ BSTR *pDisconnectedText);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectingText )( 
            IMsRdpClient5 * This,
            /* [in] */ BSTR pConnectingText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectingText )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ BSTR *pConnectingText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Connected )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ short *pIsConnected);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DesktopWidth )( 
            IMsRdpClient5 * This,
            /* [in] */ long pVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DesktopWidth )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ long *pVal);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DesktopHeight )( 
            IMsRdpClient5 * This,
            /* [in] */ long pVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DesktopHeight )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ long *pVal);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_StartConnected )( 
            IMsRdpClient5 * This,
            /* [in] */ long pfStartConnected);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_StartConnected )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ long *pfStartConnected);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HorizontalScrollBarVisible )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ long *pfHScrollVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VerticalScrollBarVisible )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ long *pfVScrollVisible);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreenTitle )( 
            IMsRdpClient5 * This,
            /* [in] */ BSTR rhs);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CipherStrength )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ long *pCipherStrength);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ BSTR *pVersion);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettingsEnabled )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ long *pSecuredSettingsEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettings )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ IMsTscSecuredSettings **ppSecuredSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ IMsTscAdvancedSettings **ppAdvSettings);
        
        /* [hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Debugger )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ IMsTscDebug **ppDebugger);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
            IMsRdpClient5 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            IMsRdpClient5 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CreateVirtualChannels )( 
            IMsRdpClient5 * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendOnVirtualChannel )( 
            IMsRdpClient5 * This,
            /* [in] */ BSTR chanName,
            /* [in] */ BSTR ChanData);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ColorDepth )( 
            IMsRdpClient5 * This,
            /* [in] */ long pcolorDepth);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ColorDepth )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ long *pcolorDepth);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings2 )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings **ppAdvSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettings2 )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ IMsRdpClientSecuredSettings **ppSecuredSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ExtendedDisconnectReason )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ ExtendedDisconnectReasonCode *pExtendedDisconnectReason);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreen )( 
            IMsRdpClient5 * This,
            /* [in] */ VARIANT_BOOL pfFullScreen);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FullScreen )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfFullScreen);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetVirtualChannelOptions )( 
            IMsRdpClient5 * This,
            /* [in] */ BSTR chanName,
            /* [in] */ long chanOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetVirtualChannelOptions )( 
            IMsRdpClient5 * This,
            /* [in] */ BSTR chanName,
            /* [retval][out] */ long *pChanOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RequestClose )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ ControlCloseStatus *pCloseStatus);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings3 )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings2 **ppAdvSettings);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectedStatusText )( 
            IMsRdpClient5 * This,
            /* [in] */ BSTR pConnectedStatusText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectedStatusText )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ BSTR *pConnectedStatusText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings4 )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings3 **ppAdvSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings5 )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings4 **ppAdvSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TransportSettings )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ IMsRdpClientTransportSettings **ppXportSet);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings6 )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings5 **ppAdvSettings);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            IMsRdpClient5 * This,
            /* [in] */ unsigned int disconnectReason,
            /* [in] */ unsigned int ExtendedDisconnectReason,
            /* [retval][out] */ BSTR *pBstrErrorMsg);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RemoteProgram )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ ITSRemoteProgram **ppRemoteProgram);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MsRdpClientShell )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ IMsRdpClientShell **ppLauncher);
        
        END_INTERFACE
    } IMsRdpClient5Vtbl;

    interface IMsRdpClient5
    {
        CONST_VTBL struct IMsRdpClient5Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClient5_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClient5_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClient5_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClient5_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClient5_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClient5_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClient5_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 



#define IMsRdpClient5_put_Server(This,pServer)	\
    ( (This)->lpVtbl -> put_Server(This,pServer) ) 

#define IMsRdpClient5_get_Server(This,pServer)	\
    ( (This)->lpVtbl -> get_Server(This,pServer) ) 

#define IMsRdpClient5_put_Domain(This,pDomain)	\
    ( (This)->lpVtbl -> put_Domain(This,pDomain) ) 

#define IMsRdpClient5_get_Domain(This,pDomain)	\
    ( (This)->lpVtbl -> get_Domain(This,pDomain) ) 

#define IMsRdpClient5_put_UserName(This,pUserName)	\
    ( (This)->lpVtbl -> put_UserName(This,pUserName) ) 

#define IMsRdpClient5_get_UserName(This,pUserName)	\
    ( (This)->lpVtbl -> get_UserName(This,pUserName) ) 

#define IMsRdpClient5_put_DisconnectedText(This,pDisconnectedText)	\
    ( (This)->lpVtbl -> put_DisconnectedText(This,pDisconnectedText) ) 

#define IMsRdpClient5_get_DisconnectedText(This,pDisconnectedText)	\
    ( (This)->lpVtbl -> get_DisconnectedText(This,pDisconnectedText) ) 

#define IMsRdpClient5_put_ConnectingText(This,pConnectingText)	\
    ( (This)->lpVtbl -> put_ConnectingText(This,pConnectingText) ) 

#define IMsRdpClient5_get_ConnectingText(This,pConnectingText)	\
    ( (This)->lpVtbl -> get_ConnectingText(This,pConnectingText) ) 

#define IMsRdpClient5_get_Connected(This,pIsConnected)	\
    ( (This)->lpVtbl -> get_Connected(This,pIsConnected) ) 

#define IMsRdpClient5_put_DesktopWidth(This,pVal)	\
    ( (This)->lpVtbl -> put_DesktopWidth(This,pVal) ) 

#define IMsRdpClient5_get_DesktopWidth(This,pVal)	\
    ( (This)->lpVtbl -> get_DesktopWidth(This,pVal) ) 

#define IMsRdpClient5_put_DesktopHeight(This,pVal)	\
    ( (This)->lpVtbl -> put_DesktopHeight(This,pVal) ) 

#define IMsRdpClient5_get_DesktopHeight(This,pVal)	\
    ( (This)->lpVtbl -> get_DesktopHeight(This,pVal) ) 

#define IMsRdpClient5_put_StartConnected(This,pfStartConnected)	\
    ( (This)->lpVtbl -> put_StartConnected(This,pfStartConnected) ) 

#define IMsRdpClient5_get_StartConnected(This,pfStartConnected)	\
    ( (This)->lpVtbl -> get_StartConnected(This,pfStartConnected) ) 

#define IMsRdpClient5_get_HorizontalScrollBarVisible(This,pfHScrollVisible)	\
    ( (This)->lpVtbl -> get_HorizontalScrollBarVisible(This,pfHScrollVisible) ) 

#define IMsRdpClient5_get_VerticalScrollBarVisible(This,pfVScrollVisible)	\
    ( (This)->lpVtbl -> get_VerticalScrollBarVisible(This,pfVScrollVisible) ) 

#define IMsRdpClient5_put_FullScreenTitle(This,rhs)	\
    ( (This)->lpVtbl -> put_FullScreenTitle(This,rhs) ) 

#define IMsRdpClient5_get_CipherStrength(This,pCipherStrength)	\
    ( (This)->lpVtbl -> get_CipherStrength(This,pCipherStrength) ) 

#define IMsRdpClient5_get_Version(This,pVersion)	\
    ( (This)->lpVtbl -> get_Version(This,pVersion) ) 

#define IMsRdpClient5_get_SecuredSettingsEnabled(This,pSecuredSettingsEnabled)	\
    ( (This)->lpVtbl -> get_SecuredSettingsEnabled(This,pSecuredSettingsEnabled) ) 

#define IMsRdpClient5_get_SecuredSettings(This,ppSecuredSettings)	\
    ( (This)->lpVtbl -> get_SecuredSettings(This,ppSecuredSettings) ) 

#define IMsRdpClient5_get_AdvancedSettings(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings(This,ppAdvSettings) ) 

#define IMsRdpClient5_get_Debugger(This,ppDebugger)	\
    ( (This)->lpVtbl -> get_Debugger(This,ppDebugger) ) 

#define IMsRdpClient5_Connect(This)	\
    ( (This)->lpVtbl -> Connect(This) ) 

#define IMsRdpClient5_Disconnect(This)	\
    ( (This)->lpVtbl -> Disconnect(This) ) 

#define IMsRdpClient5_CreateVirtualChannels(This,newVal)	\
    ( (This)->lpVtbl -> CreateVirtualChannels(This,newVal) ) 

#define IMsRdpClient5_SendOnVirtualChannel(This,chanName,ChanData)	\
    ( (This)->lpVtbl -> SendOnVirtualChannel(This,chanName,ChanData) ) 


#define IMsRdpClient5_put_ColorDepth(This,pcolorDepth)	\
    ( (This)->lpVtbl -> put_ColorDepth(This,pcolorDepth) ) 

#define IMsRdpClient5_get_ColorDepth(This,pcolorDepth)	\
    ( (This)->lpVtbl -> get_ColorDepth(This,pcolorDepth) ) 

#define IMsRdpClient5_get_AdvancedSettings2(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings2(This,ppAdvSettings) ) 

#define IMsRdpClient5_get_SecuredSettings2(This,ppSecuredSettings)	\
    ( (This)->lpVtbl -> get_SecuredSettings2(This,ppSecuredSettings) ) 

#define IMsRdpClient5_get_ExtendedDisconnectReason(This,pExtendedDisconnectReason)	\
    ( (This)->lpVtbl -> get_ExtendedDisconnectReason(This,pExtendedDisconnectReason) ) 

#define IMsRdpClient5_put_FullScreen(This,pfFullScreen)	\
    ( (This)->lpVtbl -> put_FullScreen(This,pfFullScreen) ) 

#define IMsRdpClient5_get_FullScreen(This,pfFullScreen)	\
    ( (This)->lpVtbl -> get_FullScreen(This,pfFullScreen) ) 

#define IMsRdpClient5_SetVirtualChannelOptions(This,chanName,chanOptions)	\
    ( (This)->lpVtbl -> SetVirtualChannelOptions(This,chanName,chanOptions) ) 

#define IMsRdpClient5_GetVirtualChannelOptions(This,chanName,pChanOptions)	\
    ( (This)->lpVtbl -> GetVirtualChannelOptions(This,chanName,pChanOptions) ) 

#define IMsRdpClient5_RequestClose(This,pCloseStatus)	\
    ( (This)->lpVtbl -> RequestClose(This,pCloseStatus) ) 


#define IMsRdpClient5_get_AdvancedSettings3(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings3(This,ppAdvSettings) ) 

#define IMsRdpClient5_put_ConnectedStatusText(This,pConnectedStatusText)	\
    ( (This)->lpVtbl -> put_ConnectedStatusText(This,pConnectedStatusText) ) 

#define IMsRdpClient5_get_ConnectedStatusText(This,pConnectedStatusText)	\
    ( (This)->lpVtbl -> get_ConnectedStatusText(This,pConnectedStatusText) ) 


#define IMsRdpClient5_get_AdvancedSettings4(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings4(This,ppAdvSettings) ) 


#define IMsRdpClient5_get_AdvancedSettings5(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings5(This,ppAdvSettings) ) 


#define IMsRdpClient5_get_TransportSettings(This,ppXportSet)	\
    ( (This)->lpVtbl -> get_TransportSettings(This,ppXportSet) ) 

#define IMsRdpClient5_get_AdvancedSettings6(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings6(This,ppAdvSettings) ) 

#define IMsRdpClient5_GetErrorDescription(This,disconnectReason,ExtendedDisconnectReason,pBstrErrorMsg)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,disconnectReason,ExtendedDisconnectReason,pBstrErrorMsg) ) 

#define IMsRdpClient5_get_RemoteProgram(This,ppRemoteProgram)	\
    ( (This)->lpVtbl -> get_RemoteProgram(This,ppRemoteProgram) ) 

#define IMsRdpClient5_get_MsRdpClientShell(This,ppLauncher)	\
    ( (This)->lpVtbl -> get_MsRdpClientShell(This,ppLauncher) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMsRdpClient5_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClient6_INTERFACE_DEFINED__
#define __IMsRdpClient6_INTERFACE_DEFINED__

/* interface IMsRdpClient6 */
/* [oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClient6;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D43B7D80-8517-4B6D-9EAC-96AD6800D7F2")
    IMsRdpClient6 : public IMsRdpClient5
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_AdvancedSettings7( 
            /* [retval][out] */ IMsRdpClientAdvancedSettings6 **ppAdvSettings) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TransportSettings2( 
            /* [retval][out] */ IMsRdpClientTransportSettings2 **ppXportSet2) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMsRdpClient6Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClient6 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClient6 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClient6 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClient6 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClient6 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClient6 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClient6 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Server )( 
            IMsRdpClient6 * This,
            /* [in] */ BSTR pServer);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Server )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ BSTR *pServer);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Domain )( 
            IMsRdpClient6 * This,
            /* [in] */ BSTR pDomain);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Domain )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ BSTR *pDomain);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_UserName )( 
            IMsRdpClient6 * This,
            /* [in] */ BSTR pUserName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UserName )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ BSTR *pUserName);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisconnectedText )( 
            IMsRdpClient6 * This,
            /* [in] */ BSTR pDisconnectedText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisconnectedText )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ BSTR *pDisconnectedText);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectingText )( 
            IMsRdpClient6 * This,
            /* [in] */ BSTR pConnectingText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectingText )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ BSTR *pConnectingText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Connected )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ short *pIsConnected);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DesktopWidth )( 
            IMsRdpClient6 * This,
            /* [in] */ long pVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DesktopWidth )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ long *pVal);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DesktopHeight )( 
            IMsRdpClient6 * This,
            /* [in] */ long pVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DesktopHeight )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ long *pVal);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_StartConnected )( 
            IMsRdpClient6 * This,
            /* [in] */ long pfStartConnected);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_StartConnected )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ long *pfStartConnected);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HorizontalScrollBarVisible )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ long *pfHScrollVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VerticalScrollBarVisible )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ long *pfVScrollVisible);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreenTitle )( 
            IMsRdpClient6 * This,
            /* [in] */ BSTR rhs);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CipherStrength )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ long *pCipherStrength);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ BSTR *pVersion);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettingsEnabled )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ long *pSecuredSettingsEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettings )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ IMsTscSecuredSettings **ppSecuredSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ IMsTscAdvancedSettings **ppAdvSettings);
        
        /* [hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Debugger )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ IMsTscDebug **ppDebugger);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
            IMsRdpClient6 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            IMsRdpClient6 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CreateVirtualChannels )( 
            IMsRdpClient6 * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendOnVirtualChannel )( 
            IMsRdpClient6 * This,
            /* [in] */ BSTR chanName,
            /* [in] */ BSTR ChanData);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ColorDepth )( 
            IMsRdpClient6 * This,
            /* [in] */ long pcolorDepth);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ColorDepth )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ long *pcolorDepth);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings2 )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings **ppAdvSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettings2 )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ IMsRdpClientSecuredSettings **ppSecuredSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ExtendedDisconnectReason )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ ExtendedDisconnectReasonCode *pExtendedDisconnectReason);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreen )( 
            IMsRdpClient6 * This,
            /* [in] */ VARIANT_BOOL pfFullScreen);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FullScreen )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ VARIANT_BOOL *pfFullScreen);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetVirtualChannelOptions )( 
            IMsRdpClient6 * This,
            /* [in] */ BSTR chanName,
            /* [in] */ long chanOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetVirtualChannelOptions )( 
            IMsRdpClient6 * This,
            /* [in] */ BSTR chanName,
            /* [retval][out] */ long *pChanOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RequestClose )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ ControlCloseStatus *pCloseStatus);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings3 )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings2 **ppAdvSettings);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectedStatusText )( 
            IMsRdpClient6 * This,
            /* [in] */ BSTR pConnectedStatusText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectedStatusText )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ BSTR *pConnectedStatusText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings4 )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings3 **ppAdvSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings5 )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings4 **ppAdvSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TransportSettings )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ IMsRdpClientTransportSettings **ppXportSet);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings6 )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings5 **ppAdvSettings);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            IMsRdpClient6 * This,
            /* [in] */ unsigned int disconnectReason,
            /* [in] */ unsigned int ExtendedDisconnectReason,
            /* [retval][out] */ BSTR *pBstrErrorMsg);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RemoteProgram )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ ITSRemoteProgram **ppRemoteProgram);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MsRdpClientShell )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ IMsRdpClientShell **ppLauncher);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings7 )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings6 **ppAdvSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TransportSettings2 )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ IMsRdpClientTransportSettings2 **ppXportSet2);
        
        END_INTERFACE
    } IMsRdpClient6Vtbl;

    interface IMsRdpClient6
    {
        CONST_VTBL struct IMsRdpClient6Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClient6_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClient6_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClient6_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClient6_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClient6_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClient6_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClient6_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 



#define IMsRdpClient6_put_Server(This,pServer)	\
    ( (This)->lpVtbl -> put_Server(This,pServer) ) 

#define IMsRdpClient6_get_Server(This,pServer)	\
    ( (This)->lpVtbl -> get_Server(This,pServer) ) 

#define IMsRdpClient6_put_Domain(This,pDomain)	\
    ( (This)->lpVtbl -> put_Domain(This,pDomain) ) 

#define IMsRdpClient6_get_Domain(This,pDomain)	\
    ( (This)->lpVtbl -> get_Domain(This,pDomain) ) 

#define IMsRdpClient6_put_UserName(This,pUserName)	\
    ( (This)->lpVtbl -> put_UserName(This,pUserName) ) 

#define IMsRdpClient6_get_UserName(This,pUserName)	\
    ( (This)->lpVtbl -> get_UserName(This,pUserName) ) 

#define IMsRdpClient6_put_DisconnectedText(This,pDisconnectedText)	\
    ( (This)->lpVtbl -> put_DisconnectedText(This,pDisconnectedText) ) 

#define IMsRdpClient6_get_DisconnectedText(This,pDisconnectedText)	\
    ( (This)->lpVtbl -> get_DisconnectedText(This,pDisconnectedText) ) 

#define IMsRdpClient6_put_ConnectingText(This,pConnectingText)	\
    ( (This)->lpVtbl -> put_ConnectingText(This,pConnectingText) ) 

#define IMsRdpClient6_get_ConnectingText(This,pConnectingText)	\
    ( (This)->lpVtbl -> get_ConnectingText(This,pConnectingText) ) 

#define IMsRdpClient6_get_Connected(This,pIsConnected)	\
    ( (This)->lpVtbl -> get_Connected(This,pIsConnected) ) 

#define IMsRdpClient6_put_DesktopWidth(This,pVal)	\
    ( (This)->lpVtbl -> put_DesktopWidth(This,pVal) ) 

#define IMsRdpClient6_get_DesktopWidth(This,pVal)	\
    ( (This)->lpVtbl -> get_DesktopWidth(This,pVal) ) 

#define IMsRdpClient6_put_DesktopHeight(This,pVal)	\
    ( (This)->lpVtbl -> put_DesktopHeight(This,pVal) ) 

#define IMsRdpClient6_get_DesktopHeight(This,pVal)	\
    ( (This)->lpVtbl -> get_DesktopHeight(This,pVal) ) 

#define IMsRdpClient6_put_StartConnected(This,pfStartConnected)	\
    ( (This)->lpVtbl -> put_StartConnected(This,pfStartConnected) ) 

#define IMsRdpClient6_get_StartConnected(This,pfStartConnected)	\
    ( (This)->lpVtbl -> get_StartConnected(This,pfStartConnected) ) 

#define IMsRdpClient6_get_HorizontalScrollBarVisible(This,pfHScrollVisible)	\
    ( (This)->lpVtbl -> get_HorizontalScrollBarVisible(This,pfHScrollVisible) ) 

#define IMsRdpClient6_get_VerticalScrollBarVisible(This,pfVScrollVisible)	\
    ( (This)->lpVtbl -> get_VerticalScrollBarVisible(This,pfVScrollVisible) ) 

#define IMsRdpClient6_put_FullScreenTitle(This,rhs)	\
    ( (This)->lpVtbl -> put_FullScreenTitle(This,rhs) ) 

#define IMsRdpClient6_get_CipherStrength(This,pCipherStrength)	\
    ( (This)->lpVtbl -> get_CipherStrength(This,pCipherStrength) ) 

#define IMsRdpClient6_get_Version(This,pVersion)	\
    ( (This)->lpVtbl -> get_Version(This,pVersion) ) 

#define IMsRdpClient6_get_SecuredSettingsEnabled(This,pSecuredSettingsEnabled)	\
    ( (This)->lpVtbl -> get_SecuredSettingsEnabled(This,pSecuredSettingsEnabled) ) 

#define IMsRdpClient6_get_SecuredSettings(This,ppSecuredSettings)	\
    ( (This)->lpVtbl -> get_SecuredSettings(This,ppSecuredSettings) ) 

#define IMsRdpClient6_get_AdvancedSettings(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings(This,ppAdvSettings) ) 

#define IMsRdpClient6_get_Debugger(This,ppDebugger)	\
    ( (This)->lpVtbl -> get_Debugger(This,ppDebugger) ) 

#define IMsRdpClient6_Connect(This)	\
    ( (This)->lpVtbl -> Connect(This) ) 

#define IMsRdpClient6_Disconnect(This)	\
    ( (This)->lpVtbl -> Disconnect(This) ) 

#define IMsRdpClient6_CreateVirtualChannels(This,newVal)	\
    ( (This)->lpVtbl -> CreateVirtualChannels(This,newVal) ) 

#define IMsRdpClient6_SendOnVirtualChannel(This,chanName,ChanData)	\
    ( (This)->lpVtbl -> SendOnVirtualChannel(This,chanName,ChanData) ) 


#define IMsRdpClient6_put_ColorDepth(This,pcolorDepth)	\
    ( (This)->lpVtbl -> put_ColorDepth(This,pcolorDepth) ) 

#define IMsRdpClient6_get_ColorDepth(This,pcolorDepth)	\
    ( (This)->lpVtbl -> get_ColorDepth(This,pcolorDepth) ) 

#define IMsRdpClient6_get_AdvancedSettings2(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings2(This,ppAdvSettings) ) 

#define IMsRdpClient6_get_SecuredSettings2(This,ppSecuredSettings)	\
    ( (This)->lpVtbl -> get_SecuredSettings2(This,ppSecuredSettings) ) 

#define IMsRdpClient6_get_ExtendedDisconnectReason(This,pExtendedDisconnectReason)	\
    ( (This)->lpVtbl -> get_ExtendedDisconnectReason(This,pExtendedDisconnectReason) ) 

#define IMsRdpClient6_put_FullScreen(This,pfFullScreen)	\
    ( (This)->lpVtbl -> put_FullScreen(This,pfFullScreen) ) 

#define IMsRdpClient6_get_FullScreen(This,pfFullScreen)	\
    ( (This)->lpVtbl -> get_FullScreen(This,pfFullScreen) ) 

#define IMsRdpClient6_SetVirtualChannelOptions(This,chanName,chanOptions)	\
    ( (This)->lpVtbl -> SetVirtualChannelOptions(This,chanName,chanOptions) ) 

#define IMsRdpClient6_GetVirtualChannelOptions(This,chanName,pChanOptions)	\
    ( (This)->lpVtbl -> GetVirtualChannelOptions(This,chanName,pChanOptions) ) 

#define IMsRdpClient6_RequestClose(This,pCloseStatus)	\
    ( (This)->lpVtbl -> RequestClose(This,pCloseStatus) ) 


#define IMsRdpClient6_get_AdvancedSettings3(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings3(This,ppAdvSettings) ) 

#define IMsRdpClient6_put_ConnectedStatusText(This,pConnectedStatusText)	\
    ( (This)->lpVtbl -> put_ConnectedStatusText(This,pConnectedStatusText) ) 

#define IMsRdpClient6_get_ConnectedStatusText(This,pConnectedStatusText)	\
    ( (This)->lpVtbl -> get_ConnectedStatusText(This,pConnectedStatusText) ) 


#define IMsRdpClient6_get_AdvancedSettings4(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings4(This,ppAdvSettings) ) 


#define IMsRdpClient6_get_AdvancedSettings5(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings5(This,ppAdvSettings) ) 


#define IMsRdpClient6_get_TransportSettings(This,ppXportSet)	\
    ( (This)->lpVtbl -> get_TransportSettings(This,ppXportSet) ) 

#define IMsRdpClient6_get_AdvancedSettings6(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings6(This,ppAdvSettings) ) 

#define IMsRdpClient6_GetErrorDescription(This,disconnectReason,ExtendedDisconnectReason,pBstrErrorMsg)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,disconnectReason,ExtendedDisconnectReason,pBstrErrorMsg) ) 

#define IMsRdpClient6_get_RemoteProgram(This,ppRemoteProgram)	\
    ( (This)->lpVtbl -> get_RemoteProgram(This,ppRemoteProgram) ) 

#define IMsRdpClient6_get_MsRdpClientShell(This,ppLauncher)	\
    ( (This)->lpVtbl -> get_MsRdpClientShell(This,ppLauncher) ) 


#define IMsRdpClient6_get_AdvancedSettings7(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings7(This,ppAdvSettings) ) 

#define IMsRdpClient6_get_TransportSettings2(This,ppXportSet2)	\
    ( (This)->lpVtbl -> get_TransportSettings2(This,ppXportSet2) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMsRdpClient6_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClient7_INTERFACE_DEFINED__
#define __IMsRdpClient7_INTERFACE_DEFINED__

/* interface IMsRdpClient7 */
/* [oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClient7;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B2A5B5CE-3461-444A-91D4-ADD26D070638")
    IMsRdpClient7 : public IMsRdpClient6
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_AdvancedSettings8( 
            /* [retval][out] */ IMsRdpClientAdvancedSettings7 **ppAdvSettings) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TransportSettings3( 
            /* [retval][out] */ IMsRdpClientTransportSettings3 **ppXportSet3) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetStatusText( 
            /* [in] */ unsigned int statusCode,
            /* [retval][out] */ BSTR *pBstrStatusText) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SecuredSettings3( 
            /* [retval][out] */ IMsRdpClientSecuredSettings2 **ppSecuredSettings) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RemoteProgram2( 
            /* [retval][out] */ ITSRemoteProgram2 **ppRemoteProgram) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMsRdpClient7Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClient7 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClient7 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClient7 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClient7 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClient7 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClient7 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClient7 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Server )( 
            IMsRdpClient7 * This,
            /* [in] */ BSTR pServer);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Server )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ BSTR *pServer);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Domain )( 
            IMsRdpClient7 * This,
            /* [in] */ BSTR pDomain);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Domain )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ BSTR *pDomain);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_UserName )( 
            IMsRdpClient7 * This,
            /* [in] */ BSTR pUserName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UserName )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ BSTR *pUserName);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisconnectedText )( 
            IMsRdpClient7 * This,
            /* [in] */ BSTR pDisconnectedText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisconnectedText )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ BSTR *pDisconnectedText);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectingText )( 
            IMsRdpClient7 * This,
            /* [in] */ BSTR pConnectingText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectingText )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ BSTR *pConnectingText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Connected )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ short *pIsConnected);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DesktopWidth )( 
            IMsRdpClient7 * This,
            /* [in] */ long pVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DesktopWidth )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ long *pVal);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DesktopHeight )( 
            IMsRdpClient7 * This,
            /* [in] */ long pVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DesktopHeight )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ long *pVal);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_StartConnected )( 
            IMsRdpClient7 * This,
            /* [in] */ long pfStartConnected);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_StartConnected )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ long *pfStartConnected);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HorizontalScrollBarVisible )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ long *pfHScrollVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VerticalScrollBarVisible )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ long *pfVScrollVisible);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreenTitle )( 
            IMsRdpClient7 * This,
            /* [in] */ BSTR rhs);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CipherStrength )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ long *pCipherStrength);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ BSTR *pVersion);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettingsEnabled )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ long *pSecuredSettingsEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettings )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ IMsTscSecuredSettings **ppSecuredSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ IMsTscAdvancedSettings **ppAdvSettings);
        
        /* [hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Debugger )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ IMsTscDebug **ppDebugger);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
            IMsRdpClient7 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            IMsRdpClient7 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CreateVirtualChannels )( 
            IMsRdpClient7 * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendOnVirtualChannel )( 
            IMsRdpClient7 * This,
            /* [in] */ BSTR chanName,
            /* [in] */ BSTR ChanData);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ColorDepth )( 
            IMsRdpClient7 * This,
            /* [in] */ long pcolorDepth);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ColorDepth )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ long *pcolorDepth);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings2 )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings **ppAdvSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettings2 )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ IMsRdpClientSecuredSettings **ppSecuredSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ExtendedDisconnectReason )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ ExtendedDisconnectReasonCode *pExtendedDisconnectReason);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreen )( 
            IMsRdpClient7 * This,
            /* [in] */ VARIANT_BOOL pfFullScreen);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FullScreen )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ VARIANT_BOOL *pfFullScreen);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetVirtualChannelOptions )( 
            IMsRdpClient7 * This,
            /* [in] */ BSTR chanName,
            /* [in] */ long chanOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetVirtualChannelOptions )( 
            IMsRdpClient7 * This,
            /* [in] */ BSTR chanName,
            /* [retval][out] */ long *pChanOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RequestClose )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ ControlCloseStatus *pCloseStatus);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings3 )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings2 **ppAdvSettings);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectedStatusText )( 
            IMsRdpClient7 * This,
            /* [in] */ BSTR pConnectedStatusText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectedStatusText )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ BSTR *pConnectedStatusText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings4 )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings3 **ppAdvSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings5 )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings4 **ppAdvSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TransportSettings )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ IMsRdpClientTransportSettings **ppXportSet);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings6 )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings5 **ppAdvSettings);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            IMsRdpClient7 * This,
            /* [in] */ unsigned int disconnectReason,
            /* [in] */ unsigned int ExtendedDisconnectReason,
            /* [retval][out] */ BSTR *pBstrErrorMsg);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RemoteProgram )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ ITSRemoteProgram **ppRemoteProgram);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MsRdpClientShell )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ IMsRdpClientShell **ppLauncher);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings7 )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings6 **ppAdvSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TransportSettings2 )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ IMsRdpClientTransportSettings2 **ppXportSet2);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings8 )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings7 **ppAdvSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TransportSettings3 )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ IMsRdpClientTransportSettings3 **ppXportSet3);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusText )( 
            IMsRdpClient7 * This,
            /* [in] */ unsigned int statusCode,
            /* [retval][out] */ BSTR *pBstrStatusText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettings3 )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ IMsRdpClientSecuredSettings2 **ppSecuredSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RemoteProgram2 )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ ITSRemoteProgram2 **ppRemoteProgram);
        
        END_INTERFACE
    } IMsRdpClient7Vtbl;

    interface IMsRdpClient7
    {
        CONST_VTBL struct IMsRdpClient7Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClient7_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClient7_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClient7_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClient7_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClient7_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClient7_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClient7_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 



#define IMsRdpClient7_put_Server(This,pServer)	\
    ( (This)->lpVtbl -> put_Server(This,pServer) ) 

#define IMsRdpClient7_get_Server(This,pServer)	\
    ( (This)->lpVtbl -> get_Server(This,pServer) ) 

#define IMsRdpClient7_put_Domain(This,pDomain)	\
    ( (This)->lpVtbl -> put_Domain(This,pDomain) ) 

#define IMsRdpClient7_get_Domain(This,pDomain)	\
    ( (This)->lpVtbl -> get_Domain(This,pDomain) ) 

#define IMsRdpClient7_put_UserName(This,pUserName)	\
    ( (This)->lpVtbl -> put_UserName(This,pUserName) ) 

#define IMsRdpClient7_get_UserName(This,pUserName)	\
    ( (This)->lpVtbl -> get_UserName(This,pUserName) ) 

#define IMsRdpClient7_put_DisconnectedText(This,pDisconnectedText)	\
    ( (This)->lpVtbl -> put_DisconnectedText(This,pDisconnectedText) ) 

#define IMsRdpClient7_get_DisconnectedText(This,pDisconnectedText)	\
    ( (This)->lpVtbl -> get_DisconnectedText(This,pDisconnectedText) ) 

#define IMsRdpClient7_put_ConnectingText(This,pConnectingText)	\
    ( (This)->lpVtbl -> put_ConnectingText(This,pConnectingText) ) 

#define IMsRdpClient7_get_ConnectingText(This,pConnectingText)	\
    ( (This)->lpVtbl -> get_ConnectingText(This,pConnectingText) ) 

#define IMsRdpClient7_get_Connected(This,pIsConnected)	\
    ( (This)->lpVtbl -> get_Connected(This,pIsConnected) ) 

#define IMsRdpClient7_put_DesktopWidth(This,pVal)	\
    ( (This)->lpVtbl -> put_DesktopWidth(This,pVal) ) 

#define IMsRdpClient7_get_DesktopWidth(This,pVal)	\
    ( (This)->lpVtbl -> get_DesktopWidth(This,pVal) ) 

#define IMsRdpClient7_put_DesktopHeight(This,pVal)	\
    ( (This)->lpVtbl -> put_DesktopHeight(This,pVal) ) 

#define IMsRdpClient7_get_DesktopHeight(This,pVal)	\
    ( (This)->lpVtbl -> get_DesktopHeight(This,pVal) ) 

#define IMsRdpClient7_put_StartConnected(This,pfStartConnected)	\
    ( (This)->lpVtbl -> put_StartConnected(This,pfStartConnected) ) 

#define IMsRdpClient7_get_StartConnected(This,pfStartConnected)	\
    ( (This)->lpVtbl -> get_StartConnected(This,pfStartConnected) ) 

#define IMsRdpClient7_get_HorizontalScrollBarVisible(This,pfHScrollVisible)	\
    ( (This)->lpVtbl -> get_HorizontalScrollBarVisible(This,pfHScrollVisible) ) 

#define IMsRdpClient7_get_VerticalScrollBarVisible(This,pfVScrollVisible)	\
    ( (This)->lpVtbl -> get_VerticalScrollBarVisible(This,pfVScrollVisible) ) 

#define IMsRdpClient7_put_FullScreenTitle(This,rhs)	\
    ( (This)->lpVtbl -> put_FullScreenTitle(This,rhs) ) 

#define IMsRdpClient7_get_CipherStrength(This,pCipherStrength)	\
    ( (This)->lpVtbl -> get_CipherStrength(This,pCipherStrength) ) 

#define IMsRdpClient7_get_Version(This,pVersion)	\
    ( (This)->lpVtbl -> get_Version(This,pVersion) ) 

#define IMsRdpClient7_get_SecuredSettingsEnabled(This,pSecuredSettingsEnabled)	\
    ( (This)->lpVtbl -> get_SecuredSettingsEnabled(This,pSecuredSettingsEnabled) ) 

#define IMsRdpClient7_get_SecuredSettings(This,ppSecuredSettings)	\
    ( (This)->lpVtbl -> get_SecuredSettings(This,ppSecuredSettings) ) 

#define IMsRdpClient7_get_AdvancedSettings(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings(This,ppAdvSettings) ) 

#define IMsRdpClient7_get_Debugger(This,ppDebugger)	\
    ( (This)->lpVtbl -> get_Debugger(This,ppDebugger) ) 

#define IMsRdpClient7_Connect(This)	\
    ( (This)->lpVtbl -> Connect(This) ) 

#define IMsRdpClient7_Disconnect(This)	\
    ( (This)->lpVtbl -> Disconnect(This) ) 

#define IMsRdpClient7_CreateVirtualChannels(This,newVal)	\
    ( (This)->lpVtbl -> CreateVirtualChannels(This,newVal) ) 

#define IMsRdpClient7_SendOnVirtualChannel(This,chanName,ChanData)	\
    ( (This)->lpVtbl -> SendOnVirtualChannel(This,chanName,ChanData) ) 


#define IMsRdpClient7_put_ColorDepth(This,pcolorDepth)	\
    ( (This)->lpVtbl -> put_ColorDepth(This,pcolorDepth) ) 

#define IMsRdpClient7_get_ColorDepth(This,pcolorDepth)	\
    ( (This)->lpVtbl -> get_ColorDepth(This,pcolorDepth) ) 

#define IMsRdpClient7_get_AdvancedSettings2(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings2(This,ppAdvSettings) ) 

#define IMsRdpClient7_get_SecuredSettings2(This,ppSecuredSettings)	\
    ( (This)->lpVtbl -> get_SecuredSettings2(This,ppSecuredSettings) ) 

#define IMsRdpClient7_get_ExtendedDisconnectReason(This,pExtendedDisconnectReason)	\
    ( (This)->lpVtbl -> get_ExtendedDisconnectReason(This,pExtendedDisconnectReason) ) 

#define IMsRdpClient7_put_FullScreen(This,pfFullScreen)	\
    ( (This)->lpVtbl -> put_FullScreen(This,pfFullScreen) ) 

#define IMsRdpClient7_get_FullScreen(This,pfFullScreen)	\
    ( (This)->lpVtbl -> get_FullScreen(This,pfFullScreen) ) 

#define IMsRdpClient7_SetVirtualChannelOptions(This,chanName,chanOptions)	\
    ( (This)->lpVtbl -> SetVirtualChannelOptions(This,chanName,chanOptions) ) 

#define IMsRdpClient7_GetVirtualChannelOptions(This,chanName,pChanOptions)	\
    ( (This)->lpVtbl -> GetVirtualChannelOptions(This,chanName,pChanOptions) ) 

#define IMsRdpClient7_RequestClose(This,pCloseStatus)	\
    ( (This)->lpVtbl -> RequestClose(This,pCloseStatus) ) 


#define IMsRdpClient7_get_AdvancedSettings3(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings3(This,ppAdvSettings) ) 

#define IMsRdpClient7_put_ConnectedStatusText(This,pConnectedStatusText)	\
    ( (This)->lpVtbl -> put_ConnectedStatusText(This,pConnectedStatusText) ) 

#define IMsRdpClient7_get_ConnectedStatusText(This,pConnectedStatusText)	\
    ( (This)->lpVtbl -> get_ConnectedStatusText(This,pConnectedStatusText) ) 


#define IMsRdpClient7_get_AdvancedSettings4(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings4(This,ppAdvSettings) ) 


#define IMsRdpClient7_get_AdvancedSettings5(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings5(This,ppAdvSettings) ) 


#define IMsRdpClient7_get_TransportSettings(This,ppXportSet)	\
    ( (This)->lpVtbl -> get_TransportSettings(This,ppXportSet) ) 

#define IMsRdpClient7_get_AdvancedSettings6(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings6(This,ppAdvSettings) ) 

#define IMsRdpClient7_GetErrorDescription(This,disconnectReason,ExtendedDisconnectReason,pBstrErrorMsg)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,disconnectReason,ExtendedDisconnectReason,pBstrErrorMsg) ) 

#define IMsRdpClient7_get_RemoteProgram(This,ppRemoteProgram)	\
    ( (This)->lpVtbl -> get_RemoteProgram(This,ppRemoteProgram) ) 

#define IMsRdpClient7_get_MsRdpClientShell(This,ppLauncher)	\
    ( (This)->lpVtbl -> get_MsRdpClientShell(This,ppLauncher) ) 


#define IMsRdpClient7_get_AdvancedSettings7(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings7(This,ppAdvSettings) ) 

#define IMsRdpClient7_get_TransportSettings2(This,ppXportSet2)	\
    ( (This)->lpVtbl -> get_TransportSettings2(This,ppXportSet2) ) 


#define IMsRdpClient7_get_AdvancedSettings8(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings8(This,ppAdvSettings) ) 

#define IMsRdpClient7_get_TransportSettings3(This,ppXportSet3)	\
    ( (This)->lpVtbl -> get_TransportSettings3(This,ppXportSet3) ) 

#define IMsRdpClient7_GetStatusText(This,statusCode,pBstrStatusText)	\
    ( (This)->lpVtbl -> GetStatusText(This,statusCode,pBstrStatusText) ) 

#define IMsRdpClient7_get_SecuredSettings3(This,ppSecuredSettings)	\
    ( (This)->lpVtbl -> get_SecuredSettings3(This,ppSecuredSettings) ) 

#define IMsRdpClient7_get_RemoteProgram2(This,ppRemoteProgram)	\
    ( (This)->lpVtbl -> get_RemoteProgram2(This,ppRemoteProgram) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMsRdpClient7_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClient8_INTERFACE_DEFINED__
#define __IMsRdpClient8_INTERFACE_DEFINED__

/* interface IMsRdpClient8 */
/* [oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClient8;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4247E044-9271-43A9-BC49-E2AD9E855D62")
    IMsRdpClient8 : public IMsRdpClient7
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SendRemoteAction( 
            /* [in] */ RemoteSessionActionType actionType) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_AdvancedSettings9( 
            /* [retval][out] */ IMsRdpClientAdvancedSettings8 **ppAdvSettings) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Reconnect( 
            /* [in] */ unsigned long ulWidth,
            /* [in] */ unsigned long ulHeight,
            /* [retval][out] */ ControlReconnectStatus *pReconnectStatus) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMsRdpClient8Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClient8 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClient8 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClient8 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClient8 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClient8 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClient8 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClient8 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Server )( 
            IMsRdpClient8 * This,
            /* [in] */ BSTR pServer);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Server )( 
            IMsRdpClient8 * This,
            /* [retval][out] */ BSTR *pServer);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Domain )( 
            IMsRdpClient8 * This,
            /* [in] */ BSTR pDomain);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Domain )( 
            IMsRdpClient8 * This,
            /* [retval][out] */ BSTR *pDomain);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_UserName )( 
            IMsRdpClient8 * This,
            /* [in] */ BSTR pUserName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UserName )( 
            IMsRdpClient8 * This,
            /* [retval][out] */ BSTR *pUserName);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisconnectedText )( 
            IMsRdpClient8 * This,
            /* [in] */ BSTR pDisconnectedText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisconnectedText )( 
            IMsRdpClient8 * This,
            /* [retval][out] */ BSTR *pDisconnectedText);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectingText )( 
            IMsRdpClient8 * This,
            /* [in] */ BSTR pConnectingText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectingText )( 
            IMsRdpClient8 * This,
            /* [retval][out] */ BSTR *pConnectingText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Connected )( 
            IMsRdpClient8 * This,
            /* [retval][out] */ short *pIsConnected);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DesktopWidth )( 
            IMsRdpClient8 * This,
            /* [in] */ long pVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DesktopWidth )( 
            IMsRdpClient8 * This,
            /* [retval][out] */ long *pVal);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DesktopHeight )( 
            IMsRdpClient8 * This,
            /* [in] */ long pVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DesktopHeight )( 
            IMsRdpClient8 * This,
            /* [retval][out] */ long *pVal);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_StartConnected )( 
            IMsRdpClient8 * This,
            /* [in] */ long pfStartConnected);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_StartConnected )( 
            IMsRdpClient8 * This,
            /* [retval][out] */ long *pfStartConnected);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HorizontalScrollBarVisible )( 
            IMsRdpClient8 * This,
            /* [retval][out] */ long *pfHScrollVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VerticalScrollBarVisible )( 
            IMsRdpClient8 * This,
            /* [retval][out] */ long *pfVScrollVisible);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreenTitle )( 
            IMsRdpClient8 * This,
            /* [in] */ BSTR rhs);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CipherStrength )( 
            IMsRdpClient8 * This,
            /* [retval][out] */ long *pCipherStrength);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IMsRdpClient8 * This,
            /* [retval][out] */ BSTR *pVersion);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettingsEnabled )( 
            IMsRdpClient8 * This,
            /* [retval][out] */ long *pSecuredSettingsEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettings )( 
            IMsRdpClient8 * This,
            /* [retval][out] */ IMsTscSecuredSettings **ppSecuredSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings )( 
            IMsRdpClient8 * This,
            /* [retval][out] */ IMsTscAdvancedSettings **ppAdvSettings);
        
        /* [hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Debugger )( 
            IMsRdpClient8 * This,
            /* [retval][out] */ IMsTscDebug **ppDebugger);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
            IMsRdpClient8 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            IMsRdpClient8 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CreateVirtualChannels )( 
            IMsRdpClient8 * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendOnVirtualChannel )( 
            IMsRdpClient8 * This,
            /* [in] */ BSTR chanName,
            /* [in] */ BSTR ChanData);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ColorDepth )( 
            IMsRdpClient8 * This,
            /* [in] */ long pcolorDepth);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ColorDepth )( 
            IMsRdpClient8 * This,
            /* [retval][out] */ long *pcolorDepth);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings2 )( 
            IMsRdpClient8 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings **ppAdvSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettings2 )( 
            IMsRdpClient8 * This,
            /* [retval][out] */ IMsRdpClientSecuredSettings **ppSecuredSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ExtendedDisconnectReason )( 
            IMsRdpClient8 * This,
            /* [retval][out] */ ExtendedDisconnectReasonCode *pExtendedDisconnectReason);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreen )( 
            IMsRdpClient8 * This,
            /* [in] */ VARIANT_BOOL pfFullScreen);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FullScreen )( 
            IMsRdpClient8 * This,
            /* [retval][out] */ VARIANT_BOOL *pfFullScreen);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetVirtualChannelOptions )( 
            IMsRdpClient8 * This,
            /* [in] */ BSTR chanName,
            /* [in] */ long chanOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetVirtualChannelOptions )( 
            IMsRdpClient8 * This,
            /* [in] */ BSTR chanName,
            /* [retval][out] */ long *pChanOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RequestClose )( 
            IMsRdpClient8 * This,
            /* [retval][out] */ ControlCloseStatus *pCloseStatus);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings3 )( 
            IMsRdpClient8 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings2 **ppAdvSettings);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectedStatusText )( 
            IMsRdpClient8 * This,
            /* [in] */ BSTR pConnectedStatusText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectedStatusText )( 
            IMsRdpClient8 * This,
            /* [retval][out] */ BSTR *pConnectedStatusText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings4 )( 
            IMsRdpClient8 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings3 **ppAdvSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings5 )( 
            IMsRdpClient8 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings4 **ppAdvSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TransportSettings )( 
            IMsRdpClient8 * This,
            /* [retval][out] */ IMsRdpClientTransportSettings **ppXportSet);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings6 )( 
            IMsRdpClient8 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings5 **ppAdvSettings);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            IMsRdpClient8 * This,
            /* [in] */ unsigned int disconnectReason,
            /* [in] */ unsigned int ExtendedDisconnectReason,
            /* [retval][out] */ BSTR *pBstrErrorMsg);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RemoteProgram )( 
            IMsRdpClient8 * This,
            /* [retval][out] */ ITSRemoteProgram **ppRemoteProgram);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MsRdpClientShell )( 
            IMsRdpClient8 * This,
            /* [retval][out] */ IMsRdpClientShell **ppLauncher);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings7 )( 
            IMsRdpClient8 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings6 **ppAdvSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TransportSettings2 )( 
            IMsRdpClient8 * This,
            /* [retval][out] */ IMsRdpClientTransportSettings2 **ppXportSet2);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings8 )( 
            IMsRdpClient8 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings7 **ppAdvSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TransportSettings3 )( 
            IMsRdpClient8 * This,
            /* [retval][out] */ IMsRdpClientTransportSettings3 **ppXportSet3);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusText )( 
            IMsRdpClient8 * This,
            /* [in] */ unsigned int statusCode,
            /* [retval][out] */ BSTR *pBstrStatusText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettings3 )( 
            IMsRdpClient8 * This,
            /* [retval][out] */ IMsRdpClientSecuredSettings2 **ppSecuredSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RemoteProgram2 )( 
            IMsRdpClient8 * This,
            /* [retval][out] */ ITSRemoteProgram2 **ppRemoteProgram);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendRemoteAction )( 
            IMsRdpClient8 * This,
            /* [in] */ RemoteSessionActionType actionType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings9 )( 
            IMsRdpClient8 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings8 **ppAdvSettings);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Reconnect )( 
            IMsRdpClient8 * This,
            /* [in] */ unsigned long ulWidth,
            /* [in] */ unsigned long ulHeight,
            /* [retval][out] */ ControlReconnectStatus *pReconnectStatus);
        
        END_INTERFACE
    } IMsRdpClient8Vtbl;

    interface IMsRdpClient8
    {
        CONST_VTBL struct IMsRdpClient8Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClient8_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClient8_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClient8_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClient8_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClient8_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClient8_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClient8_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 



#define IMsRdpClient8_put_Server(This,pServer)	\
    ( (This)->lpVtbl -> put_Server(This,pServer) ) 

#define IMsRdpClient8_get_Server(This,pServer)	\
    ( (This)->lpVtbl -> get_Server(This,pServer) ) 

#define IMsRdpClient8_put_Domain(This,pDomain)	\
    ( (This)->lpVtbl -> put_Domain(This,pDomain) ) 

#define IMsRdpClient8_get_Domain(This,pDomain)	\
    ( (This)->lpVtbl -> get_Domain(This,pDomain) ) 

#define IMsRdpClient8_put_UserName(This,pUserName)	\
    ( (This)->lpVtbl -> put_UserName(This,pUserName) ) 

#define IMsRdpClient8_get_UserName(This,pUserName)	\
    ( (This)->lpVtbl -> get_UserName(This,pUserName) ) 

#define IMsRdpClient8_put_DisconnectedText(This,pDisconnectedText)	\
    ( (This)->lpVtbl -> put_DisconnectedText(This,pDisconnectedText) ) 

#define IMsRdpClient8_get_DisconnectedText(This,pDisconnectedText)	\
    ( (This)->lpVtbl -> get_DisconnectedText(This,pDisconnectedText) ) 

#define IMsRdpClient8_put_ConnectingText(This,pConnectingText)	\
    ( (This)->lpVtbl -> put_ConnectingText(This,pConnectingText) ) 

#define IMsRdpClient8_get_ConnectingText(This,pConnectingText)	\
    ( (This)->lpVtbl -> get_ConnectingText(This,pConnectingText) ) 

#define IMsRdpClient8_get_Connected(This,pIsConnected)	\
    ( (This)->lpVtbl -> get_Connected(This,pIsConnected) ) 

#define IMsRdpClient8_put_DesktopWidth(This,pVal)	\
    ( (This)->lpVtbl -> put_DesktopWidth(This,pVal) ) 

#define IMsRdpClient8_get_DesktopWidth(This,pVal)	\
    ( (This)->lpVtbl -> get_DesktopWidth(This,pVal) ) 

#define IMsRdpClient8_put_DesktopHeight(This,pVal)	\
    ( (This)->lpVtbl -> put_DesktopHeight(This,pVal) ) 

#define IMsRdpClient8_get_DesktopHeight(This,pVal)	\
    ( (This)->lpVtbl -> get_DesktopHeight(This,pVal) ) 

#define IMsRdpClient8_put_StartConnected(This,pfStartConnected)	\
    ( (This)->lpVtbl -> put_StartConnected(This,pfStartConnected) ) 

#define IMsRdpClient8_get_StartConnected(This,pfStartConnected)	\
    ( (This)->lpVtbl -> get_StartConnected(This,pfStartConnected) ) 

#define IMsRdpClient8_get_HorizontalScrollBarVisible(This,pfHScrollVisible)	\
    ( (This)->lpVtbl -> get_HorizontalScrollBarVisible(This,pfHScrollVisible) ) 

#define IMsRdpClient8_get_VerticalScrollBarVisible(This,pfVScrollVisible)	\
    ( (This)->lpVtbl -> get_VerticalScrollBarVisible(This,pfVScrollVisible) ) 

#define IMsRdpClient8_put_FullScreenTitle(This,rhs)	\
    ( (This)->lpVtbl -> put_FullScreenTitle(This,rhs) ) 

#define IMsRdpClient8_get_CipherStrength(This,pCipherStrength)	\
    ( (This)->lpVtbl -> get_CipherStrength(This,pCipherStrength) ) 

#define IMsRdpClient8_get_Version(This,pVersion)	\
    ( (This)->lpVtbl -> get_Version(This,pVersion) ) 

#define IMsRdpClient8_get_SecuredSettingsEnabled(This,pSecuredSettingsEnabled)	\
    ( (This)->lpVtbl -> get_SecuredSettingsEnabled(This,pSecuredSettingsEnabled) ) 

#define IMsRdpClient8_get_SecuredSettings(This,ppSecuredSettings)	\
    ( (This)->lpVtbl -> get_SecuredSettings(This,ppSecuredSettings) ) 

#define IMsRdpClient8_get_AdvancedSettings(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings(This,ppAdvSettings) ) 

#define IMsRdpClient8_get_Debugger(This,ppDebugger)	\
    ( (This)->lpVtbl -> get_Debugger(This,ppDebugger) ) 

#define IMsRdpClient8_Connect(This)	\
    ( (This)->lpVtbl -> Connect(This) ) 

#define IMsRdpClient8_Disconnect(This)	\
    ( (This)->lpVtbl -> Disconnect(This) ) 

#define IMsRdpClient8_CreateVirtualChannels(This,newVal)	\
    ( (This)->lpVtbl -> CreateVirtualChannels(This,newVal) ) 

#define IMsRdpClient8_SendOnVirtualChannel(This,chanName,ChanData)	\
    ( (This)->lpVtbl -> SendOnVirtualChannel(This,chanName,ChanData) ) 


#define IMsRdpClient8_put_ColorDepth(This,pcolorDepth)	\
    ( (This)->lpVtbl -> put_ColorDepth(This,pcolorDepth) ) 

#define IMsRdpClient8_get_ColorDepth(This,pcolorDepth)	\
    ( (This)->lpVtbl -> get_ColorDepth(This,pcolorDepth) ) 

#define IMsRdpClient8_get_AdvancedSettings2(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings2(This,ppAdvSettings) ) 

#define IMsRdpClient8_get_SecuredSettings2(This,ppSecuredSettings)	\
    ( (This)->lpVtbl -> get_SecuredSettings2(This,ppSecuredSettings) ) 

#define IMsRdpClient8_get_ExtendedDisconnectReason(This,pExtendedDisconnectReason)	\
    ( (This)->lpVtbl -> get_ExtendedDisconnectReason(This,pExtendedDisconnectReason) ) 

#define IMsRdpClient8_put_FullScreen(This,pfFullScreen)	\
    ( (This)->lpVtbl -> put_FullScreen(This,pfFullScreen) ) 

#define IMsRdpClient8_get_FullScreen(This,pfFullScreen)	\
    ( (This)->lpVtbl -> get_FullScreen(This,pfFullScreen) ) 

#define IMsRdpClient8_SetVirtualChannelOptions(This,chanName,chanOptions)	\
    ( (This)->lpVtbl -> SetVirtualChannelOptions(This,chanName,chanOptions) ) 

#define IMsRdpClient8_GetVirtualChannelOptions(This,chanName,pChanOptions)	\
    ( (This)->lpVtbl -> GetVirtualChannelOptions(This,chanName,pChanOptions) ) 

#define IMsRdpClient8_RequestClose(This,pCloseStatus)	\
    ( (This)->lpVtbl -> RequestClose(This,pCloseStatus) ) 


#define IMsRdpClient8_get_AdvancedSettings3(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings3(This,ppAdvSettings) ) 

#define IMsRdpClient8_put_ConnectedStatusText(This,pConnectedStatusText)	\
    ( (This)->lpVtbl -> put_ConnectedStatusText(This,pConnectedStatusText) ) 

#define IMsRdpClient8_get_ConnectedStatusText(This,pConnectedStatusText)	\
    ( (This)->lpVtbl -> get_ConnectedStatusText(This,pConnectedStatusText) ) 


#define IMsRdpClient8_get_AdvancedSettings4(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings4(This,ppAdvSettings) ) 


#define IMsRdpClient8_get_AdvancedSettings5(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings5(This,ppAdvSettings) ) 


#define IMsRdpClient8_get_TransportSettings(This,ppXportSet)	\
    ( (This)->lpVtbl -> get_TransportSettings(This,ppXportSet) ) 

#define IMsRdpClient8_get_AdvancedSettings6(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings6(This,ppAdvSettings) ) 

#define IMsRdpClient8_GetErrorDescription(This,disconnectReason,ExtendedDisconnectReason,pBstrErrorMsg)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,disconnectReason,ExtendedDisconnectReason,pBstrErrorMsg) ) 

#define IMsRdpClient8_get_RemoteProgram(This,ppRemoteProgram)	\
    ( (This)->lpVtbl -> get_RemoteProgram(This,ppRemoteProgram) ) 

#define IMsRdpClient8_get_MsRdpClientShell(This,ppLauncher)	\
    ( (This)->lpVtbl -> get_MsRdpClientShell(This,ppLauncher) ) 


#define IMsRdpClient8_get_AdvancedSettings7(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings7(This,ppAdvSettings) ) 

#define IMsRdpClient8_get_TransportSettings2(This,ppXportSet2)	\
    ( (This)->lpVtbl -> get_TransportSettings2(This,ppXportSet2) ) 


#define IMsRdpClient8_get_AdvancedSettings8(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings8(This,ppAdvSettings) ) 

#define IMsRdpClient8_get_TransportSettings3(This,ppXportSet3)	\
    ( (This)->lpVtbl -> get_TransportSettings3(This,ppXportSet3) ) 

#define IMsRdpClient8_GetStatusText(This,statusCode,pBstrStatusText)	\
    ( (This)->lpVtbl -> GetStatusText(This,statusCode,pBstrStatusText) ) 

#define IMsRdpClient8_get_SecuredSettings3(This,ppSecuredSettings)	\
    ( (This)->lpVtbl -> get_SecuredSettings3(This,ppSecuredSettings) ) 

#define IMsRdpClient8_get_RemoteProgram2(This,ppRemoteProgram)	\
    ( (This)->lpVtbl -> get_RemoteProgram2(This,ppRemoteProgram) ) 


#define IMsRdpClient8_SendRemoteAction(This,actionType)	\
    ( (This)->lpVtbl -> SendRemoteAction(This,actionType) ) 

#define IMsRdpClient8_get_AdvancedSettings9(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings9(This,ppAdvSettings) ) 

#define IMsRdpClient8_Reconnect(This,ulWidth,ulHeight,pReconnectStatus)	\
    ( (This)->lpVtbl -> Reconnect(This,ulWidth,ulHeight,pReconnectStatus) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMsRdpClient8_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClient9_INTERFACE_DEFINED__
#define __IMsRdpClient9_INTERFACE_DEFINED__

/* interface IMsRdpClient9 */
/* [oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClient9;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("28904001-04B6-436C-A55B-0AF1A0883DC9")
    IMsRdpClient9 : public IMsRdpClient8
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TransportSettings4( 
            /* [retval][out] */ IMsRdpClientTransportSettings4 **ppXportSet4) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SyncSessionDisplaySettings( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE UpdateSessionDisplaySettings( 
            /* [in] */ unsigned long ulDesktopWidth,
            /* [in] */ unsigned long ulDesktopHeight,
            /* [in] */ unsigned long ulPhysicalWidth,
            /* [in] */ unsigned long ulPhysicalHeight,
            /* [in] */ unsigned long ulOrientation,
            /* [in] */ unsigned long ulDesktopScaleFactor,
            /* [in] */ unsigned long ulDeviceScaleFactor) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE attachEvent( 
            /* [in] */ BSTR eventName,
            /* [in] */ IDispatch *callback) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE detachEvent( 
            /* [in] */ BSTR eventName,
            /* [in] */ IDispatch *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMsRdpClient9Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClient9 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClient9 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClient9 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClient9 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClient9 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClient9 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClient9 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Server )( 
            IMsRdpClient9 * This,
            /* [in] */ BSTR pServer);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Server )( 
            IMsRdpClient9 * This,
            /* [retval][out] */ BSTR *pServer);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Domain )( 
            IMsRdpClient9 * This,
            /* [in] */ BSTR pDomain);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Domain )( 
            IMsRdpClient9 * This,
            /* [retval][out] */ BSTR *pDomain);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_UserName )( 
            IMsRdpClient9 * This,
            /* [in] */ BSTR pUserName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UserName )( 
            IMsRdpClient9 * This,
            /* [retval][out] */ BSTR *pUserName);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisconnectedText )( 
            IMsRdpClient9 * This,
            /* [in] */ BSTR pDisconnectedText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisconnectedText )( 
            IMsRdpClient9 * This,
            /* [retval][out] */ BSTR *pDisconnectedText);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectingText )( 
            IMsRdpClient9 * This,
            /* [in] */ BSTR pConnectingText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectingText )( 
            IMsRdpClient9 * This,
            /* [retval][out] */ BSTR *pConnectingText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Connected )( 
            IMsRdpClient9 * This,
            /* [retval][out] */ short *pIsConnected);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DesktopWidth )( 
            IMsRdpClient9 * This,
            /* [in] */ long pVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DesktopWidth )( 
            IMsRdpClient9 * This,
            /* [retval][out] */ long *pVal);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DesktopHeight )( 
            IMsRdpClient9 * This,
            /* [in] */ long pVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DesktopHeight )( 
            IMsRdpClient9 * This,
            /* [retval][out] */ long *pVal);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_StartConnected )( 
            IMsRdpClient9 * This,
            /* [in] */ long pfStartConnected);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_StartConnected )( 
            IMsRdpClient9 * This,
            /* [retval][out] */ long *pfStartConnected);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HorizontalScrollBarVisible )( 
            IMsRdpClient9 * This,
            /* [retval][out] */ long *pfHScrollVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VerticalScrollBarVisible )( 
            IMsRdpClient9 * This,
            /* [retval][out] */ long *pfVScrollVisible);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreenTitle )( 
            IMsRdpClient9 * This,
            /* [in] */ BSTR rhs);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CipherStrength )( 
            IMsRdpClient9 * This,
            /* [retval][out] */ long *pCipherStrength);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IMsRdpClient9 * This,
            /* [retval][out] */ BSTR *pVersion);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettingsEnabled )( 
            IMsRdpClient9 * This,
            /* [retval][out] */ long *pSecuredSettingsEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettings )( 
            IMsRdpClient9 * This,
            /* [retval][out] */ IMsTscSecuredSettings **ppSecuredSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings )( 
            IMsRdpClient9 * This,
            /* [retval][out] */ IMsTscAdvancedSettings **ppAdvSettings);
        
        /* [hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Debugger )( 
            IMsRdpClient9 * This,
            /* [retval][out] */ IMsTscDebug **ppDebugger);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
            IMsRdpClient9 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            IMsRdpClient9 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CreateVirtualChannels )( 
            IMsRdpClient9 * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendOnVirtualChannel )( 
            IMsRdpClient9 * This,
            /* [in] */ BSTR chanName,
            /* [in] */ BSTR ChanData);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ColorDepth )( 
            IMsRdpClient9 * This,
            /* [in] */ long pcolorDepth);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ColorDepth )( 
            IMsRdpClient9 * This,
            /* [retval][out] */ long *pcolorDepth);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings2 )( 
            IMsRdpClient9 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings **ppAdvSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettings2 )( 
            IMsRdpClient9 * This,
            /* [retval][out] */ IMsRdpClientSecuredSettings **ppSecuredSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ExtendedDisconnectReason )( 
            IMsRdpClient9 * This,
            /* [retval][out] */ ExtendedDisconnectReasonCode *pExtendedDisconnectReason);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreen )( 
            IMsRdpClient9 * This,
            /* [in] */ VARIANT_BOOL pfFullScreen);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FullScreen )( 
            IMsRdpClient9 * This,
            /* [retval][out] */ VARIANT_BOOL *pfFullScreen);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetVirtualChannelOptions )( 
            IMsRdpClient9 * This,
            /* [in] */ BSTR chanName,
            /* [in] */ long chanOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetVirtualChannelOptions )( 
            IMsRdpClient9 * This,
            /* [in] */ BSTR chanName,
            /* [retval][out] */ long *pChanOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RequestClose )( 
            IMsRdpClient9 * This,
            /* [retval][out] */ ControlCloseStatus *pCloseStatus);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings3 )( 
            IMsRdpClient9 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings2 **ppAdvSettings);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectedStatusText )( 
            IMsRdpClient9 * This,
            /* [in] */ BSTR pConnectedStatusText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectedStatusText )( 
            IMsRdpClient9 * This,
            /* [retval][out] */ BSTR *pConnectedStatusText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings4 )( 
            IMsRdpClient9 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings3 **ppAdvSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings5 )( 
            IMsRdpClient9 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings4 **ppAdvSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TransportSettings )( 
            IMsRdpClient9 * This,
            /* [retval][out] */ IMsRdpClientTransportSettings **ppXportSet);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings6 )( 
            IMsRdpClient9 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings5 **ppAdvSettings);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            IMsRdpClient9 * This,
            /* [in] */ unsigned int disconnectReason,
            /* [in] */ unsigned int ExtendedDisconnectReason,
            /* [retval][out] */ BSTR *pBstrErrorMsg);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RemoteProgram )( 
            IMsRdpClient9 * This,
            /* [retval][out] */ ITSRemoteProgram **ppRemoteProgram);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MsRdpClientShell )( 
            IMsRdpClient9 * This,
            /* [retval][out] */ IMsRdpClientShell **ppLauncher);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings7 )( 
            IMsRdpClient9 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings6 **ppAdvSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TransportSettings2 )( 
            IMsRdpClient9 * This,
            /* [retval][out] */ IMsRdpClientTransportSettings2 **ppXportSet2);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings8 )( 
            IMsRdpClient9 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings7 **ppAdvSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TransportSettings3 )( 
            IMsRdpClient9 * This,
            /* [retval][out] */ IMsRdpClientTransportSettings3 **ppXportSet3);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusText )( 
            IMsRdpClient9 * This,
            /* [in] */ unsigned int statusCode,
            /* [retval][out] */ BSTR *pBstrStatusText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettings3 )( 
            IMsRdpClient9 * This,
            /* [retval][out] */ IMsRdpClientSecuredSettings2 **ppSecuredSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RemoteProgram2 )( 
            IMsRdpClient9 * This,
            /* [retval][out] */ ITSRemoteProgram2 **ppRemoteProgram);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendRemoteAction )( 
            IMsRdpClient9 * This,
            /* [in] */ RemoteSessionActionType actionType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings9 )( 
            IMsRdpClient9 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings8 **ppAdvSettings);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Reconnect )( 
            IMsRdpClient9 * This,
            /* [in] */ unsigned long ulWidth,
            /* [in] */ unsigned long ulHeight,
            /* [retval][out] */ ControlReconnectStatus *pReconnectStatus);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TransportSettings4 )( 
            IMsRdpClient9 * This,
            /* [retval][out] */ IMsRdpClientTransportSettings4 **ppXportSet4);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SyncSessionDisplaySettings )( 
            IMsRdpClient9 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *UpdateSessionDisplaySettings )( 
            IMsRdpClient9 * This,
            /* [in] */ unsigned long ulDesktopWidth,
            /* [in] */ unsigned long ulDesktopHeight,
            /* [in] */ unsigned long ulPhysicalWidth,
            /* [in] */ unsigned long ulPhysicalHeight,
            /* [in] */ unsigned long ulOrientation,
            /* [in] */ unsigned long ulDesktopScaleFactor,
            /* [in] */ unsigned long ulDeviceScaleFactor);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *attachEvent )( 
            IMsRdpClient9 * This,
            /* [in] */ BSTR eventName,
            /* [in] */ IDispatch *callback);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *detachEvent )( 
            IMsRdpClient9 * This,
            /* [in] */ BSTR eventName,
            /* [in] */ IDispatch *callback);
        
        END_INTERFACE
    } IMsRdpClient9Vtbl;

    interface IMsRdpClient9
    {
        CONST_VTBL struct IMsRdpClient9Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClient9_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClient9_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClient9_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClient9_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClient9_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClient9_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClient9_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 



#define IMsRdpClient9_put_Server(This,pServer)	\
    ( (This)->lpVtbl -> put_Server(This,pServer) ) 

#define IMsRdpClient9_get_Server(This,pServer)	\
    ( (This)->lpVtbl -> get_Server(This,pServer) ) 

#define IMsRdpClient9_put_Domain(This,pDomain)	\
    ( (This)->lpVtbl -> put_Domain(This,pDomain) ) 

#define IMsRdpClient9_get_Domain(This,pDomain)	\
    ( (This)->lpVtbl -> get_Domain(This,pDomain) ) 

#define IMsRdpClient9_put_UserName(This,pUserName)	\
    ( (This)->lpVtbl -> put_UserName(This,pUserName) ) 

#define IMsRdpClient9_get_UserName(This,pUserName)	\
    ( (This)->lpVtbl -> get_UserName(This,pUserName) ) 

#define IMsRdpClient9_put_DisconnectedText(This,pDisconnectedText)	\
    ( (This)->lpVtbl -> put_DisconnectedText(This,pDisconnectedText) ) 

#define IMsRdpClient9_get_DisconnectedText(This,pDisconnectedText)	\
    ( (This)->lpVtbl -> get_DisconnectedText(This,pDisconnectedText) ) 

#define IMsRdpClient9_put_ConnectingText(This,pConnectingText)	\
    ( (This)->lpVtbl -> put_ConnectingText(This,pConnectingText) ) 

#define IMsRdpClient9_get_ConnectingText(This,pConnectingText)	\
    ( (This)->lpVtbl -> get_ConnectingText(This,pConnectingText) ) 

#define IMsRdpClient9_get_Connected(This,pIsConnected)	\
    ( (This)->lpVtbl -> get_Connected(This,pIsConnected) ) 

#define IMsRdpClient9_put_DesktopWidth(This,pVal)	\
    ( (This)->lpVtbl -> put_DesktopWidth(This,pVal) ) 

#define IMsRdpClient9_get_DesktopWidth(This,pVal)	\
    ( (This)->lpVtbl -> get_DesktopWidth(This,pVal) ) 

#define IMsRdpClient9_put_DesktopHeight(This,pVal)	\
    ( (This)->lpVtbl -> put_DesktopHeight(This,pVal) ) 

#define IMsRdpClient9_get_DesktopHeight(This,pVal)	\
    ( (This)->lpVtbl -> get_DesktopHeight(This,pVal) ) 

#define IMsRdpClient9_put_StartConnected(This,pfStartConnected)	\
    ( (This)->lpVtbl -> put_StartConnected(This,pfStartConnected) ) 

#define IMsRdpClient9_get_StartConnected(This,pfStartConnected)	\
    ( (This)->lpVtbl -> get_StartConnected(This,pfStartConnected) ) 

#define IMsRdpClient9_get_HorizontalScrollBarVisible(This,pfHScrollVisible)	\
    ( (This)->lpVtbl -> get_HorizontalScrollBarVisible(This,pfHScrollVisible) ) 

#define IMsRdpClient9_get_VerticalScrollBarVisible(This,pfVScrollVisible)	\
    ( (This)->lpVtbl -> get_VerticalScrollBarVisible(This,pfVScrollVisible) ) 

#define IMsRdpClient9_put_FullScreenTitle(This,rhs)	\
    ( (This)->lpVtbl -> put_FullScreenTitle(This,rhs) ) 

#define IMsRdpClient9_get_CipherStrength(This,pCipherStrength)	\
    ( (This)->lpVtbl -> get_CipherStrength(This,pCipherStrength) ) 

#define IMsRdpClient9_get_Version(This,pVersion)	\
    ( (This)->lpVtbl -> get_Version(This,pVersion) ) 

#define IMsRdpClient9_get_SecuredSettingsEnabled(This,pSecuredSettingsEnabled)	\
    ( (This)->lpVtbl -> get_SecuredSettingsEnabled(This,pSecuredSettingsEnabled) ) 

#define IMsRdpClient9_get_SecuredSettings(This,ppSecuredSettings)	\
    ( (This)->lpVtbl -> get_SecuredSettings(This,ppSecuredSettings) ) 

#define IMsRdpClient9_get_AdvancedSettings(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings(This,ppAdvSettings) ) 

#define IMsRdpClient9_get_Debugger(This,ppDebugger)	\
    ( (This)->lpVtbl -> get_Debugger(This,ppDebugger) ) 

#define IMsRdpClient9_Connect(This)	\
    ( (This)->lpVtbl -> Connect(This) ) 

#define IMsRdpClient9_Disconnect(This)	\
    ( (This)->lpVtbl -> Disconnect(This) ) 

#define IMsRdpClient9_CreateVirtualChannels(This,newVal)	\
    ( (This)->lpVtbl -> CreateVirtualChannels(This,newVal) ) 

#define IMsRdpClient9_SendOnVirtualChannel(This,chanName,ChanData)	\
    ( (This)->lpVtbl -> SendOnVirtualChannel(This,chanName,ChanData) ) 


#define IMsRdpClient9_put_ColorDepth(This,pcolorDepth)	\
    ( (This)->lpVtbl -> put_ColorDepth(This,pcolorDepth) ) 

#define IMsRdpClient9_get_ColorDepth(This,pcolorDepth)	\
    ( (This)->lpVtbl -> get_ColorDepth(This,pcolorDepth) ) 

#define IMsRdpClient9_get_AdvancedSettings2(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings2(This,ppAdvSettings) ) 

#define IMsRdpClient9_get_SecuredSettings2(This,ppSecuredSettings)	\
    ( (This)->lpVtbl -> get_SecuredSettings2(This,ppSecuredSettings) ) 

#define IMsRdpClient9_get_ExtendedDisconnectReason(This,pExtendedDisconnectReason)	\
    ( (This)->lpVtbl -> get_ExtendedDisconnectReason(This,pExtendedDisconnectReason) ) 

#define IMsRdpClient9_put_FullScreen(This,pfFullScreen)	\
    ( (This)->lpVtbl -> put_FullScreen(This,pfFullScreen) ) 

#define IMsRdpClient9_get_FullScreen(This,pfFullScreen)	\
    ( (This)->lpVtbl -> get_FullScreen(This,pfFullScreen) ) 

#define IMsRdpClient9_SetVirtualChannelOptions(This,chanName,chanOptions)	\
    ( (This)->lpVtbl -> SetVirtualChannelOptions(This,chanName,chanOptions) ) 

#define IMsRdpClient9_GetVirtualChannelOptions(This,chanName,pChanOptions)	\
    ( (This)->lpVtbl -> GetVirtualChannelOptions(This,chanName,pChanOptions) ) 

#define IMsRdpClient9_RequestClose(This,pCloseStatus)	\
    ( (This)->lpVtbl -> RequestClose(This,pCloseStatus) ) 


#define IMsRdpClient9_get_AdvancedSettings3(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings3(This,ppAdvSettings) ) 

#define IMsRdpClient9_put_ConnectedStatusText(This,pConnectedStatusText)	\
    ( (This)->lpVtbl -> put_ConnectedStatusText(This,pConnectedStatusText) ) 

#define IMsRdpClient9_get_ConnectedStatusText(This,pConnectedStatusText)	\
    ( (This)->lpVtbl -> get_ConnectedStatusText(This,pConnectedStatusText) ) 


#define IMsRdpClient9_get_AdvancedSettings4(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings4(This,ppAdvSettings) ) 


#define IMsRdpClient9_get_AdvancedSettings5(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings5(This,ppAdvSettings) ) 


#define IMsRdpClient9_get_TransportSettings(This,ppXportSet)	\
    ( (This)->lpVtbl -> get_TransportSettings(This,ppXportSet) ) 

#define IMsRdpClient9_get_AdvancedSettings6(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings6(This,ppAdvSettings) ) 

#define IMsRdpClient9_GetErrorDescription(This,disconnectReason,ExtendedDisconnectReason,pBstrErrorMsg)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,disconnectReason,ExtendedDisconnectReason,pBstrErrorMsg) ) 

#define IMsRdpClient9_get_RemoteProgram(This,ppRemoteProgram)	\
    ( (This)->lpVtbl -> get_RemoteProgram(This,ppRemoteProgram) ) 

#define IMsRdpClient9_get_MsRdpClientShell(This,ppLauncher)	\
    ( (This)->lpVtbl -> get_MsRdpClientShell(This,ppLauncher) ) 


#define IMsRdpClient9_get_AdvancedSettings7(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings7(This,ppAdvSettings) ) 

#define IMsRdpClient9_get_TransportSettings2(This,ppXportSet2)	\
    ( (This)->lpVtbl -> get_TransportSettings2(This,ppXportSet2) ) 


#define IMsRdpClient9_get_AdvancedSettings8(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings8(This,ppAdvSettings) ) 

#define IMsRdpClient9_get_TransportSettings3(This,ppXportSet3)	\
    ( (This)->lpVtbl -> get_TransportSettings3(This,ppXportSet3) ) 

#define IMsRdpClient9_GetStatusText(This,statusCode,pBstrStatusText)	\
    ( (This)->lpVtbl -> GetStatusText(This,statusCode,pBstrStatusText) ) 

#define IMsRdpClient9_get_SecuredSettings3(This,ppSecuredSettings)	\
    ( (This)->lpVtbl -> get_SecuredSettings3(This,ppSecuredSettings) ) 

#define IMsRdpClient9_get_RemoteProgram2(This,ppRemoteProgram)	\
    ( (This)->lpVtbl -> get_RemoteProgram2(This,ppRemoteProgram) ) 


#define IMsRdpClient9_SendRemoteAction(This,actionType)	\
    ( (This)->lpVtbl -> SendRemoteAction(This,actionType) ) 

#define IMsRdpClient9_get_AdvancedSettings9(This,ppAdvSettings)	\
    ( (This)->lpVtbl -> get_AdvancedSettings9(This,ppAdvSettings) ) 

#define IMsRdpClient9_Reconnect(This,ulWidth,ulHeight,pReconnectStatus)	\
    ( (This)->lpVtbl -> Reconnect(This,ulWidth,ulHeight,pReconnectStatus) ) 


#define IMsRdpClient9_get_TransportSettings4(This,ppXportSet4)	\
    ( (This)->lpVtbl -> get_TransportSettings4(This,ppXportSet4) ) 

#define IMsRdpClient9_SyncSessionDisplaySettings(This)	\
    ( (This)->lpVtbl -> SyncSessionDisplaySettings(This) ) 

#define IMsRdpClient9_UpdateSessionDisplaySettings(This,ulDesktopWidth,ulDesktopHeight,ulPhysicalWidth,ulPhysicalHeight,ulOrientation,ulDesktopScaleFactor,ulDeviceScaleFactor)	\
    ( (This)->lpVtbl -> UpdateSessionDisplaySettings(This,ulDesktopWidth,ulDesktopHeight,ulPhysicalWidth,ulPhysicalHeight,ulOrientation,ulDesktopScaleFactor,ulDeviceScaleFactor) ) 

#define IMsRdpClient9_attachEvent(This,eventName,callback)	\
    ( (This)->lpVtbl -> attachEvent(This,eventName,callback) ) 

#define IMsRdpClient9_detachEvent(This,eventName,callback)	\
    ( (This)->lpVtbl -> detachEvent(This,eventName,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMsRdpClient9_INTERFACE_DEFINED__ */


#ifndef __IMsTscAxEvents_DISPINTERFACE_DEFINED__
#define __IMsTscAxEvents_DISPINTERFACE_DEFINED__

/* dispinterface IMsTscAxEvents */
/* [uuid] */ 


EXTERN_C const IID DIID_IMsTscAxEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("336D5562-EFA8-482E-8CB3-C5C0FC7A7DB6")
    IMsTscAxEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IMsTscAxEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsTscAxEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsTscAxEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsTscAxEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsTscAxEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsTscAxEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsTscAxEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsTscAxEvents * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IMsTscAxEventsVtbl;

    interface IMsTscAxEvents
    {
        CONST_VTBL struct IMsTscAxEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsTscAxEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsTscAxEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsTscAxEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsTscAxEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsTscAxEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsTscAxEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsTscAxEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IMsTscAxEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_FreeRdpActivex;

#ifdef __cplusplus

class DECLSPEC_UUID("49052C41-EB70-464F-BA50-8AB2FDB0139B")
FreeRdpActivex;
#endif
#endif /* __FreeRdpActivex_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


