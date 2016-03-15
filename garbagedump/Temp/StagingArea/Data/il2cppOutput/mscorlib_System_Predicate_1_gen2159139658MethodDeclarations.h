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

// System.Predicate`1<UnityEngine.Color>
struct Predicate_1_t2159139658;
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

// System.Void System.Predicate`1<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m322232627_gshared (Predicate_1_t2159139658 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m322232627(__this, ___object, ___method, method) ((  void (*) (Predicate_1_t2159139658 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m322232627_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Color>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m2401458867_gshared (Predicate_1_t2159139658 * __this, Color_t1588175760  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m2401458867(__this, ___obj, method) ((  bool (*) (Predicate_1_t2159139658 *, Color_t1588175760 , const MethodInfo*))Predicate_1_Invoke_m2401458867_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Color>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Predicate_1_BeginInvoke_m3019095046_gshared (Predicate_1_t2159139658 * __this, Color_t1588175760  ___obj, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m3019095046(__this, ___obj, ___callback, ___object, method) ((  Object_t * (*) (Predicate_1_t2159139658 *, Color_t1588175760 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m3019095046_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Color>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m2796463873_gshared (Predicate_1_t2159139658 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m2796463873(__this, ___result, method) ((  bool (*) (Predicate_1_t2159139658 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m2796463873_gshared)(__this, ___result, method)
