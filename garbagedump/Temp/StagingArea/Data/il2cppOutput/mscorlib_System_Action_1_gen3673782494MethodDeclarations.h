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

// System.Action`1<UnityEngine.Vector3>
struct Action_1_t3673782494;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Action`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m696440683_gshared (Action_1_t3673782494 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m696440683(__this, ___object, ___method, method) ((  void (*) (Action_1_t3673782494 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m696440683_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<UnityEngine.Vector3>::Invoke(T)
extern "C"  void Action_1_Invoke_m806748793_gshared (Action_1_t3673782494 * __this, Vector3_t3525329789  ___obj, const MethodInfo* method);
#define Action_1_Invoke_m806748793(__this, ___obj, method) ((  void (*) (Action_1_t3673782494 *, Vector3_t3525329789 , const MethodInfo*))Action_1_Invoke_m806748793_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<UnityEngine.Vector3>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Action_1_BeginInvoke_m4149254470_gshared (Action_1_t3673782494 * __this, Vector3_t3525329789  ___obj, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m4149254470(__this, ___obj, ___callback, ___object, method) ((  Object_t * (*) (Action_1_t3673782494 *, Vector3_t3525329789 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m4149254470_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m3106453243_gshared (Action_1_t3673782494 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m3106453243(__this, ___result, method) ((  void (*) (Action_1_t3673782494 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m3106453243_gshared)(__this, ___result, method)
