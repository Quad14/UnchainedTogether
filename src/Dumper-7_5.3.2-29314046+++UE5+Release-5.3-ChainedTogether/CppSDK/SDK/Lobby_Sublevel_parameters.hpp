#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lobby_Sublevel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Lobby_Sublevel.Lobby_Sublevel_C.ExecuteUbergraph_Lobby_Sublevel
// 0x0148 (0x0148 - 0x0000)
struct Lobby_Sublevel_C_ExecuteUbergraph_Lobby_Sublevel final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A41[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0058(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A42[0x3];                                     // 0x0141(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetPlayRate_NewRate_ImplicitCast;         // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Lobby_Sublevel_C_ExecuteUbergraph_Lobby_Sublevel) == 0x000008, "Wrong alignment on Lobby_Sublevel_C_ExecuteUbergraph_Lobby_Sublevel");
static_assert(sizeof(Lobby_Sublevel_C_ExecuteUbergraph_Lobby_Sublevel) == 0x000148, "Wrong size on Lobby_Sublevel_C_ExecuteUbergraph_Lobby_Sublevel");
static_assert(offsetof(Lobby_Sublevel_C_ExecuteUbergraph_Lobby_Sublevel, EntryPoint) == 0x000000, "Member 'Lobby_Sublevel_C_ExecuteUbergraph_Lobby_Sublevel::EntryPoint' has a wrong offset!");
static_assert(offsetof(Lobby_Sublevel_C_ExecuteUbergraph_Lobby_Sublevel, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'Lobby_Sublevel_C_ExecuteUbergraph_Lobby_Sublevel::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_Sublevel_C_ExecuteUbergraph_Lobby_Sublevel, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000020, "Member 'Lobby_Sublevel_C_ExecuteUbergraph_Lobby_Sublevel::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_Sublevel_C_ExecuteUbergraph_Lobby_Sublevel, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000028, "Member 'Lobby_Sublevel_C_ExecuteUbergraph_Lobby_Sublevel::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Lobby_Sublevel_C_ExecuteUbergraph_Lobby_Sublevel, CallFunc_VLerp_ReturnValue) == 0x000040, "Member 'Lobby_Sublevel_C_ExecuteUbergraph_Lobby_Sublevel::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_Sublevel_C_ExecuteUbergraph_Lobby_Sublevel, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000058, "Member 'Lobby_Sublevel_C_ExecuteUbergraph_Lobby_Sublevel::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(Lobby_Sublevel_C_ExecuteUbergraph_Lobby_Sublevel, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000140, "Member 'Lobby_Sublevel_C_ExecuteUbergraph_Lobby_Sublevel::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_Sublevel_C_ExecuteUbergraph_Lobby_Sublevel, CallFunc_SetPlayRate_NewRate_ImplicitCast) == 0x000144, "Member 'Lobby_Sublevel_C_ExecuteUbergraph_Lobby_Sublevel::CallFunc_SetPlayRate_NewRate_ImplicitCast' has a wrong offset!");

}

