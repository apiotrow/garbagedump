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

// Poly2Tri.TriangulationUtil
struct TriangulationUtil_t853231704;
// Poly2Tri.TriangulationPoint
struct TriangulationPoint_t3512014760;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Poly2Tri_TriangulationPoint3512014760.h"
#include "AssemblyU2DCSharp_Poly2Tri_Orientation2138139127.h"

// System.Void Poly2Tri.TriangulationUtil::.ctor()
extern "C"  void TriangulationUtil__ctor_m2572262707 (TriangulationUtil_t853231704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.TriangulationUtil::.cctor()
extern "C"  void TriangulationUtil__cctor_m1948636378 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Poly2Tri.TriangulationUtil::SmartIncircle(Poly2Tri.TriangulationPoint,Poly2Tri.TriangulationPoint,Poly2Tri.TriangulationPoint,Poly2Tri.TriangulationPoint)
extern "C"  bool TriangulationUtil_SmartIncircle_m3400236851 (Object_t * __this /* static, unused */, TriangulationPoint_t3512014760 * ___pa, TriangulationPoint_t3512014760 * ___pb, TriangulationPoint_t3512014760 * ___pc, TriangulationPoint_t3512014760 * ___pd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Poly2Tri.TriangulationUtil::InScanArea(Poly2Tri.TriangulationPoint,Poly2Tri.TriangulationPoint,Poly2Tri.TriangulationPoint,Poly2Tri.TriangulationPoint)
extern "C"  bool TriangulationUtil_InScanArea_m1772437306 (Object_t * __this /* static, unused */, TriangulationPoint_t3512014760 * ___pa, TriangulationPoint_t3512014760 * ___pb, TriangulationPoint_t3512014760 * ___pc, TriangulationPoint_t3512014760 * ___pd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Poly2Tri.Orientation Poly2Tri.TriangulationUtil::Orient2d(Poly2Tri.TriangulationPoint,Poly2Tri.TriangulationPoint,Poly2Tri.TriangulationPoint)
extern "C"  int32_t TriangulationUtil_Orient2d_m1978777550 (Object_t * __this /* static, unused */, TriangulationPoint_t3512014760 * ___pa, TriangulationPoint_t3512014760 * ___pb, TriangulationPoint_t3512014760 * ___pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
