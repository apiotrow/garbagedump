﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.AnimationCurve
struct AnimationCurve_t3342907448;
struct AnimationCurve_t3342907448_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t2477572954;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C"  void AnimationCurve__ctor_m2436282331 (AnimationCurve_t3342907448 * __this, KeyframeU5BU5D_t2477572954* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C"  void AnimationCurve__ctor_m4037844610 (AnimationCurve_t3342907448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C"  void AnimationCurve_Cleanup_m386995588 (AnimationCurve_t3342907448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C"  void AnimationCurve_Finalize_m2382224032 (AnimationCurve_t3342907448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C"  void AnimationCurve_Init_m4012213483 (AnimationCurve_t3342907448 * __this, KeyframeU5BU5D_t2477572954* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct AnimationCurve_t3342907448;
struct AnimationCurve_t3342907448_marshaled;

extern "C" void AnimationCurve_t3342907448_marshal(const AnimationCurve_t3342907448& unmarshaled, AnimationCurve_t3342907448_marshaled& marshaled);
extern "C" void AnimationCurve_t3342907448_marshal_back(const AnimationCurve_t3342907448_marshaled& marshaled, AnimationCurve_t3342907448& unmarshaled);
extern "C" void AnimationCurve_t3342907448_marshal_cleanup(AnimationCurve_t3342907448_marshaled& marshaled);
