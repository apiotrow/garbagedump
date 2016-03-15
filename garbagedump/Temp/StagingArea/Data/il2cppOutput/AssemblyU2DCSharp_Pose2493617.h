#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// RotationValue[]
struct RotationValueU5BU5D_t2819385442;
// PositionValue[]
struct PositionValueU5BU5D_t2481853113;

#include "UnityEngine_UnityEngine_ScriptableObject184905905.h"

// Pose
struct  Pose_t2493617  : public ScriptableObject_t184905905
{
	// RotationValue[] Pose::rotations
	RotationValueU5BU5D_t2819385442* ___rotations_2;
	// PositionValue[] Pose::positions
	PositionValueU5BU5D_t2481853113* ___positions_3;
	// PositionValue[] Pose::targets
	PositionValueU5BU5D_t2481853113* ___targets_4;
	// PositionValue[] Pose::controlPoints
	PositionValueU5BU5D_t2481853113* ___controlPoints_5;
};
