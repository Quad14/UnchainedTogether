#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SettingCategory

#include "Basic.hpp"


namespace SDK::Params
{

// Function W_SettingCategory.W_SettingCategory_C.ExecuteUbergraph_W_SettingCategory
// 0x0020 (0x0020 - 0x0000)
struct W_SettingCategory_C_ExecuteUbergraph_W_SettingCategory final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31C5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_InText;                         // 0x0008(0x0018)()
};
static_assert(alignof(W_SettingCategory_C_ExecuteUbergraph_W_SettingCategory) == 0x000008, "Wrong alignment on W_SettingCategory_C_ExecuteUbergraph_W_SettingCategory");
static_assert(sizeof(W_SettingCategory_C_ExecuteUbergraph_W_SettingCategory) == 0x000020, "Wrong size on W_SettingCategory_C_ExecuteUbergraph_W_SettingCategory");
static_assert(offsetof(W_SettingCategory_C_ExecuteUbergraph_W_SettingCategory, EntryPoint) == 0x000000, "Member 'W_SettingCategory_C_ExecuteUbergraph_W_SettingCategory::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_SettingCategory_C_ExecuteUbergraph_W_SettingCategory, K2Node_CustomEvent_InText) == 0x000008, "Member 'W_SettingCategory_C_ExecuteUbergraph_W_SettingCategory::K2Node_CustomEvent_InText' has a wrong offset!");

// Function W_SettingCategory.W_SettingCategory_C.GetText_0
// 0x0018 (0x0018 - 0x0000)
struct W_SettingCategory_C_GetText_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(W_SettingCategory_C_GetText_0) == 0x000008, "Wrong alignment on W_SettingCategory_C_GetText_0");
static_assert(sizeof(W_SettingCategory_C_GetText_0) == 0x000018, "Wrong size on W_SettingCategory_C_GetText_0");
static_assert(offsetof(W_SettingCategory_C_GetText_0, ReturnValue) == 0x000000, "Member 'W_SettingCategory_C_GetText_0::ReturnValue' has a wrong offset!");

// Function W_SettingCategory.W_SettingCategory_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct W_SettingCategory_C_SetText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(W_SettingCategory_C_SetText) == 0x000008, "Wrong alignment on W_SettingCategory_C_SetText");
static_assert(sizeof(W_SettingCategory_C_SetText) == 0x000018, "Wrong size on W_SettingCategory_C_SetText");
static_assert(offsetof(W_SettingCategory_C_SetText, InText) == 0x000000, "Member 'W_SettingCategory_C_SetText::InText' has a wrong offset!");

}

