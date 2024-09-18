#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ButtonEvent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ButtonEvent.BP_ButtonEvent_C
// 0x0028 (0x02C0 - 0x0298)
class ABP_ButtonEvent_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                    billboard;                                         // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class AButton_BP_C*>                   Buttons;                                           // 0x02A8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn)
	class AActor*                                 ActorToTrigger;                                    // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	bool CheckButtons(bool Pressed);
	void CheckEventPush();
	void EventRelease();
	void ExecuteUbergraph_BP_ButtonEvent(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ButtonEvent_C">();
	}
	static class ABP_ButtonEvent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ButtonEvent_C>();
	}
};
static_assert(alignof(ABP_ButtonEvent_C) == 0x000008, "Wrong alignment on ABP_ButtonEvent_C");
static_assert(sizeof(ABP_ButtonEvent_C) == 0x0002C0, "Wrong size on ABP_ButtonEvent_C");
static_assert(offsetof(ABP_ButtonEvent_C, UberGraphFrame) == 0x000298, "Member 'ABP_ButtonEvent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ButtonEvent_C, billboard) == 0x0002A0, "Member 'ABP_ButtonEvent_C::billboard' has a wrong offset!");
static_assert(offsetof(ABP_ButtonEvent_C, Buttons) == 0x0002A8, "Member 'ABP_ButtonEvent_C::Buttons' has a wrong offset!");
static_assert(offsetof(ABP_ButtonEvent_C, ActorToTrigger) == 0x0002B8, "Member 'ABP_ButtonEvent_C::ActorToTrigger' has a wrong offset!");

}

