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

// System.Action`1<Luz.ULib.Net.ConnectionId>
struct Action_1_t14728526;
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

// System.Void System.Action`1<Luz.ULib.Net.ConnectionId>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m200027161_gshared (Action_1_t14728526 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m200027161(__this, ___object, ___method, method) ((  void (*) (Action_1_t14728526 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m200027161_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<Luz.ULib.Net.ConnectionId>::Invoke(T)
extern "C"  void Action_1_Invoke_m13989387_gshared (Action_1_t14728526 * __this, ConnectionId_t4161243117  ___obj, const MethodInfo* method);
#define Action_1_Invoke_m13989387(__this, ___obj, method) ((  void (*) (Action_1_t14728526 *, ConnectionId_t4161243117 , const MethodInfo*))Action_1_Invoke_m13989387_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<Luz.ULib.Net.ConnectionId>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Action_1_BeginInvoke_m1965876696_gshared (Action_1_t14728526 * __this, ConnectionId_t4161243117  ___obj, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m1965876696(__this, ___obj, ___callback, ___object, method) ((  Object_t * (*) (Action_1_t14728526 *, ConnectionId_t4161243117 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m1965876696_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<Luz.ULib.Net.ConnectionId>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m4041446057_gshared (Action_1_t14728526 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m4041446057(__this, ___result, method) ((  void (*) (Action_1_t14728526 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m4041446057_gshared)(__this, ___result, method)
