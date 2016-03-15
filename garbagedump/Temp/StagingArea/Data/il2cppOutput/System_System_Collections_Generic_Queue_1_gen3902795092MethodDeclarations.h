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

// System.Collections.Generic.Queue`1<Luz.ULib.Net.NetworkEvent>
struct Queue_1_t3902795092;
// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<Luz.ULib.Net.NetworkEvent>
struct IEnumerator_1_t3677814000;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// Luz.ULib.Net.NetworkEvent[]
struct NetworkEventU5BU5D_t1276358177;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharp_Luz_ULib_Net_NetworkEvent2194707552.h"
#include "System_System_Collections_Generic_Queue_1_Enumerat1077449513.h"

// System.Void System.Collections.Generic.Queue`1<Luz.ULib.Net.NetworkEvent>::.ctor()
extern "C"  void Queue_1__ctor_m3288255458_gshared (Queue_1_t3902795092 * __this, const MethodInfo* method);
#define Queue_1__ctor_m3288255458(__this, method) ((  void (*) (Queue_1_t3902795092 *, const MethodInfo*))Queue_1__ctor_m3288255458_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<Luz.ULib.Net.NetworkEvent>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Queue_1_System_Collections_ICollection_CopyTo_m2341413091_gshared (Queue_1_t3902795092 * __this, Array_t * ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m2341413091(__this, ___array, ___idx, method) ((  void (*) (Queue_1_t3902795092 *, Array_t *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m2341413091_gshared)(__this, ___array, ___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<Luz.ULib.Net.NetworkEvent>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m81931003_gshared (Queue_1_t3902795092 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m81931003(__this, method) ((  bool (*) (Queue_1_t3902795092 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m81931003_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<Luz.ULib.Net.NetworkEvent>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * Queue_1_System_Collections_ICollection_get_SyncRoot_m2527362265_gshared (Queue_1_t3902795092 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m2527362265(__this, method) ((  Object_t * (*) (Queue_1_t3902795092 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m2527362265_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<Luz.ULib.Net.NetworkEvent>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C"  Object_t* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3292608075_gshared (Queue_1_t3902795092 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3292608075(__this, method) ((  Object_t* (*) (Queue_1_t3902795092 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3292608075_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<Luz.ULib.Net.NetworkEvent>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * Queue_1_System_Collections_IEnumerable_GetEnumerator_m1545246238_gshared (Queue_1_t3902795092 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m1545246238(__this, method) ((  Object_t * (*) (Queue_1_t3902795092 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m1545246238_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<Luz.ULib.Net.NetworkEvent>::CopyTo(T[],System.Int32)
extern "C"  void Queue_1_CopyTo_m2662380878_gshared (Queue_1_t3902795092 * __this, NetworkEventU5BU5D_t1276358177* ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_CopyTo_m2662380878(__this, ___array, ___idx, method) ((  void (*) (Queue_1_t3902795092 *, NetworkEventU5BU5D_t1276358177*, int32_t, const MethodInfo*))Queue_1_CopyTo_m2662380878_gshared)(__this, ___array, ___idx, method)
// T System.Collections.Generic.Queue`1<Luz.ULib.Net.NetworkEvent>::Dequeue()
extern "C"  NetworkEvent_t2194707552  Queue_1_Dequeue_m768822942_gshared (Queue_1_t3902795092 * __this, const MethodInfo* method);
#define Queue_1_Dequeue_m768822942(__this, method) ((  NetworkEvent_t2194707552  (*) (Queue_1_t3902795092 *, const MethodInfo*))Queue_1_Dequeue_m768822942_gshared)(__this, method)
// T System.Collections.Generic.Queue`1<Luz.ULib.Net.NetworkEvent>::Peek()
extern "C"  NetworkEvent_t2194707552  Queue_1_Peek_m2798214495_gshared (Queue_1_t3902795092 * __this, const MethodInfo* method);
#define Queue_1_Peek_m2798214495(__this, method) ((  NetworkEvent_t2194707552  (*) (Queue_1_t3902795092 *, const MethodInfo*))Queue_1_Peek_m2798214495_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<Luz.ULib.Net.NetworkEvent>::Enqueue(T)
extern "C"  void Queue_1_Enqueue_m928255801_gshared (Queue_1_t3902795092 * __this, NetworkEvent_t2194707552  ___item, const MethodInfo* method);
#define Queue_1_Enqueue_m928255801(__this, ___item, method) ((  void (*) (Queue_1_t3902795092 *, NetworkEvent_t2194707552 , const MethodInfo*))Queue_1_Enqueue_m928255801_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Queue`1<Luz.ULib.Net.NetworkEvent>::SetCapacity(System.Int32)
extern "C"  void Queue_1_SetCapacity_m2796917548_gshared (Queue_1_t3902795092 * __this, int32_t ___new_size, const MethodInfo* method);
#define Queue_1_SetCapacity_m2796917548(__this, ___new_size, method) ((  void (*) (Queue_1_t3902795092 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m2796917548_gshared)(__this, ___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<Luz.ULib.Net.NetworkEvent>::get_Count()
extern "C"  int32_t Queue_1_get_Count_m4063919925_gshared (Queue_1_t3902795092 * __this, const MethodInfo* method);
#define Queue_1_get_Count_m4063919925(__this, method) ((  int32_t (*) (Queue_1_t3902795092 *, const MethodInfo*))Queue_1_get_Count_m4063919925_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<Luz.ULib.Net.NetworkEvent>::GetEnumerator()
extern "C"  Enumerator_t1077449513  Queue_1_GetEnumerator_m778630226_gshared (Queue_1_t3902795092 * __this, const MethodInfo* method);
#define Queue_1_GetEnumerator_m778630226(__this, method) ((  Enumerator_t1077449513  (*) (Queue_1_t3902795092 *, const MethodInfo*))Queue_1_GetEnumerator_m778630226_gshared)(__this, method)
