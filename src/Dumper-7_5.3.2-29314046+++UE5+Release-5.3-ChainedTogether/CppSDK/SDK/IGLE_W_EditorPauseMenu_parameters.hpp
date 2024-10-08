#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IGLE_W_EditorPauseMenu

#include "Basic.hpp"

#include "IGLE_ST_GlobalSettings_structs.hpp"


namespace SDK::Params
{

// Function IGLE_W_EditorPauseMenu.IGLE_W_EditorPauseMenu_C.BndEvt__IGLE_W_EditorPauseMenu_Slider_93_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct IGLE_W_EditorPauseMenu_C_BndEvt__IGLE_W_EditorPauseMenu_Slider_93_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IGLE_W_EditorPauseMenu_C_BndEvt__IGLE_W_EditorPauseMenu_Slider_93_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong alignment on IGLE_W_EditorPauseMenu_C_BndEvt__IGLE_W_EditorPauseMenu_Slider_93_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature");
static_assert(sizeof(IGLE_W_EditorPauseMenu_C_BndEvt__IGLE_W_EditorPauseMenu_Slider_93_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong size on IGLE_W_EditorPauseMenu_C_BndEvt__IGLE_W_EditorPauseMenu_Slider_93_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature");
static_assert(offsetof(IGLE_W_EditorPauseMenu_C_BndEvt__IGLE_W_EditorPauseMenu_Slider_93_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature, Value) == 0x000000, "Member 'IGLE_W_EditorPauseMenu_C_BndEvt__IGLE_W_EditorPauseMenu_Slider_93_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature::Value' has a wrong offset!");

// Function IGLE_W_EditorPauseMenu.IGLE_W_EditorPauseMenu_C.ExecuteUbergraph_IGLE_W_EditorPauseMenu
// 0x01C0 (0x01C0 - 0x0000)
struct IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AIGLE_Pawn_Example_C*                   K2Node_DynamicCast_AsIGLE_Pawn_Example;            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIGLE_ST_GlobalSettings                CallFunc_IGLE_GetGlobalSettings_Settings;          // 0x0040(0x0088)(HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_IGLE_ParseOptionString_Value;             // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IGLE_ParseOptionString_OptionExists;      // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AIGLE_Pawn_Example_C*                   K2Node_DynamicCast_AsIGLE_Pawn_Example_1;          // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_109[0x3];                                      // 0x0109(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Len_ReturnValue;                          // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetBaseFilename_ReturnValue;              // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_2;            // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0158(0x0018)()
	class UCustomGI_C*                            K2Node_DynamicCast_AsCustom_GI;                    // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_179[0x3];                                      // 0x0179(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_ComponentBoundEvent_Value;                  // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue_1;              // 0x0180(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeClamped_ReturnValue_1;            // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIGLE_Pawn_Example_C*                   K2Node_DynamicCast_AsIGLE_Pawn_Example_2;          // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_199[0x7];                                      // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_MapRangeClamped_Value_ImplicitCast;       // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetValue_InValue_ImplicitCast;            // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1AC[0x4];                                      // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_MapRangeClamped_Value_ImplicitCast_1;     // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast; // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu) == 0x000008, "Wrong alignment on IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu");
static_assert(sizeof(IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu) == 0x0001C0, "Wrong size on IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu");
static_assert(offsetof(IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu, EntryPoint) == 0x000000, "Member 'IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu, CallFunc_GetPlayerPawn_ReturnValue) == 0x000008, "Member 'IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu, K2Node_DynamicCast_AsIGLE_Pawn_Example) == 0x000010, "Member 'IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu::K2Node_DynamicCast_AsIGLE_Pawn_Example' has a wrong offset!");
static_assert(offsetof(IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu, Temp_string_Variable) == 0x000020, "Member 'IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu, Temp_bool_Variable) == 0x000030, "Member 'IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu, CallFunc_MapRangeClamped_ReturnValue) == 0x000038, "Member 'IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu, CallFunc_IGLE_GetGlobalSettings_Settings) == 0x000040, "Member 'IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu::CallFunc_IGLE_GetGlobalSettings_Settings' has a wrong offset!");
static_assert(offsetof(IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu, CallFunc_GetOwningPlayer_ReturnValue) == 0x0000C8, "Member 'IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu, CallFunc_GetGameMode_ReturnValue) == 0x0000D0, "Member 'IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x0000D8, "Member 'IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu, CallFunc_K2_GetPawn_ReturnValue) == 0x0000E0, "Member 'IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu, CallFunc_IGLE_ParseOptionString_Value) == 0x0000E8, "Member 'IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu::CallFunc_IGLE_ParseOptionString_Value' has a wrong offset!");
static_assert(offsetof(IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu, CallFunc_IGLE_ParseOptionString_OptionExists) == 0x0000F8, "Member 'IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu::CallFunc_IGLE_ParseOptionString_OptionExists' has a wrong offset!");
static_assert(offsetof(IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu, K2Node_DynamicCast_AsIGLE_Pawn_Example_1) == 0x000100, "Member 'IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu::K2Node_DynamicCast_AsIGLE_Pawn_Example_1' has a wrong offset!");
static_assert(offsetof(IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu, K2Node_DynamicCast_bSuccess_1) == 0x000108, "Member 'IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu, CallFunc_Len_ReturnValue) == 0x00010C, "Member 'IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu, CallFunc_GetBaseFilename_ReturnValue) == 0x000110, "Member 'IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu::CallFunc_GetBaseFilename_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000120, "Member 'IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu, CallFunc_GetOwningPlayer_ReturnValue_2) == 0x000128, "Member 'IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu::CallFunc_GetOwningPlayer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu, K2Node_Select_Default) == 0x000130, "Member 'IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu, CallFunc_Concat_StrStr_ReturnValue) == 0x000140, "Member 'IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu, CallFunc_GetGameInstance_ReturnValue) == 0x000150, "Member 'IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu, CallFunc_Conv_StringToText_ReturnValue) == 0x000158, "Member 'IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu, K2Node_DynamicCast_AsCustom_GI) == 0x000170, "Member 'IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu::K2Node_DynamicCast_AsCustom_GI' has a wrong offset!");
static_assert(offsetof(IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu, K2Node_DynamicCast_bSuccess_2) == 0x000178, "Member 'IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu, K2Node_ComponentBoundEvent_Value) == 0x00017C, "Member 'IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu::K2Node_ComponentBoundEvent_Value' has a wrong offset!");
static_assert(offsetof(IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu, CallFunc_GetPlayerPawn_ReturnValue_1) == 0x000180, "Member 'IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu::CallFunc_GetPlayerPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu, CallFunc_MapRangeClamped_ReturnValue_1) == 0x000188, "Member 'IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu::CallFunc_MapRangeClamped_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu, K2Node_DynamicCast_AsIGLE_Pawn_Example_2) == 0x000190, "Member 'IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu::K2Node_DynamicCast_AsIGLE_Pawn_Example_2' has a wrong offset!");
static_assert(offsetof(IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu, K2Node_DynamicCast_bSuccess_3) == 0x000198, "Member 'IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu, CallFunc_MapRangeClamped_Value_ImplicitCast) == 0x0001A0, "Member 'IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu::CallFunc_MapRangeClamped_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu, CallFunc_SetValue_InValue_ImplicitCast) == 0x0001A8, "Member 'IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu::CallFunc_SetValue_InValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu, CallFunc_MapRangeClamped_Value_ImplicitCast_1) == 0x0001B0, "Member 'IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu::CallFunc_MapRangeClamped_Value_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu, CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast) == 0x0001B8, "Member 'IGLE_W_EditorPauseMenu_C_ExecuteUbergraph_IGLE_W_EditorPauseMenu::CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast' has a wrong offset!");

}

