#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WorkShop_W

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WorkShop_W.WorkShop_W_C
// 0x0060 (0x0320 - 0x02C0)
class UWorkShop_W_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Back_Button;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Documentation_1;                            // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_299;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                ImportLevel_Button;                                // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ImportLevelBorder_HB;                              // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ImportLevelBorder_HB_1;                            // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                OpenSteamWorkshop_Button;                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                PublishLevel_Button;                               // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         PublishLevelBorder_HB;                             // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_0;                                  // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          ImportLevel;                                       // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WorkShop_W_Back_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WorkShop_W_Button_Documentation_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WorkShop_W_ImportLevel_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WorkShop_W_ImportLevel_Button_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WorkShop_W_ImportLevel_Button_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WorkShop_W_OpenSteamWorkshop_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WorkShop_W_PublishLevel_Button_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WorkShop_W_PublishLevel_Button_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WorkShop_W_PublishLevel_Button_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_WorkShop_W(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WorkShop_W_C">();
	}
	static class UWorkShop_W_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWorkShop_W_C>();
	}
};
static_assert(alignof(UWorkShop_W_C) == 0x000008, "Wrong alignment on UWorkShop_W_C");
static_assert(sizeof(UWorkShop_W_C) == 0x000320, "Wrong size on UWorkShop_W_C");
static_assert(offsetof(UWorkShop_W_C, UberGraphFrame) == 0x0002C0, "Member 'UWorkShop_W_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWorkShop_W_C, Back_Button) == 0x0002C8, "Member 'UWorkShop_W_C::Back_Button' has a wrong offset!");
static_assert(offsetof(UWorkShop_W_C, Button_Documentation_1) == 0x0002D0, "Member 'UWorkShop_W_C::Button_Documentation_1' has a wrong offset!");
static_assert(offsetof(UWorkShop_W_C, Image_299) == 0x0002D8, "Member 'UWorkShop_W_C::Image_299' has a wrong offset!");
static_assert(offsetof(UWorkShop_W_C, ImportLevel_Button) == 0x0002E0, "Member 'UWorkShop_W_C::ImportLevel_Button' has a wrong offset!");
static_assert(offsetof(UWorkShop_W_C, ImportLevelBorder_HB) == 0x0002E8, "Member 'UWorkShop_W_C::ImportLevelBorder_HB' has a wrong offset!");
static_assert(offsetof(UWorkShop_W_C, ImportLevelBorder_HB_1) == 0x0002F0, "Member 'UWorkShop_W_C::ImportLevelBorder_HB_1' has a wrong offset!");
static_assert(offsetof(UWorkShop_W_C, OpenSteamWorkshop_Button) == 0x0002F8, "Member 'UWorkShop_W_C::OpenSteamWorkshop_Button' has a wrong offset!");
static_assert(offsetof(UWorkShop_W_C, PublishLevel_Button) == 0x000300, "Member 'UWorkShop_W_C::PublishLevel_Button' has a wrong offset!");
static_assert(offsetof(UWorkShop_W_C, PublishLevelBorder_HB) == 0x000308, "Member 'UWorkShop_W_C::PublishLevelBorder_HB' has a wrong offset!");
static_assert(offsetof(UWorkShop_W_C, WidgetSwitcher_0) == 0x000310, "Member 'UWorkShop_W_C::WidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UWorkShop_W_C, ImportLevel) == 0x000318, "Member 'UWorkShop_W_C::ImportLevel' has a wrong offset!");

}

