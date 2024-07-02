#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BS_Kiosk

#include "Basic.hpp"


namespace SDK::Params
{

// Function BS_Kiosk.BS_Kiosk_C.ExecuteUbergraph_BS_Kiosk
// 0x0004 (0x0004 - 0x0000)
struct BS_Kiosk_C_ExecuteUbergraph_BS_Kiosk final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BS_Kiosk_C_ExecuteUbergraph_BS_Kiosk) == 0x000004, "Wrong alignment on BS_Kiosk_C_ExecuteUbergraph_BS_Kiosk");
static_assert(sizeof(BS_Kiosk_C_ExecuteUbergraph_BS_Kiosk) == 0x000004, "Wrong size on BS_Kiosk_C_ExecuteUbergraph_BS_Kiosk");
static_assert(offsetof(BS_Kiosk_C_ExecuteUbergraph_BS_Kiosk, EntryPoint) == 0x000000, "Member 'BS_Kiosk_C_ExecuteUbergraph_BS_Kiosk::EntryPoint' has a wrong offset!");

// Function BS_Kiosk.BS_Kiosk_C.UserConstructionScript
// 0x0020 (0x0020 - 0x0000)
struct BS_Kiosk_C_UserConstructionScript final
{
public:
	bool                                          K2Node_MultiGate_FirstRun;                         // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AC8[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_MultiGate_Data;                             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_MultiGate_ScratchBool;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AC9[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_MultiGate_ScratchIndex;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BS_Kiosk_C_UserConstructionScript) == 0x000008, "Wrong alignment on BS_Kiosk_C_UserConstructionScript");
static_assert(sizeof(BS_Kiosk_C_UserConstructionScript) == 0x000020, "Wrong size on BS_Kiosk_C_UserConstructionScript");
static_assert(offsetof(BS_Kiosk_C_UserConstructionScript, K2Node_MultiGate_FirstRun) == 0x000000, "Member 'BS_Kiosk_C_UserConstructionScript::K2Node_MultiGate_FirstRun' has a wrong offset!");
static_assert(offsetof(BS_Kiosk_C_UserConstructionScript, K2Node_MultiGate_Data) == 0x000004, "Member 'BS_Kiosk_C_UserConstructionScript::K2Node_MultiGate_Data' has a wrong offset!");
static_assert(offsetof(BS_Kiosk_C_UserConstructionScript, K2Node_MultiGate_ScratchBool) == 0x000008, "Member 'BS_Kiosk_C_UserConstructionScript::K2Node_MultiGate_ScratchBool' has a wrong offset!");
static_assert(offsetof(BS_Kiosk_C_UserConstructionScript, K2Node_MultiGate_ScratchIndex) == 0x00000C, "Member 'BS_Kiosk_C_UserConstructionScript::K2Node_MultiGate_ScratchIndex' has a wrong offset!");
static_assert(offsetof(BS_Kiosk_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000010, "Member 'BS_Kiosk_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BS_Kiosk_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue_1) == 0x000018, "Member 'BS_Kiosk_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue_1' has a wrong offset!");

}

