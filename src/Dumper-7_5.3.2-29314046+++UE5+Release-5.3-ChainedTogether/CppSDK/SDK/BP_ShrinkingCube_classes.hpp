#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ShrinkingCube

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ShrinkingCube.BP_ShrinkingCube_C
// 0x0048 (0x02E0 - 0x0298)
class ABP_ShrinkingCube_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UC_TickOptimizer_C*                     C_TickOptimizer;                                   // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube;                                              // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_NewTrack_0_46B5AFDF4287658275C1C7A2792968DA; // 0x02C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline__Direction_46B5AFDF4287658275C1C7A2792968DA; // 0x02C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C64[0x3];                                     // 0x02C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline;                                          // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          A;                                                 // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_3C65[0x3];                                     // 0x02D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RepPosition;                                       // 0x02D4(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	double                                        MaxHeight;                                         // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void CustomEvent();
	void ExecuteUbergraph_BP_ShrinkingCube(int32 EntryPoint);
	void OnRep_RepPosition();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ShrinkingCube_C">();
	}
	static class ABP_ShrinkingCube_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ShrinkingCube_C>();
	}
};
static_assert(alignof(ABP_ShrinkingCube_C) == 0x000008, "Wrong alignment on ABP_ShrinkingCube_C");
static_assert(sizeof(ABP_ShrinkingCube_C) == 0x0002E0, "Wrong size on ABP_ShrinkingCube_C");
static_assert(offsetof(ABP_ShrinkingCube_C, UberGraphFrame) == 0x000298, "Member 'ABP_ShrinkingCube_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ShrinkingCube_C, C_TickOptimizer) == 0x0002A0, "Member 'ABP_ShrinkingCube_C::C_TickOptimizer' has a wrong offset!");
static_assert(offsetof(ABP_ShrinkingCube_C, Cube) == 0x0002A8, "Member 'ABP_ShrinkingCube_C::Cube' has a wrong offset!");
static_assert(offsetof(ABP_ShrinkingCube_C, StaticMesh) == 0x0002B0, "Member 'ABP_ShrinkingCube_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_ShrinkingCube_C, DefaultSceneRoot) == 0x0002B8, "Member 'ABP_ShrinkingCube_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_ShrinkingCube_C, Timeline_NewTrack_0_46B5AFDF4287658275C1C7A2792968DA) == 0x0002C0, "Member 'ABP_ShrinkingCube_C::Timeline_NewTrack_0_46B5AFDF4287658275C1C7A2792968DA' has a wrong offset!");
static_assert(offsetof(ABP_ShrinkingCube_C, Timeline__Direction_46B5AFDF4287658275C1C7A2792968DA) == 0x0002C4, "Member 'ABP_ShrinkingCube_C::Timeline__Direction_46B5AFDF4287658275C1C7A2792968DA' has a wrong offset!");
static_assert(offsetof(ABP_ShrinkingCube_C, Timeline) == 0x0002C8, "Member 'ABP_ShrinkingCube_C::Timeline' has a wrong offset!");
static_assert(offsetof(ABP_ShrinkingCube_C, A) == 0x0002D0, "Member 'ABP_ShrinkingCube_C::A' has a wrong offset!");
static_assert(offsetof(ABP_ShrinkingCube_C, RepPosition) == 0x0002D4, "Member 'ABP_ShrinkingCube_C::RepPosition' has a wrong offset!");
static_assert(offsetof(ABP_ShrinkingCube_C, MaxHeight) == 0x0002D8, "Member 'ABP_ShrinkingCube_C::MaxHeight' has a wrong offset!");

}

