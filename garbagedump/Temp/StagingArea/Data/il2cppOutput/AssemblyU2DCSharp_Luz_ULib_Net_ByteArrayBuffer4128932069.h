#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Collections.Generic.List`1<Luz.ULib.Net.ByteArrayBuffer>[]
struct List_1U5BU5D_t2985325803;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "mscorlib_System_Object837106420.h"

// Luz.ULib.Net.ByteArrayBuffer
struct  ByteArrayBuffer_t4128932069  : public Object_t
{
	// System.Byte[] Luz.ULib.Net.ByteArrayBuffer::array
	ByteU5BU5D_t58506160* ___array_0;
	// System.Int32 Luz.ULib.Net.ByteArrayBuffer::positionWrite
	int32_t ___positionWrite_1;
	// System.Int32 Luz.ULib.Net.ByteArrayBuffer::positionRead
	int32_t ___positionRead_2;
	// System.Boolean Luz.ULib.Net.ByteArrayBuffer::mFromPool
	bool ___mFromPool_3;
	// System.Boolean Luz.ULib.Net.ByteArrayBuffer::mDisposed
	bool ___mDisposed_4;
};
struct ByteArrayBuffer_t4128932069_StaticFields{
	// System.Collections.Generic.List`1<Luz.ULib.Net.ByteArrayBuffer>[] Luz.ULib.Net.ByteArrayBuffer::sPool
	List_1U5BU5D_t2985325803* ___sPool_5;
	// System.Int32[] Luz.ULib.Net.ByteArrayBuffer::MultiplyDeBruijnBitPosition
	Int32U5BU5D_t1809983122* ___MultiplyDeBruijnBitPosition_6;
};
