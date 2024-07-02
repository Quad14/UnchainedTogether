#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RotateCage_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function RotateCage_BP.RotateCage_BP_C.ExecuteUbergraph_RotateCage_BP
// 0x0170 (0x0170 - 0x0000)
struct RotateCage_BP_C_ExecuteUbergraph_RotateCage_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2666[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2667[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_UpdateSpeedByPlayersNumber_ReturnSpeed;   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_AddRelativeRotation_SweepHitResult;    // 0x0078(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RotateCage_BP_C_ExecuteUbergraph_RotateCage_BP) == 0x000008, "Wrong alignment on RotateCage_BP_C_ExecuteUbergraph_RotateCage_BP");
static_assert(sizeof(RotateCage_BP_C_ExecuteUbergraph_RotateCage_BP) == 0x000170, "Wrong size on RotateCage_BP_C_ExecuteUbergraph_RotateCage_BP");
static_assert(offsetof(RotateCage_BP_C_ExecuteUbergraph_RotateCage_BP, EntryPoint) == 0x000000, "Member 'RotateCage_BP_C_ExecuteUbergraph_RotateCage_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(RotateCage_BP_C_ExecuteUbergraph_RotateCage_BP, CallFunc_HasAuthority_ReturnValue) == 0x000004, "Member 'RotateCage_BP_C_ExecuteUbergraph_RotateCage_BP::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(RotateCage_BP_C_ExecuteUbergraph_RotateCage_BP, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'RotateCage_BP_C_ExecuteUbergraph_RotateCage_BP::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(RotateCage_BP_C_ExecuteUbergraph_RotateCage_BP, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'RotateCage_BP_C_ExecuteUbergraph_RotateCage_BP::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(RotateCage_BP_C_ExecuteUbergraph_RotateCage_BP, K2Node_Event_DeltaSeconds) == 0x000020, "Member 'RotateCage_BP_C_ExecuteUbergraph_RotateCage_BP::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(RotateCage_BP_C_ExecuteUbergraph_RotateCage_BP, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000028, "Member 'RotateCage_BP_C_ExecuteUbergraph_RotateCage_BP::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(RotateCage_BP_C_ExecuteUbergraph_RotateCage_BP, CallFunc_SelectFloat_ReturnValue) == 0x000030, "Member 'RotateCage_BP_C_ExecuteUbergraph_RotateCage_BP::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(RotateCage_BP_C_ExecuteUbergraph_RotateCage_BP, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000038, "Member 'RotateCage_BP_C_ExecuteUbergraph_RotateCage_BP::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RotateCage_BP_C_ExecuteUbergraph_RotateCage_BP, CallFunc_UpdateSpeedByPlayersNumber_ReturnSpeed) == 0x000040, "Member 'RotateCage_BP_C_ExecuteUbergraph_RotateCage_BP::CallFunc_UpdateSpeedByPlayersNumber_ReturnSpeed' has a wrong offset!");
static_assert(offsetof(RotateCage_BP_C_ExecuteUbergraph_RotateCage_BP, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000048, "Member 'RotateCage_BP_C_ExecuteUbergraph_RotateCage_BP::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(RotateCage_BP_C_ExecuteUbergraph_RotateCage_BP, CallFunc_MakeRotator_ReturnValue) == 0x000060, "Member 'RotateCage_BP_C_ExecuteUbergraph_RotateCage_BP::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(RotateCage_BP_C_ExecuteUbergraph_RotateCage_BP, CallFunc_K2_AddRelativeRotation_SweepHitResult) == 0x000078, "Member 'RotateCage_BP_C_ExecuteUbergraph_RotateCage_BP::CallFunc_K2_AddRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(RotateCage_BP_C_ExecuteUbergraph_RotateCage_BP, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000160, "Member 'RotateCage_BP_C_ExecuteUbergraph_RotateCage_BP::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(RotateCage_BP_C_ExecuteUbergraph_RotateCage_BP, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x000168, "Member 'RotateCage_BP_C_ExecuteUbergraph_RotateCage_BP::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");

// Function RotateCage_BP.RotateCage_BP_C.OnRep_RepRotation
// 0x00F0 (0x00F0 - 0x0000)
struct RotateCage_BP_C_OnRep_RepRotation final
{
public:
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2668[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x0008(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(RotateCage_BP_C_OnRep_RepRotation) == 0x000008, "Wrong alignment on RotateCage_BP_C_OnRep_RepRotation");
static_assert(sizeof(RotateCage_BP_C_OnRep_RepRotation) == 0x0000F0, "Wrong size on RotateCage_BP_C_OnRep_RepRotation");
static_assert(offsetof(RotateCage_BP_C_OnRep_RepRotation, CallFunc_HasAuthority_ReturnValue) == 0x000000, "Member 'RotateCage_BP_C_OnRep_RepRotation::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(RotateCage_BP_C_OnRep_RepRotation, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x000008, "Member 'RotateCage_BP_C_OnRep_RepRotation::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");

// Function RotateCage_BP.RotateCage_BP_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct RotateCage_BP_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RotateCage_BP_C_ReceiveTick) == 0x000004, "Wrong alignment on RotateCage_BP_C_ReceiveTick");
static_assert(sizeof(RotateCage_BP_C_ReceiveTick) == 0x000004, "Wrong size on RotateCage_BP_C_ReceiveTick");
static_assert(offsetof(RotateCage_BP_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'RotateCage_BP_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

