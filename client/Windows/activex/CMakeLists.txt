# FreeRDP: A Remote Desktop Protocol Implementation
# FreeRDP Windows cmake build script
#
# Copyright 2012 Marc-Andre Moreau <marcandre.moreau@gmail.com>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

set(MODULE_NAME "freerdpax")
set(MODULE_PREFIX "FREERDP_CLIENT_WINDOWS")

include_directories(..)

set(${MODULE_PREFIX}_SRCS
	FreeRdpAx_i.c
	_IFreeRdpCtrlEvents_CP.h
	dllmain.h
	FreeRdpCtrl.h
	IMsTscAxEvents_CP.h
	stdafx.h
	targetver.h
	dllMain.cpp
	FreeRdpAx.cpp
	FreeRdpCtrl.cpp
	IMsRdpClient.cpp
	IMsRdpClientAdvancedSettings.cpp
	IMsRdpClientNonScriptable.cpp
	IMsRdpClientSecuredSettings.cpp
	IMsRdpClientShell.cpp
	IMsRdpClientTransportSettings.cpp
	IMsRdpDevice.cpp
	IMsRdpDeviceCollection.cpp
	IMsRdpDrive.cpp
	IMsRdpDriveCollection.cpp
	IMsRdpPreferredRedirectionInfo.cpp
	IMsTscAxEvents.cpp
	IMsTscDebug.cpp
	ITsRemoteProgram.cpp
	FreeRdpAx.def
	FreeRdpAx.rc
	FreeRdpAx.rgs
	FreeRdpCtrl.rgs)

set(INTERFACE_OUTPUTS FreeRdpAx_i.c FreeRdpAx_i.h FreeRdpAx.tlb)

# On windows create dll version information.
# Vendor, product and year are already set in top level CMakeLists.txt
if (WIN32)
  set (RC_VERSION_MAJOR ${FREERDP_VERSION_MAJOR})
  set (RC_VERSION_MINOR ${FREERDP_VERSION_MINOR})
  set (RC_VERSION_BUILD ${FREERDP_VERSION_REVISION})
  set (RC_VERSION_FILE "${MODULE_NAME}${CMAKE_EXECUTABLE_SUFFIX}" )

  configure_file(
    ${CMAKE_SOURCE_DIR}/cmake/WindowsDLLVersion.rc.in
    ${CMAKE_CURRENT_BINARY_DIR}/version.rc
    @ONLY)

  set ( ${MODULE_PREFIX}_SRCS ${${MODULE_PREFIX}_SRCS} ${CMAKE_CURRENT_BINARY_DIR}/version.rc)
endif()

add_custom_command(OUTPUT ${INTERFACE_OUTPUTS}
		DEPENDS FreeRdpAx.idl
		COMMAND midl /env win32 /iid "FreeRdpAx_i.c" /h "FreeRdpAx_i.h" /W1 /char signed /tlb FreeRdpAx.tlb /robust /nologo FreeRdpAx.idl)

add_compile_options(/EHsc)
add_definitions(-D_UNICODE -DUNICODE)
add_library(${MODULE_NAME} MODULE ${${MODULE_PREFIX}_SRCS})
set_source_files_properties(${INTERFACE_OUTPUTS} PROPERTIES GENERATED 1)

add_custom_target(interfaces DEPENDS ${INTERFACE_OUTPUTS})
add_dependencies(${MODULE_NAME} interfaces)

list(APPEND ${MODULE_PREFIX}_LIBS wfreerdp-client)
list(APPEND ${MODULE_PREFIX}_LIBS version)

target_link_libraries(${MODULE_NAME} ${${MODULE_PREFIX}_LIBS})

if(VENDOR MATCHES "FreeRDP")
    install(TARGETS ${MODULE_NAME} LIBRARY DESTINATION ${CMAKE_INSTALL_BINDIR} COMPONENT FreeRdpActivex)
endif()

set_property(TARGET ${MODULE_NAME} PROPERTY FOLDER "Client/Windows")
set_property(TARGET interfaces PROPERTY FOLDER "Client/Windows")
