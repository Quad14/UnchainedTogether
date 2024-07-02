#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WayWall_04_BPC

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WayWall_04_BPC.WayWall_04_BPC_C.ExecuteUbergraph_WayWall_04_BPC
// 0x0120 (0x0120 - 0x0000)
struct WayWall_04_BPC_C_ExecuteUbergraph_WayWall_04_BPC final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_AddLocalRotation_SweepHitResult;       // 0x0028(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Pitch_ImplicitCast;           // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WayWall_04_BPC_C_ExecuteUbergraph_WayWall_04_BPC) == 0x000008, "Wrong alignment on WayWall_04_BPC_C_ExecuteUbergraph_WayWall_04_BPC");
static_assert(sizeof(WayWall_04_BPC_C_ExecuteUbergraph_WayWall_04_BPC) == 0x000120, "Wrong size on WayWall_04_BPC_C_ExecuteUbergraph_WayWall_04_BPC");
static_assert(offsetof(WayWall_04_BPC_C_ExecuteUbergraph_WayWall_04_BPC, EntryPoint) == 0x000000, "Member 'WayWall_04_BPC_C_ExecuteUbergraph_WayWall_04_BPC::EntryPoint' has a wrong offset!");
static_assert(offsetof(WayWall_04_BPC_C_ExecuteUbergraph_WayWall_04_BPC, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'WayWall_04_BPC_C_ExecuteUbergraph_WayWall_04_BPC::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(WayWall_04_BPC_C_ExecuteUbergraph_WayWall_04_BPC, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000008, "Member 'WayWall_04_BPC_C_ExecuteUbergraph_WayWall_04_BPC::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WayWall_04_BPC_C_ExecuteUbergraph_WayWall_04_BPC, CallFunc_MakeRotator_ReturnValue) == 0x000010, "Member 'WayWall_04_BPC_C_ExecuteUbergraph_WayWall_04_BPC::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(WayWall_04_BPC_C_ExecuteUbergraph_WayWall_04_BPC, CallFunc_K2_AddLocalRotation_SweepHitResult) == 0x000028, "Member 'WayWall_04_BPC_C_ExecuteUbergraph_WayWall_04_BPC::CallFunc_K2_AddLocalRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(WayWall_04_BPC_C_ExecuteUbergraph_WayWall_04_BPC, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000110, "Member 'WayWall_04_BPC_C_ExecuteUbergraph_WayWall_04_BPC::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WayWall_04_BPC_C_ExecuteUbergraph_WayWall_04_BPC, CallFunc_MakeRotator_Pitch_ImplicitCast) == 0x000118, "Member 'WayWall_04_BPC_C_ExecuteUbergraph_WayWall_04_BPC::CallFunc_MakeRotator_Pitch_ImplicitCast' has a wrong offset!");

// Function WayWall_04_BPC.WayWall_04_BPC_C.OnRep_RepRot
// 0x00F0 (0x00F0 - 0x0000)
struct WayWall_04_BPC_C_OnRep_RepRot final
{
public:
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BCF[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x0008(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(WayWall_04_BPC_C_OnRep_RepRot) == 0x000008, "Wrong alignment on WayWall_04_BPC_C_OnRep_RepRot");
static_assert(sizeof(WayWall_04_BPC_C_OnRep_RepRot) == 0x0000F0, "Wrong size on WayWall_04_BPC_C_OnRep_RepRot");
static_assert(offsetof(WayWall_04_BPC_C_OnRep_RepRot, CallFunc_HasAuthority_ReturnValue) == 0x000000, "Member 'WayWall_04_BPC_C_OnRep_RepRot::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(WayWall_04_BPC_C_OnRep_RepRot, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x000008, "Member 'WayWall_04_BPC_C_OnRep_RepRot::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");

// Function WayWall_04_BPC.WayWall_04_BPC_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct WayWall_04_BPC_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WayWall_04_BPC_C_ReceiveTick) == 0x000004, "Wrong alignment on WayWall_04_BPC_C_ReceiveTick");
static_assert(sizeof(WayWall_04_BPC_C_ReceiveTick) == 0x000004, "Wrong size on WayWall_04_BPC_C_ReceiveTick");
static_assert(offsetof(WayWall_04_BPC_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'WayWall_04_BPC_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

