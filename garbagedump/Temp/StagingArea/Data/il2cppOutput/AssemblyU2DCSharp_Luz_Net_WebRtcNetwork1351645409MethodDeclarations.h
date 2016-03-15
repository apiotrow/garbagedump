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

// Luz.Net.WebRtcNetwork
struct WebRtcNetwork_t1351645409;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Collections.Generic.IList`1<Luz.ULib.Net.ConnectionId>
struct IList_1_t2032768135;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Luz_ULib_Net_ConnectionId4161243117.h"
#include "AssemblyU2DCSharp_Luz_ULib_Net_NetworkEvent2194707552.h"

// System.Void Luz.Net.WebRtcNetwork::.ctor()
extern "C"  void WebRtcNetwork__ctor_m1230525272 (WebRtcNetwork_t1351645409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Luz.Net.WebRtcNetwork::.ctor(System.String)
extern "C"  void WebRtcNetwork__ctor_m145062570 (WebRtcNetwork_t1351645409 * __this, String_t* ___config, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Luz.Net.WebRtcNetwork::.cctor()
extern "C"  void WebRtcNetwork__cctor_m3304448853 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Luz.Net.WebRtcNetwork::UnityWebRtcNetworkIsAvailable()
extern "C"  bool WebRtcNetwork_UnityWebRtcNetworkIsAvailable_m3464138749 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Luz.Net.WebRtcNetwork::UnityWebRtcNetworkCreate(System.String)
extern "C"  int32_t WebRtcNetwork_UnityWebRtcNetworkCreate_m3278332412 (Object_t * __this /* static, unused */, String_t* ___lConfiguration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Luz.Net.WebRtcNetwork::UnityWebRtcNetworkRelease(System.Int32)
extern "C"  void WebRtcNetwork_UnityWebRtcNetworkRelease_m1960479202 (Object_t * __this /* static, unused */, int32_t ___lIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Luz.Net.WebRtcNetwork::UnityWebRtcNetworkConnect(System.Int32,System.String)
extern "C"  int32_t WebRtcNetwork_UnityWebRtcNetworkConnect_m3916544527 (Object_t * __this /* static, unused */, int32_t ___lIndex, String_t* ___lRoom, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Luz.Net.WebRtcNetwork::UnityWebRtcNetworkStartServer(System.Int32,System.String)
extern "C"  void WebRtcNetwork_UnityWebRtcNetworkStartServer_m3772288860 (Object_t * __this /* static, unused */, int32_t ___lIndex, String_t* ___lRoom, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Luz.Net.WebRtcNetwork::UnityWebRtcNetworkDisconnect(System.Int32,System.Int32)
extern "C"  void WebRtcNetwork_UnityWebRtcNetworkDisconnect_m2076307058 (Object_t * __this /* static, unused */, int32_t ___lIndex, int32_t ___lConnectionId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Luz.Net.WebRtcNetwork::UnityWebRtcNetworkShutdown(System.Int32)
extern "C"  void WebRtcNetwork_UnityWebRtcNetworkShutdown_m709191807 (Object_t * __this /* static, unused */, int32_t ___lIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Luz.Net.WebRtcNetwork::UnityWebRtcNetworkSendData(System.Int32,System.Int32,System.Byte[],System.Int32,System.Int32,System.Boolean)
extern "C"  void WebRtcNetwork_UnityWebRtcNetworkSendData_m2021220542 (Object_t * __this /* static, unused */, int32_t ___lIndex, int32_t ___lConnectionId, ByteU5BU5D_t58506160* ___lUint8ArrayDataPtr, int32_t ___lUint8ArrayDataOffset, int32_t ___lUint8ArrayDataLength, bool ___lReliable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Luz.Net.WebRtcNetwork::UnityWebRtcNetworkPeekEventDataLength(System.Int32)
extern "C"  int32_t WebRtcNetwork_UnityWebRtcNetworkPeekEventDataLength_m2703241592 (Object_t * __this /* static, unused */, int32_t ___lIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Luz.Net.WebRtcNetwork::UnityWebRtcNetworkDequeue(System.Int32,System.Int32[],System.Int32[],System.Byte[],System.Int32,System.Int32,System.Int32[])
extern "C"  bool WebRtcNetwork_UnityWebRtcNetworkDequeue_m1390533171 (Object_t * __this /* static, unused */, int32_t ___lIndex, Int32U5BU5D_t1809983122* ___lTypeIntArrayPtr, Int32U5BU5D_t1809983122* ___lConidIntArrayPtr, ByteU5BU5D_t58506160* ___lUint8ArrayDataPtr, int32_t ___lUint8ArrayDataOffset, int32_t ___lUint8ArrayDataLength, Int32U5BU5D_t1809983122* ___lDataLenIntArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Luz.Net.WebRtcNetwork::InjectJsCode()
extern "C"  void WebRtcNetwork_InjectJsCode_m47736307 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Luz.Net.WebRtcNetwork::IsAvailable()
extern "C"  bool WebRtcNetwork_IsAvailable_m2380581481 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Luz.Net.WebRtcNetwork::get_IsRunning()
extern "C"  bool WebRtcNetwork_get_IsRunning_m3409259446 (WebRtcNetwork_t1351645409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Luz.Net.WebRtcNetwork::get_IsServer()
extern "C"  bool WebRtcNetwork_get_IsServer_m1906342926 (WebRtcNetwork_t1351645409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Luz.ULib.Net.ConnectionId> Luz.Net.WebRtcNetwork::get_Connections()
extern "C"  Object_t* WebRtcNetwork_get_Connections_m2317758927 (WebRtcNetwork_t1351645409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Luz.Net.WebRtcNetwork::Finalize()
extern "C"  void WebRtcNetwork_Finalize_m1135013386 (WebRtcNetwork_t1351645409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Luz.Net.WebRtcNetwork::Dispose()
extern "C"  void WebRtcNetwork_Dispose_m1317063061 (WebRtcNetwork_t1351645409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Luz.Net.WebRtcNetwork::Dispose(System.Boolean)
extern "C"  void WebRtcNetwork_Dispose_m2215155276 (WebRtcNetwork_t1351645409 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Luz.Net.WebRtcNetwork::StartServer()
extern "C"  void WebRtcNetwork_StartServer_m1373216187 (WebRtcNetwork_t1351645409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Luz.Net.WebRtcNetwork::StartServer(System.String)
extern "C"  void WebRtcNetwork_StartServer_m248604967 (WebRtcNetwork_t1351645409 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Luz.ULib.Net.ConnectionId Luz.Net.WebRtcNetwork::Connect(System.String)
extern "C"  ConnectionId_t4161243117  WebRtcNetwork_Connect_m1666544698 (WebRtcNetwork_t1351645409 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Luz.Net.WebRtcNetwork::DequeueInternal(Luz.ULib.Net.NetworkEvent&)
extern "C"  bool WebRtcNetwork_DequeueInternal_m2119360847 (WebRtcNetwork_t1351645409 * __this, NetworkEvent_t2194707552 * ___evt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Luz.Net.WebRtcNetwork::HandleEventInternally(Luz.ULib.Net.NetworkEvent&)
extern "C"  void WebRtcNetwork_HandleEventInternally_m1883564874 (WebRtcNetwork_t1351645409 * __this, NetworkEvent_t2194707552 * ___evt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Luz.Net.WebRtcNetwork::SendData(Luz.ULib.Net.ConnectionId,System.Byte[],System.Int32,System.Int32,System.Boolean)
extern "C"  void WebRtcNetwork_SendData_m745265873 (WebRtcNetwork_t1351645409 * __this, ConnectionId_t4161243117  ___conId, ByteU5BU5D_t58506160* ___data, int32_t ___offset, int32_t ___length, bool ___reliable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Luz.Net.WebRtcNetwork::Shutdown()
extern "C"  void WebRtcNetwork_Shutdown_m3456657986 (WebRtcNetwork_t1351645409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Luz.Net.WebRtcNetwork::Dequeue(Luz.ULib.Net.NetworkEvent&)
extern "C"  bool WebRtcNetwork_Dequeue_m2908052722 (WebRtcNetwork_t1351645409 * __this, NetworkEvent_t2194707552 * ___evt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Luz.Net.WebRtcNetwork::Update()
extern "C"  void WebRtcNetwork_Update_m1218439861 (WebRtcNetwork_t1351645409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Luz.Net.WebRtcNetwork::Flush()
extern "C"  void WebRtcNetwork_Flush_m1314472570 (WebRtcNetwork_t1351645409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Luz.Net.WebRtcNetwork::Disconnect(Luz.ULib.Net.ConnectionId)
extern "C"  void WebRtcNetwork_Disconnect_m2972161727 (WebRtcNetwork_t1351645409 * __this, ConnectionId_t4161243117  ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
