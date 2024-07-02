#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WayWall_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WayWall_BP.WayWall_BP_C.ExecuteUbergraph_WayWall_BP
// 0x0170 (0x0170 - 0x0000)
struct WayWall_BP_C_ExecuteUbergraph_WayWall_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3802[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3803[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_UpdateSpeedByPlayersNumber_ReturnSpeed;   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0080(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3804[0x3];                                     // 0x0169(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetPlayRate_NewRate_ImplicitCast;         // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WayWall_BP_C_ExecuteUbergraph_WayWall_BP) == 0x000008, "Wrong alignment on WayWall_BP_C_ExecuteUbergraph_WayWall_BP");
static_assert(sizeof(WayWall_BP_C_ExecuteUbergraph_WayWall_BP) == 0x000170, "Wrong size on WayWall_BP_C_ExecuteUbergraph_WayWall_BP");
static_assert(offsetof(WayWall_BP_C_ExecuteUbergraph_WayWall_BP, EntryPoint) == 0x000000, "Member 'WayWall_BP_C_ExecuteUbergraph_WayWall_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(WayWall_BP_C_ExecuteUbergraph_WayWall_BP, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000008, "Member 'WayWall_BP_C_ExecuteUbergraph_WayWall_BP::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WayWall_BP_C_ExecuteUbergraph_WayWall_BP, CallFunc_K2_SetActorRotation_ReturnValue) == 0x000020, "Member 'WayWall_BP_C_ExecuteUbergraph_WayWall_BP::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WayWall_BP_C_ExecuteUbergraph_WayWall_BP, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000028, "Member 'WayWall_BP_C_ExecuteUbergraph_WayWall_BP::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WayWall_BP_C_ExecuteUbergraph_WayWall_BP, CallFunc_UpdateSpeedByPlayersNumber_ReturnSpeed) == 0x000030, "Member 'WayWall_BP_C_ExecuteUbergraph_WayWall_BP::CallFunc_UpdateSpeedByPlayersNumber_ReturnSpeed' has a wrong offset!");
static_assert(offsetof(WayWall_BP_C_ExecuteUbergraph_WayWall_BP, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000038, "Member 'WayWall_BP_C_ExecuteUbergraph_WayWall_BP::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WayWall_BP_C_ExecuteUbergraph_WayWall_BP, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x000050, "Member 'WayWall_BP_C_ExecuteUbergraph_WayWall_BP::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WayWall_BP_C_ExecuteUbergraph_WayWall_BP, CallFunc_VLerp_ReturnValue) == 0x000068, "Member 'WayWall_BP_C_ExecuteUbergraph_WayWall_BP::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WayWall_BP_C_ExecuteUbergraph_WayWall_BP, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000080, "Member 'WayWall_BP_C_ExecuteUbergraph_WayWall_BP::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(WayWall_BP_C_ExecuteUbergraph_WayWall_BP, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000168, "Member 'WayWall_BP_C_ExecuteUbergraph_WayWall_BP::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WayWall_BP_C_ExecuteUbergraph_WayWall_BP, CallFunc_SetPlayRate_NewRate_ImplicitCast) == 0x00016C, "Member 'WayWall_BP_C_ExecuteUbergraph_WayWall_BP::CallFunc_SetPlayRate_NewRate_ImplicitCast' has a wrong offset!");

}

