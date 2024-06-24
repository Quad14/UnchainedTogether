#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AsiaTurningStones

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AsiaTurningStones.BP_AsiaTurningStones_C
// 0x0038 (0x02D0 - 0x0298)
class ABP_AsiaTurningStones_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UC_TickOptimizer_C*                     C_TickOptimizer;                                   // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Sphere;                                            // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        Speed;                                             // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Inverse;                                           // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_3A96[0x3];                                     // 0x02C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RepZ;                                              // 0x02CC(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

public:
	void CustomEvent();
	void ExecuteUbergraph_BP_AsiaTurningStones(int32 EntryPoint);
	void OnRep_RepZ();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AsiaTurningStones_C">();
	}
	static class ABP_AsiaTurningStones_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AsiaTurningStones_C>();
	}
};
static_assert(alignof(ABP_AsiaTurningStones_C) == 0x000008, "Wrong alignment on ABP_AsiaTurningStones_C");
static_assert(sizeof(ABP_AsiaTurningStones_C) == 0x0002D0, "Wrong size on ABP_AsiaTurningStones_C");
static_assert(offsetof(ABP_AsiaTurningStones_C, UberGraphFrame) == 0x000298, "Member 'ABP_AsiaTurningStones_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_AsiaTurningStones_C, C_TickOptimizer) == 0x0002A0, "Member 'ABP_AsiaTurningStones_C::C_TickOptimizer' has a wrong offset!");
static_assert(offsetof(ABP_AsiaTurningStones_C, StaticMesh) == 0x0002A8, "Member 'ABP_AsiaTurningStones_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_AsiaTurningStones_C, Sphere) == 0x0002B0, "Member 'ABP_AsiaTurningStones_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_AsiaTurningStones_C, DefaultSceneRoot) == 0x0002B8, "Member 'ABP_AsiaTurningStones_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_AsiaTurningStones_C, Speed) == 0x0002C0, "Member 'ABP_AsiaTurningStones_C::Speed' has a wrong offset!");
static_assert(offsetof(ABP_AsiaTurningStones_C, Inverse) == 0x0002C8, "Member 'ABP_AsiaTurningStones_C::Inverse' has a wrong offset!");
static_assert(offsetof(ABP_AsiaTurningStones_C, RepZ) == 0x0002CC, "Member 'ABP_AsiaTurningStones_C::RepZ' has a wrong offset!");

}

