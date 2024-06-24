#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Decaler_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Decaler_BP.Decaler_BP_C
// 0x0068 (0x0300 - 0x0298)
class ADecaler_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                        Arrow;                                             // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UC_TickOptimizer_C*                     C_TickOptimizer;                                   // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        PistonSound;                                       // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cylinder;                                          // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Target;                                            // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_fence_02;                                       // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_4DEABCFE4B67F24CCA7BB3BC9484957E; // 0x02D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_4DEABCFE4B67F24CCA7BB3BC9484957E; // 0x02DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3738[0x3];                                     // 0x02DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Init;                                              // 0x02E8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__Decaler_BP_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_Decaler_BP(int32 EntryPoint);
	void MoveDecaler();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Decaler_BP_C">();
	}
	static class ADecaler_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADecaler_BP_C>();
	}
};
static_assert(alignof(ADecaler_BP_C) == 0x000008, "Wrong alignment on ADecaler_BP_C");
static_assert(sizeof(ADecaler_BP_C) == 0x000300, "Wrong size on ADecaler_BP_C");
static_assert(offsetof(ADecaler_BP_C, UberGraphFrame) == 0x000298, "Member 'ADecaler_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ADecaler_BP_C, Arrow) == 0x0002A0, "Member 'ADecaler_BP_C::Arrow' has a wrong offset!");
static_assert(offsetof(ADecaler_BP_C, C_TickOptimizer) == 0x0002A8, "Member 'ADecaler_BP_C::C_TickOptimizer' has a wrong offset!");
static_assert(offsetof(ADecaler_BP_C, PistonSound) == 0x0002B0, "Member 'ADecaler_BP_C::PistonSound' has a wrong offset!");
static_assert(offsetof(ADecaler_BP_C, Cylinder) == 0x0002B8, "Member 'ADecaler_BP_C::Cylinder' has a wrong offset!");
static_assert(offsetof(ADecaler_BP_C, Target) == 0x0002C0, "Member 'ADecaler_BP_C::Target' has a wrong offset!");
static_assert(offsetof(ADecaler_BP_C, SM_fence_02) == 0x0002C8, "Member 'ADecaler_BP_C::SM_fence_02' has a wrong offset!");
static_assert(offsetof(ADecaler_BP_C, DefaultSceneRoot) == 0x0002D0, "Member 'ADecaler_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ADecaler_BP_C, Timeline_0_NewTrack_0_4DEABCFE4B67F24CCA7BB3BC9484957E) == 0x0002D8, "Member 'ADecaler_BP_C::Timeline_0_NewTrack_0_4DEABCFE4B67F24CCA7BB3BC9484957E' has a wrong offset!");
static_assert(offsetof(ADecaler_BP_C, Timeline_0__Direction_4DEABCFE4B67F24CCA7BB3BC9484957E) == 0x0002DC, "Member 'ADecaler_BP_C::Timeline_0__Direction_4DEABCFE4B67F24CCA7BB3BC9484957E' has a wrong offset!");
static_assert(offsetof(ADecaler_BP_C, Timeline_0) == 0x0002E0, "Member 'ADecaler_BP_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(ADecaler_BP_C, Init) == 0x0002E8, "Member 'ADecaler_BP_C::Init' has a wrong offset!");

}

