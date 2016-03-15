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

// System.Action`1<UnityEngine.UILineInfo>
struct Action_1_t305373988;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_UILineInfo156921283.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Action`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m2570889449_gshared (Action_1_t305373988 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m2570889449(__this, ___object, ___method, method) ((  void (*) (Action_1_t305373988 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m2570889449_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<UnityEngine.UILineInfo>::Invoke(T)
extern "C"  void Action_1_Invoke_m887533371_gshared (Action_1_t305373988 * __this, UILineInfo_t156921283  ___obj, const MethodInfo* method);
#define Action_1_Invoke_m887533371(__this, ___obj, method) ((  void (*) (Action_1_t305373988 *, UILineInfo_t156921283 , const MethodInfo*))Action_1_Invoke_m887533371_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Action_1_BeginInvoke_m3517989008_gshared (Action_1_t305373988 * __this, UILineInfo_t156921283  ___obj, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m3517989008(__this, ___obj, ___callback, ___object, method) ((  Object_t * (*) (Action_1_t305373988 *, UILineInfo_t156921283 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m3517989008_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m2702374777_gshared (Action_1_t305373988 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m2702374777(__this, ___result, method) ((  void (*) (Action_1_t305373988 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m2702374777_gshared)(__this, ___result, method)
