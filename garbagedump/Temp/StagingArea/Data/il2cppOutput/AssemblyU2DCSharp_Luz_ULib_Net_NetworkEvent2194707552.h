#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Object_t;

#include "mscorlib_System_ValueType4014882752.h"
#include "AssemblyU2DCSharp_Luz_ULib_Net_NetEventType3163541291.h"
#include "AssemblyU2DCSharp_Luz_ULib_Net_ConnectionId4161243117.h"

// Luz.ULib.Net.NetworkEvent
struct  NetworkEvent_t2194707552 
{
	// Luz.ULib.Net.NetEventType Luz.ULib.Net.NetworkEvent::type
	uint8_t ___type_0;
	// Luz.ULib.Net.ConnectionId Luz.ULib.Net.NetworkEvent::connectionId
	ConnectionId_t4161243117  ___connectionId_1;
	// System.Object Luz.ULib.Net.NetworkEvent::data
	Object_t * ___data_2;
};
