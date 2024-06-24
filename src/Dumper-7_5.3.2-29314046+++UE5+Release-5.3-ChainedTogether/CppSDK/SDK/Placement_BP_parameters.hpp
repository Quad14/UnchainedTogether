#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Placement_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Placement_BP.Placement_BP_C.Add Cables
// 0x0220 (0x0220 - 0x0000)
struct Placement_BP_C_Add_Cables final
{
public:
	int32                                         First_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Last_Index;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Param_Distance;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Cable_Location;                                    // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BA4[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BA5[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransformAtDistanceAlongSpline_ReturnValue; // 0x0060(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue; // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x00D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0108(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_2;                          // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_2;                          // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_2;                          // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_2;           // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_3;           // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_4;           // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0170(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x0188(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x01A0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCableComponent*                        CallFunc_AddComponent_ReturnValue;                 // 0x0200(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_CableLength_ImplicitCast;       // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_CableWidth_ImplicitCast;        // 0x020C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_TileMaterial_ImplicitCast;      // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTransformAtDistanceAlongSpline_Distance_ImplicitCast; // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast; // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Placement_BP_C_Add_Cables) == 0x000010, "Wrong alignment on Placement_BP_C_Add_Cables");
static_assert(sizeof(Placement_BP_C_Add_Cables) == 0x000220, "Wrong size on Placement_BP_C_Add_Cables");
static_assert(offsetof(Placement_BP_C_Add_Cables, First_Index) == 0x000000, "Member 'Placement_BP_C_Add_Cables::First_Index' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Add_Cables, Last_Index) == 0x000004, "Member 'Placement_BP_C_Add_Cables::Last_Index' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Add_Cables, Param_Distance) == 0x000008, "Member 'Placement_BP_C_Add_Cables::Param_Distance' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Add_Cables, Cable_Location) == 0x000010, "Member 'Placement_BP_C_Add_Cables::Cable_Location' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Add_Cables, CallFunc_BreakVector_X) == 0x000028, "Member 'Placement_BP_C_Add_Cables::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Add_Cables, CallFunc_BreakVector_Y) == 0x000030, "Member 'Placement_BP_C_Add_Cables::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Add_Cables, CallFunc_BreakVector_Z) == 0x000038, "Member 'Placement_BP_C_Add_Cables::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Add_Cables, Temp_int_Variable) == 0x000040, "Member 'Placement_BP_C_Add_Cables::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Add_Cables, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000048, "Member 'Placement_BP_C_Add_Cables::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Add_Cables, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000050, "Member 'Placement_BP_C_Add_Cables::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Add_Cables, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000058, "Member 'Placement_BP_C_Add_Cables::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Add_Cables, CallFunc_Add_IntInt_ReturnValue) == 0x00005C, "Member 'Placement_BP_C_Add_Cables::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Add_Cables, CallFunc_GetTransformAtDistanceAlongSpline_ReturnValue) == 0x000060, "Member 'Placement_BP_C_Add_Cables::CallFunc_GetTransformAtDistanceAlongSpline_ReturnValue' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Add_Cables, CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue) == 0x0000C0, "Member 'Placement_BP_C_Add_Cables::CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Add_Cables, CallFunc_BreakTransform_Location) == 0x0000D8, "Member 'Placement_BP_C_Add_Cables::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Add_Cables, CallFunc_BreakTransform_Rotation) == 0x0000F0, "Member 'Placement_BP_C_Add_Cables::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Add_Cables, CallFunc_BreakTransform_Scale) == 0x000108, "Member 'Placement_BP_C_Add_Cables::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Add_Cables, CallFunc_BreakVector_X_1) == 0x000120, "Member 'Placement_BP_C_Add_Cables::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Add_Cables, CallFunc_BreakVector_Y_1) == 0x000128, "Member 'Placement_BP_C_Add_Cables::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Add_Cables, CallFunc_BreakVector_Z_1) == 0x000130, "Member 'Placement_BP_C_Add_Cables::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Add_Cables, CallFunc_BreakVector_X_2) == 0x000138, "Member 'Placement_BP_C_Add_Cables::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Add_Cables, CallFunc_BreakVector_Y_2) == 0x000140, "Member 'Placement_BP_C_Add_Cables::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Add_Cables, CallFunc_BreakVector_Z_2) == 0x000148, "Member 'Placement_BP_C_Add_Cables::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Add_Cables, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x000150, "Member 'Placement_BP_C_Add_Cables::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Add_Cables, CallFunc_Add_DoubleDouble_ReturnValue_2) == 0x000158, "Member 'Placement_BP_C_Add_Cables::CallFunc_Add_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Add_Cables, CallFunc_Add_DoubleDouble_ReturnValue_3) == 0x000160, "Member 'Placement_BP_C_Add_Cables::CallFunc_Add_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Add_Cables, CallFunc_Add_DoubleDouble_ReturnValue_4) == 0x000168, "Member 'Placement_BP_C_Add_Cables::CallFunc_Add_DoubleDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Add_Cables, CallFunc_MakeVector_ReturnValue) == 0x000170, "Member 'Placement_BP_C_Add_Cables::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Add_Cables, CallFunc_MakeVector_ReturnValue_1) == 0x000188, "Member 'Placement_BP_C_Add_Cables::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Add_Cables, CallFunc_MakeTransform_ReturnValue) == 0x0001A0, "Member 'Placement_BP_C_Add_Cables::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Add_Cables, CallFunc_AddComponent_ReturnValue) == 0x000200, "Member 'Placement_BP_C_Add_Cables::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Add_Cables, K2Node_VariableSet_CableLength_ImplicitCast) == 0x000208, "Member 'Placement_BP_C_Add_Cables::K2Node_VariableSet_CableLength_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Add_Cables, K2Node_VariableSet_CableWidth_ImplicitCast) == 0x00020C, "Member 'Placement_BP_C_Add_Cables::K2Node_VariableSet_CableWidth_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Add_Cables, K2Node_VariableSet_TileMaterial_ImplicitCast) == 0x000210, "Member 'Placement_BP_C_Add_Cables::K2Node_VariableSet_TileMaterial_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Add_Cables, CallFunc_GetTransformAtDistanceAlongSpline_Distance_ImplicitCast) == 0x000214, "Member 'Placement_BP_C_Add_Cables::CallFunc_GetTransformAtDistanceAlongSpline_Distance_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Add_Cables, CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast) == 0x000218, "Member 'Placement_BP_C_Add_Cables::CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast' has a wrong offset!");

// Function Placement_BP.Placement_BP_C.Place Meshes
// 0x0310 (0x0310 - 0x0000)
struct Placement_BP_C_Place_Meshes final
{
public:
	int32                                         First_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Last_Index;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Param_Distance;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Use_Static_Mesh_Method;                            // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BA6[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BA7[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue; // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue; // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BA8[0xC];                                     // 0x0064(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0070(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x00D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UStaticMeshComponent*                   CallFunc_AddComponent_ReturnValue;                 // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_SelectRotator_ReturnValue;                // 0x00F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_SelectRotator_ReturnValue_1;              // 0x0108(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BA9[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x0128(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class USplineMeshComponent*                   CallFunc_AddComponent_ReturnValue_1;               // 0x0210(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult_1;     // 0x0218(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_SetStaticMesh_ReturnValue_1;              // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BAA[0x3];                                     // 0x0301(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast; // 0x0304(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRotationAtDistanceAlongSpline_Distance_ImplicitCast; // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Placement_BP_C_Place_Meshes) == 0x000010, "Wrong alignment on Placement_BP_C_Place_Meshes");
static_assert(sizeof(Placement_BP_C_Place_Meshes) == 0x000310, "Wrong size on Placement_BP_C_Place_Meshes");
static_assert(offsetof(Placement_BP_C_Place_Meshes, First_Index) == 0x000000, "Member 'Placement_BP_C_Place_Meshes::First_Index' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Place_Meshes, Last_Index) == 0x000004, "Member 'Placement_BP_C_Place_Meshes::Last_Index' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Place_Meshes, Param_Distance) == 0x000008, "Member 'Placement_BP_C_Place_Meshes::Param_Distance' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Place_Meshes, Use_Static_Mesh_Method) == 0x000010, "Member 'Placement_BP_C_Place_Meshes::Use_Static_Mesh_Method' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Place_Meshes, Temp_int_Variable) == 0x000014, "Member 'Placement_BP_C_Place_Meshes::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Place_Meshes, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000018, "Member 'Placement_BP_C_Place_Meshes::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Place_Meshes, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000020, "Member 'Placement_BP_C_Place_Meshes::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Place_Meshes, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'Placement_BP_C_Place_Meshes::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Place_Meshes, CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue) == 0x000028, "Member 'Placement_BP_C_Place_Meshes::CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Place_Meshes, CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue) == 0x000040, "Member 'Placement_BP_C_Place_Meshes::CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Place_Meshes, CallFunc_BreakRotator_Roll) == 0x000058, "Member 'Placement_BP_C_Place_Meshes::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Place_Meshes, CallFunc_BreakRotator_Pitch) == 0x00005C, "Member 'Placement_BP_C_Place_Meshes::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Place_Meshes, CallFunc_BreakRotator_Yaw) == 0x000060, "Member 'Placement_BP_C_Place_Meshes::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Place_Meshes, CallFunc_MakeTransform_ReturnValue) == 0x000070, "Member 'Placement_BP_C_Place_Meshes::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Place_Meshes, CallFunc_MakeRotator_ReturnValue) == 0x0000D0, "Member 'Placement_BP_C_Place_Meshes::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Place_Meshes, CallFunc_AddComponent_ReturnValue) == 0x0000E8, "Member 'Placement_BP_C_Place_Meshes::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Place_Meshes, CallFunc_SelectRotator_ReturnValue) == 0x0000F0, "Member 'Placement_BP_C_Place_Meshes::CallFunc_SelectRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Place_Meshes, CallFunc_SelectRotator_ReturnValue_1) == 0x000108, "Member 'Placement_BP_C_Place_Meshes::CallFunc_SelectRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Place_Meshes, CallFunc_SetStaticMesh_ReturnValue) == 0x000120, "Member 'Placement_BP_C_Place_Meshes::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Place_Meshes, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x000128, "Member 'Placement_BP_C_Place_Meshes::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Place_Meshes, CallFunc_AddComponent_ReturnValue_1) == 0x000210, "Member 'Placement_BP_C_Place_Meshes::CallFunc_AddComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Place_Meshes, CallFunc_K2_SetWorldRotation_SweepHitResult_1) == 0x000218, "Member 'Placement_BP_C_Place_Meshes::CallFunc_K2_SetWorldRotation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Place_Meshes, CallFunc_SetStaticMesh_ReturnValue_1) == 0x000300, "Member 'Placement_BP_C_Place_Meshes::CallFunc_SetStaticMesh_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Place_Meshes, CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast) == 0x000304, "Member 'Placement_BP_C_Place_Meshes::CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_Place_Meshes, CallFunc_GetRotationAtDistanceAlongSpline_Distance_ImplicitCast) == 0x000308, "Member 'Placement_BP_C_Place_Meshes::CallFunc_GetRotationAtDistanceAlongSpline_Distance_ImplicitCast' has a wrong offset!");

// Function Placement_BP.Placement_BP_C.UserConstructionScript
// 0x0048 (0x0048 - 0x0000)
struct Placement_BP_C_UserConstructionScript final
{
public:
	float                                         CallFunc_GetSplineLength_ReturnValue;              // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BAB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_FMod_Remainder;                           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FMod_ReturnValue;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BAC[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BAD[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSplineLength_ReturnValue_1;            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BAE[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMod_Dividend_ImplicitCast;               // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Placement_BP_C_UserConstructionScript) == 0x000008, "Wrong alignment on Placement_BP_C_UserConstructionScript");
static_assert(sizeof(Placement_BP_C_UserConstructionScript) == 0x000048, "Wrong size on Placement_BP_C_UserConstructionScript");
static_assert(offsetof(Placement_BP_C_UserConstructionScript, CallFunc_GetSplineLength_ReturnValue) == 0x000000, "Member 'Placement_BP_C_UserConstructionScript::CallFunc_GetSplineLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_UserConstructionScript, CallFunc_FMod_Remainder) == 0x000008, "Member 'Placement_BP_C_UserConstructionScript::CallFunc_FMod_Remainder' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_UserConstructionScript, CallFunc_FMod_ReturnValue) == 0x000010, "Member 'Placement_BP_C_UserConstructionScript::CallFunc_FMod_ReturnValue' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_UserConstructionScript, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000014, "Member 'Placement_BP_C_UserConstructionScript::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_UserConstructionScript, CallFunc_Subtract_IntInt_ReturnValue) == 0x000018, "Member 'Placement_BP_C_UserConstructionScript::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_UserConstructionScript, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000020, "Member 'Placement_BP_C_UserConstructionScript::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_UserConstructionScript, CallFunc_GetSplineLength_ReturnValue_1) == 0x000028, "Member 'Placement_BP_C_UserConstructionScript::CallFunc_GetSplineLength_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_UserConstructionScript, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000030, "Member 'Placement_BP_C_UserConstructionScript::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_UserConstructionScript, CallFunc_FMod_Dividend_ImplicitCast) == 0x000038, "Member 'Placement_BP_C_UserConstructionScript::CallFunc_FMod_Dividend_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Placement_BP_C_UserConstructionScript, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000040, "Member 'Placement_BP_C_UserConstructionScript::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");

}

