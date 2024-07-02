#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CrashMeteor

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CrashMeteor.BP_CrashMeteor_C
// 0x0080 (0x0318 - 0x0298)
class ABP_CrashMeteor_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDecalComponent*                        Decal3;                                            // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                        Decal2;                                            // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                        Decal1;                                            // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                        Decal;                                             // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Smoke1;                                          // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Smoke;                                           // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Meteor;                                         // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_NewTrack_0_657B295C47ECBCB09A1161B81ABE0AD8; // 0x02E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline__Direction_657B295C47ECBCB09A1161B81ABE0AD8; // 0x02EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3ACD[0x3];                                     // 0x02ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline;                                          // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                MeteorLocation;                                    // 0x02F8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LaunchWithBox;                                     // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          End_Screen;                                        // 0x0311(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_CrashMeteor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_BP_CrashMeteor(int32 EntryPoint);
	void LaunchMeteor(bool EndScreen);
	void ReceiveBeginPlay();
	void ShowHide(bool Show);
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CrashMeteor_C">();
	}
	static class ABP_CrashMeteor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CrashMeteor_C>();
	}
};
static_assert(alignof(ABP_CrashMeteor_C) == 0x000008, "Wrong alignment on ABP_CrashMeteor_C");
static_assert(sizeof(ABP_CrashMeteor_C) == 0x000318, "Wrong size on ABP_CrashMeteor_C");
static_assert(offsetof(ABP_CrashMeteor_C, UberGraphFrame) == 0x000298, "Member 'ABP_CrashMeteor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CrashMeteor_C, Decal3) == 0x0002A0, "Member 'ABP_CrashMeteor_C::Decal3' has a wrong offset!");
static_assert(offsetof(ABP_CrashMeteor_C, Box) == 0x0002A8, "Member 'ABP_CrashMeteor_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_CrashMeteor_C, Decal2) == 0x0002B0, "Member 'ABP_CrashMeteor_C::Decal2' has a wrong offset!");
static_assert(offsetof(ABP_CrashMeteor_C, Decal1) == 0x0002B8, "Member 'ABP_CrashMeteor_C::Decal1' has a wrong offset!");
static_assert(offsetof(ABP_CrashMeteor_C, Decal) == 0x0002C0, "Member 'ABP_CrashMeteor_C::Decal' has a wrong offset!");
static_assert(offsetof(ABP_CrashMeteor_C, P_Smoke1) == 0x0002C8, "Member 'ABP_CrashMeteor_C::P_Smoke1' has a wrong offset!");
static_assert(offsetof(ABP_CrashMeteor_C, P_Smoke) == 0x0002D0, "Member 'ABP_CrashMeteor_C::P_Smoke' has a wrong offset!");
static_assert(offsetof(ABP_CrashMeteor_C, SM_Meteor) == 0x0002D8, "Member 'ABP_CrashMeteor_C::SM_Meteor' has a wrong offset!");
static_assert(offsetof(ABP_CrashMeteor_C, DefaultSceneRoot) == 0x0002E0, "Member 'ABP_CrashMeteor_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_CrashMeteor_C, Timeline_NewTrack_0_657B295C47ECBCB09A1161B81ABE0AD8) == 0x0002E8, "Member 'ABP_CrashMeteor_C::Timeline_NewTrack_0_657B295C47ECBCB09A1161B81ABE0AD8' has a wrong offset!");
static_assert(offsetof(ABP_CrashMeteor_C, Timeline__Direction_657B295C47ECBCB09A1161B81ABE0AD8) == 0x0002EC, "Member 'ABP_CrashMeteor_C::Timeline__Direction_657B295C47ECBCB09A1161B81ABE0AD8' has a wrong offset!");
static_assert(offsetof(ABP_CrashMeteor_C, Timeline) == 0x0002F0, "Member 'ABP_CrashMeteor_C::Timeline' has a wrong offset!");
static_assert(offsetof(ABP_CrashMeteor_C, MeteorLocation) == 0x0002F8, "Member 'ABP_CrashMeteor_C::MeteorLocation' has a wrong offset!");
static_assert(offsetof(ABP_CrashMeteor_C, LaunchWithBox) == 0x000310, "Member 'ABP_CrashMeteor_C::LaunchWithBox' has a wrong offset!");
static_assert(offsetof(ABP_CrashMeteor_C, End_Screen) == 0x000311, "Member 'ABP_CrashMeteor_C::End_Screen' has a wrong offset!");

}

