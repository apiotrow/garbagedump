#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Poly2Tri.AdvancingFrontNode
struct AdvancingFrontNode_t390899251;

#include "mscorlib_System_Object837106420.h"

// Poly2Tri.DTSweepBasin
struct  DTSweepBasin_t357131684  : public Object_t
{
	// Poly2Tri.AdvancingFrontNode Poly2Tri.DTSweepBasin::leftNode
	AdvancingFrontNode_t390899251 * ___leftNode_0;
	// Poly2Tri.AdvancingFrontNode Poly2Tri.DTSweepBasin::bottomNode
	AdvancingFrontNode_t390899251 * ___bottomNode_1;
	// Poly2Tri.AdvancingFrontNode Poly2Tri.DTSweepBasin::rightNode
	AdvancingFrontNode_t390899251 * ___rightNode_2;
	// System.Double Poly2Tri.DTSweepBasin::width
	double ___width_3;
	// System.Boolean Poly2Tri.DTSweepBasin::leftHighest
	bool ___leftHighest_4;
};
