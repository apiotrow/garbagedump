#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// ChatApp
struct ChatApp_t2403739529;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Luz_ULib_Net_NetworkEvent2194707552.h"

// System.Void ChatApp::.ctor()
extern "C"  void ChatApp__ctor_m3710677506 (ChatApp_t2403739529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatApp::Start()
extern "C"  void ChatApp_Start_m2657815298 (ChatApp_t2403739529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatApp::Exit()
extern "C"  void ChatApp_Exit_m2875448480 (ChatApp_t2403739529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatApp::OnGUI()
extern "C"  void ChatApp_OnGUI_m3206076156 (ChatApp_t2403739529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatApp::Append(System.String)
extern "C"  void ChatApp_Append_m3690827046 (ChatApp_t2403739529 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatApp::FixedUpdate()
extern "C"  void ChatApp_FixedUpdate_m308626941 (ChatApp_t2403739529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatApp::HandleNetwork()
extern "C"  void ChatApp_HandleNetwork_m4019187078 (ChatApp_t2403739529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatApp::HandleIncommingMessage(Luz.ULib.Net.NetworkEvent&)
extern "C"  void ChatApp_HandleIncommingMessage_m2543618072 (ChatApp_t2403739529 * __this, NetworkEvent_t2194707552 * ___evt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatApp::SetGuiState(System.Boolean)
extern "C"  void ChatApp_SetGuiState_m920072175 (ChatApp_t2403739529 * __this, bool ___isDisconnected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatApp::Join()
extern "C"  void ChatApp_Join_m3010276780 (ChatApp_t2403739529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatApp::OpenRoom()
extern "C"  void ChatApp_OpenRoom_m3194975111 (ChatApp_t2403739529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatApp::SendButtonPressed()
extern "C"  void ChatApp_SendButtonPressed_m2584126600 (ChatApp_t2403739529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatApp::SendString(System.String,System.Boolean)
extern "C"  void ChatApp_SendString_m724595574 (ChatApp_t2403739529 * __this, String_t* ___msg, bool ___reliable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatApp::Shutdown()
extern "C"  void ChatApp_Shutdown_m3349467992 (ChatApp_t2403739529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
