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

// System.Action`1<UnityEngine.BoneWeight>
struct Action_1_t3288775722;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_BoneWeight3140323017.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Action`1<UnityEngine.BoneWeight>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m4169456547_gshared (Action_1_t3288775722 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m4169456547(__this, ___object, ___method, method) ((  void (*) (Action_1_t3288775722 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m4169456547_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<UnityEngine.BoneWeight>::Invoke(T)
extern "C"  void Action_1_Invoke_m619605825_gshared (Action_1_t3288775722 * __this, BoneWeight_t3140323017  ___obj, const MethodInfo* method);
#define Action_1_Invoke_m619605825(__this, ___obj, method) ((  void (*) (Action_1_t3288775722 *, BoneWeight_t3140323017 , const MethodInfo*))Action_1_Invoke_m619605825_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<UnityEngine.BoneWeight>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Action_1_BeginInvoke_m1522074262_gshared (Action_1_t3288775722 * __this, BoneWeight_t3140323017  ___obj, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m1522074262(__this, ___obj, ___callback, ___object, method) ((  Object_t * (*) (Action_1_t3288775722 *, BoneWeight_t3140323017 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m1522074262_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<UnityEngine.BoneWeight>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m1048942387_gshared (Action_1_t3288775722 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m1048942387(__this, ___result, method) ((  void (*) (Action_1_t3288775722 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m1048942387_gshared)(__this, ___result, method)
