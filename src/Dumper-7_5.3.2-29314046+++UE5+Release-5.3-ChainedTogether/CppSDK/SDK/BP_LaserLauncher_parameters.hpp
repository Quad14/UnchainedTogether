#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LaserLauncher

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_LaserLauncher.BP_LaserLauncher_C.BeamOnSRV
// 0x0001 (0x0001 - 0x0000)
struct BP_LaserLauncher_C_BeamOnSRV final
{
public:
	bool                                          Param_On;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LaserLauncher_C_BeamOnSRV) == 0x000001, "Wrong alignment on BP_LaserLauncher_C_BeamOnSRV");
static_assert(sizeof(BP_LaserLauncher_C_BeamOnSRV) == 0x000001, "Wrong size on BP_LaserLauncher_C_BeamOnSRV");
static_assert(offsetof(BP_LaserLauncher_C_BeamOnSRV, Param_On) == 0x000000, "Member 'BP_LaserLauncher_C_BeamOnSRV::Param_On' has a wrong offset!");

// Function BP_LaserLauncher.BP_LaserLauncher_C.ExecuteUbergraph_BP_LaserLauncher
// 0x0008 (0x0008 - 0x0000)
struct BP_LaserLauncher_C_ExecuteUbergraph_BP_LaserLauncher final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_On;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LaserLauncher_C_ExecuteUbergraph_BP_LaserLauncher) == 0x000004, "Wrong alignment on BP_LaserLauncher_C_ExecuteUbergraph_BP_LaserLauncher");
static_assert(sizeof(BP_LaserLauncher_C_ExecuteUbergraph_BP_LaserLauncher) == 0x000008, "Wrong size on BP_LaserLauncher_C_ExecuteUbergraph_BP_LaserLauncher");
static_assert(offsetof(BP_LaserLauncher_C_ExecuteUbergraph_BP_LaserLauncher, EntryPoint) == 0x000000, "Member 'BP_LaserLauncher_C_ExecuteUbergraph_BP_LaserLauncher::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_LaserLauncher_C_ExecuteUbergraph_BP_LaserLauncher, K2Node_CustomEvent_On) == 0x000004, "Member 'BP_LaserLauncher_C_ExecuteUbergraph_BP_LaserLauncher::K2Node_CustomEvent_On' has a wrong offset!");

}

