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

// BitmapHelper/BitMapSkipper
struct BitMapSkipper_t453392143;
// IBitmap
struct IBitmap_t2353316568;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t27321461;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

// System.Void BitmapHelper/BitMapSkipper::.ctor(IBitmap,System.Collections.Generic.List`1<UnityEngine.Vector2>)
extern "C"  void BitMapSkipper__ctor_m2558871942 (BitMapSkipper_t453392143 * __this, Object_t * ___bitmap, List_1_t27321461 * ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BitmapHelper/BitMapSkipper::FromVectors(System.Collections.Generic.List`1<UnityEngine.Vector2>)
extern "C"  void BitMapSkipper_FromVectors_m2480589374 (BitMapSkipper_t453392143 * __this, List_1_t27321461 * ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BitmapHelper/BitMapSkipper::CreateScans()
extern "C"  void BitMapSkipper_CreateScans_m2283980598 (BitMapSkipper_t453392143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BitmapHelper/BitMapSkipper::FillScans(System.Collections.Generic.List`1<UnityEngine.Vector2>)
extern "C"  void BitMapSkipper_FillScans_m3687435083 (BitMapSkipper_t453392143 * __this, List_1_t27321461 * ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BitmapHelper/BitMapSkipper::FormatScans(IBitmap)
extern "C"  void BitMapSkipper_FormatScans_m1368341599 (BitMapSkipper_t453392143 * __this, Object_t * ___bitmap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BitmapHelper/BitMapSkipper::FormatScan(IBitmap,System.Int32)
extern "C"  void BitMapSkipper_FormatScan_m3884926583 (BitMapSkipper_t453392143 * __this, Object_t * ___bitmap, int32_t ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BitmapHelper/BitMapSkipper::TryGetSkip(UnityEngine.Vector2,System.Single&)
extern "C"  bool BitMapSkipper_TryGetSkip_m2745421921 (BitMapSkipper_t453392143 * __this, Vector2_t3525329788  ___point, float* ___nextY, const MethodInfo* method) IL2CPP_METHOD_ATTR;
