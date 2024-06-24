#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_AC_Unit

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function B_AC_Unit.B_AC_Unit_C.ExecuteUbergraph_B_AC_Unit
// 0x0128 (0x0128 - 0x0000)
struct B_AC_Unit_C_ExecuteUbergraph_B_AC_Unit final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_AddLocalRotation_SweepHitResult;       // 0x0030(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_AC_Unit_C_ExecuteUbergraph_B_AC_Unit) == 0x000008, "Wrong alignment on B_AC_Unit_C_ExecuteUbergraph_B_AC_Unit");
static_assert(sizeof(B_AC_Unit_C_ExecuteUbergraph_B_AC_Unit) == 0x000128, "Wrong size on B_AC_Unit_C_ExecuteUbergraph_B_AC_Unit");
static_assert(offsetof(B_AC_Unit_C_ExecuteUbergraph_B_AC_Unit, EntryPoint) == 0x000000, "Member 'B_AC_Unit_C_ExecuteUbergraph_B_AC_Unit::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_AC_Unit_C_ExecuteUbergraph_B_AC_Unit, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'B_AC_Unit_C_ExecuteUbergraph_B_AC_Unit::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(B_AC_Unit_C_ExecuteUbergraph_B_AC_Unit, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000008, "Member 'B_AC_Unit_C_ExecuteUbergraph_B_AC_Unit::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AC_Unit_C_ExecuteUbergraph_B_AC_Unit, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000010, "Member 'B_AC_Unit_C_ExecuteUbergraph_B_AC_Unit::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_AC_Unit_C_ExecuteUbergraph_B_AC_Unit, CallFunc_MakeRotator_ReturnValue) == 0x000018, "Member 'B_AC_Unit_C_ExecuteUbergraph_B_AC_Unit::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AC_Unit_C_ExecuteUbergraph_B_AC_Unit, CallFunc_K2_AddLocalRotation_SweepHitResult) == 0x000030, "Member 'B_AC_Unit_C_ExecuteUbergraph_B_AC_Unit::CallFunc_K2_AddLocalRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(B_AC_Unit_C_ExecuteUbergraph_B_AC_Unit, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000118, "Member 'B_AC_Unit_C_ExecuteUbergraph_B_AC_Unit::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_AC_Unit_C_ExecuteUbergraph_B_AC_Unit, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x000120, "Member 'B_AC_Unit_C_ExecuteUbergraph_B_AC_Unit::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");

// Function B_AC_Unit.B_AC_Unit_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct B_AC_Unit_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_AC_Unit_C_ReceiveTick) == 0x000004, "Wrong alignment on B_AC_Unit_C_ReceiveTick");
static_assert(sizeof(B_AC_Unit_C_ReceiveTick) == 0x000004, "Wrong size on B_AC_Unit_C_ReceiveTick");
static_assert(offsetof(B_AC_Unit_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'B_AC_Unit_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function B_AC_Unit.B_AC_Unit_C.UserConstructionScript
// 0x0220 (0x0220 - 0x0000)
struct B_AC_Unit_C_UserConstructionScript final
{
public:
	struct FTransform                             Temp_struct_Variable;                              // 0x0000(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_AddComponent_ReturnValue;                 // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39B8[0x8];                                     // 0x0068(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue;           // 0x0070(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x00D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0100(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0118(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39B9[0x3];                                     // 0x0201(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0204(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            CallFunc_Array_Get_Item;                           // 0x0208(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39BA[0x3];                                     // 0x0211(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetPitchMultiplier_NewPitchMultiplier_ImplicitCast; // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast; // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_AC_Unit_C_UserConstructionScript) == 0x000010, "Wrong alignment on B_AC_Unit_C_UserConstructionScript");
static_assert(sizeof(B_AC_Unit_C_UserConstructionScript) == 0x000220, "Wrong size on B_AC_Unit_C_UserConstructionScript");
static_assert(offsetof(B_AC_Unit_C_UserConstructionScript, Temp_struct_Variable) == 0x000000, "Member 'B_AC_Unit_C_UserConstructionScript::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(B_AC_Unit_C_UserConstructionScript, CallFunc_AddComponent_ReturnValue) == 0x000060, "Member 'B_AC_Unit_C_UserConstructionScript::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AC_Unit_C_UserConstructionScript, CallFunc_GetSocketTransform_ReturnValue) == 0x000070, "Member 'B_AC_Unit_C_UserConstructionScript::CallFunc_GetSocketTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AC_Unit_C_UserConstructionScript, CallFunc_BreakTransform_Location) == 0x0000D0, "Member 'B_AC_Unit_C_UserConstructionScript::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(B_AC_Unit_C_UserConstructionScript, CallFunc_BreakTransform_Rotation) == 0x0000E8, "Member 'B_AC_Unit_C_UserConstructionScript::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(B_AC_Unit_C_UserConstructionScript, CallFunc_BreakTransform_Scale) == 0x000100, "Member 'B_AC_Unit_C_UserConstructionScript::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(B_AC_Unit_C_UserConstructionScript, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000118, "Member 'B_AC_Unit_C_UserConstructionScript::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(B_AC_Unit_C_UserConstructionScript, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x000200, "Member 'B_AC_Unit_C_UserConstructionScript::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AC_Unit_C_UserConstructionScript, CallFunc_Subtract_IntInt_ReturnValue) == 0x000204, "Member 'B_AC_Unit_C_UserConstructionScript::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AC_Unit_C_UserConstructionScript, CallFunc_Array_Get_Item) == 0x000208, "Member 'B_AC_Unit_C_UserConstructionScript::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_AC_Unit_C_UserConstructionScript, CallFunc_SetStaticMesh_ReturnValue) == 0x000210, "Member 'B_AC_Unit_C_UserConstructionScript::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AC_Unit_C_UserConstructionScript, CallFunc_SetPitchMultiplier_NewPitchMultiplier_ImplicitCast) == 0x000214, "Member 'B_AC_Unit_C_UserConstructionScript::CallFunc_SetPitchMultiplier_NewPitchMultiplier_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_AC_Unit_C_UserConstructionScript, CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast) == 0x000218, "Member 'B_AC_Unit_C_UserConstructionScript::CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast' has a wrong offset!");

}

