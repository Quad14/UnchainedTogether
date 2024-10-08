#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EarlyBlendOut_NotifyState

#include "Basic.hpp"

#include "ALS_Stance_structs.hpp"
#include "Engine_structs.hpp"
#include "ALS_Gait_structs.hpp"
#include "ALS_MovementState_structs.hpp"
#include "ALS_MovementAction_structs.hpp"
#include "ALS_RotationMode_structs.hpp"
#include "ALS_ViewMode_structs.hpp"
#include "ALS_OverlayState_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function EarlyBlendOut_NotifyState.EarlyBlendOut_NotifyState_C.GetNotifyName
// 0x0010 (0x0010 - 0x0000)
struct EarlyBlendOut_NotifyState_C_GetNotifyName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(EarlyBlendOut_NotifyState_C_GetNotifyName) == 0x000008, "Wrong alignment on EarlyBlendOut_NotifyState_C_GetNotifyName");
static_assert(sizeof(EarlyBlendOut_NotifyState_C_GetNotifyName) == 0x000010, "Wrong size on EarlyBlendOut_NotifyState_C_GetNotifyName");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_GetNotifyName, ReturnValue) == 0x000000, "Member 'EarlyBlendOut_NotifyState_C_GetNotifyName::ReturnValue' has a wrong offset!");

// Function EarlyBlendOut_NotifyState.EarlyBlendOut_NotifyState_C.Received_NotifyTick
// 0x01C8 (0x01C8 - 0x0000)
struct EarlyBlendOut_NotifyState_C_Received_NotifyTick final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         FrameDeltaTime;                                    // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNotifyEventReference              EventReference;                                    // 0x0018(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0048(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 OwningActor;                                       // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          AnimInstance;                                      // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IALS_Character_BPI_C>  K2Node_DynamicCast_AsALS_Character_BPI;            // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMovementMode                                 CallFunc_BPI_Get_CurrentStates_PawnMovementMode;   // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_MovementState                            CallFunc_BPI_Get_CurrentStates_MovementState;      // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_MovementState                            CallFunc_BPI_Get_CurrentStates_PrevMovementState;  // 0x0083(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_MovementAction                           CallFunc_BPI_Get_CurrentStates_MovementAction;     // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_RotationMode                             CallFunc_BPI_Get_CurrentStates_RotationMode;       // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_Gait                                     CallFunc_BPI_Get_CurrentStates_ActualGait;         // 0x0086(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_Stance                                   CallFunc_BPI_Get_CurrentStates_ActualStance;       // 0x0087(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_ViewMode                                 CallFunc_BPI_Get_CurrentStates_ViewMode;           // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_OverlayState                             CallFunc_BPI_Get_CurrentStates_OverlayState;       // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B[0x5];                                       // 0x008B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IALS_Character_BPI_C>  K2Node_DynamicCast_AsALS_Character_BPI_1;          // 0x0090(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IALS_Character_BPI_C>  K2Node_DynamicCast_AsALS_Character_BPI_2;          // 0x00A8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMovementMode                                 CallFunc_BPI_Get_CurrentStates_PawnMovementMode_1; // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_MovementState                            CallFunc_BPI_Get_CurrentStates_MovementState_1;    // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_MovementState                            CallFunc_BPI_Get_CurrentStates_PrevMovementState_1; // 0x00BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_MovementAction                           CallFunc_BPI_Get_CurrentStates_MovementAction_1;   // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_RotationMode                             CallFunc_BPI_Get_CurrentStates_RotationMode_1;     // 0x00BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_Gait                                     CallFunc_BPI_Get_CurrentStates_ActualGait_1;       // 0x00BE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_Stance                                   CallFunc_BPI_Get_CurrentStates_ActualStance_1;     // 0x00BF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_ViewMode                                 CallFunc_BPI_Get_CurrentStates_ViewMode_1;         // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_OverlayState                             CallFunc_BPI_Get_CurrentStates_OverlayState_1;     // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C2[0x6];                                       // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BPI_Get_EssentialValues_Velocity;         // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BPI_Get_EssentialValues_Acceleration;     // 0x00E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BPI_Get_EssentialValues_MovementInput;    // 0x00F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BPI_Get_EssentialValues_IsMoving;         // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BPI_Get_EssentialValues_HasMovementInput; // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_112[0x6];                                      // 0x0112(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BPI_Get_EssentialValues_Speed;            // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BPI_Get_EssentialValues_MovementInputAmount; // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BPI_Get_EssentialValues_AimingRotation;   // 0x0128(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        CallFunc_BPI_Get_EssentialValues_AimYawRate;       // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BPI_Get_EssentialValues_PullCharacter;    // 0x0148(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BPI_Get_EssentialValues_Pull;             // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BPI_Get_EssentialValues_Climb;            // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_152[0x6];                                      // 0x0152(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_BPI_Get_EssentialValues_MoveInput;        // 0x0158(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BPI_Get_EssentialValues_SwimOnSurface;    // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_169[0x7];                                      // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BPI_Get_EssentialValues_LeftHandLocation; // 0x0170(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BPI_Get_EssentialValues_RightHandLocation; // 0x0188(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BPI_Get_EssentialValues_RadialVelocityRight; // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BPI_Get_EssentialValues_RadialVelocityUp; // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BPI_Get_EssentialValues_Swim;             // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BPI_Get_EssentialValues_Bounce;           // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BPI_Get_EssentialValues_LookAround;       // 0x01B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BPI_Get_EssentialValues_Balancier;        // 0x01B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x01B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B5[0x3];                                      // 0x01B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast; // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast_1; // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast_2; // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EarlyBlendOut_NotifyState_C_Received_NotifyTick) == 0x000008, "Wrong alignment on EarlyBlendOut_NotifyState_C_Received_NotifyTick");
static_assert(sizeof(EarlyBlendOut_NotifyState_C_Received_NotifyTick) == 0x0001C8, "Wrong size on EarlyBlendOut_NotifyState_C_Received_NotifyTick");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, MeshComp) == 0x000000, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::MeshComp' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, Animation) == 0x000008, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::Animation' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, FrameDeltaTime) == 0x000010, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::FrameDeltaTime' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, EventReference) == 0x000018, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::EventReference' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, ReturnValue) == 0x000048, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::ReturnValue' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, OwningActor) == 0x000050, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::OwningActor' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, AnimInstance) == 0x000058, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::AnimInstance' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_GetOwner_ReturnValue) == 0x000060, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_GetAnimInstance_ReturnValue) == 0x000068, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, K2Node_DynamicCast_AsALS_Character_BPI) == 0x000070, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::K2Node_DynamicCast_AsALS_Character_BPI' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_CurrentStates_PawnMovementMode) == 0x000081, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_CurrentStates_PawnMovementMode' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_CurrentStates_MovementState) == 0x000082, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_CurrentStates_MovementState' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_CurrentStates_PrevMovementState) == 0x000083, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_CurrentStates_PrevMovementState' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_CurrentStates_MovementAction) == 0x000084, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_CurrentStates_MovementAction' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_CurrentStates_RotationMode) == 0x000085, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_CurrentStates_RotationMode' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_CurrentStates_ActualGait) == 0x000086, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_CurrentStates_ActualGait' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_CurrentStates_ActualStance) == 0x000087, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_CurrentStates_ActualStance' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_CurrentStates_ViewMode) == 0x000088, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_CurrentStates_ViewMode' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_CurrentStates_OverlayState) == 0x000089, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_CurrentStates_OverlayState' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00008A, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, K2Node_DynamicCast_AsALS_Character_BPI_1) == 0x000090, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::K2Node_DynamicCast_AsALS_Character_BPI_1' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, K2Node_DynamicCast_bSuccess_1) == 0x0000A0, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, K2Node_DynamicCast_AsALS_Character_BPI_2) == 0x0000A8, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::K2Node_DynamicCast_AsALS_Character_BPI_2' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, K2Node_DynamicCast_bSuccess_2) == 0x0000B8, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_CurrentStates_PawnMovementMode_1) == 0x0000B9, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_CurrentStates_PawnMovementMode_1' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_CurrentStates_MovementState_1) == 0x0000BA, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_CurrentStates_MovementState_1' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_CurrentStates_PrevMovementState_1) == 0x0000BB, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_CurrentStates_PrevMovementState_1' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_CurrentStates_MovementAction_1) == 0x0000BC, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_CurrentStates_MovementAction_1' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_CurrentStates_RotationMode_1) == 0x0000BD, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_CurrentStates_RotationMode_1' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_CurrentStates_ActualGait_1) == 0x0000BE, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_CurrentStates_ActualGait_1' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_CurrentStates_ActualStance_1) == 0x0000BF, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_CurrentStates_ActualStance_1' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_CurrentStates_ViewMode_1) == 0x0000C0, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_CurrentStates_ViewMode_1' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_CurrentStates_OverlayState_1) == 0x0000C1, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_CurrentStates_OverlayState_1' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_EssentialValues_Velocity) == 0x0000C8, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_EssentialValues_Velocity' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_EssentialValues_Acceleration) == 0x0000E0, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_EssentialValues_Acceleration' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_EssentialValues_MovementInput) == 0x0000F8, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_EssentialValues_MovementInput' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_EssentialValues_IsMoving) == 0x000110, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_EssentialValues_IsMoving' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_EssentialValues_HasMovementInput) == 0x000111, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_EssentialValues_HasMovementInput' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_EssentialValues_Speed) == 0x000118, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_EssentialValues_Speed' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_EssentialValues_MovementInputAmount) == 0x000120, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_EssentialValues_MovementInputAmount' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_EssentialValues_AimingRotation) == 0x000128, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_EssentialValues_AimingRotation' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_EssentialValues_AimYawRate) == 0x000140, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_EssentialValues_AimYawRate' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_EssentialValues_PullCharacter) == 0x000148, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_EssentialValues_PullCharacter' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_EssentialValues_Pull) == 0x000150, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_EssentialValues_Pull' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_EssentialValues_Climb) == 0x000151, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_EssentialValues_Climb' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_EssentialValues_MoveInput) == 0x000158, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_EssentialValues_MoveInput' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_EssentialValues_SwimOnSurface) == 0x000168, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_EssentialValues_SwimOnSurface' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_EssentialValues_LeftHandLocation) == 0x000170, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_EssentialValues_LeftHandLocation' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_EssentialValues_RightHandLocation) == 0x000188, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_EssentialValues_RightHandLocation' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_EssentialValues_RadialVelocityRight) == 0x0001A0, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_EssentialValues_RadialVelocityRight' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_EssentialValues_RadialVelocityUp) == 0x0001A8, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_EssentialValues_RadialVelocityUp' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_EssentialValues_Swim) == 0x0001B0, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_EssentialValues_Swim' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_EssentialValues_Bounce) == 0x0001B1, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_EssentialValues_Bounce' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_EssentialValues_LookAround) == 0x0001B2, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_EssentialValues_LookAround' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_BPI_Get_EssentialValues_Balancier) == 0x0001B3, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_BPI_Get_EssentialValues_Balancier' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0001B4, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast) == 0x0001B8, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast_1) == 0x0001BC, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(EarlyBlendOut_NotifyState_C_Received_NotifyTick, CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast_2) == 0x0001C0, "Member 'EarlyBlendOut_NotifyState_C_Received_NotifyTick::CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast_2' has a wrong offset!");

}

