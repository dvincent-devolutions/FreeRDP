// dllmain.h : Declaration of module class.

class CFreeRdpAxModule : public ATL::CAtlDllModuleT< CFreeRdpAxModule >
{
public :
	DECLARE_LIBID(LIBID_FreeRdpAxLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_FREERDPAX, "{8E225AD2-873B-4031-A114-3D6A252CB908}")
};

extern class CFreeRdpAxModule _AtlModule;
