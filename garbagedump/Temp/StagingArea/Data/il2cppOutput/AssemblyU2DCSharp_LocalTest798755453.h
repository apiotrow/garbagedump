#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Luz.Net.WebRtcNetwork
struct WebRtcNetwork_t1351645409;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_LocalTest_State80204913.h"

// LocalTest
struct  LocalTest_t798755453  : public MonoBehaviour_t3012272455
{
	// Luz.Net.WebRtcNetwork LocalTest::mServer
	WebRtcNetwork_t1351645409 * ___mServer_2;
	// Luz.Net.WebRtcNetwork LocalTest::mClient
	WebRtcNetwork_t1351645409 * ___mClient_3;
	// System.String LocalTest::mReliableTestMessage
	String_t* ___mReliableTestMessage_4;
	// System.String LocalTest::mUnreliableTestMessage
	String_t* ___mUnreliableTestMessage_5;
	// LocalTest/State LocalTest::mState
	int32_t ___mState_6;
};
