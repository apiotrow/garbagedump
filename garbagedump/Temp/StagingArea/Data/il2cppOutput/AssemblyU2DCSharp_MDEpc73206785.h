#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t808643063;
// UnityEngine.CharacterController
struct CharacterController_t2029520850;
// UnityEngine.Animator
struct Animator_t792326996;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.Collections.Generic.List`1<MDEec>
struct List_1_t870165413;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"

// MDEpc
struct  MDEpc_t73206785  : public MonoBehaviour_t3012272455
{
	// UnityEngine.ParticleSystem[] MDEpc::hitEnemyParticleSystem
	ParticleSystemU5BU5D_t808643063* ___hitEnemyParticleSystem_2;
	// System.Single MDEpc::walkSpeed
	float ___walkSpeed_3;
	// System.Single MDEpc::gotHitSpeed
	float ___gotHitSpeed_4;
	// System.Int32 MDEpc::health
	int32_t ___health_5;
	// System.Single MDEpc::privPower
	float ___privPower_6;
	// UnityEngine.CharacterController MDEpc::controller
	CharacterController_t2029520850 * ___controller_7;
	// UnityEngine.Animator MDEpc::animator
	Animator_t792326996 * ___animator_8;
	// System.Boolean MDEpc::u
	bool ___u_9;
	// System.Boolean MDEpc::d
	bool ___d_10;
	// System.Boolean MDEpc::l
	bool ___l_11;
	// System.Boolean MDEpc::r
	bool ___r_12;
	// System.Boolean MDEpc::au
	bool ___au_13;
	// System.Boolean MDEpc::ad
	bool ___ad_14;
	// System.Boolean MDEpc::al
	bool ___al_15;
	// System.Boolean MDEpc::ar
	bool ___ar_16;
	// System.Single MDEpc::xGo
	float ___xGo_17;
	// System.Single MDEpc::yGo
	float ___yGo_18;
	// System.Single MDEpc::zGo
	float ___zGo_19;
	// System.Single MDEpc::ax
	float ___ax_20;
	// System.Single MDEpc::ay
	float ___ay_21;
	// System.Single MDEpc::az
	float ___az_22;
	// System.Boolean MDEpc::gotHit
	bool ___gotHit_23;
	// UnityEngine.Vector3 MDEpc::gotHitFlyToPos
	Vector3_t3525329789  ___gotHitFlyToPos_24;
	// System.Boolean MDEpc::readyToTakeDmgAgain
	bool ___readyToTakeDmgAgain_25;
	// UnityEngine.Vector3 MDEpc::lookRot
	Vector3_t3525329789  ___lookRot_26;
	// UnityEngine.LayerMask MDEpc::lay
	LayerMask_t1862190090  ___lay_27;
	// System.Boolean MDEpc::usingMouse
	bool ___usingMouse_28;
	// UnityEngine.Vector3 MDEpc::lookTarget
	Vector3_t3525329789  ___lookTarget_29;
	// UnityEngine.GameObject MDEpc::attackBox
	GameObject_t4012695102 * ___attackBox_30;
	// System.Collections.Generic.List`1<MDEec> MDEpc::hitList
	List_1_t870165413 * ___hitList_31;
};
