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

// Luz.ULib.Net.ByteArrayBuffer
struct ByteArrayBuffer_t4128932069;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"

// System.Void Luz.ULib.Net.ByteArrayBuffer::.ctor(System.Int32)
extern "C"  void ByteArrayBuffer__ctor_m1307746093 (ByteArrayBuffer_t4128932069 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Luz.ULib.Net.ByteArrayBuffer::.ctor(System.Byte[])
extern "C"  void ByteArrayBuffer__ctor_m284316013 (ByteArrayBuffer_t4128932069 * __this, ByteU5BU5D_t58506160* ___arr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Luz.ULib.Net.ByteArrayBuffer::.cctor()
extern "C"  void ByteArrayBuffer__cctor_m2454614865 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Luz.ULib.Net.ByteArrayBuffer::get_Buffer()
extern "C"  ByteU5BU5D_t58506160* ByteArrayBuffer_get_Buffer_m3726594587 (ByteArrayBuffer_t4128932069 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Luz.ULib.Net.ByteArrayBuffer::get_ContentLength()
extern "C"  int32_t ByteArrayBuffer_get_ContentLength_m187289922 (ByteArrayBuffer_t4128932069 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Luz.ULib.Net.ByteArrayBuffer::get_IsDisposed()
extern "C"  bool ByteArrayBuffer_get_IsDisposed_m467417300 (ByteArrayBuffer_t4128932069 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Luz.ULib.Net.ByteArrayBuffer::Reset()
extern "C"  void ByteArrayBuffer_Reset_m2728869513 (ByteArrayBuffer_t4128932069 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Luz.ULib.Net.ByteArrayBuffer::Finalize()
extern "C"  void ByteArrayBuffer_Finalize_m488337158 (ByteArrayBuffer_t4128932069 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Luz.ULib.Net.ByteArrayBuffer::CopyFrom(System.Byte[],System.Int32,System.Int32)
extern "C"  void ByteArrayBuffer_CopyFrom_m4257472162 (ByteArrayBuffer_t4128932069 * __this, ByteU5BU5D_t58506160* ___arr, int32_t ___srcOffset, int32_t ___len, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Luz.ULib.Net.ByteArrayBuffer::GetPower(System.UInt32)
extern "C"  int32_t ByteArrayBuffer_GetPower_m4237290261 (Object_t * __this /* static, unused */, uint32_t ___anyPowerOfTwo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Luz.ULib.Net.ByteArrayBuffer::NextPowerOfTwo(System.UInt32)
extern "C"  uint32_t ByteArrayBuffer_NextPowerOfTwo_m3733078836 (Object_t * __this /* static, unused */, uint32_t ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Luz.ULib.Net.ByteArrayBuffer Luz.ULib.Net.ByteArrayBuffer::Get(System.Int32)
extern "C"  ByteArrayBuffer_t4128932069 * ByteArrayBuffer_Get_m1999004707 (Object_t * __this /* static, unused */, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Luz.ULib.Net.ByteArrayBuffer::Dispose()
extern "C"  void ByteArrayBuffer_Dispose_m742013209 (ByteArrayBuffer_t4128932069 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
