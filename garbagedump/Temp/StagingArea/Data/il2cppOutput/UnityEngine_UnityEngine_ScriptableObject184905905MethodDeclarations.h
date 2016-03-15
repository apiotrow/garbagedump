﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.ScriptableObject
struct ScriptableObject_t184905905;
struct ScriptableObject_t184905905_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ScriptableObject184905905.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C"  void ScriptableObject__ctor_m1827087273 (ScriptableObject_t184905905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)
extern "C"  void ScriptableObject_Internal_CreateScriptableObject_m2334361070 (Object_t * __this /* static, unused */, ScriptableObject_t184905905 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.String)
extern "C"  ScriptableObject_t184905905 * ScriptableObject_CreateInstance_m750914562 (Object_t * __this /* static, unused */, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
extern "C"  ScriptableObject_t184905905 * ScriptableObject_CreateInstance_m3255479417 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)
extern "C"  ScriptableObject_t184905905 * ScriptableObject_CreateInstanceFromType_m3795352533 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ScriptableObject_t184905905;
struct ScriptableObject_t184905905_marshaled;

extern "C" void ScriptableObject_t184905905_marshal(const ScriptableObject_t184905905& unmarshaled, ScriptableObject_t184905905_marshaled& marshaled);
extern "C" void ScriptableObject_t184905905_marshal_back(const ScriptableObject_t184905905_marshaled& marshaled, ScriptableObject_t184905905& unmarshaled);
extern "C" void ScriptableObject_t184905905_marshal_cleanup(ScriptableObject_t184905905_marshaled& marshaled);