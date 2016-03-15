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
// Poly2Tri.TriangulationPoint
struct TriangulationPoint_t3512014760;
// Poly2Tri.DelaunayTriangle
struct DelaunayTriangle_t4179448534;
// Poly2Tri.AdvancingFrontNode
struct AdvancingFrontNode_t390899251;
// Poly2Tri.Triangulatable
struct Triangulatable_t1840283418;
// Poly2Tri.TriangulationConstraint
struct TriangulationConstraint_t300934899;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Poly2Tri_TriangulationPoint3512014760.h"
#include "AssemblyU2DCSharp_Poly2Tri_DelaunayTriangle4179448534.h"
#include "AssemblyU2DCSharp_Poly2Tri_AdvancingFrontNode390899251.h"
#include "AssemblyU2DCSharp_Poly2Tri_TriangulationAlgorithm3890619911.h"

// System.Void Poly2Tri.DTSweepContext::.ctor()
extern "C"  void DTSweepContext__ctor_m2356994575 (DTSweepContext_t1460735514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Poly2Tri.TriangulationPoint Poly2Tri.DTSweepContext::get_Head()
extern "C"  TriangulationPoint_t3512014760 * DTSweepContext_get_Head_m4047095989 (DTSweepContext_t1460735514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweepContext::set_Head(Poly2Tri.TriangulationPoint)
extern "C"  void DTSweepContext_set_Head_m4061390422 (DTSweepContext_t1460735514 * __this, TriangulationPoint_t3512014760 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Poly2Tri.TriangulationPoint Poly2Tri.DTSweepContext::get_Tail()
extern "C"  TriangulationPoint_t3512014760 * DTSweepContext_get_Tail_m92230437 (DTSweepContext_t1460735514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweepContext::set_Tail(Poly2Tri.TriangulationPoint)
extern "C"  void DTSweepContext_set_Tail_m1679513062 (DTSweepContext_t1460735514 * __this, TriangulationPoint_t3512014760 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Poly2Tri.DTSweepContext::get_IsDebugEnabled()
extern "C"  bool DTSweepContext_get_IsDebugEnabled_m1330251682 (DTSweepContext_t1460735514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweepContext::set_IsDebugEnabled(System.Boolean)
extern "C"  void DTSweepContext_set_IsDebugEnabled_m2399312449 (DTSweepContext_t1460735514 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweepContext::RemoveFromList(Poly2Tri.DelaunayTriangle)
extern "C"  void DTSweepContext_RemoveFromList_m857034137 (DTSweepContext_t1460735514 * __this, DelaunayTriangle_t4179448534 * ___triangle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweepContext::MeshClean(Poly2Tri.DelaunayTriangle)
extern "C"  void DTSweepContext_MeshClean_m1902212465 (DTSweepContext_t1460735514 * __this, DelaunayTriangle_t4179448534 * ___triangle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweepContext::MeshCleanReq(Poly2Tri.DelaunayTriangle)
extern "C"  void DTSweepContext_MeshCleanReq_m1626764355 (DTSweepContext_t1460735514 * __this, DelaunayTriangle_t4179448534 * ___triangle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweepContext::Clear()
extern "C"  void DTSweepContext_Clear_m4058095162 (DTSweepContext_t1460735514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweepContext::AddNode(Poly2Tri.AdvancingFrontNode)
extern "C"  void DTSweepContext_AddNode_m533129325 (DTSweepContext_t1460735514 * __this, AdvancingFrontNode_t390899251 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweepContext::RemoveNode(Poly2Tri.AdvancingFrontNode)
extern "C"  void DTSweepContext_RemoveNode_m3813950914 (DTSweepContext_t1460735514 * __this, AdvancingFrontNode_t390899251 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Poly2Tri.AdvancingFrontNode Poly2Tri.DTSweepContext::LocateNode(Poly2Tri.TriangulationPoint)
extern "C"  AdvancingFrontNode_t390899251 * DTSweepContext_LocateNode_m344875421 (DTSweepContext_t1460735514 * __this, TriangulationPoint_t3512014760 * ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweepContext::CreateAdvancingFront()
extern "C"  void DTSweepContext_CreateAdvancingFront_m2955145371 (DTSweepContext_t1460735514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweepContext::MapTriangleToNodes(Poly2Tri.DelaunayTriangle)
extern "C"  void DTSweepContext_MapTriangleToNodes_m4229705491 (DTSweepContext_t1460735514 * __this, DelaunayTriangle_t4179448534 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweepContext::PrepareTriangulation(Poly2Tri.Triangulatable)
extern "C"  void DTSweepContext_PrepareTriangulation_m3414946393 (DTSweepContext_t1460735514 * __this, Object_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweepContext::FinalizeTriangulation()
extern "C"  void DTSweepContext_FinalizeTriangulation_m86989566 (DTSweepContext_t1460735514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Poly2Tri.TriangulationConstraint Poly2Tri.DTSweepContext::NewConstraint(Poly2Tri.TriangulationPoint,Poly2Tri.TriangulationPoint)
extern "C"  TriangulationConstraint_t300934899 * DTSweepContext_NewConstraint_m2435599334 (DTSweepContext_t1460735514 * __this, TriangulationPoint_t3512014760 * ___a, TriangulationPoint_t3512014760 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Poly2Tri.TriangulationAlgorithm Poly2Tri.DTSweepContext::get_Algorithm()
extern "C"  int32_t DTSweepContext_get_Algorithm_m3557920733 (DTSweepContext_t1460735514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
