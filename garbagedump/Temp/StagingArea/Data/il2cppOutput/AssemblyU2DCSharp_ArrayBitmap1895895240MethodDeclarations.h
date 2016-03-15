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

// ArrayBitmap
struct ArrayBitmap_t1895895240;
// System.Boolean[,]
struct BooleanU5BU2CU5D_t3804927313;
// IBitmap
struct IBitmap_t2353316568;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Texture2D2509538522.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"

// System.Void ArrayBitmap::.ctor(System.Boolean[,])
extern "C"  void ArrayBitmap__ctor_m3513007372 (ArrayBitmap_t1895895240 * __this, BooleanU5BU2CU5D_t3804927313* ___bitmap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ArrayBitmap::get_Width()
extern "C"  int32_t ArrayBitmap_get_Width_m918416684 (ArrayBitmap_t1895895240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ArrayBitmap::get_Height()
extern "C"  int32_t ArrayBitmap_get_Height_m3204927779 (ArrayBitmap_t1895895240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ArrayBitmap::get_Item(System.Int32,System.Int32)
extern "C"  bool ArrayBitmap_get_Item_m2508656605 (ArrayBitmap_t1895895240 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IBitmap ArrayBitmap::CreateFromTexture(UnityEngine.Texture2D,UnityEngine.Rect)
extern "C"  Object_t * ArrayBitmap_CreateFromTexture_m3230564128 (Object_t * __this /* static, unused */, Texture2D_t2509538522 * ___texture, Rect_t1525428817  ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
