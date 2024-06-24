#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HighestPointTooltip

#include "Basic.hpp"


namespace SDK::Params
{

// Function HighestPointTooltip.HighestPointTooltip_C.ExecuteUbergraph_HighestPointTooltip
// 0x0010 (0x0010 - 0x0000)
struct HighestPointTooltip_C_ExecuteUbergraph_HighestPointTooltip final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33D5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HighestPointTooltip_C_ExecuteUbergraph_HighestPointTooltip) == 0x000008, "Wrong alignment on HighestPointTooltip_C_ExecuteUbergraph_HighestPointTooltip");
static_assert(sizeof(HighestPointTooltip_C_ExecuteUbergraph_HighestPointTooltip) == 0x000010, "Wrong size on HighestPointTooltip_C_ExecuteUbergraph_HighestPointTooltip");
static_assert(offsetof(HighestPointTooltip_C_ExecuteUbergraph_HighestPointTooltip, EntryPoint) == 0x000000, "Member 'HighestPointTooltip_C_ExecuteUbergraph_HighestPointTooltip::EntryPoint' has a wrong offset!");
static_assert(offsetof(HighestPointTooltip_C_ExecuteUbergraph_HighestPointTooltip, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'HighestPointTooltip_C_ExecuteUbergraph_HighestPointTooltip::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

