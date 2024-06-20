#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CustomGI

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "E_Gamemodes_structs.hpp"
#include "S_ProgressSave_structs.hpp"
#include "OnlineSubsystemUtils_structs.hpp"


namespace SDK::Params
{

// Function CustomGI.CustomGI_C.Assign Controllers to Players
// 0x0008 (0x0008 - 0x0000)
struct CustomGI_C_Assign_Controllers_to_Players final
{
public:
	int32                                         ControllersNumber;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PlayerNumber;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CustomGI_C_Assign_Controllers_to_Players) == 0x000004, "Wrong alignment on CustomGI_C_Assign_Controllers_to_Players");
static_assert(sizeof(CustomGI_C_Assign_Controllers_to_Players) == 0x000008, "Wrong size on CustomGI_C_Assign_Controllers_to_Players");
static_assert(offsetof(CustomGI_C_Assign_Controllers_to_Players, ControllersNumber) == 0x000000, "Member 'CustomGI_C_Assign_Controllers_to_Players::ControllersNumber' has a wrong offset!");
static_assert(offsetof(CustomGI_C_Assign_Controllers_to_Players, PlayerNumber) == 0x000004, "Member 'CustomGI_C_Assign_Controllers_to_Players::PlayerNumber' has a wrong offset!");

// Function CustomGI.CustomGI_C.CustomEvent
// 0x0138 (0x0138 - 0x0000)
struct CustomGI_C_CustomEvent final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3407[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalPlayerNum;                                    // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 InvitedBy;                                         // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FBlueprintSessionResult                Session;                                           // 0x0018(0x0120)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(CustomGI_C_CustomEvent) == 0x000008, "Wrong alignment on CustomGI_C_CustomEvent");
static_assert(sizeof(CustomGI_C_CustomEvent) == 0x000138, "Wrong size on CustomGI_C_CustomEvent");
static_assert(offsetof(CustomGI_C_CustomEvent, bWasSuccessful) == 0x000000, "Member 'CustomGI_C_CustomEvent::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(CustomGI_C_CustomEvent, LocalPlayerNum) == 0x000004, "Member 'CustomGI_C_CustomEvent::LocalPlayerNum' has a wrong offset!");
static_assert(offsetof(CustomGI_C_CustomEvent, InvitedBy) == 0x000008, "Member 'CustomGI_C_CustomEvent::InvitedBy' has a wrong offset!");
static_assert(offsetof(CustomGI_C_CustomEvent, Session) == 0x000018, "Member 'CustomGI_C_CustomEvent::Session' has a wrong offset!");

// Function CustomGI.CustomGI_C.ExecuteUbergraph_CustomGI
// 0x01A0 (0x01A0 - 0x0000)
struct CustomGI_C_ExecuteUbergraph_CustomGI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3408[0x2];                                     // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_Count;                                // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_WingIndex;                            // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bWasSuccessful, int32 LocalPlayerNum, const class FString& InvitedBy, struct FBlueprintSessionResult& Session)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3409[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetAchievement_ReturnValue;               // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_StoreStats_ReturnValue;                   // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x004E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_340A[0x1];                                     // 0x004F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_LocalPlayerNum;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_340B[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_InvitedBy;                      // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FBlueprintSessionResult                K2Node_CustomEvent_Session;                        // 0x0068(0x0120)(ConstParm)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0188(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UJoinSessionCallbackProxy*              CallFunc_JoinSession_ReturnValue;                  // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CustomGI_C_ExecuteUbergraph_CustomGI) == 0x000008, "Wrong alignment on CustomGI_C_ExecuteUbergraph_CustomGI");
static_assert(sizeof(CustomGI_C_ExecuteUbergraph_CustomGI) == 0x0001A0, "Wrong size on CustomGI_C_ExecuteUbergraph_CustomGI");
static_assert(offsetof(CustomGI_C_ExecuteUbergraph_CustomGI, EntryPoint) == 0x000000, "Member 'CustomGI_C_ExecuteUbergraph_CustomGI::EntryPoint' has a wrong offset!");
static_assert(offsetof(CustomGI_C_ExecuteUbergraph_CustomGI, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'CustomGI_C_ExecuteUbergraph_CustomGI::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CustomGI_C_ExecuteUbergraph_CustomGI, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'CustomGI_C_ExecuteUbergraph_CustomGI::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(CustomGI_C_ExecuteUbergraph_CustomGI, Temp_bool_Has_Been_Initd_Variable) == 0x000024, "Member 'CustomGI_C_ExecuteUbergraph_CustomGI::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(CustomGI_C_ExecuteUbergraph_CustomGI, Temp_bool_IsClosed_Variable) == 0x000025, "Member 'CustomGI_C_ExecuteUbergraph_CustomGI::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(CustomGI_C_ExecuteUbergraph_CustomGI, K2Node_Event_Count) == 0x000028, "Member 'CustomGI_C_ExecuteUbergraph_CustomGI::K2Node_Event_Count' has a wrong offset!");
static_assert(offsetof(CustomGI_C_ExecuteUbergraph_CustomGI, K2Node_Event_WingIndex) == 0x00002C, "Member 'CustomGI_C_ExecuteUbergraph_CustomGI::K2Node_Event_WingIndex' has a wrong offset!");
static_assert(offsetof(CustomGI_C_ExecuteUbergraph_CustomGI, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'CustomGI_C_ExecuteUbergraph_CustomGI::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CustomGI_C_ExecuteUbergraph_CustomGI, K2Node_CreateDelegate_OutputDelegate_2) == 0x000034, "Member 'CustomGI_C_ExecuteUbergraph_CustomGI::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(CustomGI_C_ExecuteUbergraph_CustomGI, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000044, "Member 'CustomGI_C_ExecuteUbergraph_CustomGI::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CustomGI_C_ExecuteUbergraph_CustomGI, CallFunc_Array_AddUnique_ReturnValue) == 0x000048, "Member 'CustomGI_C_ExecuteUbergraph_CustomGI::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(CustomGI_C_ExecuteUbergraph_CustomGI, CallFunc_SetAchievement_ReturnValue) == 0x00004C, "Member 'CustomGI_C_ExecuteUbergraph_CustomGI::CallFunc_SetAchievement_ReturnValue' has a wrong offset!");
static_assert(offsetof(CustomGI_C_ExecuteUbergraph_CustomGI, CallFunc_StoreStats_ReturnValue) == 0x00004D, "Member 'CustomGI_C_ExecuteUbergraph_CustomGI::CallFunc_StoreStats_ReturnValue' has a wrong offset!");
static_assert(offsetof(CustomGI_C_ExecuteUbergraph_CustomGI, K2Node_CustomEvent_bWasSuccessful) == 0x00004E, "Member 'CustomGI_C_ExecuteUbergraph_CustomGI::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(CustomGI_C_ExecuteUbergraph_CustomGI, K2Node_CustomEvent_LocalPlayerNum) == 0x000050, "Member 'CustomGI_C_ExecuteUbergraph_CustomGI::K2Node_CustomEvent_LocalPlayerNum' has a wrong offset!");
static_assert(offsetof(CustomGI_C_ExecuteUbergraph_CustomGI, K2Node_CustomEvent_InvitedBy) == 0x000058, "Member 'CustomGI_C_ExecuteUbergraph_CustomGI::K2Node_CustomEvent_InvitedBy' has a wrong offset!");
static_assert(offsetof(CustomGI_C_ExecuteUbergraph_CustomGI, K2Node_CustomEvent_Session) == 0x000068, "Member 'CustomGI_C_ExecuteUbergraph_CustomGI::K2Node_CustomEvent_Session' has a wrong offset!");
static_assert(offsetof(CustomGI_C_ExecuteUbergraph_CustomGI, CallFunc_GetPlayerController_ReturnValue) == 0x000188, "Member 'CustomGI_C_ExecuteUbergraph_CustomGI::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CustomGI_C_ExecuteUbergraph_CustomGI, CallFunc_JoinSession_ReturnValue) == 0x000190, "Member 'CustomGI_C_ExecuteUbergraph_CustomGI::CallFunc_JoinSession_ReturnValue' has a wrong offset!");
static_assert(offsetof(CustomGI_C_ExecuteUbergraph_CustomGI, CallFunc_IsValid_ReturnValue) == 0x000198, "Member 'CustomGI_C_ExecuteUbergraph_CustomGI::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CustomGI.CustomGI_C.GetCollectedWings
// 0x0010 (0x0010 - 0x0000)
struct CustomGI_C_GetCollectedWings final
{
public:
	TArray<int32>                                 Wings;                                             // 0x0000(0x0010)(Parm, OutParm)
};
static_assert(alignof(CustomGI_C_GetCollectedWings) == 0x000008, "Wrong alignment on CustomGI_C_GetCollectedWings");
static_assert(sizeof(CustomGI_C_GetCollectedWings) == 0x000010, "Wrong size on CustomGI_C_GetCollectedWings");
static_assert(offsetof(CustomGI_C_GetCollectedWings, Wings) == 0x000000, "Member 'CustomGI_C_GetCollectedWings::Wings' has a wrong offset!");

// Function CustomGI.CustomGI_C.GetDevMode
// 0x0001 (0x0001 - 0x0000)
struct CustomGI_C_GetDevMode final
{
public:
	bool                                          Param_DevMode;                                     // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CustomGI_C_GetDevMode) == 0x000001, "Wrong alignment on CustomGI_C_GetDevMode");
static_assert(sizeof(CustomGI_C_GetDevMode) == 0x000001, "Wrong size on CustomGI_C_GetDevMode");
static_assert(offsetof(CustomGI_C_GetDevMode, Param_DevMode) == 0x000000, "Member 'CustomGI_C_GetDevMode::Param_DevMode' has a wrong offset!");

// Function CustomGI.CustomGI_C.GetGameAlreadyLaunched
// 0x0001 (0x0001 - 0x0000)
struct CustomGI_C_GetGameAlreadyLaunched final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CustomGI_C_GetGameAlreadyLaunched) == 0x000001, "Wrong alignment on CustomGI_C_GetGameAlreadyLaunched");
static_assert(sizeof(CustomGI_C_GetGameAlreadyLaunched) == 0x000001, "Wrong size on CustomGI_C_GetGameAlreadyLaunched");
static_assert(offsetof(CustomGI_C_GetGameAlreadyLaunched, ReturnValue) == 0x000000, "Member 'CustomGI_C_GetGameAlreadyLaunched::ReturnValue' has a wrong offset!");

// Function CustomGI.CustomGI_C.GetInputLagMode
// 0x0001 (0x0001 - 0x0000)
struct CustomGI_C_GetInputLagMode final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CustomGI_C_GetInputLagMode) == 0x000001, "Wrong alignment on CustomGI_C_GetInputLagMode");
static_assert(sizeof(CustomGI_C_GetInputLagMode) == 0x000001, "Wrong size on CustomGI_C_GetInputLagMode");
static_assert(offsetof(CustomGI_C_GetInputLagMode, ReturnValue) == 0x000000, "Member 'CustomGI_C_GetInputLagMode::ReturnValue' has a wrong offset!");

// Function CustomGI.CustomGI_C.GetInstructionsAlreadyShown
// 0x0001 (0x0001 - 0x0000)
struct CustomGI_C_GetInstructionsAlreadyShown final
{
public:
	bool                                          Shown;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CustomGI_C_GetInstructionsAlreadyShown) == 0x000001, "Wrong alignment on CustomGI_C_GetInstructionsAlreadyShown");
static_assert(sizeof(CustomGI_C_GetInstructionsAlreadyShown) == 0x000001, "Wrong size on CustomGI_C_GetInstructionsAlreadyShown");
static_assert(offsetof(CustomGI_C_GetInstructionsAlreadyShown, Shown) == 0x000000, "Member 'CustomGI_C_GetInstructionsAlreadyShown::Shown' has a wrong offset!");

// Function CustomGI.CustomGI_C.GetLevelStreamingEnabled
// 0x0001 (0x0001 - 0x0000)
struct CustomGI_C_GetLevelStreamingEnabled final
{
public:
	bool                                          Enabled;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CustomGI_C_GetLevelStreamingEnabled) == 0x000001, "Wrong alignment on CustomGI_C_GetLevelStreamingEnabled");
static_assert(sizeof(CustomGI_C_GetLevelStreamingEnabled) == 0x000001, "Wrong size on CustomGI_C_GetLevelStreamingEnabled");
static_assert(offsetof(CustomGI_C_GetLevelStreamingEnabled, Enabled) == 0x000000, "Member 'CustomGI_C_GetLevelStreamingEnabled::Enabled' has a wrong offset!");

// Function CustomGI.CustomGI_C.GetLocalMultiplayerMode
// 0x0001 (0x0001 - 0x0000)
struct CustomGI_C_GetLocalMultiplayerMode final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CustomGI_C_GetLocalMultiplayerMode) == 0x000001, "Wrong alignment on CustomGI_C_GetLocalMultiplayerMode");
static_assert(sizeof(CustomGI_C_GetLocalMultiplayerMode) == 0x000001, "Wrong size on CustomGI_C_GetLocalMultiplayerMode");
static_assert(offsetof(CustomGI_C_GetLocalMultiplayerMode, ReturnValue) == 0x000000, "Member 'CustomGI_C_GetLocalMultiplayerMode::ReturnValue' has a wrong offset!");

// Function CustomGI.CustomGI_C.GetPlayersInSession
// 0x0004 (0x0004 - 0x0000)
struct CustomGI_C_GetPlayersInSession final
{
public:
	int32                                         Param_PlayersInSession;                            // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CustomGI_C_GetPlayersInSession) == 0x000004, "Wrong alignment on CustomGI_C_GetPlayersInSession");
static_assert(sizeof(CustomGI_C_GetPlayersInSession) == 0x000004, "Wrong size on CustomGI_C_GetPlayersInSession");
static_assert(offsetof(CustomGI_C_GetPlayersInSession, Param_PlayersInSession) == 0x000000, "Member 'CustomGI_C_GetPlayersInSession::Param_PlayersInSession' has a wrong offset!");

// Function CustomGI.CustomGI_C.GetTestControl
// 0x0001 (0x0001 - 0x0000)
struct CustomGI_C_GetTestControl final
{
public:
	bool                                          TestControl;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CustomGI_C_GetTestControl) == 0x000001, "Wrong alignment on CustomGI_C_GetTestControl");
static_assert(sizeof(CustomGI_C_GetTestControl) == 0x000001, "Wrong size on CustomGI_C_GetTestControl");
static_assert(offsetof(CustomGI_C_GetTestControl, TestControl) == 0x000000, "Member 'CustomGI_C_GetTestControl::TestControl' has a wrong offset!");

// Function CustomGI.CustomGI_C.GetTestPlayers
// 0x0004 (0x0004 - 0x0000)
struct CustomGI_C_GetTestPlayers final
{
public:
	int32                                         Count;                                             // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CustomGI_C_GetTestPlayers) == 0x000004, "Wrong alignment on CustomGI_C_GetTestPlayers");
static_assert(sizeof(CustomGI_C_GetTestPlayers) == 0x000004, "Wrong size on CustomGI_C_GetTestPlayers");
static_assert(offsetof(CustomGI_C_GetTestPlayers, Count) == 0x000000, "Member 'CustomGI_C_GetTestPlayers::Count' has a wrong offset!");

// Function CustomGI.CustomGI_C.GetTrueChainVisible
// 0x0001 (0x0001 - 0x0000)
struct CustomGI_C_GetTrueChainVisible final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CustomGI_C_GetTrueChainVisible) == 0x000001, "Wrong alignment on CustomGI_C_GetTrueChainVisible");
static_assert(sizeof(CustomGI_C_GetTrueChainVisible) == 0x000001, "Wrong size on CustomGI_C_GetTrueChainVisible");
static_assert(offsetof(CustomGI_C_GetTrueChainVisible, Visible) == 0x000000, "Member 'CustomGI_C_GetTrueChainVisible::Visible' has a wrong offset!");

// Function CustomGI.CustomGI_C.InitProgressSave
// 0x0028 (0x0028 - 0x0000)
struct CustomGI_C_InitProgressSave final
{
public:
	class USG_Progress_C*                         CallFunc_CreateSaveGameObject_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SaveGameToSlot_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_340C[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USaveGame*                              CallFunc_LoadGameFromSlot_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USG_Progress_C*                         K2Node_DynamicCast_AsSG_Progress;                  // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CustomGI_C_InitProgressSave) == 0x000008, "Wrong alignment on CustomGI_C_InitProgressSave");
static_assert(sizeof(CustomGI_C_InitProgressSave) == 0x000028, "Wrong size on CustomGI_C_InitProgressSave");
static_assert(offsetof(CustomGI_C_InitProgressSave, CallFunc_CreateSaveGameObject_ReturnValue) == 0x000000, "Member 'CustomGI_C_InitProgressSave::CallFunc_CreateSaveGameObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(CustomGI_C_InitProgressSave, CallFunc_SaveGameToSlot_ReturnValue) == 0x000008, "Member 'CustomGI_C_InitProgressSave::CallFunc_SaveGameToSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(CustomGI_C_InitProgressSave, CallFunc_LoadGameFromSlot_ReturnValue) == 0x000010, "Member 'CustomGI_C_InitProgressSave::CallFunc_LoadGameFromSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(CustomGI_C_InitProgressSave, K2Node_DynamicCast_AsSG_Progress) == 0x000018, "Member 'CustomGI_C_InitProgressSave::K2Node_DynamicCast_AsSG_Progress' has a wrong offset!");
static_assert(offsetof(CustomGI_C_InitProgressSave, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'CustomGI_C_InitProgressSave::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CustomGI_C_InitProgressSave, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'CustomGI_C_InitProgressSave::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CustomGI.CustomGI_C.SaveProgression
// 0x0070 (0x0070 - 0x0000)
struct CustomGI_C_SaveProgression final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Time;                                              // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PlayerNumber;                                      // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_Gamemodes                                   Mode;                                              // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SaveGameToSlot_ReturnValue;               // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_340D[0x1];                                     // 0x0023(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_ProgressSave                        K2Node_MakeStruct_S_ProgressSave;                  // 0x0028(0x0020)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SaveGameToSlot_ReturnValue_1;             // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_340E[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_ProgressSave                        K2Node_MakeStruct_S_ProgressSave_1;                // 0x0050(0x0020)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CustomGI_C_SaveProgression) == 0x000008, "Wrong alignment on CustomGI_C_SaveProgression");
static_assert(sizeof(CustomGI_C_SaveProgression) == 0x000070, "Wrong size on CustomGI_C_SaveProgression");
static_assert(offsetof(CustomGI_C_SaveProgression, Location) == 0x000000, "Member 'CustomGI_C_SaveProgression::Location' has a wrong offset!");
static_assert(offsetof(CustomGI_C_SaveProgression, Time) == 0x000018, "Member 'CustomGI_C_SaveProgression::Time' has a wrong offset!");
static_assert(offsetof(CustomGI_C_SaveProgression, PlayerNumber) == 0x00001C, "Member 'CustomGI_C_SaveProgression::PlayerNumber' has a wrong offset!");
static_assert(offsetof(CustomGI_C_SaveProgression, Mode) == 0x000020, "Member 'CustomGI_C_SaveProgression::Mode' has a wrong offset!");
static_assert(offsetof(CustomGI_C_SaveProgression, K2Node_SwitchEnum_CmpSuccess) == 0x000021, "Member 'CustomGI_C_SaveProgression::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CustomGI_C_SaveProgression, CallFunc_SaveGameToSlot_ReturnValue) == 0x000022, "Member 'CustomGI_C_SaveProgression::CallFunc_SaveGameToSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(CustomGI_C_SaveProgression, CallFunc_Subtract_IntInt_ReturnValue) == 0x000024, "Member 'CustomGI_C_SaveProgression::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CustomGI_C_SaveProgression, K2Node_MakeStruct_S_ProgressSave) == 0x000028, "Member 'CustomGI_C_SaveProgression::K2Node_MakeStruct_S_ProgressSave' has a wrong offset!");
static_assert(offsetof(CustomGI_C_SaveProgression, CallFunc_SaveGameToSlot_ReturnValue_1) == 0x000048, "Member 'CustomGI_C_SaveProgression::CallFunc_SaveGameToSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CustomGI_C_SaveProgression, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x00004C, "Member 'CustomGI_C_SaveProgression::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CustomGI_C_SaveProgression, K2Node_MakeStruct_S_ProgressSave_1) == 0x000050, "Member 'CustomGI_C_SaveProgression::K2Node_MakeStruct_S_ProgressSave_1' has a wrong offset!");

// Function CustomGI.CustomGI_C.SetCollectedWing
// 0x0004 (0x0004 - 0x0000)
struct CustomGI_C_SetCollectedWing final
{
public:
	int32                                         WingIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CustomGI_C_SetCollectedWing) == 0x000004, "Wrong alignment on CustomGI_C_SetCollectedWing");
static_assert(sizeof(CustomGI_C_SetCollectedWing) == 0x000004, "Wrong size on CustomGI_C_SetCollectedWing");
static_assert(offsetof(CustomGI_C_SetCollectedWing, WingIndex) == 0x000000, "Member 'CustomGI_C_SetCollectedWing::WingIndex' has a wrong offset!");

// Function CustomGI.CustomGI_C.SetPlayersInSession
// 0x0004 (0x0004 - 0x0000)
struct CustomGI_C_SetPlayersInSession final
{
public:
	int32                                         Count;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CustomGI_C_SetPlayersInSession) == 0x000004, "Wrong alignment on CustomGI_C_SetPlayersInSession");
static_assert(sizeof(CustomGI_C_SetPlayersInSession) == 0x000004, "Wrong size on CustomGI_C_SetPlayersInSession");
static_assert(offsetof(CustomGI_C_SetPlayersInSession, Count) == 0x000000, "Member 'CustomGI_C_SetPlayersInSession::Count' has a wrong offset!");

}

