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

// FractalGen
struct FractalGen_t1868859071;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2606186806;
// System.String
struct String_t;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t27321462;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct List_1_t824280431;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"

// System.Void FractalGen::.ctor()
extern "C"  void FractalGen__ctor_m4041816252 (FractalGen_t1868859071 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 FractalGen::rodate(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3525329789  FractalGen_rodate_m1580763217 (FractalGen_t1868859071 * __this, Vector3_t3525329789  ___v, float ___degrees, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FractalGen::Update()
extern "C"  void FractalGen_Update_m2469114321 (FractalGen_t1868859071 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FractalGen::Start()
extern "C"  void FractalGen_Start_m2988954044 (FractalGen_t1868859071 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator FractalGen::generateLStringDeterministic(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Int32,System.String)
extern "C"  Object_t * FractalGen_generateLStringDeterministic_m32063880 (FractalGen_t1868859071 * __this, Dictionary_2_t2606186806 * ___rules, int32_t ___iterations, String_t* ___initString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator FractalGen::chunkFactory()
extern "C"  Object_t * FractalGen_chunkFactory_m2568281293 (FractalGen_t1868859071 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FractalGen::makeChunk(System.String)
extern "C"  void FractalGen_makeChunk_m2541191369 (FractalGen_t1868859071 * __this, String_t* ___LString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector3> FractalGen::createTilePositions(System.String)
extern "C"  List_1_t27321462 * FractalGen_createTilePositions_m2113298370 (FractalGen_t1868859071 * __this, String_t* ___LString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector3>> FractalGen::divideTilePositionsIntoChunks(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C"  List_1_t824280431 * FractalGen_divideTilePositionsIntoChunks_m1860668458 (FractalGen_t1868859071 * __this, List_1_t27321462 * ___finals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject FractalGen::createTiles(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C"  GameObject_t4012695102 * FractalGen_createTiles_m4286916107 (FractalGen_t1868859071 * __this, List_1_t27321462 * ___chunkVecs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FractalGen::combineTileMeshes(UnityEngine.GameObject)
extern "C"  void FractalGen_combineTileMeshes_m3109711546 (FractalGen_t1868859071 * __this, GameObject_t4012695102 * ___newChunk, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FractalGen::createNewCamPos(UnityEngine.Vector3)
extern "C"  void FractalGen_createNewCamPos_m3288860246 (FractalGen_t1868859071 * __this, Vector3_t3525329789  ___lookAt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator FractalGen::cameraFollow()
extern "C"  Object_t * FractalGen_cameraFollow_m1666884582 (FractalGen_t1868859071 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
