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

// FarseerPhysics.Common.Vertices
struct Vertices_t3860051793;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t2741383957;
// System.Collections.Generic.IList`1<UnityEngine.Vector2>
struct IList_1_t1396854806;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

// System.Void FarseerPhysics.Common.Vertices::.ctor()
extern "C"  void Vertices__ctor_m4267949916 (Vertices_t3860051793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FarseerPhysics.Common.Vertices::.ctor(System.Int32)
extern "C"  void Vertices__ctor_m291588781 (Vertices_t3860051793 * __this, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FarseerPhysics.Common.Vertices::.ctor(UnityEngine.Vector2[]&)
extern "C"  void Vertices__ctor_m2657135824 (Vertices_t3860051793 * __this, Vector2U5BU5D_t2741383957** ___vector2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FarseerPhysics.Common.Vertices::.ctor(System.Collections.Generic.IList`1<UnityEngine.Vector2>)
extern "C"  void Vertices__ctor_m286265245 (Vertices_t3860051793 * __this, Object_t* ___vertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 FarseerPhysics.Common.Vertices::NextIndex(System.Int32)
extern "C"  int32_t Vertices_NextIndex_m2529968092 (Vertices_t3860051793 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 FarseerPhysics.Common.Vertices::PreviousIndex(System.Int32)
extern "C"  int32_t Vertices_PreviousIndex_m415079384 (Vertices_t3860051793 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FarseerPhysics.Common.Vertices::GetSignedArea()
extern "C"  float Vertices_GetSignedArea_m882837293 (Vertices_t3860051793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FarseerPhysics.Common.Vertices::GetArea()
extern "C"  float Vertices_GetArea_m637462321 (Vertices_t3860051793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 FarseerPhysics.Common.Vertices::GetCentroid()
extern "C"  Vector2_t3525329788  Vertices_GetCentroid_m640329205 (Vertices_t3860051793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FarseerPhysics.Common.Vertices::Translate(UnityEngine.Vector2&)
extern "C"  void Vertices_Translate_m3992234266 (Vertices_t3860051793 * __this, Vector2_t3525329788 * ___vector, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FarseerPhysics.Common.Vertices::Scale(UnityEngine.Vector2&)
extern "C"  void Vertices_Scale_m2938994838 (Vertices_t3860051793 * __this, Vector2_t3525329788 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FarseerPhysics.Common.Vertices::Rotate(System.Single)
extern "C"  void Vertices_Rotate_m1820614472 (Vertices_t3860051793 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FarseerPhysics.Common.Vertices::IsConvex()
extern "C"  bool Vertices_IsConvex_m581246221 (Vertices_t3860051793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FarseerPhysics.Common.Vertices::IsCounterClockWise()
extern "C"  bool Vertices_IsCounterClockWise_m3366386524 (Vertices_t3860051793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FarseerPhysics.Common.Vertices::ForceCounterClockWise()
extern "C"  void Vertices_ForceCounterClockWise_m4276530811 (Vertices_t3860051793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FarseerPhysics.Common.Vertices::IsSimple()
extern "C"  bool Vertices_IsSimple_m1632373016 (Vertices_t3860051793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FarseerPhysics.Common.Vertices::ToString()
extern "C"  String_t* Vertices_ToString_m1912753335 (Vertices_t3860051793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FarseerPhysics.Common.Vertices::ProjectToAxis(UnityEngine.Vector2&,System.Single&,System.Single&)
extern "C"  void Vertices_ProjectToAxis_m1168722593 (Vertices_t3860051793 * __this, Vector2_t3525329788 * ___axis, float* ___min, float* ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FarseerPhysics.Common.Vertices::Cross(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  float Vertices_Cross_m4257264128 (Object_t * __this /* static, unused */, Vector2_t3525329788  ___a, Vector2_t3525329788  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FarseerPhysics.Common.Vertices::LineIntersect2(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2&)
extern "C"  bool Vertices_LineIntersect2_m2404877989 (Object_t * __this /* static, unused */, Vector2_t3525329788  ___a0, Vector2_t3525329788  ___a1, Vector2_t3525329788  ___b0, Vector2_t3525329788  ___b1, Vector2_t3525329788 * ___intersectionPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
