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

// dreamloLeaderBoard
struct dreamloLeaderBoard_t3691210423;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Collections.Generic.List`1<dreamloLeaderBoard/Score>
struct List_1_t876670827;
// dreamloLeaderBoard/Score[]
struct ScoreU5BU5D_t3581624199;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_dreamloLeaderBoard_Score79711858.h"

// System.Void dreamloLeaderBoard::.ctor()
extern "C"  void dreamloLeaderBoard__ctor_m3004512196 (dreamloLeaderBoard_t3691210423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void dreamloLeaderBoard::Start()
extern "C"  void dreamloLeaderBoard_Start_m1951649988 (dreamloLeaderBoard_t3691210423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// dreamloLeaderBoard dreamloLeaderBoard::GetSceneDreamloLeaderboard()
extern "C"  dreamloLeaderBoard_t3691210423 * dreamloLeaderBoard_GetSceneDreamloLeaderboard_m4176614259 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void dreamloLeaderBoard::AddScore(System.String,System.Int32)
extern "C"  void dreamloLeaderBoard_AddScore_m814536070 (dreamloLeaderBoard_t3691210423 * __this, String_t* ___playerName, int32_t ___totalScore, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void dreamloLeaderBoard::AddScore(System.String,System.Int32,System.Int32)
extern "C"  void dreamloLeaderBoard_AddScore_m3304059153 (dreamloLeaderBoard_t3691210423 * __this, String_t* ___playerName, int32_t ___totalScore, int32_t ___totalSeconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void dreamloLeaderBoard::AddScore(System.String,System.Int32,System.Int32,System.String)
extern "C"  void dreamloLeaderBoard_AddScore_m2378262413 (dreamloLeaderBoard_t3691210423 * __this, String_t* ___playerName, int32_t ___totalScore, int32_t ___totalSeconds, String_t* ___shortText, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator dreamloLeaderBoard::AddScoreWithPipe(System.String,System.Int32)
extern "C"  Object_t * dreamloLeaderBoard_AddScoreWithPipe_m3408643458 (dreamloLeaderBoard_t3691210423 * __this, String_t* ___playerName, int32_t ___totalScore, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator dreamloLeaderBoard::AddScoreWithPipe(System.String,System.Int32,System.Int32)
extern "C"  Object_t * dreamloLeaderBoard_AddScoreWithPipe_m1084218005 (dreamloLeaderBoard_t3691210423 * __this, String_t* ___playerName, int32_t ___totalScore, int32_t ___totalSeconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator dreamloLeaderBoard::AddScoreWithPipe(System.String,System.Int32,System.Int32,System.String)
extern "C"  Object_t * dreamloLeaderBoard_AddScoreWithPipe_m1946704401 (dreamloLeaderBoard_t3691210423 * __this, String_t* ___playerName, int32_t ___totalScore, int32_t ___totalSeconds, String_t* ___shortText, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator dreamloLeaderBoard::GetScores()
extern "C"  Object_t * dreamloLeaderBoard_GetScores_m2852637297 (dreamloLeaderBoard_t3691210423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator dreamloLeaderBoard::GetSingleScore(System.String)
extern "C"  Object_t * dreamloLeaderBoard_GetSingleScore_m2907890438 (dreamloLeaderBoard_t3691210423 * __this, String_t* ___playerName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void dreamloLeaderBoard::LoadScores()
extern "C"  void dreamloLeaderBoard_LoadScores_m2531599527 (dreamloLeaderBoard_t3691210423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] dreamloLeaderBoard::ToStringArray()
extern "C"  StringU5BU5D_t2956870243* dreamloLeaderBoard_ToStringArray_m3025445902 (dreamloLeaderBoard_t3691210423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<dreamloLeaderBoard/Score> dreamloLeaderBoard::ToListLowToHigh()
extern "C"  List_1_t876670827 * dreamloLeaderBoard_ToListLowToHigh_m1586710221 (dreamloLeaderBoard_t3691210423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<dreamloLeaderBoard/Score> dreamloLeaderBoard::ToListHighToLow()
extern "C"  List_1_t876670827 * dreamloLeaderBoard_ToListHighToLow_m3611842675 (dreamloLeaderBoard_t3691210423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// dreamloLeaderBoard/Score[] dreamloLeaderBoard::ToScoreArray()
extern "C"  ScoreU5BU5D_t3581624199* dreamloLeaderBoard_ToScoreArray_m1705206787 (dreamloLeaderBoard_t3691210423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String dreamloLeaderBoard::Clean(System.String)
extern "C"  String_t* dreamloLeaderBoard_Clean_m2058087194 (dreamloLeaderBoard_t3691210423 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 dreamloLeaderBoard::CheckInt(System.String)
extern "C"  int32_t dreamloLeaderBoard_CheckInt_m3946231309 (dreamloLeaderBoard_t3691210423 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 dreamloLeaderBoard::<ToListLowToHigh>m__C(dreamloLeaderBoard/Score,dreamloLeaderBoard/Score)
extern "C"  int32_t dreamloLeaderBoard_U3CToListLowToHighU3Em__C_m19202714 (Object_t * __this /* static, unused */, Score_t79711858  ___x, Score_t79711858  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 dreamloLeaderBoard::<ToListHighToLow>m__D(dreamloLeaderBoard/Score,dreamloLeaderBoard/Score)
extern "C"  int32_t dreamloLeaderBoard_U3CToListHighToLowU3Em__D_m1414215199 (Object_t * __this /* static, unused */, Score_t79711858  ___x, Score_t79711858  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
