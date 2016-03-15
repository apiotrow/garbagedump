#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t102534413;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// ControlPoint
struct  ControlPoint_t2822317651  : public MonoBehaviour_t3012272455
{
	// UnityEngine.Color ControlPoint::color
	Color_t1588175760  ___color_2;
	// System.Single ControlPoint::size
	float ___size_3;
	// UnityEngine.Vector3 ControlPoint::originalPosition
	Vector3_t3525329789  ___originalPosition_4;
	// System.Int32 ControlPoint::index
	int32_t ___index_5;
	// UnityEngine.SkinnedMeshRenderer ControlPoint::skin
	SkinnedMeshRenderer_t102534413 * ___skin_6;
};
