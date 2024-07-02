#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SessionButton

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function W_SessionButton.W_SessionButton_C.ExecuteUbergraph_W_SessionButton
// 0x0060 (0x0060 - 0x0000)
struct W_SessionButton_C_ExecuteUbergraph_W_SessionButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E06[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_PasswordSession_C*                   CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_JoiningSession_C*                    CallFunc_Create_ReturnValue_1;                     // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E07[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x002C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E08[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UJoinSessionCallbackProxy*              CallFunc_JoinSession_ReturnValue;                  // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_SessionButton_C_ExecuteUbergraph_W_SessionButton) == 0x000008, "Wrong alignment on W_SessionButton_C_ExecuteUbergraph_W_SessionButton");
static_assert(sizeof(W_SessionButton_C_ExecuteUbergraph_W_SessionButton) == 0x000060, "Wrong size on W_SessionButton_C_ExecuteUbergraph_W_SessionButton");
static_assert(offsetof(W_SessionButton_C_ExecuteUbergraph_W_SessionButton, EntryPoint) == 0x000000, "Member 'W_SessionButton_C_ExecuteUbergraph_W_SessionButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_SessionButton_C_ExecuteUbergraph_W_SessionButton, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'W_SessionButton_C_ExecuteUbergraph_W_SessionButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(W_SessionButton_C_ExecuteUbergraph_W_SessionButton, CallFunc_Create_ReturnValue) == 0x000018, "Member 'W_SessionButton_C_ExecuteUbergraph_W_SessionButton::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SessionButton_C_ExecuteUbergraph_W_SessionButton, CallFunc_Create_ReturnValue_1) == 0x000020, "Member 'W_SessionButton_C_ExecuteUbergraph_W_SessionButton::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_SessionButton_C_ExecuteUbergraph_W_SessionButton, Temp_bool_Has_Been_Initd_Variable) == 0x000028, "Member 'W_SessionButton_C_ExecuteUbergraph_W_SessionButton::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(W_SessionButton_C_ExecuteUbergraph_W_SessionButton, Temp_bool_IsClosed_Variable) == 0x000029, "Member 'W_SessionButton_C_ExecuteUbergraph_W_SessionButton::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(W_SessionButton_C_ExecuteUbergraph_W_SessionButton, K2Node_CreateDelegate_OutputDelegate_1) == 0x00002C, "Member 'W_SessionButton_C_ExecuteUbergraph_W_SessionButton::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(W_SessionButton_C_ExecuteUbergraph_W_SessionButton, CallFunc_GetPlayerController_ReturnValue) == 0x000040, "Member 'W_SessionButton_C_ExecuteUbergraph_W_SessionButton::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SessionButton_C_ExecuteUbergraph_W_SessionButton, CallFunc_GetPlayerController_ReturnValue_1) == 0x000048, "Member 'W_SessionButton_C_ExecuteUbergraph_W_SessionButton::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_SessionButton_C_ExecuteUbergraph_W_SessionButton, CallFunc_JoinSession_ReturnValue) == 0x000050, "Member 'W_SessionButton_C_ExecuteUbergraph_W_SessionButton::CallFunc_JoinSession_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SessionButton_C_ExecuteUbergraph_W_SessionButton, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'W_SessionButton_C_ExecuteUbergraph_W_SessionButton::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function W_SessionButton.W_SessionButton_C.UpdateMode
// 0x0002 (0x0002 - 0x0000)
struct W_SessionButton_C_UpdateMode final
{
public:
	bool                                          CallFunc_VerifySessionSetting_ReturnValue;         // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_VerifySessionSetting_ReturnValue_1;       // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_SessionButton_C_UpdateMode) == 0x000001, "Wrong alignment on W_SessionButton_C_UpdateMode");
static_assert(sizeof(W_SessionButton_C_UpdateMode) == 0x000002, "Wrong size on W_SessionButton_C_UpdateMode");
static_assert(offsetof(W_SessionButton_C_UpdateMode, CallFunc_VerifySessionSetting_ReturnValue) == 0x000000, "Member 'W_SessionButton_C_UpdateMode::CallFunc_VerifySessionSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SessionButton_C_UpdateMode, CallFunc_VerifySessionSetting_ReturnValue_1) == 0x000001, "Member 'W_SessionButton_C_UpdateMode::CallFunc_VerifySessionSetting_ReturnValue_1' has a wrong offset!");

// Function W_SessionButton.W_SessionButton_C.UpdateName
// 0x0088 (0x0088 - 0x0000)
struct W_SessionButton_C_UpdateName final
{
public:
	class FString                                 CallFunc_GetServerName_ReturnValue;                // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         CallFunc_ParseIntoArray_ReturnValue;               // 0x0010(0x0010)(ReferenceParm)
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSubstring_ReturnValue;                 // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E09[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E0A[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_SelectString_ReturnValue;                 // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0070(0x0018)()
};
static_assert(alignof(W_SessionButton_C_UpdateName) == 0x000008, "Wrong alignment on W_SessionButton_C_UpdateName");
static_assert(sizeof(W_SessionButton_C_UpdateName) == 0x000088, "Wrong size on W_SessionButton_C_UpdateName");
static_assert(offsetof(W_SessionButton_C_UpdateName, CallFunc_GetServerName_ReturnValue) == 0x000000, "Member 'W_SessionButton_C_UpdateName::CallFunc_GetServerName_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SessionButton_C_UpdateName, CallFunc_ParseIntoArray_ReturnValue) == 0x000010, "Member 'W_SessionButton_C_UpdateName::CallFunc_ParseIntoArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SessionButton_C_UpdateName, CallFunc_Array_Get_Item) == 0x000020, "Member 'W_SessionButton_C_UpdateName::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(W_SessionButton_C_UpdateName, CallFunc_GetSubstring_ReturnValue) == 0x000030, "Member 'W_SessionButton_C_UpdateName::CallFunc_GetSubstring_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SessionButton_C_UpdateName, CallFunc_Len_ReturnValue) == 0x000040, "Member 'W_SessionButton_C_UpdateName::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SessionButton_C_UpdateName, CallFunc_Concat_StrStr_ReturnValue) == 0x000048, "Member 'W_SessionButton_C_UpdateName::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SessionButton_C_UpdateName, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000058, "Member 'W_SessionButton_C_UpdateName::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SessionButton_C_UpdateName, CallFunc_SelectString_ReturnValue) == 0x000060, "Member 'W_SessionButton_C_UpdateName::CallFunc_SelectString_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SessionButton_C_UpdateName, CallFunc_Conv_StringToText_ReturnValue) == 0x000070, "Member 'W_SessionButton_C_UpdateName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function W_SessionButton.W_SessionButton_C.UpdatePassword
// 0x0018 (0x0018 - 0x0000)
struct W_SessionButton_C_UpdatePassword final
{
public:
	class FString                                 CallFunc_No_Password_Code_ReturnValue;             // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_VerifySessionSetting_ReturnValue;         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_SessionButton_C_UpdatePassword) == 0x000008, "Wrong alignment on W_SessionButton_C_UpdatePassword");
static_assert(sizeof(W_SessionButton_C_UpdatePassword) == 0x000018, "Wrong size on W_SessionButton_C_UpdatePassword");
static_assert(offsetof(W_SessionButton_C_UpdatePassword, CallFunc_No_Password_Code_ReturnValue) == 0x000000, "Member 'W_SessionButton_C_UpdatePassword::CallFunc_No_Password_Code_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SessionButton_C_UpdatePassword, CallFunc_VerifySessionSetting_ReturnValue) == 0x000010, "Member 'W_SessionButton_C_UpdatePassword::CallFunc_VerifySessionSetting_ReturnValue' has a wrong offset!");

// Function W_SessionButton.W_SessionButton_C.UpdatePing
// 0x0060 (0x0060 - 0x0000)
struct W_SessionButton_C_UpdatePing final
{
public:
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0000(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0014(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0028(0x0014)()
	int32                                         CallFunc_GetPingInMs_ReturnValue;                  // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0040(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_SessionButton_C_UpdatePing) == 0x000008, "Wrong alignment on W_SessionButton_C_UpdatePing");
static_assert(sizeof(W_SessionButton_C_UpdatePing) == 0x000060, "Wrong size on W_SessionButton_C_UpdatePing");
static_assert(offsetof(W_SessionButton_C_UpdatePing, K2Node_MakeStruct_SlateColor) == 0x000000, "Member 'W_SessionButton_C_UpdatePing::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(W_SessionButton_C_UpdatePing, K2Node_MakeStruct_SlateColor_1) == 0x000014, "Member 'W_SessionButton_C_UpdatePing::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(W_SessionButton_C_UpdatePing, K2Node_MakeStruct_SlateColor_2) == 0x000028, "Member 'W_SessionButton_C_UpdatePing::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(W_SessionButton_C_UpdatePing, CallFunc_GetPingInMs_ReturnValue) == 0x00003C, "Member 'W_SessionButton_C_UpdatePing::CallFunc_GetPingInMs_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SessionButton_C_UpdatePing, CallFunc_Conv_IntToText_ReturnValue) == 0x000040, "Member 'W_SessionButton_C_UpdatePing::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SessionButton_C_UpdatePing, CallFunc_Less_IntInt_ReturnValue) == 0x000058, "Member 'W_SessionButton_C_UpdatePing::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SessionButton_C_UpdatePing, CallFunc_Less_IntInt_ReturnValue_1) == 0x000059, "Member 'W_SessionButton_C_UpdatePing::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function W_SessionButton.W_SessionButton_C.UpdatePlayers
// 0x0060 (0x0060 - 0x0000)
struct W_SessionButton_C_UpdatePlayers final
{
public:
	int32                                         CallFunc_GetCurrentPlayers_ReturnValue;            // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMaxPlayers_ReturnValue;                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0048(0x0018)()
};
static_assert(alignof(W_SessionButton_C_UpdatePlayers) == 0x000008, "Wrong alignment on W_SessionButton_C_UpdatePlayers");
static_assert(sizeof(W_SessionButton_C_UpdatePlayers) == 0x000060, "Wrong size on W_SessionButton_C_UpdatePlayers");
static_assert(offsetof(W_SessionButton_C_UpdatePlayers, CallFunc_GetCurrentPlayers_ReturnValue) == 0x000000, "Member 'W_SessionButton_C_UpdatePlayers::CallFunc_GetCurrentPlayers_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SessionButton_C_UpdatePlayers, CallFunc_GetMaxPlayers_ReturnValue) == 0x000004, "Member 'W_SessionButton_C_UpdatePlayers::CallFunc_GetMaxPlayers_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SessionButton_C_UpdatePlayers, CallFunc_Conv_IntToString_ReturnValue) == 0x000008, "Member 'W_SessionButton_C_UpdatePlayers::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SessionButton_C_UpdatePlayers, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000018, "Member 'W_SessionButton_C_UpdatePlayers::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_SessionButton_C_UpdatePlayers, CallFunc_Concat_StrStr_ReturnValue) == 0x000028, "Member 'W_SessionButton_C_UpdatePlayers::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SessionButton_C_UpdatePlayers, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000038, "Member 'W_SessionButton_C_UpdatePlayers::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_SessionButton_C_UpdatePlayers, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'W_SessionButton_C_UpdatePlayers::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

