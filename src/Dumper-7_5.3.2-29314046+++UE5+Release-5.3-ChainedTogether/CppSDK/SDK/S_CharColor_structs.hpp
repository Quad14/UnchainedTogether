#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_CharColor

#include "Basic.hpp"

#include "E_ChoosenChar_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_CharColor.S_CharColor
// 0x0014 (0x0014 - 0x0000)
struct FS_CharColor final
{
public:
	E_ChoosenChar                                 Character_2_4F4CB8444FD97EF690E8B89F833EFA15;      // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E20[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Color_5_EFF019574227754EBC11B18608C1CA43;          // 0x0004(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_CharColor) == 0x000004, "Wrong alignment on FS_CharColor");
static_assert(sizeof(FS_CharColor) == 0x000014, "Wrong size on FS_CharColor");
static_assert(offsetof(FS_CharColor, Character_2_4F4CB8444FD97EF690E8B89F833EFA15) == 0x000000, "Member 'FS_CharColor::Character_2_4F4CB8444FD97EF690E8B89F833EFA15' has a wrong offset!");
static_assert(offsetof(FS_CharColor, Color_5_EFF019574227754EBC11B18608C1CA43) == 0x000004, "Member 'FS_CharColor::Color_5_EFF019574227754EBC11B18608C1CA43' has a wrong offset!");

}

