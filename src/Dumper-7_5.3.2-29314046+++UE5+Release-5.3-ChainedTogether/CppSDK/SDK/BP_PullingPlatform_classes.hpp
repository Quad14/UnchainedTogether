#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PullingPlatform

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PullingPlatform.BP_PullingPlatform_C
// 0x0038 (0x02D0 - 0x0298)
class ABP_PullingPlatform_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UC_VinceSync_C*                         C_VinceSync;                                       // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UC_TickOptimizer_C*                     C_TickOptimizer;                                   // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube1;                                             // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube;                                              // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        Alpha;                                             // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PullingPlatform(int32 EntryPoint);
	void MovePlatform(double B);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PullingPlatform_C">();
	}
	static class ABP_PullingPlatform_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PullingPlatform_C>();
	}
};
static_assert(alignof(ABP_PullingPlatform_C) == 0x000008, "Wrong alignment on ABP_PullingPlatform_C");
static_assert(sizeof(ABP_PullingPlatform_C) == 0x0002D0, "Wrong size on ABP_PullingPlatform_C");
static_assert(offsetof(ABP_PullingPlatform_C, UberGraphFrame) == 0x000298, "Member 'ABP_PullingPlatform_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PullingPlatform_C, C_VinceSync) == 0x0002A0, "Member 'ABP_PullingPlatform_C::C_VinceSync' has a wrong offset!");
static_assert(offsetof(ABP_PullingPlatform_C, C_TickOptimizer) == 0x0002A8, "Member 'ABP_PullingPlatform_C::C_TickOptimizer' has a wrong offset!");
static_assert(offsetof(ABP_PullingPlatform_C, Cube1) == 0x0002B0, "Member 'ABP_PullingPlatform_C::Cube1' has a wrong offset!");
static_assert(offsetof(ABP_PullingPlatform_C, Cube) == 0x0002B8, "Member 'ABP_PullingPlatform_C::Cube' has a wrong offset!");
static_assert(offsetof(ABP_PullingPlatform_C, DefaultSceneRoot) == 0x0002C0, "Member 'ABP_PullingPlatform_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_PullingPlatform_C, Alpha) == 0x0002C8, "Member 'ABP_PullingPlatform_C::Alpha' has a wrong offset!");

}

