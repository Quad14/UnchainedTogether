#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ComboChoice_Leaderboard

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function W_ComboChoice_Leaderboard.W_ComboChoice_Leaderboard_C.ExecuteUbergraph_W_ComboChoice_Leaderboard
// 0x0028 (0x0028 - 0x0000)
struct W_ComboChoice_Leaderboard_C_ExecuteUbergraph_W_ComboChoice_Leaderboard final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0008(0x0018)()
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_ComboChoice_Leaderboard_C_ExecuteUbergraph_W_ComboChoice_Leaderboard) == 0x000008, "Wrong alignment on W_ComboChoice_Leaderboard_C_ExecuteUbergraph_W_ComboChoice_Leaderboard");
static_assert(sizeof(W_ComboChoice_Leaderboard_C_ExecuteUbergraph_W_ComboChoice_Leaderboard) == 0x000028, "Wrong size on W_ComboChoice_Leaderboard_C_ExecuteUbergraph_W_ComboChoice_Leaderboard");
static_assert(offsetof(W_ComboChoice_Leaderboard_C_ExecuteUbergraph_W_ComboChoice_Leaderboard, EntryPoint) == 0x000000, "Member 'W_ComboChoice_Leaderboard_C_ExecuteUbergraph_W_ComboChoice_Leaderboard::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_ComboChoice_Leaderboard_C_ExecuteUbergraph_W_ComboChoice_Leaderboard, CallFunc_Conv_StringToText_ReturnValue) == 0x000008, "Member 'W_ComboChoice_Leaderboard_C_ExecuteUbergraph_W_ComboChoice_Leaderboard::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ComboChoice_Leaderboard_C_ExecuteUbergraph_W_ComboChoice_Leaderboard, K2Node_Event_IsDesignTime) == 0x000020, "Member 'W_ComboChoice_Leaderboard_C_ExecuteUbergraph_W_ComboChoice_Leaderboard::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function W_ComboChoice_Leaderboard.W_ComboChoice_Leaderboard_C.GetToolTipWidget
// 0x0028 (0x0028 - 0x0000)
struct W_ComboChoice_Leaderboard_C_GetToolTipWidget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_LoadClassAsset_Blocking_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsUser_Widget;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_ComboChoice_Leaderboard_C_GetToolTipWidget) == 0x000008, "Wrong alignment on W_ComboChoice_Leaderboard_C_GetToolTipWidget");
static_assert(sizeof(W_ComboChoice_Leaderboard_C_GetToolTipWidget) == 0x000028, "Wrong size on W_ComboChoice_Leaderboard_C_GetToolTipWidget");
static_assert(offsetof(W_ComboChoice_Leaderboard_C_GetToolTipWidget, ReturnValue) == 0x000000, "Member 'W_ComboChoice_Leaderboard_C_GetToolTipWidget::ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ComboChoice_Leaderboard_C_GetToolTipWidget, CallFunc_LoadClassAsset_Blocking_ReturnValue) == 0x000008, "Member 'W_ComboChoice_Leaderboard_C_GetToolTipWidget::CallFunc_LoadClassAsset_Blocking_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ComboChoice_Leaderboard_C_GetToolTipWidget, K2Node_ClassDynamicCast_AsUser_Widget) == 0x000010, "Member 'W_ComboChoice_Leaderboard_C_GetToolTipWidget::K2Node_ClassDynamicCast_AsUser_Widget' has a wrong offset!");
static_assert(offsetof(W_ComboChoice_Leaderboard_C_GetToolTipWidget, K2Node_ClassDynamicCast_bSuccess) == 0x000018, "Member 'W_ComboChoice_Leaderboard_C_GetToolTipWidget::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_ComboChoice_Leaderboard_C_GetToolTipWidget, CallFunc_Create_ReturnValue) == 0x000020, "Member 'W_ComboChoice_Leaderboard_C_GetToolTipWidget::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function W_ComboChoice_Leaderboard.W_ComboChoice_Leaderboard_C.InitColors
// 0x0010 (0x0010 - 0x0000)
struct W_ComboChoice_Leaderboard_C_InitColors final
{
public:
	struct FLinearColor                           CallFunc_GetVectorParameterValue_ReturnValue;      // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_ComboChoice_Leaderboard_C_InitColors) == 0x000004, "Wrong alignment on W_ComboChoice_Leaderboard_C_InitColors");
static_assert(sizeof(W_ComboChoice_Leaderboard_C_InitColors) == 0x000010, "Wrong size on W_ComboChoice_Leaderboard_C_InitColors");
static_assert(offsetof(W_ComboChoice_Leaderboard_C_InitColors, CallFunc_GetVectorParameterValue_ReturnValue) == 0x000000, "Member 'W_ComboChoice_Leaderboard_C_InitColors::CallFunc_GetVectorParameterValue_ReturnValue' has a wrong offset!");

// Function W_ComboChoice_Leaderboard.W_ComboChoice_Leaderboard_C.OnMouseButtonDown
// 0x0220 (0x0220 - 0x0000)
struct W_ComboChoice_Leaderboard_C_OnMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00B0(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0168(0x00B8)()
};
static_assert(alignof(W_ComboChoice_Leaderboard_C_OnMouseButtonDown) == 0x000008, "Wrong alignment on W_ComboChoice_Leaderboard_C_OnMouseButtonDown");
static_assert(sizeof(W_ComboChoice_Leaderboard_C_OnMouseButtonDown) == 0x000220, "Wrong size on W_ComboChoice_Leaderboard_C_OnMouseButtonDown");
static_assert(offsetof(W_ComboChoice_Leaderboard_C_OnMouseButtonDown, MyGeometry) == 0x000000, "Member 'W_ComboChoice_Leaderboard_C_OnMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(W_ComboChoice_Leaderboard_C_OnMouseButtonDown, MouseEvent) == 0x000038, "Member 'W_ComboChoice_Leaderboard_C_OnMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(W_ComboChoice_Leaderboard_C_OnMouseButtonDown, ReturnValue) == 0x0000B0, "Member 'W_ComboChoice_Leaderboard_C_OnMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ComboChoice_Leaderboard_C_OnMouseButtonDown, CallFunc_Unhandled_ReturnValue) == 0x000168, "Member 'W_ComboChoice_Leaderboard_C_OnMouseButtonDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");

// Function W_ComboChoice_Leaderboard.W_ComboChoice_Leaderboard_C.OnMouseButtonDown_0
// 0x0220 (0x0220 - 0x0000)
struct W_ComboChoice_Leaderboard_C_OnMouseButtonDown_0 final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00B0(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0168(0x00B8)()
};
static_assert(alignof(W_ComboChoice_Leaderboard_C_OnMouseButtonDown_0) == 0x000008, "Wrong alignment on W_ComboChoice_Leaderboard_C_OnMouseButtonDown_0");
static_assert(sizeof(W_ComboChoice_Leaderboard_C_OnMouseButtonDown_0) == 0x000220, "Wrong size on W_ComboChoice_Leaderboard_C_OnMouseButtonDown_0");
static_assert(offsetof(W_ComboChoice_Leaderboard_C_OnMouseButtonDown_0, MyGeometry) == 0x000000, "Member 'W_ComboChoice_Leaderboard_C_OnMouseButtonDown_0::MyGeometry' has a wrong offset!");
static_assert(offsetof(W_ComboChoice_Leaderboard_C_OnMouseButtonDown_0, MouseEvent) == 0x000038, "Member 'W_ComboChoice_Leaderboard_C_OnMouseButtonDown_0::MouseEvent' has a wrong offset!");
static_assert(offsetof(W_ComboChoice_Leaderboard_C_OnMouseButtonDown_0, ReturnValue) == 0x0000B0, "Member 'W_ComboChoice_Leaderboard_C_OnMouseButtonDown_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ComboChoice_Leaderboard_C_OnMouseButtonDown_0, CallFunc_Unhandled_ReturnValue) == 0x000168, "Member 'W_ComboChoice_Leaderboard_C_OnMouseButtonDown_0::CallFunc_Unhandled_ReturnValue' has a wrong offset!");

// Function W_ComboChoice_Leaderboard.W_ComboChoice_Leaderboard_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_ComboChoice_Leaderboard_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_ComboChoice_Leaderboard_C_PreConstruct) == 0x000001, "Wrong alignment on W_ComboChoice_Leaderboard_C_PreConstruct");
static_assert(sizeof(W_ComboChoice_Leaderboard_C_PreConstruct) == 0x000001, "Wrong size on W_ComboChoice_Leaderboard_C_PreConstruct");
static_assert(offsetof(W_ComboChoice_Leaderboard_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_ComboChoice_Leaderboard_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function W_ComboChoice_Leaderboard.W_ComboChoice_Leaderboard_C.Press__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct W_ComboChoice_Leaderboard_C_Press__DelegateSignature final
{
public:
	class FString                                 Item_0;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 ID_0;                                              // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(W_ComboChoice_Leaderboard_C_Press__DelegateSignature) == 0x000008, "Wrong alignment on W_ComboChoice_Leaderboard_C_Press__DelegateSignature");
static_assert(sizeof(W_ComboChoice_Leaderboard_C_Press__DelegateSignature) == 0x000020, "Wrong size on W_ComboChoice_Leaderboard_C_Press__DelegateSignature");
static_assert(offsetof(W_ComboChoice_Leaderboard_C_Press__DelegateSignature, Item_0) == 0x000000, "Member 'W_ComboChoice_Leaderboard_C_Press__DelegateSignature::Item_0' has a wrong offset!");
static_assert(offsetof(W_ComboChoice_Leaderboard_C_Press__DelegateSignature, ID_0) == 0x000010, "Member 'W_ComboChoice_Leaderboard_C_Press__DelegateSignature::ID_0' has a wrong offset!");

}

