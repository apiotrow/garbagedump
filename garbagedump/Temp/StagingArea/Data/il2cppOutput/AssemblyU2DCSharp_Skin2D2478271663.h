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
// Bone2DWeights
struct Bone2DWeights_t1758072805;
// UnityEngine.Material
struct Material_t1886596500;
// UnityEngine.MeshFilter
struct MeshFilter_t4177078322;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t102534413;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// Skin2D
struct  Skin2D_t2478271663  : public MonoBehaviour_t3012272455
{
	// UnityEngine.Sprite Skin2D::sprite
	Sprite_t4006040370 * ___sprite_2;
	// Bone2DWeights Skin2D::boneWeights
	Bone2DWeights_t1758072805 * ___boneWeights_3;
	// UnityEngine.Material Skin2D::lineMaterial
	Material_t1886596500 * ___lineMaterial_4;
	// UnityEngine.MeshFilter Skin2D::meshFilter
	MeshFilter_t4177078322 * ___meshFilter_5;
	// UnityEngine.SkinnedMeshRenderer Skin2D::skinnedMeshRenderer
	SkinnedMeshRenderer_t102534413 * ___skinnedMeshRenderer_6;
	// UnityEngine.GameObject Skin2D::lastSelected
	GameObject_t4012695102 * ___lastSelected_7;
};
