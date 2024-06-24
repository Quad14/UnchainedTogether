#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Cable

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function B_Cable.B_Cable_C.UserConstructionScript
// 0x0180 (0x0180 - 0x0000)
struct B_Cable_C_UserConstructionScript final
{
public:
	struct FTransform                             Temp_struct_Variable;                              // 0x0000(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31B4[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USplineMeshComponent*                   CallFunc_AddComponent_ReturnValue;                 // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31B5[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue; // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31B6[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_ClampVectorSize_ReturnValue;              // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31B7[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue; // 0x00D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1; // 0x00F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1; // 0x0108(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_ClampVectorSize_ReturnValue_1;            // 0x0120(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSplineLength_ReturnValue;              // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31B8[0x4];                                     // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue;                        // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31B9[0x4];                                     // 0x014C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTangentAtDistanceAlongSpline_Distance_ImplicitCast; // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast; // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast_1; // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTangentAtDistanceAlongSpline_Distance_ImplicitCast_1; // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast_1;     // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Cable_C_UserConstructionScript) == 0x000010, "Wrong alignment on B_Cable_C_UserConstructionScript");
static_assert(sizeof(B_Cable_C_UserConstructionScript) == 0x000180, "Wrong size on B_Cable_C_UserConstructionScript");
static_assert(offsetof(B_Cable_C_UserConstructionScript, Temp_struct_Variable) == 0x000000, "Member 'B_Cable_C_UserConstructionScript::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(B_Cable_C_UserConstructionScript, CallFunc_MakeVector2D_ReturnValue) == 0x000060, "Member 'B_Cable_C_UserConstructionScript::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Cable_C_UserConstructionScript, Temp_int_Variable) == 0x000070, "Member 'B_Cable_C_UserConstructionScript::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(B_Cable_C_UserConstructionScript, CallFunc_AddComponent_ReturnValue) == 0x000078, "Member 'B_Cable_C_UserConstructionScript::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Cable_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x000080, "Member 'B_Cable_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Cable_C_UserConstructionScript, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000088, "Member 'B_Cable_C_UserConstructionScript::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Cable_C_UserConstructionScript, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x000090, "Member 'B_Cable_C_UserConstructionScript::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Cable_C_UserConstructionScript, CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue) == 0x000098, "Member 'B_Cable_C_UserConstructionScript::CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Cable_C_UserConstructionScript, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000B0, "Member 'B_Cable_C_UserConstructionScript::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Cable_C_UserConstructionScript, CallFunc_ClampVectorSize_ReturnValue) == 0x0000B8, "Member 'B_Cable_C_UserConstructionScript::CallFunc_ClampVectorSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Cable_C_UserConstructionScript, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000D0, "Member 'B_Cable_C_UserConstructionScript::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Cable_C_UserConstructionScript, CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue) == 0x0000D8, "Member 'B_Cable_C_UserConstructionScript::CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Cable_C_UserConstructionScript, CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1) == 0x0000F0, "Member 'B_Cable_C_UserConstructionScript::CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Cable_C_UserConstructionScript, CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1) == 0x000108, "Member 'B_Cable_C_UserConstructionScript::CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Cable_C_UserConstructionScript, CallFunc_ClampVectorSize_ReturnValue_1) == 0x000120, "Member 'B_Cable_C_UserConstructionScript::CallFunc_ClampVectorSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Cable_C_UserConstructionScript, CallFunc_GetSplineLength_ReturnValue) == 0x000138, "Member 'B_Cable_C_UserConstructionScript::CallFunc_GetSplineLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Cable_C_UserConstructionScript, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000140, "Member 'B_Cable_C_UserConstructionScript::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Cable_C_UserConstructionScript, CallFunc_Round_ReturnValue) == 0x000148, "Member 'B_Cable_C_UserConstructionScript::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Cable_C_UserConstructionScript, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000150, "Member 'B_Cable_C_UserConstructionScript::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Cable_C_UserConstructionScript, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000158, "Member 'B_Cable_C_UserConstructionScript::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Cable_C_UserConstructionScript, CallFunc_GetTangentAtDistanceAlongSpline_Distance_ImplicitCast) == 0x000160, "Member 'B_Cable_C_UserConstructionScript::CallFunc_GetTangentAtDistanceAlongSpline_Distance_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Cable_C_UserConstructionScript, CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast) == 0x000164, "Member 'B_Cable_C_UserConstructionScript::CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Cable_C_UserConstructionScript, CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast_1) == 0x000168, "Member 'B_Cable_C_UserConstructionScript::CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(B_Cable_C_UserConstructionScript, CallFunc_GetTangentAtDistanceAlongSpline_Distance_ImplicitCast_1) == 0x00016C, "Member 'B_Cable_C_UserConstructionScript::CallFunc_GetTangentAtDistanceAlongSpline_Distance_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(B_Cable_C_UserConstructionScript, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000170, "Member 'B_Cable_C_UserConstructionScript::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Cable_C_UserConstructionScript, CallFunc_Divide_DoubleDouble_A_ImplicitCast_1) == 0x000178, "Member 'B_Cable_C_UserConstructionScript::CallFunc_Divide_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");

}

