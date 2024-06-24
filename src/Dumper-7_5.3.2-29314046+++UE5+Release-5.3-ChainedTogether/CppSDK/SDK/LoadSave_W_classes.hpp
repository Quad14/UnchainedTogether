#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoadSave_W

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LoadSave_W.LoadSave_W_C
// 0x0040 (0x0300 - 0x02C0)
class ULoadSave_W_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             Nosave;                                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_Panel;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_30;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_40;                                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         PlayerNumberSection;                               // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_32FE[0x4];                                     // 0x02EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Mode;                                              // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void AddPreviousSaveToList(const struct FVector& PlayerLocation, int32 Timer, const class FString& NumPlayers, const class FString& Param_Mode);
	void ExecuteUbergraph_LoadSave_W(int32 EntryPoint);
	void RefreshSaves();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LoadSave_W_C">();
	}
	static class ULoadSave_W_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoadSave_W_C>();
	}
};
static_assert(alignof(ULoadSave_W_C) == 0x000008, "Wrong alignment on ULoadSave_W_C");
static_assert(sizeof(ULoadSave_W_C) == 0x000300, "Wrong size on ULoadSave_W_C");
static_assert(offsetof(ULoadSave_W_C, UberGraphFrame) == 0x0002C0, "Member 'ULoadSave_W_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULoadSave_W_C, Nosave) == 0x0002C8, "Member 'ULoadSave_W_C::Nosave' has a wrong offset!");
static_assert(offsetof(ULoadSave_W_C, ScrollBox_Panel) == 0x0002D0, "Member 'ULoadSave_W_C::ScrollBox_Panel' has a wrong offset!");
static_assert(offsetof(ULoadSave_W_C, VerticalBox_30) == 0x0002D8, "Member 'ULoadSave_W_C::VerticalBox_30' has a wrong offset!");
static_assert(offsetof(ULoadSave_W_C, VerticalBox_40) == 0x0002E0, "Member 'ULoadSave_W_C::VerticalBox_40' has a wrong offset!");
static_assert(offsetof(ULoadSave_W_C, PlayerNumberSection) == 0x0002E8, "Member 'ULoadSave_W_C::PlayerNumberSection' has a wrong offset!");
static_assert(offsetof(ULoadSave_W_C, Mode) == 0x0002F0, "Member 'ULoadSave_W_C::Mode' has a wrong offset!");

}

