#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SteamCoreShared

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum SteamCoreShared.ESteamLobbyDistanceFilter
// NumValues: 0x0005
enum class ESteamLobbyDistanceFilter : uint8
{
	K_ELobbyDistanceFilterClose              = 0,
	K_ELobbyDistanceFilterDefault            = 1,
	K_ELobbyDistanceFilterFar                = 2,
	K_ELobbyDistanceFilterWorldwide          = 3,
	K_MAX                                    = 4,
};

// Enum SteamCoreShared.EOnlineFriendSteamCorePresenceState
// NumValues: 0x0007
enum class EOnlineFriendSteamCorePresenceState : uint8
{
	Offline                                  = 0,
	Online                                   = 1,
	Away                                     = 2,
	ExtendedAway                             = 3,
	DoNotDisturb                             = 4,
	Unknown                                  = 5,
	EOnlineFriendSteamCorePresenceState_MAX  = 6,
};

// ScriptStruct SteamCoreShared.OnlineUserPresenceSteamCoreBlueprint
// 0x0018 (0x0018 - 0x0000)
struct FOnlineUserPresenceSteamCoreBlueprint final
{
public:
	bool                                          bIsOnline;                                         // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          BIsPlaying;                                        // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsPlayingThisGame;                                // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsJoinable;                                       // 0x0003(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bHasVoiceSupport;                                  // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2CB8[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              LastOnline;                                        // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOnlineFriendSteamCorePresenceState           PresenceState;                                     // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2CB9[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FOnlineUserPresenceSteamCoreBlueprint) == 0x000008, "Wrong alignment on FOnlineUserPresenceSteamCoreBlueprint");
static_assert(sizeof(FOnlineUserPresenceSteamCoreBlueprint) == 0x000018, "Wrong size on FOnlineUserPresenceSteamCoreBlueprint");
static_assert(offsetof(FOnlineUserPresenceSteamCoreBlueprint, bIsOnline) == 0x000000, "Member 'FOnlineUserPresenceSteamCoreBlueprint::bIsOnline' has a wrong offset!");
static_assert(offsetof(FOnlineUserPresenceSteamCoreBlueprint, BIsPlaying) == 0x000001, "Member 'FOnlineUserPresenceSteamCoreBlueprint::BIsPlaying' has a wrong offset!");
static_assert(offsetof(FOnlineUserPresenceSteamCoreBlueprint, bIsPlayingThisGame) == 0x000002, "Member 'FOnlineUserPresenceSteamCoreBlueprint::bIsPlayingThisGame' has a wrong offset!");
static_assert(offsetof(FOnlineUserPresenceSteamCoreBlueprint, bIsJoinable) == 0x000003, "Member 'FOnlineUserPresenceSteamCoreBlueprint::bIsJoinable' has a wrong offset!");
static_assert(offsetof(FOnlineUserPresenceSteamCoreBlueprint, bHasVoiceSupport) == 0x000004, "Member 'FOnlineUserPresenceSteamCoreBlueprint::bHasVoiceSupport' has a wrong offset!");
static_assert(offsetof(FOnlineUserPresenceSteamCoreBlueprint, LastOnline) == 0x000008, "Member 'FOnlineUserPresenceSteamCoreBlueprint::LastOnline' has a wrong offset!");
static_assert(offsetof(FOnlineUserPresenceSteamCoreBlueprint, PresenceState) == 0x000010, "Member 'FOnlineUserPresenceSteamCoreBlueprint::PresenceState' has a wrong offset!");

// ScriptStruct SteamCoreShared.OnlineFriendSteamCoreBlueprint
// 0x0048 (0x0048 - 0x0000)
struct FOnlineFriendSteamCoreBlueprint final
{
public:
	class FString                                 DisplayName;                                       // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 RealName;                                          // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOnlineUserPresenceSteamCoreBlueprint  Presence;                                          // 0x0020(0x0018)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                 SteamID;                                           // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FOnlineFriendSteamCoreBlueprint) == 0x000008, "Wrong alignment on FOnlineFriendSteamCoreBlueprint");
static_assert(sizeof(FOnlineFriendSteamCoreBlueprint) == 0x000048, "Wrong size on FOnlineFriendSteamCoreBlueprint");
static_assert(offsetof(FOnlineFriendSteamCoreBlueprint, DisplayName) == 0x000000, "Member 'FOnlineFriendSteamCoreBlueprint::DisplayName' has a wrong offset!");
static_assert(offsetof(FOnlineFriendSteamCoreBlueprint, RealName) == 0x000010, "Member 'FOnlineFriendSteamCoreBlueprint::RealName' has a wrong offset!");
static_assert(offsetof(FOnlineFriendSteamCoreBlueprint, Presence) == 0x000020, "Member 'FOnlineFriendSteamCoreBlueprint::Presence' has a wrong offset!");
static_assert(offsetof(FOnlineFriendSteamCoreBlueprint, SteamID) == 0x000038, "Member 'FOnlineFriendSteamCoreBlueprint::SteamID' has a wrong offset!");

}

