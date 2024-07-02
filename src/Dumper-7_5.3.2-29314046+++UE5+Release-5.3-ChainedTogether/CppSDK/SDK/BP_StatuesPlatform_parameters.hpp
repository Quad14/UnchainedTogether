#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_StatuesPlatform

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_StatuesPlatform.BP_StatuesPlatform_C.ExecuteUbergraph_BP_StatuesPlatform
// 0x0110 (0x0110 - 0x0000)
struct BP_StatuesPlatform_C_ExecuteUbergraph_BP_StatuesPlatform final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A8B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A8C[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0028(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_StatuesPlatform_C_ExecuteUbergraph_BP_StatuesPlatform) == 0x000008, "Wrong alignment on BP_StatuesPlatform_C_ExecuteUbergraph_BP_StatuesPlatform");
static_assert(sizeof(BP_StatuesPlatform_C_ExecuteUbergraph_BP_StatuesPlatform) == 0x000110, "Wrong size on BP_StatuesPlatform_C_ExecuteUbergraph_BP_StatuesPlatform");
static_assert(offsetof(BP_StatuesPlatform_C_ExecuteUbergraph_BP_StatuesPlatform, EntryPoint) == 0x000000, "Member 'BP_StatuesPlatform_C_ExecuteUbergraph_BP_StatuesPlatform::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_StatuesPlatform_C_ExecuteUbergraph_BP_StatuesPlatform, CallFunc_VLerp_ReturnValue) == 0x000008, "Member 'BP_StatuesPlatform_C_ExecuteUbergraph_BP_StatuesPlatform::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_StatuesPlatform_C_ExecuteUbergraph_BP_StatuesPlatform, CallFunc_HasAuthority_ReturnValue) == 0x000020, "Member 'BP_StatuesPlatform_C_ExecuteUbergraph_BP_StatuesPlatform::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_StatuesPlatform_C_ExecuteUbergraph_BP_StatuesPlatform, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000028, "Member 'BP_StatuesPlatform_C_ExecuteUbergraph_BP_StatuesPlatform::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");

// Function BP_StatuesPlatform.BP_StatuesPlatform_C.IsActivated
// 0x0001 (0x0001 - 0x0000)
struct BP_StatuesPlatform_C_IsActivated final
{
public:
	bool                                          Activated;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_StatuesPlatform_C_IsActivated) == 0x000001, "Wrong alignment on BP_StatuesPlatform_C_IsActivated");
static_assert(sizeof(BP_StatuesPlatform_C_IsActivated) == 0x000001, "Wrong size on BP_StatuesPlatform_C_IsActivated");
static_assert(offsetof(BP_StatuesPlatform_C_IsActivated, Activated) == 0x000000, "Member 'BP_StatuesPlatform_C_IsActivated::Activated' has a wrong offset!");

}

