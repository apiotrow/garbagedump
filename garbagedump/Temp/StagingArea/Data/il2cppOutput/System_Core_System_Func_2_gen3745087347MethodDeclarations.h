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

// System.Func`2<UnityEngine.Vector3,UnityEngine.Vector2>
struct Func_2_t3745087347;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Func`2<UnityEngine.Vector3,UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m1202150119_gshared (Func_2_t3745087347 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m1202150119(__this, ___object, ___method, method) ((  void (*) (Func_2_t3745087347 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m1202150119_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<UnityEngine.Vector3,UnityEngine.Vector2>::Invoke(T)
extern "C"  Vector2_t3525329788  Func_2_Invoke_m4209495819_gshared (Func_2_t3745087347 * __this, Vector3_t3525329789  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m4209495819(__this, ___arg1, method) ((  Vector2_t3525329788  (*) (Func_2_t3745087347 *, Vector3_t3525329789 , const MethodInfo*))Func_2_Invoke_m4209495819_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<UnityEngine.Vector3,UnityEngine.Vector2>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m2003460922_gshared (Func_2_t3745087347 * __this, Vector3_t3525329789  ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m2003460922(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t3745087347 *, Vector3_t3525329789 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m2003460922_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<UnityEngine.Vector3,UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C"  Vector2_t3525329788  Func_2_EndInvoke_m3555908009_gshared (Func_2_t3745087347 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m3555908009(__this, ___result, method) ((  Vector2_t3525329788  (*) (Func_2_t3745087347 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m3555908009_gshared)(__this, ___result, method)
