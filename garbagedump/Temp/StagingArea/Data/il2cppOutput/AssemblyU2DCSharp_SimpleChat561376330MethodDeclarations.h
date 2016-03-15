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

// SimpleChat
struct SimpleChat_t561376330;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3012272455;
// SimpleMessage[]
struct SimpleMessageU5BU5D_t2421297976;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// System.Void SimpleChat::.ctor(System.String,UnityEngine.MonoBehaviour,System.String)
extern "C"  void SimpleChat__ctor_m404510742 (SimpleChat_t561376330 * __this, String_t* ___identifier, MonoBehaviour_t3012272455 * ___currentMonoBehaviour, String_t* ___senderName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleChat::receive(SimpleMessage[])
extern "C"  void SimpleChat_receive_m1735071913 (SimpleChat_t561376330 * __this, SimpleMessageU5BU5D_t2421297976* ___sma, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleChat::draw()
extern "C"  void SimpleChat_draw_m814290871 (SimpleChat_t561376330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
