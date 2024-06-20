#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Button

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Button.W_Button_C
// 0x0098 (0x0358 - 0x02C0)
class UW_Button_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ClickedAnim;                                       // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                Button_0;                                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MenuButtonText_C*                    W_MenuButtonText_C_0;                              // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x02E0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FLinearColor                           UnhoveredBorderColor;                              // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSlateColor                            UnhoveredTextColor;                                // 0x0308(0x0014)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          RoundBorders;                                      // 0x031C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_3327[0x3];                                     // 0x031D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           HoveredBorderColor;                                // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         FontSize;                                          // 0x0330(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSlateColor                            HoveredTextColor;                                  // 0x0334(0x0014)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__W_Button_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__W_Button_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__W_Buttons_Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_W_Button(int32 EntryPoint);
	void OnClicked__DelegateSignature();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Button_C">();
	}
	static class UW_Button_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Button_C>();
	}
};
static_assert(alignof(UW_Button_C) == 0x000008, "Wrong alignment on UW_Button_C");
static_assert(sizeof(UW_Button_C) == 0x000358, "Wrong size on UW_Button_C");
static_assert(offsetof(UW_Button_C, UberGraphFrame) == 0x0002C0, "Member 'UW_Button_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_Button_C, ClickedAnim) == 0x0002C8, "Member 'UW_Button_C::ClickedAnim' has a wrong offset!");
static_assert(offsetof(UW_Button_C, Button_0) == 0x0002D0, "Member 'UW_Button_C::Button_0' has a wrong offset!");
static_assert(offsetof(UW_Button_C, W_MenuButtonText_C_0) == 0x0002D8, "Member 'UW_Button_C::W_MenuButtonText_C_0' has a wrong offset!");
static_assert(offsetof(UW_Button_C, Text) == 0x0002E0, "Member 'UW_Button_C::Text' has a wrong offset!");
static_assert(offsetof(UW_Button_C, UnhoveredBorderColor) == 0x0002F8, "Member 'UW_Button_C::UnhoveredBorderColor' has a wrong offset!");
static_assert(offsetof(UW_Button_C, UnhoveredTextColor) == 0x000308, "Member 'UW_Button_C::UnhoveredTextColor' has a wrong offset!");
static_assert(offsetof(UW_Button_C, RoundBorders) == 0x00031C, "Member 'UW_Button_C::RoundBorders' has a wrong offset!");
static_assert(offsetof(UW_Button_C, HoveredBorderColor) == 0x000320, "Member 'UW_Button_C::HoveredBorderColor' has a wrong offset!");
static_assert(offsetof(UW_Button_C, FontSize) == 0x000330, "Member 'UW_Button_C::FontSize' has a wrong offset!");
static_assert(offsetof(UW_Button_C, HoveredTextColor) == 0x000334, "Member 'UW_Button_C::HoveredTextColor' has a wrong offset!");
static_assert(offsetof(UW_Button_C, OnClicked) == 0x000348, "Member 'UW_Button_C::OnClicked' has a wrong offset!");

}

