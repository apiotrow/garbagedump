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
// Poly2Tri.TriangulationPoint
struct TriangulationPoint_t3512014760;
// Poly2Tri.DelaunayTriangle
struct DelaunayTriangle_t4179448534;

#include "mscorlib_System_Object837106420.h"

// Poly2Tri.AdvancingFrontNode
struct  AdvancingFrontNode_t390899251  : public Object_t
{
	// Poly2Tri.AdvancingFrontNode Poly2Tri.AdvancingFrontNode::Next
	AdvancingFrontNode_t390899251 * ___Next_0;
	// Poly2Tri.AdvancingFrontNode Poly2Tri.AdvancingFrontNode::Prev
	AdvancingFrontNode_t390899251 * ___Prev_1;
	// System.Double Poly2Tri.AdvancingFrontNode::Value
	double ___Value_2;
	// Poly2Tri.TriangulationPoint Poly2Tri.AdvancingFrontNode::Point
	TriangulationPoint_t3512014760 * ___Point_3;
	// Poly2Tri.DelaunayTriangle Poly2Tri.AdvancingFrontNode::Triangle
	DelaunayTriangle_t4179448534 * ___Triangle_4;
};
