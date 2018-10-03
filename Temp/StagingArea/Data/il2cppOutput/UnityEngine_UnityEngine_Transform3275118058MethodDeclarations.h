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

// UnityEngine.Transform
struct Transform_t3275118058;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"

// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t2243707580  Transform_get_position_m1104419803 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m2469242620 (Transform_t3275118058 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C"  void Transform_INTERNAL_get_position_m1881704498 (Transform_t3275118058 * __this, Vector3_t2243707580 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C"  void Transform_INTERNAL_set_position_m101633598 (Transform_t3275118058 * __this, Vector3_t2243707580 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
extern "C"  Vector3_t2243707580  Transform_get_up_m1603627763 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C"  Quaternion_t4030073918  Transform_get_rotation_m1033555130 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C"  void Transform_INTERNAL_get_rotation_m2427701365 (Transform_t3275118058 * __this, Quaternion_t4030073918 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C"  Vector3_t2243707580  Transform_get_localScale_m3074381503 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)
extern "C"  void Transform_INTERNAL_get_localScale_m2568549910 (Transform_t3275118058 * __this, Vector3_t2243707580 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::RotateAroundInternal(UnityEngine.Vector3,System.Single)
extern "C"  void Transform_RotateAroundInternal_m2303097692 (Transform_t3275118058 * __this, Vector3_t2243707580  ___axis0, float ___angle1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_CALL_RotateAroundInternal(UnityEngine.Transform,UnityEngine.Vector3&,System.Single)
extern "C"  void Transform_INTERNAL_CALL_RotateAroundInternal_m552507884 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___self0, Vector3_t2243707580 * ___axis1, float ___angle2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  void Transform_RotateAround_m3410686872 (Transform_t3275118058 * __this, Vector3_t2243707580  ___point0, Vector3_t2243707580  ___axis1, float ___angle2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
extern "C"  void Transform_LookAt_m2514033256 (Transform_t3275118058 * __this, Transform_t3275118058 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform,UnityEngine.Vector3)
extern "C"  void Transform_LookAt_m335101033 (Transform_t3275118058 * __this, Transform_t3275118058 * ___target0, Vector3_t2243707580  ___worldUp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Transform_LookAt_m3392147815 (Transform_t3275118058 * __this, Vector3_t2243707580  ___worldPosition0, Vector3_t2243707580  ___worldUp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_CALL_LookAt(UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void Transform_INTERNAL_CALL_LookAt_m1443061981 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___self0, Vector3_t2243707580 * ___worldPosition1, Vector3_t2243707580 * ___worldUp2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C"  int32_t Transform_get_childCount_m881385315 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C"  Il2CppObject * Transform_GetEnumerator_m3479720613 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C"  Transform_t3275118058 * Transform_GetChild_m3838588184 (Transform_t3275118058 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
