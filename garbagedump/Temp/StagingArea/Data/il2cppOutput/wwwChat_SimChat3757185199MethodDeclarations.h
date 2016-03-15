#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

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

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// System.String SimChat::get_senderName()
extern "C"  String_t* SimChat_get_senderName_m3114027567 (SimChat_t3757185199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimChat::set_continueCheck(System.Boolean)
extern "C"  void SimChat_set_continueCheck_m976881588 (SimChat_t3757185199 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimChat::.ctor(System.String,UnityEngine.MonoBehaviour,System.String)
extern "C"  void SimChat__ctor_m1551464620 (SimChat_t3757185199 * __this, String_t* ___identifier, MonoBehaviour_t3012272455 * ___currentMonoBehaviour, String_t* ___senderName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimChat::changeIdentifier(System.String)
extern "C"  void SimChat_changeIdentifier_m1123186560 (SimChat_t3757185199 * __this, String_t* ___newIdentifier, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimChat::setReceiveFunction(System.Action`1<SimpleMessage[]>)
extern "C"  void SimChat_setReceiveFunction_m2654152773 (SimChat_t3757185199 * __this, Action_1_t2569750681 * ___rf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimChat::continueCheckMessages()
extern "C"  void SimChat_continueCheckMessages_m417960006 (SimChat_t3757185199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimChat::getNewMessages()
extern "C"  void SimChat_getNewMessages_m3736241887 (SimChat_t3757185199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimChat::receiveMessage(SimpleMessage[])
extern "C"  void SimChat_receiveMessage_m2752019854 (SimChat_t3757185199 * __this, SimpleMessageU5BU5D_t2421297976* ___newMessages, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SimChat::waitRequestMessages(System.Single)
extern "C"  Object_t * SimChat_waitRequestMessages_m3475773282 (SimChat_t3757185199 * __this, float ___wait, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimChat::receiveSenders(System.String[])
extern "C"  void SimChat_receiveSenders_m3068331228 (SimChat_t3757185199 * __this, StringU5BU5D_t2956870243* ___sndrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimChat::sendMessage()
extern "C"  void SimChat_sendMessage_m1175137304 (SimChat_t3757185199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
