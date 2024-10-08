#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CharacterSelector

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "E_ChoosenChar_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_CharacterSelector.W_CharacterSelector_C
// 0x0078 (0x0338 - 0x02C0)
class UW_CharacterSelector_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Left_Button;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Right_Button;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_79;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_CharacterSlot_C*                     W_CharacterSlot_Josh_01;                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 Text;                                              // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         PlayerIndex;                                       // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_2FC[0x4];                                      // 0x02FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        SlotTranslation01;                                 // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SlotTranslation02;                                 // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SlotTranslation03;                                 // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SlotTranslation04;                                 // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SlideDelta;                                        // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Right;                                             // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_329[0x3];                                      // 0x0329(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SkinNumber;                                        // 0x032C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ChoosenChar                                 ChoosenCharacter;                                  // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__W_CharacterSelector_Left_Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__W_CharacterSelector_Right_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void ChangeSlot(bool Right_0);
	void Check_Negative_Translate(TArray<class UW_CharacterSlot_C*>& Slots, bool* ContainsNegative);
	void Check_Positive_Translate(TArray<class UW_CharacterSlot_C*>& Slots, bool* ContainsPositive);
	void CheckHigherSlot(TArray<class UW_CharacterSlot_C*>& Slots, class UW_CharacterSlot_C** HigherSlot1);
	void CheckLowerSlot(TArray<class UW_CharacterSlot_C*>& Slots, class UW_CharacterSlot_C** LowerSlot);
	void Construct();
	void ExecuteUbergraph_W_CharacterSelector(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_CharacterSelector_C">();
	}
	static class UW_CharacterSelector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_CharacterSelector_C>();
	}
};
static_assert(alignof(UW_CharacterSelector_C) == 0x000008, "Wrong alignment on UW_CharacterSelector_C");
static_assert(sizeof(UW_CharacterSelector_C) == 0x000338, "Wrong size on UW_CharacterSelector_C");
static_assert(offsetof(UW_CharacterSelector_C, UberGraphFrame) == 0x0002C0, "Member 'UW_CharacterSelector_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_CharacterSelector_C, Left_Button) == 0x0002C8, "Member 'UW_CharacterSelector_C::Left_Button' has a wrong offset!");
static_assert(offsetof(UW_CharacterSelector_C, Right_Button) == 0x0002D0, "Member 'UW_CharacterSelector_C::Right_Button' has a wrong offset!");
static_assert(offsetof(UW_CharacterSelector_C, TextBlock_79) == 0x0002D8, "Member 'UW_CharacterSelector_C::TextBlock_79' has a wrong offset!");
static_assert(offsetof(UW_CharacterSelector_C, W_CharacterSlot_Josh_01) == 0x0002E0, "Member 'UW_CharacterSelector_C::W_CharacterSlot_Josh_01' has a wrong offset!");
static_assert(offsetof(UW_CharacterSelector_C, Text) == 0x0002E8, "Member 'UW_CharacterSelector_C::Text' has a wrong offset!");
static_assert(offsetof(UW_CharacterSelector_C, PlayerIndex) == 0x0002F8, "Member 'UW_CharacterSelector_C::PlayerIndex' has a wrong offset!");
static_assert(offsetof(UW_CharacterSelector_C, SlotTranslation01) == 0x000300, "Member 'UW_CharacterSelector_C::SlotTranslation01' has a wrong offset!");
static_assert(offsetof(UW_CharacterSelector_C, SlotTranslation02) == 0x000308, "Member 'UW_CharacterSelector_C::SlotTranslation02' has a wrong offset!");
static_assert(offsetof(UW_CharacterSelector_C, SlotTranslation03) == 0x000310, "Member 'UW_CharacterSelector_C::SlotTranslation03' has a wrong offset!");
static_assert(offsetof(UW_CharacterSelector_C, SlotTranslation04) == 0x000318, "Member 'UW_CharacterSelector_C::SlotTranslation04' has a wrong offset!");
static_assert(offsetof(UW_CharacterSelector_C, SlideDelta) == 0x000320, "Member 'UW_CharacterSelector_C::SlideDelta' has a wrong offset!");
static_assert(offsetof(UW_CharacterSelector_C, Right) == 0x000328, "Member 'UW_CharacterSelector_C::Right' has a wrong offset!");
static_assert(offsetof(UW_CharacterSelector_C, SkinNumber) == 0x00032C, "Member 'UW_CharacterSelector_C::SkinNumber' has a wrong offset!");
static_assert(offsetof(UW_CharacterSelector_C, ChoosenCharacter) == 0x000330, "Member 'UW_CharacterSelector_C::ChoosenCharacter' has a wrong offset!");

}

