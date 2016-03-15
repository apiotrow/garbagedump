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

// Luz.ULib.Net.UnityNetwork
struct UnityNetwork_t1334213709;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<Luz.ULib.Net.ConnectionId>
struct IEnumerable_1_t2738430177;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Collections.Generic.IList`1<Luz.ULib.Net.ConnectionId>
struct IList_1_t2032768135;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Luz_ULib_Net_ConnectionId4161243117.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Luz_ULib_Net_NetworkEvent2194707552.h"

// System.Void Luz.ULib.Net.UnityNetwork::.ctor()
extern "C"  void UnityNetwork__ctor_m3700847072 (UnityNetwork_t1334213709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Luz.ULib.Net.ConnectionId Luz.ULib.Net.UnityNetwork::Luz.ULib.Net.IBasicNetwork.Connect(System.String)
extern "C"  ConnectionId_t4161243117  UnityNetwork_Luz_ULib_Net_IBasicNetwork_Connect_m1306681587 (UnityNetwork_t1334213709 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Luz.ULib.Net.UnityNetwork::IsAvailable()
extern "C"  bool UnityNetwork_IsAvailable_m1062889713 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Luz.ULib.Net.UnityNetwork Luz.ULib.Net.UnityNetwork::Get()
extern "C"  UnityNetwork_t1334213709 * UnityNetwork_Get_m2693780956 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Luz.ULib.Net.UnityNetwork::Connect(System.String)
extern "C"  void UnityNetwork_Connect_m2324901338 (UnityNetwork_t1334213709 * __this, String_t* ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Luz.ULib.Net.UnityNetwork::get__IsRunning()
extern "C"  bool UnityNetwork_get__IsRunning_m355804335 (UnityNetwork_t1334213709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Luz.ULib.Net.UnityNetwork::get__IsServer()
extern "C"  bool UnityNetwork_get__IsServer_m699465717 (UnityNetwork_t1334213709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Luz.ULib.Net.ConnectionId> Luz.ULib.Net.UnityNetwork::get__Connection()
extern "C"  Object_t* UnityNetwork_get__Connection_m2485138473 (UnityNetwork_t1334213709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Luz.ULib.Net.UnityNetwork::Dequeue(Luz.ULib.Net.NetworkEvent&)
extern "C"  bool UnityNetwork_Dequeue_m2952390010 (UnityNetwork_t1334213709 * __this, NetworkEvent_t2194707552 * ___evt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Luz.ULib.Net.UnityNetwork::SendData(Luz.ULib.Net.ConnectionId,System.Byte[],System.Int32,System.Int32,System.Boolean)
extern "C"  void UnityNetwork_SendData_m3240566601 (UnityNetwork_t1334213709 * __this, ConnectionId_t4161243117  ___userId, ByteU5BU5D_t58506160* ___data, int32_t ___offset, int32_t ___length, bool ___reliable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Luz.ULib.Net.UnityNetwork::Shutdown()
extern "C"  void UnityNetwork_Shutdown_m2548784826 (UnityNetwork_t1334213709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Luz.ULib.Net.UnityNetwork::StartServer(System.Int32)
extern "C"  void UnityNetwork_StartServer_m3109035796 (UnityNetwork_t1334213709 * __this, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Luz.ULib.Net.UnityNetwork::ConnectTo(System.String)
extern "C"  void UnityNetwork_ConnectTo_m105746335 (UnityNetwork_t1334213709 * __this, String_t* ___guid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Luz.ULib.Net.UnityNetwork::ConnectTo(System.String,System.Int32)
extern "C"  void UnityNetwork_ConnectTo_m2052466584 (UnityNetwork_t1334213709 * __this, String_t* ___ip, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Luz.ULib.Net.UnityNetwork::TakeSession()
extern "C"  void UnityNetwork_TakeSession_m4026330509 (UnityNetwork_t1334213709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Luz.ULib.Net.UnityNetwork::get__ConnectionInfo()
extern "C"  String_t* UnityNetwork_get__ConnectionInfo_m2052523011 (UnityNetwork_t1334213709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Luz.ULib.Net.UnityNetwork::Flush()
extern "C"  void UnityNetwork_Flush_m3784794370 (UnityNetwork_t1334213709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Luz.ULib.Net.UnityNetwork::StartServer()
extern "C"  void UnityNetwork_StartServer_m332969539 (UnityNetwork_t1334213709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Luz.ULib.Net.ConnectionId> Luz.ULib.Net.UnityNetwork::get_Connections()
extern "C"  Object_t* UnityNetwork_get_Connections_m3739723735 (UnityNetwork_t1334213709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Luz.ULib.Net.UnityNetwork::get_IsRunning()
extern "C"  bool UnityNetwork_get_IsRunning_m4122822718 (UnityNetwork_t1334213709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Luz.ULib.Net.UnityNetwork::get_IsServer()
extern "C"  bool UnityNetwork_get_IsServer_m4007571078 (UnityNetwork_t1334213709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Luz.ULib.Net.UnityNetwork::Update()
extern "C"  void UnityNetwork_Update_m489004333 (UnityNetwork_t1334213709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Luz.ULib.Net.UnityNetwork::Disconnect(Luz.ULib.Net.ConnectionId)
extern "C"  void UnityNetwork_Disconnect_m3876034375 (UnityNetwork_t1334213709 * __this, ConnectionId_t4161243117  ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
