#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FL_Widgets

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function FL_Widgets.FL_Widgets_C.RemoveAllWidgetsOfClass
// 0x00A0 (0x00A0 - 0x0000)
struct FL_Widgets_C_RemoveAllWidgetsOfClass final
{
public:
	TSoftClassPtr<class UClass>                   Widget;                                            // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UObject>                    CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x0038(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_SoftClassReferenceToString_ReturnValue; // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsUser_Widget;             // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class UUserWidget*>                    CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x0070(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_Array_Get_Item;                           // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x3];                                       // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FL_Widgets_C_RemoveAllWidgetsOfClass) == 0x000008, "Wrong alignment on FL_Widgets_C_RemoveAllWidgetsOfClass");
static_assert(sizeof(FL_Widgets_C_RemoveAllWidgetsOfClass) == 0x0000A0, "Wrong size on FL_Widgets_C_RemoveAllWidgetsOfClass");
static_assert(offsetof(FL_Widgets_C_RemoveAllWidgetsOfClass, Widget) == 0x000000, "Member 'FL_Widgets_C_RemoveAllWidgetsOfClass::Widget' has a wrong offset!");
static_assert(offsetof(FL_Widgets_C_RemoveAllWidgetsOfClass, __WorldContext) == 0x000028, "Member 'FL_Widgets_C_RemoveAllWidgetsOfClass::__WorldContext' has a wrong offset!");
static_assert(offsetof(FL_Widgets_C_RemoveAllWidgetsOfClass, CallFunc_GetPlayerController_ReturnValue) == 0x000030, "Member 'FL_Widgets_C_RemoveAllWidgetsOfClass::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(FL_Widgets_C_RemoveAllWidgetsOfClass, CallFunc_Conv_SoftClassReferenceToClass_ReturnValue) == 0x000038, "Member 'FL_Widgets_C_RemoveAllWidgetsOfClass::CallFunc_Conv_SoftClassReferenceToClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(FL_Widgets_C_RemoveAllWidgetsOfClass, CallFunc_Conv_SoftClassReferenceToString_ReturnValue) == 0x000040, "Member 'FL_Widgets_C_RemoveAllWidgetsOfClass::CallFunc_Conv_SoftClassReferenceToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(FL_Widgets_C_RemoveAllWidgetsOfClass, K2Node_ClassDynamicCast_AsUser_Widget) == 0x000050, "Member 'FL_Widgets_C_RemoveAllWidgetsOfClass::K2Node_ClassDynamicCast_AsUser_Widget' has a wrong offset!");
static_assert(offsetof(FL_Widgets_C_RemoveAllWidgetsOfClass, K2Node_ClassDynamicCast_bSuccess) == 0x000058, "Member 'FL_Widgets_C_RemoveAllWidgetsOfClass::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(FL_Widgets_C_RemoveAllWidgetsOfClass, CallFunc_Concat_StrStr_ReturnValue) == 0x000060, "Member 'FL_Widgets_C_RemoveAllWidgetsOfClass::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(FL_Widgets_C_RemoveAllWidgetsOfClass, CallFunc_GetAllWidgetsOfClass_FoundWidgets) == 0x000070, "Member 'FL_Widgets_C_RemoveAllWidgetsOfClass::CallFunc_GetAllWidgetsOfClass_FoundWidgets' has a wrong offset!");
static_assert(offsetof(FL_Widgets_C_RemoveAllWidgetsOfClass, CallFunc_Array_Length_ReturnValue) == 0x000080, "Member 'FL_Widgets_C_RemoveAllWidgetsOfClass::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(FL_Widgets_C_RemoveAllWidgetsOfClass, Temp_int_Array_Index_Variable) == 0x000084, "Member 'FL_Widgets_C_RemoveAllWidgetsOfClass::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(FL_Widgets_C_RemoveAllWidgetsOfClass, Temp_int_Loop_Counter_Variable) == 0x000088, "Member 'FL_Widgets_C_RemoveAllWidgetsOfClass::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(FL_Widgets_C_RemoveAllWidgetsOfClass, CallFunc_Array_Get_Item) == 0x000090, "Member 'FL_Widgets_C_RemoveAllWidgetsOfClass::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FL_Widgets_C_RemoveAllWidgetsOfClass, CallFunc_Less_IntInt_ReturnValue) == 0x000098, "Member 'FL_Widgets_C_RemoveAllWidgetsOfClass::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FL_Widgets_C_RemoveAllWidgetsOfClass, CallFunc_Add_IntInt_ReturnValue) == 0x00009C, "Member 'FL_Widgets_C_RemoveAllWidgetsOfClass::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function FL_Widgets.FL_Widgets_C.ShowNotification
// 0x0078 (0x0078 - 0x0000)
struct FL_Widgets_C_ShowNotification final
{
public:
	double                                        Delay;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Message;                                           // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FMargin                                Padding;                                           // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                __WorldContext;                                    // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UW_Notification_C*                      CallFunc_Create_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_Notification_C*>              CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x0048(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_Array_Get_Item;                           // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FL_Widgets_C_ShowNotification) == 0x000008, "Wrong alignment on FL_Widgets_C_ShowNotification");
static_assert(sizeof(FL_Widgets_C_ShowNotification) == 0x000078, "Wrong size on FL_Widgets_C_ShowNotification");
static_assert(offsetof(FL_Widgets_C_ShowNotification, Delay) == 0x000000, "Member 'FL_Widgets_C_ShowNotification::Delay' has a wrong offset!");
static_assert(offsetof(FL_Widgets_C_ShowNotification, Message) == 0x000008, "Member 'FL_Widgets_C_ShowNotification::Message' has a wrong offset!");
static_assert(offsetof(FL_Widgets_C_ShowNotification, Padding) == 0x000020, "Member 'FL_Widgets_C_ShowNotification::Padding' has a wrong offset!");
static_assert(offsetof(FL_Widgets_C_ShowNotification, __WorldContext) == 0x000030, "Member 'FL_Widgets_C_ShowNotification::__WorldContext' has a wrong offset!");
static_assert(offsetof(FL_Widgets_C_ShowNotification, CallFunc_Create_ReturnValue) == 0x000038, "Member 'FL_Widgets_C_ShowNotification::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(FL_Widgets_C_ShowNotification, CallFunc_GetPlayerController_ReturnValue) == 0x000040, "Member 'FL_Widgets_C_ShowNotification::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(FL_Widgets_C_ShowNotification, CallFunc_GetAllWidgetsOfClass_FoundWidgets) == 0x000048, "Member 'FL_Widgets_C_ShowNotification::CallFunc_GetAllWidgetsOfClass_FoundWidgets' has a wrong offset!");
static_assert(offsetof(FL_Widgets_C_ShowNotification, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'FL_Widgets_C_ShowNotification::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(FL_Widgets_C_ShowNotification, Temp_int_Array_Index_Variable) == 0x00005C, "Member 'FL_Widgets_C_ShowNotification::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(FL_Widgets_C_ShowNotification, Temp_int_Loop_Counter_Variable) == 0x000060, "Member 'FL_Widgets_C_ShowNotification::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(FL_Widgets_C_ShowNotification, CallFunc_Array_Get_Item) == 0x000068, "Member 'FL_Widgets_C_ShowNotification::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FL_Widgets_C_ShowNotification, CallFunc_Less_IntInt_ReturnValue) == 0x000070, "Member 'FL_Widgets_C_ShowNotification::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FL_Widgets_C_ShowNotification, CallFunc_Add_IntInt_ReturnValue) == 0x000074, "Member 'FL_Widgets_C_ShowNotification::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

}

