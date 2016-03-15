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

// System.Comparison`1<Luz.ULib.Net.ConnectionId>
struct Comparison_1_t2569950697;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_Luz_ULib_Net_ConnectionId4161243117.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Comparison`1<Luz.ULib.Net.ConnectionId>::.ctor(System.Object,System.IntPtr)
extern "C"  void Comparison_1__ctor_m3362146214_gshared (Comparison_1_t2569950697 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m3362146214(__this, ___object, ___method, method) ((  void (*) (Comparison_1_t2569950697 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m3362146214_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<Luz.ULib.Net.ConnectionId>::Invoke(T,T)
extern "C"  int32_t Comparison_1_Invoke_m3620533850_gshared (Comparison_1_t2569950697 * __this, ConnectionId_t4161243117  ___x, ConnectionId_t4161243117  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m3620533850(__this, ___x, ___y, method) ((  int32_t (*) (Comparison_1_t2569950697 *, ConnectionId_t4161243117 , ConnectionId_t4161243117 , const MethodInfo*))Comparison_1_Invoke_m3620533850_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<Luz.ULib.Net.ConnectionId>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Comparison_1_BeginInvoke_m4128238035_gshared (Comparison_1_t2569950697 * __this, ConnectionId_t4161243117  ___x, ConnectionId_t4161243117  ___y, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m4128238035(__this, ___x, ___y, ___callback, ___object, method) ((  Object_t * (*) (Comparison_1_t2569950697 *, ConnectionId_t4161243117 , ConnectionId_t4161243117 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m4128238035_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<Luz.ULib.Net.ConnectionId>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Comparison_1_EndInvoke_m4290762706_gshared (Comparison_1_t2569950697 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m4290762706(__this, ___result, method) ((  int32_t (*) (Comparison_1_t2569950697 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m4290762706_gshared)(__this, ___result, method)
