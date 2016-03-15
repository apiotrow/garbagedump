#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Poly2Tri.AdvancingFront
struct AdvancingFront_t1157560593;
// Poly2Tri.DTSweepBasin
struct DTSweepBasin_t357131684;
// Poly2Tri.DTSweepEdgeEvent
struct DTSweepEdgeEvent_t490439240;
// Poly2Tri.DTSweepPointComparator
struct DTSweepPointComparator_t4119019249;
// Poly2Tri.TriangulationPoint
struct TriangulationPoint_t3512014760;

#include "AssemblyU2DCSharp_Poly2Tri_TriangulationContext1124583303.h"

// Poly2Tri.DTSweepContext
struct  DTSweepContext_t1460735514  : public TriangulationContext_t1124583303
{
	// System.Single Poly2Tri.DTSweepContext::ALPHA
	float ___ALPHA_7;
	// Poly2Tri.AdvancingFront Poly2Tri.DTSweepContext::Front
	AdvancingFront_t1157560593 * ___Front_8;
	// Poly2Tri.DTSweepBasin Poly2Tri.DTSweepContext::Basin
	DTSweepBasin_t357131684 * ___Basin_9;
	// Poly2Tri.DTSweepEdgeEvent Poly2Tri.DTSweepContext::EdgeEvent
	DTSweepEdgeEvent_t490439240 * ___EdgeEvent_10;
	// Poly2Tri.DTSweepPointComparator Poly2Tri.DTSweepContext::_comparator
	DTSweepPointComparator_t4119019249 * ____comparator_11;
	// Poly2Tri.TriangulationPoint Poly2Tri.DTSweepContext::<Head>k__BackingField
	TriangulationPoint_t3512014760 * ___U3CHeadU3Ek__BackingField_12;
	// Poly2Tri.TriangulationPoint Poly2Tri.DTSweepContext::<Tail>k__BackingField
	TriangulationPoint_t3512014760 * ___U3CTailU3Ek__BackingField_13;
};
