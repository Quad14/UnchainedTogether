#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Devil_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Devil_Poses_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "Devil_AnimBP_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Devil_AnimBP.Devil_AnimBP_C
// 0x0890 (0x0BE0 - 0x0350)
class UDevil_AnimBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_37BA[0x8];                                     // 0x0348(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct Devil_AnimBP::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0358(0x0002)(HasGetValueTypeHash)
	uint8                                         Pad_37BB[0x6];                                     // 0x035A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0360(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0368(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0370(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_7;                    // 0x0390(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x03D8(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_3;                      // 0x03F8(0x00C8)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;                     // 0x04C0(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;                    // 0x0508(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x0550(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_2;                      // 0x0570(0x00C8)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0638(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x0660(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x06A8(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x06C8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0710(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x0730(0x00C8)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x07F8(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x0820(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0868(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0888(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x08D0(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x08F0(0x00C8)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x09B8(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x09D8(0x0128)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0B00(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0B20(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0B68(0x0048)()
	bool                                          IsInAir_;                                          // 0x0BB0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37BC[0x7];                                     // 0x0BB1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Speed;                                             // 0x0BB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDevil_Poses                                  Pose;                                              // 0x0BC0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37BD[0x7];                                     // 0x0BC1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Scale_Z;                                           // 0x0BC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDevil_Poses                                  PreviousPose;                                      // 0x0BD0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Transitioning;                                     // 0x0BD1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Devil_AnimBP_AnimGraphNode_TransitionResult_6BB1057B4E10670DF2FF94AF82340FD1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Devil_AnimBP_AnimGraphNode_TransitionResult_771E2BEC41B3F7D4237581918C2CC989();
	void ExecuteUbergraph_Devil_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Devil_AnimBP_C">();
	}
	static class UDevil_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevil_AnimBP_C>();
	}
};
static_assert(alignof(UDevil_AnimBP_C) == 0x000010, "Wrong alignment on UDevil_AnimBP_C");
static_assert(sizeof(UDevil_AnimBP_C) == 0x000BE0, "Wrong size on UDevil_AnimBP_C");
static_assert(offsetof(UDevil_AnimBP_C, UberGraphFrame) == 0x000350, "Member 'UDevil_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDevil_AnimBP_C, __AnimBlueprintMutables) == 0x000358, "Member 'UDevil_AnimBP_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UDevil_AnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x000360, "Member 'UDevil_AnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UDevil_AnimBP_C, AnimBlueprintExtension_Base) == 0x000368, "Member 'UDevil_AnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UDevil_AnimBP_C, AnimGraphNode_Root) == 0x000370, "Member 'UDevil_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UDevil_AnimBP_C, AnimGraphNode_SequencePlayer_7) == 0x000390, "Member 'UDevil_AnimBP_C::AnimGraphNode_SequencePlayer_7' has a wrong offset!");
static_assert(offsetof(UDevil_AnimBP_C, AnimGraphNode_StateResult_5) == 0x0003D8, "Member 'UDevil_AnimBP_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UDevil_AnimBP_C, AnimGraphNode_StateMachine_3) == 0x0003F8, "Member 'UDevil_AnimBP_C::AnimGraphNode_StateMachine_3' has a wrong offset!");
static_assert(offsetof(UDevil_AnimBP_C, AnimGraphNode_BlendListByEnum) == 0x0004C0, "Member 'UDevil_AnimBP_C::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(UDevil_AnimBP_C, AnimGraphNode_SequencePlayer_6) == 0x000508, "Member 'UDevil_AnimBP_C::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(UDevil_AnimBP_C, AnimGraphNode_StateResult_4) == 0x000550, "Member 'UDevil_AnimBP_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UDevil_AnimBP_C, AnimGraphNode_StateMachine_2) == 0x000570, "Member 'UDevil_AnimBP_C::AnimGraphNode_StateMachine_2' has a wrong offset!");
static_assert(offsetof(UDevil_AnimBP_C, AnimGraphNode_TransitionResult_1) == 0x000638, "Member 'UDevil_AnimBP_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UDevil_AnimBP_C, AnimGraphNode_SequencePlayer_5) == 0x000660, "Member 'UDevil_AnimBP_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UDevil_AnimBP_C, AnimGraphNode_StateResult_3) == 0x0006A8, "Member 'UDevil_AnimBP_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UDevil_AnimBP_C, AnimGraphNode_SequencePlayer_4) == 0x0006C8, "Member 'UDevil_AnimBP_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UDevil_AnimBP_C, AnimGraphNode_StateResult_2) == 0x000710, "Member 'UDevil_AnimBP_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UDevil_AnimBP_C, AnimGraphNode_StateMachine_1) == 0x000730, "Member 'UDevil_AnimBP_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UDevil_AnimBP_C, AnimGraphNode_TransitionResult) == 0x0007F8, "Member 'UDevil_AnimBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UDevil_AnimBP_C, AnimGraphNode_SequencePlayer_3) == 0x000820, "Member 'UDevil_AnimBP_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UDevil_AnimBP_C, AnimGraphNode_StateResult_1) == 0x000868, "Member 'UDevil_AnimBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UDevil_AnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x000888, "Member 'UDevil_AnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UDevil_AnimBP_C, AnimGraphNode_StateResult) == 0x0008D0, "Member 'UDevil_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UDevil_AnimBP_C, AnimGraphNode_StateMachine) == 0x0008F0, "Member 'UDevil_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UDevil_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x0009B8, "Member 'UDevil_AnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UDevil_AnimBP_C, AnimGraphNode_ModifyBone) == 0x0009D8, "Member 'UDevil_AnimBP_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UDevil_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x000B00, "Member 'UDevil_AnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UDevil_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x000B20, "Member 'UDevil_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UDevil_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x000B68, "Member 'UDevil_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UDevil_AnimBP_C, IsInAir_) == 0x000BB0, "Member 'UDevil_AnimBP_C::IsInAir_' has a wrong offset!");
static_assert(offsetof(UDevil_AnimBP_C, Speed) == 0x000BB8, "Member 'UDevil_AnimBP_C::Speed' has a wrong offset!");
static_assert(offsetof(UDevil_AnimBP_C, Pose) == 0x000BC0, "Member 'UDevil_AnimBP_C::Pose' has a wrong offset!");
static_assert(offsetof(UDevil_AnimBP_C, Scale_Z) == 0x000BC8, "Member 'UDevil_AnimBP_C::Scale_Z' has a wrong offset!");
static_assert(offsetof(UDevil_AnimBP_C, PreviousPose) == 0x000BD0, "Member 'UDevil_AnimBP_C::PreviousPose' has a wrong offset!");
static_assert(offsetof(UDevil_AnimBP_C, Transitioning) == 0x000BD1, "Member 'UDevil_AnimBP_C::Transitioning' has a wrong offset!");

}

