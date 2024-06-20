#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_LeaderBoardSlot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SteamCorePro_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_LeaderBoardSlot.W_LeaderBoardSlot_C
// 0x0038 (0x02F8 - 0x02C0)
class UW_LeaderBoardSlot_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_59;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_1;                                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_2;                                       // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Rank;                                              // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         Time;                                              // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSteamID                               SteamID;                                           // 0x02F0(0x0008)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)

public:
	void Construct();
	void ExecuteUbergraph_W_LeaderBoardSlot(int32 EntryPoint);
	void RefreshSlot(const struct FSteamID& Param_SteamID, int32 Param_Time, int32 Param_Rank);
	void UpdateTime();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_LeaderBoardSlot_C">();
	}
	static class UW_LeaderBoardSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_LeaderBoardSlot_C>();
	}
};
static_assert(alignof(UW_LeaderBoardSlot_C) == 0x000008, "Wrong alignment on UW_LeaderBoardSlot_C");
static_assert(sizeof(UW_LeaderBoardSlot_C) == 0x0002F8, "Wrong size on UW_LeaderBoardSlot_C");
static_assert(offsetof(UW_LeaderBoardSlot_C, UberGraphFrame) == 0x0002C0, "Member 'UW_LeaderBoardSlot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_LeaderBoardSlot_C, Image_59) == 0x0002C8, "Member 'UW_LeaderBoardSlot_C::Image_59' has a wrong offset!");
static_assert(offsetof(UW_LeaderBoardSlot_C, TextBlock) == 0x0002D0, "Member 'UW_LeaderBoardSlot_C::TextBlock' has a wrong offset!");
static_assert(offsetof(UW_LeaderBoardSlot_C, TextBlock_1) == 0x0002D8, "Member 'UW_LeaderBoardSlot_C::TextBlock_1' has a wrong offset!");
static_assert(offsetof(UW_LeaderBoardSlot_C, TextBlock_2) == 0x0002E0, "Member 'UW_LeaderBoardSlot_C::TextBlock_2' has a wrong offset!");
static_assert(offsetof(UW_LeaderBoardSlot_C, Rank) == 0x0002E8, "Member 'UW_LeaderBoardSlot_C::Rank' has a wrong offset!");
static_assert(offsetof(UW_LeaderBoardSlot_C, Time) == 0x0002EC, "Member 'UW_LeaderBoardSlot_C::Time' has a wrong offset!");
static_assert(offsetof(UW_LeaderBoardSlot_C, SteamID) == 0x0002F0, "Member 'UW_LeaderBoardSlot_C::SteamID' has a wrong offset!");

}

