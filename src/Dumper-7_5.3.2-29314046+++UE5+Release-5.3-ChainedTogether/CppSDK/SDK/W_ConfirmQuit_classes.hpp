#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ConfirmQuit

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_ConfirmQuit.W_ConfirmQuit_C
// 0x0030 (0x02F0 - 0x02C0)
class UW_ConfirmQuit_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button;                                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_103;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_52;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Quit;                                              // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__W_ConfirmQuit_Button_103_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__W_ConfirmQuit_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_W_ConfirmQuit(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_ConfirmQuit_C">();
	}
	static class UW_ConfirmQuit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_ConfirmQuit_C>();
	}
};
static_assert(alignof(UW_ConfirmQuit_C) == 0x000008, "Wrong alignment on UW_ConfirmQuit_C");
static_assert(sizeof(UW_ConfirmQuit_C) == 0x0002F0, "Wrong size on UW_ConfirmQuit_C");
static_assert(offsetof(UW_ConfirmQuit_C, UberGraphFrame) == 0x0002C0, "Member 'UW_ConfirmQuit_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_ConfirmQuit_C, Button) == 0x0002C8, "Member 'UW_ConfirmQuit_C::Button' has a wrong offset!");
static_assert(offsetof(UW_ConfirmQuit_C, Button_103) == 0x0002D0, "Member 'UW_ConfirmQuit_C::Button_103' has a wrong offset!");
static_assert(offsetof(UW_ConfirmQuit_C, TextBlock) == 0x0002D8, "Member 'UW_ConfirmQuit_C::TextBlock' has a wrong offset!");
static_assert(offsetof(UW_ConfirmQuit_C, TextBlock_52) == 0x0002E0, "Member 'UW_ConfirmQuit_C::TextBlock_52' has a wrong offset!");
static_assert(offsetof(UW_ConfirmQuit_C, Quit) == 0x0002E8, "Member 'UW_ConfirmQuit_C::Quit' has a wrong offset!");

}

