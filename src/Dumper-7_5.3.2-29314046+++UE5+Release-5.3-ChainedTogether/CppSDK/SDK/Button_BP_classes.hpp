#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Button_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Button_BP.Button_BP_C
// 0x0070 (0x0308 - 0x0298)
class AButton_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Button;                                            // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ButtonBorder;                                      // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_8E176CCB484519A9D7529D88C788B82F; // 0x02C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_8E176CCB484519A9D7529D88C788B82F; // 0x02C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A8D[0x3];                                     // 0x02C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               ButtonMat;                                         // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Pushed;                                            // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A8E[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ButtonEvent_C*                      ButtonEvent;                                       // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         Index_Button_BP_C;                                 // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_3A8F[0x4];                                     // 0x02EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        PushedHeight;                                      // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ReleasedHeight;                                    // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UpdateVisibilityFromPlayerNumber;                  // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          MustStayOnButton;                                  // 0x0301(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__Button_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Button_BP_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ChangeColor(bool Green);
	void CheckEvent(bool Push);
	void CustomEvent_0();
	void ExecuteUbergraph_Button_BP(int32 EntryPoint);
	void PushButton();
	void ReceiveBeginPlay();
	void ReleaseButton();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void UpdateVisibility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Button_BP_C">();
	}
	static class AButton_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AButton_BP_C>();
	}
};
static_assert(alignof(AButton_BP_C) == 0x000008, "Wrong alignment on AButton_BP_C");
static_assert(sizeof(AButton_BP_C) == 0x000308, "Wrong size on AButton_BP_C");
static_assert(offsetof(AButton_BP_C, UberGraphFrame) == 0x000298, "Member 'AButton_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AButton_BP_C, Box) == 0x0002A0, "Member 'AButton_BP_C::Box' has a wrong offset!");
static_assert(offsetof(AButton_BP_C, Button) == 0x0002A8, "Member 'AButton_BP_C::Button' has a wrong offset!");
static_assert(offsetof(AButton_BP_C, ButtonBorder) == 0x0002B0, "Member 'AButton_BP_C::ButtonBorder' has a wrong offset!");
static_assert(offsetof(AButton_BP_C, DefaultSceneRoot) == 0x0002B8, "Member 'AButton_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AButton_BP_C, Timeline_0_NewTrack_0_8E176CCB484519A9D7529D88C788B82F) == 0x0002C0, "Member 'AButton_BP_C::Timeline_0_NewTrack_0_8E176CCB484519A9D7529D88C788B82F' has a wrong offset!");
static_assert(offsetof(AButton_BP_C, Timeline_0__Direction_8E176CCB484519A9D7529D88C788B82F) == 0x0002C4, "Member 'AButton_BP_C::Timeline_0__Direction_8E176CCB484519A9D7529D88C788B82F' has a wrong offset!");
static_assert(offsetof(AButton_BP_C, Timeline_0) == 0x0002C8, "Member 'AButton_BP_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(AButton_BP_C, ButtonMat) == 0x0002D0, "Member 'AButton_BP_C::ButtonMat' has a wrong offset!");
static_assert(offsetof(AButton_BP_C, Pushed) == 0x0002D8, "Member 'AButton_BP_C::Pushed' has a wrong offset!");
static_assert(offsetof(AButton_BP_C, ButtonEvent) == 0x0002E0, "Member 'AButton_BP_C::ButtonEvent' has a wrong offset!");
static_assert(offsetof(AButton_BP_C, Index_Button_BP_C) == 0x0002E8, "Member 'AButton_BP_C::Index_Button_BP_C' has a wrong offset!");
static_assert(offsetof(AButton_BP_C, PushedHeight) == 0x0002F0, "Member 'AButton_BP_C::PushedHeight' has a wrong offset!");
static_assert(offsetof(AButton_BP_C, ReleasedHeight) == 0x0002F8, "Member 'AButton_BP_C::ReleasedHeight' has a wrong offset!");
static_assert(offsetof(AButton_BP_C, UpdateVisibilityFromPlayerNumber) == 0x000300, "Member 'AButton_BP_C::UpdateVisibilityFromPlayerNumber' has a wrong offset!");
static_assert(offsetof(AButton_BP_C, MustStayOnButton) == 0x000301, "Member 'AButton_BP_C::MustStayOnButton' has a wrong offset!");

}

