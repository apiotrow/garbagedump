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

// System.String
struct String_t;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t1890718142;
// UnityEngine.GUIContent
struct GUIContent_t2432841515;
// UnityEngine.GUIStyle
struct GUIStyle_t1006925219;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t3151226183;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_GUIContent2432841515.h"
#include "UnityEngine_UnityEngine_GUIStyle1006925219.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_Label_m925445731 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t1890718142* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::DoLabel(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_DoLabel_m3812046522 (Object_t * __this /* static, unused */, GUIContent_t2432841515 * ___content, GUIStyle_t1006925219 * ___style, GUILayoutOptionU5BU5D_t1890718142* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
extern "C"  bool GUILayout_Button_m6468109 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t1890718142* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::DoButton(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  bool GUILayout_DoButton_m1519327982 (Object_t * __this /* static, unused */, GUIContent_t2432841515 * ___content, GUIStyle_t1006925219 * ___style, GUILayoutOptionU5BU5D_t1890718142* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::TextField(System.String,UnityEngine.GUILayoutOption[])
extern "C"  String_t* GUILayout_TextField_m3370910503 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t1890718142* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::TextArea(System.String,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  String_t* GUILayout_TextArea_m1482648581 (Object_t * __this /* static, unused */, String_t* ___text, GUIStyle_t1006925219 * ___style, GUILayoutOptionU5BU5D_t1890718142* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::DoTextField(System.String,System.Int32,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  String_t* GUILayout_DoTextField_m3824368015 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___maxLength, bool ___multiline, GUIStyle_t1006925219 * ___style, GUILayoutOptionU5BU5D_t1890718142* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Space(System.Single)
extern "C"  void GUILayout_Space_m559926739 (Object_t * __this /* static, unused */, float ___pixels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::FlexibleSpace()
extern "C"  void GUILayout_FlexibleSpace_m3316706189 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_BeginHorizontal_m722450062 (Object_t * __this /* static, unused */, GUILayoutOptionU5BU5D_t1890718142* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_BeginHorizontal_m2418525209 (Object_t * __this /* static, unused */, GUIStyle_t1006925219 * ___style, GUILayoutOptionU5BU5D_t1890718142* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_BeginHorizontal_m2423643318 (Object_t * __this /* static, unused */, GUIContent_t2432841515 * ___content, GUIStyle_t1006925219 * ___style, GUILayoutOptionU5BU5D_t1890718142* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndHorizontal()
extern "C"  void GUILayout_EndHorizontal_m556624369 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_BeginVertical_m2155819644 (Object_t * __this /* static, unused */, GUILayoutOptionU5BU5D_t1890718142* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_BeginVertical_m2534844651 (Object_t * __this /* static, unused */, GUIStyle_t1006925219 * ___style, GUILayoutOptionU5BU5D_t1890718142* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_BeginVertical_m3125652388 (Object_t * __this /* static, unused */, GUIContent_t2432841515 * ___content, GUIStyle_t1006925219 * ___style, GUILayoutOptionU5BU5D_t1890718142* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndVertical()
extern "C"  void GUILayout_EndVertical_m3685530563 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect)
extern "C"  void GUILayout_BeginArea_m4120101869 (Object_t * __this /* static, unused */, Rect_t1525428817  ___screenRect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect,UnityEngine.GUIStyle)
extern "C"  void GUILayout_BeginArea_m3882119276 (Object_t * __this /* static, unused */, Rect_t1525428817  ___screenRect, GUIStyle_t1006925219 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  void GUILayout_BeginArea_m2566106901 (Object_t * __this /* static, unused */, Rect_t1525428817  ___screenRect, GUIContent_t2432841515 * ___content, GUIStyle_t1006925219 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndArea()
extern "C"  void GUILayout_EndArea_m755663130 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUILayout::BeginScrollView(UnityEngine.Vector2,UnityEngine.GUILayoutOption[])
extern "C"  Vector2_t3525329788  GUILayout_BeginScrollView_m247627737 (Object_t * __this /* static, unused */, Vector2_t3525329788  ___scrollPosition, GUILayoutOptionU5BU5D_t1890718142* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUILayout::BeginScrollView(UnityEngine.Vector2,System.Boolean,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  Vector2_t3525329788  GUILayout_BeginScrollView_m3507871150 (Object_t * __this /* static, unused */, Vector2_t3525329788  ___scrollPosition, bool ___alwaysShowHorizontal, bool ___alwaysShowVertical, GUIStyle_t1006925219 * ___horizontalScrollbar, GUIStyle_t1006925219 * ___verticalScrollbar, GUIStyle_t1006925219 * ___background, GUILayoutOptionU5BU5D_t1890718142* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndScrollView()
extern "C"  void GUILayout_EndScrollView_m2116108639 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndScrollView(System.Boolean)
extern "C"  void GUILayout_EndScrollView_m3241059478 (Object_t * __this /* static, unused */, bool ___handleScrollWheel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
extern "C"  GUILayoutOption_t3151226183 * GUILayout_Width_m2259621411 (Object_t * __this /* static, unused */, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
extern "C"  GUILayoutOption_t3151226183 * GUILayout_Height_m3774802884 (Object_t * __this /* static, unused */, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandWidth(System.Boolean)
extern "C"  GUILayoutOption_t3151226183 * GUILayout_ExpandWidth_m1724891333 (Object_t * __this /* static, unused */, bool ___expand, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandHeight(System.Boolean)
extern "C"  GUILayoutOption_t3151226183 * GUILayout_ExpandHeight_m2691143288 (Object_t * __this /* static, unused */, bool ___expand, const MethodInfo* method) IL2CPP_METHOD_ATTR;
