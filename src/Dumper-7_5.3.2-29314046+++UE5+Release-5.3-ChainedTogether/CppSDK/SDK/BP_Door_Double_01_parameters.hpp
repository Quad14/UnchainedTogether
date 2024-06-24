#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Door_Double_01

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_Door_Double_01.BP_Door_Double_01_C.BndEvt__BP_Door_Double_01_Trigger_Volume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct BP_Door_Double_01_C_BndEvt__BP_Door_Double_01_Trigger_Volume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37DE[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_Door_Double_01_C_BndEvt__BP_Door_Double_01_Trigger_Volume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_Door_Double_01_C_BndEvt__BP_Door_Double_01_Trigger_Volume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_Door_Double_01_C_BndEvt__BP_Door_Double_01_Trigger_Volume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on BP_Door_Double_01_C_BndEvt__BP_Door_Double_01_Trigger_Volume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_Door_Double_01_C_BndEvt__BP_Door_Double_01_Trigger_Volume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_Door_Double_01_C_BndEvt__BP_Door_Double_01_Trigger_Volume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_Door_Double_01_C_BndEvt__BP_Door_Double_01_Trigger_Volume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_Door_Double_01_C_BndEvt__BP_Door_Double_01_Trigger_Volume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_Door_Double_01_C_BndEvt__BP_Door_Double_01_Trigger_Volume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_Door_Double_01_C_BndEvt__BP_Door_Double_01_Trigger_Volume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_Door_Double_01_C_BndEvt__BP_Door_Double_01_Trigger_Volume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_Door_Double_01_C_BndEvt__BP_Door_Double_01_Trigger_Volume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_Door_Double_01_C_BndEvt__BP_Door_Double_01_Trigger_Volume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_Door_Double_01_C_BndEvt__BP_Door_Double_01_Trigger_Volume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_Door_Double_01_C_BndEvt__BP_Door_Double_01_Trigger_Volume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_Door_Double_01_C_BndEvt__BP_Door_Double_01_Trigger_Volume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_Door_Double_01.BP_Door_Double_01_C.BndEvt__BP_Door_Double_01_Trigger_Volume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct BP_Door_Double_01_C_BndEvt__BP_Door_Double_01_Trigger_Volume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Door_Double_01_C_BndEvt__BP_Door_Double_01_Trigger_Volume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_Door_Double_01_C_BndEvt__BP_Door_Double_01_Trigger_Volume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_Door_Double_01_C_BndEvt__BP_Door_Double_01_Trigger_Volume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on BP_Door_Double_01_C_BndEvt__BP_Door_Double_01_Trigger_Volume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_Door_Double_01_C_BndEvt__BP_Door_Double_01_Trigger_Volume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_Door_Double_01_C_BndEvt__BP_Door_Double_01_Trigger_Volume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_Door_Double_01_C_BndEvt__BP_Door_Double_01_Trigger_Volume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_Door_Double_01_C_BndEvt__BP_Door_Double_01_Trigger_Volume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_Door_Double_01_C_BndEvt__BP_Door_Double_01_Trigger_Volume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_Door_Double_01_C_BndEvt__BP_Door_Double_01_Trigger_Volume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_Door_Double_01_C_BndEvt__BP_Door_Double_01_Trigger_Volume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_Door_Double_01_C_BndEvt__BP_Door_Double_01_Trigger_Volume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function BP_Door_Double_01.BP_Door_Double_01_C.ExecuteUbergraph_BP_Door_Double_01
// 0x03A8 (0x03A8 - 0x0000)
struct BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37DF[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAtLocation_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_ReturnValue;                         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_ReturnValue_1;                       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;                // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37E0[0x3];                                     // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0088(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0170(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0180(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37E1[0x4];                                     // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_DynamicCast_AsPawn;                         // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37E2[0x7];                                     // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_DynamicCast_AsPawn_1;                       // 0x01A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37E3[0x7];                                     // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x01B0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult_1;  // 0x0298(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0380(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0388(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_Alpha_ImplicitCast;                  // 0x0390(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_Alpha_ImplicitCast_1;                // 0x0398(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x03A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast_1;           // 0x03A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01) == 0x000008, "Wrong alignment on BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01");
static_assert(sizeof(BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01) == 0x0003A8, "Wrong size on BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01");
static_assert(offsetof(BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01, EntryPoint) == 0x000000, "Member 'BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01, CallFunc_SpawnSoundAtLocation_ReturnValue) == 0x000020, "Member 'BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01::CallFunc_SpawnSoundAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01, CallFunc_Lerp_ReturnValue) == 0x000028, "Member 'BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01, CallFunc_Lerp_ReturnValue_1) == 0x000030, "Member 'BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01, CallFunc_MakeRotator_ReturnValue) == 0x000038, "Member 'BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01, CallFunc_MakeRotator_ReturnValue_1) == 0x000050, "Member 'BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01::CallFunc_MakeRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x000068, "Member 'BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000070, "Member 'BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000078, "Member 'BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x000080, "Member 'BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01, K2Node_ComponentBoundEvent_bFromSweep) == 0x000084, "Member 'BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01, K2Node_ComponentBoundEvent_SweepResult) == 0x000088, "Member 'BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000170, "Member 'BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01, K2Node_ComponentBoundEvent_OtherActor) == 0x000178, "Member 'BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01, K2Node_ComponentBoundEvent_OtherComp) == 0x000180, "Member 'BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000188, "Member 'BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01, K2Node_DynamicCast_AsPawn) == 0x000190, "Member 'BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01::K2Node_DynamicCast_AsPawn' has a wrong offset!");
static_assert(offsetof(BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01, K2Node_DynamicCast_bSuccess) == 0x000198, "Member 'BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01, K2Node_DynamicCast_AsPawn_1) == 0x0001A0, "Member 'BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01::K2Node_DynamicCast_AsPawn_1' has a wrong offset!");
static_assert(offsetof(BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01, K2Node_DynamicCast_bSuccess_1) == 0x0001A8, "Member 'BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x0001B0, "Member 'BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01, CallFunc_K2_SetRelativeRotation_SweepHitResult_1) == 0x000298, "Member 'BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01::CallFunc_K2_SetRelativeRotation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01, CallFunc_GetPlayerController_ReturnValue) == 0x000380, "Member 'BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01, CallFunc_GetPlayerController_ReturnValue_1) == 0x000388, "Member 'BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01, CallFunc_Lerp_Alpha_ImplicitCast) == 0x000390, "Member 'BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01::CallFunc_Lerp_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01, CallFunc_Lerp_Alpha_ImplicitCast_1) == 0x000398, "Member 'BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01::CallFunc_Lerp_Alpha_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x0003A0, "Member 'BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01, CallFunc_MakeRotator_Yaw_ImplicitCast_1) == 0x0003A4, "Member 'BP_Door_Double_01_C_ExecuteUbergraph_BP_Door_Double_01::CallFunc_MakeRotator_Yaw_ImplicitCast_1' has a wrong offset!");

}

