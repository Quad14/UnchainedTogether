#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Chimney

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_Chimney.BP_Chimney_C.BndEvt__BP_Chimney_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct BP_Chimney_C_BndEvt__BP_Chimney_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3870[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_Chimney_C_BndEvt__BP_Chimney_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_Chimney_C_BndEvt__BP_Chimney_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_Chimney_C_BndEvt__BP_Chimney_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on BP_Chimney_C_BndEvt__BP_Chimney_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_Chimney_C_BndEvt__BP_Chimney_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_Chimney_C_BndEvt__BP_Chimney_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_Chimney_C_BndEvt__BP_Chimney_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_Chimney_C_BndEvt__BP_Chimney_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_Chimney_C_BndEvt__BP_Chimney_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_Chimney_C_BndEvt__BP_Chimney_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_Chimney_C_BndEvt__BP_Chimney_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_Chimney_C_BndEvt__BP_Chimney_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_Chimney_C_BndEvt__BP_Chimney_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_Chimney_C_BndEvt__BP_Chimney_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_Chimney_C_BndEvt__BP_Chimney_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_Chimney_C_BndEvt__BP_Chimney_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_Chimney.BP_Chimney_C.ExecuteUbergraph_BP_Chimney
// 0x01B0 (0x01B0 - 0x0000)
struct BP_Chimney_C_ExecuteUbergraph_BP_Chimney final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3871[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3872[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0038(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	TArray<class AActor*>                         CallFunc_GetAllActorsWithInterface_OutActors;      // 0x0120(0x0010)(ReferenceParm)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3873[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_Character_C>      K2Node_DynamicCast_AsBPI_Character;                // 0x0140(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3874[0x3];                                     // 0x0151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3875[0x3];                                     // 0x0159(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNumPlayers_ReturnValue;                // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0170(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAtLocation_ReturnValue;         // 0x0190(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0198(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Chimney_C_ExecuteUbergraph_BP_Chimney) == 0x000008, "Wrong alignment on BP_Chimney_C_ExecuteUbergraph_BP_Chimney");
static_assert(sizeof(BP_Chimney_C_ExecuteUbergraph_BP_Chimney) == 0x0001B0, "Wrong size on BP_Chimney_C_ExecuteUbergraph_BP_Chimney");
static_assert(offsetof(BP_Chimney_C_ExecuteUbergraph_BP_Chimney, EntryPoint) == 0x000000, "Member 'BP_Chimney_C_ExecuteUbergraph_BP_Chimney::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Chimney_C_ExecuteUbergraph_BP_Chimney, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_Chimney_C_ExecuteUbergraph_BP_Chimney::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_Chimney_C_ExecuteUbergraph_BP_Chimney, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_Chimney_C_ExecuteUbergraph_BP_Chimney::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Chimney_C_ExecuteUbergraph_BP_Chimney, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'BP_Chimney_C_ExecuteUbergraph_BP_Chimney::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_Chimney_C_ExecuteUbergraph_BP_Chimney, CallFunc_HasAuthority_ReturnValue) == 0x000010, "Member 'BP_Chimney_C_ExecuteUbergraph_BP_Chimney::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Chimney_C_ExecuteUbergraph_BP_Chimney, Temp_bool_Has_Been_Initd_Variable) == 0x000011, "Member 'BP_Chimney_C_ExecuteUbergraph_BP_Chimney::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_Chimney_C_ExecuteUbergraph_BP_Chimney, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000018, "Member 'BP_Chimney_C_ExecuteUbergraph_BP_Chimney::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_Chimney_C_ExecuteUbergraph_BP_Chimney, K2Node_ComponentBoundEvent_OtherActor) == 0x000020, "Member 'BP_Chimney_C_ExecuteUbergraph_BP_Chimney::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_Chimney_C_ExecuteUbergraph_BP_Chimney, K2Node_ComponentBoundEvent_OtherComp) == 0x000028, "Member 'BP_Chimney_C_ExecuteUbergraph_BP_Chimney::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_Chimney_C_ExecuteUbergraph_BP_Chimney, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000030, "Member 'BP_Chimney_C_ExecuteUbergraph_BP_Chimney::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_Chimney_C_ExecuteUbergraph_BP_Chimney, K2Node_ComponentBoundEvent_bFromSweep) == 0x000034, "Member 'BP_Chimney_C_ExecuteUbergraph_BP_Chimney::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_Chimney_C_ExecuteUbergraph_BP_Chimney, K2Node_ComponentBoundEvent_SweepResult) == 0x000038, "Member 'BP_Chimney_C_ExecuteUbergraph_BP_Chimney::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_Chimney_C_ExecuteUbergraph_BP_Chimney, CallFunc_GetAllActorsWithInterface_OutActors) == 0x000120, "Member 'BP_Chimney_C_ExecuteUbergraph_BP_Chimney::CallFunc_GetAllActorsWithInterface_OutActors' has a wrong offset!");
static_assert(offsetof(BP_Chimney_C_ExecuteUbergraph_BP_Chimney, Temp_bool_IsClosed_Variable) == 0x000130, "Member 'BP_Chimney_C_ExecuteUbergraph_BP_Chimney::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_Chimney_C_ExecuteUbergraph_BP_Chimney, CallFunc_Array_Get_Item) == 0x000138, "Member 'BP_Chimney_C_ExecuteUbergraph_BP_Chimney::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Chimney_C_ExecuteUbergraph_BP_Chimney, K2Node_DynamicCast_AsBPI_Character) == 0x000140, "Member 'BP_Chimney_C_ExecuteUbergraph_BP_Chimney::K2Node_DynamicCast_AsBPI_Character' has a wrong offset!");
static_assert(offsetof(BP_Chimney_C_ExecuteUbergraph_BP_Chimney, K2Node_DynamicCast_bSuccess) == 0x000150, "Member 'BP_Chimney_C_ExecuteUbergraph_BP_Chimney::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Chimney_C_ExecuteUbergraph_BP_Chimney, CallFunc_Array_Length_ReturnValue) == 0x000154, "Member 'BP_Chimney_C_ExecuteUbergraph_BP_Chimney::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Chimney_C_ExecuteUbergraph_BP_Chimney, CallFunc_Less_IntInt_ReturnValue) == 0x000158, "Member 'BP_Chimney_C_ExecuteUbergraph_BP_Chimney::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Chimney_C_ExecuteUbergraph_BP_Chimney, CallFunc_GetNumPlayers_ReturnValue) == 0x00015C, "Member 'BP_Chimney_C_ExecuteUbergraph_BP_Chimney::CallFunc_GetNumPlayers_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Chimney_C_ExecuteUbergraph_BP_Chimney, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000160, "Member 'BP_Chimney_C_ExecuteUbergraph_BP_Chimney::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Chimney_C_ExecuteUbergraph_BP_Chimney, CallFunc_MapRangeClamped_ReturnValue) == 0x000168, "Member 'BP_Chimney_C_ExecuteUbergraph_BP_Chimney::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Chimney_C_ExecuteUbergraph_BP_Chimney, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000170, "Member 'BP_Chimney_C_ExecuteUbergraph_BP_Chimney::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Chimney_C_ExecuteUbergraph_BP_Chimney, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000188, "Member 'BP_Chimney_C_ExecuteUbergraph_BP_Chimney::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Chimney_C_ExecuteUbergraph_BP_Chimney, CallFunc_SpawnSoundAtLocation_ReturnValue) == 0x000190, "Member 'BP_Chimney_C_ExecuteUbergraph_BP_Chimney::CallFunc_SpawnSoundAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Chimney_C_ExecuteUbergraph_BP_Chimney, CallFunc_MakeVector_ReturnValue) == 0x000198, "Member 'BP_Chimney_C_ExecuteUbergraph_BP_Chimney::CallFunc_MakeVector_ReturnValue' has a wrong offset!");

}

