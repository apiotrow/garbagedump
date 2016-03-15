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

// SimChat/SimChatNetwork
struct SimChatNetwork_t2617935487;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3012272455;
// System.Action`1<SimpleMessage[]>
struct Action_1_t2569750681;
// System.Action`1<System.String[]>
struct Action_1_t3105322948;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// UnityEngine.WWW
struct WWW_t1522972100;
// SimpleMessage[]
struct SimpleMessageU5BU5D_t2421297976;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_WWW1522972100.h"

// System.Void SimChat/SimChatNetwork::.ctor(System.String,UnityEngine.MonoBehaviour)
extern "C"  void SimChatNetwork__ctor_m3842475854 (SimChatNetwork_t2617935487 * __this, String_t* ___identifier, MonoBehaviour_t3012272455 * ___currentMonoBehaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimChat/SimChatNetwork::.ctor(System.String,UnityEngine.MonoBehaviour,System.String)
extern "C"  void SimChatNetwork__ctor_m857919242 (SimChatNetwork_t2617935487 * __this, String_t* ___identifier, MonoBehaviour_t3012272455 * ___currentMonoBehaviour, String_t* ___senderName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimChat/SimChatNetwork::setOutputFunction(System.Action`1<SimpleMessage[]>)
extern "C"  void SimChatNetwork_setOutputFunction_m2560077177 (SimChatNetwork_t2617935487 * __this, Action_1_t2569750681 * ___outFunk, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimChat/SimChatNetwork::setReceiveNameFunction(System.Action`1<System.String[]>)
extern "C"  void SimChatNetwork_setReceiveNameFunction_m1126139753 (SimChatNetwork_t2617935487 * __this, Action_1_t3105322948 * ___senderFunk, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimChat/SimChatNetwork::changeKey(System.String)
extern "C"  void SimChatNetwork_changeKey_m1345441304 (SimChatNetwork_t2617935487 * __this, String_t* ___newKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimChat/SimChatNetwork::addChatText(System.String,System.String)
extern "C"  void SimChatNetwork_addChatText_m94836317 (SimChatNetwork_t2617935487 * __this, String_t* ___sender, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimChat/SimChatNetwork::getChatText()
extern "C"  void SimChatNetwork_getChatText_m217664822 (SimChatNetwork_t2617935487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimChat/SimChatNetwork::addChatText(System.String)
extern "C"  void SimChatNetwork_addChatText_m1897188321 (SimChatNetwork_t2617935487 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SimChat/SimChatNetwork::WaitForRequest(UnityEngine.WWW,System.Int32)
extern "C"  Object_t * SimChatNetwork_WaitForRequest_m807482481 (SimChatNetwork_t2617935487 * __this, WWW_t1522972100 * ___www, int32_t ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimChat/SimChatNetwork::recievedSomething(System.String,System.Int32)
extern "C"  void SimChatNetwork_recievedSomething_m847652929 (SimChatNetwork_t2617935487 * __this, String_t* ___s, int32_t ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleMessage[] SimChat/SimChatNetwork::parseChatText(System.String)
extern "C"  SimpleMessageU5BU5D_t2421297976* SimChatNetwork_parseChatText_m24446859 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimChat/SimChatNetwork::.cctor()
extern "C"  void SimChatNetwork__cctor_m2192516912 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
