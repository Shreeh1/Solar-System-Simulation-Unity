#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RotateAround
struct  RotateAround_t1439248898  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform RotateAround::target
	Transform_t3275118058 * ___target_2;
	// System.Int32 RotateAround::speed
	int32_t ___speed_3;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(RotateAround_t1439248898, ___target_2)); }
	inline Transform_t3275118058 * get_target_2() const { return ___target_2; }
	inline Transform_t3275118058 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3275118058 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(RotateAround_t1439248898, ___speed_3)); }
	inline int32_t get_speed_3() const { return ___speed_3; }
	inline int32_t* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(int32_t value)
	{
		___speed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
