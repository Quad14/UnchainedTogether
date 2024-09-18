#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ModFoliageSpawner

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_ModFoliageSpawner.BP_ModFoliageSpawner_C.BndEvt__BP_ModFoliageSpawner_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct BP_ModFoliageSpawner_C_BndEvt__BP_ModFoliageSpawner_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_ModFoliageSpawner_C_BndEvt__BP_ModFoliageSpawner_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_ModFoliageSpawner_C_BndEvt__BP_ModFoliageSpawner_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_ModFoliageSpawner_C_BndEvt__BP_ModFoliageSpawner_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on BP_ModFoliageSpawner_C_BndEvt__BP_ModFoliageSpawner_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_ModFoliageSpawner_C_BndEvt__BP_ModFoliageSpawner_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_ModFoliageSpawner_C_BndEvt__BP_ModFoliageSpawner_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_ModFoliageSpawner_C_BndEvt__BP_ModFoliageSpawner_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_ModFoliageSpawner_C_BndEvt__BP_ModFoliageSpawner_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_ModFoliageSpawner_C_BndEvt__BP_ModFoliageSpawner_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_ModFoliageSpawner_C_BndEvt__BP_ModFoliageSpawner_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_ModFoliageSpawner_C_BndEvt__BP_ModFoliageSpawner_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_ModFoliageSpawner_C_BndEvt__BP_ModFoliageSpawner_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_ModFoliageSpawner_C_BndEvt__BP_ModFoliageSpawner_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_ModFoliageSpawner_C_BndEvt__BP_ModFoliageSpawner_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_ModFoliageSpawner_C_BndEvt__BP_ModFoliageSpawner_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_ModFoliageSpawner_C_BndEvt__BP_ModFoliageSpawner_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_ModFoliageSpawner.BP_ModFoliageSpawner_C.ExecuteUbergraph_BP_ModFoliageSpawner
// 0x0170 (0x0170 - 0x0000)
struct BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInputKeyDown_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_CustomEvent_Radius;                         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_FoliageActor;                   // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_RemoveMode;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0068(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UHierarchicalInstancedStaticMeshComponent* K2Node_DynamicCast_AsHierarchical_Instanced_Static_Mesh_Component; // 0x0150(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_159[0x7];                                      // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMod_Foliage_C*                         K2Node_DynamicCast_AsMod_Foliage;                  // 0x0160(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner) == 0x000008, "Wrong alignment on BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner");
static_assert(sizeof(BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner) == 0x000170, "Wrong size on BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner");
static_assert(offsetof(BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner, EntryPoint) == 0x000000, "Member 'BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner, CallFunc_IsInputKeyDown_ReturnValue) == 0x000010, "Member 'BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner::CallFunc_IsInputKeyDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner, K2Node_CustomEvent_Radius) == 0x000018, "Member 'BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner::K2Node_CustomEvent_Radius' has a wrong offset!");
static_assert(offsetof(BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000020, "Member 'BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner, K2Node_CustomEvent_FoliageActor) == 0x000038, "Member 'BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner::K2Node_CustomEvent_FoliageActor' has a wrong offset!");
static_assert(offsetof(BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner, K2Node_CustomEvent_RemoveMode) == 0x000040, "Member 'BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner::K2Node_CustomEvent_RemoveMode' has a wrong offset!");
static_assert(offsetof(BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000048, "Member 'BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner, K2Node_ComponentBoundEvent_OtherActor) == 0x000050, "Member 'BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner, K2Node_ComponentBoundEvent_OtherComp) == 0x000058, "Member 'BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000060, "Member 'BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner, K2Node_ComponentBoundEvent_bFromSweep) == 0x000064, "Member 'BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner, K2Node_ComponentBoundEvent_SweepResult) == 0x000068, "Member 'BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner, K2Node_DynamicCast_AsHierarchical_Instanced_Static_Mesh_Component) == 0x000150, "Member 'BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner::K2Node_DynamicCast_AsHierarchical_Instanced_Static_Mesh_Component' has a wrong offset!");
static_assert(offsetof(BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner, K2Node_DynamicCast_bSuccess) == 0x000158, "Member 'BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner, K2Node_DynamicCast_AsMod_Foliage) == 0x000160, "Member 'BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner::K2Node_DynamicCast_AsMod_Foliage' has a wrong offset!");
static_assert(offsetof(BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner, K2Node_DynamicCast_bSuccess_1) == 0x000168, "Member 'BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000169, "Member 'BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function BP_ModFoliageSpawner.BP_ModFoliageSpawner_C.SetRemoveMode
// 0x0010 (0x0010 - 0x0000)
struct BP_ModFoliageSpawner_C_SetRemoveMode final
{
public:
	class AActor*                                 FoliageActor;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          RemoveMode;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ModFoliageSpawner_C_SetRemoveMode) == 0x000008, "Wrong alignment on BP_ModFoliageSpawner_C_SetRemoveMode");
static_assert(sizeof(BP_ModFoliageSpawner_C_SetRemoveMode) == 0x000010, "Wrong size on BP_ModFoliageSpawner_C_SetRemoveMode");
static_assert(offsetof(BP_ModFoliageSpawner_C_SetRemoveMode, FoliageActor) == 0x000000, "Member 'BP_ModFoliageSpawner_C_SetRemoveMode::FoliageActor' has a wrong offset!");
static_assert(offsetof(BP_ModFoliageSpawner_C_SetRemoveMode, RemoveMode) == 0x000008, "Member 'BP_ModFoliageSpawner_C_SetRemoveMode::RemoveMode' has a wrong offset!");

// Function BP_ModFoliageSpawner.BP_ModFoliageSpawner_C.UpdateRadius
// 0x0008 (0x0008 - 0x0000)
struct BP_ModFoliageSpawner_C_UpdateRadius final
{
public:
	double                                        Radius;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ModFoliageSpawner_C_UpdateRadius) == 0x000008, "Wrong alignment on BP_ModFoliageSpawner_C_UpdateRadius");
static_assert(sizeof(BP_ModFoliageSpawner_C_UpdateRadius) == 0x000008, "Wrong size on BP_ModFoliageSpawner_C_UpdateRadius");
static_assert(offsetof(BP_ModFoliageSpawner_C_UpdateRadius, Radius) == 0x000000, "Member 'BP_ModFoliageSpawner_C_UpdateRadius::Radius' has a wrong offset!");

}

