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

// Poly2Tri.DTSweepDebugContext
struct DTSweepDebugContext_t4136745599;
// Poly2Tri.DTSweepContext
struct DTSweepContext_t1460735514;
// Poly2Tri.DelaunayTriangle
struct DelaunayTriangle_t4179448534;
// Poly2Tri.TriangulationPoint
struct TriangulationPoint_t3512014760;
// Poly2Tri.AdvancingFrontNode
struct AdvancingFrontNode_t390899251;
// Poly2Tri.DTSweepConstraint
struct DTSweepConstraint_t3042685824;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Poly2Tri_DTSweepContext1460735514.h"
#include "AssemblyU2DCSharp_Poly2Tri_DelaunayTriangle4179448534.h"
#include "AssemblyU2DCSharp_Poly2Tri_TriangulationPoint3512014760.h"
#include "AssemblyU2DCSharp_Poly2Tri_AdvancingFrontNode390899251.h"
#include "AssemblyU2DCSharp_Poly2Tri_DTSweepConstraint3042685824.h"

// System.Void Poly2Tri.DTSweepDebugContext::.ctor(Poly2Tri.DTSweepContext)
extern "C"  void DTSweepDebugContext__ctor_m485523690 (DTSweepDebugContext_t4136745599 * __this, DTSweepContext_t1460735514 * ___tcx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Poly2Tri.DelaunayTriangle Poly2Tri.DTSweepDebugContext::get_PrimaryTriangle()
extern "C"  DelaunayTriangle_t4179448534 * DTSweepDebugContext_get_PrimaryTriangle_m4268308272 (DTSweepDebugContext_t4136745599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweepDebugContext::set_PrimaryTriangle(Poly2Tri.DelaunayTriangle)
extern "C"  void DTSweepDebugContext_set_PrimaryTriangle_m3721251491 (DTSweepDebugContext_t4136745599 * __this, DelaunayTriangle_t4179448534 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Poly2Tri.DelaunayTriangle Poly2Tri.DTSweepDebugContext::get_SecondaryTriangle()
extern "C"  DelaunayTriangle_t4179448534 * DTSweepDebugContext_get_SecondaryTriangle_m3051611874 (DTSweepDebugContext_t4136745599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweepDebugContext::set_SecondaryTriangle(Poly2Tri.DelaunayTriangle)
extern "C"  void DTSweepDebugContext_set_SecondaryTriangle_m1155443953 (DTSweepDebugContext_t4136745599 * __this, DelaunayTriangle_t4179448534 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Poly2Tri.TriangulationPoint Poly2Tri.DTSweepDebugContext::get_ActivePoint()
extern "C"  TriangulationPoint_t3512014760 * DTSweepDebugContext_get_ActivePoint_m3239051010 (DTSweepDebugContext_t4136745599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweepDebugContext::set_ActivePoint(Poly2Tri.TriangulationPoint)
extern "C"  void DTSweepDebugContext_set_ActivePoint_m2333385681 (DTSweepDebugContext_t4136745599 * __this, TriangulationPoint_t3512014760 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Poly2Tri.AdvancingFrontNode Poly2Tri.DTSweepDebugContext::get_ActiveNode()
extern "C"  AdvancingFrontNode_t390899251 * DTSweepDebugContext_get_ActiveNode_m176469511 (DTSweepDebugContext_t4136745599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweepDebugContext::set_ActiveNode(Poly2Tri.AdvancingFrontNode)
extern "C"  void DTSweepDebugContext_set_ActiveNode_m324877504 (DTSweepDebugContext_t4136745599 * __this, AdvancingFrontNode_t390899251 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Poly2Tri.DTSweepConstraint Poly2Tri.DTSweepDebugContext::get_ActiveConstraint()
extern "C"  DTSweepConstraint_t3042685824 * DTSweepDebugContext_get_ActiveConstraint_m2654969553 (DTSweepDebugContext_t4136745599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweepDebugContext::set_ActiveConstraint(Poly2Tri.DTSweepConstraint)
extern "C"  void DTSweepDebugContext_set_ActiveConstraint_m3624388744 (DTSweepDebugContext_t4136745599 * __this, DTSweepConstraint_t3042685824 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Poly2Tri.DTSweepDebugContext::get_IsDebugContext()
extern "C"  bool DTSweepDebugContext_get_IsDebugContext_m2143455483 (DTSweepDebugContext_t4136745599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.DTSweepDebugContext::Clear()
extern "C"  void DTSweepDebugContext_Clear_m1495498455 (DTSweepDebugContext_t4136745599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
