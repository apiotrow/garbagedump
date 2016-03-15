#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.Collections.Generic.Queue`1<UnityEngine.RectTransform>
struct Queue_1_t730595081;
// UnityEngine.RectTransform
struct RectTransform_t3317474837;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// MessageList
struct  MessageList_t794521893  : public MonoBehaviour_t3012272455
{
	// UnityEngine.GameObject MessageList::uEntryPrefab
	GameObject_t4012695102 * ___uEntryPrefab_2;
	// System.Collections.Generic.Queue`1<UnityEngine.RectTransform> MessageList::mElements
	Queue_1_t730595081 * ___mElements_3;
	// UnityEngine.RectTransform MessageList::mOwnTransform
	RectTransform_t3317474837 * ___mOwnTransform_4;
	// System.Int32 MessageList::mMaxMessages
	int32_t ___mMaxMessages_5;
};
