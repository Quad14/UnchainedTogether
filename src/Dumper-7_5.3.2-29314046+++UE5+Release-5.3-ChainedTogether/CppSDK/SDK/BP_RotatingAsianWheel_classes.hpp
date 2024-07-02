#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RotatingAsianWheel

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_RotatingObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_RotatingAsianWheel.BP_RotatingAsianWheel_C
// 0x0098 (0x0370 - 0x02D8)
class ABP_RotatingAsianWheel_C final : public ABP_RotatingObject_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_RotatingAsianWheel_C;            // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Start;                                             // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Target;                                            // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cylinder1;                                         // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_paddle_wheel;                                   // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cylinder;                                          // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_685C1F4F404138ACFF38988BEF70D30D; // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_685C1F4F404138ACFF38988BEF70D30D; // 0x030C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3526[0x3];                                     // 0x030D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                InitLoc;                                           // 0x0318(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        Duration;                                          // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                TargetLoc;                                         // 0x0338(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                RepLoc;                                            // 0x0350(0x0018)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	double                                        RepTL_Position;                                    // 0x0368(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

public:
	void CustomEvent_1();
	void ExecuteUbergraph_BP_RotatingAsianWheel(int32 EntryPoint);
	void OnRep_RepLoc();
	void OnRep_RepTL_Position();
	void ReceiveBeginPlay();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RotatingAsianWheel_C">();
	}
	static class ABP_RotatingAsianWheel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_RotatingAsianWheel_C>();
	}
};
static_assert(alignof(ABP_RotatingAsianWheel_C) == 0x000008, "Wrong alignment on ABP_RotatingAsianWheel_C");
static_assert(sizeof(ABP_RotatingAsianWheel_C) == 0x000370, "Wrong size on ABP_RotatingAsianWheel_C");
static_assert(offsetof(ABP_RotatingAsianWheel_C, UberGraphFrame_BP_RotatingAsianWheel_C) == 0x0002D8, "Member 'ABP_RotatingAsianWheel_C::UberGraphFrame_BP_RotatingAsianWheel_C' has a wrong offset!");
static_assert(offsetof(ABP_RotatingAsianWheel_C, Start) == 0x0002E0, "Member 'ABP_RotatingAsianWheel_C::Start' has a wrong offset!");
static_assert(offsetof(ABP_RotatingAsianWheel_C, Target) == 0x0002E8, "Member 'ABP_RotatingAsianWheel_C::Target' has a wrong offset!");
static_assert(offsetof(ABP_RotatingAsianWheel_C, Cylinder1) == 0x0002F0, "Member 'ABP_RotatingAsianWheel_C::Cylinder1' has a wrong offset!");
static_assert(offsetof(ABP_RotatingAsianWheel_C, SM_paddle_wheel) == 0x0002F8, "Member 'ABP_RotatingAsianWheel_C::SM_paddle_wheel' has a wrong offset!");
static_assert(offsetof(ABP_RotatingAsianWheel_C, Cylinder) == 0x000300, "Member 'ABP_RotatingAsianWheel_C::Cylinder' has a wrong offset!");
static_assert(offsetof(ABP_RotatingAsianWheel_C, Timeline_0_NewTrack_0_685C1F4F404138ACFF38988BEF70D30D) == 0x000308, "Member 'ABP_RotatingAsianWheel_C::Timeline_0_NewTrack_0_685C1F4F404138ACFF38988BEF70D30D' has a wrong offset!");
static_assert(offsetof(ABP_RotatingAsianWheel_C, Timeline_0__Direction_685C1F4F404138ACFF38988BEF70D30D) == 0x00030C, "Member 'ABP_RotatingAsianWheel_C::Timeline_0__Direction_685C1F4F404138ACFF38988BEF70D30D' has a wrong offset!");
static_assert(offsetof(ABP_RotatingAsianWheel_C, Timeline_0) == 0x000310, "Member 'ABP_RotatingAsianWheel_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(ABP_RotatingAsianWheel_C, InitLoc) == 0x000318, "Member 'ABP_RotatingAsianWheel_C::InitLoc' has a wrong offset!");
static_assert(offsetof(ABP_RotatingAsianWheel_C, Duration) == 0x000330, "Member 'ABP_RotatingAsianWheel_C::Duration' has a wrong offset!");
static_assert(offsetof(ABP_RotatingAsianWheel_C, TargetLoc) == 0x000338, "Member 'ABP_RotatingAsianWheel_C::TargetLoc' has a wrong offset!");
static_assert(offsetof(ABP_RotatingAsianWheel_C, RepLoc) == 0x000350, "Member 'ABP_RotatingAsianWheel_C::RepLoc' has a wrong offset!");
static_assert(offsetof(ABP_RotatingAsianWheel_C, RepTL_Position) == 0x000368, "Member 'ABP_RotatingAsianWheel_C::RepTL_Position' has a wrong offset!");

}

