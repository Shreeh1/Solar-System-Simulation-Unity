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

// ChangeLookAtTarget
struct ChangeLookAtTarget_t3621805471;
// LookAtTarget
struct LookAtTarget_t512724305;
// RotateAround
struct RotateAround_t1439248898;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DCSharp_ChangeLookAtTarget3621805471.h"
#include "AssemblyU2DCSharp_ChangeLookAtTarget3621805471MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object1021602117MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3819376471MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Debug1368543263MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Camera189460977MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject1756533147MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform3275118058MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_LookAtTarget512724305.h"
#include "AssemblyU2DCSharp_LookAtTarget512724305MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "mscorlib_System_Single2076509932.h"
#include "AssemblyU2DCSharp_RotateAround1439248898.h"
#include "AssemblyU2DCSharp_RotateAround1439248898MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time31991979MethodDeclarations.h"
#include "mscorlib_System_Int322071877448.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ChangeLookAtTarget::.ctor()
extern "C"  void ChangeLookAtTarget__ctor_m2749569066 (ChangeLookAtTarget_t3621805471 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ChangeLookAtTarget::Start()
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2994090592;
extern const uint32_t ChangeLookAtTarget_Start_m4249180190_MetadataUsageId;
extern "C"  void ChangeLookAtTarget_Start_m4249180190 (ChangeLookAtTarget_t3621805471 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChangeLookAtTarget_Start_m4249180190_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1756533147 * L_0 = __this->get_target_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m3764089466(NULL /*static, unused*/, L_0, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		GameObject_t1756533147 * L_2 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		__this->set_target_2(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral2994090592, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void ChangeLookAtTarget::OnMouseDown()
extern Il2CppClass* LookAtTarget_t512724305_il2cpp_TypeInfo_var;
extern const uint32_t ChangeLookAtTarget_OnMouseDown_m632955386_MetadataUsageId;
extern "C"  void ChangeLookAtTarget_OnMouseDown_m632955386 (ChangeLookAtTarget_t3621805471 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChangeLookAtTarget_OnMouseDown_m632955386_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		GameObject_t1756533147 * L_0 = __this->get_target_2();
		((LookAtTarget_t512724305_StaticFields*)LookAtTarget_t512724305_il2cpp_TypeInfo_var->static_fields)->set_target_2(L_0);
		Camera_t189460977 * L_1 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_2 = __this->get_target_2();
		Transform_t3275118058 * L_3 = GameObject_get_transform_m909382139(L_2, /*hidden argument*/NULL);
		Vector3_t2243707580  L_4 = Transform_get_localScale_m3074381503(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5 = (&V_0)->get_x_0();
		Camera_set_fieldOfView_m3974156396(L_1, ((float)((float)(60.0f)*(float)L_5)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void LookAtTarget::.ctor()
extern "C"  void LookAtTarget__ctor_m1782423158 (LookAtTarget_t512724305 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LookAtTarget::Start()
extern Il2CppClass* LookAtTarget_t512724305_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3391206956;
extern const uint32_t LookAtTarget_Start_m3161776094_MetadataUsageId;
extern "C"  void LookAtTarget_Start_m3161776094 (LookAtTarget_t512724305 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LookAtTarget_Start_m3161776094_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1756533147 * L_0 = ((LookAtTarget_t512724305_StaticFields*)LookAtTarget_t512724305_il2cpp_TypeInfo_var->static_fields)->get_target_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m3764089466(NULL /*static, unused*/, L_0, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		GameObject_t1756533147 * L_2 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		((LookAtTarget_t512724305_StaticFields*)LookAtTarget_t512724305_il2cpp_TypeInfo_var->static_fields)->set_target_2(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral3391206956, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void LookAtTarget::Update()
extern Il2CppClass* LookAtTarget_t512724305_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const uint32_t LookAtTarget_Update_m1314782069_MetadataUsageId;
extern "C"  void LookAtTarget_Update_m1314782069 (LookAtTarget_t512724305 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LookAtTarget_Update_m1314782069_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1756533147 * L_0 = ((LookAtTarget_t512724305_StaticFields*)LookAtTarget_t512724305_il2cpp_TypeInfo_var->static_fields)->get_target_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m2856731593(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		Transform_t3275118058 * L_2 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_3 = ((LookAtTarget_t512724305_StaticFields*)LookAtTarget_t512724305_il2cpp_TypeInfo_var->static_fields)->get_target_2();
		Transform_t3275118058 * L_4 = GameObject_get_transform_m909382139(L_3, /*hidden argument*/NULL);
		Transform_LookAt_m2514033256(L_2, L_4, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void RotateAround::.ctor()
extern "C"  void RotateAround__ctor_m3848628785 (RotateAround_t1439248898 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RotateAround::Start()
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2963616993;
extern const uint32_t RotateAround_Start_m4102343553_MetadataUsageId;
extern "C"  void RotateAround_Start_m4102343553 (RotateAround_t1439248898 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RotateAround_Start_m4102343553_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3275118058 * L_0 = __this->get_target_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m3764089466(NULL /*static, unused*/, L_0, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		GameObject_t1756533147 * L_2 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_3 = GameObject_get_transform_m909382139(L_2, /*hidden argument*/NULL);
		__this->set_target_2(L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral2963616993, /*hidden argument*/NULL);
	}

IL_002c:
	{
		return;
	}
}
// System.Void RotateAround::Update()
extern "C"  void RotateAround_Update_m1401790080 (RotateAround_t1439248898 * __this, const MethodInfo* method)
{
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_1 = __this->get_target_2();
		Transform_t3275118058 * L_2 = Component_get_transform_m2697483695(L_1, /*hidden argument*/NULL);
		Vector3_t2243707580  L_3 = Transform_get_position_m1104419803(L_2, /*hidden argument*/NULL);
		Transform_t3275118058 * L_4 = __this->get_target_2();
		Transform_t3275118058 * L_5 = Component_get_transform_m2697483695(L_4, /*hidden argument*/NULL);
		Vector3_t2243707580  L_6 = Transform_get_up_m1603627763(L_5, /*hidden argument*/NULL);
		int32_t L_7 = __this->get_speed_3();
		float L_8 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_RotateAround_m3410686872(L_0, L_3, L_6, ((float)((float)(((float)((float)L_7)))*(float)L_8)), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
