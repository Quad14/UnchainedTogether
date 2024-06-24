#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CoreOnline

#include "Basic.hpp"


namespace SDK
{

// Enum CoreOnline.ECoreOnlineDummy
// NumValues: 0x0002
enum class ECoreOnlineDummy : uint8
{
	Dummy                                    = 0,
	ECoreOnlineDummy_MAX                     = 1,
};

// ScriptStruct CoreOnline.JoinabilitySettings
// 0x0014 (0x0014 - 0x0000)
struct FJoinabilitySettings final
{
public:
	class FName                                   SessionName;                                       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bPublicSearchable;                                 // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAllowInvites;                                     // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bJoinViaPresence;                                  // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bJoinViaPresenceFriendsOnly;                       // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxPlayers;                                        // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxPartySize;                                      // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FJoinabilitySettings) == 0x000004, "Wrong alignment on FJoinabilitySettings");
static_assert(sizeof(FJoinabilitySettings) == 0x000014, "Wrong size on FJoinabilitySettings");
static_assert(offsetof(FJoinabilitySettings, SessionName) == 0x000000, "Member 'FJoinabilitySettings::SessionName' has a wrong offset!");
static_assert(offsetof(FJoinabilitySettings, bPublicSearchable) == 0x000008, "Member 'FJoinabilitySettings::bPublicSearchable' has a wrong offset!");
static_assert(offsetof(FJoinabilitySettings, bAllowInvites) == 0x000009, "Member 'FJoinabilitySettings::bAllowInvites' has a wrong offset!");
static_assert(offsetof(FJoinabilitySettings, bJoinViaPresence) == 0x00000A, "Member 'FJoinabilitySettings::bJoinViaPresence' has a wrong offset!");
static_assert(offsetof(FJoinabilitySettings, bJoinViaPresenceFriendsOnly) == 0x00000B, "Member 'FJoinabilitySettings::bJoinViaPresenceFriendsOnly' has a wrong offset!");
static_assert(offsetof(FJoinabilitySettings, MaxPlayers) == 0x00000C, "Member 'FJoinabilitySettings::MaxPlayers' has a wrong offset!");
static_assert(offsetof(FJoinabilitySettings, MaxPartySize) == 0x000010, "Member 'FJoinabilitySettings::MaxPartySize' has a wrong offset!");

// ScriptStruct CoreOnline.UniqueNetIdWrapper
// 0x0001 (0x0001 - 0x0000)
struct FUniqueNetIdWrapper
{
public:
	uint8                                         Pad_2CB0[0x1];                                     // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FUniqueNetIdWrapper) == 0x000001, "Wrong alignment on FUniqueNetIdWrapper");
static_assert(sizeof(FUniqueNetIdWrapper) == 0x000001, "Wrong size on FUniqueNetIdWrapper");

}

