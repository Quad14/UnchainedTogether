#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ButtonOrderManager

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_ButtonOrderManager.BP_ButtonOrderManager_C.ExecuteUbergraph_BP_ButtonOrderManager
// 0x0050 (0x0050 - 0x0000)
struct BP_ButtonOrderManager_C_ExecuteUbergraph_BP_ButtonOrderManager final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_323E[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Order;                          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_323F[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3240[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_ButtonEvent_C>    K2Node_DynamicCast_AsBPI_Button_Event;             // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3241[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABPC_OrderButton_C*                     CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ButtonOrderManager_C_ExecuteUbergraph_BP_ButtonOrderManager) == 0x000008, "Wrong alignment on BP_ButtonOrderManager_C_ExecuteUbergraph_BP_ButtonOrderManager");
static_assert(sizeof(BP_ButtonOrderManager_C_ExecuteUbergraph_BP_ButtonOrderManager) == 0x000050, "Wrong size on BP_ButtonOrderManager_C_ExecuteUbergraph_BP_ButtonOrderManager");
static_assert(offsetof(BP_ButtonOrderManager_C_ExecuteUbergraph_BP_ButtonOrderManager, EntryPoint) == 0x000000, "Member 'BP_ButtonOrderManager_C_ExecuteUbergraph_BP_ButtonOrderManager::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ButtonOrderManager_C_ExecuteUbergraph_BP_ButtonOrderManager, Temp_bool_IsClosed_Variable) == 0x000004, "Member 'BP_ButtonOrderManager_C_ExecuteUbergraph_BP_ButtonOrderManager::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_ButtonOrderManager_C_ExecuteUbergraph_BP_ButtonOrderManager, Temp_bool_Has_Been_Initd_Variable) == 0x000005, "Member 'BP_ButtonOrderManager_C_ExecuteUbergraph_BP_ButtonOrderManager::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_ButtonOrderManager_C_ExecuteUbergraph_BP_ButtonOrderManager, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_ButtonOrderManager_C_ExecuteUbergraph_BP_ButtonOrderManager::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ButtonOrderManager_C_ExecuteUbergraph_BP_ButtonOrderManager, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_ButtonOrderManager_C_ExecuteUbergraph_BP_ButtonOrderManager::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ButtonOrderManager_C_ExecuteUbergraph_BP_ButtonOrderManager, Temp_int_Array_Index_Variable) == 0x000010, "Member 'BP_ButtonOrderManager_C_ExecuteUbergraph_BP_ButtonOrderManager::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ButtonOrderManager_C_ExecuteUbergraph_BP_ButtonOrderManager, K2Node_CustomEvent_Order) == 0x000014, "Member 'BP_ButtonOrderManager_C_ExecuteUbergraph_BP_ButtonOrderManager::K2Node_CustomEvent_Order' has a wrong offset!");
static_assert(offsetof(BP_ButtonOrderManager_C_ExecuteUbergraph_BP_ButtonOrderManager, CallFunc_HasAuthority_ReturnValue) == 0x000018, "Member 'BP_ButtonOrderManager_C_ExecuteUbergraph_BP_ButtonOrderManager::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ButtonOrderManager_C_ExecuteUbergraph_BP_ButtonOrderManager, CallFunc_Add_IntInt_ReturnValue_1) == 0x00001C, "Member 'BP_ButtonOrderManager_C_ExecuteUbergraph_BP_ButtonOrderManager::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ButtonOrderManager_C_ExecuteUbergraph_BP_ButtonOrderManager, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000020, "Member 'BP_ButtonOrderManager_C_ExecuteUbergraph_BP_ButtonOrderManager::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ButtonOrderManager_C_ExecuteUbergraph_BP_ButtonOrderManager, K2Node_DynamicCast_AsBPI_Button_Event) == 0x000028, "Member 'BP_ButtonOrderManager_C_ExecuteUbergraph_BP_ButtonOrderManager::K2Node_DynamicCast_AsBPI_Button_Event' has a wrong offset!");
static_assert(offsetof(BP_ButtonOrderManager_C_ExecuteUbergraph_BP_ButtonOrderManager, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_ButtonOrderManager_C_ExecuteUbergraph_BP_ButtonOrderManager::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ButtonOrderManager_C_ExecuteUbergraph_BP_ButtonOrderManager, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000039, "Member 'BP_ButtonOrderManager_C_ExecuteUbergraph_BP_ButtonOrderManager::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ButtonOrderManager_C_ExecuteUbergraph_BP_ButtonOrderManager, CallFunc_Array_Get_Item) == 0x000040, "Member 'BP_ButtonOrderManager_C_ExecuteUbergraph_BP_ButtonOrderManager::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ButtonOrderManager_C_ExecuteUbergraph_BP_ButtonOrderManager, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'BP_ButtonOrderManager_C_ExecuteUbergraph_BP_ButtonOrderManager::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ButtonOrderManager_C_ExecuteUbergraph_BP_ButtonOrderManager, CallFunc_Less_IntInt_ReturnValue) == 0x00004C, "Member 'BP_ButtonOrderManager_C_ExecuteUbergraph_BP_ButtonOrderManager::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_ButtonOrderManager.BP_ButtonOrderManager_C.ReceiveOrderButton
// 0x0004 (0x0004 - 0x0000)
struct BP_ButtonOrderManager_C_ReceiveOrderButton final
{
public:
	int32                                         Param_Order;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ButtonOrderManager_C_ReceiveOrderButton) == 0x000004, "Wrong alignment on BP_ButtonOrderManager_C_ReceiveOrderButton");
static_assert(sizeof(BP_ButtonOrderManager_C_ReceiveOrderButton) == 0x000004, "Wrong size on BP_ButtonOrderManager_C_ReceiveOrderButton");
static_assert(offsetof(BP_ButtonOrderManager_C_ReceiveOrderButton, Param_Order) == 0x000000, "Member 'BP_ButtonOrderManager_C_ReceiveOrderButton::Param_Order' has a wrong offset!");

}

