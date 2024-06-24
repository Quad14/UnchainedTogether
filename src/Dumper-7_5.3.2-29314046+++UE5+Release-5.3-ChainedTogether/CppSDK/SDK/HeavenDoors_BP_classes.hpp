#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HeavenDoors_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass HeavenDoors_BP.HeavenDoors_BP_C
// 0x0058 (0x02F0 - 0x0298)
class AHeavenDoors_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UC_TickOptimizer_C*                     C_TickOptimizer;                                   // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   HeavensDoor1;                                      // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        RightDoorRoot;                                     // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   HeavensDoor;                                       // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        LeftDoorRoot;                                      // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_1EFC8287417F120BF0B131B933D0B342; // 0x02D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_1EFC8287417F120BF0B131B933D0B342; // 0x02DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B24[0x3];                                     // 0x02DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Open;                                              // 0x02E8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__HeavenDoors_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_HeavenDoors_BP(int32 EntryPoint);
	void OnRep_Open();
	void OpenDoors();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HeavenDoors_BP_C">();
	}
	static class AHeavenDoors_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AHeavenDoors_BP_C>();
	}
};
static_assert(alignof(AHeavenDoors_BP_C) == 0x000008, "Wrong alignment on AHeavenDoors_BP_C");
static_assert(sizeof(AHeavenDoors_BP_C) == 0x0002F0, "Wrong size on AHeavenDoors_BP_C");
static_assert(offsetof(AHeavenDoors_BP_C, UberGraphFrame) == 0x000298, "Member 'AHeavenDoors_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AHeavenDoors_BP_C, C_TickOptimizer) == 0x0002A0, "Member 'AHeavenDoors_BP_C::C_TickOptimizer' has a wrong offset!");
static_assert(offsetof(AHeavenDoors_BP_C, Box) == 0x0002A8, "Member 'AHeavenDoors_BP_C::Box' has a wrong offset!");
static_assert(offsetof(AHeavenDoors_BP_C, HeavensDoor1) == 0x0002B0, "Member 'AHeavenDoors_BP_C::HeavensDoor1' has a wrong offset!");
static_assert(offsetof(AHeavenDoors_BP_C, RightDoorRoot) == 0x0002B8, "Member 'AHeavenDoors_BP_C::RightDoorRoot' has a wrong offset!");
static_assert(offsetof(AHeavenDoors_BP_C, HeavensDoor) == 0x0002C0, "Member 'AHeavenDoors_BP_C::HeavensDoor' has a wrong offset!");
static_assert(offsetof(AHeavenDoors_BP_C, LeftDoorRoot) == 0x0002C8, "Member 'AHeavenDoors_BP_C::LeftDoorRoot' has a wrong offset!");
static_assert(offsetof(AHeavenDoors_BP_C, DefaultSceneRoot) == 0x0002D0, "Member 'AHeavenDoors_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AHeavenDoors_BP_C, Timeline_0_NewTrack_0_1EFC8287417F120BF0B131B933D0B342) == 0x0002D8, "Member 'AHeavenDoors_BP_C::Timeline_0_NewTrack_0_1EFC8287417F120BF0B131B933D0B342' has a wrong offset!");
static_assert(offsetof(AHeavenDoors_BP_C, Timeline_0__Direction_1EFC8287417F120BF0B131B933D0B342) == 0x0002DC, "Member 'AHeavenDoors_BP_C::Timeline_0__Direction_1EFC8287417F120BF0B131B933D0B342' has a wrong offset!");
static_assert(offsetof(AHeavenDoors_BP_C, Timeline_0) == 0x0002E0, "Member 'AHeavenDoors_BP_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(AHeavenDoors_BP_C, Open) == 0x0002E8, "Member 'AHeavenDoors_BP_C::Open' has a wrong offset!");

}

