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
// System.String[]
struct StringU5BU5D_t2956870243;
// SimpleMessage[]
struct SimpleMessageU5BU5D_t2421297976;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3012272455;
// System.Action`1<SimpleMessage[]>
struct Action_1_t2569750681;
// System.Action`1<System.String[]>
struct Action_1_t3105322948;

#include "mscorlib_System_Object837106420.h"

// SimChat/SimChatNetwork
struct  SimChatNetwork_t2617935487  : public Object_t
{
	// System.Int64 SimChat/SimChatNetwork::latest
	int64_t ___latest_3;
	// SimpleMessage[] SimChat/SimChatNetwork::receiveMessages
	SimpleMessageU5BU5D_t2421297976* ___receiveMessages_5;
	// UnityEngine.MonoBehaviour SimChat/SimChatNetwork::mb
	MonoBehaviour_t3012272455 * ___mb_6;
	// System.String SimChat/SimChatNetwork::name
	String_t* ___name_7;
	// System.Action`1<SimpleMessage[]> SimChat/SimChatNetwork::outMessageFunk
	Action_1_t2569750681 * ___outMessageFunk_8;
	// System.Boolean SimChat/SimChatNetwork::outputFunction
	bool ___outputFunction_9;
	// System.Action`1<System.String[]> SimChat/SimChatNetwork::receiveSenderNames
	Action_1_t3105322948 * ___receiveSenderNames_10;
	// System.Boolean SimChat/SimChatNetwork::senderFunctionSet
	bool ___senderFunctionSet_11;
};
struct SimChatNetwork_t2617935487_StaticFields{
	// System.String SimChat/SimChatNetwork::url
	String_t* ___url_0;
	// System.String[] SimChat/SimChatNetwork::splt
	StringU5BU5D_t2956870243* ___splt_1;
	// System.String[] SimChat/SimChatNetwork::senders
	StringU5BU5D_t2956870243* ___senders_2;
	// System.String SimChat/SimChatNetwork::key
	String_t* ___key_4;
};
