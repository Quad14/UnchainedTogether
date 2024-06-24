#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DrawScreen

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_DrawScreen.BP_DrawScreen_C.ExecuteUbergraph_BP_DrawScreen
// 0x0038 (0x0038 - 0x0000)
struct BP_DrawScreen_C_ExecuteUbergraph_BP_DrawScreen final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BB[0x3];                                       // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UStaticMeshComponent*>           CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0018(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UStaticMeshComponent*                   CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DrawScreen_C_ExecuteUbergraph_BP_DrawScreen) == 0x000008, "Wrong alignment on BP_DrawScreen_C_ExecuteUbergraph_BP_DrawScreen");
static_assert(sizeof(BP_DrawScreen_C_ExecuteUbergraph_BP_DrawScreen) == 0x000038, "Wrong size on BP_DrawScreen_C_ExecuteUbergraph_BP_DrawScreen");
static_assert(offsetof(BP_DrawScreen_C_ExecuteUbergraph_BP_DrawScreen, EntryPoint) == 0x000000, "Member 'BP_DrawScreen_C_ExecuteUbergraph_BP_DrawScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_DrawScreen_C_ExecuteUbergraph_BP_DrawScreen, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_DrawScreen_C_ExecuteUbergraph_BP_DrawScreen::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_DrawScreen_C_ExecuteUbergraph_BP_DrawScreen, CallFunc_HasAuthority_ReturnValue) == 0x000008, "Member 'BP_DrawScreen_C_ExecuteUbergraph_BP_DrawScreen::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawScreen_C_ExecuteUbergraph_BP_DrawScreen, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'BP_DrawScreen_C_ExecuteUbergraph_BP_DrawScreen::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_DrawScreen_C_ExecuteUbergraph_BP_DrawScreen, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BP_DrawScreen_C_ExecuteUbergraph_BP_DrawScreen::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawScreen_C_ExecuteUbergraph_BP_DrawScreen, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000018, "Member 'BP_DrawScreen_C_ExecuteUbergraph_BP_DrawScreen::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawScreen_C_ExecuteUbergraph_BP_DrawScreen, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_DrawScreen_C_ExecuteUbergraph_BP_DrawScreen::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DrawScreen_C_ExecuteUbergraph_BP_DrawScreen, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'BP_DrawScreen_C_ExecuteUbergraph_BP_DrawScreen::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawScreen_C_ExecuteUbergraph_BP_DrawScreen, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'BP_DrawScreen_C_ExecuteUbergraph_BP_DrawScreen::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_DrawScreen.BP_DrawScreen_C.OnRep_DrawIndex
// 0x0018 (0x0018 - 0x0000)
struct BP_DrawScreen_C_OnRep_DrawIndex final
{
public:
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DrawScreen_C_OnRep_DrawIndex) == 0x000008, "Wrong alignment on BP_DrawScreen_C_OnRep_DrawIndex");
static_assert(sizeof(BP_DrawScreen_C_OnRep_DrawIndex) == 0x000018, "Wrong size on BP_DrawScreen_C_OnRep_DrawIndex");
static_assert(offsetof(BP_DrawScreen_C_OnRep_DrawIndex, CallFunc_Conv_IntToString_ReturnValue) == 0x000000, "Member 'BP_DrawScreen_C_OnRep_DrawIndex::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawScreen_C_OnRep_DrawIndex, CallFunc_Conv_StringToName_ReturnValue) == 0x000010, "Member 'BP_DrawScreen_C_OnRep_DrawIndex::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");

// Function BP_DrawScreen.BP_DrawScreen_C.SwitchDraw
// 0x0070 (0x0070 - 0x0000)
struct BP_DrawScreen_C_SwitchDraw final
{
public:
	class FName                                   Tag;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BD[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UStaticMeshComponent*>           CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0020(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UStaticMeshComponent*                   CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ComponentHasTag_ReturnValue;              // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BE[0x2];                                       // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BF[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UStaticMeshComponent*>           CallFunc_K2_GetComponentsByClass_ReturnValue_1;    // 0x0048(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C0[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   CallFunc_Array_Get_Item_1;                         // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DrawScreen_C_SwitchDraw) == 0x000008, "Wrong alignment on BP_DrawScreen_C_SwitchDraw");
static_assert(sizeof(BP_DrawScreen_C_SwitchDraw) == 0x000070, "Wrong size on BP_DrawScreen_C_SwitchDraw");
static_assert(offsetof(BP_DrawScreen_C_SwitchDraw, Tag) == 0x000000, "Member 'BP_DrawScreen_C_SwitchDraw::Tag' has a wrong offset!");
static_assert(offsetof(BP_DrawScreen_C_SwitchDraw, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_DrawScreen_C_SwitchDraw::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_DrawScreen_C_SwitchDraw, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_DrawScreen_C_SwitchDraw::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawScreen_C_SwitchDraw, Temp_int_Array_Index_Variable) == 0x000010, "Member 'BP_DrawScreen_C_SwitchDraw::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_DrawScreen_C_SwitchDraw, Temp_int_Array_Index_Variable_1) == 0x000014, "Member 'BP_DrawScreen_C_SwitchDraw::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_DrawScreen_C_SwitchDraw, Temp_int_Loop_Counter_Variable_1) == 0x000018, "Member 'BP_DrawScreen_C_SwitchDraw::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_DrawScreen_C_SwitchDraw, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000020, "Member 'BP_DrawScreen_C_SwitchDraw::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawScreen_C_SwitchDraw, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_DrawScreen_C_SwitchDraw::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DrawScreen_C_SwitchDraw, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'BP_DrawScreen_C_SwitchDraw::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawScreen_C_SwitchDraw, CallFunc_Less_IntInt_ReturnValue) == 0x00003C, "Member 'BP_DrawScreen_C_SwitchDraw::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawScreen_C_SwitchDraw, CallFunc_ComponentHasTag_ReturnValue) == 0x00003D, "Member 'BP_DrawScreen_C_SwitchDraw::CallFunc_ComponentHasTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawScreen_C_SwitchDraw, CallFunc_Add_IntInt_ReturnValue_1) == 0x000040, "Member 'BP_DrawScreen_C_SwitchDraw::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DrawScreen_C_SwitchDraw, CallFunc_K2_GetComponentsByClass_ReturnValue_1) == 0x000048, "Member 'BP_DrawScreen_C_SwitchDraw::CallFunc_K2_GetComponentsByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DrawScreen_C_SwitchDraw, CallFunc_Array_Length_ReturnValue_1) == 0x000058, "Member 'BP_DrawScreen_C_SwitchDraw::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DrawScreen_C_SwitchDraw, CallFunc_Array_Get_Item_1) == 0x000060, "Member 'BP_DrawScreen_C_SwitchDraw::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_DrawScreen_C_SwitchDraw, CallFunc_Less_IntInt_ReturnValue_1) == 0x000068, "Member 'BP_DrawScreen_C_SwitchDraw::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function BP_DrawScreen.BP_DrawScreen_C.UserConstructionScript
// 0x0038 (0x0038 - 0x0000)
struct BP_DrawScreen_C_UserConstructionScript final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x4];                                       // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UStaticMeshComponent*>           CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C2[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DrawScreen_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_DrawScreen_C_UserConstructionScript");
static_assert(sizeof(BP_DrawScreen_C_UserConstructionScript) == 0x000038, "Wrong size on BP_DrawScreen_C_UserConstructionScript");
static_assert(offsetof(BP_DrawScreen_C_UserConstructionScript, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_DrawScreen_C_UserConstructionScript::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_DrawScreen_C_UserConstructionScript, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_DrawScreen_C_UserConstructionScript::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_DrawScreen_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_DrawScreen_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawScreen_C_UserConstructionScript, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000010, "Member 'BP_DrawScreen_C_UserConstructionScript::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawScreen_C_UserConstructionScript, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'BP_DrawScreen_C_UserConstructionScript::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawScreen_C_UserConstructionScript, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_DrawScreen_C_UserConstructionScript::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DrawScreen_C_UserConstructionScript, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'BP_DrawScreen_C_UserConstructionScript::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

