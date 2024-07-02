#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SpawningBlock

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SpawningBlock.BP_SpawningBlock_C
// 0x0058 (0x02F0 - 0x0298)
class ABP_SpawningBlock_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube;                                              // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_NewTrack_0_83F60F0F443475D0FA3B7AA6539929A9; // 0x02C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline__Direction_83F60F0F443475D0FA3B7AA6539929A9; // 0x02C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32F0[0x3];                                     // 0x02C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline;                                          // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          BeginDespawn;                                      // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_32F1[0x7];                                     // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Relative_Scale_3D;                                 // 0x02D8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Animate();
	void Despawn();
	void ExecuteUbergraph_BP_SpawningBlock(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Spawn();
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SpawningBlock_C">();
	}
	static class ABP_SpawningBlock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SpawningBlock_C>();
	}
};
static_assert(alignof(ABP_SpawningBlock_C) == 0x000008, "Wrong alignment on ABP_SpawningBlock_C");
static_assert(sizeof(ABP_SpawningBlock_C) == 0x0002F0, "Wrong size on ABP_SpawningBlock_C");
static_assert(offsetof(ABP_SpawningBlock_C, UberGraphFrame) == 0x000298, "Member 'ABP_SpawningBlock_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SpawningBlock_C, Box) == 0x0002A0, "Member 'ABP_SpawningBlock_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_SpawningBlock_C, Cube) == 0x0002A8, "Member 'ABP_SpawningBlock_C::Cube' has a wrong offset!");
static_assert(offsetof(ABP_SpawningBlock_C, StaticMesh) == 0x0002B0, "Member 'ABP_SpawningBlock_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_SpawningBlock_C, DefaultSceneRoot) == 0x0002B8, "Member 'ABP_SpawningBlock_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_SpawningBlock_C, Timeline_NewTrack_0_83F60F0F443475D0FA3B7AA6539929A9) == 0x0002C0, "Member 'ABP_SpawningBlock_C::Timeline_NewTrack_0_83F60F0F443475D0FA3B7AA6539929A9' has a wrong offset!");
static_assert(offsetof(ABP_SpawningBlock_C, Timeline__Direction_83F60F0F443475D0FA3B7AA6539929A9) == 0x0002C4, "Member 'ABP_SpawningBlock_C::Timeline__Direction_83F60F0F443475D0FA3B7AA6539929A9' has a wrong offset!");
static_assert(offsetof(ABP_SpawningBlock_C, Timeline) == 0x0002C8, "Member 'ABP_SpawningBlock_C::Timeline' has a wrong offset!");
static_assert(offsetof(ABP_SpawningBlock_C, BeginDespawn) == 0x0002D0, "Member 'ABP_SpawningBlock_C::BeginDespawn' has a wrong offset!");
static_assert(offsetof(ABP_SpawningBlock_C, Relative_Scale_3D) == 0x0002D8, "Member 'ABP_SpawningBlock_C::Relative_Scale_3D' has a wrong offset!");

}

