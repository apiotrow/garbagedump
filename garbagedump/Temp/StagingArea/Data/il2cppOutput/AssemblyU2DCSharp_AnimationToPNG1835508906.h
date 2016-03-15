#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Camera
struct Camera_t3533968274;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// UnityEngine.RenderTexture
struct RenderTexture_t12905170;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// AnimationToPNG
struct  AnimationToPNG_t1835508906  : public MonoBehaviour_t3012272455
{
	// System.String AnimationToPNG::animationName
	String_t* ___animationName_2;
	// System.String AnimationToPNG::folder
	String_t* ___folder_3;
	// System.Int32 AnimationToPNG::frameRate
	int32_t ___frameRate_4;
	// System.Int32 AnimationToPNG::framesToCapture
	int32_t ___framesToCapture_5;
	// UnityEngine.Camera AnimationToPNG::whiteCam
	Camera_t3533968274 * ___whiteCam_6;
	// UnityEngine.Camera AnimationToPNG::blackCam
	Camera_t3533968274 * ___blackCam_7;
	// System.Single AnimationToPNG::pixelsToWorldUnit
	float ___pixelsToWorldUnit_8;
	// System.Boolean AnimationToPNG::useRenderTexture
	bool ___useRenderTexture_9;
	// System.Int32 AnimationToPNG::videoframe
	int32_t ___videoframe_10;
	// System.Single AnimationToPNG::originaltimescaleTime
	float ___originaltimescaleTime_11;
	// System.String AnimationToPNG::realFolder
	String_t* ___realFolder_12;
	// System.Boolean AnimationToPNG::done
	bool ___done_13;
	// System.Boolean AnimationToPNG::readyToCapture
	bool ___readyToCapture_14;
	// System.Single AnimationToPNG::cameraSize
	float ___cameraSize_15;
	// UnityEngine.Texture2D AnimationToPNG::texb
	Texture2D_t2509538522 * ___texb_16;
	// UnityEngine.Texture2D AnimationToPNG::texw
	Texture2D_t2509538522 * ___texw_17;
	// UnityEngine.Texture2D AnimationToPNG::outputtex
	Texture2D_t2509538522 * ___outputtex_18;
	// UnityEngine.RenderTexture AnimationToPNG::blackCamRenderTexture
	RenderTexture_t12905170 * ___blackCamRenderTexture_19;
	// UnityEngine.RenderTexture AnimationToPNG::whiteCamRenderTexture
	RenderTexture_t12905170 * ___whiteCamRenderTexture_20;
};
