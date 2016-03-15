#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture
struct Texture_t1769722184;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;
// UnityEngine.Mesh
struct Mesh_t1525280346;
// System.Func`2<UnityEngine.Vector3,UnityEngine.Vector2>
struct Func_2_t3745087347;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// SkinMaker
struct  SkinMaker_t4024166567  : public MonoBehaviour_t3012272455
{
	// System.Boolean SkinMaker::edit
	bool ___edit_2;
	// UnityEngine.Texture SkinMaker::image
	Texture_t1769722184 * ___image_3;
	// UnityEngine.Vector3[] SkinMaker::controlPoints
	Vector3U5BU5D_t3227571696* ___controlPoints_4;
	// UnityEngine.Mesh SkinMaker::mesh
	Mesh_t1525280346 * ___mesh_5;
	// UnityEngine.Mesh SkinMaker::controlMesh
	Mesh_t1525280346 * ___controlMesh_6;
};
struct SkinMaker_t4024166567_StaticFields{
	// System.Func`2<UnityEngine.Vector3,UnityEngine.Vector2> SkinMaker::<>f__am$cache5
	Func_2_t3745087347 * ___U3CU3Ef__amU24cache5_7;
};
