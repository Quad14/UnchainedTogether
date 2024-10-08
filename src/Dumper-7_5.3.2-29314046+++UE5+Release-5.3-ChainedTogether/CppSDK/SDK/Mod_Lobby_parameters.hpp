#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Mod_Lobby

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Mod_Lobby.Mod_Lobby_C.ExecuteUbergraph_Mod_Lobby
// 0x0058 (0x0058 - 0x0000)
struct Mod_Lobby_C_ExecuteUbergraph_Mod_Lobby final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGM_Game_C*                             K2Node_DynamicCast_AsGM_Game;                      // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_ReturnValue;                         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_Alpha_ImplicitCast;                  // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_A_ImplicitCast;                      // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_TargetArmLength_ImplicitCast;   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Mod_Lobby_C_ExecuteUbergraph_Mod_Lobby) == 0x000008, "Wrong alignment on Mod_Lobby_C_ExecuteUbergraph_Mod_Lobby");
static_assert(sizeof(Mod_Lobby_C_ExecuteUbergraph_Mod_Lobby) == 0x000058, "Wrong size on Mod_Lobby_C_ExecuteUbergraph_Mod_Lobby");
static_assert(offsetof(Mod_Lobby_C_ExecuteUbergraph_Mod_Lobby, EntryPoint) == 0x000000, "Member 'Mod_Lobby_C_ExecuteUbergraph_Mod_Lobby::EntryPoint' has a wrong offset!");
static_assert(offsetof(Mod_Lobby_C_ExecuteUbergraph_Mod_Lobby, CallFunc_GetGameMode_ReturnValue) == 0x000008, "Member 'Mod_Lobby_C_ExecuteUbergraph_Mod_Lobby::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mod_Lobby_C_ExecuteUbergraph_Mod_Lobby, CallFunc_IsServer_ReturnValue) == 0x000010, "Member 'Mod_Lobby_C_ExecuteUbergraph_Mod_Lobby::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mod_Lobby_C_ExecuteUbergraph_Mod_Lobby, K2Node_DynamicCast_AsGM_Game) == 0x000018, "Member 'Mod_Lobby_C_ExecuteUbergraph_Mod_Lobby::K2Node_DynamicCast_AsGM_Game' has a wrong offset!");
static_assert(offsetof(Mod_Lobby_C_ExecuteUbergraph_Mod_Lobby, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'Mod_Lobby_C_ExecuteUbergraph_Mod_Lobby::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Mod_Lobby_C_ExecuteUbergraph_Mod_Lobby, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000028, "Member 'Mod_Lobby_C_ExecuteUbergraph_Mod_Lobby::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mod_Lobby_C_ExecuteUbergraph_Mod_Lobby, CallFunc_Lerp_ReturnValue) == 0x000030, "Member 'Mod_Lobby_C_ExecuteUbergraph_Mod_Lobby::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mod_Lobby_C_ExecuteUbergraph_Mod_Lobby, CallFunc_Lerp_Alpha_ImplicitCast) == 0x000038, "Member 'Mod_Lobby_C_ExecuteUbergraph_Mod_Lobby::CallFunc_Lerp_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Mod_Lobby_C_ExecuteUbergraph_Mod_Lobby, CallFunc_Lerp_A_ImplicitCast) == 0x000040, "Member 'Mod_Lobby_C_ExecuteUbergraph_Mod_Lobby::CallFunc_Lerp_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Mod_Lobby_C_ExecuteUbergraph_Mod_Lobby, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x000048, "Member 'Mod_Lobby_C_ExecuteUbergraph_Mod_Lobby::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Mod_Lobby_C_ExecuteUbergraph_Mod_Lobby, K2Node_VariableSet_TargetArmLength_ImplicitCast) == 0x000050, "Member 'Mod_Lobby_C_ExecuteUbergraph_Mod_Lobby::K2Node_VariableSet_TargetArmLength_ImplicitCast' has a wrong offset!");

// Function Mod_Lobby.Mod_Lobby_C.SpawnLobbyCharacters
// 0x01D0 (0x01D0 - 0x0000)
struct Mod_Lobby_C_SpawnLobbyCharacters final
{
public:
	TArray<class AActor*>                         LobbyChars;                                        // 0x0000(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_LbManager_C*>                CallFunc_GetAllActorsOfClass_OutActors;            // 0x0030(0x0010)(ReferenceParm)
	class ABP_LbManager_C*                        CallFunc_Array_Get_Item_1;                         // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMeshComponent*>           K2Node_MakeArray_Array;                            // 0x0048(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   CallFunc_Array_Get_Item_2;                         // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0070(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetActorTransform_SweepHitResult;      // 0x00D8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorTransform_ReturnValue;         // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Mod_Lobby_C_SpawnLobbyCharacters) == 0x000010, "Wrong alignment on Mod_Lobby_C_SpawnLobbyCharacters");
static_assert(sizeof(Mod_Lobby_C_SpawnLobbyCharacters) == 0x0001D0, "Wrong size on Mod_Lobby_C_SpawnLobbyCharacters");
static_assert(offsetof(Mod_Lobby_C_SpawnLobbyCharacters, LobbyChars) == 0x000000, "Member 'Mod_Lobby_C_SpawnLobbyCharacters::LobbyChars' has a wrong offset!");
static_assert(offsetof(Mod_Lobby_C_SpawnLobbyCharacters, Temp_int_Array_Index_Variable) == 0x000010, "Member 'Mod_Lobby_C_SpawnLobbyCharacters::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Mod_Lobby_C_SpawnLobbyCharacters, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'Mod_Lobby_C_SpawnLobbyCharacters::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Mod_Lobby_C_SpawnLobbyCharacters, CallFunc_Subtract_IntInt_ReturnValue) == 0x000018, "Member 'Mod_Lobby_C_SpawnLobbyCharacters::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mod_Lobby_C_SpawnLobbyCharacters, CallFunc_Array_Get_Item) == 0x000020, "Member 'Mod_Lobby_C_SpawnLobbyCharacters::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Mod_Lobby_C_SpawnLobbyCharacters, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000028, "Member 'Mod_Lobby_C_SpawnLobbyCharacters::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mod_Lobby_C_SpawnLobbyCharacters, CallFunc_GetAllActorsOfClass_OutActors) == 0x000030, "Member 'Mod_Lobby_C_SpawnLobbyCharacters::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(Mod_Lobby_C_SpawnLobbyCharacters, CallFunc_Array_Get_Item_1) == 0x000040, "Member 'Mod_Lobby_C_SpawnLobbyCharacters::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Mod_Lobby_C_SpawnLobbyCharacters, K2Node_MakeArray_Array) == 0x000048, "Member 'Mod_Lobby_C_SpawnLobbyCharacters::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Mod_Lobby_C_SpawnLobbyCharacters, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'Mod_Lobby_C_SpawnLobbyCharacters::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mod_Lobby_C_SpawnLobbyCharacters, CallFunc_Array_Get_Item_2) == 0x000060, "Member 'Mod_Lobby_C_SpawnLobbyCharacters::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(Mod_Lobby_C_SpawnLobbyCharacters, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000068, "Member 'Mod_Lobby_C_SpawnLobbyCharacters::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Mod_Lobby_C_SpawnLobbyCharacters, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000070, "Member 'Mod_Lobby_C_SpawnLobbyCharacters::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mod_Lobby_C_SpawnLobbyCharacters, CallFunc_Max_ReturnValue) == 0x0000D0, "Member 'Mod_Lobby_C_SpawnLobbyCharacters::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mod_Lobby_C_SpawnLobbyCharacters, CallFunc_K2_SetActorTransform_SweepHitResult) == 0x0000D8, "Member 'Mod_Lobby_C_SpawnLobbyCharacters::CallFunc_K2_SetActorTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(Mod_Lobby_C_SpawnLobbyCharacters, CallFunc_K2_SetActorTransform_ReturnValue) == 0x0001C0, "Member 'Mod_Lobby_C_SpawnLobbyCharacters::CallFunc_K2_SetActorTransform_ReturnValue' has a wrong offset!");

}

