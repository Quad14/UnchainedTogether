#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UpdateWorkshopLevelList_W

#include "Basic.hpp"

#include "SteamCorePro_structs.hpp"
#include "SlateCore_structs.hpp"
#include "IGLE_ST_GlobalSettings_structs.hpp"


namespace SDK::Params
{

// Function UpdateWorkshopLevelList_W.UpdateWorkshopLevelList_W_C.BndEvt__UpdateWorkshopLevelList_W_ChangeNote_EditableTextBox_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct UpdateWorkshopLevelList_W_C_BndEvt__UpdateWorkshopLevelList_W_ChangeNote_EditableTextBox_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UpdateWorkshopLevelList_W_C_BndEvt__UpdateWorkshopLevelList_W_ChangeNote_EditableTextBox_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on UpdateWorkshopLevelList_W_C_BndEvt__UpdateWorkshopLevelList_W_ChangeNote_EditableTextBox_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(sizeof(UpdateWorkshopLevelList_W_C_BndEvt__UpdateWorkshopLevelList_W_ChangeNote_EditableTextBox_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000020, "Wrong size on UpdateWorkshopLevelList_W_C_BndEvt__UpdateWorkshopLevelList_W_ChangeNote_EditableTextBox_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_BndEvt__UpdateWorkshopLevelList_W_ChangeNote_EditableTextBox_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'UpdateWorkshopLevelList_W_C_BndEvt__UpdateWorkshopLevelList_W_ChangeNote_EditableTextBox_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_BndEvt__UpdateWorkshopLevelList_W_ChangeNote_EditableTextBox_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature, CommitMethod) == 0x000018, "Member 'UpdateWorkshopLevelList_W_C_BndEvt__UpdateWorkshopLevelList_W_ChangeNote_EditableTextBox_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function UpdateWorkshopLevelList_W.UpdateWorkshopLevelList_W_C.ExecuteUbergraph_UpdateWorkshopLevelList_W
// 0x03B0 (0x03B0 - 0x0000)
struct UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ULocalLevelSlot_W_C*>            CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWorkshopItem_W_C*                      CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_3;                  // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_3;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULocalLevelSlot_W_C*                    CallFunc_Array_Get_Item;                           // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FSteamID                               CallFunc_GetSteamID_ReturnValue;                   // 0x0060(0x0008)(NoDestructor)
	struct FSteamUGCQueryCompleted                Temp_struct_Variable;                              // 0x0068(0x0018)(NoDestructor)
	struct FUGCQueryHandle                        CallFunc_CreateQueryUserUGCRequest_ReturnValue;    // 0x0080(0x0008)(NoDestructor)
	class USteamCoreProUGCAsyncActionSendQueryUGCRequest* CallFunc_SendQueryUGCRequestAsync_ReturnValue;     // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_93[0x5];                                       // 0x0093(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSteamUGCQueryCompleted                K2Node_CustomEvent_Data;                           // 0x0098(0x0018)(ConstParm, NoDestructor)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UWorkshopItem_W_C*>              CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;      // 0x00C0(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWorkshopItem_W_C*                      CallFunc_Array_Get_Item_1;                         // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x00E0(0x0018)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod;           // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x00FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00FB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FC[0x4];                                       // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FIGLE_ST_GlobalSettings                CallFunc_IGLE_GetGlobalSettings_Settings;          // 0x0100(0x0088)(HasGetValueTypeHash)
	struct FIGLE_ST_GlobalSettings                CallFunc_IGLE_GetGlobalSettings_Settings_1;        // 0x0188(0x0088)(HasGetValueTypeHash)
	TArray<class FString>                         CallFunc_IGLE_GetAllSubdirectories_ReturnValue;    // 0x0210(0x0010)(ReferenceParm)
	class FString                                 CallFunc_Array_Get_Item_2;                         // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_234[0x4];                                      // 0x0234(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0238(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_249[0x7];                                      // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0250(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         CallFunc_IGLE_GetFilesWithExtension_ReturnValue;   // 0x0260(0x0010)(ReferenceParm)
	class FString                                 CallFunc_Array_Get_Item_3;                         // 0x0270(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(struct FSteamUGCQueryCompleted& Data, bool bWasSuccessful)> K2Node_CreateDelegate_OutputDelegate;              // 0x0280(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCleanFilename_ReturnValue;             // 0x0290(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x02A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x02B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B5[0x3];                                      // 0x02B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetBaseFilename_ReturnValue;              // 0x02B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x02C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2CC[0x4];                                      // 0x02CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x02D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FSteamUGCDetails                       CallFunc_GetQueryUGCResult_Details;                // 0x02D8(0x00A8)()
	bool                                          CallFunc_GetQueryUGCResult_ReturnValue;            // 0x0380(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_381[0x7];                                      // 0x0381(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULocalLevelSlot_W_C*                    CallFunc_Create_ReturnValue_1;                     // 0x0388(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetQueryUGCPreviewURL_URL;                // 0x0390(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetQueryUGCPreviewURL_ReturnValue;        // 0x03A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x03A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A2[0x2];                                      // 0x03A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x03A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWrapBoxSlot*                           CallFunc_AddChildToWrapBox_ReturnValue;            // 0x03A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W) == 0x000008, "Wrong alignment on UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W");
static_assert(sizeof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W) == 0x0003B0, "Wrong size on UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, EntryPoint) == 0x000000, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::EntryPoint' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_GetAllWidgetsOfClass_FoundWidgets) == 0x000008, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_GetAllWidgetsOfClass_FoundWidgets' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, Temp_int_Array_Index_Variable) == 0x000024, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_Create_ReturnValue) == 0x000028, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, Temp_int_Array_Index_Variable_1) == 0x000030, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, Temp_int_Loop_Counter_Variable_1) == 0x000034, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_Add_IntInt_ReturnValue_1) == 0x000038, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, Temp_int_Array_Index_Variable_2) == 0x00003C, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, Temp_int_Loop_Counter_Variable_2) == 0x000040, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, Temp_int_Loop_Counter_Variable_3) == 0x000044, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::Temp_int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_Less_IntInt_ReturnValue) == 0x000048, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_Add_IntInt_ReturnValue_2) == 0x00004C, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_Add_IntInt_ReturnValue_3) == 0x000050, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, Temp_int_Array_Index_Variable_3) == 0x000054, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::Temp_int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_Array_Get_Item) == 0x000058, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_GetSteamID_ReturnValue) == 0x000060, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_GetSteamID_ReturnValue' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, Temp_struct_Variable) == 0x000068, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_CreateQueryUserUGCRequest_ReturnValue) == 0x000080, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_CreateQueryUserUGCRequest_ReturnValue' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_SendQueryUGCRequestAsync_ReturnValue) == 0x000088, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_SendQueryUGCRequestAsync_ReturnValue' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, K2Node_SwitchEnum_CmpSuccess) == 0x000090, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_IsValid_ReturnValue) == 0x000091, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, Temp_bool_Variable) == 0x000092, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, K2Node_CustomEvent_Data) == 0x000098, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::K2Node_CustomEvent_Data' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, K2Node_CustomEvent_bWasSuccessful) == 0x0000B0, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_AddChild_ReturnValue) == 0x0000B8, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_GetAllWidgetsOfClass_FoundWidgets_1) == 0x0000C0, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_GetAllWidgetsOfClass_FoundWidgets_1' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_Array_Get_Item_1) == 0x0000D0, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_Array_Length_ReturnValue_1) == 0x0000D8, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, K2Node_ComponentBoundEvent_Text) == 0x0000E0, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, K2Node_ComponentBoundEvent_CommitMethod) == 0x0000F8, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::K2Node_ComponentBoundEvent_CommitMethod' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000F9, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_TextIsEmpty_ReturnValue) == 0x0000FA, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_Not_PreBool_ReturnValue) == 0x0000FB, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_IGLE_GetGlobalSettings_Settings) == 0x000100, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_IGLE_GetGlobalSettings_Settings' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_IGLE_GetGlobalSettings_Settings_1) == 0x000188, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_IGLE_GetGlobalSettings_Settings_1' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_IGLE_GetAllSubdirectories_ReturnValue) == 0x000210, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_IGLE_GetAllSubdirectories_ReturnValue' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_Array_Get_Item_2) == 0x000220, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_Array_Length_ReturnValue_2) == 0x000230, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_Concat_StrStr_ReturnValue) == 0x000238, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_Less_IntInt_ReturnValue_2) == 0x000248, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000250, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_IGLE_GetFilesWithExtension_ReturnValue) == 0x000260, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_IGLE_GetFilesWithExtension_ReturnValue' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_Array_Get_Item_3) == 0x000270, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, K2Node_CreateDelegate_OutputDelegate) == 0x000280, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_GetCleanFilename_ReturnValue) == 0x000290, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_GetCleanFilename_ReturnValue' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0002A0, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_Array_Length_ReturnValue_3) == 0x0002B0, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_Less_IntInt_ReturnValue_3) == 0x0002B4, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_GetBaseFilename_ReturnValue) == 0x0002B8, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_GetBaseFilename_ReturnValue' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, Temp_int_Variable) == 0x0002C8, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_GetOwningPlayer_ReturnValue) == 0x0002D0, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_GetQueryUGCResult_Details) == 0x0002D8, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_GetQueryUGCResult_Details' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_GetQueryUGCResult_ReturnValue) == 0x000380, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_GetQueryUGCResult_ReturnValue' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_Create_ReturnValue_1) == 0x000388, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_GetQueryUGCPreviewURL_URL) == 0x000390, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_GetQueryUGCPreviewURL_URL' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_GetQueryUGCPreviewURL_ReturnValue) == 0x0003A0, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_GetQueryUGCPreviewURL_ReturnValue' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0003A1, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_Add_IntInt_ReturnValue_4) == 0x0003A4, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W, CallFunc_AddChildToWrapBox_ReturnValue) == 0x0003A8, "Member 'UpdateWorkshopLevelList_W_C_ExecuteUbergraph_UpdateWorkshopLevelList_W::CallFunc_AddChildToWrapBox_ReturnValue' has a wrong offset!");

// Function UpdateWorkshopLevelList_W.UpdateWorkshopLevelList_W_C.OnCallback_B686B5274619AFBCAFCB319607BC5D95
// 0x0020 (0x0020 - 0x0000)
struct UpdateWorkshopLevelList_W_C_OnCallback_B686B5274619AFBCAFCB319607BC5D95 final
{
public:
	struct FSteamUGCQueryCompleted                Data;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                          bWasSuccessful;                                    // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UpdateWorkshopLevelList_W_C_OnCallback_B686B5274619AFBCAFCB319607BC5D95) == 0x000008, "Wrong alignment on UpdateWorkshopLevelList_W_C_OnCallback_B686B5274619AFBCAFCB319607BC5D95");
static_assert(sizeof(UpdateWorkshopLevelList_W_C_OnCallback_B686B5274619AFBCAFCB319607BC5D95) == 0x000020, "Wrong size on UpdateWorkshopLevelList_W_C_OnCallback_B686B5274619AFBCAFCB319607BC5D95");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_OnCallback_B686B5274619AFBCAFCB319607BC5D95, Data) == 0x000000, "Member 'UpdateWorkshopLevelList_W_C_OnCallback_B686B5274619AFBCAFCB319607BC5D95::Data' has a wrong offset!");
static_assert(offsetof(UpdateWorkshopLevelList_W_C_OnCallback_B686B5274619AFBCAFCB319607BC5D95, bWasSuccessful) == 0x000018, "Member 'UpdateWorkshopLevelList_W_C_OnCallback_B686B5274619AFBCAFCB319607BC5D95::bWasSuccessful' has a wrong offset!");

}

