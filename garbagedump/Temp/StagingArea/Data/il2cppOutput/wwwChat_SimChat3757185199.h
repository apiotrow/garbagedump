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
// System.Collections.Generic.List`1<SimpleMessage>
struct List_1_t372460238;
// System.String[]
struct StringU5BU5D_t2956870243;
// SimChat/SimChatNetwork
struct SimChatNetwork_t2617935487;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3012272455;
// System.Action`1<SimpleMessage[]>
struct Action_1_t2569750681;

#include "mscorlib_System_Object837106420.h"

// SimChat
struct  SimChat_t3757185199  : public Object_t
{
	// System.String SimChat::message
	String_t* ___message_0;
	// System.Collections.Generic.List`1<SimpleMessage> SimChat::allMessages
	List_1_t372460238 * ___allMessages_1;
	// System.String[] SimChat::groupSenders
	StringU5BU5D_t2956870243* ___groupSenders_2;
	// SimChat/SimChatNetwork SimChat::scn
	SimChatNetwork_t2617935487 * ___scn_3;
	// System.Int32 SimChat::messageLength
	int32_t ___messageLength_4;
	// System.Single SimChat::delayTime
	float ___delayTime_5;
	// System.Boolean SimChat::continueToCheck
	bool ___continueToCheck_6;
	// UnityEngine.MonoBehaviour SimChat::mb
	MonoBehaviour_t3012272455 * ___mb_7;
	// System.Action`1<SimpleMessage[]> SimChat::receiveFunction
	Action_1_t2569750681 * ___receiveFunction_8;
	// System.Boolean SimChat::receiveFunctionSet
	bool ___receiveFunctionSet_9;
};
