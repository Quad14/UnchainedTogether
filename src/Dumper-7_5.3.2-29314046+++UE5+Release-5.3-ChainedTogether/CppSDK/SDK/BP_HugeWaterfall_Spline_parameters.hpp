#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HugeWaterfall_Spline

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_HugeWaterfall_Spline.BP_HugeWaterfall_Spline_C.ExecuteUbergraph_BP_HugeWaterfall_Spline
// 0x0180 (0x0180 - 0x0000)
struct BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSplineLength_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D6E[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D6F[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloat_ReturnValue;                  // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Percent_FloatFloat_ReturnValue;           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue; // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0078(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetNewTime_NewTime_ImplicitCast;          // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast; // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPlayRate_NewRate_ImplicitCast;         // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline) == 0x000008, "Wrong alignment on BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline");
static_assert(sizeof(BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline) == 0x000180, "Wrong size on BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline");
static_assert(offsetof(BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline, EntryPoint) == 0x000000, "Member 'BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline, CallFunc_GetSplineLength_ReturnValue) == 0x000010, "Member 'BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline::CallFunc_GetSplineLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline, CallFunc_Array_Get_Item) == 0x000018, "Member 'BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline, CallFunc_Less_IntInt_ReturnValue) == 0x000024, "Member 'BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000028, "Member 'BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000030, "Member 'BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000038, "Member 'BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline, CallFunc_RandomFloat_ReturnValue) == 0x000040, "Member 'BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline::CallFunc_RandomFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000048, "Member 'BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline, CallFunc_Percent_FloatFloat_ReturnValue) == 0x000050, "Member 'BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline::CallFunc_Percent_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000058, "Member 'BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline, CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue) == 0x000060, "Member 'BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline::CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000078, "Member 'BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x000160, "Member 'BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline, CallFunc_Multiply_DoubleDouble_B_ImplicitCast) == 0x000168, "Member 'BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline::CallFunc_Multiply_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline, CallFunc_SetNewTime_NewTime_ImplicitCast) == 0x000170, "Member 'BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline::CallFunc_SetNewTime_NewTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline, CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast) == 0x000174, "Member 'BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline::CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline, CallFunc_SetPlayRate_NewRate_ImplicitCast) == 0x000178, "Member 'BP_HugeWaterfall_Spline_C_ExecuteUbergraph_BP_HugeWaterfall_Spline::CallFunc_SetPlayRate_NewRate_ImplicitCast' has a wrong offset!");

// Function BP_HugeWaterfall_Spline.BP_HugeWaterfall_Spline_C.UserConstructionScript
// 0x00D0 (0x00D0 - 0x0000)
struct BP_HugeWaterfall_Spline_C_UserConstructionScript final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSplineLength_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D70[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D71[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D72[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue; // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_Conv_VectorToTransform_ReturnValue;       // 0x0050(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_AddComponent_ReturnValue;                 // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D73[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast; // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HugeWaterfall_Spline_C_UserConstructionScript) == 0x000010, "Wrong alignment on BP_HugeWaterfall_Spline_C_UserConstructionScript");
static_assert(sizeof(BP_HugeWaterfall_Spline_C_UserConstructionScript) == 0x0000D0, "Wrong size on BP_HugeWaterfall_Spline_C_UserConstructionScript");
static_assert(offsetof(BP_HugeWaterfall_Spline_C_UserConstructionScript, Temp_int_Variable) == 0x000000, "Member 'BP_HugeWaterfall_Spline_C_UserConstructionScript::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_HugeWaterfall_Spline_C_UserConstructionScript, CallFunc_GetSplineLength_ReturnValue) == 0x000004, "Member 'BP_HugeWaterfall_Spline_C_UserConstructionScript::CallFunc_GetSplineLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HugeWaterfall_Spline_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_HugeWaterfall_Spline_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HugeWaterfall_Spline_C_UserConstructionScript, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000010, "Member 'BP_HugeWaterfall_Spline_C_UserConstructionScript::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HugeWaterfall_Spline_C_UserConstructionScript, CallFunc_Subtract_IntInt_ReturnValue) == 0x000018, "Member 'BP_HugeWaterfall_Spline_C_UserConstructionScript::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HugeWaterfall_Spline_C_UserConstructionScript, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000020, "Member 'BP_HugeWaterfall_Spline_C_UserConstructionScript::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HugeWaterfall_Spline_C_UserConstructionScript, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000028, "Member 'BP_HugeWaterfall_Spline_C_UserConstructionScript::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HugeWaterfall_Spline_C_UserConstructionScript, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000030, "Member 'BP_HugeWaterfall_Spline_C_UserConstructionScript::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HugeWaterfall_Spline_C_UserConstructionScript, CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue) == 0x000038, "Member 'BP_HugeWaterfall_Spline_C_UserConstructionScript::CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HugeWaterfall_Spline_C_UserConstructionScript, CallFunc_Conv_VectorToTransform_ReturnValue) == 0x000050, "Member 'BP_HugeWaterfall_Spline_C_UserConstructionScript::CallFunc_Conv_VectorToTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HugeWaterfall_Spline_C_UserConstructionScript, CallFunc_AddComponent_ReturnValue) == 0x0000B0, "Member 'BP_HugeWaterfall_Spline_C_UserConstructionScript::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HugeWaterfall_Spline_C_UserConstructionScript, CallFunc_Array_Add_ReturnValue) == 0x0000B8, "Member 'BP_HugeWaterfall_Spline_C_UserConstructionScript::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HugeWaterfall_Spline_C_UserConstructionScript, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x0000C0, "Member 'BP_HugeWaterfall_Spline_C_UserConstructionScript::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_HugeWaterfall_Spline_C_UserConstructionScript, CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast) == 0x0000C8, "Member 'BP_HugeWaterfall_Spline_C_UserConstructionScript::CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast' has a wrong offset!");

}

