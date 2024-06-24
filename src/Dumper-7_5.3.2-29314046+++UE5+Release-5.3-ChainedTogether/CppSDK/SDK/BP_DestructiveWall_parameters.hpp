#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DestructiveWall

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_DestructiveWall.BP_DestructiveWall_C.ExecuteUbergraph_BP_DestructiveWall
// 0x0020 (0x0020 - 0x0000)
struct BP_DestructiveWall_C_ExecuteUbergraph_BP_DestructiveWall final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B04[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B05[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DestructiveWall_C_ExecuteUbergraph_BP_DestructiveWall) == 0x000008, "Wrong alignment on BP_DestructiveWall_C_ExecuteUbergraph_BP_DestructiveWall");
static_assert(sizeof(BP_DestructiveWall_C_ExecuteUbergraph_BP_DestructiveWall) == 0x000020, "Wrong size on BP_DestructiveWall_C_ExecuteUbergraph_BP_DestructiveWall");
static_assert(offsetof(BP_DestructiveWall_C_ExecuteUbergraph_BP_DestructiveWall, EntryPoint) == 0x000000, "Member 'BP_DestructiveWall_C_ExecuteUbergraph_BP_DestructiveWall::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_DestructiveWall_C_ExecuteUbergraph_BP_DestructiveWall, CallFunc_SpawnSound2D_ReturnValue) == 0x000008, "Member 'BP_DestructiveWall_C_ExecuteUbergraph_BP_DestructiveWall::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DestructiveWall_C_ExecuteUbergraph_BP_DestructiveWall, Temp_bool_Has_Been_Initd_Variable) == 0x000010, "Member 'BP_DestructiveWall_C_ExecuteUbergraph_BP_DestructiveWall::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_DestructiveWall_C_ExecuteUbergraph_BP_DestructiveWall, Temp_bool_IsClosed_Variable) == 0x000011, "Member 'BP_DestructiveWall_C_ExecuteUbergraph_BP_DestructiveWall::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_DestructiveWall_C_ExecuteUbergraph_BP_DestructiveWall, CallFunc_GetPlayerController_ReturnValue) == 0x000018, "Member 'BP_DestructiveWall_C_ExecuteUbergraph_BP_DestructiveWall::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");

// Function BP_DestructiveWall.BP_DestructiveWall_C.UserConstructionScript
// 0x0028 (0x0028 - 0x0000)
struct BP_DestructiveWall_C_UserConstructionScript final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B06[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInterface*>             CallFunc_GetMaterials_ReturnValue;                 // 0x0010(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DestructiveWall_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_DestructiveWall_C_UserConstructionScript");
static_assert(sizeof(BP_DestructiveWall_C_UserConstructionScript) == 0x000028, "Wrong size on BP_DestructiveWall_C_UserConstructionScript");
static_assert(offsetof(BP_DestructiveWall_C_UserConstructionScript, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_DestructiveWall_C_UserConstructionScript::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_DestructiveWall_C_UserConstructionScript, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_DestructiveWall_C_UserConstructionScript::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_DestructiveWall_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_DestructiveWall_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DestructiveWall_C_UserConstructionScript, CallFunc_GetMaterials_ReturnValue) == 0x000010, "Member 'BP_DestructiveWall_C_UserConstructionScript::CallFunc_GetMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DestructiveWall_C_UserConstructionScript, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'BP_DestructiveWall_C_UserConstructionScript::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DestructiveWall_C_UserConstructionScript, CallFunc_Less_IntInt_ReturnValue) == 0x000024, "Member 'BP_DestructiveWall_C_UserConstructionScript::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

