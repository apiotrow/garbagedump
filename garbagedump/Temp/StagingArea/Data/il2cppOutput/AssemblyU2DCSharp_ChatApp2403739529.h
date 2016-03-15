#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.InputField
struct InputField_t2345609593;
// MessageList
struct MessageList_t794521893;
// UnityEngine.UI.Button
struct Button_t990034267;
// Luz.ULib.Net.IBasicNetwork
struct IBasicNetwork_t1873463357;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// ChatApp
struct  ChatApp_t2403739529  : public MonoBehaviour_t3012272455
{
	// UnityEngine.UI.InputField ChatApp::uRoomName
	InputField_t2345609593 * ___uRoomName_2;
	// UnityEngine.UI.InputField ChatApp::uMessageField
	InputField_t2345609593 * ___uMessageField_3;
	// MessageList ChatApp::uOutput
	MessageList_t794521893 * ___uOutput_4;
	// UnityEngine.UI.Button ChatApp::uJoin
	Button_t990034267 * ___uJoin_5;
	// UnityEngine.UI.Button ChatApp::uSend
	Button_t990034267 * ___uSend_6;
	// UnityEngine.UI.Button ChatApp::uOpenRoom
	Button_t990034267 * ___uOpenRoom_7;
	// UnityEngine.UI.Button ChatApp::uShutdown
	Button_t990034267 * ___uShutdown_8;
	// Luz.ULib.Net.IBasicNetwork ChatApp::mNetwork
	Object_t * ___mNetwork_9;
	// System.Boolean ChatApp::mIsServer
	bool ___mIsServer_10;
	// System.String ChatApp::mWebRtcConfig
	String_t* ___mWebRtcConfig_11;
};
