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

// Poly2Tri.PointSet
struct PointSet_t2440525081;
// System.Collections.Generic.List`1<Poly2Tri.TriangulationPoint>
struct List_1_t14006433;
// System.Collections.Generic.IList`1<Poly2Tri.TriangulationPoint>
struct IList_1_t1383539778;
// System.Collections.Generic.IList`1<Poly2Tri.DelaunayTriangle>
struct IList_1_t2050973552;
// Poly2Tri.DelaunayTriangle
struct DelaunayTriangle_t4179448534;
// System.Collections.Generic.IEnumerable`1<Poly2Tri.DelaunayTriangle>
struct IEnumerable_1_t2756635594;
// Poly2Tri.TriangulationContext
struct TriangulationContext_t1124583303;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Poly2Tri_TriangulationMode852988409.h"
#include "AssemblyU2DCSharp_Poly2Tri_DelaunayTriangle4179448534.h"
#include "AssemblyU2DCSharp_Poly2Tri_TriangulationContext1124583303.h"

// System.Void Poly2Tri.PointSet::.ctor(System.Collections.Generic.List`1<Poly2Tri.TriangulationPoint>)
extern "C"  void PointSet__ctor_m4003070046 (PointSet_t2440525081 * __this, List_1_t14006433 * ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Poly2Tri.TriangulationPoint> Poly2Tri.PointSet::get_Points()
extern "C"  Object_t* PointSet_get_Points_m579732212 (PointSet_t2440525081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.PointSet::set_Points(System.Collections.Generic.IList`1<Poly2Tri.TriangulationPoint>)
extern "C"  void PointSet_set_Points_m1782131191 (PointSet_t2440525081 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Poly2Tri.DelaunayTriangle> Poly2Tri.PointSet::get_Triangles()
extern "C"  Object_t* PointSet_get_Triangles_m899334730 (PointSet_t2440525081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.PointSet::set_Triangles(System.Collections.Generic.IList`1<Poly2Tri.DelaunayTriangle>)
extern "C"  void PointSet_set_Triangles_m3340969725 (PointSet_t2440525081 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Poly2Tri.TriangulationMode Poly2Tri.PointSet::get_TriangulationMode()
extern "C"  int32_t PointSet_get_TriangulationMode_m358388427 (PointSet_t2440525081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.PointSet::AddTriangle(Poly2Tri.DelaunayTriangle)
extern "C"  void PointSet_AddTriangle_m3295232931 (PointSet_t2440525081 * __this, DelaunayTriangle_t4179448534 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.PointSet::AddTriangles(System.Collections.Generic.IEnumerable`1<Poly2Tri.DelaunayTriangle>)
extern "C"  void PointSet_AddTriangles_m807246181 (PointSet_t2440525081 * __this, Object_t* ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.PointSet::ClearTriangles()
extern "C"  void PointSet_ClearTriangles_m588000882 (PointSet_t2440525081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.PointSet::Prepare(Poly2Tri.TriangulationContext)
extern "C"  void PointSet_Prepare_m722610964 (PointSet_t2440525081 * __this, TriangulationContext_t1124583303 * ___tcx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
