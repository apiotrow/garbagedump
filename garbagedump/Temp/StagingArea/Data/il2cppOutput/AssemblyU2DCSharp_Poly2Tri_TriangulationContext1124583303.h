#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Poly2Tri.DelaunayTriangle>
struct List_1_t681440207;
// System.Collections.Generic.List`1<Poly2Tri.TriangulationPoint>
struct List_1_t14006433;
// Poly2Tri.TriangulationDebugContext
struct TriangulationDebugContext_t2129059122;
// Poly2Tri.Triangulatable
struct Triangulatable_t1840283418;

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_Poly2Tri_TriangulationMode852988409.h"

// Poly2Tri.TriangulationContext
struct  TriangulationContext_t1124583303  : public Object_t
{
	// System.Collections.Generic.List`1<Poly2Tri.DelaunayTriangle> Poly2Tri.TriangulationContext::Triangles
	List_1_t681440207 * ___Triangles_0;
	// System.Collections.Generic.List`1<Poly2Tri.TriangulationPoint> Poly2Tri.TriangulationContext::Points
	List_1_t14006433 * ___Points_1;
	// Poly2Tri.TriangulationDebugContext Poly2Tri.TriangulationContext::<DebugContext>k__BackingField
	TriangulationDebugContext_t2129059122 * ___U3CDebugContextU3Ek__BackingField_2;
	// Poly2Tri.TriangulationMode Poly2Tri.TriangulationContext::<TriangulationMode>k__BackingField
	int32_t ___U3CTriangulationModeU3Ek__BackingField_3;
	// Poly2Tri.Triangulatable Poly2Tri.TriangulationContext::<Triangulatable>k__BackingField
	Object_t * ___U3CTriangulatableU3Ek__BackingField_4;
	// System.Int32 Poly2Tri.TriangulationContext::<StepCount>k__BackingField
	int32_t ___U3CStepCountU3Ek__BackingField_5;
	// System.Boolean Poly2Tri.TriangulationContext::<IsDebugEnabled>k__BackingField
	bool ___U3CIsDebugEnabledU3Ek__BackingField_6;
};
