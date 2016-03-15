#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_Poly2Tri_FixedArray3_1_gen4075032131.h"
#include "AssemblyU2DCSharp_Poly2Tri_FixedArray3_1_gen447498609.h"
#include "AssemblyU2DCSharp_Poly2Tri_FixedBitArray3287406010.h"

// Poly2Tri.DelaunayTriangle
struct  DelaunayTriangle_t4179448534  : public Object_t
{
	// Poly2Tri.FixedArray3`1<Poly2Tri.TriangulationPoint> Poly2Tri.DelaunayTriangle::Points
	FixedArray3_1_t4075032131  ___Points_0;
	// Poly2Tri.FixedArray3`1<Poly2Tri.DelaunayTriangle> Poly2Tri.DelaunayTriangle::Neighbors
	FixedArray3_1_t447498609  ___Neighbors_1;
	// Poly2Tri.FixedBitArray3 Poly2Tri.DelaunayTriangle::EdgeIsConstrained
	FixedBitArray3_t287406010  ___EdgeIsConstrained_2;
	// Poly2Tri.FixedBitArray3 Poly2Tri.DelaunayTriangle::EdgeIsDelaunay
	FixedBitArray3_t287406010  ___EdgeIsDelaunay_3;
	// System.Boolean Poly2Tri.DelaunayTriangle::<IsInterior>k__BackingField
	bool ___U3CIsInteriorU3Ek__BackingField_4;
};
