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

// System.Action`1<System.Int32>
struct Action_1_t2995867492;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m1764712743_gshared (Action_1_t2995867492 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m1764712743(__this, ___object, ___method, method) ((  void (*) (Action_1_t2995867492 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m1764712743_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Int32>::Invoke(T)
extern "C"  void Action_1_Invoke_m2416336189_gshared (Action_1_t2995867492 * __this, int32_t ___obj, const MethodInfo* method);
#define Action_1_Invoke_m2416336189(__this, ___obj, method) ((  void (*) (Action_1_t2995867492 *, int32_t, const MethodInfo*))Action_1_Invoke_m2416336189_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Action_1_BeginInvoke_m3640105362_gshared (Action_1_t2995867492 * __this, int32_t ___obj, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m3640105362(__this, ___obj, ___callback, ___object, method) ((  Object_t * (*) (Action_1_t2995867492 *, int32_t, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m3640105362_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m2973204151_gshared (Action_1_t2995867492 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m2973204151(__this, ___result, method) ((  void (*) (Action_1_t2995867492 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m2973204151_gshared)(__this, ___result, method)
