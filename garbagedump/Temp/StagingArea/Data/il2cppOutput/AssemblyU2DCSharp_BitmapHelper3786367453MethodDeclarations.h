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

// UnityEngine.Vector2[]
struct Vector2U5BU5D_t2741383957;
// IBitmap
struct IBitmap_t2353316568;
// UnityEngine.Vector2[][]
struct Vector2U5BU5DU5BU5D_t2739076344;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t27321461;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector2>
struct IEnumerable_1_t2102516848;
// System.Collections.Generic.List`1<BitmapHelper/BitMapSkipper>
struct List_1_t1250351112;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

// System.Void BitmapHelper::.cctor()
extern "C"  void BitmapHelper__cctor_m1486003727 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] BitmapHelper::CreateFromBitmap(IBitmap)
extern "C"  Vector2U5BU5D_t2741383957* BitmapHelper_CreateFromBitmap_m2260171174 (Object_t * __this /* static, unused */, Object_t * ___bitmap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[][] BitmapHelper::CreateManyFromBitmap(IBitmap)
extern "C"  Vector2U5BU5DU5BU5D_t2739076344* BitmapHelper_CreateManyFromBitmap_m283937385 (Object_t * __this /* static, unused */, Object_t * ___bitmap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector2> BitmapHelper::CreateFromBitmap(IBitmap,UnityEngine.Vector2)
extern "C"  List_1_t27321461 * BitmapHelper_CreateFromBitmap_m1941889370 (Object_t * __this /* static, unused */, Object_t * ___bitmap, Vector2_t3525329788  ___first, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 BitmapHelper::GetFirst(IBitmap)
extern "C"  Vector2_t3525329788  BitmapHelper_GetFirst_m4267207615 (Object_t * __this /* static, unused */, Object_t * ___bitmap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector2> BitmapHelper::GetFirsts(IBitmap,System.Collections.Generic.List`1<BitmapHelper/BitMapSkipper>)
extern "C"  Object_t* BitmapHelper_GetFirsts_m3284547858 (Object_t * __this /* static, unused */, Object_t * ___bitmap, List_1_t1250351112 * ___skippers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 BitmapHelper::GetNextVertex(IBitmap,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t3525329788  BitmapHelper_GetNextVertex_m4117302932 (Object_t * __this /* static, unused */, Object_t * ___bitmap, Vector2_t3525329788  ___current, Vector2_t3525329788  ___last, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] BitmapHelper::Reduce(System.Collections.Generic.List`1<UnityEngine.Vector2>)
extern "C"  Vector2U5BU5D_t2741383957* BitmapHelper_Reduce_m629972673 (Object_t * __this /* static, unused */, List_1_t27321461 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BitmapHelper::IsInLine(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  bool BitmapHelper_IsInLine_m3650217061 (Object_t * __this /* static, unused */, Vector2_t3525329788  ___p1, Vector2_t3525329788  ___p2, Vector2_t3525329788  ___p3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
