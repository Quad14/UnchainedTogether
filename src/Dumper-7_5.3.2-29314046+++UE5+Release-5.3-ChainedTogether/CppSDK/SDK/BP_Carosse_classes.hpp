#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Carosse

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_CustomCar_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Carosse.BP_Carosse_C
// 0x00C0 (0x07E0 - 0x0720)
class ABP_Carosse_C final : public ABP_CustomCar_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Carosse_C;                       // 0x0718(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box1;                                              // 0x0720(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x0728(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio;                                             // 0x0730(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight2;                                       // 0x0738(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight1;                                       // 0x0740(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0748(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCableComponent*                        CableLeft;                                         // 0x0750(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CableEndLeft;                                      // 0x0758(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CableEndRight;                                     // 0x0760(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCableComponent*                        CableRight;                                        // 0x0768(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        HorseForwardVector;                                // 0x0770(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        HorseRightVector;                                  // 0x0778(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        HorseFloorSocket;                                  // 0x0780(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Capsule;                                           // 0x0788(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Horns_Horn2;                                       // 0x0790(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_Horse;                                          // 0x0798(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               HorseRotation;                                     // 0x07A0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                InitLocation;                                      // 0x07B8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHorseGrounded;                                    // 0x07D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Carosse(int32 EntryPoint);
	void HorseGrounded(bool* Param_Grounded);
	void OnDriverCarosseInvalid();
	void OnDriverCarosseValid();
	void PossessedOwner();
	void ReceiveBeginPlay();
	void ReceivePossessed(class AController* NewController);
	void ReceiveTick(float DeltaSeconds);
	void SwitchCarVisibility(bool bNewVisibility);
	void UpdateHorseLocation();
	void UpdateSound();
	void UserConstructionScript();
	void WheelLeftRight(double NewRotation_Yaw);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Carosse_C">();
	}
	static class ABP_Carosse_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Carosse_C>();
	}
};
static_assert(alignof(ABP_Carosse_C) == 0x000010, "Wrong alignment on ABP_Carosse_C");
static_assert(sizeof(ABP_Carosse_C) == 0x0007E0, "Wrong size on ABP_Carosse_C");
static_assert(offsetof(ABP_Carosse_C, UberGraphFrame_BP_Carosse_C) == 0x000718, "Member 'ABP_Carosse_C::UberGraphFrame_BP_Carosse_C' has a wrong offset!");
static_assert(offsetof(ABP_Carosse_C, Box1) == 0x000720, "Member 'ABP_Carosse_C::Box1' has a wrong offset!");
static_assert(offsetof(ABP_Carosse_C, Box) == 0x000728, "Member 'ABP_Carosse_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_Carosse_C, Audio) == 0x000730, "Member 'ABP_Carosse_C::Audio' has a wrong offset!");
static_assert(offsetof(ABP_Carosse_C, PointLight2) == 0x000738, "Member 'ABP_Carosse_C::PointLight2' has a wrong offset!");
static_assert(offsetof(ABP_Carosse_C, PointLight1) == 0x000740, "Member 'ABP_Carosse_C::PointLight1' has a wrong offset!");
static_assert(offsetof(ABP_Carosse_C, PointLight) == 0x000748, "Member 'ABP_Carosse_C::PointLight' has a wrong offset!");
static_assert(offsetof(ABP_Carosse_C, CableLeft) == 0x000750, "Member 'ABP_Carosse_C::CableLeft' has a wrong offset!");
static_assert(offsetof(ABP_Carosse_C, CableEndLeft) == 0x000758, "Member 'ABP_Carosse_C::CableEndLeft' has a wrong offset!");
static_assert(offsetof(ABP_Carosse_C, CableEndRight) == 0x000760, "Member 'ABP_Carosse_C::CableEndRight' has a wrong offset!");
static_assert(offsetof(ABP_Carosse_C, CableRight) == 0x000768, "Member 'ABP_Carosse_C::CableRight' has a wrong offset!");
static_assert(offsetof(ABP_Carosse_C, HorseForwardVector) == 0x000770, "Member 'ABP_Carosse_C::HorseForwardVector' has a wrong offset!");
static_assert(offsetof(ABP_Carosse_C, HorseRightVector) == 0x000778, "Member 'ABP_Carosse_C::HorseRightVector' has a wrong offset!");
static_assert(offsetof(ABP_Carosse_C, HorseFloorSocket) == 0x000780, "Member 'ABP_Carosse_C::HorseFloorSocket' has a wrong offset!");
static_assert(offsetof(ABP_Carosse_C, Capsule) == 0x000788, "Member 'ABP_Carosse_C::Capsule' has a wrong offset!");
static_assert(offsetof(ABP_Carosse_C, Horns_Horn2) == 0x000790, "Member 'ABP_Carosse_C::Horns_Horn2' has a wrong offset!");
static_assert(offsetof(ABP_Carosse_C, SK_Horse) == 0x000798, "Member 'ABP_Carosse_C::SK_Horse' has a wrong offset!");
static_assert(offsetof(ABP_Carosse_C, HorseRotation) == 0x0007A0, "Member 'ABP_Carosse_C::HorseRotation' has a wrong offset!");
static_assert(offsetof(ABP_Carosse_C, InitLocation) == 0x0007B8, "Member 'ABP_Carosse_C::InitLocation' has a wrong offset!");
static_assert(offsetof(ABP_Carosse_C, bHorseGrounded) == 0x0007D0, "Member 'ABP_Carosse_C::bHorseGrounded' has a wrong offset!");

}

