// dllmain.cpp : Implementation of DllMain.

#include "stdafx.h"
#include "resource.h"
#include "FreeRdpAx_i.h"
#include "dllmain.h"

CFreeRdpAxModule _AtlModule;
HINSTANCE hModuleInstance;

// DLL Entry Point
extern "C" BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
	hModuleInstance = hInstance;
	return _AtlModule.DllMain(dwReason, lpReserved); 
}
