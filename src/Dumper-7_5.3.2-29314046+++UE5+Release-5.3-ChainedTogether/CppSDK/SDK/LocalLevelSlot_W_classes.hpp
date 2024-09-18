#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LocalLevelSlot_W

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LocalLevelSlot_W.LocalLevelSlot_W_C
// 0x0078 (0x0338 - 0x02C0)
class ULocalLevelSlot_W_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_1;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_2;                                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_3;                                          // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Delete_Button;                                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Edit_Button;                                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Level_Button;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LevelName_Txt;                                     // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Edit;                                              // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_301[0x7];                                      // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LevelName;                                         // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                 LevelRelativePath;                                 // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UUserWidget*                            Parent;                                            // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Selected;                                          // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Update;                                            // 0x0331(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__LocalLevelSlot_W_Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__LocalLevelSlot_W_Delete_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__LocalLevelSlot_W_Edit_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void Deselect();
	void ExecuteUbergraph_LocalLevelSlot_W(int32 EntryPoint);
	class FString GetPath();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LocalLevelSlot_W_C">();
	}
	static class ULocalLevelSlot_W_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULocalLevelSlot_W_C>();
	}
};
static_assert(alignof(ULocalLevelSlot_W_C) == 0x000008, "Wrong alignment on ULocalLevelSlot_W_C");
static_assert(sizeof(ULocalLevelSlot_W_C) == 0x000338, "Wrong size on ULocalLevelSlot_W_C");
static_assert(offsetof(ULocalLevelSlot_W_C, UberGraphFrame) == 0x0002C0, "Member 'ULocalLevelSlot_W_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULocalLevelSlot_W_C, Border_1) == 0x0002C8, "Member 'ULocalLevelSlot_W_C::Border_1' has a wrong offset!");
static_assert(offsetof(ULocalLevelSlot_W_C, Border_2) == 0x0002D0, "Member 'ULocalLevelSlot_W_C::Border_2' has a wrong offset!");
static_assert(offsetof(ULocalLevelSlot_W_C, Border_3) == 0x0002D8, "Member 'ULocalLevelSlot_W_C::Border_3' has a wrong offset!");
static_assert(offsetof(ULocalLevelSlot_W_C, Delete_Button) == 0x0002E0, "Member 'ULocalLevelSlot_W_C::Delete_Button' has a wrong offset!");
static_assert(offsetof(ULocalLevelSlot_W_C, Edit_Button) == 0x0002E8, "Member 'ULocalLevelSlot_W_C::Edit_Button' has a wrong offset!");
static_assert(offsetof(ULocalLevelSlot_W_C, Level_Button) == 0x0002F0, "Member 'ULocalLevelSlot_W_C::Level_Button' has a wrong offset!");
static_assert(offsetof(ULocalLevelSlot_W_C, LevelName_Txt) == 0x0002F8, "Member 'ULocalLevelSlot_W_C::LevelName_Txt' has a wrong offset!");
static_assert(offsetof(ULocalLevelSlot_W_C, Edit) == 0x000300, "Member 'ULocalLevelSlot_W_C::Edit' has a wrong offset!");
static_assert(offsetof(ULocalLevelSlot_W_C, LevelName) == 0x000308, "Member 'ULocalLevelSlot_W_C::LevelName' has a wrong offset!");
static_assert(offsetof(ULocalLevelSlot_W_C, LevelRelativePath) == 0x000318, "Member 'ULocalLevelSlot_W_C::LevelRelativePath' has a wrong offset!");
static_assert(offsetof(ULocalLevelSlot_W_C, Parent) == 0x000328, "Member 'ULocalLevelSlot_W_C::Parent' has a wrong offset!");
static_assert(offsetof(ULocalLevelSlot_W_C, Selected) == 0x000330, "Member 'ULocalLevelSlot_W_C::Selected' has a wrong offset!");
static_assert(offsetof(ULocalLevelSlot_W_C, Update) == 0x000331, "Member 'ULocalLevelSlot_W_C::Update' has a wrong offset!");

}

