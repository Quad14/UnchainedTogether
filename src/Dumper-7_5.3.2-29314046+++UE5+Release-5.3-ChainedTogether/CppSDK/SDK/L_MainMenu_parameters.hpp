#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: L_MainMenu

#include "Basic.hpp"

#include "SteamCorePro_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function L_MainMenu.L_MainMenu_C.AddDetailToArrayIfNeedDownload
// 0x0100 (0x0100 - 0x0000)
struct L_MainMenu_C_AddDetailToArrayIfNeedDownload final
{
public:
	TArray<struct FSteamUGCDetails>               UGC_Details;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FSteamUGCDetails>               All_UGC_Details_0;                                 // 0x0010(0x0010)(Parm, OutParm)
	ESteamItemState                               Temp_byte_Variable;                                // 0x0020(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSteamUGCDetails                       CallFunc_Array_Get_Item;                           // 0x0030(0x00A8)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESteamItemState>                       CallFunc_GetItemState_States;                      // 0x00E0(0x0010)(ReferenceParm)
	int32                                         CallFunc_GetItemState_ReturnValue;                 // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F5[0x3];                                       // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(L_MainMenu_C_AddDetailToArrayIfNeedDownload) == 0x000008, "Wrong alignment on L_MainMenu_C_AddDetailToArrayIfNeedDownload");
static_assert(sizeof(L_MainMenu_C_AddDetailToArrayIfNeedDownload) == 0x000100, "Wrong size on L_MainMenu_C_AddDetailToArrayIfNeedDownload");
static_assert(offsetof(L_MainMenu_C_AddDetailToArrayIfNeedDownload, UGC_Details) == 0x000000, "Member 'L_MainMenu_C_AddDetailToArrayIfNeedDownload::UGC_Details' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_AddDetailToArrayIfNeedDownload, All_UGC_Details_0) == 0x000010, "Member 'L_MainMenu_C_AddDetailToArrayIfNeedDownload::All_UGC_Details_0' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_AddDetailToArrayIfNeedDownload, Temp_byte_Variable) == 0x000020, "Member 'L_MainMenu_C_AddDetailToArrayIfNeedDownload::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_AddDetailToArrayIfNeedDownload, CallFunc_Array_Length_ReturnValue) == 0x000024, "Member 'L_MainMenu_C_AddDetailToArrayIfNeedDownload::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_AddDetailToArrayIfNeedDownload, Temp_int_Array_Index_Variable) == 0x000028, "Member 'L_MainMenu_C_AddDetailToArrayIfNeedDownload::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_AddDetailToArrayIfNeedDownload, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'L_MainMenu_C_AddDetailToArrayIfNeedDownload::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_AddDetailToArrayIfNeedDownload, CallFunc_Array_Get_Item) == 0x000030, "Member 'L_MainMenu_C_AddDetailToArrayIfNeedDownload::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_AddDetailToArrayIfNeedDownload, CallFunc_Less_IntInt_ReturnValue) == 0x0000D8, "Member 'L_MainMenu_C_AddDetailToArrayIfNeedDownload::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_AddDetailToArrayIfNeedDownload, CallFunc_GetItemState_States) == 0x0000E0, "Member 'L_MainMenu_C_AddDetailToArrayIfNeedDownload::CallFunc_GetItemState_States' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_AddDetailToArrayIfNeedDownload, CallFunc_GetItemState_ReturnValue) == 0x0000F0, "Member 'L_MainMenu_C_AddDetailToArrayIfNeedDownload::CallFunc_GetItemState_ReturnValue' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_AddDetailToArrayIfNeedDownload, CallFunc_Array_Contains_ReturnValue) == 0x0000F4, "Member 'L_MainMenu_C_AddDetailToArrayIfNeedDownload::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_AddDetailToArrayIfNeedDownload, CallFunc_Add_IntInt_ReturnValue) == 0x0000F8, "Member 'L_MainMenu_C_AddDetailToArrayIfNeedDownload::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_AddDetailToArrayIfNeedDownload, CallFunc_Array_Add_ReturnValue) == 0x0000FC, "Member 'L_MainMenu_C_AddDetailToArrayIfNeedDownload::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function L_MainMenu.L_MainMenu_C.ExecuteUbergraph_L_MainMenu
// 0x02F0 (0x02F0 - 0x0000)
struct L_MainMenu_C_ExecuteUbergraph_L_MainMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0xC];                                       // 0x0024(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0030(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransform_ReturnValue_1;               // 0x0090(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_108[0x8];                                      // 0x0108(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_TLerp_ReturnValue;                        // 0x0110(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDestroySessionCallbackProxy*           CallFunc_DestroySession_ReturnValue;               // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorTransform_SweepHitResult;      // 0x0178(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorTransform_ReturnValue;         // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0261(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_262[0x6];                                      // 0x0262(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class APlayerController*>              CallFunc_GetAllActorsOfClass_OutActors;            // 0x0268(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27C[0x4];                                      // 0x027C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_3;        // 0x0280(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0288(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_28C[0x4];                                      // 0x028C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0290(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0298(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29C[0x4];                                      // 0x029C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCustomGI_C*                            K2Node_DynamicCast_AsCustom_GI;                    // 0x02A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A9[0x7];                                      // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_4;        // 0x02B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x02BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2BD[0x3];                                      // 0x02BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x02C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x02C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x02C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C6[0x2];                                      // 0x02C6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UMainMenu_W_C*                          CallFunc_Create_ReturnValue;                       // 0x02C8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D4[0x4];                                      // 0x02D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_Array_Get_Item;                           // 0x02D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x02E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(L_MainMenu_C_ExecuteUbergraph_L_MainMenu) == 0x000010, "Wrong alignment on L_MainMenu_C_ExecuteUbergraph_L_MainMenu");
static_assert(sizeof(L_MainMenu_C_ExecuteUbergraph_L_MainMenu) == 0x0002F0, "Wrong size on L_MainMenu_C_ExecuteUbergraph_L_MainMenu");
static_assert(offsetof(L_MainMenu_C_ExecuteUbergraph_L_MainMenu, EntryPoint) == 0x000000, "Member 'L_MainMenu_C_ExecuteUbergraph_L_MainMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_ExecuteUbergraph_L_MainMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'L_MainMenu_C_ExecuteUbergraph_L_MainMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_ExecuteUbergraph_L_MainMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'L_MainMenu_C_ExecuteUbergraph_L_MainMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_ExecuteUbergraph_L_MainMenu, CallFunc_GetTransform_ReturnValue) == 0x000030, "Member 'L_MainMenu_C_ExecuteUbergraph_L_MainMenu::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_ExecuteUbergraph_L_MainMenu, CallFunc_GetTransform_ReturnValue_1) == 0x000090, "Member 'L_MainMenu_C_ExecuteUbergraph_L_MainMenu::CallFunc_GetTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_ExecuteUbergraph_L_MainMenu, CallFunc_GetPlayerController_ReturnValue) == 0x0000F0, "Member 'L_MainMenu_C_ExecuteUbergraph_L_MainMenu::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_ExecuteUbergraph_L_MainMenu, CallFunc_GetPlayerController_ReturnValue_1) == 0x0000F8, "Member 'L_MainMenu_C_ExecuteUbergraph_L_MainMenu::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_ExecuteUbergraph_L_MainMenu, CallFunc_GetPlayerController_ReturnValue_2) == 0x000100, "Member 'L_MainMenu_C_ExecuteUbergraph_L_MainMenu::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_ExecuteUbergraph_L_MainMenu, CallFunc_TLerp_ReturnValue) == 0x000110, "Member 'L_MainMenu_C_ExecuteUbergraph_L_MainMenu::CallFunc_TLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_ExecuteUbergraph_L_MainMenu, CallFunc_DestroySession_ReturnValue) == 0x000170, "Member 'L_MainMenu_C_ExecuteUbergraph_L_MainMenu::CallFunc_DestroySession_ReturnValue' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_ExecuteUbergraph_L_MainMenu, CallFunc_K2_SetActorTransform_SweepHitResult) == 0x000178, "Member 'L_MainMenu_C_ExecuteUbergraph_L_MainMenu::CallFunc_K2_SetActorTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_ExecuteUbergraph_L_MainMenu, CallFunc_K2_SetActorTransform_ReturnValue) == 0x000260, "Member 'L_MainMenu_C_ExecuteUbergraph_L_MainMenu::CallFunc_K2_SetActorTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_ExecuteUbergraph_L_MainMenu, CallFunc_IsValid_ReturnValue) == 0x000261, "Member 'L_MainMenu_C_ExecuteUbergraph_L_MainMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_ExecuteUbergraph_L_MainMenu, CallFunc_GetAllActorsOfClass_OutActors) == 0x000268, "Member 'L_MainMenu_C_ExecuteUbergraph_L_MainMenu::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_ExecuteUbergraph_L_MainMenu, CallFunc_Array_Length_ReturnValue) == 0x000278, "Member 'L_MainMenu_C_ExecuteUbergraph_L_MainMenu::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_ExecuteUbergraph_L_MainMenu, CallFunc_GetPlayerController_ReturnValue_3) == 0x000280, "Member 'L_MainMenu_C_ExecuteUbergraph_L_MainMenu::CallFunc_GetPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_ExecuteUbergraph_L_MainMenu, CallFunc_Subtract_IntInt_ReturnValue) == 0x000288, "Member 'L_MainMenu_C_ExecuteUbergraph_L_MainMenu::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_ExecuteUbergraph_L_MainMenu, CallFunc_GetGameInstance_ReturnValue) == 0x000290, "Member 'L_MainMenu_C_ExecuteUbergraph_L_MainMenu::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_ExecuteUbergraph_L_MainMenu, CallFunc_Max_ReturnValue) == 0x000298, "Member 'L_MainMenu_C_ExecuteUbergraph_L_MainMenu::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_ExecuteUbergraph_L_MainMenu, K2Node_DynamicCast_AsCustom_GI) == 0x0002A0, "Member 'L_MainMenu_C_ExecuteUbergraph_L_MainMenu::K2Node_DynamicCast_AsCustom_GI' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_ExecuteUbergraph_L_MainMenu, K2Node_DynamicCast_bSuccess) == 0x0002A8, "Member 'L_MainMenu_C_ExecuteUbergraph_L_MainMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_ExecuteUbergraph_L_MainMenu, CallFunc_GetPlayerController_ReturnValue_4) == 0x0002B0, "Member 'L_MainMenu_C_ExecuteUbergraph_L_MainMenu::CallFunc_GetPlayerController_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_ExecuteUbergraph_L_MainMenu, Temp_int_Loop_Counter_Variable) == 0x0002B8, "Member 'L_MainMenu_C_ExecuteUbergraph_L_MainMenu::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_ExecuteUbergraph_L_MainMenu, Temp_bool_Variable) == 0x0002BC, "Member 'L_MainMenu_C_ExecuteUbergraph_L_MainMenu::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_ExecuteUbergraph_L_MainMenu, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0002C0, "Member 'L_MainMenu_C_ExecuteUbergraph_L_MainMenu::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_ExecuteUbergraph_L_MainMenu, CallFunc_Not_PreBool_ReturnValue) == 0x0002C4, "Member 'L_MainMenu_C_ExecuteUbergraph_L_MainMenu::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_ExecuteUbergraph_L_MainMenu, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0002C5, "Member 'L_MainMenu_C_ExecuteUbergraph_L_MainMenu::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_ExecuteUbergraph_L_MainMenu, CallFunc_Create_ReturnValue) == 0x0002C8, "Member 'L_MainMenu_C_ExecuteUbergraph_L_MainMenu::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_ExecuteUbergraph_L_MainMenu, Temp_int_Array_Index_Variable) == 0x0002D0, "Member 'L_MainMenu_C_ExecuteUbergraph_L_MainMenu::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_ExecuteUbergraph_L_MainMenu, CallFunc_Array_Get_Item) == 0x0002D8, "Member 'L_MainMenu_C_ExecuteUbergraph_L_MainMenu::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_ExecuteUbergraph_L_MainMenu, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0002E0, "Member 'L_MainMenu_C_ExecuteUbergraph_L_MainMenu::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function L_MainMenu.L_MainMenu_C.Get_All_UGC_In_Array
// 0x00E8 (0x00E8 - 0x0000)
struct L_MainMenu_C_Get_All_UGC_In_Array final
{
public:
	struct FUGCQueryHandle                        Handle_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	TArray<struct FSteamUGCDetails>               UGC_Details_Array;                                 // 0x0008(0x0010)(Parm, OutParm)
	TArray<struct FSteamUGCDetails>               UGC_Details_Local;                                 // 0x0018(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Variable;                                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSteamUGCDetails                       CallFunc_GetQueryUGCResult_Details;                // 0x0030(0x00A8)()
	bool                                          CallFunc_GetQueryUGCResult_ReturnValue;            // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DA[0x2];                                       // 0x00DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(L_MainMenu_C_Get_All_UGC_In_Array) == 0x000008, "Wrong alignment on L_MainMenu_C_Get_All_UGC_In_Array");
static_assert(sizeof(L_MainMenu_C_Get_All_UGC_In_Array) == 0x0000E8, "Wrong size on L_MainMenu_C_Get_All_UGC_In_Array");
static_assert(offsetof(L_MainMenu_C_Get_All_UGC_In_Array, Handle_0) == 0x000000, "Member 'L_MainMenu_C_Get_All_UGC_In_Array::Handle_0' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_Get_All_UGC_In_Array, UGC_Details_Array) == 0x000008, "Member 'L_MainMenu_C_Get_All_UGC_In_Array::UGC_Details_Array' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_Get_All_UGC_In_Array, UGC_Details_Local) == 0x000018, "Member 'L_MainMenu_C_Get_All_UGC_In_Array::UGC_Details_Local' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_Get_All_UGC_In_Array, Temp_int_Variable) == 0x000028, "Member 'L_MainMenu_C_Get_All_UGC_In_Array::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_Get_All_UGC_In_Array, CallFunc_GetQueryUGCResult_Details) == 0x000030, "Member 'L_MainMenu_C_Get_All_UGC_In_Array::CallFunc_GetQueryUGCResult_Details' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_Get_All_UGC_In_Array, CallFunc_GetQueryUGCResult_ReturnValue) == 0x0000D8, "Member 'L_MainMenu_C_Get_All_UGC_In_Array::CallFunc_GetQueryUGCResult_ReturnValue' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_Get_All_UGC_In_Array, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000D9, "Member 'L_MainMenu_C_Get_All_UGC_In_Array::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_Get_All_UGC_In_Array, CallFunc_Add_IntInt_ReturnValue) == 0x0000DC, "Member 'L_MainMenu_C_Get_All_UGC_In_Array::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(L_MainMenu_C_Get_All_UGC_In_Array, CallFunc_Array_Add_ReturnValue) == 0x0000E0, "Member 'L_MainMenu_C_Get_All_UGC_In_Array::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

}

