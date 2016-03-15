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

// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Collections.IEnumerator DatabaseControl.DC::RegisterUser(System.String,System.String,System.String)
extern "C"  Object_t * DC_RegisterUser_m44181564 (Object_t * __this /* static, unused */, String_t* ___username, String_t* ___password, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator DatabaseControl.DC::Login(System.String,System.String)
extern "C"  Object_t * DC_Login_m3974247491 (Object_t * __this /* static, unused */, String_t* ___username, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator DatabaseControl.DC::GetUserData(System.String,System.String)
extern "C"  Object_t * DC_GetUserData_m3973550113 (Object_t * __this /* static, unused */, String_t* ___username, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator DatabaseControl.DC::SetUserData(System.String,System.String,System.String)
extern "C"  Object_t * DC_SetUserData_m1936153105 (Object_t * __this /* static, unused */, String_t* ___username, String_t* ___password, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
