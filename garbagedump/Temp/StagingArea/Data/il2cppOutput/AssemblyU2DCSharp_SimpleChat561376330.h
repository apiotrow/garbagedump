#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;

#include "wwwChat_SimChat3757185199.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

// SimpleChat
struct  SimpleChat_t561376330  : public SimChat_t3757185199
{
	// System.Boolean SimpleChat::show
	bool ___show_10;
	// UnityEngine.Rect SimpleChat::chatRect
	Rect_t1525428817  ___chatRect_11;
	// System.Single SimpleChat::messageTime
	float ___messageTime_12;
	// System.Single SimpleChat::rt
	float ___rt_13;
	// System.Int32 SimpleChat::textSize
	int32_t ___textSize_14;
	// UnityEngine.Color SimpleChat::myColor
	Color_t1588175760  ___myColor_15;
	// UnityEngine.Color SimpleChat::theirColor
	Color_t1588175760  ___theirColor_16;
	// UnityEngine.Vector2 SimpleChat::sp
	Vector2_t3525329788  ___sp_17;
	// UnityEngine.Color SimpleChat::c
	Color_t1588175760  ___c_18;
	// System.Collections.Generic.List`1<System.String> SimpleChat::pending
	List_1_t1765447871 * ___pending_19;
};
