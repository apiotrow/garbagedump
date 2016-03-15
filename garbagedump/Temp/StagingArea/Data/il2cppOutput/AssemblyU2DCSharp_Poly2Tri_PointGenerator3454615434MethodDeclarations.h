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

// Poly2Tri.PointGenerator
struct PointGenerator_t3454615434;
// System.Collections.Generic.List`1<Poly2Tri.TriangulationPoint>
struct List_1_t14006433;

#include "codegen/il2cpp-codegen.h"

// System.Void Poly2Tri.PointGenerator::.ctor()
extern "C"  void PointGenerator__ctor_m929910431 (PointGenerator_t3454615434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.PointGenerator::.cctor()
extern "C"  void PointGenerator__cctor_m2575323374 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Poly2Tri.TriangulationPoint> Poly2Tri.PointGenerator::UniformDistribution(System.Int32,System.Double)
extern "C"  List_1_t14006433 * PointGenerator_UniformDistribution_m3883703373 (Object_t * __this /* static, unused */, int32_t ___n, double ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Poly2Tri.TriangulationPoint> Poly2Tri.PointGenerator::UniformGrid(System.Int32,System.Double)
extern "C"  List_1_t14006433 * PointGenerator_UniformGrid_m203238671 (Object_t * __this /* static, unused */, int32_t ___n, double ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
