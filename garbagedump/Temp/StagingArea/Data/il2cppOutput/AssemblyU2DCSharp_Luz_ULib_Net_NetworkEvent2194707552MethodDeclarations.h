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

// System.Object
struct Object_t;
// Luz.ULib.Net.MessageDataBuffer
struct MessageDataBuffer_t1841394437;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Luz_ULib_Net_NetworkEvent2194707552.h"
#include "AssemblyU2DCSharp_Luz_ULib_Net_NetEventType3163541291.h"
#include "AssemblyU2DCSharp_Luz_ULib_Net_ConnectionId4161243117.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Luz.ULib.Net.NetworkEvent::.ctor(Luz.ULib.Net.NetEventType)
extern "C"  void NetworkEvent__ctor_m84731900 (NetworkEvent_t2194707552 * __this, uint8_t ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Luz.ULib.Net.NetworkEvent::.ctor(Luz.ULib.Net.NetEventType,Luz.ULib.Net.ConnectionId,System.Object)
extern "C"  void NetworkEvent__ctor_m3898314059 (NetworkEvent_t2194707552 * __this, uint8_t ___t, ConnectionId_t4161243117  ___conId, Object_t * ___dt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Luz.ULib.Net.NetEventType Luz.ULib.Net.NetworkEvent::get_Type()
extern "C"  uint8_t NetworkEvent_get_Type_m340527824 (NetworkEvent_t2194707552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Luz.ULib.Net.ConnectionId Luz.ULib.Net.NetworkEvent::get_ConnectionId()
extern "C"  ConnectionId_t4161243117  NetworkEvent_get_ConnectionId_m4066621617 (NetworkEvent_t2194707552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Luz.ULib.Net.NetworkEvent::get_RawData()
extern "C"  Object_t * NetworkEvent_get_RawData_m3847725641 (NetworkEvent_t2194707552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Luz.ULib.Net.MessageDataBuffer Luz.ULib.Net.NetworkEvent::get_MessageData()
extern "C"  Object_t * NetworkEvent_get_MessageData_m4215482449 (NetworkEvent_t2194707552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Luz.ULib.Net.NetworkEvent::get_Info()
extern "C"  String_t* NetworkEvent_get_Info_m2817506155 (NetworkEvent_t2194707552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Luz.ULib.Net.NetworkEvent::ToString()
extern "C"  String_t* NetworkEvent_ToString_m2310570144 (NetworkEvent_t2194707552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
