#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Tip

#include "Basic.hpp"


namespace SDK::Params
{

// Function W_Tip.W_Tip_C.ExecuteUbergraph_W_Tip
// 0x0018 (0x0018 - 0x0000)
struct W_Tip_C_ExecuteUbergraph_W_Tip final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E4D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Tip_C_ExecuteUbergraph_W_Tip) == 0x000008, "Wrong alignment on W_Tip_C_ExecuteUbergraph_W_Tip");
static_assert(sizeof(W_Tip_C_ExecuteUbergraph_W_Tip) == 0x000018, "Wrong size on W_Tip_C_ExecuteUbergraph_W_Tip");
static_assert(offsetof(W_Tip_C_ExecuteUbergraph_W_Tip, EntryPoint) == 0x000000, "Member 'W_Tip_C_ExecuteUbergraph_W_Tip::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_Tip_C_ExecuteUbergraph_W_Tip, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'W_Tip_C_ExecuteUbergraph_W_Tip::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Tip_C_ExecuteUbergraph_W_Tip, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'W_Tip_C_ExecuteUbergraph_W_Tip::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

}

