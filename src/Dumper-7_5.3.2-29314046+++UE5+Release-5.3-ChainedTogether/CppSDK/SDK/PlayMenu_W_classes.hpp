#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayMenu_W

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlayMenu_W.PlayMenu_W_C
// 0x0070 (0x0330 - 0x02C0)
class UPlayMenu_W_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       NewAnimation;                                      // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                Back_Button;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                              CheckBox_69;                                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Host_Button;                                       // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Join_Button;                                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MenuButtonText_C*                    LocalMultiplayer;                                  // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MenuButtonText_C*                    Quit;                                              // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MenuButtonText_C*                    Quit_1;                                            // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MenuButtonText_C*                    Settings;                                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Solo_Button;                                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                SplitScreenMP;                                     // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MenuButtonText_C*                    TextBlock_81;                                      // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         WingsBox;                                          // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__MainMenu_W_Quit_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PlayMenu_W_Back_Button_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PlayMenu_W_Back_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PlayMenu_W_Back_Button_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PlayMenu_W_CheckBox_69_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__PlayMenu_W_Host_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PlayMenu_W_Host_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PlayMenu_W_Host_Button_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PlayMenu_W_Join_Button_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PlayMenu_W_Join_Button_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PlayMenu_W_Solo_Button_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PlayMenu_W_Solo_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PlayMenu_W_Solo_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PlayMenu_W_SplitScreenMP_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PlayMenu_W_SplitScreenMP_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PlayMenu_W_SplitScreenMP_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_PlayMenu_W(int32 EntryPoint);
	void RefreshWingVisibility(bool HasWings);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayMenu_W_C">();
	}
	static class UPlayMenu_W_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayMenu_W_C>();
	}
};
static_assert(alignof(UPlayMenu_W_C) == 0x000008, "Wrong alignment on UPlayMenu_W_C");
static_assert(sizeof(UPlayMenu_W_C) == 0x000330, "Wrong size on UPlayMenu_W_C");
static_assert(offsetof(UPlayMenu_W_C, UberGraphFrame) == 0x0002C0, "Member 'UPlayMenu_W_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayMenu_W_C, NewAnimation) == 0x0002C8, "Member 'UPlayMenu_W_C::NewAnimation' has a wrong offset!");
static_assert(offsetof(UPlayMenu_W_C, Back_Button) == 0x0002D0, "Member 'UPlayMenu_W_C::Back_Button' has a wrong offset!");
static_assert(offsetof(UPlayMenu_W_C, CheckBox_69) == 0x0002D8, "Member 'UPlayMenu_W_C::CheckBox_69' has a wrong offset!");
static_assert(offsetof(UPlayMenu_W_C, Host_Button) == 0x0002E0, "Member 'UPlayMenu_W_C::Host_Button' has a wrong offset!");
static_assert(offsetof(UPlayMenu_W_C, Join_Button) == 0x0002E8, "Member 'UPlayMenu_W_C::Join_Button' has a wrong offset!");
static_assert(offsetof(UPlayMenu_W_C, LocalMultiplayer) == 0x0002F0, "Member 'UPlayMenu_W_C::LocalMultiplayer' has a wrong offset!");
static_assert(offsetof(UPlayMenu_W_C, Quit) == 0x0002F8, "Member 'UPlayMenu_W_C::Quit' has a wrong offset!");
static_assert(offsetof(UPlayMenu_W_C, Quit_1) == 0x000300, "Member 'UPlayMenu_W_C::Quit_1' has a wrong offset!");
static_assert(offsetof(UPlayMenu_W_C, Settings) == 0x000308, "Member 'UPlayMenu_W_C::Settings' has a wrong offset!");
static_assert(offsetof(UPlayMenu_W_C, Solo_Button) == 0x000310, "Member 'UPlayMenu_W_C::Solo_Button' has a wrong offset!");
static_assert(offsetof(UPlayMenu_W_C, SplitScreenMP) == 0x000318, "Member 'UPlayMenu_W_C::SplitScreenMP' has a wrong offset!");
static_assert(offsetof(UPlayMenu_W_C, TextBlock_81) == 0x000320, "Member 'UPlayMenu_W_C::TextBlock_81' has a wrong offset!");
static_assert(offsetof(UPlayMenu_W_C, WingsBox) == 0x000328, "Member 'UPlayMenu_W_C::WingsBox' has a wrong offset!");

}

