#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MovingDecaler_BPC

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function MovingDecaler_BPC.MovingDecaler_BPC_C.ExecuteUbergraph_MovingDecaler_BPC
// 0x0140 (0x0140 - 0x0000)
struct MovingDecaler_BPC_C_ExecuteUbergraph_MovingDecaler_BPC final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetPlaybackPosition_ReturnValue;          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3394[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3395[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0040(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3396[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPlaybackPosition_NewPosition_ImplicitCast; // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MovingDecaler_BPC_C_ExecuteUbergraph_MovingDecaler_BPC) == 0x000008, "Wrong alignment on MovingDecaler_BPC_C_ExecuteUbergraph_MovingDecaler_BPC");
static_assert(sizeof(MovingDecaler_BPC_C_ExecuteUbergraph_MovingDecaler_BPC) == 0x000140, "Wrong size on MovingDecaler_BPC_C_ExecuteUbergraph_MovingDecaler_BPC");
static_assert(offsetof(MovingDecaler_BPC_C_ExecuteUbergraph_MovingDecaler_BPC, EntryPoint) == 0x000000, "Member 'MovingDecaler_BPC_C_ExecuteUbergraph_MovingDecaler_BPC::EntryPoint' has a wrong offset!");
static_assert(offsetof(MovingDecaler_BPC_C_ExecuteUbergraph_MovingDecaler_BPC, CallFunc_GetPlaybackPosition_ReturnValue) == 0x000004, "Member 'MovingDecaler_BPC_C_ExecuteUbergraph_MovingDecaler_BPC::CallFunc_GetPlaybackPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(MovingDecaler_BPC_C_ExecuteUbergraph_MovingDecaler_BPC, CallFunc_HasAuthority_ReturnValue) == 0x000008, "Member 'MovingDecaler_BPC_C_ExecuteUbergraph_MovingDecaler_BPC::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(MovingDecaler_BPC_C_ExecuteUbergraph_MovingDecaler_BPC, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'MovingDecaler_BPC_C_ExecuteUbergraph_MovingDecaler_BPC::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MovingDecaler_BPC_C_ExecuteUbergraph_MovingDecaler_BPC, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000020, "Member 'MovingDecaler_BPC_C_ExecuteUbergraph_MovingDecaler_BPC::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(MovingDecaler_BPC_C_ExecuteUbergraph_MovingDecaler_BPC, CallFunc_VLerp_ReturnValue) == 0x000028, "Member 'MovingDecaler_BPC_C_ExecuteUbergraph_MovingDecaler_BPC::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(MovingDecaler_BPC_C_ExecuteUbergraph_MovingDecaler_BPC, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000040, "Member 'MovingDecaler_BPC_C_ExecuteUbergraph_MovingDecaler_BPC::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(MovingDecaler_BPC_C_ExecuteUbergraph_MovingDecaler_BPC, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000128, "Member 'MovingDecaler_BPC_C_ExecuteUbergraph_MovingDecaler_BPC::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MovingDecaler_BPC_C_ExecuteUbergraph_MovingDecaler_BPC, CallFunc_SelectFloat_ReturnValue) == 0x000130, "Member 'MovingDecaler_BPC_C_ExecuteUbergraph_MovingDecaler_BPC::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MovingDecaler_BPC_C_ExecuteUbergraph_MovingDecaler_BPC, CallFunc_SetPlaybackPosition_NewPosition_ImplicitCast) == 0x000138, "Member 'MovingDecaler_BPC_C_ExecuteUbergraph_MovingDecaler_BPC::CallFunc_SetPlaybackPosition_NewPosition_ImplicitCast' has a wrong offset!");

// Function MovingDecaler_BPC.MovingDecaler_BPC_C.OnRep_playbackpos
// 0x0001 (0x0001 - 0x0000)
struct MovingDecaler_BPC_C_OnRep_playbackpos final
{
public:
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MovingDecaler_BPC_C_OnRep_playbackpos) == 0x000001, "Wrong alignment on MovingDecaler_BPC_C_OnRep_playbackpos");
static_assert(sizeof(MovingDecaler_BPC_C_OnRep_playbackpos) == 0x000001, "Wrong size on MovingDecaler_BPC_C_OnRep_playbackpos");
static_assert(offsetof(MovingDecaler_BPC_C_OnRep_playbackpos, CallFunc_HasAuthority_ReturnValue) == 0x000000, "Member 'MovingDecaler_BPC_C_OnRep_playbackpos::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");

// Function MovingDecaler_BPC.MovingDecaler_BPC_C.UserConstructionScript
// 0x0030 (0x0030 - 0x0000)
struct MovingDecaler_BPC_C_UserConstructionScript final
{
public:
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MovingDecaler_BPC_C_UserConstructionScript) == 0x000008, "Wrong alignment on MovingDecaler_BPC_C_UserConstructionScript");
static_assert(sizeof(MovingDecaler_BPC_C_UserConstructionScript) == 0x000030, "Wrong size on MovingDecaler_BPC_C_UserConstructionScript");
static_assert(offsetof(MovingDecaler_BPC_C_UserConstructionScript, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000000, "Member 'MovingDecaler_BPC_C_UserConstructionScript::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MovingDecaler_BPC_C_UserConstructionScript, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x000018, "Member 'MovingDecaler_BPC_C_UserConstructionScript::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");

}

