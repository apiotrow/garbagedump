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

// Bone2DWeights
struct Bone2DWeights_t1758072805;
// Bone2DWeight[]
struct Bone2DWeightU5BU5D_t978468027;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t2956870243;
// UnityEngine.BoneWeight[]
struct BoneWeightU5BU5D_t2340913140;
// Bone2DWeight
struct Bone2DWeight_t4074584654;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Bone2DWeight4074584654.h"

// System.Void Bone2DWeights::.ctor()
extern "C"  void Bone2DWeights__ctor_m2491638566 (Bone2DWeights_t1758072805 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Bone2DWeight[] Bone2DWeights::get_Item(System.String)
extern "C"  Bone2DWeightU5BU5D_t978468027* Bone2DWeights_get_Item_m1060409877 (Bone2DWeights_t1758072805 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Bone2DWeights::get_Count()
extern "C"  int32_t Bone2DWeights_get_Count_m3788420280 (Bone2DWeights_t1758072805 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Bone2DWeights::GetBones()
extern "C"  StringU5BU5D_t2956870243* Bone2DWeights_GetBones_m4133056502 (Bone2DWeights_t1758072805 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Bone2DWeights::GetWeight(System.Int32,System.String)
extern "C"  float Bone2DWeights_GetWeight_m942481611 (Bone2DWeights_t1758072805 * __this, int32_t ___vertex, String_t* ___bone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bone2DWeights::SetWeight(System.Int32,System.String,System.Int32,System.Single)
extern "C"  void Bone2DWeights_SetWeight_m2479634577 (Bone2DWeights_t1758072805 * __this, int32_t ___vertex, String_t* ___bone, int32_t ___index, float ___weight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.BoneWeight[] Bone2DWeights::GetUnityBoneWeights()
extern "C"  BoneWeightU5BU5D_t2340913140* Bone2DWeights_GetUnityBoneWeights_m2587481924 (Bone2DWeights_t1758072805 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Bone2DWeights::<GetBones>m__4(Bone2DWeight)
extern "C"  String_t* Bone2DWeights_U3CGetBonesU3Em__4_m1966199101 (Object_t * __this /* static, unused */, Bone2DWeight_t4074584654 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Bone2DWeights::<GetUnityBoneWeights>m__7(Bone2DWeight)
extern "C"  int32_t Bone2DWeights_U3CGetUnityBoneWeightsU3Em__7_m188586352 (Object_t * __this /* static, unused */, Bone2DWeight_t4074584654 * ___bw, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Bone2DWeights::<GetUnityBoneWeights>m__8(Bone2DWeight)
extern "C"  bool Bone2DWeights_U3CGetUnityBoneWeightsU3Em__8_m1122375639 (Object_t * __this /* static, unused */, Bone2DWeight_t4074584654 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Bone2DWeights::<GetUnityBoneWeights>m__9(Bone2DWeight)
extern "C"  float Bone2DWeights_U3CGetUnityBoneWeightsU3Em__9_m1231040048 (Object_t * __this /* static, unused */, Bone2DWeight_t4074584654 * ___bw, const MethodInfo* method) IL2CPP_METHOD_ATTR;
