#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.CharacterController
struct CharacterController_t2029520850;
// MDEpc
struct MDEpc_t73206785;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// MDEec
struct  MDEec_t73206444  : public MonoBehaviour_t3012272455
{
	// UnityEngine.CharacterController MDEec::controller
	CharacterController_t2029520850 * ___controller_2;
	// MDEpc MDEec::pc
	MDEpc_t73206785 * ___pc_3;
	// UnityEngine.Vector3 MDEec::playerPos
	Vector3_t3525329789  ___playerPos_4;
	// System.Single MDEec::moveSpeed
	float ___moveSpeed_5;
	// System.Boolean MDEec::beenHit
	bool ___beenHit_6;
	// System.Single MDEec::gotHitSpeed
	float ___gotHitSpeed_7;
	// UnityEngine.Vector3 MDEec::gotHitFlyToPos
	Vector3_t3525329789  ___gotHitFlyToPos_8;
	// System.Boolean MDEec::readyToGetHitAgain
	bool ___readyToGetHitAgain_9;
};
