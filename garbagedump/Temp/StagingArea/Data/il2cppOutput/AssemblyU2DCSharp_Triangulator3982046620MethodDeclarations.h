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

// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Collections.Generic.IList`1<UnityEngine.Vector2>
struct IList_1_t1396854806;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

// System.Int32[] Triangulator::Triangulate(System.Collections.Generic.IList`1<UnityEngine.Vector2>)
extern "C"  Int32U5BU5D_t1809983122* Triangulator_Triangulate_m3516990332 (Object_t * __this /* static, unused */, Object_t* ___m_points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Triangulator::Area(System.Collections.Generic.IList`1<UnityEngine.Vector2>)
extern "C"  float Triangulator_Area_m1922083771 (Object_t * __this /* static, unused */, Object_t* ___m_points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Triangulator::Snip(System.Collections.Generic.IList`1<UnityEngine.Vector2>,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32[])
extern "C"  bool Triangulator_Snip_m864705655 (Object_t * __this /* static, unused */, Object_t* ___m_points, int32_t ___u, int32_t ___v, int32_t ___w, int32_t ___n, Int32U5BU5D_t1809983122* ___V, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Triangulator::InsideTriangle(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  bool Triangulator_InsideTriangle_m1591075001 (Object_t * __this /* static, unused */, Vector2_t3525329788  ___A, Vector2_t3525329788  ___B, Vector2_t3525329788  ___C, Vector2_t3525329788  ___P, const MethodInfo* method) IL2CPP_METHOD_ATTR;
