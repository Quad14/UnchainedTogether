#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: bp_WindHorizontal_01_01

#include "Basic.hpp"


namespace SDK::Params
{

// Function bp_WindHorizontal_01_01.bp_WindHorizontal_01_01_C.ExecuteUbergraph_bp_WindHorizontal_01_01
// 0x0018 (0x0018 - 0x0000)
struct bp_WindHorizontal_01_01_C_ExecuteUbergraph_bp_WindHorizontal_01_01 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A28[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A29[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(bp_WindHorizontal_01_01_C_ExecuteUbergraph_bp_WindHorizontal_01_01) == 0x000008, "Wrong alignment on bp_WindHorizontal_01_01_C_ExecuteUbergraph_bp_WindHorizontal_01_01");
static_assert(sizeof(bp_WindHorizontal_01_01_C_ExecuteUbergraph_bp_WindHorizontal_01_01) == 0x000018, "Wrong size on bp_WindHorizontal_01_01_C_ExecuteUbergraph_bp_WindHorizontal_01_01");
static_assert(offsetof(bp_WindHorizontal_01_01_C_ExecuteUbergraph_bp_WindHorizontal_01_01, EntryPoint) == 0x000000, "Member 'bp_WindHorizontal_01_01_C_ExecuteUbergraph_bp_WindHorizontal_01_01::EntryPoint' has a wrong offset!");
static_assert(offsetof(bp_WindHorizontal_01_01_C_ExecuteUbergraph_bp_WindHorizontal_01_01, CallFunc_RandomFloatInRange_ReturnValue) == 0x000008, "Member 'bp_WindHorizontal_01_01_C_ExecuteUbergraph_bp_WindHorizontal_01_01::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(bp_WindHorizontal_01_01_C_ExecuteUbergraph_bp_WindHorizontal_01_01, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'bp_WindHorizontal_01_01_C_ExecuteUbergraph_bp_WindHorizontal_01_01::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(bp_WindHorizontal_01_01_C_ExecuteUbergraph_bp_WindHorizontal_01_01, CallFunc_Delay_Duration_ImplicitCast) == 0x000014, "Member 'bp_WindHorizontal_01_01_C_ExecuteUbergraph_bp_WindHorizontal_01_01::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

// Function bp_WindHorizontal_01_01.bp_WindHorizontal_01_01_C.UserConstructionScript
// 0x0001 (0x0001 - 0x0000)
struct bp_WindHorizontal_01_01_C_UserConstructionScript final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(bp_WindHorizontal_01_01_C_UserConstructionScript) == 0x000001, "Wrong alignment on bp_WindHorizontal_01_01_C_UserConstructionScript");
static_assert(sizeof(bp_WindHorizontal_01_01_C_UserConstructionScript) == 0x000001, "Wrong size on bp_WindHorizontal_01_01_C_UserConstructionScript");
static_assert(offsetof(bp_WindHorizontal_01_01_C_UserConstructionScript, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'bp_WindHorizontal_01_01_C_UserConstructionScript::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

