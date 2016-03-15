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

// SimChat
struct SimChat_t3757185199;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3012272455;
// System.Action`1<SimpleMessage[]>
struct Action_1_t2569750681;
// SimpleMessage[]
struct SimpleMessageU5BU5D_t2421297976;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.String[]
struct StringU5BU5D_t2956870243;
// SimChat/<waitRequestMessages>d__0
struct U3CwaitRequestMessagesU3Ed__0_t3525191648;
// System.Object
struct Object_t;
// SimChat/SimChatNetwork
struct SimChatNetwork_t2617935487;
// System.Action`1<System.String[]>
struct Action_1_t3105322948;
// UnityEngine.WWW
struct WWW_t1522972100;
// SimChat/SimChatNetwork/<WaitForRequest>d__2
struct U3CWaitForRequestU3Ed__2_t50615509;
// SimpleMessage
struct SimpleMessage_t3870468565;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "wwwChat_U3CModuleU3E86524790.h"
#include "wwwChat_U3CModuleU3E86524790MethodDeclarations.h"
#include "wwwChat_SimChat3757185199.h"
#include "wwwChat_SimChat3757185199MethodDeclarations.h"
#include "mscorlib_System_String968488902.h"
#include "wwwChat_SimChat_SimChatNetwork2617935487.h"
#include "mscorlib_System_Void2779279689.h"
#include "mscorlib_System_Boolean211005341.h"
#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "mscorlib_System_Collections_Generic_List_1_gen372460238MethodDeclarations.h"
#include "mscorlib_System_Object837106420MethodDeclarations.h"
#include "wwwChat_SimChat_SimChatNetwork2617935487MethodDeclarations.h"
#include "mscorlib_System_Action_1_gen2569750681MethodDeclarations.h"
#include "mscorlib_System_Action_1_gen3105322948MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen372460238.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Int322847414787.h"
#include "mscorlib_System_Single958209021.h"
#include "wwwChat_ArrayTypes.h"
#include "wwwChat_SimpleMessage3870468565.h"
#include "mscorlib_System_Action_1_gen2569750681.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Action_1_gen3105322948.h"
#include "UnityEngine_UnityEngine_MonoBehaviour3012272455MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Coroutine2246592261.h"
#include "wwwChat_SimChat_U3CwaitRequestMessagesU3Ed__03525191648MethodDeclarations.h"
#include "wwwChat_SimChat_U3CwaitRequestMessagesU3Ed__03525191648.h"
#include "UnityEngine_UnityEngine_WaitForSeconds1291133240MethodDeclarations.h"
#include "UnityEngine_UnityEngine_WaitForSeconds1291133240.h"
#include "mscorlib_System_NotSupportedException1374155497MethodDeclarations.h"
#include "mscorlib_System_NotSupportedException1374155497.h"
#include "mscorlib_System_Int642847414882.h"
#include "UnityEngine_UnityEngine_WWWForm3999572776MethodDeclarations.h"
#include "mscorlib_System_String968488902MethodDeclarations.h"
#include "UnityEngine_UnityEngine_WWW1522972100MethodDeclarations.h"
#include "UnityEngine_UnityEngine_WWWForm3999572776.h"
#include "UnityEngine_UnityEngine_WWW1522972100.h"
#include "mscorlib_System_Int642847414882MethodDeclarations.h"
#include "wwwChat_SimChat_SimChatNetwork_U3CWaitForRequestU3Ed50615509MethodDeclarations.h"
#include "wwwChat_SimChat_SimChatNetwork_U3CWaitForRequestU3Ed50615509.h"
#include "UnityEngine_UnityEngine_Debug1588791936MethodDeclarations.h"
#include "mscorlib_System_Char2778706699.h"
#include "wwwChat_SimpleMessage3870468565MethodDeclarations.h"
#include "mscorlib_System_StringSplitOptions3963075722.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String SimChat::get_senderName()
extern "C"  String_t* SimChat_get_senderName_m3114027567 (SimChat_t3757185199 * __this, const MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		SimChatNetwork_t2617935487 * L_0 = (__this->___scn_3);
		String_t* L_1 = (L_0->___name_7);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void SimChat::set_continueCheck(System.Boolean)
extern "C"  void SimChat_set_continueCheck_m976881588 (SimChat_t3757185199 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___continueToCheck_6 = L_0;
		return;
	}
}
// System.Void SimChat::.ctor(System.String,UnityEngine.MonoBehaviour,System.String)
extern TypeInfo* List_1_t372460238_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t2956870243_il2cpp_TypeInfo_var;
extern TypeInfo* SimChatNetwork_t2617935487_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t2569750681_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t3105322948_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3235230965_MethodInfo_var;
extern const MethodInfo* SimChat_receiveMessage_m2752019854_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m1593606403_MethodInfo_var;
extern const MethodInfo* SimChat_receiveSenders_m3068331228_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m2713669064_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral0;
extern const uint32_t SimChat__ctor_m1551464620_MetadataUsageId;
extern "C"  void SimChat__ctor_m1551464620 (SimChat_t3757185199 * __this, String_t* ___identifier, MonoBehaviour_t3012272455 * ___currentMonoBehaviour, String_t* ___senderName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SimChat__ctor_m1551464620_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___message_0 = _stringLiteral0;
		List_1_t372460238 * L_0 = (List_1_t372460238 *)il2cpp_codegen_object_new(List_1_t372460238_il2cpp_TypeInfo_var);
		List_1__ctor_m3235230965(L_0, /*hidden argument*/List_1__ctor_m3235230965_MethodInfo_var);
		__this->___allMessages_1 = L_0;
		__this->___groupSenders_2 = ((StringU5BU5D_t2956870243*)SZArrayNew(StringU5BU5D_t2956870243_il2cpp_TypeInfo_var, (uint32_t)0));
		__this->___messageLength_4 = 0;
		__this->___delayTime_5 = (0.5f);
		__this->___continueToCheck_6 = (bool)1;
		__this->___receiveFunctionSet_9 = (bool)0;
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		MonoBehaviour_t3012272455 * L_1 = ___currentMonoBehaviour;
		__this->___mb_7 = L_1;
		String_t* L_2 = ___identifier;
		MonoBehaviour_t3012272455 * L_3 = ___currentMonoBehaviour;
		String_t* L_4 = ___senderName;
		SimChatNetwork_t2617935487 * L_5 = (SimChatNetwork_t2617935487 *)il2cpp_codegen_object_new(SimChatNetwork_t2617935487_il2cpp_TypeInfo_var);
		SimChatNetwork__ctor_m857919242(L_5, L_2, L_3, L_4, /*hidden argument*/NULL);
		__this->___scn_3 = L_5;
		SimChatNetwork_t2617935487 * L_6 = (__this->___scn_3);
		IntPtr_t L_7 = { (void*)SimChat_receiveMessage_m2752019854_MethodInfo_var };
		Action_1_t2569750681 * L_8 = (Action_1_t2569750681 *)il2cpp_codegen_object_new(Action_1_t2569750681_il2cpp_TypeInfo_var);
		Action_1__ctor_m1593606403(L_8, __this, L_7, /*hidden argument*/Action_1__ctor_m1593606403_MethodInfo_var);
		SimChatNetwork_setOutputFunction_m2560077177(L_6, L_8, /*hidden argument*/NULL);
		SimChatNetwork_t2617935487 * L_9 = (__this->___scn_3);
		IntPtr_t L_10 = { (void*)SimChat_receiveSenders_m3068331228_MethodInfo_var };
		Action_1_t3105322948 * L_11 = (Action_1_t3105322948 *)il2cpp_codegen_object_new(Action_1_t3105322948_il2cpp_TypeInfo_var);
		Action_1__ctor_m2713669064(L_11, __this, L_10, /*hidden argument*/Action_1__ctor_m2713669064_MethodInfo_var);
		SimChatNetwork_setReceiveNameFunction_m1126139753(L_9, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimChat::changeIdentifier(System.String)
extern TypeInfo* StringU5BU5D_t2956870243_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t372460238_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3235230965_MethodInfo_var;
extern const uint32_t SimChat_changeIdentifier_m1123186560_MetadataUsageId;
extern "C"  void SimChat_changeIdentifier_m1123186560 (SimChat_t3757185199 * __this, String_t* ___newIdentifier, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SimChat_changeIdentifier_m1123186560_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		SimChatNetwork_t2617935487 * L_0 = (__this->___scn_3);
		String_t* L_1 = ___newIdentifier;
		SimChatNetwork_changeKey_m1345441304(L_0, L_1, /*hidden argument*/NULL);
		__this->___groupSenders_2 = ((StringU5BU5D_t2956870243*)SZArrayNew(StringU5BU5D_t2956870243_il2cpp_TypeInfo_var, (uint32_t)0));
		List_1_t372460238 * L_2 = (List_1_t372460238 *)il2cpp_codegen_object_new(List_1_t372460238_il2cpp_TypeInfo_var);
		List_1__ctor_m3235230965(L_2, /*hidden argument*/List_1__ctor_m3235230965_MethodInfo_var);
		__this->___allMessages_1 = L_2;
		return;
	}
}
// System.Void SimChat::setReceiveFunction(System.Action`1<SimpleMessage[]>)
extern "C"  void SimChat_setReceiveFunction_m2654152773 (SimChat_t3757185199 * __this, Action_1_t2569750681 * ___rf, const MethodInfo* method)
{
	{
		Action_1_t2569750681 * L_0 = ___rf;
		__this->___receiveFunction_8 = L_0;
		__this->___receiveFunctionSet_9 = (bool)1;
		return;
	}
}
// System.Void SimChat::continueCheckMessages()
extern "C"  void SimChat_continueCheckMessages_m417960006 (SimChat_t3757185199 * __this, const MethodInfo* method)
{
	{
		SimChat_set_continueCheck_m976881588(__this, (bool)1, /*hidden argument*/NULL);
		SimChat_getNewMessages_m3736241887(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimChat::getNewMessages()
extern "C"  void SimChat_getNewMessages_m3736241887 (SimChat_t3757185199 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour_t3012272455 * L_0 = (__this->___mb_7);
		float L_1 = (__this->___delayTime_5);
		Object_t * L_2 = SimChat_waitRequestMessages_m3475773282(__this, L_1, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m1651502956(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimChat::receiveMessage(SimpleMessage[])
extern const MethodInfo* List_1_AddRange_m414167781_MethodInfo_var;
extern const MethodInfo* Action_1_Invoke_m2633531342_MethodInfo_var;
extern const MethodInfo* List_1_RemoveRange_m375447354_MethodInfo_var;
extern const uint32_t SimChat_receiveMessage_m2752019854_MetadataUsageId;
extern "C"  void SimChat_receiveMessage_m2752019854 (SimChat_t3757185199 * __this, SimpleMessageU5BU5D_t2421297976* ___newMessages, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SimChat_receiveMessage_m2752019854_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t G_B6_0 = 0;
	{
		SimpleMessageU5BU5D_t2421297976* L_0 = ___newMessages;
		V_0 = (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_0)->max_length))))) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_007c;
		}
	}
	{
		List_1_t372460238 * L_2 = (__this->___allMessages_1);
		SimpleMessageU5BU5D_t2421297976* L_3 = ___newMessages;
		List_1_AddRange_m414167781(L_2, (Object_t*)(Object_t*)L_3, /*hidden argument*/List_1_AddRange_m414167781_MethodInfo_var);
		bool L_4 = (__this->___receiveFunctionSet_9);
		V_0 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_0;
		if (L_5)
		{
			goto IL_0036;
		}
	}
	{
		Action_1_t2569750681 * L_6 = (__this->___receiveFunction_8);
		SimpleMessageU5BU5D_t2421297976* L_7 = ___newMessages;
		Action_1_Invoke_m2633531342(L_6, L_7, /*hidden argument*/Action_1_Invoke_m2633531342_MethodInfo_var);
	}

IL_0036:
	{
		int32_t L_8 = (__this->___messageLength_4);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0057;
		}
	}
	{
		List_1_t372460238 * L_9 = (__this->___allMessages_1);
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<SimpleMessage>::get_Count() */, L_9);
		int32_t L_11 = (__this->___messageLength_4);
		G_B6_0 = ((((int32_t)((((int32_t)L_10) > ((int32_t)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0058;
	}

IL_0057:
	{
		G_B6_0 = 1;
	}

IL_0058:
	{
		V_0 = (bool)G_B6_0;
		bool L_12 = V_0;
		if (L_12)
		{
			goto IL_007b;
		}
	}
	{
		List_1_t372460238 * L_13 = (__this->___allMessages_1);
		List_1_t372460238 * L_14 = (__this->___allMessages_1);
		int32_t L_15 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<SimpleMessage>::get_Count() */, L_14);
		int32_t L_16 = (__this->___messageLength_4);
		List_1_RemoveRange_m375447354(L_13, 0, ((int32_t)((int32_t)L_15-(int32_t)L_16)), /*hidden argument*/List_1_RemoveRange_m375447354_MethodInfo_var);
	}

IL_007b:
	{
	}

IL_007c:
	{
		bool L_17 = (__this->___continueToCheck_6);
		V_0 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_0;
		if (L_18)
		{
			goto IL_0090;
		}
	}
	{
		SimChat_getNewMessages_m3736241887(__this, /*hidden argument*/NULL);
	}

IL_0090:
	{
		return;
	}
}
// System.Collections.IEnumerator SimChat::waitRequestMessages(System.Single)
extern TypeInfo* U3CwaitRequestMessagesU3Ed__0_t3525191648_il2cpp_TypeInfo_var;
extern const uint32_t SimChat_waitRequestMessages_m3475773282_MetadataUsageId;
extern "C"  Object_t * SimChat_waitRequestMessages_m3475773282 (SimChat_t3757185199 * __this, float ___wait, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SimChat_waitRequestMessages_m3475773282_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	U3CwaitRequestMessagesU3Ed__0_t3525191648 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		U3CwaitRequestMessagesU3Ed__0_t3525191648 * L_0 = (U3CwaitRequestMessagesU3Ed__0_t3525191648 *)il2cpp_codegen_object_new(U3CwaitRequestMessagesU3Ed__0_t3525191648_il2cpp_TypeInfo_var);
		U3CwaitRequestMessagesU3Ed__0__ctor_m3658563099(L_0, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CwaitRequestMessagesU3Ed__0_t3525191648 * L_1 = V_0;
		L_1->___U3CU3E4__this_2 = __this;
		U3CwaitRequestMessagesU3Ed__0_t3525191648 * L_2 = V_0;
		float L_3 = ___wait;
		L_2->___wait_3 = L_3;
		U3CwaitRequestMessagesU3Ed__0_t3525191648 * L_4 = V_0;
		V_1 = L_4;
		goto IL_0019;
	}

IL_0019:
	{
		Object_t * L_5 = V_1;
		return L_5;
	}
}
// System.Void SimChat::receiveSenders(System.String[])
extern "C"  void SimChat_receiveSenders_m3068331228 (SimChat_t3757185199 * __this, StringU5BU5D_t2956870243* ___sndrs, const MethodInfo* method)
{
	{
		StringU5BU5D_t2956870243* L_0 = ___sndrs;
		__this->___groupSenders_2 = L_0;
		return;
	}
}
// System.Void SimChat::sendMessage()
extern "C"  void SimChat_sendMessage_m1175137304 (SimChat_t3757185199 * __this, const MethodInfo* method)
{
	{
		SimChatNetwork_t2617935487 * L_0 = (__this->___scn_3);
		String_t* L_1 = (__this->___message_0);
		SimChatNetwork_addChatText_m1897188321(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SimChat/<waitRequestMessages>d__0::MoveNext()
extern TypeInfo* WaitForSeconds_t1291133240_il2cpp_TypeInfo_var;
extern const uint32_t U3CwaitRequestMessagesU3Ed__0_MoveNext_m3708700104_MetadataUsageId;
extern "C"  bool U3CwaitRequestMessagesU3Ed__0_MoveNext_m3708700104 (U3CwaitRequestMessagesU3Ed__0_t3525191648 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U3CwaitRequestMessagesU3Ed__0_MoveNext_m3708700104_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		int32_t L_0 = (__this->___U3CU3E1__state_1);
		V_1 = L_0;
		int32_t L_1 = V_1;
		if (L_1 == 0)
		{
			goto IL_0019;
		}
		if (L_1 == 1)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_001b;
	}

IL_0017:
	{
		goto IL_0055;
	}

IL_0019:
	{
		goto IL_001d;
	}

IL_001b:
	{
		goto IL_006e;
	}

IL_001d:
	{
		__this->___U3CU3E1__state_1 = (-1);
		float L_2 = (__this->___wait_3);
		V_2 = (bool)((((int32_t)((((float)L_2) > ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (L_3)
		{
			goto IL_005c;
		}
	}
	{
		float L_4 = (__this->___wait_3);
		WaitForSeconds_t1291133240 * L_5 = (WaitForSeconds_t1291133240 *)il2cpp_codegen_object_new(WaitForSeconds_t1291133240_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m1803184849(L_5, L_4, /*hidden argument*/NULL);
		__this->___U3CU3E2__current_0 = L_5;
		__this->___U3CU3E1__state_1 = 1;
		V_0 = (bool)1;
		goto IL_0072;
	}

IL_0055:
	{
		__this->___U3CU3E1__state_1 = (-1);
	}

IL_005c:
	{
		SimChat_t3757185199 * L_6 = (__this->___U3CU3E4__this_2);
		SimChatNetwork_t2617935487 * L_7 = (L_6->___scn_3);
		SimChatNetwork_getChatText_m217664822(L_7, /*hidden argument*/NULL);
	}

IL_006e:
	{
		V_0 = (bool)0;
		goto IL_0072;
	}

IL_0072:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// System.Object SimChat/<waitRequestMessages>d__0::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C"  Object_t * U3CwaitRequestMessagesU3Ed__0_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2451199805 (U3CwaitRequestMessagesU3Ed__0_t3525191648 * __this, const MethodInfo* method)
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
// System.Void SimChat/<waitRequestMessages>d__0::System.Collections.IEnumerator.Reset()
extern TypeInfo* NotSupportedException_t1374155497_il2cpp_TypeInfo_var;
extern const uint32_t U3CwaitRequestMessagesU3Ed__0_System_Collections_IEnumerator_Reset_m3543012336_MetadataUsageId;
extern "C"  void U3CwaitRequestMessagesU3Ed__0_System_Collections_IEnumerator_Reset_m3543012336 (U3CwaitRequestMessagesU3Ed__0_t3525191648 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U3CwaitRequestMessagesU3Ed__0_System_Collections_IEnumerator_Reset_m3543012336_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t1374155497 * L_0 = (NotSupportedException_t1374155497 *)il2cpp_codegen_object_new(NotSupportedException_t1374155497_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m149930845(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void SimChat/<waitRequestMessages>d__0::System.IDisposable.Dispose()
extern "C"  void U3CwaitRequestMessagesU3Ed__0_System_IDisposable_Dispose_m4046621205 (U3CwaitRequestMessagesU3Ed__0_t3525191648 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Object SimChat/<waitRequestMessages>d__0::System.Collections.IEnumerator.get_Current()
extern "C"  Object_t * U3CwaitRequestMessagesU3Ed__0_System_Collections_IEnumerator_get_Current_m3062210140 (U3CwaitRequestMessagesU3Ed__0_t3525191648 * __this, const MethodInfo* method)
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
// System.Void SimChat/<waitRequestMessages>d__0::.ctor(System.Int32)
extern "C"  void U3CwaitRequestMessagesU3Ed__0__ctor_m3658563099 (U3CwaitRequestMessagesU3Ed__0_t3525191648 * __this, int32_t ___U3CU3E1__state, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state;
		__this->___U3CU3E1__state_1 = L_0;
		return;
	}
}
// System.Void SimChat/SimChatNetwork::.ctor(System.String,UnityEngine.MonoBehaviour)
extern TypeInfo* SimChatNetwork_t2617935487_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3254746851;
extern const uint32_t SimChatNetwork__ctor_m3842475854_MetadataUsageId;
extern "C"  void SimChatNetwork__ctor_m3842475854 (SimChatNetwork_t2617935487 * __this, String_t* ___identifier, MonoBehaviour_t3012272455 * ___currentMonoBehaviour, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SimChatNetwork__ctor_m3842475854_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___latest_3 = (((int64_t)((int64_t)0)));
		__this->___name_7 = _stringLiteral3254746851;
		__this->___outputFunction_9 = (bool)0;
		__this->___senderFunctionSet_11 = (bool)0;
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___identifier;
		IL2CPP_RUNTIME_CLASS_INIT(SimChatNetwork_t2617935487_il2cpp_TypeInfo_var);
		((SimChatNetwork_t2617935487_StaticFields*)SimChatNetwork_t2617935487_il2cpp_TypeInfo_var->static_fields)->___key_4 = L_0;
		MonoBehaviour_t3012272455 * L_1 = ___currentMonoBehaviour;
		__this->___mb_6 = L_1;
		return;
	}
}
// System.Void SimChat/SimChatNetwork::.ctor(System.String,UnityEngine.MonoBehaviour,System.String)
extern "C"  void SimChatNetwork__ctor_m857919242 (SimChatNetwork_t2617935487 * __this, String_t* ___identifier, MonoBehaviour_t3012272455 * ___currentMonoBehaviour, String_t* ___senderName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___identifier;
		MonoBehaviour_t3012272455 * L_1 = ___currentMonoBehaviour;
		SimChatNetwork__ctor_m3842475854(__this, L_0, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___senderName;
		__this->___name_7 = L_2;
		return;
	}
}
// System.Void SimChat/SimChatNetwork::setOutputFunction(System.Action`1<SimpleMessage[]>)
extern "C"  void SimChatNetwork_setOutputFunction_m2560077177 (SimChatNetwork_t2617935487 * __this, Action_1_t2569750681 * ___outFunk, const MethodInfo* method)
{
	{
		__this->___outputFunction_9 = (bool)1;
		Action_1_t2569750681 * L_0 = ___outFunk;
		__this->___outMessageFunk_8 = L_0;
		return;
	}
}
// System.Void SimChat/SimChatNetwork::setReceiveNameFunction(System.Action`1<System.String[]>)
extern "C"  void SimChatNetwork_setReceiveNameFunction_m1126139753 (SimChatNetwork_t2617935487 * __this, Action_1_t3105322948 * ___senderFunk, const MethodInfo* method)
{
	{
		__this->___senderFunctionSet_11 = (bool)1;
		Action_1_t3105322948 * L_0 = ___senderFunk;
		__this->___receiveSenderNames_10 = L_0;
		return;
	}
}
// System.Void SimChat/SimChatNetwork::changeKey(System.String)
extern TypeInfo* SimChatNetwork_t2617935487_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t2956870243_il2cpp_TypeInfo_var;
extern const uint32_t SimChatNetwork_changeKey_m1345441304_MetadataUsageId;
extern "C"  void SimChatNetwork_changeKey_m1345441304 (SimChatNetwork_t2617935487 * __this, String_t* ___newKey, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SimChatNetwork_changeKey_m1345441304_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___latest_3 = (((int64_t)((int64_t)0)));
		String_t* L_0 = ___newKey;
		IL2CPP_RUNTIME_CLASS_INIT(SimChatNetwork_t2617935487_il2cpp_TypeInfo_var);
		((SimChatNetwork_t2617935487_StaticFields*)SimChatNetwork_t2617935487_il2cpp_TypeInfo_var->static_fields)->___key_4 = L_0;
		((SimChatNetwork_t2617935487_StaticFields*)SimChatNetwork_t2617935487_il2cpp_TypeInfo_var->static_fields)->___senders_2 = ((StringU5BU5D_t2956870243*)SZArrayNew(StringU5BU5D_t2956870243_il2cpp_TypeInfo_var, (uint32_t)0));
		return;
	}
}
// System.Void SimChat/SimChatNetwork::addChatText(System.String,System.String)
extern TypeInfo* WWWForm_t3999572776_il2cpp_TypeInfo_var;
extern TypeInfo* SimChatNetwork_t2617935487_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t1522972100_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3355;
extern Il2CppCodeGenString* _stringLiteral108417;
extern Il2CppCodeGenString* _stringLiteral3534889;
extern Il2CppCodeGenString* _stringLiteral3145259691;
extern const uint32_t SimChatNetwork_addChatText_m94836317_MetadataUsageId;
extern "C"  void SimChatNetwork_addChatText_m94836317 (SimChatNetwork_t2617935487 * __this, String_t* ___sender, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SimChatNetwork_addChatText_m94836317_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	WWWForm_t3999572776 * V_0 = {0};
	WWW_t1522972100 * V_1 = {0};
	{
		WWWForm_t3999572776 * L_0 = (WWWForm_t3999572776 *)il2cpp_codegen_object_new(WWWForm_t3999572776_il2cpp_TypeInfo_var);
		WWWForm__ctor_m2306401574(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		WWWForm_t3999572776 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SimChatNetwork_t2617935487_il2cpp_TypeInfo_var);
		String_t* L_2 = ((SimChatNetwork_t2617935487_StaticFields*)SimChatNetwork_t2617935487_il2cpp_TypeInfo_var->static_fields)->___key_4;
		WWWForm_AddField_m474460647(L_1, _stringLiteral3355, L_2, /*hidden argument*/NULL);
		WWWForm_t3999572776 * L_3 = V_0;
		String_t* L_4 = ___message;
		WWWForm_AddField_m474460647(L_3, _stringLiteral108417, L_4, /*hidden argument*/NULL);
		WWWForm_t3999572776 * L_5 = V_0;
		String_t* L_6 = ___sender;
		WWWForm_AddField_m474460647(L_5, _stringLiteral3534889, L_6, /*hidden argument*/NULL);
		String_t* L_7 = ((SimChatNetwork_t2617935487_StaticFields*)SimChatNetwork_t2617935487_il2cpp_TypeInfo_var->static_fields)->___url_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m138640077(NULL /*static, unused*/, L_7, _stringLiteral3145259691, /*hidden argument*/NULL);
		WWWForm_t3999572776 * L_9 = V_0;
		WWW_t1522972100 * L_10 = (WWW_t1522972100 *)il2cpp_codegen_object_new(WWW_t1522972100_il2cpp_TypeInfo_var);
		WWW__ctor_m3818753408(L_10, L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		MonoBehaviour_t3012272455 * L_11 = (__this->___mb_6);
		WWW_t1522972100 * L_12 = V_1;
		Object_t * L_13 = SimChatNetwork_WaitForRequest_m807482481(__this, L_12, 1, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m1651502956(L_11, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimChat/SimChatNetwork::getChatText()
extern TypeInfo* WWWForm_t3999572776_il2cpp_TypeInfo_var;
extern TypeInfo* SimChatNetwork_t2617935487_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t1522972100_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3355;
extern Il2CppCodeGenString* _stringLiteral3705;
extern Il2CppCodeGenString* _stringLiteral3514171224;
extern const uint32_t SimChatNetwork_getChatText_m217664822_MetadataUsageId;
extern "C"  void SimChatNetwork_getChatText_m217664822 (SimChatNetwork_t2617935487 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SimChatNetwork_getChatText_m217664822_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	WWWForm_t3999572776 * V_0 = {0};
	WWW_t1522972100 * V_1 = {0};
	{
		WWWForm_t3999572776 * L_0 = (WWWForm_t3999572776 *)il2cpp_codegen_object_new(WWWForm_t3999572776_il2cpp_TypeInfo_var);
		WWWForm__ctor_m2306401574(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		WWWForm_t3999572776 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SimChatNetwork_t2617935487_il2cpp_TypeInfo_var);
		String_t* L_2 = ((SimChatNetwork_t2617935487_StaticFields*)SimChatNetwork_t2617935487_il2cpp_TypeInfo_var->static_fields)->___key_4;
		WWWForm_AddField_m474460647(L_1, _stringLiteral3355, L_2, /*hidden argument*/NULL);
		WWWForm_t3999572776 * L_3 = V_0;
		int64_t* L_4 = &(__this->___latest_3);
		String_t* L_5 = Int64_ToString_m3478011791(L_4, /*hidden argument*/NULL);
		WWWForm_AddField_m474460647(L_3, _stringLiteral3705, L_5, /*hidden argument*/NULL);
		String_t* L_6 = ((SimChatNetwork_t2617935487_StaticFields*)SimChatNetwork_t2617935487_il2cpp_TypeInfo_var->static_fields)->___url_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m138640077(NULL /*static, unused*/, L_6, _stringLiteral3514171224, /*hidden argument*/NULL);
		WWWForm_t3999572776 * L_8 = V_0;
		WWW_t1522972100 * L_9 = (WWW_t1522972100 *)il2cpp_codegen_object_new(WWW_t1522972100_il2cpp_TypeInfo_var);
		WWW__ctor_m3818753408(L_9, L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		MonoBehaviour_t3012272455 * L_10 = (__this->___mb_6);
		WWW_t1522972100 * L_11 = V_1;
		Object_t * L_12 = SimChatNetwork_WaitForRequest_m807482481(__this, L_11, 3, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m1651502956(L_10, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimChat/SimChatNetwork::addChatText(System.String)
extern "C"  void SimChatNetwork_addChatText_m1897188321 (SimChatNetwork_t2617935487 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_7);
		String_t* L_1 = ___message;
		SimChatNetwork_addChatText_m94836317(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator SimChat/SimChatNetwork::WaitForRequest(UnityEngine.WWW,System.Int32)
extern TypeInfo* U3CWaitForRequestU3Ed__2_t50615509_il2cpp_TypeInfo_var;
extern const uint32_t SimChatNetwork_WaitForRequest_m807482481_MetadataUsageId;
extern "C"  Object_t * SimChatNetwork_WaitForRequest_m807482481 (SimChatNetwork_t2617935487 * __this, WWW_t1522972100 * ___www, int32_t ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SimChatNetwork_WaitForRequest_m807482481_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	U3CWaitForRequestU3Ed__2_t50615509 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		U3CWaitForRequestU3Ed__2_t50615509 * L_0 = (U3CWaitForRequestU3Ed__2_t50615509 *)il2cpp_codegen_object_new(U3CWaitForRequestU3Ed__2_t50615509_il2cpp_TypeInfo_var);
		U3CWaitForRequestU3Ed__2__ctor_m1348894710(L_0, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CWaitForRequestU3Ed__2_t50615509 * L_1 = V_0;
		L_1->___U3CU3E4__this_2 = __this;
		U3CWaitForRequestU3Ed__2_t50615509 * L_2 = V_0;
		WWW_t1522972100 * L_3 = ___www;
		L_2->___www_3 = L_3;
		U3CWaitForRequestU3Ed__2_t50615509 * L_4 = V_0;
		int32_t L_5 = ___t;
		L_4->___t_4 = L_5;
		U3CWaitForRequestU3Ed__2_t50615509 * L_6 = V_0;
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		Object_t * L_7 = V_1;
		return L_7;
	}
}
// System.Void SimChat/SimChatNetwork::recievedSomething(System.String,System.Int32)
extern TypeInfo* SimChatNetwork_t2617935487_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t3416858730_il2cpp_TypeInfo_var;
extern TypeInfo* Debug_t1588791936_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m2633531342_MethodInfo_var;
extern const MethodInfo* Action_1_Invoke_m3300985747_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1101749206;
extern const uint32_t SimChatNetwork_recievedSomething_m847652929_MetadataUsageId;
extern "C"  void SimChatNetwork_recievedSomething_m847652929 (SimChatNetwork_t2617935487 * __this, String_t* ___s, int32_t ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SimChatNetwork_recievedSomething_m847652929_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	CharU5BU5D_t3416858730* V_2 = {0};
	int32_t G_B8_0 = 0;
	{
		int32_t L_0 = ___t;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0022;
		}
		if (L_1 == 1)
		{
			goto IL_0027;
		}
		if (L_1 == 2)
		{
			goto IL_002c;
		}
		if (L_1 == 3)
		{
			goto IL_002e;
		}
		if (L_1 == 4)
		{
			goto IL_0097;
		}
	}
	{
		goto IL_00cf;
	}

IL_0022:
	{
		goto IL_00dc;
	}

IL_0027:
	{
		goto IL_00dc;
	}

IL_002c:
	{
		goto IL_002e;
	}

IL_002e:
	{
		String_t* L_2 = ___s;
		IL2CPP_RUNTIME_CLASS_INIT(SimChatNetwork_t2617935487_il2cpp_TypeInfo_var);
		SimpleMessageU5BU5D_t2421297976* L_3 = SimChatNetwork_parseChatText_m24446859(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->___receiveMessages_5 = L_3;
		SimpleMessageU5BU5D_t2421297976* L_4 = (__this->___receiveMessages_5);
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_4)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}
	{
		String_t* L_5 = ___s;
		int32_t L_6 = String_get_Length_m2979997331(L_5, /*hidden argument*/NULL);
		G_B8_0 = ((((int32_t)((((int32_t)L_6) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0054;
	}

IL_0053:
	{
		G_B8_0 = 1;
	}

IL_0054:
	{
		V_1 = (bool)G_B8_0;
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_0076;
		}
	}
	{
		SimpleMessageU5BU5D_t2421297976* L_8 = (__this->___receiveMessages_5);
		SimpleMessageU5BU5D_t2421297976* L_9 = (__this->___receiveMessages_5);
		int32_t L_10 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_9)->max_length))))-(int32_t)1));
		int64_t L_11 = ((*(SimpleMessage_t3870468565 **)(SimpleMessage_t3870468565 **)SZArrayLdElema(L_8, L_10, sizeof(SimpleMessage_t3870468565 *)))->___time_0);
		__this->___latest_3 = L_11;
	}

IL_0076:
	{
		bool L_12 = (__this->___outputFunction_9);
		V_1 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_1;
		if (L_13)
		{
			goto IL_0095;
		}
	}
	{
		Action_1_t2569750681 * L_14 = (__this->___outMessageFunk_8);
		SimpleMessageU5BU5D_t2421297976* L_15 = (__this->___receiveMessages_5);
		Action_1_Invoke_m2633531342(L_14, L_15, /*hidden argument*/Action_1_Invoke_m2633531342_MethodInfo_var);
	}

IL_0095:
	{
		goto IL_00dc;
	}

IL_0097:
	{
		String_t* L_16 = ___s;
		V_2 = ((CharU5BU5D_t3416858730*)SZArrayNew(CharU5BU5D_t3416858730_il2cpp_TypeInfo_var, (uint32_t)1));
		CharU5BU5D_t3416858730* L_17 = V_2;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_17, 0, sizeof(uint16_t))) = (uint16_t)((int32_t)44);
		CharU5BU5D_t3416858730* L_18 = V_2;
		StringU5BU5D_t2956870243* L_19 = String_Split_m290179486(L_16, L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SimChatNetwork_t2617935487_il2cpp_TypeInfo_var);
		((SimChatNetwork_t2617935487_StaticFields*)SimChatNetwork_t2617935487_il2cpp_TypeInfo_var->static_fields)->___senders_2 = L_19;
		bool L_20 = (__this->___senderFunctionSet_11);
		V_1 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_00cd;
		}
	}
	{
		Action_1_t3105322948 * L_22 = (__this->___receiveSenderNames_10);
		IL2CPP_RUNTIME_CLASS_INIT(SimChatNetwork_t2617935487_il2cpp_TypeInfo_var);
		StringU5BU5D_t2956870243* L_23 = ((SimChatNetwork_t2617935487_StaticFields*)SimChatNetwork_t2617935487_il2cpp_TypeInfo_var->static_fields)->___senders_2;
		Action_1_Invoke_m3300985747(L_22, L_23, /*hidden argument*/Action_1_Invoke_m3300985747_MethodInfo_var);
	}

IL_00cd:
	{
		goto IL_00dc;
	}

IL_00cf:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1588791936_il2cpp_TypeInfo_var);
		Debug_LogError_m2146446074(NULL /*static, unused*/, _stringLiteral1101749206, /*hidden argument*/NULL);
		goto IL_00dc;
	}

IL_00dc:
	{
		return;
	}
}
// SimpleMessage[] SimChat/SimChatNetwork::parseChatText(System.String)
extern TypeInfo* SimChatNetwork_t2617935487_il2cpp_TypeInfo_var;
extern TypeInfo* SimpleMessageU5BU5D_t2421297976_il2cpp_TypeInfo_var;
extern TypeInfo* SimpleMessage_t3870468565_il2cpp_TypeInfo_var;
extern const uint32_t SimChatNetwork_parseChatText_m24446859_MetadataUsageId;
extern "C"  SimpleMessageU5BU5D_t2421297976* SimChatNetwork_parseChatText_m24446859 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SimChatNetwork_parseChatText_m24446859_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t2956870243* V_0 = {0};
	SimpleMessageU5BU5D_t2421297976* V_1 = {0};
	int32_t V_2 = 0;
	SimpleMessageU5BU5D_t2421297976* V_3 = {0};
	bool V_4 = false;
	{
		String_t* L_0 = ___s;
		IL2CPP_RUNTIME_CLASS_INIT(SimChatNetwork_t2617935487_il2cpp_TypeInfo_var);
		StringU5BU5D_t2956870243* L_1 = ((SimChatNetwork_t2617935487_StaticFields*)SimChatNetwork_t2617935487_il2cpp_TypeInfo_var->static_fields)->___splt_1;
		StringU5BU5D_t2956870243* L_2 = String_Split_m459616251(L_0, L_1, 1, /*hidden argument*/NULL);
		V_0 = L_2;
		StringU5BU5D_t2956870243* L_3 = V_0;
		V_1 = ((SimpleMessageU5BU5D_t2421297976*)SZArrayNew(SimpleMessageU5BU5D_t2421297976_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((Array_t *)L_3)->max_length))))));
		V_2 = 0;
		goto IL_002c;
	}

IL_001b:
	{
		SimpleMessageU5BU5D_t2421297976* L_4 = V_1;
		int32_t L_5 = V_2;
		StringU5BU5D_t2956870243* L_6 = V_0;
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		SimpleMessage_t3870468565 * L_9 = (SimpleMessage_t3870468565 *)il2cpp_codegen_object_new(SimpleMessage_t3870468565_il2cpp_TypeInfo_var);
		SimpleMessage__ctor_m4202990477(L_9, (*(String_t**)(String_t**)SZArrayLdElema(L_6, L_8, sizeof(String_t*))), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_4, L_9);
		*((SimpleMessage_t3870468565 **)(SimpleMessage_t3870468565 **)SZArrayLdElema(L_4, L_5, sizeof(SimpleMessage_t3870468565 *))) = (SimpleMessage_t3870468565 *)L_9;
		int32_t L_10 = V_2;
		V_2 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_002c:
	{
		int32_t L_11 = V_2;
		StringU5BU5D_t2956870243* L_12 = V_0;
		V_4 = (bool)((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_12)->max_length))))))? 1 : 0);
		bool L_13 = V_4;
		if (L_13)
		{
			goto IL_001b;
		}
	}
	{
		SimpleMessageU5BU5D_t2421297976* L_14 = V_1;
		V_3 = L_14;
		goto IL_003c;
	}

IL_003c:
	{
		SimpleMessageU5BU5D_t2421297976* L_15 = V_3;
		return L_15;
	}
}
// System.Void SimChat/SimChatNetwork::.cctor()
extern TypeInfo* SimChatNetwork_t2617935487_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t2956870243_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3667595852;
extern Il2CppCodeGenString* _stringLiteral413;
extern Il2CppCodeGenString* _stringLiteral0;
extern const uint32_t SimChatNetwork__cctor_m2192516912_MetadataUsageId;
extern "C"  void SimChatNetwork__cctor_m2192516912 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SimChatNetwork__cctor_m2192516912_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t2956870243* V_0 = {0};
	{
		((SimChatNetwork_t2617935487_StaticFields*)SimChatNetwork_t2617935487_il2cpp_TypeInfo_var->static_fields)->___url_0 = _stringLiteral3667595852;
		V_0 = ((StringU5BU5D_t2956870243*)SZArrayNew(StringU5BU5D_t2956870243_il2cpp_TypeInfo_var, (uint32_t)1));
		StringU5BU5D_t2956870243* L_0 = V_0;
		ArrayElementTypeCheck (L_0, _stringLiteral413);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0, sizeof(String_t*))) = (String_t*)_stringLiteral413;
		StringU5BU5D_t2956870243* L_1 = V_0;
		((SimChatNetwork_t2617935487_StaticFields*)SimChatNetwork_t2617935487_il2cpp_TypeInfo_var->static_fields)->___splt_1 = L_1;
		((SimChatNetwork_t2617935487_StaticFields*)SimChatNetwork_t2617935487_il2cpp_TypeInfo_var->static_fields)->___senders_2 = ((StringU5BU5D_t2956870243*)SZArrayNew(StringU5BU5D_t2956870243_il2cpp_TypeInfo_var, (uint32_t)0));
		((SimChatNetwork_t2617935487_StaticFields*)SimChatNetwork_t2617935487_il2cpp_TypeInfo_var->static_fields)->___key_4 = _stringLiteral0;
		return;
	}
}
// System.Boolean SimChat/SimChatNetwork/<WaitForRequest>d__2::MoveNext()
extern "C"  bool U3CWaitForRequestU3Ed__2_MoveNext_m38216973 (U3CWaitForRequestU3Ed__2_t50615509 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	SimChatNetwork_t2617935487 * G_B8_0 = {0};
	SimChatNetwork_t2617935487 * G_B7_0 = {0};
	String_t* G_B9_0 = {0};
	SimChatNetwork_t2617935487 * G_B9_1 = {0};
	{
		int32_t L_0 = (__this->___U3CU3E1__state_1);
		V_1 = L_0;
		int32_t L_1 = V_1;
		if (L_1 == 0)
		{
			goto IL_0019;
		}
		if (L_1 == 1)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_001b;
	}

IL_0017:
	{
		goto IL_003c;
	}

IL_0019:
	{
		goto IL_001d;
	}

IL_001b:
	{
		goto IL_007b;
	}

IL_001d:
	{
		__this->___U3CU3E1__state_1 = (-1);
		WWW_t1522972100 * L_2 = (__this->___www_3);
		__this->___U3CU3E2__current_0 = L_2;
		__this->___U3CU3E1__state_1 = 1;
		V_0 = (bool)1;
		goto IL_007f;
	}

IL_003c:
	{
		__this->___U3CU3E1__state_1 = (-1);
		SimChatNetwork_t2617935487 * L_3 = (__this->___U3CU3E4__this_2);
		WWW_t1522972100 * L_4 = (__this->___www_3);
		String_t* L_5 = WWW_get_error_m909946570(L_4, /*hidden argument*/NULL);
		G_B7_0 = L_3;
		if (!L_5)
		{
			G_B8_0 = L_3;
			goto IL_0063;
		}
	}
	{
		WWW_t1522972100 * L_6 = (__this->___www_3);
		String_t* L_7 = WWW_get_error_m909946570(L_6, /*hidden argument*/NULL);
		G_B9_0 = L_7;
		G_B9_1 = G_B7_0;
		goto IL_006e;
	}

IL_0063:
	{
		WWW_t1522972100 * L_8 = (__this->___www_3);
		String_t* L_9 = WWW_get_text_m1693891853(L_8, /*hidden argument*/NULL);
		G_B9_0 = L_9;
		G_B9_1 = G_B8_0;
	}

IL_006e:
	{
		int32_t L_10 = (__this->___t_4);
		SimChatNetwork_recievedSomething_m847652929(G_B9_1, G_B9_0, L_10, /*hidden argument*/NULL);
	}

IL_007b:
	{
		V_0 = (bool)0;
		goto IL_007f;
	}

IL_007f:
	{
		bool L_11 = V_0;
		return L_11;
	}
}
// System.Object SimChat/SimChatNetwork/<WaitForRequest>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C"  Object_t * U3CWaitForRequestU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m831133912 (U3CWaitForRequestU3Ed__2_t50615509 * __this, const MethodInfo* method)
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
// System.Void SimChat/SimChatNetwork/<WaitForRequest>d__2::System.Collections.IEnumerator.Reset()
extern TypeInfo* NotSupportedException_t1374155497_il2cpp_TypeInfo_var;
extern const uint32_t U3CWaitForRequestU3Ed__2_System_Collections_IEnumerator_Reset_m161060405_MetadataUsageId;
extern "C"  void U3CWaitForRequestU3Ed__2_System_Collections_IEnumerator_Reset_m161060405 (U3CWaitForRequestU3Ed__2_t50615509 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U3CWaitForRequestU3Ed__2_System_Collections_IEnumerator_Reset_m161060405_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t1374155497 * L_0 = (NotSupportedException_t1374155497 *)il2cpp_codegen_object_new(NotSupportedException_t1374155497_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m149930845(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void SimChat/SimChatNetwork/<WaitForRequest>d__2::System.IDisposable.Dispose()
extern "C"  void U3CWaitForRequestU3Ed__2_System_IDisposable_Dispose_m1795829402 (U3CWaitForRequestU3Ed__2_t50615509 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Object SimChat/SimChatNetwork/<WaitForRequest>d__2::System.Collections.IEnumerator.get_Current()
extern "C"  Object_t * U3CWaitForRequestU3Ed__2_System_Collections_IEnumerator_get_Current_m4101164833 (U3CWaitForRequestU3Ed__2_t50615509 * __this, const MethodInfo* method)
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
// System.Void SimChat/SimChatNetwork/<WaitForRequest>d__2::.ctor(System.Int32)
extern "C"  void U3CWaitForRequestU3Ed__2__ctor_m1348894710 (U3CWaitForRequestU3Ed__2_t50615509 * __this, int32_t ___U3CU3E1__state, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state;
		__this->___U3CU3E1__state_1 = L_0;
		return;
	}
}
// System.Void SimpleMessage::.ctor(System.String)
extern TypeInfo* CharU5BU5D_t3416858730_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3480;
extern Il2CppCodeGenString* _stringLiteral0;
extern const uint32_t SimpleMessage__ctor_m4202990477_MetadataUsageId;
extern "C"  void SimpleMessage__ctor_m4202990477 (SimpleMessage_t3870468565 * __this, String_t* ___mes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SimpleMessage__ctor_m4202990477_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t2956870243* V_0 = {0};
	CharU5BU5D_t3416858730* V_1 = {0};
	bool V_2 = false;
	{
		__this->___time_0 = (((int64_t)((int64_t)0)));
		__this->___sender_1 = _stringLiteral3480;
		__this->___message_2 = _stringLiteral0;
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___mes;
		V_1 = ((CharU5BU5D_t3416858730*)SZArrayNew(CharU5BU5D_t3416858730_il2cpp_TypeInfo_var, (uint32_t)1));
		CharU5BU5D_t3416858730* L_1 = V_1;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_1, 0, sizeof(uint16_t))) = (uint16_t)((int32_t)44);
		CharU5BU5D_t3416858730* L_2 = V_1;
		StringU5BU5D_t2956870243* L_3 = String_Split_m290179486(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		StringU5BU5D_t2956870243* L_4 = V_0;
		int32_t L_5 = 0;
		int64_t* L_6 = &(__this->___time_0);
		bool L_7 = Int64_TryParse_m2106581948(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_4, L_5, sizeof(String_t*))), L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_0054;
		}
	}
	{
		__this->___time_0 = (((int64_t)((int64_t)(-1))));
	}

IL_0054:
	{
		StringU5BU5D_t2956870243* L_9 = V_0;
		int32_t L_10 = 1;
		__this->___sender_1 = (*(String_t**)(String_t**)SZArrayLdElema(L_9, L_10, sizeof(String_t*)));
		StringU5BU5D_t2956870243* L_11 = V_0;
		int32_t L_12 = 2;
		__this->___message_2 = (*(String_t**)(String_t**)SZArrayLdElema(L_11, L_12, sizeof(String_t*)));
		return;
	}
}
// System.Int32 SimpleMessage::CompareTo(SimpleMessage)
extern "C"  int32_t SimpleMessage_CompareTo_m3972907194 (SimpleMessage_t3870468565 * __this, SimpleMessage_t3870468565 * ___other, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = (__this->___sender_1);
		SimpleMessage_t3870468565 * L_1 = ___other;
		String_t* L_2 = (L_1->___sender_1);
		int32_t L_3 = String_CompareTo_m1951109700(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.String SimpleMessage::ToString()
extern TypeInfo* StringU5BU5D_t2956870243_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral58;
extern const uint32_t SimpleMessage_ToString_m1341775992_MetadataUsageId;
extern "C"  String_t* SimpleMessage_ToString_m1341775992 (SimpleMessage_t3870468565 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SimpleMessage_ToString_m1341775992_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	StringU5BU5D_t2956870243* V_1 = {0};
	{
		V_1 = ((StringU5BU5D_t2956870243*)SZArrayNew(StringU5BU5D_t2956870243_il2cpp_TypeInfo_var, (uint32_t)5));
		StringU5BU5D_t2956870243* L_0 = V_1;
		int64_t* L_1 = &(__this->___time_0);
		String_t* L_2 = Int64_ToString_m3478011791(L_1, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_0, L_2);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0, sizeof(String_t*))) = (String_t*)L_2;
		StringU5BU5D_t2956870243* L_3 = V_1;
		ArrayElementTypeCheck (L_3, _stringLiteral58);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 1, sizeof(String_t*))) = (String_t*)_stringLiteral58;
		StringU5BU5D_t2956870243* L_4 = V_1;
		String_t* L_5 = (__this->___sender_1);
		ArrayElementTypeCheck (L_4, L_5);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 2, sizeof(String_t*))) = (String_t*)L_5;
		StringU5BU5D_t2956870243* L_6 = V_1;
		ArrayElementTypeCheck (L_6, _stringLiteral58);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 3, sizeof(String_t*))) = (String_t*)_stringLiteral58;
		StringU5BU5D_t2956870243* L_7 = V_1;
		String_t* L_8 = (__this->___message_2);
		ArrayElementTypeCheck (L_7, L_8);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 4, sizeof(String_t*))) = (String_t*)L_8;
		StringU5BU5D_t2956870243* L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m21867311(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		goto IL_0041;
	}

IL_0041:
	{
		String_t* L_11 = V_0;
		return L_11;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
