#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_FadeInOut

#include "Basic.hpp"


namespace SDK::Params
{

// Function W_FadeInOut.W_FadeInOut_C.ExecuteUbergraph_W_FadeInOut
// 0x0010 (0x0010 - 0x0000)
struct W_FadeInOut_C_ExecuteUbergraph_W_FadeInOut final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A46[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_FadeInOut_C_ExecuteUbergraph_W_FadeInOut) == 0x000008, "Wrong alignment on W_FadeInOut_C_ExecuteUbergraph_W_FadeInOut");
static_assert(sizeof(W_FadeInOut_C_ExecuteUbergraph_W_FadeInOut) == 0x000010, "Wrong size on W_FadeInOut_C_ExecuteUbergraph_W_FadeInOut");
static_assert(offsetof(W_FadeInOut_C_ExecuteUbergraph_W_FadeInOut, EntryPoint) == 0x000000, "Member 'W_FadeInOut_C_ExecuteUbergraph_W_FadeInOut::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_FadeInOut_C_ExecuteUbergraph_W_FadeInOut, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'W_FadeInOut_C_ExecuteUbergraph_W_FadeInOut::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

