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

// Poly2Tri.TriangulationPoint
struct TriangulationPoint_t3512014760;
// System.Collections.Generic.List`1<Poly2Tri.DTSweepConstraint>
struct List_1_t3839644793;
// System.String
struct String_t;
// Poly2Tri.DTSweepConstraint
struct DTSweepConstraint_t3042685824;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Poly2Tri_DTSweepConstraint3042685824.h"

// System.Void Poly2Tri.TriangulationPoint::.ctor(System.Double,System.Double)
extern "C"  void TriangulationPoint__ctor_m448500445 (TriangulationPoint_t3512014760 * __this, double ___x, double ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Poly2Tri.DTSweepConstraint> Poly2Tri.TriangulationPoint::get_Edges()
extern "C"  List_1_t3839644793 * TriangulationPoint_get_Edges_m725304303 (TriangulationPoint_t3512014760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.TriangulationPoint::set_Edges(System.Collections.Generic.List`1<Poly2Tri.DTSweepConstraint>)
extern "C"  void TriangulationPoint_set_Edges_m1631844906 (TriangulationPoint_t3512014760 * __this, List_1_t3839644793 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Poly2Tri.TriangulationPoint::ToString()
extern "C"  String_t* TriangulationPoint_ToString_m422529868 (TriangulationPoint_t3512014760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Poly2Tri.TriangulationPoint::get_Xf()
extern "C"  float TriangulationPoint_get_Xf_m1866710350 (TriangulationPoint_t3512014760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.TriangulationPoint::set_Xf(System.Single)
extern "C"  void TriangulationPoint_set_Xf_m4200956765 (TriangulationPoint_t3512014760 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Poly2Tri.TriangulationPoint::get_Yf()
extern "C"  float TriangulationPoint_get_Yf_m1866740141 (TriangulationPoint_t3512014760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.TriangulationPoint::set_Yf(System.Single)
extern "C"  void TriangulationPoint_set_Yf_m1259299166 (TriangulationPoint_t3512014760 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.TriangulationPoint::AddEdge(Poly2Tri.DTSweepConstraint)
extern "C"  void TriangulationPoint_AddEdge_m2890133069 (TriangulationPoint_t3512014760 * __this, DTSweepConstraint_t3042685824 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Poly2Tri.TriangulationPoint::get_HasEdges()
extern "C"  bool TriangulationPoint_get_HasEdges_m4274859156 (TriangulationPoint_t3512014760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
