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

// UnityEngine.Mesh
struct Mesh_t1525280346;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t27321462;
// System.Object
struct Object_t;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t3713759435;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t27321463;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t2741383957;
// System.Array
struct Array_t;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t27321461;
// UnityEngine.Color[]
struct ColorU5BU5D_t3477081137;
// UnityEngine.Color32[]
struct Color32U5BU5D_t1677970742;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t639075880;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t3644373756;
// UnityEngine.CombineInstance[]
struct CombineInstanceU5BU5D_t763735868;
// UnityEngine.BoneWeight[]
struct BoneWeightU5BU5D_t2340913140;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t1310119637;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Mesh1525280346.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Array2840145358.h"
#include "UnityEngine_UnityEngine_Bounds3518514978.h"

// System.Void UnityEngine.Mesh::.ctor()
extern "C"  void Mesh__ctor_m2684203808 (Mesh_t1525280346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
extern "C"  void Mesh_Internal_Create_m3749730360 (Object_t * __this /* static, unused */, Mesh_t1525280346 * ___mono, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Clear(System.Boolean)
extern "C"  void Mesh_Clear_m1789068674 (Mesh_t1525280346 * __this, bool ___keepVertexLayout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Clear()
extern "C"  void Mesh_Clear_m90337099 (Mesh_t1525280346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
extern "C"  Vector3U5BU5D_t3227571696* Mesh_get_vertices_m3685486174 (Mesh_t1525280346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
extern "C"  void Mesh_set_vertices_m2628866109 (Mesh_t1525280346 * __this, Vector3U5BU5D_t3227571696* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C"  void Mesh_SetVertices_m701834806 (Mesh_t1525280346 * __this, List_1_t27321462 * ___inVertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetVerticesInternal(System.Object)
extern "C"  void Mesh_SetVerticesInternal_m1274639230 (Mesh_t1525280346 * __this, Object_t * ___vertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_normals()
extern "C"  Vector3U5BU5D_t3227571696* Mesh_get_normals_m3396909641 (Mesh_t1525280346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_normals(UnityEngine.Vector3[])
extern "C"  void Mesh_set_normals_m3763698282 (Mesh_t1525280346 * __this, Vector3U5BU5D_t3227571696* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetNormals(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C"  void Mesh_SetNormals_m2039144779 (Mesh_t1525280346 * __this, List_1_t27321462 * ___inNormals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetNormalsInternal(System.Object)
extern "C"  void Mesh_SetNormalsInternal_m1710845385 (Mesh_t1525280346 * __this, Object_t * ___normals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4[] UnityEngine.Mesh::get_tangents()
extern "C"  Vector4U5BU5D_t3713759435* Mesh_get_tangents_m3235865682 (Mesh_t1525280346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_tangents(UnityEngine.Vector4[])
extern "C"  void Mesh_set_tangents_m2117559847 (Mesh_t1525280346 * __this, Vector4U5BU5D_t3713759435* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTangents(System.Collections.Generic.List`1<UnityEngine.Vector4>)
extern "C"  void Mesh_SetTangents_m2005345740 (Mesh_t1525280346 * __this, List_1_t27321463 * ___inTangents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTangentsInternal(System.Object)
extern "C"  void Mesh_SetTangentsInternal_m763303177 (Mesh_t1525280346 * __this, Object_t * ___tangents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv()
extern "C"  Vector2U5BU5D_t2741383957* Mesh_get_uv_m558008935 (Mesh_t1525280346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
extern "C"  void Mesh_set_uv_m498907190 (Mesh_t1525280346 * __this, Vector2U5BU5D_t2741383957* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv2()
extern "C"  Vector2U5BU5D_t2741383957* Mesh_get_uv2_m118417421 (Mesh_t1525280346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_uv2(UnityEngine.Vector2[])
extern "C"  void Mesh_set_uv2_m1515914022 (Mesh_t1525280346 * __this, Vector2U5BU5D_t2741383957* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array UnityEngine.Mesh::ExtractListData(System.Object)
extern "C"  Array_t * Mesh_ExtractListData_m2453560898 (Object_t * __this /* static, unused */, Object_t * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetUVsInternal(System.Array,System.Int32,System.Int32,System.Int32)
extern "C"  void Mesh_SetUVsInternal_m4014622176 (Mesh_t1525280346 * __this, Array_t * ___uvs, int32_t ___channel, int32_t ___dim, int32_t ___arraySize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector2>)
extern "C"  void Mesh_SetUVs_m116216925 (Mesh_t1525280346 * __this, int32_t ___channel, List_1_t27321461 * ___uvs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.Mesh::get_bounds()
extern "C"  Bounds_t3518514978  Mesh_get_bounds_m1625335237 (Mesh_t1525280346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_bounds(UnityEngine.Bounds)
extern "C"  void Mesh_set_bounds_m1860910602 (Mesh_t1525280346 * __this, Bounds_t3518514978  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::INTERNAL_get_bounds(UnityEngine.Bounds&)
extern "C"  void Mesh_INTERNAL_get_bounds_m739771994 (Mesh_t1525280346 * __this, Bounds_t3518514978 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::INTERNAL_set_bounds(UnityEngine.Bounds&)
extern "C"  void Mesh_INTERNAL_set_bounds_m654403942 (Mesh_t1525280346 * __this, Bounds_t3518514978 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] UnityEngine.Mesh::get_colors()
extern "C"  ColorU5BU5D_t3477081137* Mesh_get_colors_m641154978 (Mesh_t1525280346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_colors(UnityEngine.Color[])
extern "C"  void Mesh_set_colors_m1701609395 (Mesh_t1525280346 * __this, ColorU5BU5D_t3477081137* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] UnityEngine.Mesh::get_colors32()
extern "C"  Color32U5BU5D_t1677970742* Mesh_get_colors32_m192356802 (Mesh_t1525280346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetColors(System.Collections.Generic.List`1<UnityEngine.Color32>)
extern "C"  void Mesh_SetColors_m3313707935 (Mesh_t1525280346 * __this, List_1_t639075880 * ___inColors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetColors32Internal(System.Object)
extern "C"  void Mesh_SetColors32Internal_m1830241000 (Mesh_t1525280346 * __this, Object_t * ___colors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::RecalculateBounds()
extern "C"  void Mesh_RecalculateBounds_m3754336742 (Mesh_t1525280346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::RecalculateNormals()
extern "C"  void Mesh_RecalculateNormals_m1806625021 (Mesh_t1525280346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UnityEngine.Mesh::get_triangles()
extern "C"  Int32U5BU5D_t1809983122* Mesh_get_triangles_m2145908418 (Mesh_t1525280346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
extern "C"  void Mesh_set_triangles_m2341339867 (Mesh_t1525280346 * __this, Int32U5BU5D_t1809983122* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTriangles(System.Collections.Generic.List`1<System.Int32>,System.Int32)
extern "C"  void Mesh_SetTriangles_m456382467 (Mesh_t1525280346 * __this, List_1_t3644373756 * ___inTriangles, int32_t ___submesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTrianglesInternal(System.Object,System.Int32)
extern "C"  void Mesh_SetTrianglesInternal_m2955775213 (Mesh_t1525280346 * __this, Object_t * ___triangles, int32_t ___submesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UnityEngine.Mesh::GetIndices(System.Int32)
extern "C"  Int32U5BU5D_t1809983122* Mesh_GetIndices_m637494532 (Mesh_t1525280346 * __this, int32_t ___submesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::CombineMeshes(UnityEngine.CombineInstance[],System.Boolean,System.Boolean)
extern "C"  void Mesh_CombineMeshes_m3216282747 (Mesh_t1525280346 * __this, CombineInstanceU5BU5D_t763735868* ___combine, bool ___mergeSubMeshes, bool ___useMatrices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::CombineMeshes(UnityEngine.CombineInstance[])
extern "C"  void Mesh_CombineMeshes_m2934484827 (Mesh_t1525280346 * __this, CombineInstanceU5BU5D_t763735868* ___combine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.BoneWeight[] UnityEngine.Mesh::get_boneWeights()
extern "C"  BoneWeightU5BU5D_t2340913140* Mesh_get_boneWeights_m2083262386 (Mesh_t1525280346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_boneWeights(UnityEngine.BoneWeight[])
extern "C"  void Mesh_set_boneWeights_m3598851843 (Mesh_t1525280346 * __this, BoneWeightU5BU5D_t2340913140* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4[] UnityEngine.Mesh::get_bindposes()
extern "C"  Matrix4x4U5BU5D_t1310119637* Mesh_get_bindposes_m2757156481 (Mesh_t1525280346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_bindposes(UnityEngine.Matrix4x4[])
extern "C"  void Mesh_set_bindposes_m1849173170 (Mesh_t1525280346 * __this, Matrix4x4U5BU5D_t1310119637* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
