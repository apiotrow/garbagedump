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

// System.Action`1<dreamloLeaderBoard/Score>
struct Action_1_t228164563;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_dreamloLeaderBoard_Score79711858.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Action`1<dreamloLeaderBoard/Score>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m293645180_gshared (Action_1_t228164563 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m293645180(__this, ___object, ___method, method) ((  void (*) (Action_1_t228164563 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m293645180_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<dreamloLeaderBoard/Score>::Invoke(T)
extern "C"  void Action_1_Invoke_m2989270344_gshared (Action_1_t228164563 * __this, Score_t79711858  ___obj, const MethodInfo* method);
#define Action_1_Invoke_m2989270344(__this, ___obj, method) ((  void (*) (Action_1_t228164563 *, Score_t79711858 , const MethodInfo*))Action_1_Invoke_m2989270344_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<dreamloLeaderBoard/Score>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Action_1_BeginInvoke_m79828125_gshared (Action_1_t228164563 * __this, Score_t79711858  ___obj, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m79828125(__this, ___obj, ___callback, ___object, method) ((  Object_t * (*) (Action_1_t228164563 *, Score_t79711858 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m79828125_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<dreamloLeaderBoard/Score>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m3876404108_gshared (Action_1_t228164563 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m3876404108(__this, ___result, method) ((  void (*) (Action_1_t228164563 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m3876404108_gshared)(__this, ___result, method)
