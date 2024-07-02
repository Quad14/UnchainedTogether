#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RotatingArc

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_RotatingArc.BP_RotatingArc_C.ExecuteUbergraph_BP_RotatingArc
// 0x0128 (0x0128 - 0x0000)
struct BP_RotatingArc_C_ExecuteUbergraph_BP_RotatingArc final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C40[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C41[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_AddActorLocalRotation_SweepHitResult;  // 0x0030(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Roll_ImplicitCast;            // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RotatingArc_C_ExecuteUbergraph_BP_RotatingArc) == 0x000008, "Wrong alignment on BP_RotatingArc_C_ExecuteUbergraph_BP_RotatingArc");
static_assert(sizeof(BP_RotatingArc_C_ExecuteUbergraph_BP_RotatingArc) == 0x000128, "Wrong size on BP_RotatingArc_C_ExecuteUbergraph_BP_RotatingArc");
static_assert(offsetof(BP_RotatingArc_C_ExecuteUbergraph_BP_RotatingArc, EntryPoint) == 0x000000, "Member 'BP_RotatingArc_C_ExecuteUbergraph_BP_RotatingArc::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_RotatingArc_C_ExecuteUbergraph_BP_RotatingArc, CallFunc_HasAuthority_ReturnValue) == 0x000004, "Member 'BP_RotatingArc_C_ExecuteUbergraph_BP_RotatingArc::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RotatingArc_C_ExecuteUbergraph_BP_RotatingArc, K2Node_Event_DeltaSeconds) == 0x000008, "Member 'BP_RotatingArc_C_ExecuteUbergraph_BP_RotatingArc::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_RotatingArc_C_ExecuteUbergraph_BP_RotatingArc, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000010, "Member 'BP_RotatingArc_C_ExecuteUbergraph_BP_RotatingArc::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RotatingArc_C_ExecuteUbergraph_BP_RotatingArc, CallFunc_MakeRotator_ReturnValue) == 0x000018, "Member 'BP_RotatingArc_C_ExecuteUbergraph_BP_RotatingArc::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RotatingArc_C_ExecuteUbergraph_BP_RotatingArc, CallFunc_K2_AddActorLocalRotation_SweepHitResult) == 0x000030, "Member 'BP_RotatingArc_C_ExecuteUbergraph_BP_RotatingArc::CallFunc_K2_AddActorLocalRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_RotatingArc_C_ExecuteUbergraph_BP_RotatingArc, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000118, "Member 'BP_RotatingArc_C_ExecuteUbergraph_BP_RotatingArc::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_RotatingArc_C_ExecuteUbergraph_BP_RotatingArc, CallFunc_MakeRotator_Roll_ImplicitCast) == 0x000120, "Member 'BP_RotatingArc_C_ExecuteUbergraph_BP_RotatingArc::CallFunc_MakeRotator_Roll_ImplicitCast' has a wrong offset!");

// Function BP_RotatingArc.BP_RotatingArc_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_RotatingArc_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RotatingArc_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_RotatingArc_C_ReceiveTick");
static_assert(sizeof(BP_RotatingArc_C_ReceiveTick) == 0x000004, "Wrong size on BP_RotatingArc_C_ReceiveTick");
static_assert(offsetof(BP_RotatingArc_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_RotatingArc_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

