#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.String
struct String_t;
// DatabaseControl.DC/<GetUserData>d__16
struct U3CGetUserDataU3Ed__16_t1071847770;
// System.Object
struct Object_t;
// DatabaseControl.DC/<Login>d__b
struct U3CLoginU3Ed__b_t4066943599;
// DatabaseControl.DC/<RegisterUser>d__0
struct U3CRegisterUserU3Ed__0_t1686522240;
// DatabaseControl.DC/<SetUserData>d__21
struct U3CSetUserDataU3Ed__21_t131694976;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "DatabaseControl_U3CModuleU3E86524790.h"
#include "DatabaseControl_U3CModuleU3E86524790MethodDeclarations.h"
#include "DatabaseControl_DatabaseControl_DC2258322933.h"
#include "DatabaseControl_DatabaseControl_DC2258322933MethodDeclarations.h"
#include "mscorlib_System_String968488902.h"
#include "DatabaseControl_DatabaseControl_DC_U3CRegisterUser1686522240MethodDeclarations.h"
#include "DatabaseControl_DatabaseControl_DC_U3CRegisterUser1686522240.h"
#include "mscorlib_System_Void2779279689.h"
#include "mscorlib_System_Int322847414787.h"
#include "DatabaseControl_DatabaseControl_DC_U3CLoginU3Ed__b4066943599MethodDeclarations.h"
#include "DatabaseControl_DatabaseControl_DC_U3CLoginU3Ed__b4066943599.h"
#include "DatabaseControl_DatabaseControl_DC_U3CGetUserDataU1071847770MethodDeclarations.h"
#include "DatabaseControl_DatabaseControl_DC_U3CGetUserDataU1071847770.h"
#include "DatabaseControl_DatabaseControl_DC_U3CSetUserDataU3131694976MethodDeclarations.h"
#include "DatabaseControl_DatabaseControl_DC_U3CSetUserDataU3131694976.h"
#include "mscorlib_System_Boolean211005341.h"
#include "UnityEngine_UnityEngine_Resources1543782994MethodDeclarations.h"
#include "UnityEngine_UnityEngine_TextAsset2461560304MethodDeclarations.h"
#include "mscorlib_System_String968488902MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Debug1588791936MethodDeclarations.h"
#include "UnityEngine_UnityEngine_WWW1522972100MethodDeclarations.h"
#include "UnityEngine_UnityEngine_WWWForm3999572776MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Random3963434288MethodDeclarations.h"
#include "mscorlib_ArrayTypes.h"
#include "UnityEngine_UnityEngine_Object3878351788.h"
#include "UnityEngine_UnityEngine_TextAsset2461560304.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_StringSplitOptions3963075722.h"
#include "UnityEngine_UnityEngine_WWWForm3999572776.h"
#include "UnityEngine_UnityEngine_WWW1522972100.h"
#include "mscorlib_System_NotSupportedException1374155497MethodDeclarations.h"
#include "mscorlib_System_NotSupportedException1374155497.h"
#include "mscorlib_System_Object837106420MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.IEnumerator DatabaseControl.DC::RegisterUser(System.String,System.String,System.String)
extern TypeInfo* U3CRegisterUserU3Ed__0_t1686522240_il2cpp_TypeInfo_var;
extern const uint32_t DC_RegisterUser_m44181564_MetadataUsageId;
extern "C"  Object_t * DC_RegisterUser_m44181564 (Object_t * __this /* static, unused */, String_t* ___username, String_t* ___password, String_t* ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (DC_RegisterUser_m44181564_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	U3CRegisterUserU3Ed__0_t1686522240 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		U3CRegisterUserU3Ed__0_t1686522240 * L_0 = (U3CRegisterUserU3Ed__0_t1686522240 *)il2cpp_codegen_object_new(U3CRegisterUserU3Ed__0_t1686522240_il2cpp_TypeInfo_var);
		U3CRegisterUserU3Ed__0__ctor_m3605642404(L_0, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CRegisterUserU3Ed__0_t1686522240 * L_1 = V_0;
		String_t* L_2 = ___username;
		L_1->___username_2 = L_2;
		U3CRegisterUserU3Ed__0_t1686522240 * L_3 = V_0;
		String_t* L_4 = ___password;
		L_3->___password_3 = L_4;
		U3CRegisterUserU3Ed__0_t1686522240 * L_5 = V_0;
		String_t* L_6 = ___data;
		L_5->___data_4 = L_6;
		U3CRegisterUserU3Ed__0_t1686522240 * L_7 = V_0;
		V_1 = L_7;
		goto IL_0020;
	}

IL_0020:
	{
		Object_t * L_8 = V_1;
		return L_8;
	}
}
// System.Collections.IEnumerator DatabaseControl.DC::Login(System.String,System.String)
extern TypeInfo* U3CLoginU3Ed__b_t4066943599_il2cpp_TypeInfo_var;
extern const uint32_t DC_Login_m3974247491_MetadataUsageId;
extern "C"  Object_t * DC_Login_m3974247491 (Object_t * __this /* static, unused */, String_t* ___username, String_t* ___password, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (DC_Login_m3974247491_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	U3CLoginU3Ed__b_t4066943599 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		U3CLoginU3Ed__b_t4066943599 * L_0 = (U3CLoginU3Ed__b_t4066943599 *)il2cpp_codegen_object_new(U3CLoginU3Ed__b_t4066943599_il2cpp_TypeInfo_var);
		U3CLoginU3Ed__b__ctor_m2727567221(L_0, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CLoginU3Ed__b_t4066943599 * L_1 = V_0;
		String_t* L_2 = ___username;
		L_1->___username_2 = L_2;
		U3CLoginU3Ed__b_t4066943599 * L_3 = V_0;
		String_t* L_4 = ___password;
		L_3->___password_3 = L_4;
		U3CLoginU3Ed__b_t4066943599 * L_5 = V_0;
		V_1 = L_5;
		goto IL_0019;
	}

IL_0019:
	{
		Object_t * L_6 = V_1;
		return L_6;
	}
}
// System.Collections.IEnumerator DatabaseControl.DC::GetUserData(System.String,System.String)
extern TypeInfo* U3CGetUserDataU3Ed__16_t1071847770_il2cpp_TypeInfo_var;
extern const uint32_t DC_GetUserData_m3973550113_MetadataUsageId;
extern "C"  Object_t * DC_GetUserData_m3973550113 (Object_t * __this /* static, unused */, String_t* ___username, String_t* ___password, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (DC_GetUserData_m3973550113_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	U3CGetUserDataU3Ed__16_t1071847770 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		U3CGetUserDataU3Ed__16_t1071847770 * L_0 = (U3CGetUserDataU3Ed__16_t1071847770 *)il2cpp_codegen_object_new(U3CGetUserDataU3Ed__16_t1071847770_il2cpp_TypeInfo_var);
		U3CGetUserDataU3Ed__16__ctor_m2631219466(L_0, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetUserDataU3Ed__16_t1071847770 * L_1 = V_0;
		String_t* L_2 = ___username;
		L_1->___username_2 = L_2;
		U3CGetUserDataU3Ed__16_t1071847770 * L_3 = V_0;
		String_t* L_4 = ___password;
		L_3->___password_3 = L_4;
		U3CGetUserDataU3Ed__16_t1071847770 * L_5 = V_0;
		V_1 = L_5;
		goto IL_0019;
	}

IL_0019:
	{
		Object_t * L_6 = V_1;
		return L_6;
	}
}
// System.Collections.IEnumerator DatabaseControl.DC::SetUserData(System.String,System.String,System.String)
extern TypeInfo* U3CSetUserDataU3Ed__21_t131694976_il2cpp_TypeInfo_var;
extern const uint32_t DC_SetUserData_m1936153105_MetadataUsageId;
extern "C"  Object_t * DC_SetUserData_m1936153105 (Object_t * __this /* static, unused */, String_t* ___username, String_t* ___password, String_t* ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (DC_SetUserData_m1936153105_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	U3CSetUserDataU3Ed__21_t131694976 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		U3CSetUserDataU3Ed__21_t131694976 * L_0 = (U3CSetUserDataU3Ed__21_t131694976 *)il2cpp_codegen_object_new(U3CSetUserDataU3Ed__21_t131694976_il2cpp_TypeInfo_var);
		U3CSetUserDataU3Ed__21__ctor_m3595142308(L_0, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CSetUserDataU3Ed__21_t131694976 * L_1 = V_0;
		String_t* L_2 = ___username;
		L_1->___username_2 = L_2;
		U3CSetUserDataU3Ed__21_t131694976 * L_3 = V_0;
		String_t* L_4 = ___password;
		L_3->___password_3 = L_4;
		U3CSetUserDataU3Ed__21_t131694976 * L_5 = V_0;
		String_t* L_6 = ___data;
		L_5->___data_4 = L_6;
		U3CSetUserDataU3Ed__21_t131694976 * L_7 = V_0;
		V_1 = L_7;
		goto IL_0020;
	}

IL_0020:
	{
		Object_t * L_8 = V_1;
		return L_8;
	}
}
// System.Boolean DatabaseControl.DC/<GetUserData>d__16::MoveNext()
extern TypeInfo* TextAsset_t2461560304_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Debug_t1588791936_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t2956870243_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t3999572776_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t1522972100_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral0;
extern Il2CppCodeGenString* _stringLiteral3076010;
extern Il2CppCodeGenString* _stringLiteral48;
extern Il2CppCodeGenString* _stringLiteral2120789107;
extern Il2CppCodeGenString* _stringLiteral67232232;
extern Il2CppCodeGenString* _stringLiteral1440;
extern Il2CppCodeGenString* _stringLiteral4092450787;
extern Il2CppCodeGenString* _stringLiteral3575610;
extern Il2CppCodeGenString* _stringLiteral4219361312;
extern Il2CppCodeGenString* _stringLiteral110472352;
extern Il2CppCodeGenString* _stringLiteral1688905718;
extern Il2CppCodeGenString* _stringLiteral4029253846;
extern Il2CppCodeGenString* _stringLiteral1216985755;
extern Il2CppCodeGenString* _stringLiteral2039053656;
extern Il2CppCodeGenString* _stringLiteral3756296006;
extern Il2CppCodeGenString* _stringLiteral2321322330;
extern const uint32_t U3CGetUserDataU3Ed__16_MoveNext_m2153984563_MetadataUsageId;
extern "C"  bool U3CGetUserDataU3Ed__16_MoveNext_m2153984563 (U3CGetUserDataU3Ed__16_t1071847770 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U3CGetUserDataU3Ed__16_MoveNext_m2153984563_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t2956870243* V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	StringU5BU5D_t2956870243* V_4 = {0};
	int32_t G_B12_0 = 0;
	{
		int32_t L_0 = (__this->___U3CU3E1__state_1);
		V_2 = L_0;
		int32_t L_1 = V_2;
		if (L_1 == 0)
		{
			goto IL_0025;
		}
		if (L_1 == 1)
		{
			goto IL_001b;
		}
		if (L_1 == 2)
		{
			goto IL_0020;
		}
	}
	{
		goto IL_0027;
	}

IL_001b:
	{
		goto IL_0169;
	}

IL_0020:
	{
		goto IL_0291;
	}

IL_0025:
	{
		goto IL_002c;
	}

IL_0027:
	{
		goto IL_029a;
	}

IL_002c:
	{
		__this->___U3CU3E1__state_1 = (-1);
		__this->___U3CreturnTextU3E5__17_4 = _stringLiteral0;
		__this->___U3CdNameU3E5__18_5 = _stringLiteral0;
		__this->___U3CuNameU3E5__19_6 = _stringLiteral0;
		Object_t3878351788 * L_2 = Resources_Load_m2187391845(NULL /*static, unused*/, _stringLiteral3076010, /*hidden argument*/NULL);
		__this->___U3CsourceU3E5__1a_7 = ((TextAsset_t2461560304 *)IsInstClass(L_2, TextAsset_t2461560304_il2cpp_TypeInfo_var));
		TextAsset_t2461560304 * L_3 = (__this->___U3CsourceU3E5__1a_7);
		String_t* L_4 = TextAsset_get_text_m655578209(L_3, /*hidden argument*/NULL);
		__this->___U3CfileContentsU3E5__1b_8 = L_4;
		String_t* L_5 = (__this->___U3CfileContentsU3E5__1b_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_5, _stringLiteral48, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (L_7)
		{
			goto IL_00af;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1588791936_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628(NULL /*static, unused*/, _stringLiteral2120789107, /*hidden argument*/NULL);
		__this->___U3CreturnTextU3E5__17_4 = _stringLiteral67232232;
		goto IL_0138;
	}

IL_00af:
	{
		String_t* L_8 = (__this->___U3CfileContentsU3E5__1b_8);
		V_4 = ((StringU5BU5D_t2956870243*)SZArrayNew(StringU5BU5D_t2956870243_il2cpp_TypeInfo_var, (uint32_t)1));
		StringU5BU5D_t2956870243* L_9 = V_4;
		ArrayElementTypeCheck (L_9, _stringLiteral1440);
		*((String_t**)(String_t**)SZArrayLdElema(L_9, 0, sizeof(String_t*))) = (String_t*)_stringLiteral1440;
		StringU5BU5D_t2956870243* L_10 = V_4;
		StringU5BU5D_t2956870243* L_11 = String_Split_m459616251(L_8, L_10, 0, /*hidden argument*/NULL);
		V_0 = L_11;
		StringU5BU5D_t2956870243* L_12 = V_0;
		V_3 = (bool)((((Object_t*)(StringU5BU5D_t2956870243*)L_12) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		bool L_13 = V_3;
		if (L_13)
		{
			goto IL_012a;
		}
	}
	{
		StringU5BU5D_t2956870243* L_14 = V_0;
		int32_t L_15 = 1;
		if ((*(String_t**)(String_t**)SZArrayLdElema(L_14, L_15, sizeof(String_t*))))
		{
			goto IL_00e9;
		}
	}
	{
		StringU5BU5D_t2956870243* L_16 = V_0;
		int32_t L_17 = 2;
		G_B12_0 = ((((int32_t)((((Object_t*)(String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_16, L_17, sizeof(String_t*)))) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ea;
	}

IL_00e9:
	{
		G_B12_0 = 0;
	}

IL_00ea:
	{
		V_3 = (bool)G_B12_0;
		bool L_18 = V_3;
		if (L_18)
		{
			goto IL_011a;
		}
	}
	{
		StringU5BU5D_t2956870243* L_19 = V_0;
		int32_t L_20 = 1;
		String_t* L_21 = WWW_UnEscapeURL_m1534650378(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_19, L_20, sizeof(String_t*))), /*hidden argument*/NULL);
		__this->___U3CdNameU3E5__18_5 = L_21;
		StringU5BU5D_t2956870243* L_22 = V_0;
		int32_t L_23 = 2;
		String_t* L_24 = WWW_UnEscapeURL_m1534650378(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_22, L_23, sizeof(String_t*))), /*hidden argument*/NULL);
		__this->___U3CuNameU3E5__19_6 = L_24;
		__this->___U3CreturnTextU3E5__17_4 = _stringLiteral4092450787;
		goto IL_0127;
	}

IL_011a:
	{
		__this->___U3CreturnTextU3E5__17_4 = _stringLiteral67232232;
	}

IL_0127:
	{
		goto IL_0137;
	}

IL_012a:
	{
		__this->___U3CreturnTextU3E5__17_4 = _stringLiteral67232232;
	}

IL_0137:
	{
	}

IL_0138:
	{
		String_t* L_25 = (__this->___U3CreturnTextU3E5__17_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_26 = String_op_Inequality_m2125462205(NULL /*static, unused*/, L_25, _stringLiteral4092450787, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_3;
		if (L_27)
		{
			goto IL_0176;
		}
	}
	{
		__this->___U3CU3E2__current_0 = _stringLiteral67232232;
		__this->___U3CU3E1__state_1 = 1;
		V_1 = (bool)1;
		goto IL_029e;
	}

IL_0169:
	{
		__this->___U3CU3E1__state_1 = (-1);
		goto IL_0299;
	}

IL_0176:
	{
		WWWForm_t3999572776 * L_28 = (WWWForm_t3999572776 *)il2cpp_codegen_object_new(WWWForm_t3999572776_il2cpp_TypeInfo_var);
		WWWForm__ctor_m2306401574(L_28, /*hidden argument*/NULL);
		__this->___U3CformTwoU3E5__1c_9 = L_28;
		WWWForm_t3999572776 * L_29 = (__this->___U3CformTwoU3E5__1c_9);
		WWWForm_AddField_m474460647(L_29, _stringLiteral3575610, _stringLiteral4219361312, /*hidden argument*/NULL);
		WWWForm_t3999572776 * L_30 = (__this->___U3CformTwoU3E5__1c_9);
		String_t* L_31 = (__this->___U3CuNameU3E5__19_6);
		WWWForm_AddField_m474460647(L_30, _stringLiteral110472352, L_31, /*hidden argument*/NULL);
		WWWForm_t3999572776 * L_32 = (__this->___U3CformTwoU3E5__1c_9);
		String_t* L_33 = (__this->___U3CdNameU3E5__18_5);
		WWWForm_AddField_m474460647(L_32, _stringLiteral1688905718, L_33, /*hidden argument*/NULL);
		WWWForm_t3999572776 * L_34 = (__this->___U3CformTwoU3E5__1c_9);
		String_t* L_35 = (__this->___username_2);
		WWWForm_AddField_m474460647(L_34, _stringLiteral4029253846, L_35, /*hidden argument*/NULL);
		WWWForm_t3999572776 * L_36 = (__this->___U3CformTwoU3E5__1c_9);
		String_t* L_37 = (__this->___password_3);
		WWWForm_AddField_m474460647(L_36, _stringLiteral1216985755, L_37, /*hidden argument*/NULL);
		int32_t L_38 = Random_Range_m75452833(NULL /*static, unused*/, 0, 3, /*hidden argument*/NULL);
		__this->___U3CbobU3E5__1d_10 = L_38;
		__this->___U3CurlU3E5__1e_11 = _stringLiteral0;
		int32_t L_39 = (__this->___U3CbobU3E5__1d_10);
		V_3 = (bool)((((int32_t)((((int32_t)L_39) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_40 = V_3;
		if (L_40)
		{
			goto IL_0229;
		}
	}
	{
		__this->___U3CurlU3E5__1e_11 = _stringLiteral2039053656;
	}

IL_0229:
	{
		int32_t L_41 = (__this->___U3CbobU3E5__1d_10);
		V_3 = (bool)((((int32_t)((((int32_t)L_41) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_42 = V_3;
		if (L_42)
		{
			goto IL_0246;
		}
	}
	{
		__this->___U3CurlU3E5__1e_11 = _stringLiteral3756296006;
	}

IL_0246:
	{
		int32_t L_43 = (__this->___U3CbobU3E5__1d_10);
		V_3 = (bool)((((int32_t)((((int32_t)L_43) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_44 = V_3;
		if (L_44)
		{
			goto IL_0263;
		}
	}
	{
		__this->___U3CurlU3E5__1e_11 = _stringLiteral2321322330;
	}

IL_0263:
	{
		String_t* L_45 = (__this->___U3CurlU3E5__1e_11);
		WWWForm_t3999572776 * L_46 = (__this->___U3CformTwoU3E5__1c_9);
		WWW_t1522972100 * L_47 = (WWW_t1522972100 *)il2cpp_codegen_object_new(WWW_t1522972100_il2cpp_TypeInfo_var);
		WWW__ctor_m3818753408(L_47, L_45, L_46, /*hidden argument*/NULL);
		__this->___U3CwwwU3E5__1f_12 = L_47;
		WWW_t1522972100 * L_48 = (__this->___U3CwwwU3E5__1f_12);
		__this->___U3CU3E2__current_0 = L_48;
		__this->___U3CU3E1__state_1 = 2;
		V_1 = (bool)1;
		goto IL_029e;
	}

IL_0291:
	{
		__this->___U3CU3E1__state_1 = (-1);
	}

IL_0299:
	{
	}

IL_029a:
	{
		V_1 = (bool)0;
		goto IL_029e;
	}

IL_029e:
	{
		bool L_49 = V_1;
		return L_49;
	}
}
// System.Object DatabaseControl.DC/<GetUserData>d__16::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C"  Object_t * U3CGetUserDataU3Ed__16_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2046725740 (U3CGetUserDataU3Ed__16_t1071847770 * __this, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = (__this->___U3CU3E2__current_0);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Object_t * L_1 = V_0;
		return L_1;
	}
}
// System.Void DatabaseControl.DC/<GetUserData>d__16::System.Collections.IEnumerator.Reset()
extern TypeInfo* NotSupportedException_t1374155497_il2cpp_TypeInfo_var;
extern const uint32_t U3CGetUserDataU3Ed__16_System_Collections_IEnumerator_Reset_m1727724705_MetadataUsageId;
extern "C"  void U3CGetUserDataU3Ed__16_System_Collections_IEnumerator_Reset_m1727724705 (U3CGetUserDataU3Ed__16_t1071847770 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U3CGetUserDataU3Ed__16_System_Collections_IEnumerator_Reset_m1727724705_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t1374155497 * L_0 = (NotSupportedException_t1374155497 *)il2cpp_codegen_object_new(NotSupportedException_t1374155497_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m149930845(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void DatabaseControl.DC/<GetUserData>d__16::System.IDisposable.Dispose()
extern "C"  void U3CGetUserDataU3Ed__16_System_IDisposable_Dispose_m1658350598 (U3CGetUserDataU3Ed__16_t1071847770 * __this, const MethodInfo* method)
{
	StringU5BU5D_t2956870243* V_0 = {0};
	{
		return;
	}
}
// System.Object DatabaseControl.DC/<GetUserData>d__16::System.Collections.IEnumerator.get_Current()
extern "C"  Object_t * U3CGetUserDataU3Ed__16_System_Collections_IEnumerator_get_Current_m3552972813 (U3CGetUserDataU3Ed__16_t1071847770 * __this, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = (__this->___U3CU3E2__current_0);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Object_t * L_1 = V_0;
		return L_1;
	}
}
// System.Void DatabaseControl.DC/<GetUserData>d__16::.ctor(System.Int32)
extern "C"  void U3CGetUserDataU3Ed__16__ctor_m2631219466 (U3CGetUserDataU3Ed__16_t1071847770 * __this, int32_t ___U3CU3E1__state, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state;
		__this->___U3CU3E1__state_1 = L_0;
		return;
	}
}
// System.Boolean DatabaseControl.DC/<Login>d__b::MoveNext()
extern TypeInfo* TextAsset_t2461560304_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Debug_t1588791936_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t2956870243_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t3999572776_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t1522972100_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral0;
extern Il2CppCodeGenString* _stringLiteral3076010;
extern Il2CppCodeGenString* _stringLiteral48;
extern Il2CppCodeGenString* _stringLiteral1973603511;
extern Il2CppCodeGenString* _stringLiteral67232232;
extern Il2CppCodeGenString* _stringLiteral1440;
extern Il2CppCodeGenString* _stringLiteral4092450787;
extern Il2CppCodeGenString* _stringLiteral3575610;
extern Il2CppCodeGenString* _stringLiteral398457145;
extern Il2CppCodeGenString* _stringLiteral110472352;
extern Il2CppCodeGenString* _stringLiteral1688905718;
extern Il2CppCodeGenString* _stringLiteral4029253846;
extern Il2CppCodeGenString* _stringLiteral1216985755;
extern Il2CppCodeGenString* _stringLiteral2039053656;
extern Il2CppCodeGenString* _stringLiteral3756296006;
extern Il2CppCodeGenString* _stringLiteral2321322330;
extern const uint32_t U3CLoginU3Ed__b_MoveNext_m364742176_MetadataUsageId;
extern "C"  bool U3CLoginU3Ed__b_MoveNext_m364742176 (U3CLoginU3Ed__b_t4066943599 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U3CLoginU3Ed__b_MoveNext_m364742176_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t2956870243* V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	StringU5BU5D_t2956870243* V_4 = {0};
	int32_t G_B12_0 = 0;
	{
		int32_t L_0 = (__this->___U3CU3E1__state_1);
		V_2 = L_0;
		int32_t L_1 = V_2;
		if (L_1 == 0)
		{
			goto IL_0025;
		}
		if (L_1 == 1)
		{
			goto IL_001b;
		}
		if (L_1 == 2)
		{
			goto IL_0020;
		}
	}
	{
		goto IL_0027;
	}

IL_001b:
	{
		goto IL_0169;
	}

IL_0020:
	{
		goto IL_0291;
	}

IL_0025:
	{
		goto IL_002c;
	}

IL_0027:
	{
		goto IL_029a;
	}

IL_002c:
	{
		__this->___U3CU3E1__state_1 = (-1);
		__this->___U3CreturnTextU3E5__c_4 = _stringLiteral0;
		__this->___U3CdNameU3E5__d_5 = _stringLiteral0;
		__this->___U3CuNameU3E5__e_6 = _stringLiteral0;
		Object_t3878351788 * L_2 = Resources_Load_m2187391845(NULL /*static, unused*/, _stringLiteral3076010, /*hidden argument*/NULL);
		__this->___U3CsourceU3E5__f_7 = ((TextAsset_t2461560304 *)IsInstClass(L_2, TextAsset_t2461560304_il2cpp_TypeInfo_var));
		TextAsset_t2461560304 * L_3 = (__this->___U3CsourceU3E5__f_7);
		String_t* L_4 = TextAsset_get_text_m655578209(L_3, /*hidden argument*/NULL);
		__this->___U3CfileContentsU3E5__10_8 = L_4;
		String_t* L_5 = (__this->___U3CfileContentsU3E5__10_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_5, _stringLiteral48, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (L_7)
		{
			goto IL_00af;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1588791936_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628(NULL /*static, unused*/, _stringLiteral1973603511, /*hidden argument*/NULL);
		__this->___U3CreturnTextU3E5__c_4 = _stringLiteral67232232;
		goto IL_0138;
	}

IL_00af:
	{
		String_t* L_8 = (__this->___U3CfileContentsU3E5__10_8);
		V_4 = ((StringU5BU5D_t2956870243*)SZArrayNew(StringU5BU5D_t2956870243_il2cpp_TypeInfo_var, (uint32_t)1));
		StringU5BU5D_t2956870243* L_9 = V_4;
		ArrayElementTypeCheck (L_9, _stringLiteral1440);
		*((String_t**)(String_t**)SZArrayLdElema(L_9, 0, sizeof(String_t*))) = (String_t*)_stringLiteral1440;
		StringU5BU5D_t2956870243* L_10 = V_4;
		StringU5BU5D_t2956870243* L_11 = String_Split_m459616251(L_8, L_10, 0, /*hidden argument*/NULL);
		V_0 = L_11;
		StringU5BU5D_t2956870243* L_12 = V_0;
		V_3 = (bool)((((Object_t*)(StringU5BU5D_t2956870243*)L_12) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		bool L_13 = V_3;
		if (L_13)
		{
			goto IL_012a;
		}
	}
	{
		StringU5BU5D_t2956870243* L_14 = V_0;
		int32_t L_15 = 1;
		if ((*(String_t**)(String_t**)SZArrayLdElema(L_14, L_15, sizeof(String_t*))))
		{
			goto IL_00e9;
		}
	}
	{
		StringU5BU5D_t2956870243* L_16 = V_0;
		int32_t L_17 = 2;
		G_B12_0 = ((((int32_t)((((Object_t*)(String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_16, L_17, sizeof(String_t*)))) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ea;
	}

IL_00e9:
	{
		G_B12_0 = 0;
	}

IL_00ea:
	{
		V_3 = (bool)G_B12_0;
		bool L_18 = V_3;
		if (L_18)
		{
			goto IL_011a;
		}
	}
	{
		StringU5BU5D_t2956870243* L_19 = V_0;
		int32_t L_20 = 1;
		String_t* L_21 = WWW_UnEscapeURL_m1534650378(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_19, L_20, sizeof(String_t*))), /*hidden argument*/NULL);
		__this->___U3CdNameU3E5__d_5 = L_21;
		StringU5BU5D_t2956870243* L_22 = V_0;
		int32_t L_23 = 2;
		String_t* L_24 = WWW_UnEscapeURL_m1534650378(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_22, L_23, sizeof(String_t*))), /*hidden argument*/NULL);
		__this->___U3CuNameU3E5__e_6 = L_24;
		__this->___U3CreturnTextU3E5__c_4 = _stringLiteral4092450787;
		goto IL_0127;
	}

IL_011a:
	{
		__this->___U3CreturnTextU3E5__c_4 = _stringLiteral67232232;
	}

IL_0127:
	{
		goto IL_0137;
	}

IL_012a:
	{
		__this->___U3CreturnTextU3E5__c_4 = _stringLiteral67232232;
	}

IL_0137:
	{
	}

IL_0138:
	{
		String_t* L_25 = (__this->___U3CreturnTextU3E5__c_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_26 = String_op_Inequality_m2125462205(NULL /*static, unused*/, L_25, _stringLiteral4092450787, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_3;
		if (L_27)
		{
			goto IL_0176;
		}
	}
	{
		__this->___U3CU3E2__current_0 = _stringLiteral67232232;
		__this->___U3CU3E1__state_1 = 1;
		V_1 = (bool)1;
		goto IL_029e;
	}

IL_0169:
	{
		__this->___U3CU3E1__state_1 = (-1);
		goto IL_0299;
	}

IL_0176:
	{
		WWWForm_t3999572776 * L_28 = (WWWForm_t3999572776 *)il2cpp_codegen_object_new(WWWForm_t3999572776_il2cpp_TypeInfo_var);
		WWWForm__ctor_m2306401574(L_28, /*hidden argument*/NULL);
		__this->___U3CformTwoU3E5__11_9 = L_28;
		WWWForm_t3999572776 * L_29 = (__this->___U3CformTwoU3E5__11_9);
		WWWForm_AddField_m474460647(L_29, _stringLiteral3575610, _stringLiteral398457145, /*hidden argument*/NULL);
		WWWForm_t3999572776 * L_30 = (__this->___U3CformTwoU3E5__11_9);
		String_t* L_31 = (__this->___U3CuNameU3E5__e_6);
		WWWForm_AddField_m474460647(L_30, _stringLiteral110472352, L_31, /*hidden argument*/NULL);
		WWWForm_t3999572776 * L_32 = (__this->___U3CformTwoU3E5__11_9);
		String_t* L_33 = (__this->___U3CdNameU3E5__d_5);
		WWWForm_AddField_m474460647(L_32, _stringLiteral1688905718, L_33, /*hidden argument*/NULL);
		WWWForm_t3999572776 * L_34 = (__this->___U3CformTwoU3E5__11_9);
		String_t* L_35 = (__this->___username_2);
		WWWForm_AddField_m474460647(L_34, _stringLiteral4029253846, L_35, /*hidden argument*/NULL);
		WWWForm_t3999572776 * L_36 = (__this->___U3CformTwoU3E5__11_9);
		String_t* L_37 = (__this->___password_3);
		WWWForm_AddField_m474460647(L_36, _stringLiteral1216985755, L_37, /*hidden argument*/NULL);
		int32_t L_38 = Random_Range_m75452833(NULL /*static, unused*/, 0, 3, /*hidden argument*/NULL);
		__this->___U3CbobU3E5__12_10 = L_38;
		__this->___U3CurlU3E5__13_11 = _stringLiteral0;
		int32_t L_39 = (__this->___U3CbobU3E5__12_10);
		V_3 = (bool)((((int32_t)((((int32_t)L_39) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_40 = V_3;
		if (L_40)
		{
			goto IL_0229;
		}
	}
	{
		__this->___U3CurlU3E5__13_11 = _stringLiteral2039053656;
	}

IL_0229:
	{
		int32_t L_41 = (__this->___U3CbobU3E5__12_10);
		V_3 = (bool)((((int32_t)((((int32_t)L_41) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_42 = V_3;
		if (L_42)
		{
			goto IL_0246;
		}
	}
	{
		__this->___U3CurlU3E5__13_11 = _stringLiteral3756296006;
	}

IL_0246:
	{
		int32_t L_43 = (__this->___U3CbobU3E5__12_10);
		V_3 = (bool)((((int32_t)((((int32_t)L_43) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_44 = V_3;
		if (L_44)
		{
			goto IL_0263;
		}
	}
	{
		__this->___U3CurlU3E5__13_11 = _stringLiteral2321322330;
	}

IL_0263:
	{
		String_t* L_45 = (__this->___U3CurlU3E5__13_11);
		WWWForm_t3999572776 * L_46 = (__this->___U3CformTwoU3E5__11_9);
		WWW_t1522972100 * L_47 = (WWW_t1522972100 *)il2cpp_codegen_object_new(WWW_t1522972100_il2cpp_TypeInfo_var);
		WWW__ctor_m3818753408(L_47, L_45, L_46, /*hidden argument*/NULL);
		__this->___U3CwwwU3E5__14_12 = L_47;
		WWW_t1522972100 * L_48 = (__this->___U3CwwwU3E5__14_12);
		__this->___U3CU3E2__current_0 = L_48;
		__this->___U3CU3E1__state_1 = 2;
		V_1 = (bool)1;
		goto IL_029e;
	}

IL_0291:
	{
		__this->___U3CU3E1__state_1 = (-1);
	}

IL_0299:
	{
	}

IL_029a:
	{
		V_1 = (bool)0;
		goto IL_029e;
	}

IL_029e:
	{
		bool L_49 = V_1;
		return L_49;
	}
}
// System.Object DatabaseControl.DC/<Login>d__b::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C"  Object_t * U3CLoginU3Ed__b_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m214998413 (U3CLoginU3Ed__b_t4066943599 * __this, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = (__this->___U3CU3E2__current_0);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Object_t * L_1 = V_0;
		return L_1;
	}
}
// System.Void DatabaseControl.DC/<Login>d__b::System.Collections.IEnumerator.Reset()
extern TypeInfo* NotSupportedException_t1374155497_il2cpp_TypeInfo_var;
extern const uint32_t U3CLoginU3Ed__b_System_Collections_IEnumerator_Reset_m854831190_MetadataUsageId;
extern "C"  void U3CLoginU3Ed__b_System_Collections_IEnumerator_Reset_m854831190 (U3CLoginU3Ed__b_t4066943599 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U3CLoginU3Ed__b_System_Collections_IEnumerator_Reset_m854831190_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t1374155497 * L_0 = (NotSupportedException_t1374155497 *)il2cpp_codegen_object_new(NotSupportedException_t1374155497_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m149930845(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void DatabaseControl.DC/<Login>d__b::System.IDisposable.Dispose()
extern "C"  void U3CLoginU3Ed__b_System_IDisposable_Dispose_m4099362299 (U3CLoginU3Ed__b_t4066943599 * __this, const MethodInfo* method)
{
	StringU5BU5D_t2956870243* V_0 = {0};
	{
		return;
	}
}
// System.Object DatabaseControl.DC/<Login>d__b::System.Collections.IEnumerator.get_Current()
extern "C"  Object_t * U3CLoginU3Ed__b_System_Collections_IEnumerator_get_Current_m120336908 (U3CLoginU3Ed__b_t4066943599 * __this, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = (__this->___U3CU3E2__current_0);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Object_t * L_1 = V_0;
		return L_1;
	}
}
// System.Void DatabaseControl.DC/<Login>d__b::.ctor(System.Int32)
extern "C"  void U3CLoginU3Ed__b__ctor_m2727567221 (U3CLoginU3Ed__b_t4066943599 * __this, int32_t ___U3CU3E1__state, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state;
		__this->___U3CU3E1__state_1 = L_0;
		return;
	}
}
// System.Boolean DatabaseControl.DC/<RegisterUser>d__0::MoveNext()
extern TypeInfo* TextAsset_t2461560304_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Debug_t1588791936_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t2956870243_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t3999572776_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t1522972100_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral0;
extern Il2CppCodeGenString* _stringLiteral3076010;
extern Il2CppCodeGenString* _stringLiteral48;
extern Il2CppCodeGenString* _stringLiteral4155433816;
extern Il2CppCodeGenString* _stringLiteral67232232;
extern Il2CppCodeGenString* _stringLiteral1440;
extern Il2CppCodeGenString* _stringLiteral4092450787;
extern Il2CppCodeGenString* _stringLiteral3575610;
extern Il2CppCodeGenString* _stringLiteral3146424332;
extern Il2CppCodeGenString* _stringLiteral110472352;
extern Il2CppCodeGenString* _stringLiteral1688905718;
extern Il2CppCodeGenString* _stringLiteral4029253846;
extern Il2CppCodeGenString* _stringLiteral1216985755;
extern Il2CppCodeGenString* _stringLiteral973778354;
extern Il2CppCodeGenString* _stringLiteral2039053656;
extern Il2CppCodeGenString* _stringLiteral3756296006;
extern Il2CppCodeGenString* _stringLiteral2321322330;
extern const uint32_t U3CRegisterUserU3Ed__0_MoveNext_m3241236825_MetadataUsageId;
extern "C"  bool U3CRegisterUserU3Ed__0_MoveNext_m3241236825 (U3CRegisterUserU3Ed__0_t1686522240 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U3CRegisterUserU3Ed__0_MoveNext_m3241236825_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t2956870243* V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	StringU5BU5D_t2956870243* V_4 = {0};
	int32_t G_B12_0 = 0;
	{
		int32_t L_0 = (__this->___U3CU3E1__state_1);
		V_2 = L_0;
		int32_t L_1 = V_2;
		if (L_1 == 0)
		{
			goto IL_0025;
		}
		if (L_1 == 1)
		{
			goto IL_001b;
		}
		if (L_1 == 2)
		{
			goto IL_0020;
		}
	}
	{
		goto IL_0027;
	}

IL_001b:
	{
		goto IL_0169;
	}

IL_0020:
	{
		goto IL_02a8;
	}

IL_0025:
	{
		goto IL_002c;
	}

IL_0027:
	{
		goto IL_02b1;
	}

IL_002c:
	{
		__this->___U3CU3E1__state_1 = (-1);
		__this->___U3CreturnTextU3E5__1_5 = _stringLiteral0;
		__this->___U3CdNameU3E5__2_6 = _stringLiteral0;
		__this->___U3CuNameU3E5__3_7 = _stringLiteral0;
		Object_t3878351788 * L_2 = Resources_Load_m2187391845(NULL /*static, unused*/, _stringLiteral3076010, /*hidden argument*/NULL);
		__this->___U3CsourceU3E5__4_8 = ((TextAsset_t2461560304 *)IsInstClass(L_2, TextAsset_t2461560304_il2cpp_TypeInfo_var));
		TextAsset_t2461560304 * L_3 = (__this->___U3CsourceU3E5__4_8);
		String_t* L_4 = TextAsset_get_text_m655578209(L_3, /*hidden argument*/NULL);
		__this->___U3CfileContentsU3E5__5_9 = L_4;
		String_t* L_5 = (__this->___U3CfileContentsU3E5__5_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_5, _stringLiteral48, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (L_7)
		{
			goto IL_00af;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1588791936_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628(NULL /*static, unused*/, _stringLiteral4155433816, /*hidden argument*/NULL);
		__this->___U3CreturnTextU3E5__1_5 = _stringLiteral67232232;
		goto IL_0138;
	}

IL_00af:
	{
		String_t* L_8 = (__this->___U3CfileContentsU3E5__5_9);
		V_4 = ((StringU5BU5D_t2956870243*)SZArrayNew(StringU5BU5D_t2956870243_il2cpp_TypeInfo_var, (uint32_t)1));
		StringU5BU5D_t2956870243* L_9 = V_4;
		ArrayElementTypeCheck (L_9, _stringLiteral1440);
		*((String_t**)(String_t**)SZArrayLdElema(L_9, 0, sizeof(String_t*))) = (String_t*)_stringLiteral1440;
		StringU5BU5D_t2956870243* L_10 = V_4;
		StringU5BU5D_t2956870243* L_11 = String_Split_m459616251(L_8, L_10, 0, /*hidden argument*/NULL);
		V_0 = L_11;
		StringU5BU5D_t2956870243* L_12 = V_0;
		V_3 = (bool)((((Object_t*)(StringU5BU5D_t2956870243*)L_12) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		bool L_13 = V_3;
		if (L_13)
		{
			goto IL_012a;
		}
	}
	{
		StringU5BU5D_t2956870243* L_14 = V_0;
		int32_t L_15 = 1;
		if ((*(String_t**)(String_t**)SZArrayLdElema(L_14, L_15, sizeof(String_t*))))
		{
			goto IL_00e9;
		}
	}
	{
		StringU5BU5D_t2956870243* L_16 = V_0;
		int32_t L_17 = 2;
		G_B12_0 = ((((int32_t)((((Object_t*)(String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_16, L_17, sizeof(String_t*)))) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ea;
	}

IL_00e9:
	{
		G_B12_0 = 0;
	}

IL_00ea:
	{
		V_3 = (bool)G_B12_0;
		bool L_18 = V_3;
		if (L_18)
		{
			goto IL_011a;
		}
	}
	{
		StringU5BU5D_t2956870243* L_19 = V_0;
		int32_t L_20 = 1;
		String_t* L_21 = WWW_UnEscapeURL_m1534650378(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_19, L_20, sizeof(String_t*))), /*hidden argument*/NULL);
		__this->___U3CdNameU3E5__2_6 = L_21;
		StringU5BU5D_t2956870243* L_22 = V_0;
		int32_t L_23 = 2;
		String_t* L_24 = WWW_UnEscapeURL_m1534650378(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_22, L_23, sizeof(String_t*))), /*hidden argument*/NULL);
		__this->___U3CuNameU3E5__3_7 = L_24;
		__this->___U3CreturnTextU3E5__1_5 = _stringLiteral4092450787;
		goto IL_0127;
	}

IL_011a:
	{
		__this->___U3CreturnTextU3E5__1_5 = _stringLiteral67232232;
	}

IL_0127:
	{
		goto IL_0137;
	}

IL_012a:
	{
		__this->___U3CreturnTextU3E5__1_5 = _stringLiteral67232232;
	}

IL_0137:
	{
	}

IL_0138:
	{
		String_t* L_25 = (__this->___U3CreturnTextU3E5__1_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_26 = String_op_Inequality_m2125462205(NULL /*static, unused*/, L_25, _stringLiteral4092450787, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_3;
		if (L_27)
		{
			goto IL_0176;
		}
	}
	{
		__this->___U3CU3E2__current_0 = _stringLiteral67232232;
		__this->___U3CU3E1__state_1 = 1;
		V_1 = (bool)1;
		goto IL_02b5;
	}

IL_0169:
	{
		__this->___U3CU3E1__state_1 = (-1);
		goto IL_02b0;
	}

IL_0176:
	{
		WWWForm_t3999572776 * L_28 = (WWWForm_t3999572776 *)il2cpp_codegen_object_new(WWWForm_t3999572776_il2cpp_TypeInfo_var);
		WWWForm__ctor_m2306401574(L_28, /*hidden argument*/NULL);
		__this->___U3CformOneU3E5__6_10 = L_28;
		WWWForm_t3999572776 * L_29 = (__this->___U3CformOneU3E5__6_10);
		WWWForm_AddField_m474460647(L_29, _stringLiteral3575610, _stringLiteral3146424332, /*hidden argument*/NULL);
		WWWForm_t3999572776 * L_30 = (__this->___U3CformOneU3E5__6_10);
		String_t* L_31 = (__this->___U3CuNameU3E5__3_7);
		WWWForm_AddField_m474460647(L_30, _stringLiteral110472352, L_31, /*hidden argument*/NULL);
		WWWForm_t3999572776 * L_32 = (__this->___U3CformOneU3E5__6_10);
		String_t* L_33 = (__this->___U3CdNameU3E5__2_6);
		WWWForm_AddField_m474460647(L_32, _stringLiteral1688905718, L_33, /*hidden argument*/NULL);
		WWWForm_t3999572776 * L_34 = (__this->___U3CformOneU3E5__6_10);
		String_t* L_35 = (__this->___username_2);
		WWWForm_AddField_m474460647(L_34, _stringLiteral4029253846, L_35, /*hidden argument*/NULL);
		WWWForm_t3999572776 * L_36 = (__this->___U3CformOneU3E5__6_10);
		String_t* L_37 = (__this->___password_3);
		WWWForm_AddField_m474460647(L_36, _stringLiteral1216985755, L_37, /*hidden argument*/NULL);
		WWWForm_t3999572776 * L_38 = (__this->___U3CformOneU3E5__6_10);
		String_t* L_39 = (__this->___data_4);
		WWWForm_AddField_m474460647(L_38, _stringLiteral973778354, L_39, /*hidden argument*/NULL);
		int32_t L_40 = Random_Range_m75452833(NULL /*static, unused*/, 0, 3, /*hidden argument*/NULL);
		__this->___U3CbobU3E5__7_11 = L_40;
		__this->___U3CurlU3E5__8_12 = _stringLiteral0;
		int32_t L_41 = (__this->___U3CbobU3E5__7_11);
		V_3 = (bool)((((int32_t)((((int32_t)L_41) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_42 = V_3;
		if (L_42)
		{
			goto IL_0240;
		}
	}
	{
		__this->___U3CurlU3E5__8_12 = _stringLiteral2039053656;
	}

IL_0240:
	{
		int32_t L_43 = (__this->___U3CbobU3E5__7_11);
		V_3 = (bool)((((int32_t)((((int32_t)L_43) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_44 = V_3;
		if (L_44)
		{
			goto IL_025d;
		}
	}
	{
		__this->___U3CurlU3E5__8_12 = _stringLiteral3756296006;
	}

IL_025d:
	{
		int32_t L_45 = (__this->___U3CbobU3E5__7_11);
		V_3 = (bool)((((int32_t)((((int32_t)L_45) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_46 = V_3;
		if (L_46)
		{
			goto IL_027a;
		}
	}
	{
		__this->___U3CurlU3E5__8_12 = _stringLiteral2321322330;
	}

IL_027a:
	{
		String_t* L_47 = (__this->___U3CurlU3E5__8_12);
		WWWForm_t3999572776 * L_48 = (__this->___U3CformOneU3E5__6_10);
		WWW_t1522972100 * L_49 = (WWW_t1522972100 *)il2cpp_codegen_object_new(WWW_t1522972100_il2cpp_TypeInfo_var);
		WWW__ctor_m3818753408(L_49, L_47, L_48, /*hidden argument*/NULL);
		__this->___U3CwwwU3E5__9_13 = L_49;
		WWW_t1522972100 * L_50 = (__this->___U3CwwwU3E5__9_13);
		__this->___U3CU3E2__current_0 = L_50;
		__this->___U3CU3E1__state_1 = 2;
		V_1 = (bool)1;
		goto IL_02b5;
	}

IL_02a8:
	{
		__this->___U3CU3E1__state_1 = (-1);
	}

IL_02b0:
	{
	}

IL_02b1:
	{
		V_1 = (bool)0;
		goto IL_02b5;
	}

IL_02b5:
	{
		bool L_51 = V_1;
		return L_51;
	}
}
// System.Object DatabaseControl.DC/<RegisterUser>d__0::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C"  Object_t * U3CRegisterUserU3Ed__0_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3735533062 (U3CRegisterUserU3Ed__0_t1686522240 * __this, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = (__this->___U3CU3E2__current_0);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Object_t * L_1 = V_0;
		return L_1;
	}
}
// System.Void DatabaseControl.DC/<RegisterUser>d__0::System.Collections.IEnumerator.Reset()
extern TypeInfo* NotSupportedException_t1374155497_il2cpp_TypeInfo_var;
extern const uint32_t U3CRegisterUserU3Ed__0_System_Collections_IEnumerator_Reset_m3564408519_MetadataUsageId;
extern "C"  void U3CRegisterUserU3Ed__0_System_Collections_IEnumerator_Reset_m3564408519 (U3CRegisterUserU3Ed__0_t1686522240 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U3CRegisterUserU3Ed__0_System_Collections_IEnumerator_Reset_m3564408519_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t1374155497 * L_0 = (NotSupportedException_t1374155497 *)il2cpp_codegen_object_new(NotSupportedException_t1374155497_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m149930845(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void DatabaseControl.DC/<RegisterUser>d__0::System.IDisposable.Dispose()
extern "C"  void U3CRegisterUserU3Ed__0_System_IDisposable_Dispose_m3361035692 (U3CRegisterUserU3Ed__0_t1686522240 * __this, const MethodInfo* method)
{
	StringU5BU5D_t2956870243* V_0 = {0};
	{
		return;
	}
}
// System.Object DatabaseControl.DC/<RegisterUser>d__0::System.Collections.IEnumerator.get_Current()
extern "C"  Object_t * U3CRegisterUserU3Ed__0_System_Collections_IEnumerator_get_Current_m2859920819 (U3CRegisterUserU3Ed__0_t1686522240 * __this, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = (__this->___U3CU3E2__current_0);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Object_t * L_1 = V_0;
		return L_1;
	}
}
// System.Void DatabaseControl.DC/<RegisterUser>d__0::.ctor(System.Int32)
extern "C"  void U3CRegisterUserU3Ed__0__ctor_m3605642404 (U3CRegisterUserU3Ed__0_t1686522240 * __this, int32_t ___U3CU3E1__state, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state;
		__this->___U3CU3E1__state_1 = L_0;
		return;
	}
}
// System.Boolean DatabaseControl.DC/<SetUserData>d__21::MoveNext()
extern TypeInfo* TextAsset_t2461560304_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Debug_t1588791936_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t2956870243_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t3999572776_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t1522972100_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral0;
extern Il2CppCodeGenString* _stringLiteral3076010;
extern Il2CppCodeGenString* _stringLiteral48;
extern Il2CppCodeGenString* _stringLiteral4155433816;
extern Il2CppCodeGenString* _stringLiteral67232232;
extern Il2CppCodeGenString* _stringLiteral1440;
extern Il2CppCodeGenString* _stringLiteral4092450787;
extern Il2CppCodeGenString* _stringLiteral3575610;
extern Il2CppCodeGenString* _stringLiteral1984503596;
extern Il2CppCodeGenString* _stringLiteral110472352;
extern Il2CppCodeGenString* _stringLiteral1688905718;
extern Il2CppCodeGenString* _stringLiteral4029253846;
extern Il2CppCodeGenString* _stringLiteral1216985755;
extern Il2CppCodeGenString* _stringLiteral1276990555;
extern Il2CppCodeGenString* _stringLiteral2039053656;
extern Il2CppCodeGenString* _stringLiteral3756296006;
extern Il2CppCodeGenString* _stringLiteral2321322330;
extern const uint32_t U3CSetUserDataU3Ed__21_MoveNext_m2842726745_MetadataUsageId;
extern "C"  bool U3CSetUserDataU3Ed__21_MoveNext_m2842726745 (U3CSetUserDataU3Ed__21_t131694976 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U3CSetUserDataU3Ed__21_MoveNext_m2842726745_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t2956870243* V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	StringU5BU5D_t2956870243* V_4 = {0};
	int32_t G_B12_0 = 0;
	{
		int32_t L_0 = (__this->___U3CU3E1__state_1);
		V_2 = L_0;
		int32_t L_1 = V_2;
		if (L_1 == 0)
		{
			goto IL_0025;
		}
		if (L_1 == 1)
		{
			goto IL_001b;
		}
		if (L_1 == 2)
		{
			goto IL_0020;
		}
	}
	{
		goto IL_0027;
	}

IL_001b:
	{
		goto IL_0169;
	}

IL_0020:
	{
		goto IL_02a8;
	}

IL_0025:
	{
		goto IL_002c;
	}

IL_0027:
	{
		goto IL_02b1;
	}

IL_002c:
	{
		__this->___U3CU3E1__state_1 = (-1);
		__this->___U3CreturnTextU3E5__22_5 = _stringLiteral0;
		__this->___U3CdNameU3E5__23_6 = _stringLiteral0;
		__this->___U3CuNameU3E5__24_7 = _stringLiteral0;
		Object_t3878351788 * L_2 = Resources_Load_m2187391845(NULL /*static, unused*/, _stringLiteral3076010, /*hidden argument*/NULL);
		__this->___U3CsourceU3E5__25_8 = ((TextAsset_t2461560304 *)IsInstClass(L_2, TextAsset_t2461560304_il2cpp_TypeInfo_var));
		TextAsset_t2461560304 * L_3 = (__this->___U3CsourceU3E5__25_8);
		String_t* L_4 = TextAsset_get_text_m655578209(L_3, /*hidden argument*/NULL);
		__this->___U3CfileContentsU3E5__26_9 = L_4;
		String_t* L_5 = (__this->___U3CfileContentsU3E5__26_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_5, _stringLiteral48, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (L_7)
		{
			goto IL_00af;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1588791936_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628(NULL /*static, unused*/, _stringLiteral4155433816, /*hidden argument*/NULL);
		__this->___U3CreturnTextU3E5__22_5 = _stringLiteral67232232;
		goto IL_0138;
	}

IL_00af:
	{
		String_t* L_8 = (__this->___U3CfileContentsU3E5__26_9);
		V_4 = ((StringU5BU5D_t2956870243*)SZArrayNew(StringU5BU5D_t2956870243_il2cpp_TypeInfo_var, (uint32_t)1));
		StringU5BU5D_t2956870243* L_9 = V_4;
		ArrayElementTypeCheck (L_9, _stringLiteral1440);
		*((String_t**)(String_t**)SZArrayLdElema(L_9, 0, sizeof(String_t*))) = (String_t*)_stringLiteral1440;
		StringU5BU5D_t2956870243* L_10 = V_4;
		StringU5BU5D_t2956870243* L_11 = String_Split_m459616251(L_8, L_10, 0, /*hidden argument*/NULL);
		V_0 = L_11;
		StringU5BU5D_t2956870243* L_12 = V_0;
		V_3 = (bool)((((Object_t*)(StringU5BU5D_t2956870243*)L_12) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		bool L_13 = V_3;
		if (L_13)
		{
			goto IL_012a;
		}
	}
	{
		StringU5BU5D_t2956870243* L_14 = V_0;
		int32_t L_15 = 1;
		if ((*(String_t**)(String_t**)SZArrayLdElema(L_14, L_15, sizeof(String_t*))))
		{
			goto IL_00e9;
		}
	}
	{
		StringU5BU5D_t2956870243* L_16 = V_0;
		int32_t L_17 = 2;
		G_B12_0 = ((((int32_t)((((Object_t*)(String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_16, L_17, sizeof(String_t*)))) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ea;
	}

IL_00e9:
	{
		G_B12_0 = 0;
	}

IL_00ea:
	{
		V_3 = (bool)G_B12_0;
		bool L_18 = V_3;
		if (L_18)
		{
			goto IL_011a;
		}
	}
	{
		StringU5BU5D_t2956870243* L_19 = V_0;
		int32_t L_20 = 1;
		String_t* L_21 = WWW_UnEscapeURL_m1534650378(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_19, L_20, sizeof(String_t*))), /*hidden argument*/NULL);
		__this->___U3CdNameU3E5__23_6 = L_21;
		StringU5BU5D_t2956870243* L_22 = V_0;
		int32_t L_23 = 2;
		String_t* L_24 = WWW_UnEscapeURL_m1534650378(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_22, L_23, sizeof(String_t*))), /*hidden argument*/NULL);
		__this->___U3CuNameU3E5__24_7 = L_24;
		__this->___U3CreturnTextU3E5__22_5 = _stringLiteral4092450787;
		goto IL_0127;
	}

IL_011a:
	{
		__this->___U3CreturnTextU3E5__22_5 = _stringLiteral67232232;
	}

IL_0127:
	{
		goto IL_0137;
	}

IL_012a:
	{
		__this->___U3CreturnTextU3E5__22_5 = _stringLiteral67232232;
	}

IL_0137:
	{
	}

IL_0138:
	{
		String_t* L_25 = (__this->___U3CreturnTextU3E5__22_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_26 = String_op_Inequality_m2125462205(NULL /*static, unused*/, L_25, _stringLiteral4092450787, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_3;
		if (L_27)
		{
			goto IL_0176;
		}
	}
	{
		__this->___U3CU3E2__current_0 = _stringLiteral67232232;
		__this->___U3CU3E1__state_1 = 1;
		V_1 = (bool)1;
		goto IL_02b5;
	}

IL_0169:
	{
		__this->___U3CU3E1__state_1 = (-1);
		goto IL_02b0;
	}

IL_0176:
	{
		WWWForm_t3999572776 * L_28 = (WWWForm_t3999572776 *)il2cpp_codegen_object_new(WWWForm_t3999572776_il2cpp_TypeInfo_var);
		WWWForm__ctor_m2306401574(L_28, /*hidden argument*/NULL);
		__this->___U3CformTwoU3E5__27_10 = L_28;
		WWWForm_t3999572776 * L_29 = (__this->___U3CformTwoU3E5__27_10);
		WWWForm_AddField_m474460647(L_29, _stringLiteral3575610, _stringLiteral1984503596, /*hidden argument*/NULL);
		WWWForm_t3999572776 * L_30 = (__this->___U3CformTwoU3E5__27_10);
		String_t* L_31 = (__this->___U3CuNameU3E5__24_7);
		WWWForm_AddField_m474460647(L_30, _stringLiteral110472352, L_31, /*hidden argument*/NULL);
		WWWForm_t3999572776 * L_32 = (__this->___U3CformTwoU3E5__27_10);
		String_t* L_33 = (__this->___U3CdNameU3E5__23_6);
		WWWForm_AddField_m474460647(L_32, _stringLiteral1688905718, L_33, /*hidden argument*/NULL);
		WWWForm_t3999572776 * L_34 = (__this->___U3CformTwoU3E5__27_10);
		String_t* L_35 = (__this->___username_2);
		WWWForm_AddField_m474460647(L_34, _stringLiteral4029253846, L_35, /*hidden argument*/NULL);
		WWWForm_t3999572776 * L_36 = (__this->___U3CformTwoU3E5__27_10);
		String_t* L_37 = (__this->___password_3);
		WWWForm_AddField_m474460647(L_36, _stringLiteral1216985755, L_37, /*hidden argument*/NULL);
		WWWForm_t3999572776 * L_38 = (__this->___U3CformTwoU3E5__27_10);
		String_t* L_39 = (__this->___data_4);
		WWWForm_AddField_m474460647(L_38, _stringLiteral1276990555, L_39, /*hidden argument*/NULL);
		int32_t L_40 = Random_Range_m75452833(NULL /*static, unused*/, 0, 3, /*hidden argument*/NULL);
		__this->___U3CbobU3E5__28_11 = L_40;
		__this->___U3CurlU3E5__29_12 = _stringLiteral0;
		int32_t L_41 = (__this->___U3CbobU3E5__28_11);
		V_3 = (bool)((((int32_t)((((int32_t)L_41) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_42 = V_3;
		if (L_42)
		{
			goto IL_0240;
		}
	}
	{
		__this->___U3CurlU3E5__29_12 = _stringLiteral2039053656;
	}

IL_0240:
	{
		int32_t L_43 = (__this->___U3CbobU3E5__28_11);
		V_3 = (bool)((((int32_t)((((int32_t)L_43) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_44 = V_3;
		if (L_44)
		{
			goto IL_025d;
		}
	}
	{
		__this->___U3CurlU3E5__29_12 = _stringLiteral3756296006;
	}

IL_025d:
	{
		int32_t L_45 = (__this->___U3CbobU3E5__28_11);
		V_3 = (bool)((((int32_t)((((int32_t)L_45) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_46 = V_3;
		if (L_46)
		{
			goto IL_027a;
		}
	}
	{
		__this->___U3CurlU3E5__29_12 = _stringLiteral2321322330;
	}

IL_027a:
	{
		String_t* L_47 = (__this->___U3CurlU3E5__29_12);
		WWWForm_t3999572776 * L_48 = (__this->___U3CformTwoU3E5__27_10);
		WWW_t1522972100 * L_49 = (WWW_t1522972100 *)il2cpp_codegen_object_new(WWW_t1522972100_il2cpp_TypeInfo_var);
		WWW__ctor_m3818753408(L_49, L_47, L_48, /*hidden argument*/NULL);
		__this->___U3CwwwU3E5__2a_13 = L_49;
		WWW_t1522972100 * L_50 = (__this->___U3CwwwU3E5__2a_13);
		__this->___U3CU3E2__current_0 = L_50;
		__this->___U3CU3E1__state_1 = 2;
		V_1 = (bool)1;
		goto IL_02b5;
	}

IL_02a8:
	{
		__this->___U3CU3E1__state_1 = (-1);
	}

IL_02b0:
	{
	}

IL_02b1:
	{
		V_1 = (bool)0;
		goto IL_02b5;
	}

IL_02b5:
	{
		bool L_51 = V_1;
		return L_51;
	}
}
// System.Object DatabaseControl.DC/<SetUserData>d__21::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C"  Object_t * U3CSetUserDataU3Ed__21_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2220326406 (U3CSetUserDataU3Ed__21_t131694976 * __this, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = (__this->___U3CU3E2__current_0);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Object_t * L_1 = V_0;
		return L_1;
	}
}
// System.Void DatabaseControl.DC/<SetUserData>d__21::System.Collections.IEnumerator.Reset()
extern TypeInfo* NotSupportedException_t1374155497_il2cpp_TypeInfo_var;
extern const uint32_t U3CSetUserDataU3Ed__21_System_Collections_IEnumerator_Reset_m1915733703_MetadataUsageId;
extern "C"  void U3CSetUserDataU3Ed__21_System_Collections_IEnumerator_Reset_m1915733703 (U3CSetUserDataU3Ed__21_t131694976 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U3CSetUserDataU3Ed__21_System_Collections_IEnumerator_Reset_m1915733703_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t1374155497 * L_0 = (NotSupportedException_t1374155497 *)il2cpp_codegen_object_new(NotSupportedException_t1374155497_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m149930845(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void DatabaseControl.DC/<SetUserData>d__21::System.IDisposable.Dispose()
extern "C"  void U3CSetUserDataU3Ed__21_System_IDisposable_Dispose_m70684076 (U3CSetUserDataU3Ed__21_t131694976 * __this, const MethodInfo* method)
{
	StringU5BU5D_t2956870243* V_0 = {0};
	{
		return;
	}
}
// System.Object DatabaseControl.DC/<SetUserData>d__21::System.Collections.IEnumerator.get_Current()
extern "C"  Object_t * U3CSetUserDataU3Ed__21_System_Collections_IEnumerator_get_Current_m753411507 (U3CSetUserDataU3Ed__21_t131694976 * __this, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = (__this->___U3CU3E2__current_0);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Object_t * L_1 = V_0;
		return L_1;
	}
}
// System.Void DatabaseControl.DC/<SetUserData>d__21::.ctor(System.Int32)
extern "C"  void U3CSetUserDataU3Ed__21__ctor_m3595142308 (U3CSetUserDataU3Ed__21_t131694976 * __this, int32_t ___U3CU3E1__state, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state;
		__this->___U3CU3E1__state_1 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
