#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MovingRock

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_MovingRock.BP_MovingRock_C.ExecuteUbergraph_BP_MovingRock
// 0x0108 (0x0108 - 0x0000)
struct BP_MovingRock_C_ExecuteUbergraph_BP_MovingRock final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x0020(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_MovingRock_C_ExecuteUbergraph_BP_MovingRock) == 0x000008, "Wrong alignment on BP_MovingRock_C_ExecuteUbergraph_BP_MovingRock");
static_assert(sizeof(BP_MovingRock_C_ExecuteUbergraph_BP_MovingRock) == 0x000108, "Wrong size on BP_MovingRock_C_ExecuteUbergraph_BP_MovingRock");
static_assert(offsetof(BP_MovingRock_C_ExecuteUbergraph_BP_MovingRock, EntryPoint) == 0x000000, "Member 'BP_MovingRock_C_ExecuteUbergraph_BP_MovingRock::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MovingRock_C_ExecuteUbergraph_BP_MovingRock, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BP_MovingRock_C_ExecuteUbergraph_BP_MovingRock::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_MovingRock_C_ExecuteUbergraph_BP_MovingRock, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'BP_MovingRock_C_ExecuteUbergraph_BP_MovingRock::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovingRock_C_ExecuteUbergraph_BP_MovingRock, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000020, "Member 'BP_MovingRock_C_ExecuteUbergraph_BP_MovingRock::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");

// Function BP_MovingRock.BP_MovingRock_C.PlatformMovement
// 0x00F8 (0x00F8 - 0x0000)
struct BP_MovingRock_C_PlatformMovement final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AF7[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetPhysicsLinearVelocity_ReturnValue;     // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_ClampVectorSize_ReturnValue;              // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors;   // 0x0058(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AF8[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AF9[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetDirectionUnitVector_ReturnValue;       // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MovingRock_C_PlatformMovement) == 0x000008, "Wrong alignment on BP_MovingRock_C_PlatformMovement");
static_assert(sizeof(BP_MovingRock_C_PlatformMovement) == 0x0000F8, "Wrong size on BP_MovingRock_C_PlatformMovement");
static_assert(offsetof(BP_MovingRock_C_PlatformMovement, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_MovingRock_C_PlatformMovement::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_MovingRock_C_PlatformMovement, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_MovingRock_C_PlatformMovement::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_MovingRock_C_PlatformMovement, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_MovingRock_C_PlatformMovement::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovingRock_C_PlatformMovement, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000010, "Member 'BP_MovingRock_C_PlatformMovement::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovingRock_C_PlatformMovement, CallFunc_GetPhysicsLinearVelocity_ReturnValue) == 0x000028, "Member 'BP_MovingRock_C_PlatformMovement::CallFunc_GetPhysicsLinearVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovingRock_C_PlatformMovement, CallFunc_ClampVectorSize_ReturnValue) == 0x000040, "Member 'BP_MovingRock_C_PlatformMovement::CallFunc_ClampVectorSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovingRock_C_PlatformMovement, CallFunc_GetOverlappingActors_OverlappingActors) == 0x000058, "Member 'BP_MovingRock_C_PlatformMovement::CallFunc_GetOverlappingActors_OverlappingActors' has a wrong offset!");
static_assert(offsetof(BP_MovingRock_C_PlatformMovement, CallFunc_Array_Get_Item) == 0x000068, "Member 'BP_MovingRock_C_PlatformMovement::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_MovingRock_C_PlatformMovement, CallFunc_Array_Length_ReturnValue) == 0x000070, "Member 'BP_MovingRock_C_PlatformMovement::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovingRock_C_PlatformMovement, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000078, "Member 'BP_MovingRock_C_PlatformMovement::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovingRock_C_PlatformMovement, CallFunc_Less_IntInt_ReturnValue) == 0x000090, "Member 'BP_MovingRock_C_PlatformMovement::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovingRock_C_PlatformMovement, CallFunc_GetDirectionUnitVector_ReturnValue) == 0x000098, "Member 'BP_MovingRock_C_PlatformMovement::CallFunc_GetDirectionUnitVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovingRock_C_PlatformMovement, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0000B0, "Member 'BP_MovingRock_C_PlatformMovement::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovingRock_C_PlatformMovement, CallFunc_BreakVector_X) == 0x0000C8, "Member 'BP_MovingRock_C_PlatformMovement::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_MovingRock_C_PlatformMovement, CallFunc_BreakVector_Y) == 0x0000D0, "Member 'BP_MovingRock_C_PlatformMovement::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_MovingRock_C_PlatformMovement, CallFunc_BreakVector_Z) == 0x0000D8, "Member 'BP_MovingRock_C_PlatformMovement::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_MovingRock_C_PlatformMovement, CallFunc_MakeVector_ReturnValue) == 0x0000E0, "Member 'BP_MovingRock_C_PlatformMovement::CallFunc_MakeVector_ReturnValue' has a wrong offset!");

// Function BP_MovingRock.BP_MovingRock_C.PlatformReplication
// 0x0148 (0x0148 - 0x0000)
struct BP_MovingRock_C_PlatformReplication final
{
public:
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_VectorVector_ReturnValue;      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AFA[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VInterpTo_ReturnValue;                    // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x0058(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_VInterpTo_DeltaTime_ImplicitCast;         // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MovingRock_C_PlatformReplication) == 0x000008, "Wrong alignment on BP_MovingRock_C_PlatformReplication");
static_assert(sizeof(BP_MovingRock_C_PlatformReplication) == 0x000148, "Wrong size on BP_MovingRock_C_PlatformReplication");
static_assert(offsetof(BP_MovingRock_C_PlatformReplication, CallFunc_HasAuthority_ReturnValue) == 0x000000, "Member 'BP_MovingRock_C_PlatformReplication::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovingRock_C_PlatformReplication, CallFunc_EqualEqual_VectorVector_ReturnValue) == 0x000001, "Member 'BP_MovingRock_C_PlatformReplication::CallFunc_EqualEqual_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovingRock_C_PlatformReplication, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000008, "Member 'BP_MovingRock_C_PlatformReplication::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovingRock_C_PlatformReplication, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x000020, "Member 'BP_MovingRock_C_PlatformReplication::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MovingRock_C_PlatformReplication, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000038, "Member 'BP_MovingRock_C_PlatformReplication::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovingRock_C_PlatformReplication, CallFunc_VInterpTo_ReturnValue) == 0x000040, "Member 'BP_MovingRock_C_PlatformReplication::CallFunc_VInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovingRock_C_PlatformReplication, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000058, "Member 'BP_MovingRock_C_PlatformReplication::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_MovingRock_C_PlatformReplication, CallFunc_VInterpTo_DeltaTime_ImplicitCast) == 0x000140, "Member 'BP_MovingRock_C_PlatformReplication::CallFunc_VInterpTo_DeltaTime_ImplicitCast' has a wrong offset!");

// Function BP_MovingRock.BP_MovingRock_C.PlatformReset
// 0x0068 (0x0068 - 0x0000)
struct BP_MovingRock_C_PlatformReset final
{
public:
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_1;               // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AFB[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_1;                     // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AFC[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerState*                           CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AFD[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Vector_Distance_ReturnValue;              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MovingRock_C_PlatformReset) == 0x000008, "Wrong alignment on BP_MovingRock_C_PlatformReset");
static_assert(sizeof(BP_MovingRock_C_PlatformReset) == 0x000068, "Wrong size on BP_MovingRock_C_PlatformReset");
static_assert(offsetof(BP_MovingRock_C_PlatformReset, Temp_bool_IsClosed_Variable) == 0x000000, "Member 'BP_MovingRock_C_PlatformReset::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_MovingRock_C_PlatformReset, Temp_bool_Has_Been_Initd_Variable) == 0x000001, "Member 'BP_MovingRock_C_PlatformReset::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_MovingRock_C_PlatformReset, Temp_bool_Has_Been_Initd_Variable_1) == 0x000002, "Member 'BP_MovingRock_C_PlatformReset::Temp_bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_MovingRock_C_PlatformReset, CallFunc_GetGameState_ReturnValue) == 0x000008, "Member 'BP_MovingRock_C_PlatformReset::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovingRock_C_PlatformReset, Temp_bool_IsClosed_Variable_1) == 0x000010, "Member 'BP_MovingRock_C_PlatformReset::Temp_bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_MovingRock_C_PlatformReset, CallFunc_Array_Get_Item) == 0x000018, "Member 'BP_MovingRock_C_PlatformReset::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_MovingRock_C_PlatformReset, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_MovingRock_C_PlatformReset::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovingRock_C_PlatformReset, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'BP_MovingRock_C_PlatformReset::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovingRock_C_PlatformReset, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000040, "Member 'BP_MovingRock_C_PlatformReset::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovingRock_C_PlatformReset, CallFunc_Vector_Distance_ReturnValue) == 0x000058, "Member 'BP_MovingRock_C_PlatformReset::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovingRock_C_PlatformReset, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000060, "Member 'BP_MovingRock_C_PlatformReset::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");

// Function BP_MovingRock.BP_MovingRock_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_MovingRock_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MovingRock_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_MovingRock_C_ReceiveTick");
static_assert(sizeof(BP_MovingRock_C_ReceiveTick) == 0x000004, "Wrong size on BP_MovingRock_C_ReceiveTick");
static_assert(offsetof(BP_MovingRock_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_MovingRock_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

