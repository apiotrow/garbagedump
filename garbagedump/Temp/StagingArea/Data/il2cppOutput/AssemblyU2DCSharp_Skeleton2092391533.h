#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pose
struct Pose_t2493617;
// UnityEngine.Shader
struct Shader_t3998140498;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// Skeleton
struct  Skeleton_t2092391533  : public MonoBehaviour_t3012272455
{
	// System.Boolean Skeleton::editMode
	bool ___editMode_2;
	// System.Boolean Skeleton::showBoneInfluence
	bool ___showBoneInfluence_3;
	// Pose Skeleton::basePose
	Pose_t2493617 * ___basePose_4;
	// Pose Skeleton::tempPose
	Pose_t2493617 * ___tempPose_5;
	// System.Boolean Skeleton::_flip
	bool ____flip_6;
	// System.Boolean Skeleton::_useShadows
	bool ____useShadows_7;
	// UnityEngine.Shader Skeleton::spriteShader
	Shader_t3998140498 * ___spriteShader_8;
	// UnityEngine.Shader Skeleton::spriteShadowsShader
	Shader_t3998140498 * ___spriteShadowsShader_9;
};
