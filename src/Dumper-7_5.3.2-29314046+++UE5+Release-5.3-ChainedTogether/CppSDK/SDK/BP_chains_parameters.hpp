#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_chains

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_chains.BP_Chains_C.UserConstructionScript
// 0x0160 (0x0160 - 0x0000)
struct BP_Chains_C_UserConstructionScript final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3412[0xC];                                     // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Temp_struct_Variable;                              // 0x0010(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3413[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USplineMeshComponent*                   CallFunc_AddComponent_ReturnValue;                 // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3414[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue; // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue; // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_ClampVectorSize_ReturnValue;              // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1; // 0x00E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1; // 0x00F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_ClampVectorSize_ReturnValue_1;            // 0x0110(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSplineLength_ReturnValue;              // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3415[0x4];                                     // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3416[0x3];                                     // 0x0141(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast; // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTangentAtDistanceAlongSpline_Distance_ImplicitCast; // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast_1; // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTangentAtDistanceAlongSpline_Distance_ImplicitCast_1; // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3417[0x4];                                     // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Chains_C_UserConstructionScript) == 0x000010, "Wrong alignment on BP_Chains_C_UserConstructionScript");
static_assert(sizeof(BP_Chains_C_UserConstructionScript) == 0x000160, "Wrong size on BP_Chains_C_UserConstructionScript");
static_assert(offsetof(BP_Chains_C_UserConstructionScript, Temp_int_Variable) == 0x000000, "Member 'BP_Chains_C_UserConstructionScript::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_Chains_C_UserConstructionScript, Temp_struct_Variable) == 0x000010, "Member 'BP_Chains_C_UserConstructionScript::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_Chains_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x000070, "Member 'BP_Chains_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Chains_C_UserConstructionScript, CallFunc_AddComponent_ReturnValue) == 0x000078, "Member 'BP_Chains_C_UserConstructionScript::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Chains_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue_1) == 0x000080, "Member 'BP_Chains_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Chains_C_UserConstructionScript, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000088, "Member 'BP_Chains_C_UserConstructionScript::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Chains_C_UserConstructionScript, CallFunc_Multiply_IntFloat_ReturnValue_1) == 0x000090, "Member 'BP_Chains_C_UserConstructionScript::CallFunc_Multiply_IntFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Chains_C_UserConstructionScript, CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue) == 0x000098, "Member 'BP_Chains_C_UserConstructionScript::CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Chains_C_UserConstructionScript, CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue) == 0x0000B0, "Member 'BP_Chains_C_UserConstructionScript::CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Chains_C_UserConstructionScript, CallFunc_ClampVectorSize_ReturnValue) == 0x0000C8, "Member 'BP_Chains_C_UserConstructionScript::CallFunc_ClampVectorSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Chains_C_UserConstructionScript, CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1) == 0x0000E0, "Member 'BP_Chains_C_UserConstructionScript::CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Chains_C_UserConstructionScript, CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1) == 0x0000F8, "Member 'BP_Chains_C_UserConstructionScript::CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Chains_C_UserConstructionScript, CallFunc_ClampVectorSize_ReturnValue_1) == 0x000110, "Member 'BP_Chains_C_UserConstructionScript::CallFunc_ClampVectorSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Chains_C_UserConstructionScript, CallFunc_GetSplineLength_ReturnValue) == 0x000128, "Member 'BP_Chains_C_UserConstructionScript::CallFunc_GetSplineLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Chains_C_UserConstructionScript, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000130, "Member 'BP_Chains_C_UserConstructionScript::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Chains_C_UserConstructionScript, CallFunc_FTrunc_ReturnValue) == 0x000138, "Member 'BP_Chains_C_UserConstructionScript::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Chains_C_UserConstructionScript, CallFunc_Subtract_IntInt_ReturnValue) == 0x00013C, "Member 'BP_Chains_C_UserConstructionScript::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Chains_C_UserConstructionScript, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000140, "Member 'BP_Chains_C_UserConstructionScript::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Chains_C_UserConstructionScript, CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast) == 0x000144, "Member 'BP_Chains_C_UserConstructionScript::CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Chains_C_UserConstructionScript, CallFunc_GetTangentAtDistanceAlongSpline_Distance_ImplicitCast) == 0x000148, "Member 'BP_Chains_C_UserConstructionScript::CallFunc_GetTangentAtDistanceAlongSpline_Distance_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Chains_C_UserConstructionScript, CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast_1) == 0x00014C, "Member 'BP_Chains_C_UserConstructionScript::CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_Chains_C_UserConstructionScript, CallFunc_GetTangentAtDistanceAlongSpline_Distance_ImplicitCast_1) == 0x000150, "Member 'BP_Chains_C_UserConstructionScript::CallFunc_GetTangentAtDistanceAlongSpline_Distance_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_Chains_C_UserConstructionScript, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000158, "Member 'BP_Chains_C_UserConstructionScript::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");

}

