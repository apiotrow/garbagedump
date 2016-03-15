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

// System.Action`1<UnityEngine.Color>
struct Action_1_t1736628465;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Action`1<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m2628773560_gshared (Action_1_t1736628465 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m2628773560(__this, ___object, ___method, method) ((  void (*) (Action_1_t1736628465 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m2628773560_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<UnityEngine.Color>::Invoke(T)
extern "C"  void Action_1_Invoke_m2400296588_gshared (Action_1_t1736628465 * __this, Color_t1588175760  ___obj, const MethodInfo* method);
#define Action_1_Invoke_m2400296588(__this, ___obj, method) ((  void (*) (Action_1_t1736628465 *, Color_t1588175760 , const MethodInfo*))Action_1_Invoke_m2400296588_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<UnityEngine.Color>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Action_1_BeginInvoke_m353138009_gshared (Action_1_t1736628465 * __this, Color_t1588175760  ___obj, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m353138009(__this, ___obj, ___callback, ___object, method) ((  Object_t * (*) (Action_1_t1736628465 *, Color_t1588175760 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m353138009_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<UnityEngine.Color>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m2394125512_gshared (Action_1_t1736628465 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m2394125512(__this, ___result, method) ((  void (*) (Action_1_t1736628465 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m2394125512_gshared)(__this, ___result, method)
