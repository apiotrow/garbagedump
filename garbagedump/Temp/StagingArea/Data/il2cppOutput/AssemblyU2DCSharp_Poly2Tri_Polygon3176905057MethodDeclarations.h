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

// Poly2Tri.Polygon
struct Polygon_t3176905057;
// System.Collections.Generic.IList`1<Poly2Tri.PolygonPoint>
struct IList_1_t2293592439;
// System.Collections.Generic.IEnumerable`1<Poly2Tri.PolygonPoint>
struct IEnumerable_1_t2999254481;
// Poly2Tri.PolygonPoint[]
struct PolygonPointU5BU5D_t1824334608;
// Poly2Tri.TriangulationPoint
struct TriangulationPoint_t3512014760;
// System.Collections.Generic.List`1<Poly2Tri.TriangulationPoint>
struct List_1_t14006433;
// Poly2Tri.PolygonPoint
struct PolygonPoint_t127100125;
// System.Collections.Generic.IList`1<Poly2Tri.TriangulationPoint>
struct IList_1_t1383539778;
// System.Collections.Generic.IList`1<Poly2Tri.DelaunayTriangle>
struct IList_1_t2050973552;
// System.Collections.Generic.IList`1<Poly2Tri.Polygon>
struct IList_1_t1048430075;
// Poly2Tri.DelaunayTriangle
struct DelaunayTriangle_t4179448534;
// System.Collections.Generic.IEnumerable`1<Poly2Tri.DelaunayTriangle>
struct IEnumerable_1_t2756635594;
// Poly2Tri.TriangulationContext
struct TriangulationContext_t1124583303;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Poly2Tri_TriangulationMode852988409.h"
#include "AssemblyU2DCSharp_Poly2Tri_TriangulationPoint3512014760.h"
#include "AssemblyU2DCSharp_Poly2Tri_Polygon3176905057.h"
#include "AssemblyU2DCSharp_Poly2Tri_PolygonPoint127100125.h"
#include "AssemblyU2DCSharp_Poly2Tri_DelaunayTriangle4179448534.h"
#include "AssemblyU2DCSharp_Poly2Tri_TriangulationContext1124583303.h"

// System.Void Poly2Tri.Polygon::.ctor(System.Collections.Generic.IList`1<Poly2Tri.PolygonPoint>)
extern "C"  void Polygon__ctor_m4103106198 (Polygon_t3176905057 * __this, Object_t* ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.Polygon::.ctor(System.Collections.Generic.IEnumerable`1<Poly2Tri.PolygonPoint>)
extern "C"  void Polygon__ctor_m1889581696 (Polygon_t3176905057 * __this, Object_t* ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.Polygon::.ctor(Poly2Tri.PolygonPoint[])
extern "C"  void Polygon__ctor_m3755834951 (Polygon_t3176905057 * __this, PolygonPointU5BU5D_t1824334608* ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Poly2Tri.TriangulationMode Poly2Tri.Polygon::get_TriangulationMode()
extern "C"  int32_t Polygon_get_TriangulationMode_m435260285 (Polygon_t3176905057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.Polygon::AddSteinerPoint(Poly2Tri.TriangulationPoint)
extern "C"  void Polygon_AddSteinerPoint_m28083333 (Polygon_t3176905057 * __this, TriangulationPoint_t3512014760 * ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.Polygon::AddSteinerPoints(System.Collections.Generic.List`1<Poly2Tri.TriangulationPoint>)
extern "C"  void Polygon_AddSteinerPoints_m996482752 (Polygon_t3176905057 * __this, List_1_t14006433 * ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.Polygon::ClearSteinerPoints()
extern "C"  void Polygon_ClearSteinerPoints_m3956133286 (Polygon_t3176905057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.Polygon::AddHole(Poly2Tri.Polygon)
extern "C"  void Polygon_AddHole_m1438520216 (Polygon_t3176905057 * __this, Polygon_t3176905057 * ___poly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.Polygon::InsertPointAfter(Poly2Tri.PolygonPoint,Poly2Tri.PolygonPoint)
extern "C"  void Polygon_InsertPointAfter_m3243202433 (Polygon_t3176905057 * __this, PolygonPoint_t127100125 * ___point, PolygonPoint_t127100125 * ___newPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.Polygon::AddPoints(System.Collections.Generic.IEnumerable`1<Poly2Tri.PolygonPoint>)
extern "C"  void Polygon_AddPoints_m4031282366 (Polygon_t3176905057 * __this, Object_t* ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.Polygon::AddPoint(Poly2Tri.PolygonPoint)
extern "C"  void Polygon_AddPoint_m246768810 (Polygon_t3176905057 * __this, PolygonPoint_t127100125 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.Polygon::RemovePoint(Poly2Tri.PolygonPoint)
extern "C"  void Polygon_RemovePoint_m1567727455 (Polygon_t3176905057 * __this, PolygonPoint_t127100125 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Poly2Tri.TriangulationPoint> Poly2Tri.Polygon::get_Points()
extern "C"  Object_t* Polygon_get_Points_m3648826866 (Polygon_t3176905057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Poly2Tri.DelaunayTriangle> Poly2Tri.Polygon::get_Triangles()
extern "C"  Object_t* Polygon_get_Triangles_m3965771760 (Polygon_t3176905057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Poly2Tri.Polygon> Poly2Tri.Polygon::get_Holes()
extern "C"  Object_t* Polygon_get_Holes_m2898744719 (Polygon_t3176905057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.Polygon::AddTriangle(Poly2Tri.DelaunayTriangle)
extern "C"  void Polygon_AddTriangle_m3228393993 (Polygon_t3176905057 * __this, DelaunayTriangle_t4179448534 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.Polygon::AddTriangles(System.Collections.Generic.IEnumerable`1<Poly2Tri.DelaunayTriangle>)
extern "C"  void Polygon_AddTriangles_m3089413951 (Polygon_t3176905057 * __this, Object_t* ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.Polygon::ClearTriangles()
extern "C"  void Polygon_ClearTriangles_m3515293016 (Polygon_t3176905057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.Polygon::Prepare(Poly2Tri.TriangulationContext)
extern "C"  void Polygon_Prepare_m655772026 (Polygon_t3176905057 * __this, TriangulationContext_t1124583303 * ___tcx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
