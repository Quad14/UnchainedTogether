#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LavaModifier

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_LavaModifier.BP_LavaModifier_C.BndEvt__BP_LavaModifier_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct BP_LavaModifier_C_BndEvt__BP_LavaModifier_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36F8[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_LavaModifier_C_BndEvt__BP_LavaModifier_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_LavaModifier_C_BndEvt__BP_LavaModifier_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_LavaModifier_C_BndEvt__BP_LavaModifier_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on BP_LavaModifier_C_BndEvt__BP_LavaModifier_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_LavaModifier_C_BndEvt__BP_LavaModifier_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_LavaModifier_C_BndEvt__BP_LavaModifier_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_LavaModifier_C_BndEvt__BP_LavaModifier_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_LavaModifier_C_BndEvt__BP_LavaModifier_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_LavaModifier_C_BndEvt__BP_LavaModifier_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_LavaModifier_C_BndEvt__BP_LavaModifier_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_LavaModifier_C_BndEvt__BP_LavaModifier_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_LavaModifier_C_BndEvt__BP_LavaModifier_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_LavaModifier_C_BndEvt__BP_LavaModifier_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_LavaModifier_C_BndEvt__BP_LavaModifier_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_LavaModifier_C_BndEvt__BP_LavaModifier_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_LavaModifier_C_BndEvt__BP_LavaModifier_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_LavaModifier.BP_LavaModifier_C.ExecuteUbergraph_BP_LavaModifier
// 0x0138 (0x0138 - 0x0000)
struct BP_LavaModifier_C_ExecuteUbergraph_BP_LavaModifier final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36F9[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_Lava_C*>                     CallFunc_GetAllActorsOfClass_OutActors;            // 0x0008(0x0010)(ReferenceParm)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36FA[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Lava_C*                             CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36FB[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36FC[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0050(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_LavaModifier_C_ExecuteUbergraph_BP_LavaModifier) == 0x000008, "Wrong alignment on BP_LavaModifier_C_ExecuteUbergraph_BP_LavaModifier");
static_assert(sizeof(BP_LavaModifier_C_ExecuteUbergraph_BP_LavaModifier) == 0x000138, "Wrong size on BP_LavaModifier_C_ExecuteUbergraph_BP_LavaModifier");
static_assert(offsetof(BP_LavaModifier_C_ExecuteUbergraph_BP_LavaModifier, EntryPoint) == 0x000000, "Member 'BP_LavaModifier_C_ExecuteUbergraph_BP_LavaModifier::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_LavaModifier_C_ExecuteUbergraph_BP_LavaModifier, CallFunc_GetAllActorsOfClass_OutActors) == 0x000008, "Member 'BP_LavaModifier_C_ExecuteUbergraph_BP_LavaModifier::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_LavaModifier_C_ExecuteUbergraph_BP_LavaModifier, CallFunc_HasAuthority_ReturnValue) == 0x000018, "Member 'BP_LavaModifier_C_ExecuteUbergraph_BP_LavaModifier::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LavaModifier_C_ExecuteUbergraph_BP_LavaModifier, CallFunc_Array_Get_Item) == 0x000020, "Member 'BP_LavaModifier_C_ExecuteUbergraph_BP_LavaModifier::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_LavaModifier_C_ExecuteUbergraph_BP_LavaModifier, CallFunc_Array_IsEmpty_ReturnValue) == 0x000028, "Member 'BP_LavaModifier_C_ExecuteUbergraph_BP_LavaModifier::CallFunc_Array_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LavaModifier_C_ExecuteUbergraph_BP_LavaModifier, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000030, "Member 'BP_LavaModifier_C_ExecuteUbergraph_BP_LavaModifier::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_LavaModifier_C_ExecuteUbergraph_BP_LavaModifier, K2Node_ComponentBoundEvent_OtherActor) == 0x000038, "Member 'BP_LavaModifier_C_ExecuteUbergraph_BP_LavaModifier::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_LavaModifier_C_ExecuteUbergraph_BP_LavaModifier, K2Node_ComponentBoundEvent_OtherComp) == 0x000040, "Member 'BP_LavaModifier_C_ExecuteUbergraph_BP_LavaModifier::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_LavaModifier_C_ExecuteUbergraph_BP_LavaModifier, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000048, "Member 'BP_LavaModifier_C_ExecuteUbergraph_BP_LavaModifier::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_LavaModifier_C_ExecuteUbergraph_BP_LavaModifier, K2Node_ComponentBoundEvent_bFromSweep) == 0x00004C, "Member 'BP_LavaModifier_C_ExecuteUbergraph_BP_LavaModifier::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_LavaModifier_C_ExecuteUbergraph_BP_LavaModifier, K2Node_ComponentBoundEvent_SweepResult) == 0x000050, "Member 'BP_LavaModifier_C_ExecuteUbergraph_BP_LavaModifier::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");

}

