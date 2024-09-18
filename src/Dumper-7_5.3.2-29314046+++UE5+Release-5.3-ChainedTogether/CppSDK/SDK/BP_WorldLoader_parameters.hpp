#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WorldLoader

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_WorldLoader.BP_WorldLoader_C.ExecuteUbergraph_BP_WorldLoader
// 0x0078 (0x0078 - 0x0000)
struct BP_WorldLoader_C_ExecuteUbergraph_BP_WorldLoader final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCurrentLevelName_ReturnValue;          // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_LoadingWorld_C*                      CallFunc_Create_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetAllActorsWithTag_OutActors;            // 0x0038(0x0010)(ReferenceParm)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APS_Game_C*                             K2Node_DynamicCast_AsPS_Game;                      // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WorldLoader_C_ExecuteUbergraph_BP_WorldLoader) == 0x000008, "Wrong alignment on BP_WorldLoader_C_ExecuteUbergraph_BP_WorldLoader");
static_assert(sizeof(BP_WorldLoader_C_ExecuteUbergraph_BP_WorldLoader) == 0x000078, "Wrong size on BP_WorldLoader_C_ExecuteUbergraph_BP_WorldLoader");
static_assert(offsetof(BP_WorldLoader_C_ExecuteUbergraph_BP_WorldLoader, EntryPoint) == 0x000000, "Member 'BP_WorldLoader_C_ExecuteUbergraph_BP_WorldLoader::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_WorldLoader_C_ExecuteUbergraph_BP_WorldLoader, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_WorldLoader_C_ExecuteUbergraph_BP_WorldLoader::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_WorldLoader_C_ExecuteUbergraph_BP_WorldLoader, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_WorldLoader_C_ExecuteUbergraph_BP_WorldLoader::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WorldLoader_C_ExecuteUbergraph_BP_WorldLoader, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'BP_WorldLoader_C_ExecuteUbergraph_BP_WorldLoader::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_WorldLoader_C_ExecuteUbergraph_BP_WorldLoader, Temp_bool_Has_Been_Initd_Variable) == 0x000010, "Member 'BP_WorldLoader_C_ExecuteUbergraph_BP_WorldLoader::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_WorldLoader_C_ExecuteUbergraph_BP_WorldLoader, CallFunc_GetCurrentLevelName_ReturnValue) == 0x000018, "Member 'BP_WorldLoader_C_ExecuteUbergraph_BP_WorldLoader::CallFunc_GetCurrentLevelName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WorldLoader_C_ExecuteUbergraph_BP_WorldLoader, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000028, "Member 'BP_WorldLoader_C_ExecuteUbergraph_BP_WorldLoader::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WorldLoader_C_ExecuteUbergraph_BP_WorldLoader, CallFunc_Create_ReturnValue) == 0x000030, "Member 'BP_WorldLoader_C_ExecuteUbergraph_BP_WorldLoader::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WorldLoader_C_ExecuteUbergraph_BP_WorldLoader, CallFunc_GetAllActorsWithTag_OutActors) == 0x000038, "Member 'BP_WorldLoader_C_ExecuteUbergraph_BP_WorldLoader::CallFunc_GetAllActorsWithTag_OutActors' has a wrong offset!");
static_assert(offsetof(BP_WorldLoader_C_ExecuteUbergraph_BP_WorldLoader, Temp_bool_IsClosed_Variable) == 0x000048, "Member 'BP_WorldLoader_C_ExecuteUbergraph_BP_WorldLoader::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_WorldLoader_C_ExecuteUbergraph_BP_WorldLoader, CallFunc_Array_Get_Item) == 0x000050, "Member 'BP_WorldLoader_C_ExecuteUbergraph_BP_WorldLoader::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_WorldLoader_C_ExecuteUbergraph_BP_WorldLoader, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'BP_WorldLoader_C_ExecuteUbergraph_BP_WorldLoader::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WorldLoader_C_ExecuteUbergraph_BP_WorldLoader, CallFunc_Less_IntInt_ReturnValue) == 0x00005C, "Member 'BP_WorldLoader_C_ExecuteUbergraph_BP_WorldLoader::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WorldLoader_C_ExecuteUbergraph_BP_WorldLoader, CallFunc_GetPlayerController_ReturnValue) == 0x000060, "Member 'BP_WorldLoader_C_ExecuteUbergraph_BP_WorldLoader::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WorldLoader_C_ExecuteUbergraph_BP_WorldLoader, K2Node_DynamicCast_AsPS_Game) == 0x000068, "Member 'BP_WorldLoader_C_ExecuteUbergraph_BP_WorldLoader::K2Node_DynamicCast_AsPS_Game' has a wrong offset!");
static_assert(offsetof(BP_WorldLoader_C_ExecuteUbergraph_BP_WorldLoader, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'BP_WorldLoader_C_ExecuteUbergraph_BP_WorldLoader::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

