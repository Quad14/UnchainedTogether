#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RotativeCylinder

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_RotativeCylinder.BP_RotativeCylinder_C
// 0x0070 (0x0308 - 0x0298)
class ABP_RotativeCylinder_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UC_TickOptimizer_C*                     C_TickOptimizer;                                   // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube3;                                             // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube2;                                             // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube1;                                             // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube;                                              // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cylinder;                                          // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        Speed;                                             // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        Delta_Rotation_Z__Yaw_;                            // 0x02E0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               RepRot;                                            // 0x02E8(0x0018)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	double                                        FourPlayersScale;                                  // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CustomEvent_0();
	void ExecuteUbergraph_BP_RotativeCylinder(int32 EntryPoint);
	void OnRep_Delta_Rotation_Z__Yaw_();
	void OnRep_RepRot();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RotativeCylinder_C">();
	}
	static class ABP_RotativeCylinder_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_RotativeCylinder_C>();
	}
};
static_assert(alignof(ABP_RotativeCylinder_C) == 0x000008, "Wrong alignment on ABP_RotativeCylinder_C");
static_assert(sizeof(ABP_RotativeCylinder_C) == 0x000308, "Wrong size on ABP_RotativeCylinder_C");
static_assert(offsetof(ABP_RotativeCylinder_C, UberGraphFrame) == 0x000298, "Member 'ABP_RotativeCylinder_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_RotativeCylinder_C, C_TickOptimizer) == 0x0002A0, "Member 'ABP_RotativeCylinder_C::C_TickOptimizer' has a wrong offset!");
static_assert(offsetof(ABP_RotativeCylinder_C, Cube3) == 0x0002A8, "Member 'ABP_RotativeCylinder_C::Cube3' has a wrong offset!");
static_assert(offsetof(ABP_RotativeCylinder_C, Cube2) == 0x0002B0, "Member 'ABP_RotativeCylinder_C::Cube2' has a wrong offset!");
static_assert(offsetof(ABP_RotativeCylinder_C, Cube1) == 0x0002B8, "Member 'ABP_RotativeCylinder_C::Cube1' has a wrong offset!");
static_assert(offsetof(ABP_RotativeCylinder_C, Cube) == 0x0002C0, "Member 'ABP_RotativeCylinder_C::Cube' has a wrong offset!");
static_assert(offsetof(ABP_RotativeCylinder_C, Cylinder) == 0x0002C8, "Member 'ABP_RotativeCylinder_C::Cylinder' has a wrong offset!");
static_assert(offsetof(ABP_RotativeCylinder_C, DefaultSceneRoot) == 0x0002D0, "Member 'ABP_RotativeCylinder_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_RotativeCylinder_C, Speed) == 0x0002D8, "Member 'ABP_RotativeCylinder_C::Speed' has a wrong offset!");
static_assert(offsetof(ABP_RotativeCylinder_C, Delta_Rotation_Z__Yaw_) == 0x0002E0, "Member 'ABP_RotativeCylinder_C::Delta_Rotation_Z__Yaw_' has a wrong offset!");
static_assert(offsetof(ABP_RotativeCylinder_C, RepRot) == 0x0002E8, "Member 'ABP_RotativeCylinder_C::RepRot' has a wrong offset!");
static_assert(offsetof(ABP_RotativeCylinder_C, FourPlayersScale) == 0x000300, "Member 'ABP_RotativeCylinder_C::FourPlayersScale' has a wrong offset!");

}

