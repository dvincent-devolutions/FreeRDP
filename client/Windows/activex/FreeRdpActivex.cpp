// FreeRdpActivex.cpp : Implementation of CFreeRdpActivexApp and DLL registration.

#include "stdafx.h"
#include "FreeRdpActivex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CFreeRdpActivexApp theApp;

const GUID CDECL _tlid = { 0x1B209E0F, 0x1D4F, 0x4A97, { 0xBB, 0x6B, 0x24, 0xCF, 0x33, 0x5E, 0xB8, 0xFD } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CFreeRdpActivexApp::InitInstance - DLL initialization

BOOL CFreeRdpActivexApp::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO: Add your own module initialization code here.
	}

	return bInit;
}



// CFreeRdpActivexApp::ExitInstance - DLL termination

int CFreeRdpActivexApp::ExitInstance()
{
	// TODO: Add your own module termination code here.

	return COleControlModule::ExitInstance();
}



// DllRegisterServer - Adds entries to the system registry

STDAPI DllRegisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}



// DllUnregisterServer - Removes entries from the system registry

STDAPI DllUnregisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}
