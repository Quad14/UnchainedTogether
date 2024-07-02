#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MoveUpDown

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MoveUpDown.BP_MoveUpDown_C
// 0x0068 (0x0300 - 0x0298)
class ABP_MoveUpDown_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   SM_End;                                            // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Start;                                          // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_NewTrack_0_192106004CD26206B5ADAF81BB77F6F5; // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline__Direction_192106004CD26206B5ADAF81BB77F6F5; // 0x02BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FD[0x3];                                      // 0x02BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline;                                          // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                StartLoc;                                          // 0x02C8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                EndLoc;                                            // 0x02E0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimelinePos;                                       // 0x02F8(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                          Inverse;                                           // 0x02FC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void CustomEvent();
	void ExecuteUbergraph_BP_MoveUpDown(int32 EntryPoint);
	void OnRep_TimelinePos();
	void ReceiveBeginPlay();
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MoveUpDown_C">();
	}
	static class ABP_MoveUpDown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MoveUpDown_C>();
	}
};
static_assert(alignof(ABP_MoveUpDown_C) == 0x000008, "Wrong alignment on ABP_MoveUpDown_C");
static_assert(sizeof(ABP_MoveUpDown_C) == 0x000300, "Wrong size on ABP_MoveUpDown_C");
static_assert(offsetof(ABP_MoveUpDown_C, UberGraphFrame) == 0x000298, "Member 'ABP_MoveUpDown_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MoveUpDown_C, SM_End) == 0x0002A0, "Member 'ABP_MoveUpDown_C::SM_End' has a wrong offset!");
static_assert(offsetof(ABP_MoveUpDown_C, SM_Start) == 0x0002A8, "Member 'ABP_MoveUpDown_C::SM_Start' has a wrong offset!");
static_assert(offsetof(ABP_MoveUpDown_C, DefaultSceneRoot) == 0x0002B0, "Member 'ABP_MoveUpDown_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_MoveUpDown_C, Timeline_NewTrack_0_192106004CD26206B5ADAF81BB77F6F5) == 0x0002B8, "Member 'ABP_MoveUpDown_C::Timeline_NewTrack_0_192106004CD26206B5ADAF81BB77F6F5' has a wrong offset!");
static_assert(offsetof(ABP_MoveUpDown_C, Timeline__Direction_192106004CD26206B5ADAF81BB77F6F5) == 0x0002BC, "Member 'ABP_MoveUpDown_C::Timeline__Direction_192106004CD26206B5ADAF81BB77F6F5' has a wrong offset!");
static_assert(offsetof(ABP_MoveUpDown_C, Timeline) == 0x0002C0, "Member 'ABP_MoveUpDown_C::Timeline' has a wrong offset!");
static_assert(offsetof(ABP_MoveUpDown_C, StartLoc) == 0x0002C8, "Member 'ABP_MoveUpDown_C::StartLoc' has a wrong offset!");
static_assert(offsetof(ABP_MoveUpDown_C, EndLoc) == 0x0002E0, "Member 'ABP_MoveUpDown_C::EndLoc' has a wrong offset!");
static_assert(offsetof(ABP_MoveUpDown_C, TimelinePos) == 0x0002F8, "Member 'ABP_MoveUpDown_C::TimelinePos' has a wrong offset!");
static_assert(offsetof(ABP_MoveUpDown_C, Inverse) == 0x0002FC, "Member 'ABP_MoveUpDown_C::Inverse' has a wrong offset!");

}

