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

// FarseerPhysics.Common.Vertices/PolyNode
struct PolyNode_t625694734;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "AssemblyU2DCSharp_FarseerPhysics_Common_Vertices_Po625694734.h"

// System.Void FarseerPhysics.Common.Vertices/PolyNode::.ctor()
extern "C"  void PolyNode__ctor_m225661229 (PolyNode_t625694734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FarseerPhysics.Common.Vertices/PolyNode::.ctor(UnityEngine.Vector2)
extern "C"  void PolyNode__ctor_m3712675181 (PolyNode_t625694734 * __this, Vector2_t3525329788  ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FarseerPhysics.Common.Vertices/PolyNode::IsRighter(System.Single,System.Single,System.Single,System.Single)
extern "C"  bool PolyNode_IsRighter_m612306716 (PolyNode_t625694734 * __this, float ___sinA, float ___cosA, float ___sinB, float ___cosB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 FarseerPhysics.Common.Vertices/PolyNode::remainder(System.Int32,System.Int32)
extern "C"  int32_t PolyNode_remainder_m4176520072 (PolyNode_t625694734 * __this, int32_t ___x, int32_t ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FarseerPhysics.Common.Vertices/PolyNode::AddConnection(FarseerPhysics.Common.Vertices/PolyNode)
extern "C"  void PolyNode_AddConnection_m1099664906 (PolyNode_t625694734 * __this, PolyNode_t625694734 * ___toMe, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FarseerPhysics.Common.Vertices/PolyNode::RemoveConnection(FarseerPhysics.Common.Vertices/PolyNode)
extern "C"  void PolyNode_RemoveConnection_m4032799387 (PolyNode_t625694734 * __this, PolyNode_t625694734 * ___fromMe, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FarseerPhysics.Common.Vertices/PolyNode::RemoveConnectionByIndex(System.Int32)
extern "C"  void PolyNode_RemoveConnectionByIndex_m483775157 (PolyNode_t625694734 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FarseerPhysics.Common.Vertices/PolyNode::IsConnectedTo(FarseerPhysics.Common.Vertices/PolyNode)
extern "C"  bool PolyNode_IsConnectedTo_m1019072955 (PolyNode_t625694734 * __this, PolyNode_t625694734 * ___me, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FarseerPhysics.Common.Vertices/PolyNode FarseerPhysics.Common.Vertices/PolyNode::GetRightestConnection(FarseerPhysics.Common.Vertices/PolyNode)
extern "C"  PolyNode_t625694734 * PolyNode_GetRightestConnection_m1815861366 (PolyNode_t625694734 * __this, PolyNode_t625694734 * ___incoming, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FarseerPhysics.Common.Vertices/PolyNode FarseerPhysics.Common.Vertices/PolyNode::GetRightestConnection(UnityEngine.Vector2)
extern "C"  PolyNode_t625694734 * PolyNode_GetRightestConnection_m4135136508 (PolyNode_t625694734 * __this, Vector2_t3525329788  ___incomingDir, const MethodInfo* method) IL2CPP_METHOD_ATTR;
