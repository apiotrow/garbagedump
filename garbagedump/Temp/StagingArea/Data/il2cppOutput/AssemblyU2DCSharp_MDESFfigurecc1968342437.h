#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t792326996;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;
// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// MDESFfigurecc
struct  MDESFfigurecc_t1968342437  : public MonoBehaviour_t3012272455
{
	// UnityEngine.Animator MDESFfigurecc::anim
	Animator_t792326996 * ___anim_2;
	// System.Boolean MDESFfigurecc::performHit
	bool ___performHit_3;
	// UnityEngine.GameObject MDESFfigurecc::attLoc
	GameObject_t4012695102 * ___attLoc_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MDESFfigurecc::hitList
	List_1_t514686775 * ___hitList_5;
	// UnityEngine.Transform MDESFfigurecc::enemy
	Transform_t284553113 * ___enemy_6;
};
