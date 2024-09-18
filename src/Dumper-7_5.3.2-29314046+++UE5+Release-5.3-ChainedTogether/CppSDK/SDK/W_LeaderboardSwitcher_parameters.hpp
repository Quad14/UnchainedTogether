#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_LeaderboardSwitcher

#include "Basic.hpp"


namespace SDK::Params
{

// Function W_LeaderboardSwitcher.W_LeaderboardSwitcher_C.ExecuteUbergraph_W_LeaderboardSwitcher
// 0x0038 (0x0038 - 0x0000)
struct W_LeaderboardSwitcher_C_ExecuteUbergraph_W_LeaderboardSwitcher final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMainMenu_W_C*>                  CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UMainMenu_W_C*                          CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                K2Node_CustomEvent_Target;                         // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_LeaderboardSwitcher_C_ExecuteUbergraph_W_LeaderboardSwitcher) == 0x000008, "Wrong alignment on W_LeaderboardSwitcher_C_ExecuteUbergraph_W_LeaderboardSwitcher");
static_assert(sizeof(W_LeaderboardSwitcher_C_ExecuteUbergraph_W_LeaderboardSwitcher) == 0x000038, "Wrong size on W_LeaderboardSwitcher_C_ExecuteUbergraph_W_LeaderboardSwitcher");
static_assert(offsetof(W_LeaderboardSwitcher_C_ExecuteUbergraph_W_LeaderboardSwitcher, EntryPoint) == 0x000000, "Member 'W_LeaderboardSwitcher_C_ExecuteUbergraph_W_LeaderboardSwitcher::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_LeaderboardSwitcher_C_ExecuteUbergraph_W_LeaderboardSwitcher, CallFunc_GetAllWidgetsOfClass_FoundWidgets) == 0x000008, "Member 'W_LeaderboardSwitcher_C_ExecuteUbergraph_W_LeaderboardSwitcher::CallFunc_GetAllWidgetsOfClass_FoundWidgets' has a wrong offset!");
static_assert(offsetof(W_LeaderboardSwitcher_C_ExecuteUbergraph_W_LeaderboardSwitcher, CallFunc_Array_Get_Item) == 0x000018, "Member 'W_LeaderboardSwitcher_C_ExecuteUbergraph_W_LeaderboardSwitcher::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(W_LeaderboardSwitcher_C_ExecuteUbergraph_W_LeaderboardSwitcher, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'W_LeaderboardSwitcher_C_ExecuteUbergraph_W_LeaderboardSwitcher::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_LeaderboardSwitcher_C_ExecuteUbergraph_W_LeaderboardSwitcher, K2Node_CustomEvent_Target) == 0x000028, "Member 'W_LeaderboardSwitcher_C_ExecuteUbergraph_W_LeaderboardSwitcher::K2Node_CustomEvent_Target' has a wrong offset!");
static_assert(offsetof(W_LeaderboardSwitcher_C_ExecuteUbergraph_W_LeaderboardSwitcher, CallFunc_GetPlayerController_ReturnValue) == 0x000030, "Member 'W_LeaderboardSwitcher_C_ExecuteUbergraph_W_LeaderboardSwitcher::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");

// Function W_LeaderboardSwitcher.W_LeaderboardSwitcher_C.SelectTab
// 0x0008 (0x0008 - 0x0000)
struct W_LeaderboardSwitcher_C_SelectTab final
{
public:
	class UBorder*                                Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_LeaderboardSwitcher_C_SelectTab) == 0x000008, "Wrong alignment on W_LeaderboardSwitcher_C_SelectTab");
static_assert(sizeof(W_LeaderboardSwitcher_C_SelectTab) == 0x000008, "Wrong size on W_LeaderboardSwitcher_C_SelectTab");
static_assert(offsetof(W_LeaderboardSwitcher_C_SelectTab, Target) == 0x000000, "Member 'W_LeaderboardSwitcher_C_SelectTab::Target' has a wrong offset!");

}

