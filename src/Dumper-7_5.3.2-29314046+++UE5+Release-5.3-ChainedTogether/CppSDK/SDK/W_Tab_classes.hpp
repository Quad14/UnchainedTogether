#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Tab

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Tab.W_Tab_C
// 0x00C0 (0x0380 - 0x02C0)
class UW_Tab_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UnderlineAnim;                                     // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ClickAnim_02;                                      // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ClickAnim;                                         // 0x02D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_105;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_0;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_85;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 UnderlineImage;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x0300(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FLinearColor                           UnhoveredBorderColor;                              // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSlateColor                            TextColor;                                         // 0x0328(0x0014)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          RoundBorders;                                      // 0x033C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_35B9[0x3];                                     // 0x033D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           HoveredBorderColor;                                // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Selected;                                          // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35BA[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Category;                                          // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UUserWidget*                            ParentWidget;                                      // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__W_Button_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__W_Button_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__W_Tabs_Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_W_Tab(int32 EntryPoint);
	void OnClicked__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void SetParentWidget(class UUserWidget* Parent);
	void SetSelected(bool Param_Selected);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Tab_C">();
	}
	static class UW_Tab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Tab_C>();
	}
};
static_assert(alignof(UW_Tab_C) == 0x000008, "Wrong alignment on UW_Tab_C");
static_assert(sizeof(UW_Tab_C) == 0x000380, "Wrong size on UW_Tab_C");
static_assert(offsetof(UW_Tab_C, UberGraphFrame) == 0x0002C0, "Member 'UW_Tab_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_Tab_C, UnderlineAnim) == 0x0002C8, "Member 'UW_Tab_C::UnderlineAnim' has a wrong offset!");
static_assert(offsetof(UW_Tab_C, ClickAnim_02) == 0x0002D0, "Member 'UW_Tab_C::ClickAnim_02' has a wrong offset!");
static_assert(offsetof(UW_Tab_C, ClickAnim) == 0x0002D8, "Member 'UW_Tab_C::ClickAnim' has a wrong offset!");
static_assert(offsetof(UW_Tab_C, Border_105) == 0x0002E0, "Member 'UW_Tab_C::Border_105' has a wrong offset!");
static_assert(offsetof(UW_Tab_C, Button_0) == 0x0002E8, "Member 'UW_Tab_C::Button_0' has a wrong offset!");
static_assert(offsetof(UW_Tab_C, TextBlock_85) == 0x0002F0, "Member 'UW_Tab_C::TextBlock_85' has a wrong offset!");
static_assert(offsetof(UW_Tab_C, UnderlineImage) == 0x0002F8, "Member 'UW_Tab_C::UnderlineImage' has a wrong offset!");
static_assert(offsetof(UW_Tab_C, Text) == 0x000300, "Member 'UW_Tab_C::Text' has a wrong offset!");
static_assert(offsetof(UW_Tab_C, UnhoveredBorderColor) == 0x000318, "Member 'UW_Tab_C::UnhoveredBorderColor' has a wrong offset!");
static_assert(offsetof(UW_Tab_C, TextColor) == 0x000328, "Member 'UW_Tab_C::TextColor' has a wrong offset!");
static_assert(offsetof(UW_Tab_C, RoundBorders) == 0x00033C, "Member 'UW_Tab_C::RoundBorders' has a wrong offset!");
static_assert(offsetof(UW_Tab_C, HoveredBorderColor) == 0x000340, "Member 'UW_Tab_C::HoveredBorderColor' has a wrong offset!");
static_assert(offsetof(UW_Tab_C, OnClicked) == 0x000350, "Member 'UW_Tab_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UW_Tab_C, Selected) == 0x000360, "Member 'UW_Tab_C::Selected' has a wrong offset!");
static_assert(offsetof(UW_Tab_C, Category) == 0x000368, "Member 'UW_Tab_C::Category' has a wrong offset!");
static_assert(offsetof(UW_Tab_C, ParentWidget) == 0x000378, "Member 'UW_Tab_C::ParentWidget' has a wrong offset!");

}

