#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// dreamloLeaderBoard
struct dreamloLeaderBoard_t3691210423;
// dreamloPromoCode
struct dreamloPromoCode_t3884304758;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_LeaderBoardSample_gameState990064575.h"

// LeaderBoardSample
struct  LeaderBoardSample_t3131793223  : public MonoBehaviour_t3012272455
{
	// System.Single LeaderBoardSample::startTime
	float ___startTime_2;
	// System.Single LeaderBoardSample::timeLeft
	float ___timeLeft_3;
	// System.Int32 LeaderBoardSample::totalScore
	int32_t ___totalScore_4;
	// System.String LeaderBoardSample::playerName
	String_t* ___playerName_5;
	// System.String LeaderBoardSample::code
	String_t* ___code_6;
	// LeaderBoardSample/gameState LeaderBoardSample::gs
	int32_t ___gs_7;
	// dreamloLeaderBoard LeaderBoardSample::dl
	dreamloLeaderBoard_t3691210423 * ___dl_8;
	// dreamloPromoCode LeaderBoardSample::pc
	dreamloPromoCode_t3884304758 * ___pc_9;
};
