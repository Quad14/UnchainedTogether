#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CreateSession

#include "Basic.hpp"

#include "SteamCorePro_structs.hpp"
#include "SlateCore_structs.hpp"
#include "S_BiomeSave_structs.hpp"


namespace SDK::Params
{

// Function W_CreateSession.W_CreateSession_C.ActivateMapButtons
// 0x0038 (0x0038 - 0x0000)
struct W_CreateSession_C_ActivateMapButtons final
{
public:
	bool                                          CanClick;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3358[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_MapButton_C*>                 CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3359[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_MapButton_C*                         CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CreateSession_C_ActivateMapButtons) == 0x000008, "Wrong alignment on W_CreateSession_C_ActivateMapButtons");
static_assert(sizeof(W_CreateSession_C_ActivateMapButtons) == 0x000038, "Wrong size on W_CreateSession_C_ActivateMapButtons");
static_assert(offsetof(W_CreateSession_C_ActivateMapButtons, CanClick) == 0x000000, "Member 'W_CreateSession_C_ActivateMapButtons::CanClick' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ActivateMapButtons, Temp_int_Array_Index_Variable) == 0x000004, "Member 'W_CreateSession_C_ActivateMapButtons::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ActivateMapButtons, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'W_CreateSession_C_ActivateMapButtons::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ActivateMapButtons, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'W_CreateSession_C_ActivateMapButtons::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ActivateMapButtons, CallFunc_GetAllWidgetsOfClass_FoundWidgets) == 0x000010, "Member 'W_CreateSession_C_ActivateMapButtons::CallFunc_GetAllWidgetsOfClass_FoundWidgets' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ActivateMapButtons, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'W_CreateSession_C_ActivateMapButtons::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ActivateMapButtons, CallFunc_Array_Get_Item) == 0x000028, "Member 'W_CreateSession_C_ActivateMapButtons::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ActivateMapButtons, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'W_CreateSession_C_ActivateMapButtons::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function W_CreateSession.W_CreateSession_C.BndEvt__W_CreateSession_W_ComboBox_1_K2Node_ComponentBoundEvent_1_OnComboSettingChange__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct W_CreateSession_C_BndEvt__W_CreateSession_W_ComboBox_1_K2Node_ComponentBoundEvent_1_OnComboSettingChange__DelegateSignature final
{
public:
	class FString                                 NewSelection;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectType;                                        // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CreateSession_C_BndEvt__W_CreateSession_W_ComboBox_1_K2Node_ComponentBoundEvent_1_OnComboSettingChange__DelegateSignature) == 0x000008, "Wrong alignment on W_CreateSession_C_BndEvt__W_CreateSession_W_ComboBox_1_K2Node_ComponentBoundEvent_1_OnComboSettingChange__DelegateSignature");
static_assert(sizeof(W_CreateSession_C_BndEvt__W_CreateSession_W_ComboBox_1_K2Node_ComponentBoundEvent_1_OnComboSettingChange__DelegateSignature) == 0x000018, "Wrong size on W_CreateSession_C_BndEvt__W_CreateSession_W_ComboBox_1_K2Node_ComponentBoundEvent_1_OnComboSettingChange__DelegateSignature");
static_assert(offsetof(W_CreateSession_C_BndEvt__W_CreateSession_W_ComboBox_1_K2Node_ComponentBoundEvent_1_OnComboSettingChange__DelegateSignature, NewSelection) == 0x000000, "Member 'W_CreateSession_C_BndEvt__W_CreateSession_W_ComboBox_1_K2Node_ComponentBoundEvent_1_OnComboSettingChange__DelegateSignature::NewSelection' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_BndEvt__W_CreateSession_W_ComboBox_1_K2Node_ComponentBoundEvent_1_OnComboSettingChange__DelegateSignature, SelectType) == 0x000010, "Member 'W_CreateSession_C_BndEvt__W_CreateSession_W_ComboBox_1_K2Node_ComponentBoundEvent_1_OnComboSettingChange__DelegateSignature::SelectType' has a wrong offset!");

// Function W_CreateSession.W_CreateSession_C.BndEvt__W_CreateSession_W_ComboBox_K2Node_ComponentBoundEvent_0_OnComboSettingChange__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct W_CreateSession_C_BndEvt__W_CreateSession_W_ComboBox_K2Node_ComponentBoundEvent_0_OnComboSettingChange__DelegateSignature final
{
public:
	class FString                                 NewSelection;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectType;                                        // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CreateSession_C_BndEvt__W_CreateSession_W_ComboBox_K2Node_ComponentBoundEvent_0_OnComboSettingChange__DelegateSignature) == 0x000008, "Wrong alignment on W_CreateSession_C_BndEvt__W_CreateSession_W_ComboBox_K2Node_ComponentBoundEvent_0_OnComboSettingChange__DelegateSignature");
static_assert(sizeof(W_CreateSession_C_BndEvt__W_CreateSession_W_ComboBox_K2Node_ComponentBoundEvent_0_OnComboSettingChange__DelegateSignature) == 0x000018, "Wrong size on W_CreateSession_C_BndEvt__W_CreateSession_W_ComboBox_K2Node_ComponentBoundEvent_0_OnComboSettingChange__DelegateSignature");
static_assert(offsetof(W_CreateSession_C_BndEvt__W_CreateSession_W_ComboBox_K2Node_ComponentBoundEvent_0_OnComboSettingChange__DelegateSignature, NewSelection) == 0x000000, "Member 'W_CreateSession_C_BndEvt__W_CreateSession_W_ComboBox_K2Node_ComponentBoundEvent_0_OnComboSettingChange__DelegateSignature::NewSelection' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_BndEvt__W_CreateSession_W_ComboBox_K2Node_ComponentBoundEvent_0_OnComboSettingChange__DelegateSignature, SelectType) == 0x000010, "Member 'W_CreateSession_C_BndEvt__W_CreateSession_W_ComboBox_K2Node_ComponentBoundEvent_0_OnComboSettingChange__DelegateSignature::SelectType' has a wrong offset!");

// Function W_CreateSession.W_CreateSession_C.ExecuteUbergraph_W_CreateSession
// 0x0410 (0x0410 - 0x0000)
struct W_CreateSession_C_ExecuteUbergraph_W_CreateSession final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_335A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayMenu_W_C*                          CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ULoadSaveSwitcher_W_C*                  CallFunc_Create_ReturnValue_1;                     // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_BiomeSave                           K2Node_MakeStruct_S_BiomeSave;                     // 0x0018(0x0038)(ZeroConstructor, HasGetValueTypeHash)
	struct FS_BiomeSave                           K2Node_MakeStruct_S_BiomeSave_1;                   // 0x0050(0x0038)(ZeroConstructor, HasGetValueTypeHash)
	struct FS_BiomeSave                           K2Node_MakeStruct_S_BiomeSave_2;                   // 0x0088(0x0038)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_335B[0x6];                                     // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerName_ReturnValue;                // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x00E0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;                 // 0x0100(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_ComponentBoundEvent_NewSelection_1;         // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectType_1;           // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_335C[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0120(0x0018)()
	bool                                          K2Node_SwitchString_CmpSuccess;                    // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_335D[0x6];                                     // 0x013A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCustomGI_C*                            K2Node_DynamicCast_AsCustom_GI;                    // 0x0160(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_335E[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCustomGI_C*                            K2Node_DynamicCast_AsCustom_GI_1;                  // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_335F[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSteamSessionSetting                   CallFunc_MakeString_ReturnValue;                   // 0x0180(0x0028)()
	class FString                                 CallFunc_No_Password_Code_ReturnValue;             // 0x01A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_SelectString_ReturnValue;                 // 0x01B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSteamSessionSetting                   CallFunc_MakeString_ReturnValue_1;                 // 0x01C8(0x0028)()
	struct FSteamSessionSetting                   CallFunc_MakeString_ReturnValue_2;                 // 0x01F0(0x0028)()
	class FString                                 K2Node_ComponentBoundEvent_NewSelection;           // 0x0218(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectType;             // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3360[0x7];                                     // 0x0229(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_2;            // 0x0230(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchString_CmpSuccess_1;                  // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3361[0x7];                                     // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCustomGI_C*                            K2Node_DynamicCast_AsCustom_GI_2;                  // 0x0240(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3362[0x7];                                     // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSteamSessionSetting                   CallFunc_MakeString_ReturnValue_3;                 // 0x0250(0x0028)()
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x0278(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetText_ReturnValue_1;                    // 0x0280(0x0018)()
	class FString                                 CallFunc_GetPlayerName_ReturnValue_1;              // 0x0298(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue_1;                // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3363[0x7];                                     // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSteamSessionSetting                   CallFunc_MakeString_ReturnValue_4;                 // 0x02B0(0x0028)()
	class FString                                 CallFunc_SelectString_ReturnValue_1;               // 0x02D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSteamID                               CallFunc_GetSteamID_Pure_ReturnValue;              // 0x02E8(0x0008)(NoDestructor)
	struct FSteamSessionSetting                   CallFunc_MakeString_ReturnValue_5;                 // 0x02F0(0x0028)()
	class FString                                 CallFunc_BreakSteamID_ReturnValue;                 // 0x0318(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSteamSessionSetting                   CallFunc_MakeString_ReturnValue_6;                 // 0x0328(0x0028)()
	struct FS_BiomeSave                           K2Node_Event_Save;                                 // 0x0350(0x0038)(ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, struct FSteamSessionSetting> K2Node_MakeMap_Map;                                // 0x0388(0x0050)()
	class USteamCoreProCreateSession*             CallFunc_CreateSteamCoreProSession_ReturnValue;    // 0x03D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x03E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x03E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3364[0x2];                                     // 0x03E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x03E4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3365[0x4];                                     // 0x03F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_3;            // 0x03F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCustomGI_C*                            K2Node_DynamicCast_AsCustom_GI_3;                  // 0x0400(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0408(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession) == 0x000008, "Wrong alignment on W_CreateSession_C_ExecuteUbergraph_W_CreateSession");
static_assert(sizeof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession) == 0x000410, "Wrong size on W_CreateSession_C_ExecuteUbergraph_W_CreateSession");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, EntryPoint) == 0x000000, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, CallFunc_Create_ReturnValue) == 0x000008, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, CallFunc_Create_ReturnValue_1) == 0x000010, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, K2Node_MakeStruct_S_BiomeSave) == 0x000018, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::K2Node_MakeStruct_S_BiomeSave' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, K2Node_MakeStruct_S_BiomeSave_1) == 0x000050, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::K2Node_MakeStruct_S_BiomeSave_1' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, K2Node_MakeStruct_S_BiomeSave_2) == 0x000088, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::K2Node_MakeStruct_S_BiomeSave_2' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, Temp_bool_Has_Been_Initd_Variable) == 0x0000C0, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, Temp_bool_IsClosed_Variable) == 0x0000C1, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, CallFunc_GetPlayerController_ReturnValue) == 0x0000C8, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, CallFunc_GetPlayerName_ReturnValue) == 0x0000D0, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::CallFunc_GetPlayerName_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, K2Node_CreateDelegate_OutputDelegate) == 0x0000E0, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, CallFunc_GetPlayerController_ReturnValue_1) == 0x0000F0, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, CallFunc_PlayAnimation_ReturnValue) == 0x0000F8, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, CallFunc_SpawnSound2D_ReturnValue) == 0x000100, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, K2Node_ComponentBoundEvent_NewSelection_1) == 0x000108, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::K2Node_ComponentBoundEvent_NewSelection_1' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, K2Node_ComponentBoundEvent_SelectType_1) == 0x000118, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::K2Node_ComponentBoundEvent_SelectType_1' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, CallFunc_GetText_ReturnValue) == 0x000120, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, K2Node_SwitchString_CmpSuccess) == 0x000138, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::K2Node_SwitchString_CmpSuccess' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, CallFunc_TextIsEmpty_ReturnValue) == 0x000139, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, CallFunc_Conv_TextToString_ReturnValue) == 0x000140, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, CallFunc_GetGameInstance_ReturnValue) == 0x000150, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, CallFunc_GetGameInstance_ReturnValue_1) == 0x000158, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, K2Node_DynamicCast_AsCustom_GI) == 0x000160, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::K2Node_DynamicCast_AsCustom_GI' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, K2Node_DynamicCast_bSuccess) == 0x000168, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, K2Node_DynamicCast_AsCustom_GI_1) == 0x000170, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::K2Node_DynamicCast_AsCustom_GI_1' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, K2Node_DynamicCast_bSuccess_1) == 0x000178, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, CallFunc_MakeString_ReturnValue) == 0x000180, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::CallFunc_MakeString_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, CallFunc_No_Password_Code_ReturnValue) == 0x0001A8, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::CallFunc_No_Password_Code_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, CallFunc_SelectString_ReturnValue) == 0x0001B8, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::CallFunc_SelectString_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, CallFunc_MakeString_ReturnValue_1) == 0x0001C8, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::CallFunc_MakeString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, CallFunc_MakeString_ReturnValue_2) == 0x0001F0, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::CallFunc_MakeString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, K2Node_ComponentBoundEvent_NewSelection) == 0x000218, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::K2Node_ComponentBoundEvent_NewSelection' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, K2Node_ComponentBoundEvent_SelectType) == 0x000228, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::K2Node_ComponentBoundEvent_SelectType' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, CallFunc_GetGameInstance_ReturnValue_2) == 0x000230, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::CallFunc_GetGameInstance_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, K2Node_SwitchString_CmpSuccess_1) == 0x000238, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::K2Node_SwitchString_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, K2Node_DynamicCast_AsCustom_GI_2) == 0x000240, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::K2Node_DynamicCast_AsCustom_GI_2' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, K2Node_DynamicCast_bSuccess_2) == 0x000248, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, CallFunc_MakeString_ReturnValue_3) == 0x000250, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::CallFunc_MakeString_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, CallFunc_GetPlayerController_ReturnValue_2) == 0x000278, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, CallFunc_GetText_ReturnValue_1) == 0x000280, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::CallFunc_GetText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, CallFunc_GetPlayerName_ReturnValue_1) == 0x000298, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::CallFunc_GetPlayerName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, CallFunc_TextIsEmpty_ReturnValue_1) == 0x0002A8, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::CallFunc_TextIsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, CallFunc_MakeString_ReturnValue_4) == 0x0002B0, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::CallFunc_MakeString_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, CallFunc_SelectString_ReturnValue_1) == 0x0002D8, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::CallFunc_SelectString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, CallFunc_GetSteamID_Pure_ReturnValue) == 0x0002E8, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::CallFunc_GetSteamID_Pure_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, CallFunc_MakeString_ReturnValue_5) == 0x0002F0, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::CallFunc_MakeString_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, CallFunc_BreakSteamID_ReturnValue) == 0x000318, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::CallFunc_BreakSteamID_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, CallFunc_MakeString_ReturnValue_6) == 0x000328, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::CallFunc_MakeString_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, K2Node_Event_Save) == 0x000350, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::K2Node_Event_Save' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, K2Node_MakeMap_Map) == 0x000388, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::K2Node_MakeMap_Map' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, CallFunc_CreateSteamCoreProSession_ReturnValue) == 0x0003D8, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::CallFunc_CreateSteamCoreProSession_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0003E0, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, CallFunc_IsValid_ReturnValue) == 0x0003E1, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, K2Node_CreateDelegate_OutputDelegate_1) == 0x0003E4, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, CallFunc_GetGameInstance_ReturnValue_3) == 0x0003F8, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::CallFunc_GetGameInstance_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, K2Node_DynamicCast_AsCustom_GI_3) == 0x000400, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::K2Node_DynamicCast_AsCustom_GI_3' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_ExecuteUbergraph_W_CreateSession, K2Node_DynamicCast_bSuccess_3) == 0x000408, "Member 'W_CreateSession_C_ExecuteUbergraph_W_CreateSession::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");

// Function W_CreateSession.W_CreateSession_C.GetLevel
// 0x0060 (0x0060 - 0x0000)
struct W_CreateSession_C_GetLevel final
{
public:
	struct FSteamSessionSetting                   ReturnValue;                                       // 0x0000(0x0028)(Parm, OutParm, ReturnParm)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSteamSessionSetting                   CallFunc_MakeString_ReturnValue;                   // 0x0038(0x0028)()
};
static_assert(alignof(W_CreateSession_C_GetLevel) == 0x000008, "Wrong alignment on W_CreateSession_C_GetLevel");
static_assert(sizeof(W_CreateSession_C_GetLevel) == 0x000060, "Wrong size on W_CreateSession_C_GetLevel");
static_assert(offsetof(W_CreateSession_C_GetLevel, ReturnValue) == 0x000000, "Member 'W_CreateSession_C_GetLevel::ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_GetLevel, CallFunc_Conv_TextToString_ReturnValue) == 0x000028, "Member 'W_CreateSession_C_GetLevel::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_GetLevel, CallFunc_MakeString_ReturnValue) == 0x000038, "Member 'W_CreateSession_C_GetLevel::CallFunc_MakeString_ReturnValue' has a wrong offset!");

// Function W_CreateSession.W_CreateSession_C.GetPassword
// 0x0078 (0x0078 - 0x0000)
struct W_CreateSession_C_GetPassword final
{
public:
	struct FSteamSessionSetting                   ReturnValue;                                       // 0x0000(0x0028)(Parm, OutParm, ReturnParm)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0028(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSteamSessionSetting                   CallFunc_MakeString_ReturnValue;                   // 0x0050(0x0028)()
};
static_assert(alignof(W_CreateSession_C_GetPassword) == 0x000008, "Wrong alignment on W_CreateSession_C_GetPassword");
static_assert(sizeof(W_CreateSession_C_GetPassword) == 0x000078, "Wrong size on W_CreateSession_C_GetPassword");
static_assert(offsetof(W_CreateSession_C_GetPassword, ReturnValue) == 0x000000, "Member 'W_CreateSession_C_GetPassword::ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_GetPassword, CallFunc_GetText_ReturnValue) == 0x000028, "Member 'W_CreateSession_C_GetPassword::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_GetPassword, CallFunc_Conv_TextToString_ReturnValue) == 0x000040, "Member 'W_CreateSession_C_GetPassword::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_GetPassword, CallFunc_MakeString_ReturnValue) == 0x000050, "Member 'W_CreateSession_C_GetPassword::CallFunc_MakeString_ReturnValue' has a wrong offset!");

// Function W_CreateSession.W_CreateSession_C.RefreshSave
// 0x0038 (0x0038 - 0x0000)
struct W_CreateSession_C_RefreshSave final
{
public:
	struct FS_BiomeSave                           Save;                                              // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CreateSession_C_RefreshSave) == 0x000008, "Wrong alignment on W_CreateSession_C_RefreshSave");
static_assert(sizeof(W_CreateSession_C_RefreshSave) == 0x000038, "Wrong size on W_CreateSession_C_RefreshSave");
static_assert(offsetof(W_CreateSession_C_RefreshSave, Save) == 0x000000, "Member 'W_CreateSession_C_RefreshSave::Save' has a wrong offset!");

// Function W_CreateSession.W_CreateSession_C.SetServerName
// 0x0030 (0x0030 - 0x0000)
struct W_CreateSession_C_SetServerName final
{
public:
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerName_ReturnValue;                // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
};
static_assert(alignof(W_CreateSession_C_SetServerName) == 0x000008, "Wrong alignment on W_CreateSession_C_SetServerName");
static_assert(sizeof(W_CreateSession_C_SetServerName) == 0x000030, "Wrong size on W_CreateSession_C_SetServerName");
static_assert(offsetof(W_CreateSession_C_SetServerName, CallFunc_GetPlayerController_ReturnValue) == 0x000000, "Member 'W_CreateSession_C_SetServerName::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_SetServerName, CallFunc_GetPlayerName_ReturnValue) == 0x000008, "Member 'W_CreateSession_C_SetServerName::CallFunc_GetPlayerName_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CreateSession_C_SetServerName, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'W_CreateSession_C_SetServerName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

