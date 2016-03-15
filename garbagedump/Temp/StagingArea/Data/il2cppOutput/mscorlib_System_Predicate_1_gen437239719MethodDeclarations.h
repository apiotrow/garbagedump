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

// System.Predicate`1<Luz.ULib.Net.ConnectionId>
struct Predicate_1_t437239719;
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

// System.Void System.Predicate`1<Luz.ULib.Net.ConnectionId>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m3484973972_gshared (Predicate_1_t437239719 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m3484973972(__this, ___object, ___method, method) ((  void (*) (Predicate_1_t437239719 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m3484973972_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<Luz.ULib.Net.ConnectionId>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m936909618_gshared (Predicate_1_t437239719 * __this, ConnectionId_t4161243117  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m936909618(__this, ___obj, method) ((  bool (*) (Predicate_1_t437239719 *, ConnectionId_t4161243117 , const MethodInfo*))Predicate_1_Invoke_m936909618_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<Luz.ULib.Net.ConnectionId>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Predicate_1_BeginInvoke_m632106885_gshared (Predicate_1_t437239719 * __this, ConnectionId_t4161243117  ___obj, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m632106885(__this, ___obj, ___callback, ___object, method) ((  Object_t * (*) (Predicate_1_t437239719 *, ConnectionId_t4161243117 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m632106885_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<Luz.ULib.Net.ConnectionId>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m1053391842_gshared (Predicate_1_t437239719 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m1053391842(__this, ___result, method) ((  bool (*) (Predicate_1_t437239719 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m1053391842_gshared)(__this, ___result, method)
