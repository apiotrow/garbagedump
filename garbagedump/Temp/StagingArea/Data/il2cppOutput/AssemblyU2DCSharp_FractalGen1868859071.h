#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t27321462;
// System.Collections.Generic.HashSet`1<UnityEngine.Vector3>
struct HashSet_1_t1929051164;
// System.Collections.Generic.Queue`1<System.String>
struct Queue_1_t2676576442;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// FractalGen
struct  FractalGen_t1868859071  : public MonoBehaviour_t3012272455
{
	// System.String FractalGen::direction
	String_t* ___direction_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> FractalGen::allTileVecs
	List_1_t27321462 * ___allTileVecs_3;
	// System.Int32 FractalGen::maxChunkSize
	int32_t ___maxChunkSize_4;
	// System.Int32 FractalGen::maxChunks
	int32_t ___maxChunks_5;
	// System.Boolean FractalGen::addingCollider
	bool ___addingCollider_6;
	// System.String FractalGen::constructionBit
	String_t* ___constructionBit_7;
	// System.Collections.Generic.HashSet`1<UnityEngine.Vector3> FractalGen::dontDupe
	HashSet_1_t1929051164 * ___dontDupe_8;
	// System.Single FractalGen::x
	float ___x_9;
	// System.Single FractalGen::y
	float ___y_10;
	// System.Single FractalGen::z
	float ___z_11;
	// System.Collections.Generic.Queue`1<System.String> FractalGen::toRenderChunkQueue
	Queue_1_t2676576442 * ___toRenderChunkQueue_12;
	// UnityEngine.Vector3 FractalGen::camGoTo
	Vector3_t3525329789  ___camGoTo_13;
	// UnityEngine.GameObject[] FractalGen::chunkPool
	GameObjectU5BU5D_t3499186955* ___chunkPool_14;
	// UnityEngine.GameObject[] FractalGen::tilePool
	GameObjectU5BU5D_t3499186955* ___tilePool_15;
	// System.Int32 FractalGen::chunkPoolIter
	int32_t ___chunkPoolIter_16;
	// System.Int32 FractalGen::tilePoolIter
	int32_t ___tilePoolIter_17;
	// System.Boolean FractalGen::rotIt
	bool ___rotIt_18;
	// UnityEngine.GameObject FractalGen::lazyRotationHelper
	GameObject_t4012695102 * ___lazyRotationHelper_19;
};
