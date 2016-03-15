#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Luz.ULib.Net.ConnectionId>
struct List_1_t663234790;
// System.Collections.Generic.IList`1<Luz.ULib.Net.ConnectionId>
struct IList_1_t2032768135;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Collections.Generic.Queue`1<Luz.ULib.Net.NetworkEvent>
struct Queue_1_t3902795092;

#include "mscorlib_System_Object837106420.h"

// Luz.Net.WebRtcNetwork
struct  WebRtcNetwork_t1351645409  : public Object_t
{
	// System.Int32 Luz.Net.WebRtcNetwork::mReference
	int32_t ___mReference_1;
	// System.Boolean Luz.Net.WebRtcNetwork::mIsServer
	bool ___mIsServer_2;
	// System.Collections.Generic.List`1<Luz.ULib.Net.ConnectionId> Luz.Net.WebRtcNetwork::mConnections
	List_1_t663234790 * ___mConnections_3;
	// System.Collections.Generic.IList`1<Luz.ULib.Net.ConnectionId> Luz.Net.WebRtcNetwork::mConnectionsReadOnly
	Object_t* ___mConnectionsReadOnly_4;
	// System.Int32[] Luz.Net.WebRtcNetwork::mTypeidBuffer
	Int32U5BU5D_t1809983122* ___mTypeidBuffer_5;
	// System.Int32[] Luz.Net.WebRtcNetwork::mConidBuffer
	Int32U5BU5D_t1809983122* ___mConidBuffer_6;
	// System.Int32[] Luz.Net.WebRtcNetwork::mDataWrittenLenBuffer
	Int32U5BU5D_t1809983122* ___mDataWrittenLenBuffer_7;
	// System.Collections.Generic.Queue`1<Luz.ULib.Net.NetworkEvent> Luz.Net.WebRtcNetwork::mEvents
	Queue_1_t3902795092 * ___mEvents_8;
};
struct WebRtcNetwork_t1351645409_StaticFields{
	// System.Boolean Luz.Net.WebRtcNetwork::sInjectionTried
	bool ___sInjectionTried_0;
};
