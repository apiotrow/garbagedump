#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Poly2Tri.DelaunayTriangle
struct DelaunayTriangle_t4179448534;
// Poly2Tri.TriangulationPoint
struct TriangulationPoint_t3512014760;
// Poly2Tri.AdvancingFrontNode
struct AdvancingFrontNode_t390899251;
// Poly2Tri.DTSweepConstraint
struct DTSweepConstraint_t3042685824;

#include "AssemblyU2DCSharp_Poly2Tri_TriangulationDebugConte2129059122.h"

// Poly2Tri.DTSweepDebugContext
struct  DTSweepDebugContext_t4136745599  : public TriangulationDebugContext_t2129059122
{
	// Poly2Tri.DelaunayTriangle Poly2Tri.DTSweepDebugContext::_primaryTriangle
	DelaunayTriangle_t4179448534 * ____primaryTriangle_1;
	// Poly2Tri.DelaunayTriangle Poly2Tri.DTSweepDebugContext::_secondaryTriangle
	DelaunayTriangle_t4179448534 * ____secondaryTriangle_2;
	// Poly2Tri.TriangulationPoint Poly2Tri.DTSweepDebugContext::_activePoint
	TriangulationPoint_t3512014760 * ____activePoint_3;
	// Poly2Tri.AdvancingFrontNode Poly2Tri.DTSweepDebugContext::_activeNode
	AdvancingFrontNode_t390899251 * ____activeNode_4;
	// Poly2Tri.DTSweepConstraint Poly2Tri.DTSweepDebugContext::_activeConstraint
	DTSweepConstraint_t3042685824 * ____activeConstraint_5;
};
