#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CharacterSlot

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "E_ChoosenChar_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_CharacterSlot.W_CharacterSlot_C
// 0x0040 (0x0300 - 0x02C0)
class UW_CharacterSlot_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Slide;                                             // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                DetectiveButton;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_73;                                          // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Selected;                                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	E_ChoosenChar                                 Char;                                              // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_2E9[0x7];                                      // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_Lobby_C*                             Parent;                                            // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         PlayerIndex;                                       // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void Changeimage();
	void ExecuteUbergraph_W_CharacterSlot(int32 EntryPoint);
	void FirstChoose(bool Right);
	void PreConstruct(bool IsDesignTime);
	void Select(bool Select_0);
	void SequenceEvent();
	void SequenceEvent__ENTRYPOINTW_CharacterSlot();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_CharacterSlot_C">();
	}
	static class UW_CharacterSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_CharacterSlot_C>();
	}
};
static_assert(alignof(UW_CharacterSlot_C) == 0x000008, "Wrong alignment on UW_CharacterSlot_C");
static_assert(sizeof(UW_CharacterSlot_C) == 0x000300, "Wrong size on UW_CharacterSlot_C");
static_assert(offsetof(UW_CharacterSlot_C, UberGraphFrame) == 0x0002C0, "Member 'UW_CharacterSlot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_CharacterSlot_C, Slide) == 0x0002C8, "Member 'UW_CharacterSlot_C::Slide' has a wrong offset!");
static_assert(offsetof(UW_CharacterSlot_C, DetectiveButton) == 0x0002D0, "Member 'UW_CharacterSlot_C::DetectiveButton' has a wrong offset!");
static_assert(offsetof(UW_CharacterSlot_C, Image_73) == 0x0002D8, "Member 'UW_CharacterSlot_C::Image_73' has a wrong offset!");
static_assert(offsetof(UW_CharacterSlot_C, Selected) == 0x0002E0, "Member 'UW_CharacterSlot_C::Selected' has a wrong offset!");
static_assert(offsetof(UW_CharacterSlot_C, Char) == 0x0002E8, "Member 'UW_CharacterSlot_C::Char' has a wrong offset!");
static_assert(offsetof(UW_CharacterSlot_C, Parent) == 0x0002F0, "Member 'UW_CharacterSlot_C::Parent' has a wrong offset!");
static_assert(offsetof(UW_CharacterSlot_C, PlayerIndex) == 0x0002F8, "Member 'UW_CharacterSlot_C::PlayerIndex' has a wrong offset!");

}

