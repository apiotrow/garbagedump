#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// MouseOrbitImproved
struct  MouseOrbitImproved_t4266867153  : public MonoBehaviour_t3012272455
{
	// UnityEngine.Transform MouseOrbitImproved::target
	Transform_t284553113 * ___target_2;
	// System.Single MouseOrbitImproved::distance
	float ___distance_3;
	// System.Single MouseOrbitImproved::xSpeed
	float ___xSpeed_4;
	// System.Single MouseOrbitImproved::ySpeed
	float ___ySpeed_5;
	// System.Single MouseOrbitImproved::yMinLimit
	float ___yMinLimit_6;
	// System.Single MouseOrbitImproved::yMaxLimit
	float ___yMaxLimit_7;
	// System.Single MouseOrbitImproved::distanceMin
	float ___distanceMin_8;
	// System.Single MouseOrbitImproved::distanceMax
	float ___distanceMax_9;
	// UnityEngine.Rigidbody MouseOrbitImproved::rBody
	Rigidbody_t1972007546 * ___rBody_10;
	// System.Single MouseOrbitImproved::x
	float ___x_11;
	// System.Single MouseOrbitImproved::y
	float ___y_12;
};
