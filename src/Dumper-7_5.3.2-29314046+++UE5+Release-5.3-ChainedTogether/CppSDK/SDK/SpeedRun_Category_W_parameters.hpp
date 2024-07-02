#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpeedRun_Category_W

#include "Basic.hpp"


namespace SDK::Params
{

// Function SpeedRun_Category_W.SpeedRun_Category_W_C.ExecuteUbergraph_SpeedRun_Category_W
// 0x01B8 (0x01B8 - 0x0000)
struct SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestSubsystem*                       CallFunc_GetEngineSubsystem_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class USpeedRun_Category_W_C*>         CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x0040(0x0010)(ReferenceParm, ContainsInstancedReference)
	class USpeedRun_Category_W_C*                 CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3067[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0060(0x0018)()
	TDelegate<void(class UVaRestRequestJSON* Request)> K2Node_CreateDelegate_OutputDelegate;              // 0x0078(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVaRestRequestJSON*                     K2Node_CustomEvent_Request;                        // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_PlayerNumber;                   // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3068[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVaRestJsonObject*                      CallFunc_GetResponseObject_ReturnValue;            // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVaRestJsonValue*                       CallFunc_GetField_ReturnValue;                     // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3069[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVaRestJsonObject*                      CallFunc_AsObject_ReturnValue;                     // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UVaRestJsonValue*>               CallFunc_GetArrayField_ReturnValue;                // 0x00B8(0x0010)(ReferenceParm)
	class UVaRestJsonValue*                       CallFunc_Array_Get_Item_1;                         // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_306A[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVaRestJsonObject*                      CallFunc_AsObject_ReturnValue_1;                   // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_306B[0x3];                                     // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetIntegerField_ReturnValue;              // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestJsonValue*                       CallFunc_GetField_ReturnValue_1;                   // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVaRestJsonObject*                      CallFunc_AsObject_ReturnValue_2;                   // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetStringField_ReturnValue;               // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UVaRestJsonValue*                       CallFunc_GetField_ReturnValue_2;                   // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UVaRestJsonValue*>               CallFunc_GetArrayField_ReturnValue_1;              // 0x0110(0x0010)(ReferenceParm)
	class UVaRestJsonObject*                      CallFunc_AsObject_ReturnValue_3;                   // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVaRestJsonValue*                       CallFunc_Array_Get_Item_2;                         // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetIntegerField_ReturnValue_1;            // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_306C[0x4];                                     // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVaRestJsonObject*                      CallFunc_AsObject_ReturnValue_4;                   // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_306D[0x4];                                     // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetStringField_ReturnValue_1;             // 0x0148(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_306E[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_306F[0x4];                                     // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVaRestJsonValue*                       CallFunc_GetField_ReturnValue_3;                   // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetStringField_ReturnValue_2;             // 0x0180(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3070[0x3];                                     // 0x0191(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x019C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3071[0x3];                                     // 0x019D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UVaRestSubsystem*                       CallFunc_GetEngineSubsystem_ReturnValue_1;         // 0x01A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVaRestJsonObject*                      CallFunc_ConstructVaRestJsonObject_ReturnValue;    // 0x01A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W) == 0x000008, "Wrong alignment on SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W");
static_assert(sizeof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W) == 0x0001B8, "Wrong size on SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, EntryPoint) == 0x000000, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::EntryPoint' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, Temp_int_Array_Index_Variable) == 0x000004, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_GetEngineSubsystem_ReturnValue) == 0x000010, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_GetEngineSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, Temp_int_Loop_Counter_Variable_1) == 0x000018, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_Add_IntInt_ReturnValue_1) == 0x00001C, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, Temp_int_Array_Index_Variable_1) == 0x000020, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, Temp_int_Array_Index_Variable_2) == 0x000024, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, Temp_int_Loop_Counter_Variable_2) == 0x000028, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_Add_IntInt_ReturnValue_2) == 0x00002C, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_Concat_StrStr_ReturnValue) == 0x000030, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_GetAllWidgetsOfClass_FoundWidgets) == 0x000040, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_GetAllWidgetsOfClass_FoundWidgets' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_Array_Get_Item) == 0x000050, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_Less_IntInt_ReturnValue) == 0x00005C, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_Conv_StringToText_ReturnValue) == 0x000060, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, K2Node_CreateDelegate_OutputDelegate) == 0x000078, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, K2Node_CustomEvent_Request) == 0x000088, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::K2Node_CustomEvent_Request' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, K2Node_CustomEvent_PlayerNumber) == 0x000090, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::K2Node_CustomEvent_PlayerNumber' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_GetResponseObject_ReturnValue) == 0x000098, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_GetResponseObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_GetField_ReturnValue) == 0x0000A0, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_GetField_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_IsValid_ReturnValue) == 0x0000A8, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_AsObject_ReturnValue) == 0x0000B0, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_AsObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_GetArrayField_ReturnValue) == 0x0000B8, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_GetArrayField_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_Array_Get_Item_1) == 0x0000C8, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_Array_Length_ReturnValue_1) == 0x0000D0, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_AsObject_ReturnValue_1) == 0x0000D8, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_AsObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000E0, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_GetIntegerField_ReturnValue) == 0x0000E4, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_GetIntegerField_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_GetField_ReturnValue_1) == 0x0000E8, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_GetField_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_AsObject_ReturnValue_2) == 0x0000F0, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_AsObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_GetStringField_ReturnValue) == 0x0000F8, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_GetStringField_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_GetField_ReturnValue_2) == 0x000108, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_GetField_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_GetArrayField_ReturnValue_1) == 0x000110, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_GetArrayField_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_AsObject_ReturnValue_3) == 0x000120, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_AsObject_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_Array_Get_Item_2) == 0x000128, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_GetIntegerField_ReturnValue_1) == 0x000130, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_GetIntegerField_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_AsObject_ReturnValue_4) == 0x000138, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_AsObject_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_Array_Length_ReturnValue_2) == 0x000140, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_GetStringField_ReturnValue_1) == 0x000148, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_GetStringField_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_Less_IntInt_ReturnValue_2) == 0x000158, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000160, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_Array_Add_ReturnValue) == 0x000170, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_GetField_ReturnValue_3) == 0x000178, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_GetField_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_GetStringField_ReturnValue_2) == 0x000180, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_GetStringField_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_IsValid_ReturnValue_1) == 0x000190, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_Array_Add_ReturnValue_1) == 0x000194, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_Array_Length_ReturnValue_3) == 0x000198, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00019C, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_GetEngineSubsystem_ReturnValue_1) == 0x0001A0, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_GetEngineSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, CallFunc_ConstructVaRestJsonObject_ReturnValue) == 0x0001A8, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::CallFunc_ConstructVaRestJsonObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W, K2Node_SwitchEnum_CmpSuccess) == 0x0001B0, "Member 'SpeedRun_Category_W_C_ExecuteUbergraph_SpeedRun_Category_W::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function SpeedRun_Category_W.SpeedRun_Category_W_C.OnCategoriesCallback
// 0x0008 (0x0008 - 0x0000)
struct SpeedRun_Category_W_C_OnCategoriesCallback final
{
public:
	class UVaRestRequestJSON*                     Request;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SpeedRun_Category_W_C_OnCategoriesCallback) == 0x000008, "Wrong alignment on SpeedRun_Category_W_C_OnCategoriesCallback");
static_assert(sizeof(SpeedRun_Category_W_C_OnCategoriesCallback) == 0x000008, "Wrong size on SpeedRun_Category_W_C_OnCategoriesCallback");
static_assert(offsetof(SpeedRun_Category_W_C_OnCategoriesCallback, Request) == 0x000000, "Member 'SpeedRun_Category_W_C_OnCategoriesCallback::Request' has a wrong offset!");

// Function SpeedRun_Category_W.SpeedRun_Category_W_C.RefreshParentPlayerList
// 0x0004 (0x0004 - 0x0000)
struct SpeedRun_Category_W_C_RefreshParentPlayerList final
{
public:
	int32                                         PlayerNumber;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SpeedRun_Category_W_C_RefreshParentPlayerList) == 0x000004, "Wrong alignment on SpeedRun_Category_W_C_RefreshParentPlayerList");
static_assert(sizeof(SpeedRun_Category_W_C_RefreshParentPlayerList) == 0x000004, "Wrong size on SpeedRun_Category_W_C_RefreshParentPlayerList");
static_assert(offsetof(SpeedRun_Category_W_C_RefreshParentPlayerList, PlayerNumber) == 0x000000, "Member 'SpeedRun_Category_W_C_RefreshParentPlayerList::PlayerNumber' has a wrong offset!");

}

