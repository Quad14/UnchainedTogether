#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_GameSave

#include "Basic.hpp"

#include "S_SavedSetting_structs.hpp"


namespace SDK::Params
{

// Function BPI_GameSave.BPI_GameSave_C.GetSettingFromIdentifier
// 0x0028 (0x0028 - 0x0000)
struct BPI_GameSave_C_GetSettingFromIdentifier final
{
public:
	class FString                                 ID;                                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3399[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Value;                                             // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_GameSave_C_GetSettingFromIdentifier) == 0x000008, "Wrong alignment on BPI_GameSave_C_GetSettingFromIdentifier");
static_assert(sizeof(BPI_GameSave_C_GetSettingFromIdentifier) == 0x000028, "Wrong size on BPI_GameSave_C_GetSettingFromIdentifier");
static_assert(offsetof(BPI_GameSave_C_GetSettingFromIdentifier, ID) == 0x000000, "Member 'BPI_GameSave_C_GetSettingFromIdentifier::ID' has a wrong offset!");
static_assert(offsetof(BPI_GameSave_C_GetSettingFromIdentifier, ReturnValue) == 0x000010, "Member 'BPI_GameSave_C_GetSettingFromIdentifier::ReturnValue' has a wrong offset!");
static_assert(offsetof(BPI_GameSave_C_GetSettingFromIdentifier, Value) == 0x000018, "Member 'BPI_GameSave_C_GetSettingFromIdentifier::Value' has a wrong offset!");

// Function BPI_GameSave.BPI_GameSave_C.GetSettings
// 0x0010 (0x0010 - 0x0000)
struct BPI_GameSave_C_GetSettings final
{
public:
	TArray<struct FS_SavedSetting>                Settings;                                          // 0x0000(0x0010)(Parm, OutParm)
};
static_assert(alignof(BPI_GameSave_C_GetSettings) == 0x000008, "Wrong alignment on BPI_GameSave_C_GetSettings");
static_assert(sizeof(BPI_GameSave_C_GetSettings) == 0x000010, "Wrong size on BPI_GameSave_C_GetSettings");
static_assert(offsetof(BPI_GameSave_C_GetSettings, Settings) == 0x000000, "Member 'BPI_GameSave_C_GetSettings::Settings' has a wrong offset!");

}

