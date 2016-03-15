#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite
struct Sprite_t4006040370;
// Bone
struct Bone_t2076388;
// UnityEngine.Material
struct Material_t1886596500;
// Bone2DWeights
struct Bone2DWeights_t1758072805;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// Skin2DX
struct  Skin2DX_t3811977609  : public MonoBehaviour_t3012272455
{
	// UnityEngine.Sprite Skin2DX::sprite
	Sprite_t4006040370 * ___sprite_2;
	// Bone Skin2DX::root
	Bone_t2076388 * ___root_3;
	// UnityEngine.Material Skin2DX::material
	Material_t1886596500 * ___material_4;
	// System.Boolean Skin2DX::locked
	bool ___locked_5;
	// Bone2DWeights Skin2DX::boneWeights
	Bone2DWeights_t1758072805 * ___boneWeights_6;
};
