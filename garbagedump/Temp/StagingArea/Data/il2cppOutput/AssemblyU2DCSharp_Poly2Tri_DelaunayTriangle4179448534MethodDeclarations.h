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

// Poly2Tri.DelaunayTriangle
struct DelaunayTriangle_t4179448534;
// Poly2Tri.TriangulationPoint
struct TriangulationPoint_t3512014760;
// System.String
struct String_t;
// System.Collections.Generic.List`1<Poly2Tri.DelaunayTriangle>
struct List_1_t681440207;
// Poly2Tri.DTSweepConstraint
struct DTSweepConstraint_t3042685824;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Poly2Tri_TriangulationPoint3512014760.h"
#include "AssemblyU2DCSharp_Poly2Tri_DelaunayTriangle4179448534.h"
#include "AssemblyU2DCSharp_Poly2Tri_DTSweepConstraint3042685824.h"

// System.Void Poly2Tri.DelaunayTriangle::.ctor(Poly2Tri.TriangulationPoint,Poly2Tri.TriangulationPoint,Poly2Tri.TriangulationPoint)
extern "C"  void DelaunayTriangle__ctor_m2819241049 (DelaunayTriangle_t4179448534 * __this, TriangulationPoint_t3512014760 * ___p1, TriangulationPoint_t3512014760 * ___p2, TriangulationPoint_t3512014760 * ___p3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Poly2Tri.DelaunayTriangle::get_IsInterior()
extern "C"  bool DelaunayTriangle_get_IsInterior_m3556192 (DelaunayTriangle_t4179448534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DelaunayTriangle::set_IsInterior(System.Boolean)
extern "C"  void DelaunayTriangle_set_IsInterior_m1068075135 (DelaunayTriangle_t4179448534 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Poly2Tri.DelaunayTriangle::IndexOf(Poly2Tri.TriangulationPoint)
extern "C"  int32_t DelaunayTriangle_IndexOf_m996663040 (DelaunayTriangle_t4179448534 * __this, TriangulationPoint_t3512014760 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Poly2Tri.DelaunayTriangle::IndexCWFrom(Poly2Tri.TriangulationPoint)
extern "C"  int32_t DelaunayTriangle_IndexCWFrom_m3856584729 (DelaunayTriangle_t4179448534 * __this, TriangulationPoint_t3512014760 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Poly2Tri.DelaunayTriangle::IndexCCWFrom(Poly2Tri.TriangulationPoint)
extern "C"  int32_t DelaunayTriangle_IndexCCWFrom_m4067826454 (DelaunayTriangle_t4179448534 * __this, TriangulationPoint_t3512014760 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Poly2Tri.DelaunayTriangle::Contains(Poly2Tri.TriangulationPoint)
extern "C"  bool DelaunayTriangle_Contains_m2844105164 (DelaunayTriangle_t4179448534 * __this, TriangulationPoint_t3512014760 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DelaunayTriangle::MarkNeighbor(Poly2Tri.TriangulationPoint,Poly2Tri.TriangulationPoint,Poly2Tri.DelaunayTriangle)
extern "C"  void DelaunayTriangle_MarkNeighbor_m4040155886 (DelaunayTriangle_t4179448534 * __this, TriangulationPoint_t3512014760 * ___p1, TriangulationPoint_t3512014760 * ___p2, DelaunayTriangle_t4179448534 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DelaunayTriangle::MarkNeighbor(Poly2Tri.DelaunayTriangle)
extern "C"  void DelaunayTriangle_MarkNeighbor_m2055528170 (DelaunayTriangle_t4179448534 * __this, DelaunayTriangle_t4179448534 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Poly2Tri.TriangulationPoint Poly2Tri.DelaunayTriangle::OppositePoint(Poly2Tri.DelaunayTriangle,Poly2Tri.TriangulationPoint)
extern "C"  TriangulationPoint_t3512014760 * DelaunayTriangle_OppositePoint_m3873237305 (DelaunayTriangle_t4179448534 * __this, DelaunayTriangle_t4179448534 * ___t, TriangulationPoint_t3512014760 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Poly2Tri.DelaunayTriangle Poly2Tri.DelaunayTriangle::NeighborCWFrom(Poly2Tri.TriangulationPoint)
extern "C"  DelaunayTriangle_t4179448534 * DelaunayTriangle_NeighborCWFrom_m521063138 (DelaunayTriangle_t4179448534 * __this, TriangulationPoint_t3512014760 * ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Poly2Tri.DelaunayTriangle Poly2Tri.DelaunayTriangle::NeighborCCWFrom(Poly2Tri.TriangulationPoint)
extern "C"  DelaunayTriangle_t4179448534 * DelaunayTriangle_NeighborCCWFrom_m3745872237 (DelaunayTriangle_t4179448534 * __this, TriangulationPoint_t3512014760 * ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Poly2Tri.DelaunayTriangle Poly2Tri.DelaunayTriangle::NeighborAcrossFrom(Poly2Tri.TriangulationPoint)
extern "C"  DelaunayTriangle_t4179448534 * DelaunayTriangle_NeighborAcrossFrom_m4121438103 (DelaunayTriangle_t4179448534 * __this, TriangulationPoint_t3512014760 * ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Poly2Tri.TriangulationPoint Poly2Tri.DelaunayTriangle::PointCCWFrom(Poly2Tri.TriangulationPoint)
extern "C"  TriangulationPoint_t3512014760 * DelaunayTriangle_PointCCWFrom_m979726895 (DelaunayTriangle_t4179448534 * __this, TriangulationPoint_t3512014760 * ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Poly2Tri.TriangulationPoint Poly2Tri.DelaunayTriangle::PointCWFrom(Poly2Tri.TriangulationPoint)
extern "C"  TriangulationPoint_t3512014760 * DelaunayTriangle_PointCWFrom_m1401663968 (DelaunayTriangle_t4179448534 * __this, TriangulationPoint_t3512014760 * ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DelaunayTriangle::RotateCW()
extern "C"  void DelaunayTriangle_RotateCW_m1952259360 (DelaunayTriangle_t4179448534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DelaunayTriangle::Legalize(Poly2Tri.TriangulationPoint,Poly2Tri.TriangulationPoint)
extern "C"  void DelaunayTriangle_Legalize_m2750936510 (DelaunayTriangle_t4179448534 * __this, TriangulationPoint_t3512014760 * ___oPoint, TriangulationPoint_t3512014760 * ___nPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Poly2Tri.DelaunayTriangle::ToString()
extern "C"  String_t* DelaunayTriangle_ToString_m4131651834 (DelaunayTriangle_t4179448534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DelaunayTriangle::MarkNeighborEdges()
extern "C"  void DelaunayTriangle_MarkNeighborEdges_m290749736 (DelaunayTriangle_t4179448534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DelaunayTriangle::MarkEdge(Poly2Tri.DelaunayTriangle)
extern "C"  void DelaunayTriangle_MarkEdge_m3485191871 (DelaunayTriangle_t4179448534 * __this, DelaunayTriangle_t4179448534 * ___triangle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DelaunayTriangle::MarkEdge(System.Collections.Generic.List`1<Poly2Tri.DelaunayTriangle>)
extern "C"  void DelaunayTriangle_MarkEdge_m509793879 (DelaunayTriangle_t4179448534 * __this, List_1_t681440207 * ___tList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DelaunayTriangle::MarkConstrainedEdge(System.Int32)
extern "C"  void DelaunayTriangle_MarkConstrainedEdge_m3093766184 (DelaunayTriangle_t4179448534 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DelaunayTriangle::MarkConstrainedEdge(Poly2Tri.DTSweepConstraint)
extern "C"  void DelaunayTriangle_MarkConstrainedEdge_m236109383 (DelaunayTriangle_t4179448534 * __this, DTSweepConstraint_t3042685824 * ___edge, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DelaunayTriangle::MarkConstrainedEdge(Poly2Tri.TriangulationPoint,Poly2Tri.TriangulationPoint)
extern "C"  void DelaunayTriangle_MarkConstrainedEdge_m1738829587 (DelaunayTriangle_t4179448534 * __this, TriangulationPoint_t3512014760 * ___p, TriangulationPoint_t3512014760 * ___q, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Poly2Tri.DelaunayTriangle::Area()
extern "C"  double DelaunayTriangle_Area_m2589062427 (DelaunayTriangle_t4179448534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Poly2Tri.TriangulationPoint Poly2Tri.DelaunayTriangle::Centroid()
extern "C"  TriangulationPoint_t3512014760 * DelaunayTriangle_Centroid_m727329864 (DelaunayTriangle_t4179448534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Poly2Tri.DelaunayTriangle::EdgeIndex(Poly2Tri.TriangulationPoint,Poly2Tri.TriangulationPoint)
extern "C"  int32_t DelaunayTriangle_EdgeIndex_m604330550 (DelaunayTriangle_t4179448534 * __this, TriangulationPoint_t3512014760 * ___p1, TriangulationPoint_t3512014760 * ___p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Poly2Tri.DelaunayTriangle::GetConstrainedEdgeCCW(Poly2Tri.TriangulationPoint)
extern "C"  bool DelaunayTriangle_GetConstrainedEdgeCCW_m1644144297 (DelaunayTriangle_t4179448534 * __this, TriangulationPoint_t3512014760 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Poly2Tri.DelaunayTriangle::GetConstrainedEdgeCW(Poly2Tri.TriangulationPoint)
extern "C"  bool DelaunayTriangle_GetConstrainedEdgeCW_m16249082 (DelaunayTriangle_t4179448534 * __this, TriangulationPoint_t3512014760 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Poly2Tri.DelaunayTriangle::GetConstrainedEdgeAcross(Poly2Tri.TriangulationPoint)
extern "C"  bool DelaunayTriangle_GetConstrainedEdgeAcross_m935672111 (DelaunayTriangle_t4179448534 * __this, TriangulationPoint_t3512014760 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DelaunayTriangle::SetConstrainedEdgeCCW(Poly2Tri.TriangulationPoint,System.Boolean)
extern "C"  void DelaunayTriangle_SetConstrainedEdgeCCW_m3805744396 (DelaunayTriangle_t4179448534 * __this, TriangulationPoint_t3512014760 * ___p, bool ___ce, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DelaunayTriangle::SetConstrainedEdgeCW(Poly2Tri.TriangulationPoint,System.Boolean)
extern "C"  void DelaunayTriangle_SetConstrainedEdgeCW_m475208939 (DelaunayTriangle_t4179448534 * __this, TriangulationPoint_t3512014760 * ___p, bool ___ce, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DelaunayTriangle::SetConstrainedEdgeAcross(Poly2Tri.TriangulationPoint,System.Boolean)
extern "C"  void DelaunayTriangle_SetConstrainedEdgeAcross_m552644630 (DelaunayTriangle_t4179448534 * __this, TriangulationPoint_t3512014760 * ___p, bool ___ce, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Poly2Tri.DelaunayTriangle::GetDelaunayEdgeCCW(Poly2Tri.TriangulationPoint)
extern "C"  bool DelaunayTriangle_GetDelaunayEdgeCCW_m1903168014 (DelaunayTriangle_t4179448534 * __this, TriangulationPoint_t3512014760 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Poly2Tri.DelaunayTriangle::GetDelaunayEdgeCW(Poly2Tri.TriangulationPoint)
extern "C"  bool DelaunayTriangle_GetDelaunayEdgeCW_m3488287989 (DelaunayTriangle_t4179448534 * __this, TriangulationPoint_t3512014760 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Poly2Tri.DelaunayTriangle::GetDelaunayEdgeAcross(Poly2Tri.TriangulationPoint)
extern "C"  bool DelaunayTriangle_GetDelaunayEdgeAcross_m3749961642 (DelaunayTriangle_t4179448534 * __this, TriangulationPoint_t3512014760 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DelaunayTriangle::SetDelaunayEdgeCCW(Poly2Tri.TriangulationPoint,System.Boolean)
extern "C"  void DelaunayTriangle_SetDelaunayEdgeCCW_m4041376599 (DelaunayTriangle_t4179448534 * __this, TriangulationPoint_t3512014760 * ___p, bool ___ce, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DelaunayTriangle::SetDelaunayEdgeCW(Poly2Tri.TriangulationPoint,System.Boolean)
extern "C"  void DelaunayTriangle_SetDelaunayEdgeCW_m2838114624 (DelaunayTriangle_t4179448534 * __this, TriangulationPoint_t3512014760 * ___p, bool ___ce, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DelaunayTriangle::SetDelaunayEdgeAcross(Poly2Tri.TriangulationPoint,System.Boolean)
extern "C"  void DelaunayTriangle_SetDelaunayEdgeAcross_m2295042539 (DelaunayTriangle_t4179448534 * __this, TriangulationPoint_t3512014760 * ___p, bool ___ce, const MethodInfo* method) IL2CPP_METHOD_ATTR;
