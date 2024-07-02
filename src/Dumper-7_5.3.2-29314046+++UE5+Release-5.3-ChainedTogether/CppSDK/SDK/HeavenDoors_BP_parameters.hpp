#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HeavenDoors_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function HeavenDoors_BP.HeavenDoors_BP_C.BndEvt__HeavenDoors_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct HeavenDoors_BP_C_BndEvt__HeavenDoors_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38D8[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(HeavenDoors_BP_C_BndEvt__HeavenDoors_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on HeavenDoors_BP_C_BndEvt__HeavenDoors_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(HeavenDoors_BP_C_BndEvt__HeavenDoors_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on HeavenDoors_BP_C_BndEvt__HeavenDoors_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(HeavenDoors_BP_C_BndEvt__HeavenDoors_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'HeavenDoors_BP_C_BndEvt__HeavenDoors_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(HeavenDoors_BP_C_BndEvt__HeavenDoors_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'HeavenDoors_BP_C_BndEvt__HeavenDoors_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(HeavenDoors_BP_C_BndEvt__HeavenDoors_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'HeavenDoors_BP_C_BndEvt__HeavenDoors_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(HeavenDoors_BP_C_BndEvt__HeavenDoors_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'HeavenDoors_BP_C_BndEvt__HeavenDoors_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(HeavenDoors_BP_C_BndEvt__HeavenDoors_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'HeavenDoors_BP_C_BndEvt__HeavenDoors_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(HeavenDoors_BP_C_BndEvt__HeavenDoors_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'HeavenDoors_BP_C_BndEvt__HeavenDoors_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function HeavenDoors_BP.HeavenDoors_BP_C.ExecuteUbergraph_HeavenDoors_BP
// 0x0330 (0x0330 - 0x0000)
struct HeavenDoors_BP_C_ExecuteUbergraph_HeavenDoors_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38D9[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_RLerp_ReturnValue;                        // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_RLerp_ReturnValue_1;                      // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38DA[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0040(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult_1;  // 0x0128(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0210(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0218(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0220(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x022C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38DB[0x3];                                     // 0x022D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0230(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0318(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38DC[0x7];                                     // 0x0319(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_DynamicCast_AsPawn;                         // 0x0320(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HeavenDoors_BP_C_ExecuteUbergraph_HeavenDoors_BP) == 0x000008, "Wrong alignment on HeavenDoors_BP_C_ExecuteUbergraph_HeavenDoors_BP");
static_assert(sizeof(HeavenDoors_BP_C_ExecuteUbergraph_HeavenDoors_BP) == 0x000330, "Wrong size on HeavenDoors_BP_C_ExecuteUbergraph_HeavenDoors_BP");
static_assert(offsetof(HeavenDoors_BP_C_ExecuteUbergraph_HeavenDoors_BP, EntryPoint) == 0x000000, "Member 'HeavenDoors_BP_C_ExecuteUbergraph_HeavenDoors_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(HeavenDoors_BP_C_ExecuteUbergraph_HeavenDoors_BP, CallFunc_RLerp_ReturnValue) == 0x000008, "Member 'HeavenDoors_BP_C_ExecuteUbergraph_HeavenDoors_BP::CallFunc_RLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeavenDoors_BP_C_ExecuteUbergraph_HeavenDoors_BP, CallFunc_RLerp_ReturnValue_1) == 0x000020, "Member 'HeavenDoors_BP_C_ExecuteUbergraph_HeavenDoors_BP::CallFunc_RLerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HeavenDoors_BP_C_ExecuteUbergraph_HeavenDoors_BP, Temp_bool_Has_Been_Initd_Variable) == 0x000038, "Member 'HeavenDoors_BP_C_ExecuteUbergraph_HeavenDoors_BP::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(HeavenDoors_BP_C_ExecuteUbergraph_HeavenDoors_BP, CallFunc_HasAuthority_ReturnValue) == 0x000039, "Member 'HeavenDoors_BP_C_ExecuteUbergraph_HeavenDoors_BP::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeavenDoors_BP_C_ExecuteUbergraph_HeavenDoors_BP, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000040, "Member 'HeavenDoors_BP_C_ExecuteUbergraph_HeavenDoors_BP::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(HeavenDoors_BP_C_ExecuteUbergraph_HeavenDoors_BP, CallFunc_K2_SetRelativeRotation_SweepHitResult_1) == 0x000128, "Member 'HeavenDoors_BP_C_ExecuteUbergraph_HeavenDoors_BP::CallFunc_K2_SetRelativeRotation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(HeavenDoors_BP_C_ExecuteUbergraph_HeavenDoors_BP, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000210, "Member 'HeavenDoors_BP_C_ExecuteUbergraph_HeavenDoors_BP::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(HeavenDoors_BP_C_ExecuteUbergraph_HeavenDoors_BP, K2Node_ComponentBoundEvent_OtherActor) == 0x000218, "Member 'HeavenDoors_BP_C_ExecuteUbergraph_HeavenDoors_BP::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(HeavenDoors_BP_C_ExecuteUbergraph_HeavenDoors_BP, K2Node_ComponentBoundEvent_OtherComp) == 0x000220, "Member 'HeavenDoors_BP_C_ExecuteUbergraph_HeavenDoors_BP::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(HeavenDoors_BP_C_ExecuteUbergraph_HeavenDoors_BP, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000228, "Member 'HeavenDoors_BP_C_ExecuteUbergraph_HeavenDoors_BP::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(HeavenDoors_BP_C_ExecuteUbergraph_HeavenDoors_BP, K2Node_ComponentBoundEvent_bFromSweep) == 0x00022C, "Member 'HeavenDoors_BP_C_ExecuteUbergraph_HeavenDoors_BP::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(HeavenDoors_BP_C_ExecuteUbergraph_HeavenDoors_BP, K2Node_ComponentBoundEvent_SweepResult) == 0x000230, "Member 'HeavenDoors_BP_C_ExecuteUbergraph_HeavenDoors_BP::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(HeavenDoors_BP_C_ExecuteUbergraph_HeavenDoors_BP, Temp_bool_IsClosed_Variable) == 0x000318, "Member 'HeavenDoors_BP_C_ExecuteUbergraph_HeavenDoors_BP::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(HeavenDoors_BP_C_ExecuteUbergraph_HeavenDoors_BP, K2Node_DynamicCast_AsPawn) == 0x000320, "Member 'HeavenDoors_BP_C_ExecuteUbergraph_HeavenDoors_BP::K2Node_DynamicCast_AsPawn' has a wrong offset!");
static_assert(offsetof(HeavenDoors_BP_C_ExecuteUbergraph_HeavenDoors_BP, K2Node_DynamicCast_bSuccess) == 0x000328, "Member 'HeavenDoors_BP_C_ExecuteUbergraph_HeavenDoors_BP::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

