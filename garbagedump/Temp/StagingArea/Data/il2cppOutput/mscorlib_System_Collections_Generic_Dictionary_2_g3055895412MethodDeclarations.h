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

// System.Collections.Generic.Dictionary`2<System.Char,System.Single>
struct Dictionary_2_t3055895412;
// System.Collections.Generic.IEqualityComparer`1<System.Char>
struct IEqualityComparer_1_t808006054;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Char,System.Single>[]
struct KeyValuePair_2U5BU5D_t2675313939;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Char,System.Single>>
struct IEnumerator_1_t4027533158;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1541724277;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Char,System.Single>
struct ValueCollection_t683065210;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22544426710.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E2822923353.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Single>::.ctor()
extern "C"  void Dictionary_2__ctor_m158575752_gshared (Dictionary_2_t3055895412 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m158575752(__this, method) ((  void (*) (Dictionary_2_t3055895412 *, const MethodInfo*))Dictionary_2__ctor_m158575752_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Single>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m3314912854_gshared (Dictionary_2_t3055895412 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m3314912854(__this, ___comparer, method) ((  void (*) (Dictionary_2_t3055895412 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m3314912854_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Single>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m2585049136_gshared (Dictionary_2_t3055895412 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m2585049136(__this, ___capacity, method) ((  void (*) (Dictionary_2_t3055895412 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m2585049136_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Single>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m1072475680_gshared (Dictionary_2_t3055895412 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1072475680(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t3055895412 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2__ctor_m1072475680_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Char,System.Single>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1036141705_gshared (Dictionary_2_t3055895412 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1036141705(__this, ___key, method) ((  Object_t * (*) (Dictionary_2_t3055895412 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1036141705_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Single>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m2117913646_gshared (Dictionary_2_t3055895412 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m2117913646(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t3055895412 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m2117913646_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Single>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m1128926563_gshared (Dictionary_2_t3055895412 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1128926563(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t3055895412 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1128926563_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Char,System.Single>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m3857082547_gshared (Dictionary_2_t3055895412 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m3857082547(__this, ___key, method) ((  bool (*) (Dictionary_2_t3055895412 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m3857082547_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Single>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m1463378540_gshared (Dictionary_2_t3055895412 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1463378540(__this, ___key, method) ((  void (*) (Dictionary_2_t3055895412 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1463378540_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Char,System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m3688119169_gshared (Dictionary_2_t3055895412 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m3688119169(__this, method) ((  bool (*) (Dictionary_2_t3055895412 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m3688119169_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Char,System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1388729581_gshared (Dictionary_2_t3055895412 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1388729581(__this, method) ((  Object_t * (*) (Dictionary_2_t3055895412 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1388729581_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Char,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3280248965_gshared (Dictionary_2_t3055895412 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3280248965(__this, method) ((  bool (*) (Dictionary_2_t3055895412 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3280248965_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3195005186_gshared (Dictionary_2_t3055895412 * __this, KeyValuePair_2_t2544426710  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3195005186(__this, ___keyValuePair, method) ((  void (*) (Dictionary_2_t3055895412 *, KeyValuePair_2_t2544426710 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3195005186_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Char,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2984026880_gshared (Dictionary_2_t3055895412 * __this, KeyValuePair_2_t2544426710  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2984026880(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t3055895412 *, KeyValuePair_2_t2544426710 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2984026880_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m471424102_gshared (Dictionary_2_t3055895412 * __this, KeyValuePair_2U5BU5D_t2675313939* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m471424102(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t3055895412 *, KeyValuePair_2U5BU5D_t2675313939*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m471424102_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Char,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2855766565_gshared (Dictionary_2_t3055895412 * __this, KeyValuePair_2_t2544426710  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2855766565(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t3055895412 *, KeyValuePair_2_t2544426710 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2855766565_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m1432729797_gshared (Dictionary_2_t3055895412 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1432729797(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t3055895412 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1432729797_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Char,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m719678336_gshared (Dictionary_2_t3055895412 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m719678336(__this, method) ((  Object_t * (*) (Dictionary_2_t3055895412 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m719678336_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Char,System.Single>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2785438013_gshared (Dictionary_2_t3055895412 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2785438013(__this, method) ((  Object_t* (*) (Dictionary_2_t3055895412 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2785438013_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Char,System.Single>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1955854744_gshared (Dictionary_2_t3055895412 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1955854744(__this, method) ((  Object_t * (*) (Dictionary_2_t3055895412 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1955854744_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Char,System.Single>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m838083143_gshared (Dictionary_2_t3055895412 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m838083143(__this, method) ((  int32_t (*) (Dictionary_2_t3055895412 *, const MethodInfo*))Dictionary_2_get_Count_m838083143_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Char,System.Single>::get_Item(TKey)
extern "C"  float Dictionary_2_get_Item_m304072004_gshared (Dictionary_2_t3055895412 * __this, uint16_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m304072004(__this, ___key, method) ((  float (*) (Dictionary_2_t3055895412 *, uint16_t, const MethodInfo*))Dictionary_2_get_Item_m304072004_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Single>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m2646998239_gshared (Dictionary_2_t3055895412 * __this, uint16_t ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m2646998239(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t3055895412 *, uint16_t, float, const MethodInfo*))Dictionary_2_set_Item_m2646998239_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Single>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m2109700311_gshared (Dictionary_2_t3055895412 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m2109700311(__this, ___capacity, ___hcp, method) ((  void (*) (Dictionary_2_t3055895412 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m2109700311_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Single>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m93129664_gshared (Dictionary_2_t3055895412 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m93129664(__this, ___size, method) ((  void (*) (Dictionary_2_t3055895412 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m93129664_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Single>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m1752192956_gshared (Dictionary_2_t3055895412 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1752192956(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t3055895412 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1752192956_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Char,System.Single>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t2544426710  Dictionary_2_make_pair_m3123631624_gshared (Object_t * __this /* static, unused */, uint16_t ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m3123631624(__this /* static, unused */, ___key, ___value, method) ((  KeyValuePair_2_t2544426710  (*) (Object_t * /* static, unused */, uint16_t, float, const MethodInfo*))Dictionary_2_make_pair_m3123631624_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Char,System.Single>::pick_value(TKey,TValue)
extern "C"  float Dictionary_2_pick_value_m1613090734_gshared (Object_t * __this /* static, unused */, uint16_t ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1613090734(__this /* static, unused */, ___key, ___value, method) ((  float (*) (Object_t * /* static, unused */, uint16_t, float, const MethodInfo*))Dictionary_2_pick_value_m1613090734_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m440565907_gshared (Dictionary_2_t3055895412 * __this, KeyValuePair_2U5BU5D_t2675313939* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m440565907(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t3055895412 *, KeyValuePair_2U5BU5D_t2675313939*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m440565907_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Single>::Resize()
extern "C"  void Dictionary_2_Resize_m1733294777_gshared (Dictionary_2_t3055895412 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1733294777(__this, method) ((  void (*) (Dictionary_2_t3055895412 *, const MethodInfo*))Dictionary_2_Resize_m1733294777_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Single>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m2553230902_gshared (Dictionary_2_t3055895412 * __this, uint16_t ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_Add_m2553230902(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t3055895412 *, uint16_t, float, const MethodInfo*))Dictionary_2_Add_m2553230902_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Single>::Clear()
extern "C"  void Dictionary_2_Clear_m2586432906_gshared (Dictionary_2_t3055895412 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m2586432906(__this, method) ((  void (*) (Dictionary_2_t3055895412 *, const MethodInfo*))Dictionary_2_Clear_m2586432906_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Char,System.Single>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m283753840_gshared (Dictionary_2_t3055895412 * __this, uint16_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m283753840(__this, ___key, method) ((  bool (*) (Dictionary_2_t3055895412 *, uint16_t, const MethodInfo*))Dictionary_2_ContainsKey_m283753840_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Char,System.Single>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m3595098480_gshared (Dictionary_2_t3055895412 * __this, float ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m3595098480(__this, ___value, method) ((  bool (*) (Dictionary_2_t3055895412 *, float, const MethodInfo*))Dictionary_2_ContainsValue_m3595098480_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Single>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m539874685_gshared (Dictionary_2_t3055895412 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m539874685(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t3055895412 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2_GetObjectData_m539874685_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Single>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m3349332231_gshared (Dictionary_2_t3055895412 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m3349332231(__this, ___sender, method) ((  void (*) (Dictionary_2_t3055895412 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m3349332231_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Char,System.Single>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m1909577088_gshared (Dictionary_2_t3055895412 * __this, uint16_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1909577088(__this, ___key, method) ((  bool (*) (Dictionary_2_t3055895412 *, uint16_t, const MethodInfo*))Dictionary_2_Remove_m1909577088_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Char,System.Single>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m2337908169_gshared (Dictionary_2_t3055895412 * __this, uint16_t ___key, float* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m2337908169(__this, ___key, ___value, method) ((  bool (*) (Dictionary_2_t3055895412 *, uint16_t, float*, const MethodInfo*))Dictionary_2_TryGetValue_m2337908169_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Char,System.Single>::get_Values()
extern "C"  ValueCollection_t683065210 * Dictionary_2_get_Values_m1379767254_gshared (Dictionary_2_t3055895412 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1379767254(__this, method) ((  ValueCollection_t683065210 * (*) (Dictionary_2_t3055895412 *, const MethodInfo*))Dictionary_2_get_Values_m1379767254_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Char,System.Single>::ToTKey(System.Object)
extern "C"  uint16_t Dictionary_2_ToTKey_m864552777_gshared (Dictionary_2_t3055895412 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m864552777(__this, ___key, method) ((  uint16_t (*) (Dictionary_2_t3055895412 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m864552777_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Char,System.Single>::ToTValue(System.Object)
extern "C"  float Dictionary_2_ToTValue_m4220372169_gshared (Dictionary_2_t3055895412 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m4220372169(__this, ___value, method) ((  float (*) (Dictionary_2_t3055895412 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m4220372169_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Char,System.Single>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m3666281315_gshared (Dictionary_2_t3055895412 * __this, KeyValuePair_2_t2544426710  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m3666281315(__this, ___pair, method) ((  bool (*) (Dictionary_2_t3055895412 *, KeyValuePair_2_t2544426710 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m3666281315_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Char,System.Single>::GetEnumerator()
extern "C"  Enumerator_t2822923354  Dictionary_2_GetEnumerator_m1942243748_gshared (Dictionary_2_t3055895412 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1942243748(__this, method) ((  Enumerator_t2822923354  (*) (Dictionary_2_t3055895412 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1942243748_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Char,System.Single>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t130027246  Dictionary_2_U3CCopyToU3Em__0_m4240842739_gshared (Object_t * __this /* static, unused */, uint16_t ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m4240842739(__this /* static, unused */, ___key, ___value, method) ((  DictionaryEntry_t130027246  (*) (Object_t * /* static, unused */, uint16_t, float, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m4240842739_gshared)(__this /* static, unused */, ___key, ___value, method)
