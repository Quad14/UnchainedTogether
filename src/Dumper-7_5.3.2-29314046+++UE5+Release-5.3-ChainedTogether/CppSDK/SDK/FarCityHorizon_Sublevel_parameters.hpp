#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FarCityHorizon_Sublevel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function FarCityHorizon_Sublevel.FarCityHorizon_Sublevel_C.ExecuteUbergraph_FarCityHorizon_Sublevel
// 0x0128 (0x0128 - 0x0000)
struct FarCityHorizon_Sublevel_C_ExecuteUbergraph_FarCityHorizon_Sublevel final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37DA[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37DB[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37DC[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0038(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FarCityHorizon_Sublevel_C_ExecuteUbergraph_FarCityHorizon_Sublevel) == 0x000008, "Wrong alignment on FarCityHorizon_Sublevel_C_ExecuteUbergraph_FarCityHorizon_Sublevel");
static_assert(sizeof(FarCityHorizon_Sublevel_C_ExecuteUbergraph_FarCityHorizon_Sublevel) == 0x000128, "Wrong size on FarCityHorizon_Sublevel_C_ExecuteUbergraph_FarCityHorizon_Sublevel");
static_assert(offsetof(FarCityHorizon_Sublevel_C_ExecuteUbergraph_FarCityHorizon_Sublevel, EntryPoint) == 0x000000, "Member 'FarCityHorizon_Sublevel_C_ExecuteUbergraph_FarCityHorizon_Sublevel::EntryPoint' has a wrong offset!");
static_assert(offsetof(FarCityHorizon_Sublevel_C_ExecuteUbergraph_FarCityHorizon_Sublevel, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'FarCityHorizon_Sublevel_C_ExecuteUbergraph_FarCityHorizon_Sublevel::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FarCityHorizon_Sublevel_C_ExecuteUbergraph_FarCityHorizon_Sublevel, K2Node_Event_DeltaSeconds) == 0x000008, "Member 'FarCityHorizon_Sublevel_C_ExecuteUbergraph_FarCityHorizon_Sublevel::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(FarCityHorizon_Sublevel_C_ExecuteUbergraph_FarCityHorizon_Sublevel, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000010, "Member 'FarCityHorizon_Sublevel_C_ExecuteUbergraph_FarCityHorizon_Sublevel::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FarCityHorizon_Sublevel_C_ExecuteUbergraph_FarCityHorizon_Sublevel, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'FarCityHorizon_Sublevel_C_ExecuteUbergraph_FarCityHorizon_Sublevel::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(FarCityHorizon_Sublevel_C_ExecuteUbergraph_FarCityHorizon_Sublevel, CallFunc_IsValid_ReturnValue_1) == 0x000030, "Member 'FarCityHorizon_Sublevel_C_ExecuteUbergraph_FarCityHorizon_Sublevel::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FarCityHorizon_Sublevel_C_ExecuteUbergraph_FarCityHorizon_Sublevel, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000038, "Member 'FarCityHorizon_Sublevel_C_ExecuteUbergraph_FarCityHorizon_Sublevel::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(FarCityHorizon_Sublevel_C_ExecuteUbergraph_FarCityHorizon_Sublevel, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000120, "Member 'FarCityHorizon_Sublevel_C_ExecuteUbergraph_FarCityHorizon_Sublevel::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");

// Function FarCityHorizon_Sublevel.FarCityHorizon_Sublevel_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct FarCityHorizon_Sublevel_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FarCityHorizon_Sublevel_C_ReceiveTick) == 0x000004, "Wrong alignment on FarCityHorizon_Sublevel_C_ReceiveTick");
static_assert(sizeof(FarCityHorizon_Sublevel_C_ReceiveTick) == 0x000004, "Wrong size on FarCityHorizon_Sublevel_C_ReceiveTick");
static_assert(offsetof(FarCityHorizon_Sublevel_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'FarCityHorizon_Sublevel_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

