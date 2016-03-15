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

// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t1056575496;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Boo.Lang.Runtime.DynamicDispatching.Dispatcher::.ctor(System.Object,System.IntPtr)
extern "C"  void Dispatcher__ctor_m350483677 (Dispatcher_t1056575496 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.DynamicDispatching.Dispatcher::Invoke(System.Object,System.Object[])
extern "C"  Object_t * Dispatcher_Invoke_m1310332756 (Dispatcher_t1056575496 * __this, Object_t * ___target, ObjectU5BU5D_t11523773* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Object_t * pinvoke_delegate_wrapper_Dispatcher_t1056575496(Il2CppObject* delegate, Object_t * ___target, ObjectU5BU5D_t11523773* ___args);
// System.IAsyncResult Boo.Lang.Runtime.DynamicDispatching.Dispatcher::BeginInvoke(System.Object,System.Object[],System.AsyncCallback,System.Object)
extern "C"  Object_t * Dispatcher_BeginInvoke_m4243774386 (Dispatcher_t1056575496 * __this, Object_t * ___target, ObjectU5BU5D_t11523773* ___args, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.DynamicDispatching.Dispatcher::EndInvoke(System.IAsyncResult)
extern "C"  Object_t * Dispatcher_EndInvoke_m1615025250 (Dispatcher_t1056575496 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
