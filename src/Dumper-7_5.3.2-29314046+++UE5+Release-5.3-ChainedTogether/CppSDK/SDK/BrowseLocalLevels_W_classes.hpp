#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BrowseLocalLevels_W

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SteamCorePro_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BrowseLocalLevels_W.BrowseLocalLevels_W_C
// 0x0100 (0x03C0 - 0x02C0)
class UBrowseLocalLevels_W_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 ButtonLeft_Image;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ButtonMiddle_Image;                                // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ButtonRight_Image;                                 // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       ItemName_EditableTextBox;                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                               MyLevels_WrapBox;                                  // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                PublishLevel_Button;                               // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         PublishLevelBorder_HB;                             // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSteamUGCDetails                       Details;                                           // 0x0300(0x00A8)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FUGCUpdateHandle                       CurrentItemHandle;                                 // 0x03A8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class FString                                 FilePath;                                          // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void BndEvt__BrowseLocalLevels_W_PublishLevel_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BrowseLocalLevels_W_PublishLevel_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BrowseLocalLevels_W_PublishLevel_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_BrowseLocalLevels_W(int32 EntryPoint);
	void OpenMainLevel(bool ForEditing_, const class FString& PathToCustomLevelFromGameDir);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BrowseLocalLevels_W_C">();
	}
	static class UBrowseLocalLevels_W_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBrowseLocalLevels_W_C>();
	}
};
static_assert(alignof(UBrowseLocalLevels_W_C) == 0x000008, "Wrong alignment on UBrowseLocalLevels_W_C");
static_assert(sizeof(UBrowseLocalLevels_W_C) == 0x0003C0, "Wrong size on UBrowseLocalLevels_W_C");
static_assert(offsetof(UBrowseLocalLevels_W_C, UberGraphFrame) == 0x0002C0, "Member 'UBrowseLocalLevels_W_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBrowseLocalLevels_W_C, ButtonLeft_Image) == 0x0002C8, "Member 'UBrowseLocalLevels_W_C::ButtonLeft_Image' has a wrong offset!");
static_assert(offsetof(UBrowseLocalLevels_W_C, ButtonMiddle_Image) == 0x0002D0, "Member 'UBrowseLocalLevels_W_C::ButtonMiddle_Image' has a wrong offset!");
static_assert(offsetof(UBrowseLocalLevels_W_C, ButtonRight_Image) == 0x0002D8, "Member 'UBrowseLocalLevels_W_C::ButtonRight_Image' has a wrong offset!");
static_assert(offsetof(UBrowseLocalLevels_W_C, ItemName_EditableTextBox) == 0x0002E0, "Member 'UBrowseLocalLevels_W_C::ItemName_EditableTextBox' has a wrong offset!");
static_assert(offsetof(UBrowseLocalLevels_W_C, MyLevels_WrapBox) == 0x0002E8, "Member 'UBrowseLocalLevels_W_C::MyLevels_WrapBox' has a wrong offset!");
static_assert(offsetof(UBrowseLocalLevels_W_C, PublishLevel_Button) == 0x0002F0, "Member 'UBrowseLocalLevels_W_C::PublishLevel_Button' has a wrong offset!");
static_assert(offsetof(UBrowseLocalLevels_W_C, PublishLevelBorder_HB) == 0x0002F8, "Member 'UBrowseLocalLevels_W_C::PublishLevelBorder_HB' has a wrong offset!");
static_assert(offsetof(UBrowseLocalLevels_W_C, Details) == 0x000300, "Member 'UBrowseLocalLevels_W_C::Details' has a wrong offset!");
static_assert(offsetof(UBrowseLocalLevels_W_C, CurrentItemHandle) == 0x0003A8, "Member 'UBrowseLocalLevels_W_C::CurrentItemHandle' has a wrong offset!");
static_assert(offsetof(UBrowseLocalLevels_W_C, FilePath) == 0x0003B0, "Member 'UBrowseLocalLevels_W_C::FilePath' has a wrong offset!");

}

