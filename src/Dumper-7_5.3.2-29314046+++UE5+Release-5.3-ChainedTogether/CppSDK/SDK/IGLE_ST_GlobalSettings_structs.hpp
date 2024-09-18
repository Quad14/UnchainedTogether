#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IGLE_ST_GlobalSettings

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct IGLE_ST_GlobalSettings.IGLE_ST_GlobalSettings
// 0x0088 (0x0088 - 0x0000)
struct FIGLE_ST_GlobalSettings final
{
public:
	TSoftClassPtr<class UClass>                   OverrideEditorGameMode_22_EA1426584C895499B814AE9B088E04A1; // 0x0000(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   OverridePlayGameMode_23_CA82ADC34C5AFCB8968AE9BCBE31A8D6; // 0x0028(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class FString>                         PlacableActorsScanPaths_27_AAD5D263488D1838A623F097133EA28B; // 0x0050(0x0010)(Edit, BlueprintVisible)
	class FString                                 LevelsLocalDirectory_6_3301B3264AA05C6AC1C308B177693A38; // 0x0060(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   MainLevelName_9_5C29511441AD4D0B2690F5B68298318B;  // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   MenuLevelName_12_435BA71D4CC6CEE2CB0085A08D466B0F; // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CustomDataObjectClass_17_8186B5984D0C359DB84CC8A8B7FA43FD; // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FIGLE_ST_GlobalSettings) == 0x000008, "Wrong alignment on FIGLE_ST_GlobalSettings");
static_assert(sizeof(FIGLE_ST_GlobalSettings) == 0x000088, "Wrong size on FIGLE_ST_GlobalSettings");
static_assert(offsetof(FIGLE_ST_GlobalSettings, OverrideEditorGameMode_22_EA1426584C895499B814AE9B088E04A1) == 0x000000, "Member 'FIGLE_ST_GlobalSettings::OverrideEditorGameMode_22_EA1426584C895499B814AE9B088E04A1' has a wrong offset!");
static_assert(offsetof(FIGLE_ST_GlobalSettings, OverridePlayGameMode_23_CA82ADC34C5AFCB8968AE9BCBE31A8D6) == 0x000028, "Member 'FIGLE_ST_GlobalSettings::OverridePlayGameMode_23_CA82ADC34C5AFCB8968AE9BCBE31A8D6' has a wrong offset!");
static_assert(offsetof(FIGLE_ST_GlobalSettings, PlacableActorsScanPaths_27_AAD5D263488D1838A623F097133EA28B) == 0x000050, "Member 'FIGLE_ST_GlobalSettings::PlacableActorsScanPaths_27_AAD5D263488D1838A623F097133EA28B' has a wrong offset!");
static_assert(offsetof(FIGLE_ST_GlobalSettings, LevelsLocalDirectory_6_3301B3264AA05C6AC1C308B177693A38) == 0x000060, "Member 'FIGLE_ST_GlobalSettings::LevelsLocalDirectory_6_3301B3264AA05C6AC1C308B177693A38' has a wrong offset!");
static_assert(offsetof(FIGLE_ST_GlobalSettings, MainLevelName_9_5C29511441AD4D0B2690F5B68298318B) == 0x000070, "Member 'FIGLE_ST_GlobalSettings::MainLevelName_9_5C29511441AD4D0B2690F5B68298318B' has a wrong offset!");
static_assert(offsetof(FIGLE_ST_GlobalSettings, MenuLevelName_12_435BA71D4CC6CEE2CB0085A08D466B0F) == 0x000078, "Member 'FIGLE_ST_GlobalSettings::MenuLevelName_12_435BA71D4CC6CEE2CB0085A08D466B0F' has a wrong offset!");
static_assert(offsetof(FIGLE_ST_GlobalSettings, CustomDataObjectClass_17_8186B5984D0C359DB84CC8A8B7FA43FD) == 0x000080, "Member 'FIGLE_ST_GlobalSettings::CustomDataObjectClass_17_8186B5984D0C359DB84CC8A8B7FA43FD' has a wrong offset!");

}

