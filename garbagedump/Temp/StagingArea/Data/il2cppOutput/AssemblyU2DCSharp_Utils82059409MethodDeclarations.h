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

// UnityEngine.Mesh
struct Mesh_t1525280346;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_BoneWeight3140323017.h"
#include "UnityEngine_UnityEngine_Mesh1525280346.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

// System.Single Utils::ClampAngle(System.Single)
extern "C"  float Utils_ClampAngle_m1507217301 (Object_t * __this /* static, unused */, float ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Utils::GetWeight(UnityEngine.BoneWeight,System.Int32)
extern "C"  float Utils_GetWeight_m1699370776 (Object_t * __this /* static, unused */, BoneWeight_t3140323017  ___bw, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.BoneWeight Utils::SetWeight(UnityEngine.BoneWeight,System.Int32,System.Single)
extern "C"  BoneWeight_t3140323017  Utils_SetWeight_m3759458547 (Object_t * __this /* static, unused */, BoneWeight_t3140323017  ___bw, int32_t ___index, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Utils::Log(UnityEngine.BoneWeight)
extern "C"  void Utils_Log_m2690775145 (Object_t * __this /* static, unused */, BoneWeight_t3140323017  ___bw, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Utils::Clone(UnityEngine.Mesh)
extern "C"  Mesh_t1525280346 * Utils_Clone_m3213302506 (Object_t * __this /* static, unused */, Mesh_t1525280346 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.BoneWeight Utils::Clone(UnityEngine.BoneWeight)
extern "C"  BoneWeight_t3140323017  Utils_Clone_m893645900 (Object_t * __this /* static, unused */, BoneWeight_t3140323017  ___bw, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Utils::AsInt(UnityEngine.Color)
extern "C"  int32_t Utils_AsInt_m3865815747 (Object_t * __this /* static, unused */, Color_t1588175760  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color Utils::ColorFromInt(System.Int32)
extern "C"  Color_t1588175760  Utils_ColorFromInt_m1607264118 (Object_t * __this /* static, unused */, int32_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
