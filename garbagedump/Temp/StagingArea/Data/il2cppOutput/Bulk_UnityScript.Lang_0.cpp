#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// UnityScript.Lang.Array
struct Array_t1209885965;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Array
struct Array_t;
// System.String
struct String_t;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "UnityScript_Lang_U3CModuleU3E86524790.h"
#include "UnityScript_Lang_U3CModuleU3E86524790MethodDeclarations.h"
#include "UnityScript_Lang_UnityScript_Lang_Array1209885965.h"
#include "UnityScript_Lang_UnityScript_Lang_Array1209885965MethodDeclarations.h"
#include "mscorlib_System_Void2779279689.h"
#include "mscorlib_System_Collections_CollectionBase851261505MethodDeclarations.h"
#include "mscorlib_System_Int322847414787.h"
#include "mscorlib_System_Collections_CollectionBase851261505.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Type2779229935MethodDeclarations.h"
#include "mscorlib_System_Boolean211005341.h"
#include "mscorlib_System_Collections_ArrayList2121638921.h"
#include "mscorlib_System_Collections_ArrayList2121638921MethodDeclarations.h"
#include "mscorlib_System_String968488902.h"
#include "Boo_Lang_Boo_Lang_Builtins4233200974MethodDeclarations.h"
#include "UnityScript_Lang_UnityScript_Lang_Extensions1330391816.h"
#include "UnityScript_Lang_UnityScript_Lang_Extensions1330391816MethodDeclarations.h"
#include "mscorlib_System_Array2840145358MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityScript.Lang.Array::.ctor()
extern "C"  void Array__ctor_m2243385516 (Array_t1209885965 * __this, const MethodInfo* method)
{
	{
		CollectionBase__ctor_m3181013581(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityScript.Lang.Array::get_length()
extern "C"  int32_t Array_get_length_m1103403365 (Array_t1209885965 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Collections.CollectionBase::get_Count() */, __this);
		return L_0;
	}
}
// System.Object UnityScript.Lang.Array::Coerce(System.Type)
extern "C"  Object_t * Array_Coerce_m1091438833 (Array_t1209885965 * __this, Type_t * ___toType, const MethodInfo* method)
{
	Array_t * G_B3_0 = {0};
	{
		Type_t * L_0 = ___toType;
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Type::get_IsArray() */, L_0);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Type_t * L_2 = ___toType;
		Type_t * L_3 = VirtFuncInvoker0< Type_t * >::Invoke(42 /* System.Type System.Type::GetElementType() */, L_2);
		Array_t * L_4 = Array_ToBuiltin_m1955277466(__this, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = ((Array_t *)(__this));
	}

IL_001d:
	{
		return G_B3_0;
	}
}
// System.Array UnityScript.Lang.Array::ToBuiltin(System.Type)
extern "C"  Array_t * Array_ToBuiltin_m1955277466 (Array_t1209885965 * __this, Type_t * ___type, const MethodInfo* method)
{
	{
		ArrayList_t2121638921 * L_0 = CollectionBase_get_InnerList_m2840879970(__this, /*hidden argument*/NULL);
		Type_t * L_1 = ___type;
		Array_t * L_2 = VirtFuncInvoker1< Array_t *, Type_t * >::Invoke(48 /* System.Array System.Collections.ArrayList::ToArray(System.Type) */, L_0, L_1);
		return L_2;
	}
}
// System.Void UnityScript.Lang.Array::Add(System.Object)
extern "C"  void Array_Add_m2887112457 (Array_t1209885965 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		ArrayList_t2121638921 * L_0 = CollectionBase_get_InnerList_m2840879970(__this, /*hidden argument*/NULL);
		Object_t * L_1 = ___value;
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_0, L_1);
		return;
	}
}
// System.String UnityScript.Lang.Array::ToString()
extern Il2CppCodeGenString* _stringLiteral44;
extern const uint32_t Array_ToString_m1683853927_MetadataUsageId;
extern "C"  String_t* Array_ToString_m1683853927 (Array_t1209885965 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Array_ToString_m1683853927_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Array_Join_m1779851389(__this, _stringLiteral44, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String UnityScript.Lang.Array::Join(System.String)
extern "C"  String_t* Array_Join_m1779851389 (Array_t1209885965 * __this, String_t* ___seperator, const MethodInfo* method)
{
	{
		ArrayList_t2121638921 * L_0 = CollectionBase_get_InnerList_m2840879970(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___seperator;
		String_t* L_2 = Builtins_join_m2635169011(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object UnityScript.Lang.Array::get_Item(System.Int32)
extern "C"  Object_t * Array_get_Item_m3470539834 (Array_t1209885965 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		ArrayList_t2121638921 * L_0 = CollectionBase_get_InnerList_m2840879970(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___index;
		Object_t * L_2 = VirtFuncInvoker1< Object_t *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		return L_2;
	}
}
// System.Void UnityScript.Lang.Array::OnValidate(System.Object)
extern "C"  void Array_OnValidate_m3275003399 (Array_t1209885965 * __this, Object_t * ___newValue, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Int32 UnityScript.Lang.Extensions::get_length(System.Array)
extern "C"  int32_t Extensions_get_length_m1049594766 (Object_t * __this /* static, unused */, Array_t * ___a, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___a;
		int32_t L_1 = Array_get_Length_m1203127607(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
