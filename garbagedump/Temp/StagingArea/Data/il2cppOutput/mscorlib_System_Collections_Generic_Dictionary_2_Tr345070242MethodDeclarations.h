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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Char,System.Single,System.Collections.Generic.KeyValuePair`2<System.Char,System.Single>>
struct Transform_1_t345070242;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22544426710.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Char,System.Single,System.Collections.Generic.KeyValuePair`2<System.Char,System.Single>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1768736028_gshared (Transform_1_t345070242 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m1768736028(__this, ___object, ___method, method) ((  void (*) (Transform_1_t345070242 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1768736028_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Char,System.Single,System.Collections.Generic.KeyValuePair`2<System.Char,System.Single>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t2544426710  Transform_1_Invoke_m4023014620_gshared (Transform_1_t345070242 * __this, uint16_t ___key, float ___value, const MethodInfo* method);
#define Transform_1_Invoke_m4023014620(__this, ___key, ___value, method) ((  KeyValuePair_2_t2544426710  (*) (Transform_1_t345070242 *, uint16_t, float, const MethodInfo*))Transform_1_Invoke_m4023014620_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Char,System.Single,System.Collections.Generic.KeyValuePair`2<System.Char,System.Single>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m708773255_gshared (Transform_1_t345070242 * __this, uint16_t ___key, float ___value, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m708773255(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t345070242 *, uint16_t, float, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m708773255_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Char,System.Single,System.Collections.Generic.KeyValuePair`2<System.Char,System.Single>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t2544426710  Transform_1_EndInvoke_m529394222_gshared (Transform_1_t345070242 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m529394222(__this, ___result, method) ((  KeyValuePair_2_t2544426710  (*) (Transform_1_t345070242 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m529394222_gshared)(__this, ___result, method)
