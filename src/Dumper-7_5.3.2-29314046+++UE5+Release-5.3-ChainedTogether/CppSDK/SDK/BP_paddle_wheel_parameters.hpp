#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_paddle_wheel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_paddle_wheel.BP_paddle_wheel_C.ExecuteUbergraph_BP_paddle_wheel
// 0x0118 (0x0118 - 0x0000)
struct BP_paddle_wheel_C_ExecuteUbergraph_BP_paddle_wheel final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_388D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_388E[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_AddLocalRotation_SweepHitResult;       // 0x0028(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_MakeRotator_Pitch_ImplicitCast;           // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_paddle_wheel_C_ExecuteUbergraph_BP_paddle_wheel) == 0x000008, "Wrong alignment on BP_paddle_wheel_C_ExecuteUbergraph_BP_paddle_wheel");
static_assert(sizeof(BP_paddle_wheel_C_ExecuteUbergraph_BP_paddle_wheel) == 0x000118, "Wrong size on BP_paddle_wheel_C_ExecuteUbergraph_BP_paddle_wheel");
static_assert(offsetof(BP_paddle_wheel_C_ExecuteUbergraph_BP_paddle_wheel, EntryPoint) == 0x000000, "Member 'BP_paddle_wheel_C_ExecuteUbergraph_BP_paddle_wheel::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_paddle_wheel_C_ExecuteUbergraph_BP_paddle_wheel, CallFunc_MakeRotator_ReturnValue) == 0x000008, "Member 'BP_paddle_wheel_C_ExecuteUbergraph_BP_paddle_wheel::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_paddle_wheel_C_ExecuteUbergraph_BP_paddle_wheel, K2Node_Event_DeltaSeconds) == 0x000020, "Member 'BP_paddle_wheel_C_ExecuteUbergraph_BP_paddle_wheel::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_paddle_wheel_C_ExecuteUbergraph_BP_paddle_wheel, CallFunc_K2_AddLocalRotation_SweepHitResult) == 0x000028, "Member 'BP_paddle_wheel_C_ExecuteUbergraph_BP_paddle_wheel::CallFunc_K2_AddLocalRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_paddle_wheel_C_ExecuteUbergraph_BP_paddle_wheel, CallFunc_MakeRotator_Pitch_ImplicitCast) == 0x000110, "Member 'BP_paddle_wheel_C_ExecuteUbergraph_BP_paddle_wheel::CallFunc_MakeRotator_Pitch_ImplicitCast' has a wrong offset!");

// Function BP_paddle_wheel.BP_paddle_wheel_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_paddle_wheel_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_paddle_wheel_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_paddle_wheel_C_ReceiveTick");
static_assert(sizeof(BP_paddle_wheel_C_ReceiveTick) == 0x000004, "Wrong size on BP_paddle_wheel_C_ReceiveTick");
static_assert(offsetof(BP_paddle_wheel_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_paddle_wheel_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

