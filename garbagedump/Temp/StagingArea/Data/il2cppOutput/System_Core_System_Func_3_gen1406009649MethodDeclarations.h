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

// System.Func`3<System.Object,System.Int32,System.Int32>
struct Func_3_t1406009649;
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

// System.Void System.Func`3<System.Object,System.Int32,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_3__ctor_m296326461_gshared (Func_3_t1406009649 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_3__ctor_m296326461(__this, ___object, ___method, method) ((  void (*) (Func_3_t1406009649 *, Object_t *, IntPtr_t, const MethodInfo*))Func_3__ctor_m296326461_gshared)(__this, ___object, ___method, method)
// TResult System.Func`3<System.Object,System.Int32,System.Int32>::Invoke(T1,T2)
extern "C"  int32_t Func_3_Invoke_m3382537836_gshared (Func_3_t1406009649 * __this, Object_t * ___arg1, int32_t ___arg2, const MethodInfo* method);
#define Func_3_Invoke_m3382537836(__this, ___arg1, ___arg2, method) ((  int32_t (*) (Func_3_t1406009649 *, Object_t *, int32_t, const MethodInfo*))Func_3_Invoke_m3382537836_gshared)(__this, ___arg1, ___arg2, method)
// System.IAsyncResult System.Func`3<System.Object,System.Int32,System.Int32>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_3_BeginInvoke_m2660220141_gshared (Func_3_t1406009649 * __this, Object_t * ___arg1, int32_t ___arg2, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_3_BeginInvoke_m2660220141(__this, ___arg1, ___arg2, ___callback, ___object, method) ((  Object_t * (*) (Func_3_t1406009649 *, Object_t *, int32_t, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_3_BeginInvoke_m2660220141_gshared)(__this, ___arg1, ___arg2, ___callback, ___object, method)
// TResult System.Func`3<System.Object,System.Int32,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Func_3_EndInvoke_m3646246383_gshared (Func_3_t1406009649 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_3_EndInvoke_m3646246383(__this, ___result, method) ((  int32_t (*) (Func_3_t1406009649 *, Object_t *, const MethodInfo*))Func_3_EndInvoke_m3646246383_gshared)(__this, ___result, method)
