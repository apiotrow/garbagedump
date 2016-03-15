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

// Poly2Tri.ConstrainedPointSet
struct ConstrainedPointSet_t3078630223;
// System.Collections.Generic.List`1<Poly2Tri.TriangulationPoint>
struct List_1_t14006433;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// Poly2Tri.TriangulationContext
struct TriangulationContext_t1124583303;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Poly2Tri_TriangulationMode852988409.h"
#include "AssemblyU2DCSharp_Poly2Tri_TriangulationContext1124583303.h"

// System.Void Poly2Tri.ConstrainedPointSet::.ctor(System.Collections.Generic.List`1<Poly2Tri.TriangulationPoint>,System.Int32[])
extern "C"  void ConstrainedPointSet__ctor_m629601003 (ConstrainedPointSet_t3078630223 * __this, List_1_t14006433 * ___points, Int32U5BU5D_t1809983122* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Poly2Tri.ConstrainedPointSet::get_EdgeIndex()
extern "C"  Int32U5BU5D_t1809983122* ConstrainedPointSet_get_EdgeIndex_m3693758074 (ConstrainedPointSet_t3078630223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.ConstrainedPointSet::set_EdgeIndex(System.Int32[])
extern "C"  void ConstrainedPointSet_set_EdgeIndex_m707822625 (ConstrainedPointSet_t3078630223 * __this, Int32U5BU5D_t1809983122* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Poly2Tri.TriangulationMode Poly2Tri.ConstrainedPointSet::get_TriangulationMode()
extern "C"  int32_t ConstrainedPointSet_get_TriangulationMode_m2839459279 (ConstrainedPointSet_t3078630223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.ConstrainedPointSet::Prepare(Poly2Tri.TriangulationContext)
extern "C"  void ConstrainedPointSet_Prepare_m347680488 (ConstrainedPointSet_t3078630223 * __this, TriangulationContext_t1124583303 * ___tcx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
