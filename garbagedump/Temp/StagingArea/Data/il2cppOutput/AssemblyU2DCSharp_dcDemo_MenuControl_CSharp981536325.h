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
// UnityEngine.UI.InputField
struct InputField_t2345609593;
// UnityEngine.UI.Text
struct Text_t3286458198;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// dcDemo_MenuControl_CSharp
struct  dcDemo_MenuControl_CSharp_t981536325  : public MonoBehaviour_t3012272455
{
	// UnityEngine.GameObject dcDemo_MenuControl_CSharp::login_object
	GameObject_t4012695102 * ___login_object_2;
	// UnityEngine.GameObject dcDemo_MenuControl_CSharp::register_object
	GameObject_t4012695102 * ___register_object_3;
	// UnityEngine.GameObject dcDemo_MenuControl_CSharp::data_object
	GameObject_t4012695102 * ___data_object_4;
	// UnityEngine.GameObject dcDemo_MenuControl_CSharp::loading_object
	GameObject_t4012695102 * ___loading_object_5;
	// UnityEngine.UI.InputField dcDemo_MenuControl_CSharp::input_login_username
	InputField_t2345609593 * ___input_login_username_6;
	// UnityEngine.UI.InputField dcDemo_MenuControl_CSharp::input_login_password
	InputField_t2345609593 * ___input_login_password_7;
	// UnityEngine.UI.InputField dcDemo_MenuControl_CSharp::input_register_username
	InputField_t2345609593 * ___input_register_username_8;
	// UnityEngine.UI.InputField dcDemo_MenuControl_CSharp::input_register_password
	InputField_t2345609593 * ___input_register_password_9;
	// UnityEngine.UI.InputField dcDemo_MenuControl_CSharp::input_register_confirmPassword
	InputField_t2345609593 * ___input_register_confirmPassword_10;
	// UnityEngine.UI.InputField dcDemo_MenuControl_CSharp::input_data_sendData
	InputField_t2345609593 * ___input_data_sendData_11;
	// UnityEngine.UI.Text dcDemo_MenuControl_CSharp::login_error
	Text_t3286458198 * ___login_error_12;
	// UnityEngine.UI.Text dcDemo_MenuControl_CSharp::register_error
	Text_t3286458198 * ___register_error_13;
	// UnityEngine.UI.Text dcDemo_MenuControl_CSharp::sendData_error
	Text_t3286458198 * ___sendData_error_14;
	// UnityEngine.UI.Text dcDemo_MenuControl_CSharp::data_usernameText
	Text_t3286458198 * ___data_usernameText_15;
	// UnityEngine.UI.Text dcDemo_MenuControl_CSharp::data_gotDataText
	Text_t3286458198 * ___data_gotDataText_16;
	// System.Int32 dcDemo_MenuControl_CSharp::part
	int32_t ___part_17;
	// System.String dcDemo_MenuControl_CSharp::loggedIn_Username
	String_t* ___loggedIn_Username_18;
	// System.String dcDemo_MenuControl_CSharp::loggedIn_Password
	String_t* ___loggedIn_Password_19;
	// System.Boolean dcDemo_MenuControl_CSharp::isDatabaseSetup
	bool ___isDatabaseSetup_20;
};
