#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MetroDoor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MetroDoor.BP_MetroDoor_C
// 0x0038 (0x02D0 - 0x0298)
class ABP_MetroDoor_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UC_TickOptimizer_C*                     C_TickOptimizer;                                   // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_CorrugatedFence_01;                             // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_BA2013804E8CB5CB5E8903B93C852AB0; // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_BA2013804E8CB5CB5E8903B93C852AB0; // 0x02BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BA6[0x3];                                     // 0x02BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Open;                                              // 0x02C8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_MetroDoor(int32 EntryPoint);
	void IsActivated(bool* Activated);
	void OnRep_Open();
	void OpenTL();
	void Pushed();
	void Released();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MetroDoor_C">();
	}
	static class ABP_MetroDoor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MetroDoor_C>();
	}
};
static_assert(alignof(ABP_MetroDoor_C) == 0x000008, "Wrong alignment on ABP_MetroDoor_C");
static_assert(sizeof(ABP_MetroDoor_C) == 0x0002D0, "Wrong size on ABP_MetroDoor_C");
static_assert(offsetof(ABP_MetroDoor_C, UberGraphFrame) == 0x000298, "Member 'ABP_MetroDoor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MetroDoor_C, C_TickOptimizer) == 0x0002A0, "Member 'ABP_MetroDoor_C::C_TickOptimizer' has a wrong offset!");
static_assert(offsetof(ABP_MetroDoor_C, SM_CorrugatedFence_01) == 0x0002A8, "Member 'ABP_MetroDoor_C::SM_CorrugatedFence_01' has a wrong offset!");
static_assert(offsetof(ABP_MetroDoor_C, DefaultSceneRoot) == 0x0002B0, "Member 'ABP_MetroDoor_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_MetroDoor_C, Timeline_0_NewTrack_0_BA2013804E8CB5CB5E8903B93C852AB0) == 0x0002B8, "Member 'ABP_MetroDoor_C::Timeline_0_NewTrack_0_BA2013804E8CB5CB5E8903B93C852AB0' has a wrong offset!");
static_assert(offsetof(ABP_MetroDoor_C, Timeline_0__Direction_BA2013804E8CB5CB5E8903B93C852AB0) == 0x0002BC, "Member 'ABP_MetroDoor_C::Timeline_0__Direction_BA2013804E8CB5CB5E8903B93C852AB0' has a wrong offset!");
static_assert(offsetof(ABP_MetroDoor_C, Timeline_0) == 0x0002C0, "Member 'ABP_MetroDoor_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(ABP_MetroDoor_C, Open) == 0x0002C8, "Member 'ABP_MetroDoor_C::Open' has a wrong offset!");

}

