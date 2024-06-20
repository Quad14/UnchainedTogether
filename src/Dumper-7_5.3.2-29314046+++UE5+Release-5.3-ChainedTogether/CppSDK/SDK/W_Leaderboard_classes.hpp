#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Leaderboard

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Leaderboard.W_Leaderboard_C
// 0x0038 (0x02F8 - 0x02C0)
class UW_Leaderboard_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCircularThrobber*                      CircularThrobber_127;                              // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_0;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_40;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_118;                                   // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LeaderBoardSlot_C*                   W_LeaderBoardSlot;                                 // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         NumberOfPlayers;                                   // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_W_Leaderboard(int32 EntryPoint);
	void OnCallback_3FFA3D3A4374E19ACC27F9AFE19937BE(const struct FLeaderboardScoresDownloaded& Data, bool bWasSuccessful);
	void OnCallback_B0BEAA0349FD46D2D4257CAF0F71DB7D(const struct FLeaderboardScoresDownloaded& Data, bool bWasSuccessful);
	void OnCallback_E42254F44B5DFBBA02F05198DEA91F81(const struct FLeaderboardFindResult& Data, bool bWasSuccessful);
	void SetScrollOffset(double NewScrollOffset);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Leaderboard_C">();
	}
	static class UW_Leaderboard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Leaderboard_C>();
	}
};
static_assert(alignof(UW_Leaderboard_C) == 0x000008, "Wrong alignment on UW_Leaderboard_C");
static_assert(sizeof(UW_Leaderboard_C) == 0x0002F8, "Wrong size on UW_Leaderboard_C");
static_assert(offsetof(UW_Leaderboard_C, UberGraphFrame) == 0x0002C0, "Member 'UW_Leaderboard_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_Leaderboard_C, CircularThrobber_127) == 0x0002C8, "Member 'UW_Leaderboard_C::CircularThrobber_127' has a wrong offset!");
static_assert(offsetof(UW_Leaderboard_C, ScrollBox_0) == 0x0002D0, "Member 'UW_Leaderboard_C::ScrollBox_0' has a wrong offset!");
static_assert(offsetof(UW_Leaderboard_C, VerticalBox_40) == 0x0002D8, "Member 'UW_Leaderboard_C::VerticalBox_40' has a wrong offset!");
static_assert(offsetof(UW_Leaderboard_C, VerticalBox_118) == 0x0002E0, "Member 'UW_Leaderboard_C::VerticalBox_118' has a wrong offset!");
static_assert(offsetof(UW_Leaderboard_C, W_LeaderBoardSlot) == 0x0002E8, "Member 'UW_Leaderboard_C::W_LeaderBoardSlot' has a wrong offset!");
static_assert(offsetof(UW_Leaderboard_C, NumberOfPlayers) == 0x0002F0, "Member 'UW_Leaderboard_C::NumberOfPlayers' has a wrong offset!");

}

