#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ElevatorTruck

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_CustomCar_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ElevatorTruck.BP_ElevatorTruck_C
// 0x0060 (0x0780 - 0x0720)
class ABP_ElevatorTruck_C final : public ABP_CustomCar_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ElevatorTruck_C;                 // 0x0718(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   CimentPilePlacer;                                  // 0x0720(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x0728(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   MonteCharge;                                       // 0x0730(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_3789C2A04DD8C386E03634A000408145; // 0x0738(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_3789C2A04DD8C386E03634A000408145; // 0x073C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39E8[0x3];                                     // 0x073D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x0740(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                MonteChargeInitLoc;                                // 0x0748(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Lift;                                              // 0x0760(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39E9[0x7];                                     // 0x0761(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_CimentPile_C*                       Ciment_Pile;                                       // 0x0768(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Sound;                                             // 0x0770(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void DetectCimentPile();
	void ExecuteUbergraph_BP_ElevatorTruck(int32 EntryPoint);
	void GrabCimentPileAll(class ABP_CimentPile_C* Target);
	void OnRep_Lift();
	void PlaySound();
	void ReceiveBeginPlay();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Toggle_Monte_Charge();
	void ToggleLift();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ElevatorTruck_C">();
	}
	static class ABP_ElevatorTruck_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ElevatorTruck_C>();
	}
};
static_assert(alignof(ABP_ElevatorTruck_C) == 0x000010, "Wrong alignment on ABP_ElevatorTruck_C");
static_assert(sizeof(ABP_ElevatorTruck_C) == 0x000780, "Wrong size on ABP_ElevatorTruck_C");
static_assert(offsetof(ABP_ElevatorTruck_C, UberGraphFrame_BP_ElevatorTruck_C) == 0x000718, "Member 'ABP_ElevatorTruck_C::UberGraphFrame_BP_ElevatorTruck_C' has a wrong offset!");
static_assert(offsetof(ABP_ElevatorTruck_C, CimentPilePlacer) == 0x000720, "Member 'ABP_ElevatorTruck_C::CimentPilePlacer' has a wrong offset!");
static_assert(offsetof(ABP_ElevatorTruck_C, Arrow) == 0x000728, "Member 'ABP_ElevatorTruck_C::Arrow' has a wrong offset!");
static_assert(offsetof(ABP_ElevatorTruck_C, MonteCharge) == 0x000730, "Member 'ABP_ElevatorTruck_C::MonteCharge' has a wrong offset!");
static_assert(offsetof(ABP_ElevatorTruck_C, Timeline_0_NewTrack_0_3789C2A04DD8C386E03634A000408145) == 0x000738, "Member 'ABP_ElevatorTruck_C::Timeline_0_NewTrack_0_3789C2A04DD8C386E03634A000408145' has a wrong offset!");
static_assert(offsetof(ABP_ElevatorTruck_C, Timeline_0__Direction_3789C2A04DD8C386E03634A000408145) == 0x00073C, "Member 'ABP_ElevatorTruck_C::Timeline_0__Direction_3789C2A04DD8C386E03634A000408145' has a wrong offset!");
static_assert(offsetof(ABP_ElevatorTruck_C, Timeline_0) == 0x000740, "Member 'ABP_ElevatorTruck_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(ABP_ElevatorTruck_C, MonteChargeInitLoc) == 0x000748, "Member 'ABP_ElevatorTruck_C::MonteChargeInitLoc' has a wrong offset!");
static_assert(offsetof(ABP_ElevatorTruck_C, Lift) == 0x000760, "Member 'ABP_ElevatorTruck_C::Lift' has a wrong offset!");
static_assert(offsetof(ABP_ElevatorTruck_C, Ciment_Pile) == 0x000768, "Member 'ABP_ElevatorTruck_C::Ciment_Pile' has a wrong offset!");
static_assert(offsetof(ABP_ElevatorTruck_C, Sound) == 0x000770, "Member 'ABP_ElevatorTruck_C::Sound' has a wrong offset!");

}

