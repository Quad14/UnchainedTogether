#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Leaderboard

#include "Basic.hpp"

#include "SteamCorePro_structs.hpp"


namespace SDK::Params
{

// Function W_Leaderboard.W_Leaderboard_C.ExecuteUbergraph_W_Leaderboard
// 0x01E8 (0x01E8 - 0x0000)
struct W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_331D[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLeaderboardScoresDownloaded           Temp_struct_Variable;                              // 0x0008(0x0018)(NoDestructor)
	class UW_LeaderBoardSlot_C*                   CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FLeaderboardFindResult& Data, bool bWasSuccessful)> K2Node_CreateDelegate_OutputDelegate;              // 0x002C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_331E[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLeaderboardFindResult                 K2Node_CustomEvent_Data_1;                         // 0x0040(0x0010)(ConstParm, NoDestructor)
	bool                                          K2Node_CustomEvent_bWasSuccessful_1;               // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_331F[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLeaderboardFindResult                 Temp_struct_Variable_1;                            // 0x0058(0x0010)(NoDestructor)
	class USteamCoreProUserStatsAsyncActionDownloadLeaderboardEntries* CallFunc_DownloadLeaderboardEntriesAsync_ReturnValue; // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USteamCoreProUserStatsAsyncActionDownloadLeaderboardEntries* CallFunc_DownloadLeaderboardEntriesAsync_ReturnValue_1; // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3320[0x6];                                     // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLeaderboardScoresDownloaded           K2Node_CustomEvent_Data;                           // 0x0080(0x0018)(ConstParm, NoDestructor)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3321[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FLeaderboardScoresDownloaded& Data, bool bWasSuccessful)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x009C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3322[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLeaderboardScoresDownloaded           Temp_struct_Variable_2;                            // 0x00B0(0x0018)(NoDestructor)
	struct FLeaderboardScoresDownloaded           K2Node_CustomEvent_Data_2;                         // 0x00C8(0x0018)(ConstParm, NoDestructor)
	bool                                          K2Node_CustomEvent_bWasSuccessful_2;               // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3323[0x3];                                     // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3324[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSteamLeaderboardEntry                 CallFunc_GetDownloadedLeaderboardEntry_LeaderboardEntry; // 0x00F0(0x0020)(NoDestructor)
	TArray<int32>                                 CallFunc_GetDownloadedLeaderboardEntry_outDetails; // 0x0110(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetDownloadedLeaderboardEntry_ReturnValue; // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3325[0x2];                                     // 0x0122(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3326[0x2];                                     // 0x012A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FLeaderboardScoresDownloaded& Data, bool bWasSuccessful)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x012C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3327[0x4];                                     // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0140(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_CustomEvent_NewScrollOffset;                // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScrollOffsetOfEnd_ReturnValue;         // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3328[0x4];                                     // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Lerp_ReturnValue;                         // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0170(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USteamCoreProUserStatsAsyncActionFindLeaderboard* CallFunc_FindLeaderboardAsync_ReturnValue;         // 0x0180(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3329[0x3];                                     // 0x0189(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSteamLeaderboardEntry                 CallFunc_GetDownloadedLeaderboardEntry_LeaderboardEntry_1; // 0x0190(0x0020)(NoDestructor)
	TArray<int32>                                 CallFunc_GetDownloadedLeaderboardEntry_outDetails_1; // 0x01B0(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetDownloadedLeaderboardEntry_ReturnValue_1; // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x01C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_332A[0x2];                                     // 0x01C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x01C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSteamID                               CallFunc_GetSteamID_ReturnValue;                   // 0x01C8(0x0008)(NoDestructor)
	bool                                          CallFunc_Equal_ReturnValue;                        // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_332B[0x7];                                     // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Lerp_B_ImplicitCast;                      // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast; // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard) == 0x000008, "Wrong alignment on W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard");
static_assert(sizeof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard) == 0x0001E8, "Wrong size on W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, EntryPoint) == 0x000000, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, Temp_bool_Variable) == 0x000004, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, Temp_struct_Variable) == 0x000008, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, CallFunc_Create_ReturnValue) == 0x000020, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, CallFunc_Subtract_IntInt_ReturnValue) == 0x000028, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, K2Node_CreateDelegate_OutputDelegate) == 0x00002C, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, K2Node_CustomEvent_Data_1) == 0x000040, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::K2Node_CustomEvent_Data_1' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, K2Node_CustomEvent_bWasSuccessful_1) == 0x000050, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::K2Node_CustomEvent_bWasSuccessful_1' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, Temp_bool_Variable_1) == 0x000051, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, Temp_struct_Variable_1) == 0x000058, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, CallFunc_DownloadLeaderboardEntriesAsync_ReturnValue) == 0x000068, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::CallFunc_DownloadLeaderboardEntriesAsync_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, CallFunc_DownloadLeaderboardEntriesAsync_ReturnValue_1) == 0x000070, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::CallFunc_DownloadLeaderboardEntriesAsync_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, CallFunc_IsValid_ReturnValue) == 0x000078, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, CallFunc_IsValid_ReturnValue_1) == 0x000079, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, K2Node_CustomEvent_Data) == 0x000080, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::K2Node_CustomEvent_Data' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, K2Node_CustomEvent_bWasSuccessful) == 0x000098, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, K2Node_CreateDelegate_OutputDelegate_1) == 0x00009C, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, Temp_bool_Variable_2) == 0x0000AC, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, Temp_struct_Variable_2) == 0x0000B0, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, K2Node_CustomEvent_Data_2) == 0x0000C8, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::K2Node_CustomEvent_Data_2' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, K2Node_CustomEvent_bWasSuccessful_2) == 0x0000E0, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::K2Node_CustomEvent_bWasSuccessful_2' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, Temp_int_Variable) == 0x0000E4, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0000E8, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, CallFunc_GetDownloadedLeaderboardEntry_LeaderboardEntry) == 0x0000F0, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::CallFunc_GetDownloadedLeaderboardEntry_LeaderboardEntry' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, CallFunc_GetDownloadedLeaderboardEntry_outDetails) == 0x000110, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::CallFunc_GetDownloadedLeaderboardEntry_outDetails' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, CallFunc_GetDownloadedLeaderboardEntry_ReturnValue) == 0x000120, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::CallFunc_GetDownloadedLeaderboardEntry_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000121, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, CallFunc_Add_IntInt_ReturnValue) == 0x000124, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, Temp_bool_IsClosed_Variable) == 0x000128, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, Temp_bool_Has_Been_Initd_Variable) == 0x000129, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, K2Node_CreateDelegate_OutputDelegate_2) == 0x00012C, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000140, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, K2Node_CustomEvent_NewScrollOffset) == 0x000148, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::K2Node_CustomEvent_NewScrollOffset' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, CallFunc_GetScrollOffsetOfEnd_ReturnValue) == 0x000150, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::CallFunc_GetScrollOffsetOfEnd_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, CallFunc_Lerp_ReturnValue) == 0x000158, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, CallFunc_Conv_IntToString_ReturnValue) == 0x000160, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, CallFunc_Concat_StrStr_ReturnValue) == 0x000170, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, CallFunc_FindLeaderboardAsync_ReturnValue) == 0x000180, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::CallFunc_FindLeaderboardAsync_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, CallFunc_IsValid_ReturnValue_2) == 0x000188, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, Temp_int_Variable_1) == 0x00018C, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, CallFunc_GetDownloadedLeaderboardEntry_LeaderboardEntry_1) == 0x000190, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::CallFunc_GetDownloadedLeaderboardEntry_LeaderboardEntry_1' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, CallFunc_GetDownloadedLeaderboardEntry_outDetails_1) == 0x0001B0, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::CallFunc_GetDownloadedLeaderboardEntry_outDetails_1' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, CallFunc_GetDownloadedLeaderboardEntry_ReturnValue_1) == 0x0001C0, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::CallFunc_GetDownloadedLeaderboardEntry_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x0001C1, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, CallFunc_Add_IntInt_ReturnValue_1) == 0x0001C4, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, CallFunc_GetSteamID_ReturnValue) == 0x0001C8, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::CallFunc_GetSteamID_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, CallFunc_Equal_ReturnValue) == 0x0001D0, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::CallFunc_Equal_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, CallFunc_Lerp_B_ImplicitCast) == 0x0001D8, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::CallFunc_Lerp_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard, CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast) == 0x0001E0, "Member 'W_Leaderboard_C_ExecuteUbergraph_W_Leaderboard::CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast' has a wrong offset!");

// Function W_Leaderboard.W_Leaderboard_C.OnCallback_3FFA3D3A4374E19ACC27F9AFE19937BE
// 0x0020 (0x0020 - 0x0000)
struct W_Leaderboard_C_OnCallback_3FFA3D3A4374E19ACC27F9AFE19937BE final
{
public:
	struct FLeaderboardScoresDownloaded           Data;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                          bWasSuccessful;                                    // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Leaderboard_C_OnCallback_3FFA3D3A4374E19ACC27F9AFE19937BE) == 0x000008, "Wrong alignment on W_Leaderboard_C_OnCallback_3FFA3D3A4374E19ACC27F9AFE19937BE");
static_assert(sizeof(W_Leaderboard_C_OnCallback_3FFA3D3A4374E19ACC27F9AFE19937BE) == 0x000020, "Wrong size on W_Leaderboard_C_OnCallback_3FFA3D3A4374E19ACC27F9AFE19937BE");
static_assert(offsetof(W_Leaderboard_C_OnCallback_3FFA3D3A4374E19ACC27F9AFE19937BE, Data) == 0x000000, "Member 'W_Leaderboard_C_OnCallback_3FFA3D3A4374E19ACC27F9AFE19937BE::Data' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_OnCallback_3FFA3D3A4374E19ACC27F9AFE19937BE, bWasSuccessful) == 0x000018, "Member 'W_Leaderboard_C_OnCallback_3FFA3D3A4374E19ACC27F9AFE19937BE::bWasSuccessful' has a wrong offset!");

// Function W_Leaderboard.W_Leaderboard_C.OnCallback_B0BEAA0349FD46D2D4257CAF0F71DB7D
// 0x0020 (0x0020 - 0x0000)
struct W_Leaderboard_C_OnCallback_B0BEAA0349FD46D2D4257CAF0F71DB7D final
{
public:
	struct FLeaderboardScoresDownloaded           Data;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                          bWasSuccessful;                                    // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Leaderboard_C_OnCallback_B0BEAA0349FD46D2D4257CAF0F71DB7D) == 0x000008, "Wrong alignment on W_Leaderboard_C_OnCallback_B0BEAA0349FD46D2D4257CAF0F71DB7D");
static_assert(sizeof(W_Leaderboard_C_OnCallback_B0BEAA0349FD46D2D4257CAF0F71DB7D) == 0x000020, "Wrong size on W_Leaderboard_C_OnCallback_B0BEAA0349FD46D2D4257CAF0F71DB7D");
static_assert(offsetof(W_Leaderboard_C_OnCallback_B0BEAA0349FD46D2D4257CAF0F71DB7D, Data) == 0x000000, "Member 'W_Leaderboard_C_OnCallback_B0BEAA0349FD46D2D4257CAF0F71DB7D::Data' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_OnCallback_B0BEAA0349FD46D2D4257CAF0F71DB7D, bWasSuccessful) == 0x000018, "Member 'W_Leaderboard_C_OnCallback_B0BEAA0349FD46D2D4257CAF0F71DB7D::bWasSuccessful' has a wrong offset!");

// Function W_Leaderboard.W_Leaderboard_C.OnCallback_E42254F44B5DFBBA02F05198DEA91F81
// 0x0018 (0x0018 - 0x0000)
struct W_Leaderboard_C_OnCallback_E42254F44B5DFBBA02F05198DEA91F81 final
{
public:
	struct FLeaderboardFindResult                 Data;                                              // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                          bWasSuccessful;                                    // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Leaderboard_C_OnCallback_E42254F44B5DFBBA02F05198DEA91F81) == 0x000008, "Wrong alignment on W_Leaderboard_C_OnCallback_E42254F44B5DFBBA02F05198DEA91F81");
static_assert(sizeof(W_Leaderboard_C_OnCallback_E42254F44B5DFBBA02F05198DEA91F81) == 0x000018, "Wrong size on W_Leaderboard_C_OnCallback_E42254F44B5DFBBA02F05198DEA91F81");
static_assert(offsetof(W_Leaderboard_C_OnCallback_E42254F44B5DFBBA02F05198DEA91F81, Data) == 0x000000, "Member 'W_Leaderboard_C_OnCallback_E42254F44B5DFBBA02F05198DEA91F81::Data' has a wrong offset!");
static_assert(offsetof(W_Leaderboard_C_OnCallback_E42254F44B5DFBBA02F05198DEA91F81, bWasSuccessful) == 0x000010, "Member 'W_Leaderboard_C_OnCallback_E42254F44B5DFBBA02F05198DEA91F81::bWasSuccessful' has a wrong offset!");

// Function W_Leaderboard.W_Leaderboard_C.SetScrollOffset
// 0x0008 (0x0008 - 0x0000)
struct W_Leaderboard_C_SetScrollOffset final
{
public:
	double                                        NewScrollOffset;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Leaderboard_C_SetScrollOffset) == 0x000008, "Wrong alignment on W_Leaderboard_C_SetScrollOffset");
static_assert(sizeof(W_Leaderboard_C_SetScrollOffset) == 0x000008, "Wrong size on W_Leaderboard_C_SetScrollOffset");
static_assert(offsetof(W_Leaderboard_C_SetScrollOffset, NewScrollOffset) == 0x000000, "Member 'W_Leaderboard_C_SetScrollOffset::NewScrollOffset' has a wrong offset!");

}

