#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_GameInstance

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_GameInstance.BPI_GameInstance_C.GetCollectedWings
// 0x0010 (0x0010 - 0x0000)
struct BPI_GameInstance_C_GetCollectedWings final
{
public:
	TArray<int32>                                 Wings;                                             // 0x0000(0x0010)(Parm, OutParm)
};
static_assert(alignof(BPI_GameInstance_C_GetCollectedWings) == 0x000008, "Wrong alignment on BPI_GameInstance_C_GetCollectedWings");
static_assert(sizeof(BPI_GameInstance_C_GetCollectedWings) == 0x000010, "Wrong size on BPI_GameInstance_C_GetCollectedWings");
static_assert(offsetof(BPI_GameInstance_C_GetCollectedWings, Wings) == 0x000000, "Member 'BPI_GameInstance_C_GetCollectedWings::Wings' has a wrong offset!");

// Function BPI_GameInstance.BPI_GameInstance_C.GetDevMode
// 0x0001 (0x0001 - 0x0000)
struct BPI_GameInstance_C_GetDevMode final
{
public:
	bool                                          DevMode;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_GameInstance_C_GetDevMode) == 0x000001, "Wrong alignment on BPI_GameInstance_C_GetDevMode");
static_assert(sizeof(BPI_GameInstance_C_GetDevMode) == 0x000001, "Wrong size on BPI_GameInstance_C_GetDevMode");
static_assert(offsetof(BPI_GameInstance_C_GetDevMode, DevMode) == 0x000000, "Member 'BPI_GameInstance_C_GetDevMode::DevMode' has a wrong offset!");

// Function BPI_GameInstance.BPI_GameInstance_C.GetGameAlreadyLaunched
// 0x0001 (0x0001 - 0x0000)
struct BPI_GameInstance_C_GetGameAlreadyLaunched final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_GameInstance_C_GetGameAlreadyLaunched) == 0x000001, "Wrong alignment on BPI_GameInstance_C_GetGameAlreadyLaunched");
static_assert(sizeof(BPI_GameInstance_C_GetGameAlreadyLaunched) == 0x000001, "Wrong size on BPI_GameInstance_C_GetGameAlreadyLaunched");
static_assert(offsetof(BPI_GameInstance_C_GetGameAlreadyLaunched, ReturnValue) == 0x000000, "Member 'BPI_GameInstance_C_GetGameAlreadyLaunched::ReturnValue' has a wrong offset!");

// Function BPI_GameInstance.BPI_GameInstance_C.GetInputLagMode
// 0x0001 (0x0001 - 0x0000)
struct BPI_GameInstance_C_GetInputLagMode final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_GameInstance_C_GetInputLagMode) == 0x000001, "Wrong alignment on BPI_GameInstance_C_GetInputLagMode");
static_assert(sizeof(BPI_GameInstance_C_GetInputLagMode) == 0x000001, "Wrong size on BPI_GameInstance_C_GetInputLagMode");
static_assert(offsetof(BPI_GameInstance_C_GetInputLagMode, ReturnValue) == 0x000000, "Member 'BPI_GameInstance_C_GetInputLagMode::ReturnValue' has a wrong offset!");

// Function BPI_GameInstance.BPI_GameInstance_C.GetInstructionsAlreadyShown
// 0x0001 (0x0001 - 0x0000)
struct BPI_GameInstance_C_GetInstructionsAlreadyShown final
{
public:
	bool                                          Shown;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_GameInstance_C_GetInstructionsAlreadyShown) == 0x000001, "Wrong alignment on BPI_GameInstance_C_GetInstructionsAlreadyShown");
static_assert(sizeof(BPI_GameInstance_C_GetInstructionsAlreadyShown) == 0x000001, "Wrong size on BPI_GameInstance_C_GetInstructionsAlreadyShown");
static_assert(offsetof(BPI_GameInstance_C_GetInstructionsAlreadyShown, Shown) == 0x000000, "Member 'BPI_GameInstance_C_GetInstructionsAlreadyShown::Shown' has a wrong offset!");

// Function BPI_GameInstance.BPI_GameInstance_C.GetLevelStreamingEnabled
// 0x0001 (0x0001 - 0x0000)
struct BPI_GameInstance_C_GetLevelStreamingEnabled final
{
public:
	bool                                          Enabled;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_GameInstance_C_GetLevelStreamingEnabled) == 0x000001, "Wrong alignment on BPI_GameInstance_C_GetLevelStreamingEnabled");
static_assert(sizeof(BPI_GameInstance_C_GetLevelStreamingEnabled) == 0x000001, "Wrong size on BPI_GameInstance_C_GetLevelStreamingEnabled");
static_assert(offsetof(BPI_GameInstance_C_GetLevelStreamingEnabled, Enabled) == 0x000000, "Member 'BPI_GameInstance_C_GetLevelStreamingEnabled::Enabled' has a wrong offset!");

// Function BPI_GameInstance.BPI_GameInstance_C.GetLocalMultiplayerMode
// 0x0001 (0x0001 - 0x0000)
struct BPI_GameInstance_C_GetLocalMultiplayerMode final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_GameInstance_C_GetLocalMultiplayerMode) == 0x000001, "Wrong alignment on BPI_GameInstance_C_GetLocalMultiplayerMode");
static_assert(sizeof(BPI_GameInstance_C_GetLocalMultiplayerMode) == 0x000001, "Wrong size on BPI_GameInstance_C_GetLocalMultiplayerMode");
static_assert(offsetof(BPI_GameInstance_C_GetLocalMultiplayerMode, ReturnValue) == 0x000000, "Member 'BPI_GameInstance_C_GetLocalMultiplayerMode::ReturnValue' has a wrong offset!");

// Function BPI_GameInstance.BPI_GameInstance_C.GetPlayersInSession
// 0x0004 (0x0004 - 0x0000)
struct BPI_GameInstance_C_GetPlayersInSession final
{
public:
	int32                                         PlayersInSession;                                  // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_GameInstance_C_GetPlayersInSession) == 0x000004, "Wrong alignment on BPI_GameInstance_C_GetPlayersInSession");
static_assert(sizeof(BPI_GameInstance_C_GetPlayersInSession) == 0x000004, "Wrong size on BPI_GameInstance_C_GetPlayersInSession");
static_assert(offsetof(BPI_GameInstance_C_GetPlayersInSession, PlayersInSession) == 0x000000, "Member 'BPI_GameInstance_C_GetPlayersInSession::PlayersInSession' has a wrong offset!");

// Function BPI_GameInstance.BPI_GameInstance_C.GetTrueChainVisible
// 0x0001 (0x0001 - 0x0000)
struct BPI_GameInstance_C_GetTrueChainVisible final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_GameInstance_C_GetTrueChainVisible) == 0x000001, "Wrong alignment on BPI_GameInstance_C_GetTrueChainVisible");
static_assert(sizeof(BPI_GameInstance_C_GetTrueChainVisible) == 0x000001, "Wrong size on BPI_GameInstance_C_GetTrueChainVisible");
static_assert(offsetof(BPI_GameInstance_C_GetTrueChainVisible, Visible) == 0x000000, "Member 'BPI_GameInstance_C_GetTrueChainVisible::Visible' has a wrong offset!");

// Function BPI_GameInstance.BPI_GameInstance_C.SetCollectedWing
// 0x0004 (0x0004 - 0x0000)
struct BPI_GameInstance_C_SetCollectedWing final
{
public:
	int32                                         WingIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_GameInstance_C_SetCollectedWing) == 0x000004, "Wrong alignment on BPI_GameInstance_C_SetCollectedWing");
static_assert(sizeof(BPI_GameInstance_C_SetCollectedWing) == 0x000004, "Wrong size on BPI_GameInstance_C_SetCollectedWing");
static_assert(offsetof(BPI_GameInstance_C_SetCollectedWing, WingIndex) == 0x000000, "Member 'BPI_GameInstance_C_SetCollectedWing::WingIndex' has a wrong offset!");

// Function BPI_GameInstance.BPI_GameInstance_C.SetPlayersInSession
// 0x0004 (0x0004 - 0x0000)
struct BPI_GameInstance_C_SetPlayersInSession final
{
public:
	int32                                         Count;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_GameInstance_C_SetPlayersInSession) == 0x000004, "Wrong alignment on BPI_GameInstance_C_SetPlayersInSession");
static_assert(sizeof(BPI_GameInstance_C_SetPlayersInSession) == 0x000004, "Wrong size on BPI_GameInstance_C_SetPlayersInSession");
static_assert(offsetof(BPI_GameInstance_C_SetPlayersInSession, Count) == 0x000000, "Member 'BPI_GameInstance_C_SetPlayersInSession::Count' has a wrong offset!");

}

