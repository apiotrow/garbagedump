#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SimChat
struct SimChat_t3757185199;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.String
struct String_t;
// UnityScript.Lang.Array
struct Array_t1209885965;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

// testSingleChat
struct  testSingleChat_t199113202  : public MonoBehaviour_t3012272455
{
	// SimChat testSingleChat::sc
	SimChat_t3757185199 * ___sc_2;
	// System.String[] testSingleChat::names
	StringU5BU5D_t2956870243* ___names_3;
	// System.String testSingleChat::chatName
	String_t* ___chatName_4;
	// System.Boolean testSingleChat::show
	bool ___show_5;
	// UnityEngine.Vector2 testSingleChat::sp
	Vector2_t3525329788  ___sp_6;
	// UnityEngine.Rect testSingleChat::chatRect
	Rect_t1525428817  ___chatRect_7;
	// UnityEngine.Color testSingleChat::c
	Color_t1588175760  ___c_8;
	// System.Single testSingleChat::rt
	float ___rt_9;
	// UnityScript.Lang.Array testSingleChat::sendingMessages
	Array_t1209885965 * ___sendingMessages_10;
};
