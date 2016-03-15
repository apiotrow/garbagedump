#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Poly2Tri.TriangulationPoint>
struct List_1_t14006433;
// System.Collections.Generic.List`1<Poly2Tri.Polygon>
struct List_1_t3973864026;
// System.Collections.Generic.List`1<Poly2Tri.DelaunayTriangle>
struct List_1_t681440207;
// Poly2Tri.PolygonPoint
struct PolygonPoint_t127100125;

#include "mscorlib_System_Object837106420.h"

// Poly2Tri.Polygon
struct  Polygon_t3176905057  : public Object_t
{
	// System.Collections.Generic.List`1<Poly2Tri.TriangulationPoint> Poly2Tri.Polygon::_points
	List_1_t14006433 * ____points_0;
	// System.Collections.Generic.List`1<Poly2Tri.TriangulationPoint> Poly2Tri.Polygon::_steinerPoints
	List_1_t14006433 * ____steinerPoints_1;
	// System.Collections.Generic.List`1<Poly2Tri.Polygon> Poly2Tri.Polygon::_holes
	List_1_t3973864026 * ____holes_2;
	// System.Collections.Generic.List`1<Poly2Tri.DelaunayTriangle> Poly2Tri.Polygon::_triangles
	List_1_t681440207 * ____triangles_3;
	// Poly2Tri.PolygonPoint Poly2Tri.Polygon::_last
	PolygonPoint_t127100125 * ____last_4;
};
