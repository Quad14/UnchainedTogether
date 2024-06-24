#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TrainCollisionOff

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_TrainCollisionOff.BP_TrainCollisionOff_C.BndEvt__BP_TrainCollisionOff_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct BP_TrainCollisionOff_C_BndEvt__BP_TrainCollisionOff_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2AE3[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_TrainCollisionOff_C_BndEvt__BP_TrainCollisionOff_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_TrainCollisionOff_C_BndEvt__BP_TrainCollisionOff_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_TrainCollisionOff_C_BndEvt__BP_TrainCollisionOff_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on BP_TrainCollisionOff_C_BndEvt__BP_TrainCollisionOff_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_TrainCollisionOff_C_BndEvt__BP_TrainCollisionOff_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_TrainCollisionOff_C_BndEvt__BP_TrainCollisionOff_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_TrainCollisionOff_C_BndEvt__BP_TrainCollisionOff_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_TrainCollisionOff_C_BndEvt__BP_TrainCollisionOff_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_TrainCollisionOff_C_BndEvt__BP_TrainCollisionOff_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_TrainCollisionOff_C_BndEvt__BP_TrainCollisionOff_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_TrainCollisionOff_C_BndEvt__BP_TrainCollisionOff_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_TrainCollisionOff_C_BndEvt__BP_TrainCollisionOff_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_TrainCollisionOff_C_BndEvt__BP_TrainCollisionOff_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_TrainCollisionOff_C_BndEvt__BP_TrainCollisionOff_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_TrainCollisionOff_C_BndEvt__BP_TrainCollisionOff_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_TrainCollisionOff_C_BndEvt__BP_TrainCollisionOff_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_TrainCollisionOff.BP_TrainCollisionOff_C.BndEvt__BP_TrainCollisionOff_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct BP_TrainCollisionOff_C_BndEvt__BP_TrainCollisionOff_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TrainCollisionOff_C_BndEvt__BP_TrainCollisionOff_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_TrainCollisionOff_C_BndEvt__BP_TrainCollisionOff_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_TrainCollisionOff_C_BndEvt__BP_TrainCollisionOff_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on BP_TrainCollisionOff_C_BndEvt__BP_TrainCollisionOff_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_TrainCollisionOff_C_BndEvt__BP_TrainCollisionOff_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_TrainCollisionOff_C_BndEvt__BP_TrainCollisionOff_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_TrainCollisionOff_C_BndEvt__BP_TrainCollisionOff_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_TrainCollisionOff_C_BndEvt__BP_TrainCollisionOff_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_TrainCollisionOff_C_BndEvt__BP_TrainCollisionOff_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_TrainCollisionOff_C_BndEvt__BP_TrainCollisionOff_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_TrainCollisionOff_C_BndEvt__BP_TrainCollisionOff_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_TrainCollisionOff_C_BndEvt__BP_TrainCollisionOff_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function BP_TrainCollisionOff.BP_TrainCollisionOff_C.ExecuteUbergraph_BP_TrainCollisionOff
// 0x0160 (0x0160 - 0x0000)
struct BP_TrainCollisionOff_C_ExecuteUbergraph_BP_TrainCollisionOff final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2AE4[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2AE5[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_Character_C>      K2Node_DynamicCast_AsBPI_Character;                // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2AE6[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2AE7[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0060(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	TScriptInterface<class IBPI_Character_C>      K2Node_DynamicCast_AsBPI_Character_1;              // 0x0148(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TrainCollisionOff_C_ExecuteUbergraph_BP_TrainCollisionOff) == 0x000008, "Wrong alignment on BP_TrainCollisionOff_C_ExecuteUbergraph_BP_TrainCollisionOff");
static_assert(sizeof(BP_TrainCollisionOff_C_ExecuteUbergraph_BP_TrainCollisionOff) == 0x000160, "Wrong size on BP_TrainCollisionOff_C_ExecuteUbergraph_BP_TrainCollisionOff");
static_assert(offsetof(BP_TrainCollisionOff_C_ExecuteUbergraph_BP_TrainCollisionOff, EntryPoint) == 0x000000, "Member 'BP_TrainCollisionOff_C_ExecuteUbergraph_BP_TrainCollisionOff::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_TrainCollisionOff_C_ExecuteUbergraph_BP_TrainCollisionOff, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000008, "Member 'BP_TrainCollisionOff_C_ExecuteUbergraph_BP_TrainCollisionOff::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_TrainCollisionOff_C_ExecuteUbergraph_BP_TrainCollisionOff, K2Node_ComponentBoundEvent_OtherActor) == 0x000010, "Member 'BP_TrainCollisionOff_C_ExecuteUbergraph_BP_TrainCollisionOff::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_TrainCollisionOff_C_ExecuteUbergraph_BP_TrainCollisionOff, K2Node_ComponentBoundEvent_OtherComp) == 0x000018, "Member 'BP_TrainCollisionOff_C_ExecuteUbergraph_BP_TrainCollisionOff::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_TrainCollisionOff_C_ExecuteUbergraph_BP_TrainCollisionOff, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000020, "Member 'BP_TrainCollisionOff_C_ExecuteUbergraph_BP_TrainCollisionOff::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_TrainCollisionOff_C_ExecuteUbergraph_BP_TrainCollisionOff, K2Node_DynamicCast_AsBPI_Character) == 0x000028, "Member 'BP_TrainCollisionOff_C_ExecuteUbergraph_BP_TrainCollisionOff::K2Node_DynamicCast_AsBPI_Character' has a wrong offset!");
static_assert(offsetof(BP_TrainCollisionOff_C_ExecuteUbergraph_BP_TrainCollisionOff, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_TrainCollisionOff_C_ExecuteUbergraph_BP_TrainCollisionOff::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_TrainCollisionOff_C_ExecuteUbergraph_BP_TrainCollisionOff, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x000040, "Member 'BP_TrainCollisionOff_C_ExecuteUbergraph_BP_TrainCollisionOff::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(BP_TrainCollisionOff_C_ExecuteUbergraph_BP_TrainCollisionOff, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000048, "Member 'BP_TrainCollisionOff_C_ExecuteUbergraph_BP_TrainCollisionOff::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BP_TrainCollisionOff_C_ExecuteUbergraph_BP_TrainCollisionOff, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000050, "Member 'BP_TrainCollisionOff_C_ExecuteUbergraph_BP_TrainCollisionOff::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(BP_TrainCollisionOff_C_ExecuteUbergraph_BP_TrainCollisionOff, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x000058, "Member 'BP_TrainCollisionOff_C_ExecuteUbergraph_BP_TrainCollisionOff::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(BP_TrainCollisionOff_C_ExecuteUbergraph_BP_TrainCollisionOff, K2Node_ComponentBoundEvent_bFromSweep) == 0x00005C, "Member 'BP_TrainCollisionOff_C_ExecuteUbergraph_BP_TrainCollisionOff::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_TrainCollisionOff_C_ExecuteUbergraph_BP_TrainCollisionOff, K2Node_ComponentBoundEvent_SweepResult) == 0x000060, "Member 'BP_TrainCollisionOff_C_ExecuteUbergraph_BP_TrainCollisionOff::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_TrainCollisionOff_C_ExecuteUbergraph_BP_TrainCollisionOff, K2Node_DynamicCast_AsBPI_Character_1) == 0x000148, "Member 'BP_TrainCollisionOff_C_ExecuteUbergraph_BP_TrainCollisionOff::K2Node_DynamicCast_AsBPI_Character_1' has a wrong offset!");
static_assert(offsetof(BP_TrainCollisionOff_C_ExecuteUbergraph_BP_TrainCollisionOff, K2Node_DynamicCast_bSuccess_1) == 0x000158, "Member 'BP_TrainCollisionOff_C_ExecuteUbergraph_BP_TrainCollisionOff::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}

