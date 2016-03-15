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

// Poly2Tri.AdvancingFront
struct AdvancingFront_t1157560593;
// Poly2Tri.AdvancingFrontNode
struct AdvancingFrontNode_t390899251;
// System.String
struct String_t;
// Poly2Tri.TriangulationPoint
struct TriangulationPoint_t3512014760;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Poly2Tri_AdvancingFrontNode390899251.h"
#include "AssemblyU2DCSharp_Poly2Tri_TriangulationPoint3512014760.h"

// System.Void Poly2Tri.AdvancingFront::.ctor(Poly2Tri.AdvancingFrontNode,Poly2Tri.AdvancingFrontNode)
extern "C"  void AdvancingFront__ctor_m4210862716 (AdvancingFront_t1157560593 * __this, AdvancingFrontNode_t390899251 * ___head, AdvancingFrontNode_t390899251 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.AdvancingFront::AddNode(Poly2Tri.AdvancingFrontNode)
extern "C"  void AdvancingFront_AddNode_m98820644 (AdvancingFront_t1157560593 * __this, AdvancingFrontNode_t390899251 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.AdvancingFront::RemoveNode(Poly2Tri.AdvancingFrontNode)
extern "C"  void AdvancingFront_RemoveNode_m1765530795 (AdvancingFront_t1157560593 * __this, AdvancingFrontNode_t390899251 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Poly2Tri.AdvancingFront::ToString()
extern "C"  String_t* AdvancingFront_ToString_m3615413813 (AdvancingFront_t1157560593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Poly2Tri.AdvancingFrontNode Poly2Tri.AdvancingFront::FindSearchNode(System.Double)
extern "C"  AdvancingFrontNode_t390899251 * AdvancingFront_FindSearchNode_m3006964657 (AdvancingFront_t1157560593 * __this, double ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Poly2Tri.AdvancingFrontNode Poly2Tri.AdvancingFront::LocateNode(Poly2Tri.TriangulationPoint)
extern "C"  AdvancingFrontNode_t390899251 * AdvancingFront_LocateNode_m2591422598 (AdvancingFront_t1157560593 * __this, TriangulationPoint_t3512014760 * ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Poly2Tri.AdvancingFrontNode Poly2Tri.AdvancingFront::LocateNode(System.Double)
extern "C"  AdvancingFrontNode_t390899251 * AdvancingFront_LocateNode_m2673138432 (AdvancingFront_t1157560593 * __this, double ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Poly2Tri.AdvancingFrontNode Poly2Tri.AdvancingFront::LocatePoint(Poly2Tri.TriangulationPoint)
extern "C"  AdvancingFrontNode_t390899251 * AdvancingFront_LocatePoint_m2371975318 (AdvancingFront_t1157560593 * __this, TriangulationPoint_t3512014760 * ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
