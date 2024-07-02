#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FloatingPlatform

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FloatingPlatform.BP_FloatingPlatform_C
// 0x0108 (0x03A0 - 0x0298)
class ABP_FloatingPlatform_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UC_VinceSync_C*                         C_VinceSync;                                       // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh1;                                       // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cylinder;                                          // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UC_TickOptimizer_C*                     C_TickOptimizer;                                   // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCableComponent*                        Cable1;                                            // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_NewTrack_0_8F67867149A9566BAF6E85BB427A8E92; // 0x02D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline__Direction_8F67867149A9566BAF6E85BB427A8E92; // 0x02DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C48[0x3];                                     // 0x02DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline;                                          // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C49[0x8];                                     // 0x02E8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             RepT;                                              // 0x02F0(0x0060)(Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_FloatingPlatform_C*                 AttachTo;                                          // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FRotator                               InitRot;                                           // 0x0358(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                InitLoc;                                           // 0x0370(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TargetLoc;                                         // 0x0388(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_FloatingPlatform_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void CalculateRotation();
	void ExecuteUbergraph_BP_FloatingPlatform(int32 EntryPoint);
	void MakeBounce();
	void Optimise(bool Param_Optimise);
	void ReceiveBeginPlay();
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FloatingPlatform_C">();
	}
	static class ABP_FloatingPlatform_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FloatingPlatform_C>();
	}
};
static_assert(alignof(ABP_FloatingPlatform_C) == 0x000010, "Wrong alignment on ABP_FloatingPlatform_C");
static_assert(sizeof(ABP_FloatingPlatform_C) == 0x0003A0, "Wrong size on ABP_FloatingPlatform_C");
static_assert(offsetof(ABP_FloatingPlatform_C, UberGraphFrame) == 0x000298, "Member 'ABP_FloatingPlatform_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_FloatingPlatform_C, C_VinceSync) == 0x0002A0, "Member 'ABP_FloatingPlatform_C::C_VinceSync' has a wrong offset!");
static_assert(offsetof(ABP_FloatingPlatform_C, StaticMesh1) == 0x0002A8, "Member 'ABP_FloatingPlatform_C::StaticMesh1' has a wrong offset!");
static_assert(offsetof(ABP_FloatingPlatform_C, StaticMesh) == 0x0002B0, "Member 'ABP_FloatingPlatform_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_FloatingPlatform_C, Cylinder) == 0x0002B8, "Member 'ABP_FloatingPlatform_C::Cylinder' has a wrong offset!");
static_assert(offsetof(ABP_FloatingPlatform_C, C_TickOptimizer) == 0x0002C0, "Member 'ABP_FloatingPlatform_C::C_TickOptimizer' has a wrong offset!");
static_assert(offsetof(ABP_FloatingPlatform_C, Cable1) == 0x0002C8, "Member 'ABP_FloatingPlatform_C::Cable1' has a wrong offset!");
static_assert(offsetof(ABP_FloatingPlatform_C, DefaultSceneRoot) == 0x0002D0, "Member 'ABP_FloatingPlatform_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_FloatingPlatform_C, Timeline_NewTrack_0_8F67867149A9566BAF6E85BB427A8E92) == 0x0002D8, "Member 'ABP_FloatingPlatform_C::Timeline_NewTrack_0_8F67867149A9566BAF6E85BB427A8E92' has a wrong offset!");
static_assert(offsetof(ABP_FloatingPlatform_C, Timeline__Direction_8F67867149A9566BAF6E85BB427A8E92) == 0x0002DC, "Member 'ABP_FloatingPlatform_C::Timeline__Direction_8F67867149A9566BAF6E85BB427A8E92' has a wrong offset!");
static_assert(offsetof(ABP_FloatingPlatform_C, Timeline) == 0x0002E0, "Member 'ABP_FloatingPlatform_C::Timeline' has a wrong offset!");
static_assert(offsetof(ABP_FloatingPlatform_C, RepT) == 0x0002F0, "Member 'ABP_FloatingPlatform_C::RepT' has a wrong offset!");
static_assert(offsetof(ABP_FloatingPlatform_C, AttachTo) == 0x000350, "Member 'ABP_FloatingPlatform_C::AttachTo' has a wrong offset!");
static_assert(offsetof(ABP_FloatingPlatform_C, InitRot) == 0x000358, "Member 'ABP_FloatingPlatform_C::InitRot' has a wrong offset!");
static_assert(offsetof(ABP_FloatingPlatform_C, InitLoc) == 0x000370, "Member 'ABP_FloatingPlatform_C::InitLoc' has a wrong offset!");
static_assert(offsetof(ABP_FloatingPlatform_C, TargetLoc) == 0x000388, "Member 'ABP_FloatingPlatform_C::TargetLoc' has a wrong offset!");

}

