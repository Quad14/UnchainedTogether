#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_MenuButtonText

#include "Basic.hpp"

#include "Buttons_E_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function W_MenuButtonText.W_MenuButtonText_C.ExecuteUbergraph_W_MenuButtonText
// 0x0070 (0x0070 - 0x0000)
struct W_MenuButtonText_C_ExecuteUbergraph_W_MenuButtonText final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35BF[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EButtons_E                                    Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35C0[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable;                              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_1;                            // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_2;                            // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35C1[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x003C(0x0014)()
	class UTexture2D*                             K2Node_Select_Default;                             // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SpawnSound2D_PitchMultiplier_ImplicitCast; // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_MenuButtonText_C_ExecuteUbergraph_W_MenuButtonText) == 0x000008, "Wrong alignment on W_MenuButtonText_C_ExecuteUbergraph_W_MenuButtonText");
static_assert(sizeof(W_MenuButtonText_C_ExecuteUbergraph_W_MenuButtonText) == 0x000070, "Wrong size on W_MenuButtonText_C_ExecuteUbergraph_W_MenuButtonText");
static_assert(offsetof(W_MenuButtonText_C_ExecuteUbergraph_W_MenuButtonText, EntryPoint) == 0x000000, "Member 'W_MenuButtonText_C_ExecuteUbergraph_W_MenuButtonText::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_MenuButtonText_C_ExecuteUbergraph_W_MenuButtonText, CallFunc_RandomFloatInRange_ReturnValue) == 0x000008, "Member 'W_MenuButtonText_C_ExecuteUbergraph_W_MenuButtonText::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MenuButtonText_C_ExecuteUbergraph_W_MenuButtonText, Temp_byte_Variable) == 0x000010, "Member 'W_MenuButtonText_C_ExecuteUbergraph_W_MenuButtonText::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(W_MenuButtonText_C_ExecuteUbergraph_W_MenuButtonText, CallFunc_SpawnSound2D_ReturnValue) == 0x000018, "Member 'W_MenuButtonText_C_ExecuteUbergraph_W_MenuButtonText::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MenuButtonText_C_ExecuteUbergraph_W_MenuButtonText, Temp_object_Variable) == 0x000020, "Member 'W_MenuButtonText_C_ExecuteUbergraph_W_MenuButtonText::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(W_MenuButtonText_C_ExecuteUbergraph_W_MenuButtonText, Temp_object_Variable_1) == 0x000028, "Member 'W_MenuButtonText_C_ExecuteUbergraph_W_MenuButtonText::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(W_MenuButtonText_C_ExecuteUbergraph_W_MenuButtonText, Temp_object_Variable_2) == 0x000030, "Member 'W_MenuButtonText_C_ExecuteUbergraph_W_MenuButtonText::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(W_MenuButtonText_C_ExecuteUbergraph_W_MenuButtonText, K2Node_Event_IsDesignTime) == 0x000038, "Member 'W_MenuButtonText_C_ExecuteUbergraph_W_MenuButtonText::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(W_MenuButtonText_C_ExecuteUbergraph_W_MenuButtonText, K2Node_MakeStruct_SlateColor) == 0x00003C, "Member 'W_MenuButtonText_C_ExecuteUbergraph_W_MenuButtonText::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(W_MenuButtonText_C_ExecuteUbergraph_W_MenuButtonText, K2Node_Select_Default) == 0x000050, "Member 'W_MenuButtonText_C_ExecuteUbergraph_W_MenuButtonText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(W_MenuButtonText_C_ExecuteUbergraph_W_MenuButtonText, CallFunc_PlayAnimation_ReturnValue) == 0x000058, "Member 'W_MenuButtonText_C_ExecuteUbergraph_W_MenuButtonText::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MenuButtonText_C_ExecuteUbergraph_W_MenuButtonText, CallFunc_PlayAnimation_ReturnValue_1) == 0x000060, "Member 'W_MenuButtonText_C_ExecuteUbergraph_W_MenuButtonText::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_MenuButtonText_C_ExecuteUbergraph_W_MenuButtonText, CallFunc_SpawnSound2D_PitchMultiplier_ImplicitCast) == 0x000068, "Member 'W_MenuButtonText_C_ExecuteUbergraph_W_MenuButtonText::CallFunc_SpawnSound2D_PitchMultiplier_ImplicitCast' has a wrong offset!");

// Function W_MenuButtonText.W_MenuButtonText_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_MenuButtonText_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_MenuButtonText_C_PreConstruct) == 0x000001, "Wrong alignment on W_MenuButtonText_C_PreConstruct");
static_assert(sizeof(W_MenuButtonText_C_PreConstruct) == 0x000001, "Wrong size on W_MenuButtonText_C_PreConstruct");
static_assert(offsetof(W_MenuButtonText_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_MenuButtonText_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function W_MenuButtonText.W_MenuButtonText_C.UpdateSize
// 0x0070 (0x0070 - 0x0000)
struct W_MenuButtonText_C_UpdateSize final
{
public:
	int32                                         In_Font_Info_Size;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35C2[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;                   // 0x0010(0x0058)(HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_Size_ImplicitCast;               // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_MenuButtonText_C_UpdateSize) == 0x000008, "Wrong alignment on W_MenuButtonText_C_UpdateSize");
static_assert(sizeof(W_MenuButtonText_C_UpdateSize) == 0x000070, "Wrong size on W_MenuButtonText_C_UpdateSize");
static_assert(offsetof(W_MenuButtonText_C_UpdateSize, In_Font_Info_Size) == 0x000000, "Member 'W_MenuButtonText_C_UpdateSize::In_Font_Info_Size' has a wrong offset!");
static_assert(offsetof(W_MenuButtonText_C_UpdateSize, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000008, "Member 'W_MenuButtonText_C_UpdateSize::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_MenuButtonText_C_UpdateSize, K2Node_MakeStruct_SlateFontInfo) == 0x000010, "Member 'W_MenuButtonText_C_UpdateSize::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");
static_assert(offsetof(W_MenuButtonText_C_UpdateSize, K2Node_MakeStruct_Size_ImplicitCast) == 0x000068, "Member 'W_MenuButtonText_C_UpdateSize::K2Node_MakeStruct_Size_ImplicitCast' has a wrong offset!");

// Function W_MenuButtonText.W_MenuButtonText_C.UpdateText
// 0x0018 (0x0018 - 0x0000)
struct W_MenuButtonText_C_UpdateText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(W_MenuButtonText_C_UpdateText) == 0x000008, "Wrong alignment on W_MenuButtonText_C_UpdateText");
static_assert(sizeof(W_MenuButtonText_C_UpdateText) == 0x000018, "Wrong size on W_MenuButtonText_C_UpdateText");
static_assert(offsetof(W_MenuButtonText_C_UpdateText, InText) == 0x000000, "Member 'W_MenuButtonText_C_UpdateText::InText' has a wrong offset!");

}

