#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Bone
struct Bone_t2076388;
// System.Func`2<Bone,System.Int32>
struct Func_2_t3638519063;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

// Bone
struct  Bone_t2076388  : public MonoBehaviour_t3012272455
{
	// System.Int32 Bone::index
	int32_t ___index_2;
	// System.Single Bone::length
	float ___length_3;
	// System.Boolean Bone::snapToParent
	bool ___snapToParent_4;
	// System.Boolean Bone::editMode
	bool ___editMode_5;
	// System.Boolean Bone::showInfluence
	bool ___showInfluence_6;
	// System.Boolean Bone::deform
	bool ___deform_7;
	// System.Single Bone::influenceTail
	float ___influenceTail_8;
	// System.Single Bone::influenceHead
	float ___influenceHead_9;
	// System.Single Bone::zOrder
	float ___zOrder_10;
	// UnityEngine.Color Bone::color
	Color_t1588175760  ___color_11;
	// Bone Bone::parent
	Bone_t2076388 * ___parent_12;
};
struct Bone_t2076388_StaticFields{
	// System.Func`2<Bone,System.Int32> Bone::<>f__am$cacheB
	Func_2_t3638519063 * ___U3CU3Ef__amU24cacheB_13;
};
