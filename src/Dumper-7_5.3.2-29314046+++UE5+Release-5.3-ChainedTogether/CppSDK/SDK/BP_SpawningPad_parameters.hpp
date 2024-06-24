#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SpawningPad

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_SpawningPad.BP_SpawningPad_C.BndEvt__BP_SpawningPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct BP_SpawningPad_C_BndEvt__BP_SpawningPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36DD[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_SpawningPad_C_BndEvt__BP_SpawningPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_SpawningPad_C_BndEvt__BP_SpawningPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_SpawningPad_C_BndEvt__BP_SpawningPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on BP_SpawningPad_C_BndEvt__BP_SpawningPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_SpawningPad_C_BndEvt__BP_SpawningPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_SpawningPad_C_BndEvt__BP_SpawningPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_SpawningPad_C_BndEvt__BP_SpawningPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_SpawningPad_C_BndEvt__BP_SpawningPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SpawningPad_C_BndEvt__BP_SpawningPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_SpawningPad_C_BndEvt__BP_SpawningPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SpawningPad_C_BndEvt__BP_SpawningPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_SpawningPad_C_BndEvt__BP_SpawningPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_SpawningPad_C_BndEvt__BP_SpawningPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_SpawningPad_C_BndEvt__BP_SpawningPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_SpawningPad_C_BndEvt__BP_SpawningPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_SpawningPad_C_BndEvt__BP_SpawningPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_SpawningPad.BP_SpawningPad_C.BndEvt__BP_SpawningPad_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct BP_SpawningPad_C_BndEvt__BP_SpawningPad_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SpawningPad_C_BndEvt__BP_SpawningPad_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_SpawningPad_C_BndEvt__BP_SpawningPad_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_SpawningPad_C_BndEvt__BP_SpawningPad_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on BP_SpawningPad_C_BndEvt__BP_SpawningPad_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_SpawningPad_C_BndEvt__BP_SpawningPad_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_SpawningPad_C_BndEvt__BP_SpawningPad_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_SpawningPad_C_BndEvt__BP_SpawningPad_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_SpawningPad_C_BndEvt__BP_SpawningPad_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SpawningPad_C_BndEvt__BP_SpawningPad_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_SpawningPad_C_BndEvt__BP_SpawningPad_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SpawningPad_C_BndEvt__BP_SpawningPad_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_SpawningPad_C_BndEvt__BP_SpawningPad_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function BP_SpawningPad.BP_SpawningPad_C.ExecuteUbergraph_BP_SpawningPad
// 0x0170 (0x0170 - 0x0000)
struct BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36DE[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAtLocation_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_empty;                            // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36DF[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors;   // 0x0030(0x0010)(ReferenceParm)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_empty_1;                          // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36E0[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36E1[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0068(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0150(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0160(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x016C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x016D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_empty_2;                          // 0x016E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_empty_3;                          // 0x016F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad) == 0x000008, "Wrong alignment on BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad");
static_assert(sizeof(BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad) == 0x000170, "Wrong size on BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad");
static_assert(offsetof(BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad, EntryPoint) == 0x000000, "Member 'BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad, CallFunc_SpawnSoundAtLocation_ReturnValue) == 0x000020, "Member 'BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad::CallFunc_SpawnSoundAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad, CallFunc_IsEmpty_empty) == 0x000029, "Member 'BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad::CallFunc_IsEmpty_empty' has a wrong offset!");
static_assert(offsetof(BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad, Temp_bool_Has_Been_Initd_Variable) == 0x00002A, "Member 'BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad, CallFunc_IsValid_ReturnValue_1) == 0x00002B, "Member 'BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad, CallFunc_GetOverlappingActors_OverlappingActors) == 0x000030, "Member 'BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad::CallFunc_GetOverlappingActors_OverlappingActors' has a wrong offset!");
static_assert(offsetof(BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad, CallFunc_Array_IsEmpty_ReturnValue) == 0x000040, "Member 'BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad::CallFunc_Array_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad, CallFunc_IsEmpty_empty_1) == 0x000041, "Member 'BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad::CallFunc_IsEmpty_empty_1' has a wrong offset!");
static_assert(offsetof(BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x000048, "Member 'BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000050, "Member 'BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000058, "Member 'BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x000060, "Member 'BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad, K2Node_ComponentBoundEvent_bFromSweep) == 0x000064, "Member 'BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad, K2Node_ComponentBoundEvent_SweepResult) == 0x000068, "Member 'BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000150, "Member 'BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad, K2Node_ComponentBoundEvent_OtherActor) == 0x000158, "Member 'BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad, K2Node_ComponentBoundEvent_OtherComp) == 0x000160, "Member 'BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000168, "Member 'BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad, CallFunc_IsValid_ReturnValue_2) == 0x00016C, "Member 'BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad, Temp_bool_IsClosed_Variable) == 0x00016D, "Member 'BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad, CallFunc_IsEmpty_empty_2) == 0x00016E, "Member 'BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad::CallFunc_IsEmpty_empty_2' has a wrong offset!");
static_assert(offsetof(BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad, CallFunc_IsEmpty_empty_3) == 0x00016F, "Member 'BP_SpawningPad_C_ExecuteUbergraph_BP_SpawningPad::CallFunc_IsEmpty_empty_3' has a wrong offset!");

// Function BP_SpawningPad.BP_SpawningPad_C.IsEmpty
// 0x0020 (0x0020 - 0x0000)
struct BP_SpawningPad_C_IsEmpty final
{
public:
	bool                                          Empty;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36E2[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors;   // 0x0008(0x0010)(ReferenceParm)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SpawningPad_C_IsEmpty) == 0x000008, "Wrong alignment on BP_SpawningPad_C_IsEmpty");
static_assert(sizeof(BP_SpawningPad_C_IsEmpty) == 0x000020, "Wrong size on BP_SpawningPad_C_IsEmpty");
static_assert(offsetof(BP_SpawningPad_C_IsEmpty, Empty) == 0x000000, "Member 'BP_SpawningPad_C_IsEmpty::Empty' has a wrong offset!");
static_assert(offsetof(BP_SpawningPad_C_IsEmpty, CallFunc_GetOverlappingActors_OverlappingActors) == 0x000008, "Member 'BP_SpawningPad_C_IsEmpty::CallFunc_GetOverlappingActors_OverlappingActors' has a wrong offset!");
static_assert(offsetof(BP_SpawningPad_C_IsEmpty, CallFunc_Array_IsEmpty_ReturnValue) == 0x000018, "Member 'BP_SpawningPad_C_IsEmpty::CallFunc_Array_IsEmpty_ReturnValue' has a wrong offset!");

// Function BP_SpawningPad.BP_SpawningPad_C.UserConstructionScript
// 0x0008 (0x0008 - 0x0000)
struct BP_SpawningPad_C_UserConstructionScript final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SpawningPad_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_SpawningPad_C_UserConstructionScript");
static_assert(sizeof(BP_SpawningPad_C_UserConstructionScript) == 0x000008, "Wrong size on BP_SpawningPad_C_UserConstructionScript");
static_assert(offsetof(BP_SpawningPad_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000000, "Member 'BP_SpawningPad_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

}

