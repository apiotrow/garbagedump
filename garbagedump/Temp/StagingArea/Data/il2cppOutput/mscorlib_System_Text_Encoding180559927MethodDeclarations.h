﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Text.Encoding
struct Encoding_t180559927;
// System.String
struct String_t;
// System.Text.DecoderFallback
struct DecoderFallback_t4033313258;
// System.Text.EncoderFallback
struct EncoderFallback_t990837442;
// System.Object
struct Object_t;
// System.Char[]
struct CharU5BU5D_t3416858730;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Text.Decoder
struct Decoder_t1611780840;
// System.Object[]
struct ObjectU5BU5D_t11523773;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Text_DecoderFallback4033313258.h"
#include "mscorlib_System_Text_EncoderFallback990837442.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Text.Encoding::.ctor()
extern "C"  void Encoding__ctor_m1037401021 (Encoding_t180559927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::.ctor(System.Int32)
extern "C"  void Encoding__ctor_m1203666318 (Encoding_t180559927 * __this, int32_t ___codePage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::.cctor()
extern "C"  void Encoding__cctor_m1612564368 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::_(System.String)
extern "C"  String_t* Encoding___m2147510347 (Object_t * __this /* static, unused */, String_t* ___arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.Encoding::get_IsReadOnly()
extern "C"  bool Encoding_get_IsReadOnly_m1827016926 (Encoding_t180559927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallback System.Text.Encoding::get_DecoderFallback()
extern "C"  DecoderFallback_t4033313258 * Encoding_get_DecoderFallback_m3409202121 (Encoding_t180559927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::set_DecoderFallback(System.Text.DecoderFallback)
extern "C"  void Encoding_set_DecoderFallback_m3527983786 (Encoding_t180559927 * __this, DecoderFallback_t4033313258 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.EncoderFallback System.Text.Encoding::get_EncoderFallback()
extern "C"  EncoderFallback_t990837442 * Encoding_get_EncoderFallback_m252351353 (Encoding_t180559927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::SetFallbackInternal(System.Text.EncoderFallback,System.Text.DecoderFallback)
extern "C"  void Encoding_SetFallbackInternal_m1712004450 (Encoding_t180559927 * __this, EncoderFallback_t990837442 * ___e, DecoderFallback_t4033313258 * ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.Encoding::Equals(System.Object)
extern "C"  bool Encoding_Equals_m3267361452 (Encoding_t180559927 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetByteCount(System.String)
extern "C"  int32_t Encoding_GetByteCount_m3861962638 (Encoding_t180559927 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetByteCount(System.Char[])
extern "C"  int32_t Encoding_GetByteCount_m2187805511 (Encoding_t180559927 * __this, CharU5BU5D_t3416858730* ___chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t Encoding_GetBytes_m2409970698 (Encoding_t180559927 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t58506160* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.Encoding::GetBytes(System.String)
extern "C"  ByteU5BU5D_t58506160* Encoding_GetBytes_m2632143804 (Encoding_t180559927 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.Encoding::GetBytes(System.Char[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t58506160* Encoding_GetBytes_m2769384597 (Encoding_t180559927 * __this, CharU5BU5D_t3416858730* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.Encoding::GetBytes(System.Char[])
extern "C"  ByteU5BU5D_t58506160* Encoding_GetBytes_m957986677 (Encoding_t180559927 * __this, CharU5BU5D_t3416858730* ___chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32)
extern "C"  CharU5BU5D_t3416858730* Encoding_GetChars_m468469183 (Encoding_t180559927 * __this, ByteU5BU5D_t58506160* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.Encoding::GetDecoder()
extern "C"  Decoder_t1611780840 * Encoding_GetDecoder_m3680646086 (Encoding_t180559927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.Encoding::InvokeI18N(System.String,System.Object[])
extern "C"  Object_t * Encoding_InvokeI18N_m2813164284 (Object_t * __this /* static, unused */, String_t* ___name, ObjectU5BU5D_t11523773* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::GetEncoding(System.Int32)
extern "C"  Encoding_t180559927 * Encoding_GetEncoding_m2886882079 (Object_t * __this /* static, unused */, int32_t ___codepage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.Encoding::Clone()
extern "C"  Object_t * Encoding_Clone_m4157729955 (Encoding_t180559927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::GetEncoding(System.String)
extern "C"  Encoding_t180559927 * Encoding_GetEncoding_m4050696948 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetHashCode()
extern "C"  int32_t Encoding_GetHashCode_m2437082384 (Encoding_t180559927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.Encoding::GetPreamble()
extern "C"  ByteU5BU5D_t58506160* Encoding_GetPreamble_m1160659539 (Encoding_t180559927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* Encoding_GetString_m565750122 (Encoding_t180559927 * __this, ByteU5BU5D_t58506160* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::GetString(System.Byte[])
extern "C"  String_t* Encoding_GetString_m3808087178 (Encoding_t180559927 * __this, ByteU5BU5D_t58506160* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::get_HeaderName()
extern "C"  String_t* Encoding_get_HeaderName_m1171313419 (Encoding_t180559927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::get_WebName()
extern "C"  String_t* Encoding_get_WebName_m4104579374 (Encoding_t180559927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_ASCII()
extern "C"  Encoding_t180559927 * Encoding_get_ASCII_m1425378925 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_BigEndianUnicode()
extern "C"  Encoding_t180559927 * Encoding_get_BigEndianUnicode_m1578127592 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::InternalCodePage(System.Int32&)
extern "C"  String_t* Encoding_InternalCodePage_m1810234872 (Object_t * __this /* static, unused */, int32_t* ___code_page, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_Default()
extern "C"  Encoding_t180559927 * Encoding_get_Default_m1600689821 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_ISOLatin1()
extern "C"  Encoding_t180559927 * Encoding_get_ISOLatin1_m4135279598 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF7()
extern "C"  Encoding_t180559927 * Encoding_get_UTF7_m619557558 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C"  Encoding_t180559927 * Encoding_get_UTF8_m619558519 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8Unmarked()
extern "C"  Encoding_t180559927 * Encoding_get_UTF8Unmarked_m1891261276 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8UnmarkedUnsafe()
extern "C"  Encoding_t180559927 * Encoding_get_UTF8UnmarkedUnsafe_m2775471970 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_Unicode()
extern "C"  Encoding_t180559927 * Encoding_get_Unicode_m2158134329 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF32()
extern "C"  Encoding_t180559927 * Encoding_get_UTF32_m2026305570 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_BigEndianUTF32()
extern "C"  Encoding_t180559927 * Encoding_get_BigEndianUTF32_m3679331473 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetByteCount(System.Char*,System.Int32)
extern "C"  int32_t Encoding_GetByteCount_m957110328 (Encoding_t180559927 * __this, uint16_t* ___chars, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C"  int32_t Encoding_GetBytes_m1804873512 (Encoding_t180559927 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
