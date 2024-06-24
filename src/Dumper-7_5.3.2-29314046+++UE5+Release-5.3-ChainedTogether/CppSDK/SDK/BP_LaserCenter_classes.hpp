#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LaserCenter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LaserCenter.BP_LaserCenter_C
// 0x0048 (0x02E0 - 0x0298)
class ABP_LaserCenter_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   SM_MERGED_SM_decorative_stone17;                   // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_LaserLauncher_C*>            LaserLaunchers;                                    // 0x02B0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn)
	int32                                         LasersOn;                                          // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3605[0x4];                                     // 0x02C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         ActorToTrigger;                                    // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn)
	bool                                          Unlock;                                            // 0x02D8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

public:
	void CheckLaserNumber();
	void CheckLasersOn(bool* On);
	void ExecuteUbergraph_BP_LaserCenter(int32 EntryPoint);
	void OnRep_Unlock();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LaserCenter_C">();
	}
	static class ABP_LaserCenter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LaserCenter_C>();
	}
};
static_assert(alignof(ABP_LaserCenter_C) == 0x000008, "Wrong alignment on ABP_LaserCenter_C");
static_assert(sizeof(ABP_LaserCenter_C) == 0x0002E0, "Wrong size on ABP_LaserCenter_C");
static_assert(offsetof(ABP_LaserCenter_C, UberGraphFrame) == 0x000298, "Member 'ABP_LaserCenter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_LaserCenter_C, SM_MERGED_SM_decorative_stone17) == 0x0002A0, "Member 'ABP_LaserCenter_C::SM_MERGED_SM_decorative_stone17' has a wrong offset!");
static_assert(offsetof(ABP_LaserCenter_C, DefaultSceneRoot) == 0x0002A8, "Member 'ABP_LaserCenter_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_LaserCenter_C, LaserLaunchers) == 0x0002B0, "Member 'ABP_LaserCenter_C::LaserLaunchers' has a wrong offset!");
static_assert(offsetof(ABP_LaserCenter_C, LasersOn) == 0x0002C0, "Member 'ABP_LaserCenter_C::LasersOn' has a wrong offset!");
static_assert(offsetof(ABP_LaserCenter_C, ActorToTrigger) == 0x0002C8, "Member 'ABP_LaserCenter_C::ActorToTrigger' has a wrong offset!");
static_assert(offsetof(ABP_LaserCenter_C, Unlock) == 0x0002D8, "Member 'ABP_LaserCenter_C::Unlock' has a wrong offset!");

}

