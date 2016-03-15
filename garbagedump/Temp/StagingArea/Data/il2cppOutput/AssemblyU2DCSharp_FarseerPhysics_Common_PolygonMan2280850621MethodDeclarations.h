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

// FarseerPhysics.Common.Vertices
struct Vertices_t3860051793;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_FarseerPhysics_Common_Vertices3860051793.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

// FarseerPhysics.Common.Vertices FarseerPhysics.Common.PolygonManipulation.SimplifyTools::CollinearSimplify(FarseerPhysics.Common.Vertices,System.Single)
extern "C"  Vertices_t3860051793 * SimplifyTools_CollinearSimplify_m2863445062 (Object_t * __this /* static, unused */, Vertices_t3860051793 * ___vertices, float ___collinearityTolerance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FarseerPhysics.Common.Vertices FarseerPhysics.Common.PolygonManipulation.SimplifyTools::CollinearSimplify(FarseerPhysics.Common.Vertices)
extern "C"  Vertices_t3860051793 * SimplifyTools_CollinearSimplify_m1605744417 (Object_t * __this /* static, unused */, Vertices_t3860051793 * ___vertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FarseerPhysics.Common.Vertices FarseerPhysics.Common.PolygonManipulation.SimplifyTools::DouglasPeuckerSimplify(FarseerPhysics.Common.Vertices,System.Single)
extern "C"  Vertices_t3860051793 * SimplifyTools_DouglasPeuckerSimplify_m39777843 (Object_t * __this /* static, unused */, Vertices_t3860051793 * ___vertices, float ___distanceTolerance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FarseerPhysics.Common.PolygonManipulation.SimplifyTools::SimplifySection(FarseerPhysics.Common.Vertices,System.Int32,System.Int32)
extern "C"  void SimplifyTools_SimplifySection_m2830305681 (Object_t * __this /* static, unused */, Vertices_t3860051793 * ___pts, int32_t ___i, int32_t ___j, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double FarseerPhysics.Common.PolygonManipulation.SimplifyTools::DistancePointPoint(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  double SimplifyTools_DistancePointPoint_m2954279278 (Object_t * __this /* static, unused */, Vector2_t3525329788  ___p, Vector2_t3525329788  ___p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double FarseerPhysics.Common.PolygonManipulation.SimplifyTools::DistancePointLine(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  double SimplifyTools_DistancePointLine_m3839046908 (Object_t * __this /* static, unused */, Vector2_t3525329788  ___p, Vector2_t3525329788  ___A, Vector2_t3525329788  ___B, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FarseerPhysics.Common.Vertices FarseerPhysics.Common.PolygonManipulation.SimplifyTools::ReduceByArea(FarseerPhysics.Common.Vertices,System.Single)
extern "C"  Vertices_t3860051793 * SimplifyTools_ReduceByArea_m1602724544 (Object_t * __this /* static, unused */, Vertices_t3860051793 * ___vertices, float ___areaTolerance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FarseerPhysics.Common.PolygonManipulation.SimplifyTools::MergeParallelEdges(FarseerPhysics.Common.Vertices,System.Single)
extern "C"  void SimplifyTools_MergeParallelEdges_m2772430443 (Object_t * __this /* static, unused */, Vertices_t3860051793 * ___vertices, float ___tolerance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FarseerPhysics.Common.Vertices FarseerPhysics.Common.PolygonManipulation.SimplifyTools::ReduceByDistance(FarseerPhysics.Common.Vertices,System.Single)
extern "C"  Vertices_t3860051793 * SimplifyTools_ReduceByDistance_m3429196328 (Object_t * __this /* static, unused */, Vertices_t3860051793 * ___vertices, float ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FarseerPhysics.Common.Vertices FarseerPhysics.Common.PolygonManipulation.SimplifyTools::ReduceByNth(FarseerPhysics.Common.Vertices,System.Int32)
extern "C"  Vertices_t3860051793 * SimplifyTools_ReduceByNth_m4074285823 (Object_t * __this /* static, unused */, Vertices_t3860051793 * ___vertices, int32_t ___Nth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FarseerPhysics.Common.PolygonManipulation.SimplifyTools::Area(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  float SimplifyTools_Area_m160456115 (Object_t * __this /* static, unused */, Vector2_t3525329788  ___a, Vector2_t3525329788  ___b, Vector2_t3525329788  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FarseerPhysics.Common.PolygonManipulation.SimplifyTools::Collinear(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  bool SimplifyTools_Collinear_m417289429 (Object_t * __this /* static, unused */, Vector2_t3525329788  ___a, Vector2_t3525329788  ___b, Vector2_t3525329788  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FarseerPhysics.Common.PolygonManipulation.SimplifyTools::Collinear(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C"  bool SimplifyTools_Collinear_m1720076026 (Object_t * __this /* static, unused */, Vector2_t3525329788  ___a, Vector2_t3525329788  ___b, Vector2_t3525329788  ___c, float ___tolerance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
