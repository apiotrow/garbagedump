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

// Poly2Tri.TriangulationContext
struct TriangulationContext_t1124583303;
// Poly2Tri.TriangulationDebugContext
struct TriangulationDebugContext_t2129059122;
// Poly2Tri.Triangulatable
struct Triangulatable_t1840283418;
// System.String
struct String_t;
// Poly2Tri.DTSweepDebugContext
struct DTSweepDebugContext_t4136745599;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Poly2Tri_TriangulationDebugConte2129059122.h"
#include "AssemblyU2DCSharp_Poly2Tri_TriangulationMode852988409.h"
#include "mscorlib_System_String968488902.h"

// System.Void Poly2Tri.TriangulationContext::.ctor()
extern "C"  void TriangulationContext__ctor_m2063513602 (TriangulationContext_t1124583303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Poly2Tri.TriangulationDebugContext Poly2Tri.TriangulationContext::get_DebugContext()
extern "C"  TriangulationDebugContext_t2129059122 * TriangulationContext_get_DebugContext_m2547564364 (TriangulationContext_t1124583303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.TriangulationContext::set_DebugContext(Poly2Tri.TriangulationDebugContext)
extern "C"  void TriangulationContext_set_DebugContext_m590507865 (TriangulationContext_t1124583303 * __this, TriangulationDebugContext_t2129059122 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Poly2Tri.TriangulationMode Poly2Tri.TriangulationContext::get_TriangulationMode()
extern "C"  int32_t TriangulationContext_get_TriangulationMode_m557814685 (TriangulationContext_t1124583303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.TriangulationContext::set_TriangulationMode(Poly2Tri.TriangulationMode)
extern "C"  void TriangulationContext_set_TriangulationMode_m1837905196 (TriangulationContext_t1124583303 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Poly2Tri.Triangulatable Poly2Tri.TriangulationContext::get_Triangulatable()
extern "C"  Object_t * TriangulationContext_get_Triangulatable_m3295875303 (TriangulationContext_t1124583303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.TriangulationContext::set_Triangulatable(Poly2Tri.Triangulatable)
extern "C"  void TriangulationContext_set_Triangulatable_m1884377188 (TriangulationContext_t1124583303 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Poly2Tri.TriangulationContext::get_StepCount()
extern "C"  int32_t TriangulationContext_get_StepCount_m88781096 (TriangulationContext_t1124583303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.TriangulationContext::set_StepCount(System.Int32)
extern "C"  void TriangulationContext_set_StepCount_m859234039 (TriangulationContext_t1124583303 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.TriangulationContext::Done()
extern "C"  void TriangulationContext_Done_m2231318532 (TriangulationContext_t1124583303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.TriangulationContext::PrepareTriangulation(Poly2Tri.Triangulatable)
extern "C"  void TriangulationContext_PrepareTriangulation_m1794161164 (TriangulationContext_t1124583303 * __this, Object_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.TriangulationContext::Update(System.String)
extern "C"  void TriangulationContext_Update_m3969480087 (TriangulationContext_t1124583303 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.TriangulationContext::Clear()
extern "C"  void TriangulationContext_Clear_m3764614189 (TriangulationContext_t1124583303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Poly2Tri.TriangulationContext::get_IsDebugEnabled()
extern "C"  bool TriangulationContext_get_IsDebugEnabled_m3347590031 (TriangulationContext_t1124583303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Poly2Tri.TriangulationContext::set_IsDebugEnabled(System.Boolean)
extern "C"  void TriangulationContext_set_IsDebugEnabled_m426615918 (TriangulationContext_t1124583303 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Poly2Tri.DTSweepDebugContext Poly2Tri.TriangulationContext::get_DTDebugContext()
extern "C"  DTSweepDebugContext_t4136745599 * TriangulationContext_get_DTDebugContext_m1869738601 (TriangulationContext_t1124583303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
