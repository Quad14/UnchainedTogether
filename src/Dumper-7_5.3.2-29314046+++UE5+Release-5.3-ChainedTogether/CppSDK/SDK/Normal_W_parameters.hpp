#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Normal_W

#include "Basic.hpp"


namespace SDK::Params
{

// Function Normal_W.Normal_W_C.ExecuteUbergraph_Normal_W
// 0x0010 (0x0010 - 0x0000)
struct Normal_W_C_ExecuteUbergraph_Normal_W final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3044[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Normal_W_C_ExecuteUbergraph_Normal_W) == 0x000008, "Wrong alignment on Normal_W_C_ExecuteUbergraph_Normal_W");
static_assert(sizeof(Normal_W_C_ExecuteUbergraph_Normal_W) == 0x000010, "Wrong size on Normal_W_C_ExecuteUbergraph_Normal_W");
static_assert(offsetof(Normal_W_C_ExecuteUbergraph_Normal_W, EntryPoint) == 0x000000, "Member 'Normal_W_C_ExecuteUbergraph_Normal_W::EntryPoint' has a wrong offset!");
static_assert(offsetof(Normal_W_C_ExecuteUbergraph_Normal_W, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'Normal_W_C_ExecuteUbergraph_Normal_W::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

