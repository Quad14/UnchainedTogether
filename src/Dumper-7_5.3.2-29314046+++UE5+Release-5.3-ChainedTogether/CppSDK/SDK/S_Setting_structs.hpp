#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_Setting

#include "Basic.hpp"

#include "E_SettingCategory_structs.hpp"
#include "E_SettingSubCategory_structs.hpp"
#include "E_SettingType_structs.hpp"
#include "S_ComboBoxContent_structs.hpp"
#include "S_SliderParams_structs.hpp"
#include "S_BindParams_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_Setting.S_Setting
// 0x0090 (0x0090 - 0x0000)
struct FS_Setting final
{
public:
	class FString                                 Identifier_24_B17A863341702D883A0E3FBB70835726;    // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   Name_3_C461EEB84E651E5689B9C8B54D7F85AC;           // 0x0010(0x0018)(Edit, BlueprintVisible)
	E_SettingCategory                             Category_14_4C0A07B24A8E68E517B9B8B8B27FF69D;      // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_SettingSubCategory                          SubCategory_15_7639FD1448043439E796FDB55EC0459D;   // 0x0029(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_SettingType                                 Type_11_23B5C0F9450B9194759CCBACFAA36A23;          // 0x002A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2EDB[0x5];                                     // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_ComboBoxContent                     ComboBoxSettings_18_F5149DA34AE0D4620BA0D39CD0C6D970; // 0x0030(0x0020)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FS_SliderParams                        SliderSettings_21_93EEEEE5415608D13D0CC4856D75DA8C; // 0x0050(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_BindParams                          BindSettings_27_BBD24F1741AD1FA5FE22F58EA04529E9;  // 0x0060(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FS_Setting) == 0x000008, "Wrong alignment on FS_Setting");
static_assert(sizeof(FS_Setting) == 0x000090, "Wrong size on FS_Setting");
static_assert(offsetof(FS_Setting, Identifier_24_B17A863341702D883A0E3FBB70835726) == 0x000000, "Member 'FS_Setting::Identifier_24_B17A863341702D883A0E3FBB70835726' has a wrong offset!");
static_assert(offsetof(FS_Setting, Name_3_C461EEB84E651E5689B9C8B54D7F85AC) == 0x000010, "Member 'FS_Setting::Name_3_C461EEB84E651E5689B9C8B54D7F85AC' has a wrong offset!");
static_assert(offsetof(FS_Setting, Category_14_4C0A07B24A8E68E517B9B8B8B27FF69D) == 0x000028, "Member 'FS_Setting::Category_14_4C0A07B24A8E68E517B9B8B8B27FF69D' has a wrong offset!");
static_assert(offsetof(FS_Setting, SubCategory_15_7639FD1448043439E796FDB55EC0459D) == 0x000029, "Member 'FS_Setting::SubCategory_15_7639FD1448043439E796FDB55EC0459D' has a wrong offset!");
static_assert(offsetof(FS_Setting, Type_11_23B5C0F9450B9194759CCBACFAA36A23) == 0x00002A, "Member 'FS_Setting::Type_11_23B5C0F9450B9194759CCBACFAA36A23' has a wrong offset!");
static_assert(offsetof(FS_Setting, ComboBoxSettings_18_F5149DA34AE0D4620BA0D39CD0C6D970) == 0x000030, "Member 'FS_Setting::ComboBoxSettings_18_F5149DA34AE0D4620BA0D39CD0C6D970' has a wrong offset!");
static_assert(offsetof(FS_Setting, SliderSettings_21_93EEEEE5415608D13D0CC4856D75DA8C) == 0x000050, "Member 'FS_Setting::SliderSettings_21_93EEEEE5415608D13D0CC4856D75DA8C' has a wrong offset!");
static_assert(offsetof(FS_Setting, BindSettings_27_BBD24F1741AD1FA5FE22F58EA04529E9) == 0x000060, "Member 'FS_Setting::BindSettings_27_BBD24F1741AD1FA5FE22F58EA04529E9' has a wrong offset!");

}

