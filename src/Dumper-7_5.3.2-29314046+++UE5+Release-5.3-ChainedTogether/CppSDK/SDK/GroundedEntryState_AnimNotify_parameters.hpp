#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GroundedEntryState_AnimNotify

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GroundedEntryState_AnimNotify.GroundedEntryState_AnimNotify_C.GetNotifyName
// 0x0030 (0x0030 - 0x0000)
struct GroundedEntryState_AnimNotify_C_GetNotifyName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(GroundedEntryState_AnimNotify_C_GetNotifyName) == 0x000008, "Wrong alignment on GroundedEntryState_AnimNotify_C_GetNotifyName");
static_assert(sizeof(GroundedEntryState_AnimNotify_C_GetNotifyName) == 0x000030, "Wrong size on GroundedEntryState_AnimNotify_C_GetNotifyName");
static_assert(offsetof(GroundedEntryState_AnimNotify_C_GetNotifyName, ReturnValue) == 0x000000, "Member 'GroundedEntryState_AnimNotify_C_GetNotifyName::ReturnValue' has a wrong offset!");
static_assert(offsetof(GroundedEntryState_AnimNotify_C_GetNotifyName, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000010, "Member 'GroundedEntryState_AnimNotify_C_GetNotifyName::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GroundedEntryState_AnimNotify_C_GetNotifyName, CallFunc_Concat_StrStr_ReturnValue) == 0x000020, "Member 'GroundedEntryState_AnimNotify_C_GetNotifyName::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");

// Function GroundedEntryState_AnimNotify.GroundedEntryState_AnimNotify_C.Received_Notify
// 0x0068 (0x0068 - 0x0000)
struct GroundedEntryState_AnimNotify_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAnimNotifyEventReference              EventReference;                                    // 0x0010(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2ECD[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IALS_Animation_BPI_C>  K2Node_DynamicCast_AsALS_Animation_BPI;            // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GroundedEntryState_AnimNotify_C_Received_Notify) == 0x000008, "Wrong alignment on GroundedEntryState_AnimNotify_C_Received_Notify");
static_assert(sizeof(GroundedEntryState_AnimNotify_C_Received_Notify) == 0x000068, "Wrong size on GroundedEntryState_AnimNotify_C_Received_Notify");
static_assert(offsetof(GroundedEntryState_AnimNotify_C_Received_Notify, MeshComp) == 0x000000, "Member 'GroundedEntryState_AnimNotify_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(GroundedEntryState_AnimNotify_C_Received_Notify, Animation) == 0x000008, "Member 'GroundedEntryState_AnimNotify_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(GroundedEntryState_AnimNotify_C_Received_Notify, EventReference) == 0x000010, "Member 'GroundedEntryState_AnimNotify_C_Received_Notify::EventReference' has a wrong offset!");
static_assert(offsetof(GroundedEntryState_AnimNotify_C_Received_Notify, ReturnValue) == 0x000040, "Member 'GroundedEntryState_AnimNotify_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(GroundedEntryState_AnimNotify_C_Received_Notify, CallFunc_GetAnimInstance_ReturnValue) == 0x000048, "Member 'GroundedEntryState_AnimNotify_C_Received_Notify::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(GroundedEntryState_AnimNotify_C_Received_Notify, K2Node_DynamicCast_AsALS_Animation_BPI) == 0x000050, "Member 'GroundedEntryState_AnimNotify_C_Received_Notify::K2Node_DynamicCast_AsALS_Animation_BPI' has a wrong offset!");
static_assert(offsetof(GroundedEntryState_AnimNotify_C_Received_Notify, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'GroundedEntryState_AnimNotify_C_Received_Notify::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

