#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IGLE_FoliageCountWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function IGLE_FoliageCountWidget.IGLE_FoliageCountWidget_C.ExecuteUbergraph_IGLE_FoliageCountWidget
// 0x0048 (0x0048 - 0x0000)
struct IGLE_FoliageCountWidget_C_ExecuteUbergraph_IGLE_FoliageCountWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UIGLE_FoliagePropertyValueObject_C*     K2Node_DynamicCast_AsIGLE_Foliage_Property_Value_Object; // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0030(0x0018)()
};
static_assert(alignof(IGLE_FoliageCountWidget_C_ExecuteUbergraph_IGLE_FoliageCountWidget) == 0x000008, "Wrong alignment on IGLE_FoliageCountWidget_C_ExecuteUbergraph_IGLE_FoliageCountWidget");
static_assert(sizeof(IGLE_FoliageCountWidget_C_ExecuteUbergraph_IGLE_FoliageCountWidget) == 0x000048, "Wrong size on IGLE_FoliageCountWidget_C_ExecuteUbergraph_IGLE_FoliageCountWidget");
static_assert(offsetof(IGLE_FoliageCountWidget_C_ExecuteUbergraph_IGLE_FoliageCountWidget, EntryPoint) == 0x000000, "Member 'IGLE_FoliageCountWidget_C_ExecuteUbergraph_IGLE_FoliageCountWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(IGLE_FoliageCountWidget_C_ExecuteUbergraph_IGLE_FoliageCountWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'IGLE_FoliageCountWidget_C_ExecuteUbergraph_IGLE_FoliageCountWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(IGLE_FoliageCountWidget_C_ExecuteUbergraph_IGLE_FoliageCountWidget, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'IGLE_FoliageCountWidget_C_ExecuteUbergraph_IGLE_FoliageCountWidget::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_FoliageCountWidget_C_ExecuteUbergraph_IGLE_FoliageCountWidget, K2Node_DynamicCast_AsIGLE_Foliage_Property_Value_Object) == 0x000020, "Member 'IGLE_FoliageCountWidget_C_ExecuteUbergraph_IGLE_FoliageCountWidget::K2Node_DynamicCast_AsIGLE_Foliage_Property_Value_Object' has a wrong offset!");
static_assert(offsetof(IGLE_FoliageCountWidget_C_ExecuteUbergraph_IGLE_FoliageCountWidget, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'IGLE_FoliageCountWidget_C_ExecuteUbergraph_IGLE_FoliageCountWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(IGLE_FoliageCountWidget_C_ExecuteUbergraph_IGLE_FoliageCountWidget, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'IGLE_FoliageCountWidget_C_ExecuteUbergraph_IGLE_FoliageCountWidget::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_FoliageCountWidget_C_ExecuteUbergraph_IGLE_FoliageCountWidget, CallFunc_Conv_IntToText_ReturnValue) == 0x000030, "Member 'IGLE_FoliageCountWidget_C_ExecuteUbergraph_IGLE_FoliageCountWidget::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

}

