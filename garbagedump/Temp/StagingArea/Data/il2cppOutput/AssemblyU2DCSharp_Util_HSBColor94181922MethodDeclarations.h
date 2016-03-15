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

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Util_HSBColor94181922.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

// System.Void Util.HSBColor::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void HSBColor__ctor_m2011476455 (HSBColor_t94181922 * __this, float ___h, float ___s, float ___b, float ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Util.HSBColor::.ctor(System.Single,System.Single,System.Single)
extern "C"  void HSBColor__ctor_m3487412866 (HSBColor_t94181922 * __this, float ___h, float ___s, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Util.HSBColor::.ctor(UnityEngine.Color)
extern "C"  void HSBColor__ctor_m169693043 (HSBColor_t94181922 * __this, Color_t1588175760  ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Util.HSBColor Util.HSBColor::FromColor(UnityEngine.Color)
extern "C"  HSBColor_t94181922  HSBColor_FromColor_m1608793665 (Object_t * __this /* static, unused */, Color_t1588175760  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color Util.HSBColor::ToColor(Util.HSBColor)
extern "C"  Color_t1588175760  HSBColor_ToColor_m657839162 (Object_t * __this /* static, unused */, HSBColor_t94181922  ___hsbColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color Util.HSBColor::ToColor()
extern "C"  Color_t1588175760  HSBColor_ToColor_m3643121440 (HSBColor_t94181922 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Util.HSBColor::ToString()
extern "C"  String_t* HSBColor_ToString_m832667258 (HSBColor_t94181922 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Util.HSBColor Util.HSBColor::Lerp(Util.HSBColor,Util.HSBColor,System.Single)
extern "C"  HSBColor_t94181922  HSBColor_Lerp_m1972926342 (Object_t * __this /* static, unused */, HSBColor_t94181922  ___a, HSBColor_t94181922  ___b, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
