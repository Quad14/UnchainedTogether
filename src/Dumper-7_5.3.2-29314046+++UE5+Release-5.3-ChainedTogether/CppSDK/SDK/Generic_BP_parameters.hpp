#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Generic_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Generic_BP.Generic_BP_C.UserConstructionScript
// 0x00E0 (0x00E0 - 0x0000)
struct Generic_BP_C_UserConstructionScript final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_IntToVector_ReturnValue;             // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36EF[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0040(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Array_Get_Item;                           // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   CallFunc_AddComponent_ReturnValue;                 // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B8(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36F0[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetWorldSize_Value_ImplicitCast;          // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Generic_BP_C_UserConstructionScript) == 0x000010, "Wrong alignment on Generic_BP_C_UserConstructionScript");
static_assert(sizeof(Generic_BP_C_UserConstructionScript) == 0x0000E0, "Wrong size on Generic_BP_C_UserConstructionScript");
static_assert(offsetof(Generic_BP_C_UserConstructionScript, Temp_int_Array_Index_Variable) == 0x000000, "Member 'Generic_BP_C_UserConstructionScript::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Generic_BP_C_UserConstructionScript, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'Generic_BP_C_UserConstructionScript::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Generic_BP_C_UserConstructionScript, CallFunc_Conv_IntToVector_ReturnValue) == 0x000008, "Member 'Generic_BP_C_UserConstructionScript::CallFunc_Conv_IntToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Generic_BP_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'Generic_BP_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Generic_BP_C_UserConstructionScript, CallFunc_Array_IsEmpty_ReturnValue) == 0x000024, "Member 'Generic_BP_C_UserConstructionScript::CallFunc_Array_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(Generic_BP_C_UserConstructionScript, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000028, "Member 'Generic_BP_C_UserConstructionScript::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Generic_BP_C_UserConstructionScript, CallFunc_MakeTransform_ReturnValue) == 0x000040, "Member 'Generic_BP_C_UserConstructionScript::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Generic_BP_C_UserConstructionScript, CallFunc_Array_Get_Item) == 0x0000A0, "Member 'Generic_BP_C_UserConstructionScript::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Generic_BP_C_UserConstructionScript, CallFunc_AddComponent_ReturnValue) == 0x0000B0, "Member 'Generic_BP_C_UserConstructionScript::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Generic_BP_C_UserConstructionScript, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B8, "Member 'Generic_BP_C_UserConstructionScript::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Generic_BP_C_UserConstructionScript, CallFunc_Array_Length_ReturnValue) == 0x0000D0, "Member 'Generic_BP_C_UserConstructionScript::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Generic_BP_C_UserConstructionScript, CallFunc_Less_IntInt_ReturnValue) == 0x0000D4, "Member 'Generic_BP_C_UserConstructionScript::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Generic_BP_C_UserConstructionScript, CallFunc_SetWorldSize_Value_ImplicitCast) == 0x0000D8, "Member 'Generic_BP_C_UserConstructionScript::CallFunc_SetWorldSize_Value_ImplicitCast' has a wrong offset!");

}

