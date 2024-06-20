#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Use

#include "Basic.hpp"

#include "InputCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function W_Use.W_Use_C.ExecuteUbergraph_W_Use
// 0x0078 (0x0078 - 0x0000)
struct W_Use_C_ExecuteUbergraph_W_Use final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetInputKeyByName_ReturnValue;            // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C13[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_GetInputKeyByName_Current_Key;            // 0x0010(0x0018)(HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Key_GetDisplayName_ReturnValue;           // 0x0038(0x0018)()
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0050(0x0008)(NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_ControllerWithSettings_C> K2Node_DynamicCast_AsBPI_Controller_with_Settings; // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerOnGamepad_Gamepad;                // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Use_C_ExecuteUbergraph_W_Use) == 0x000008, "Wrong alignment on W_Use_C_ExecuteUbergraph_W_Use");
static_assert(sizeof(W_Use_C_ExecuteUbergraph_W_Use) == 0x000078, "Wrong size on W_Use_C_ExecuteUbergraph_W_Use");
static_assert(offsetof(W_Use_C_ExecuteUbergraph_W_Use, EntryPoint) == 0x000000, "Member 'W_Use_C_ExecuteUbergraph_W_Use::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_Use_C_ExecuteUbergraph_W_Use, CallFunc_MakeLiteralName_ReturnValue) == 0x000004, "Member 'W_Use_C_ExecuteUbergraph_W_Use::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Use_C_ExecuteUbergraph_W_Use, CallFunc_GetInputKeyByName_ReturnValue) == 0x00000C, "Member 'W_Use_C_ExecuteUbergraph_W_Use::CallFunc_GetInputKeyByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Use_C_ExecuteUbergraph_W_Use, CallFunc_GetInputKeyByName_Current_Key) == 0x000010, "Member 'W_Use_C_ExecuteUbergraph_W_Use::CallFunc_GetInputKeyByName_Current_Key' has a wrong offset!");
static_assert(offsetof(W_Use_C_ExecuteUbergraph_W_Use, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'W_Use_C_ExecuteUbergraph_W_Use::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(W_Use_C_ExecuteUbergraph_W_Use, CallFunc_Key_GetDisplayName_ReturnValue) == 0x000038, "Member 'W_Use_C_ExecuteUbergraph_W_Use::CallFunc_Key_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Use_C_ExecuteUbergraph_W_Use, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000050, "Member 'W_Use_C_ExecuteUbergraph_W_Use::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Use_C_ExecuteUbergraph_W_Use, CallFunc_GetOwningPlayer_ReturnValue) == 0x000058, "Member 'W_Use_C_ExecuteUbergraph_W_Use::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Use_C_ExecuteUbergraph_W_Use, K2Node_DynamicCast_AsBPI_Controller_with_Settings) == 0x000060, "Member 'W_Use_C_ExecuteUbergraph_W_Use::K2Node_DynamicCast_AsBPI_Controller_with_Settings' has a wrong offset!");
static_assert(offsetof(W_Use_C_ExecuteUbergraph_W_Use, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'W_Use_C_ExecuteUbergraph_W_Use::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_Use_C_ExecuteUbergraph_W_Use, CallFunc_IsPlayerOnGamepad_Gamepad) == 0x000071, "Member 'W_Use_C_ExecuteUbergraph_W_Use::CallFunc_IsPlayerOnGamepad_Gamepad' has a wrong offset!");

}

