#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>
struct Dictionary_2_t2124876172;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t1634065389;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t3709260776;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2320212868;
// System.Object
struct Object_t;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t4146091719;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t876714142;
// System.Linq.IGrouping`2<System.Int32,System.Object>
struct IGrouping_2_t3717851189;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E1891904113.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21613407470.h"

// System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator5`2<System.Object,System.Int32>
struct  U3CCreateGroupByIteratorU3Ec__Iterator5_2_t1990639006  : public Object_t
{
	// System.Collections.Generic.Dictionary`2<TKey,System.Collections.Generic.List`1<TSource>> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator5`2::<groups>__0
	Dictionary_2_t2124876172 * ___U3CgroupsU3E__0_0;
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator5`2::<nullList>__1
	List_1_t1634065389 * ___U3CnullListU3E__1_1;
	// System.Int32 System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator5`2::<counter>__2
	int32_t ___U3CcounterU3E__2_2;
	// System.Int32 System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator5`2::<nullCounter>__3
	int32_t ___U3CnullCounterU3E__3_3;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator5`2::source
	Object_t* ___source_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator5`2::<$s_52>__4
	Object_t* ___U3CU24s_52U3E__4_5;
	// TSource System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator5`2::<element>__5
	Object_t * ___U3CelementU3E__5_6;
	// System.Func`2<TSource,TKey> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator5`2::keySelector
	Func_2_t4146091719 * ___keySelector_7;
	// TKey System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator5`2::<key>__6
	int32_t ___U3CkeyU3E__6_8;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator5`2::comparer
	Object_t* ___comparer_9;
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator5`2::<group>__7
	List_1_t1634065389 * ___U3CgroupU3E__7_10;
	// System.Collections.Generic.Dictionary`2/Enumerator<TKey,System.Collections.Generic.List`1<TSource>> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator5`2::<$s_53>__8
	Enumerator_t1891904113  ___U3CU24s_53U3E__8_11;
	// System.Collections.Generic.KeyValuePair`2<TKey,System.Collections.Generic.List`1<TSource>> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator5`2::<group>__9
	KeyValuePair_2_t1613407470  ___U3CgroupU3E__9_12;
	// System.Int32 System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator5`2::$PC
	int32_t ___U24PC_13;
	// System.Linq.IGrouping`2<TKey,TSource> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator5`2::$current
	Object_t* ___U24current_14;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator5`2::<$>source
	Object_t* ___U3CU24U3Esource_15;
	// System.Func`2<TSource,TKey> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator5`2::<$>keySelector
	Func_2_t4146091719 * ___U3CU24U3EkeySelector_16;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Linq.Enumerable/<CreateGroupByIterator>c__Iterator5`2::<$>comparer
	Object_t* ___U3CU24U3Ecomparer_17;
};
