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

// LSYSstringGen
struct LSYSstringGen_t965201854;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2606186806;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void LSYSstringGen::.ctor()
extern "C"  void LSYSstringGen__ctor_m638412653 (LSYSstringGen_t965201854 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LSYSstringGen::Start()
extern "C"  void LSYSstringGen_Start_m3880517741 (LSYSstringGen_t965201854 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LSYSstringGen::generateLString(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Int32,System.String)
extern "C"  String_t* LSYSstringGen_generateLString_m245109644 (LSYSstringGen_t965201854 * __this, Dictionary_2_t2606186806 * ___rules, int32_t ___iterations, String_t* ___initString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
