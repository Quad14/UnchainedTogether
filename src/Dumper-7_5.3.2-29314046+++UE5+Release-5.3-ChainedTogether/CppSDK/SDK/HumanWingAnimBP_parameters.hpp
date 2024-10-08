#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HumanWingAnimBP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function HumanWingAnimBP.HumanWingAnimBP_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct HumanWingAnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(HumanWingAnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on HumanWingAnimBP_C_AnimGraph");
static_assert(sizeof(HumanWingAnimBP_C_AnimGraph) == 0x000010, "Wrong size on HumanWingAnimBP_C_AnimGraph");
static_assert(offsetof(HumanWingAnimBP_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'HumanWingAnimBP_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function HumanWingAnimBP.HumanWingAnimBP_C.ExecuteUbergraph_HumanWingAnimBP
// 0x0030 (0x0030 - 0x0000)
struct HumanWingAnimBP_C_ExecuteUbergraph_HumanWingAnimBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAtLocation_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HumanWingAnimBP_C_ExecuteUbergraph_HumanWingAnimBP) == 0x000008, "Wrong alignment on HumanWingAnimBP_C_ExecuteUbergraph_HumanWingAnimBP");
static_assert(sizeof(HumanWingAnimBP_C_ExecuteUbergraph_HumanWingAnimBP) == 0x000030, "Wrong size on HumanWingAnimBP_C_ExecuteUbergraph_HumanWingAnimBP");
static_assert(offsetof(HumanWingAnimBP_C_ExecuteUbergraph_HumanWingAnimBP, EntryPoint) == 0x000000, "Member 'HumanWingAnimBP_C_ExecuteUbergraph_HumanWingAnimBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(HumanWingAnimBP_C_ExecuteUbergraph_HumanWingAnimBP, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000008, "Member 'HumanWingAnimBP_C_ExecuteUbergraph_HumanWingAnimBP::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(HumanWingAnimBP_C_ExecuteUbergraph_HumanWingAnimBP, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'HumanWingAnimBP_C_ExecuteUbergraph_HumanWingAnimBP::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(HumanWingAnimBP_C_ExecuteUbergraph_HumanWingAnimBP, CallFunc_SpawnSoundAtLocation_ReturnValue) == 0x000028, "Member 'HumanWingAnimBP_C_ExecuteUbergraph_HumanWingAnimBP::CallFunc_SpawnSoundAtLocation_ReturnValue' has a wrong offset!");

}

