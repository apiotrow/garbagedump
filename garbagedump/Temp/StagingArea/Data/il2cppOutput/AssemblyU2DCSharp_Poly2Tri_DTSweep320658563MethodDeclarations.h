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

// Poly2Tri.DTSweepContext
struct DTSweepContext_t1460735514;
// Poly2Tri.AdvancingFrontNode
struct AdvancingFrontNode_t390899251;
// Poly2Tri.TriangulationPoint
struct TriangulationPoint_t3512014760;
// Poly2Tri.DTSweepConstraint
struct DTSweepConstraint_t3042685824;
// Poly2Tri.DelaunayTriangle
struct DelaunayTriangle_t4179448534;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Poly2Tri_DTSweepContext1460735514.h"
#include "AssemblyU2DCSharp_Poly2Tri_AdvancingFrontNode390899251.h"
#include "AssemblyU2DCSharp_Poly2Tri_TriangulationPoint3512014760.h"
#include "AssemblyU2DCSharp_Poly2Tri_DTSweepConstraint3042685824.h"
#include "AssemblyU2DCSharp_Poly2Tri_DelaunayTriangle4179448534.h"
#include "AssemblyU2DCSharp_Poly2Tri_Orientation2138139127.h"

// System.Void Poly2Tri.DTSweep::Triangulate(Poly2Tri.DTSweepContext)
extern "C"  void DTSweep_Triangulate_m4061107748 (Object_t * __this /* static, unused */, DTSweepContext_t1460735514 * ___tcx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweep::Sweep(Poly2Tri.DTSweepContext)
extern "C"  void DTSweep_Sweep_m4034626852 (Object_t * __this /* static, unused */, DTSweepContext_t1460735514 * ___tcx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweep::FinalizationConvexHull(Poly2Tri.DTSweepContext)
extern "C"  void DTSweep_FinalizationConvexHull_m3482046296 (Object_t * __this /* static, unused */, DTSweepContext_t1460735514 * ___tcx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweep::TurnAdvancingFrontConvex(Poly2Tri.DTSweepContext,Poly2Tri.AdvancingFrontNode,Poly2Tri.AdvancingFrontNode)
extern "C"  void DTSweep_TurnAdvancingFrontConvex_m1271315994 (Object_t * __this /* static, unused */, DTSweepContext_t1460735514 * ___tcx, AdvancingFrontNode_t390899251 * ___b, AdvancingFrontNode_t390899251 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweep::FinalizationPolygon(Poly2Tri.DTSweepContext)
extern "C"  void DTSweep_FinalizationPolygon_m352773540 (Object_t * __this /* static, unused */, DTSweepContext_t1460735514 * ___tcx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Poly2Tri.AdvancingFrontNode Poly2Tri.DTSweep::PointEvent(Poly2Tri.DTSweepContext,Poly2Tri.TriangulationPoint)
extern "C"  AdvancingFrontNode_t390899251 * DTSweep_PointEvent_m3638057364 (Object_t * __this /* static, unused */, DTSweepContext_t1460735514 * ___tcx, TriangulationPoint_t3512014760 * ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Poly2Tri.AdvancingFrontNode Poly2Tri.DTSweep::NewFrontTriangle(Poly2Tri.DTSweepContext,Poly2Tri.TriangulationPoint,Poly2Tri.AdvancingFrontNode)
extern "C"  AdvancingFrontNode_t390899251 * DTSweep_NewFrontTriangle_m2414781028 (Object_t * __this /* static, unused */, DTSweepContext_t1460735514 * ___tcx, TriangulationPoint_t3512014760 * ___point, AdvancingFrontNode_t390899251 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweep::EdgeEvent(Poly2Tri.DTSweepContext,Poly2Tri.DTSweepConstraint,Poly2Tri.AdvancingFrontNode)
extern "C"  void DTSweep_EdgeEvent_m3284880730 (Object_t * __this /* static, unused */, DTSweepContext_t1460735514 * ___tcx, DTSweepConstraint_t3042685824 * ___edge, AdvancingFrontNode_t390899251 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweep::FillEdgeEvent(Poly2Tri.DTSweepContext,Poly2Tri.DTSweepConstraint,Poly2Tri.AdvancingFrontNode)
extern "C"  void DTSweep_FillEdgeEvent_m3414371991 (Object_t * __this /* static, unused */, DTSweepContext_t1460735514 * ___tcx, DTSweepConstraint_t3042685824 * ___edge, AdvancingFrontNode_t390899251 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweep::FillRightConcaveEdgeEvent(Poly2Tri.DTSweepContext,Poly2Tri.DTSweepConstraint,Poly2Tri.AdvancingFrontNode)
extern "C"  void DTSweep_FillRightConcaveEdgeEvent_m2598689924 (Object_t * __this /* static, unused */, DTSweepContext_t1460735514 * ___tcx, DTSweepConstraint_t3042685824 * ___edge, AdvancingFrontNode_t390899251 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweep::FillRightConvexEdgeEvent(Poly2Tri.DTSweepContext,Poly2Tri.DTSweepConstraint,Poly2Tri.AdvancingFrontNode)
extern "C"  void DTSweep_FillRightConvexEdgeEvent_m2556095728 (Object_t * __this /* static, unused */, DTSweepContext_t1460735514 * ___tcx, DTSweepConstraint_t3042685824 * ___edge, AdvancingFrontNode_t390899251 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweep::FillRightBelowEdgeEvent(Poly2Tri.DTSweepContext,Poly2Tri.DTSweepConstraint,Poly2Tri.AdvancingFrontNode)
extern "C"  void DTSweep_FillRightBelowEdgeEvent_m636861986 (Object_t * __this /* static, unused */, DTSweepContext_t1460735514 * ___tcx, DTSweepConstraint_t3042685824 * ___edge, AdvancingFrontNode_t390899251 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweep::FillRightAboveEdgeEvent(Poly2Tri.DTSweepContext,Poly2Tri.DTSweepConstraint,Poly2Tri.AdvancingFrontNode)
extern "C"  void DTSweep_FillRightAboveEdgeEvent_m518092854 (Object_t * __this /* static, unused */, DTSweepContext_t1460735514 * ___tcx, DTSweepConstraint_t3042685824 * ___edge, AdvancingFrontNode_t390899251 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweep::FillLeftConvexEdgeEvent(Poly2Tri.DTSweepContext,Poly2Tri.DTSweepConstraint,Poly2Tri.AdvancingFrontNode)
extern "C"  void DTSweep_FillLeftConvexEdgeEvent_m4217343465 (Object_t * __this /* static, unused */, DTSweepContext_t1460735514 * ___tcx, DTSweepConstraint_t3042685824 * ___edge, AdvancingFrontNode_t390899251 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweep::FillLeftConcaveEdgeEvent(Poly2Tri.DTSweepContext,Poly2Tri.DTSweepConstraint,Poly2Tri.AdvancingFrontNode)
extern "C"  void DTSweep_FillLeftConcaveEdgeEvent_m2557762219 (Object_t * __this /* static, unused */, DTSweepContext_t1460735514 * ___tcx, DTSweepConstraint_t3042685824 * ___edge, AdvancingFrontNode_t390899251 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweep::FillLeftBelowEdgeEvent(Poly2Tri.DTSweepContext,Poly2Tri.DTSweepConstraint,Poly2Tri.AdvancingFrontNode)
extern "C"  void DTSweep_FillLeftBelowEdgeEvent_m3184302601 (Object_t * __this /* static, unused */, DTSweepContext_t1460735514 * ___tcx, DTSweepConstraint_t3042685824 * ___edge, AdvancingFrontNode_t390899251 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweep::FillLeftAboveEdgeEvent(Poly2Tri.DTSweepContext,Poly2Tri.DTSweepConstraint,Poly2Tri.AdvancingFrontNode)
extern "C"  void DTSweep_FillLeftAboveEdgeEvent_m3065533469 (Object_t * __this /* static, unused */, DTSweepContext_t1460735514 * ___tcx, DTSweepConstraint_t3042685824 * ___edge, AdvancingFrontNode_t390899251 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Poly2Tri.DTSweep::IsEdgeSideOfTriangle(Poly2Tri.DelaunayTriangle,Poly2Tri.TriangulationPoint,Poly2Tri.TriangulationPoint)
extern "C"  bool DTSweep_IsEdgeSideOfTriangle_m1491764689 (Object_t * __this /* static, unused */, DelaunayTriangle_t4179448534 * ___triangle, TriangulationPoint_t3512014760 * ___ep, TriangulationPoint_t3512014760 * ___eq, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweep::EdgeEvent(Poly2Tri.DTSweepContext,Poly2Tri.TriangulationPoint,Poly2Tri.TriangulationPoint,Poly2Tri.DelaunayTriangle,Poly2Tri.TriangulationPoint)
extern "C"  void DTSweep_EdgeEvent_m2052677805 (Object_t * __this /* static, unused */, DTSweepContext_t1460735514 * ___tcx, TriangulationPoint_t3512014760 * ___ep, TriangulationPoint_t3512014760 * ___eq, DelaunayTriangle_t4179448534 * ___triangle, TriangulationPoint_t3512014760 * ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweep::SplitEdge(Poly2Tri.TriangulationPoint,Poly2Tri.TriangulationPoint,Poly2Tri.TriangulationPoint)
extern "C"  void DTSweep_SplitEdge_m179604911 (Object_t * __this /* static, unused */, TriangulationPoint_t3512014760 * ___ep, TriangulationPoint_t3512014760 * ___eq, TriangulationPoint_t3512014760 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweep::FlipEdgeEvent(Poly2Tri.DTSweepContext,Poly2Tri.TriangulationPoint,Poly2Tri.TriangulationPoint,Poly2Tri.DelaunayTriangle,Poly2Tri.TriangulationPoint)
extern "C"  void DTSweep_FlipEdgeEvent_m3735188922 (Object_t * __this /* static, unused */, DTSweepContext_t1460735514 * ___tcx, TriangulationPoint_t3512014760 * ___ep, TriangulationPoint_t3512014760 * ___eq, DelaunayTriangle_t4179448534 * ___t, TriangulationPoint_t3512014760 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Poly2Tri.TriangulationPoint Poly2Tri.DTSweep::NextFlipPoint(Poly2Tri.TriangulationPoint,Poly2Tri.TriangulationPoint,Poly2Tri.DelaunayTriangle,Poly2Tri.TriangulationPoint)
extern "C"  TriangulationPoint_t3512014760 * DTSweep_NextFlipPoint_m258260627 (Object_t * __this /* static, unused */, TriangulationPoint_t3512014760 * ___ep, TriangulationPoint_t3512014760 * ___eq, DelaunayTriangle_t4179448534 * ___ot, TriangulationPoint_t3512014760 * ___op, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Poly2Tri.DelaunayTriangle Poly2Tri.DTSweep::NextFlipTriangle(Poly2Tri.DTSweepContext,Poly2Tri.Orientation,Poly2Tri.DelaunayTriangle,Poly2Tri.DelaunayTriangle,Poly2Tri.TriangulationPoint,Poly2Tri.TriangulationPoint)
extern "C"  DelaunayTriangle_t4179448534 * DTSweep_NextFlipTriangle_m1606823860 (Object_t * __this /* static, unused */, DTSweepContext_t1460735514 * ___tcx, int32_t ___o, DelaunayTriangle_t4179448534 * ___t, DelaunayTriangle_t4179448534 * ___ot, TriangulationPoint_t3512014760 * ___p, TriangulationPoint_t3512014760 * ___op, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweep::FlipScanEdgeEvent(Poly2Tri.DTSweepContext,Poly2Tri.TriangulationPoint,Poly2Tri.TriangulationPoint,Poly2Tri.DelaunayTriangle,Poly2Tri.DelaunayTriangle,Poly2Tri.TriangulationPoint)
extern "C"  void DTSweep_FlipScanEdgeEvent_m807980587 (Object_t * __this /* static, unused */, DTSweepContext_t1460735514 * ___tcx, TriangulationPoint_t3512014760 * ___ep, TriangulationPoint_t3512014760 * ___eq, DelaunayTriangle_t4179448534 * ___flipTriangle, DelaunayTriangle_t4179448534 * ___t, TriangulationPoint_t3512014760 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweep::FillAdvancingFront(Poly2Tri.DTSweepContext,Poly2Tri.AdvancingFrontNode)
extern "C"  void DTSweep_FillAdvancingFront_m401059108 (Object_t * __this /* static, unused */, DTSweepContext_t1460735514 * ___tcx, AdvancingFrontNode_t390899251 * ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweep::FillBasin(Poly2Tri.DTSweepContext,Poly2Tri.AdvancingFrontNode)
extern "C"  void DTSweep_FillBasin_m1334437425 (Object_t * __this /* static, unused */, DTSweepContext_t1460735514 * ___tcx, AdvancingFrontNode_t390899251 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweep::FillBasinReq(Poly2Tri.DTSweepContext,Poly2Tri.AdvancingFrontNode)
extern "C"  void DTSweep_FillBasinReq_m4216141961 (Object_t * __this /* static, unused */, DTSweepContext_t1460735514 * ___tcx, AdvancingFrontNode_t390899251 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Poly2Tri.DTSweep::IsShallow(Poly2Tri.DTSweepContext,Poly2Tri.AdvancingFrontNode)
extern "C"  bool DTSweep_IsShallow_m2837786705 (Object_t * __this /* static, unused */, DTSweepContext_t1460735514 * ___tcx, AdvancingFrontNode_t390899251 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Poly2Tri.DTSweep::HoleAngle(Poly2Tri.AdvancingFrontNode)
extern "C"  double DTSweep_HoleAngle_m2837547367 (Object_t * __this /* static, unused */, AdvancingFrontNode_t390899251 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Poly2Tri.DTSweep::BasinAngle(Poly2Tri.AdvancingFrontNode)
extern "C"  double DTSweep_BasinAngle_m1060517476 (Object_t * __this /* static, unused */, AdvancingFrontNode_t390899251 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweep::Fill(Poly2Tri.DTSweepContext,Poly2Tri.AdvancingFrontNode)
extern "C"  void DTSweep_Fill_m931423022 (Object_t * __this /* static, unused */, DTSweepContext_t1460735514 * ___tcx, AdvancingFrontNode_t390899251 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Poly2Tri.DTSweep::Legalize(Poly2Tri.DTSweepContext,Poly2Tri.DelaunayTriangle)
extern "C"  bool DTSweep_Legalize_m3414671615 (Object_t * __this /* static, unused */, DTSweepContext_t1460735514 * ___tcx, DelaunayTriangle_t4179448534 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweep::RotateTrianglePair(Poly2Tri.DelaunayTriangle,Poly2Tri.TriangulationPoint,Poly2Tri.DelaunayTriangle,Poly2Tri.TriangulationPoint)
extern "C"  void DTSweep_RotateTrianglePair_m1596024633 (Object_t * __this /* static, unused */, DelaunayTriangle_t4179448534 * ___t, TriangulationPoint_t3512014760 * ___p, DelaunayTriangle_t4179448534 * ___ot, TriangulationPoint_t3512014760 * ___op, const MethodInfo* method) IL2CPP_METHOD_ATTR;
