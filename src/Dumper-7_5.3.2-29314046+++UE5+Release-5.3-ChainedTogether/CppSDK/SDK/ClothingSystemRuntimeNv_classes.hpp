#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ClothingSystemRuntimeNv

#include "Basic.hpp"

#include "ClothingSystemRuntimeInterface_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "ClothingSystemRuntimeNv_structs.hpp"
#include "ClothingSystemRuntimeCommon_structs.hpp"
#include "ClothingSystemRuntimeCommon_classes.hpp"


namespace SDK
{

// Class ClothingSystemRuntimeNv.ClothConfigNv
// 0x0178 (0x01A0 - 0x0028)
class UClothConfigNv final : public UClothConfigCommon
{
public:
	EClothingWindMethodNv                         ClothingWindMethod;                                // 0x0028(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_163B[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FClothConstraintSetupNv                VerticalConstraint;                                // 0x002C(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetupNv                HorizontalConstraint;                              // 0x003C(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetupNv                BendConstraint;                                    // 0x004C(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetupNv                ShearConstraint;                                   // 0x005C(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                         SelfCollisionRadius;                               // 0x006C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SelfCollisionStiffness;                            // 0x0070(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SelfCollisionCullScale;                            // 0x0074(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Damping;                                           // 0x0078(0x0018)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Friction;                                          // 0x0090(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WindDragCoefficient;                               // 0x0094(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WindLiftCoefficient;                               // 0x0098(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_163C[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                LinearDrag;                                        // 0x00A0(0x0018)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                AngularDrag;                                       // 0x00B8(0x0018)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                LinearInertiaScale;                                // 0x00D0(0x0018)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                AngularInertiaScale;                               // 0x00E8(0x0018)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                CentrifugalInertiaScale;                           // 0x0100(0x0018)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SolverFrequency;                                   // 0x0118(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StiffnessFrequency;                                // 0x011C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         GravityScale;                                      // 0x0120(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_163D[0x4];                                     // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                GravityOverride;                                   // 0x0128(0x0018)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseGravityOverride;                               // 0x0140(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_163E[0x3];                                     // 0x0141(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TetherStiffness;                                   // 0x0144(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TetherLimit;                                       // 0x0148(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CollisionThickness;                                // 0x014C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnimDriveSpringStiffness;                          // 0x0150(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnimDriveDamperStiffness;                          // 0x0154(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EClothingWindMethod_Legacy                    WindMethod;                                        // 0x0158(0x0001)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_163F[0x3];                                     // 0x0159(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FClothConstraintSetup_Legacy           VerticalConstraintConfig;                          // 0x015C(0x0010)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetup_Legacy           HorizontalConstraintConfig;                        // 0x016C(0x0010)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetup_Legacy           BendConstraintConfig;                              // 0x017C(0x0010)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetup_Legacy           ShearConstraintConfig;                             // 0x018C(0x0010)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1640[0x4];                                     // 0x019C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothConfigNv">();
	}
	static class UClothConfigNv* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothConfigNv>();
	}
};
static_assert(alignof(UClothConfigNv) == 0x000008, "Wrong alignment on UClothConfigNv");
static_assert(sizeof(UClothConfigNv) == 0x0001A0, "Wrong size on UClothConfigNv");
static_assert(offsetof(UClothConfigNv, ClothingWindMethod) == 0x000028, "Member 'UClothConfigNv::ClothingWindMethod' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, VerticalConstraint) == 0x00002C, "Member 'UClothConfigNv::VerticalConstraint' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, HorizontalConstraint) == 0x00003C, "Member 'UClothConfigNv::HorizontalConstraint' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, BendConstraint) == 0x00004C, "Member 'UClothConfigNv::BendConstraint' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, ShearConstraint) == 0x00005C, "Member 'UClothConfigNv::ShearConstraint' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, SelfCollisionRadius) == 0x00006C, "Member 'UClothConfigNv::SelfCollisionRadius' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, SelfCollisionStiffness) == 0x000070, "Member 'UClothConfigNv::SelfCollisionStiffness' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, SelfCollisionCullScale) == 0x000074, "Member 'UClothConfigNv::SelfCollisionCullScale' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, Damping) == 0x000078, "Member 'UClothConfigNv::Damping' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, Friction) == 0x000090, "Member 'UClothConfigNv::Friction' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, WindDragCoefficient) == 0x000094, "Member 'UClothConfigNv::WindDragCoefficient' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, WindLiftCoefficient) == 0x000098, "Member 'UClothConfigNv::WindLiftCoefficient' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, LinearDrag) == 0x0000A0, "Member 'UClothConfigNv::LinearDrag' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, AngularDrag) == 0x0000B8, "Member 'UClothConfigNv::AngularDrag' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, LinearInertiaScale) == 0x0000D0, "Member 'UClothConfigNv::LinearInertiaScale' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, AngularInertiaScale) == 0x0000E8, "Member 'UClothConfigNv::AngularInertiaScale' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, CentrifugalInertiaScale) == 0x000100, "Member 'UClothConfigNv::CentrifugalInertiaScale' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, SolverFrequency) == 0x000118, "Member 'UClothConfigNv::SolverFrequency' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, StiffnessFrequency) == 0x00011C, "Member 'UClothConfigNv::StiffnessFrequency' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, GravityScale) == 0x000120, "Member 'UClothConfigNv::GravityScale' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, GravityOverride) == 0x000128, "Member 'UClothConfigNv::GravityOverride' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, bUseGravityOverride) == 0x000140, "Member 'UClothConfigNv::bUseGravityOverride' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, TetherStiffness) == 0x000144, "Member 'UClothConfigNv::TetherStiffness' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, TetherLimit) == 0x000148, "Member 'UClothConfigNv::TetherLimit' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, CollisionThickness) == 0x00014C, "Member 'UClothConfigNv::CollisionThickness' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, AnimDriveSpringStiffness) == 0x000150, "Member 'UClothConfigNv::AnimDriveSpringStiffness' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, AnimDriveDamperStiffness) == 0x000154, "Member 'UClothConfigNv::AnimDriveDamperStiffness' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, WindMethod) == 0x000158, "Member 'UClothConfigNv::WindMethod' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, VerticalConstraintConfig) == 0x00015C, "Member 'UClothConfigNv::VerticalConstraintConfig' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, HorizontalConstraintConfig) == 0x00016C, "Member 'UClothConfigNv::HorizontalConstraintConfig' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, BendConstraintConfig) == 0x00017C, "Member 'UClothConfigNv::BendConstraintConfig' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, ShearConstraintConfig) == 0x00018C, "Member 'UClothConfigNv::ShearConstraintConfig' has a wrong offset!");

// Class ClothingSystemRuntimeNv.ClothingSimulationFactoryNv
// 0x0000 (0x0028 - 0x0028)
class UClothingSimulationFactoryNv final : public UClothingSimulationFactory
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothingSimulationFactoryNv">();
	}
	static class UClothingSimulationFactoryNv* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothingSimulationFactoryNv>();
	}
};
static_assert(alignof(UClothingSimulationFactoryNv) == 0x000008, "Wrong alignment on UClothingSimulationFactoryNv");
static_assert(sizeof(UClothingSimulationFactoryNv) == 0x000028, "Wrong size on UClothingSimulationFactoryNv");

// Class ClothingSystemRuntimeNv.ClothingSimulationInteractorNv
// 0x0000 (0x0090 - 0x0090)
class UClothingSimulationInteractorNv final : public UClothingSimulationInteractor
{
public:
	void SetAnimDriveDamperStiffness(float InStiffness);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothingSimulationInteractorNv">();
	}
	static class UClothingSimulationInteractorNv* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothingSimulationInteractorNv>();
	}
};
static_assert(alignof(UClothingSimulationInteractorNv) == 0x000008, "Wrong alignment on UClothingSimulationInteractorNv");
static_assert(sizeof(UClothingSimulationInteractorNv) == 0x000090, "Wrong size on UClothingSimulationInteractorNv");

// Class ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy
// 0x0040 (0x0120 - 0x00E0)
class UClothPhysicalMeshDataNv_Legacy final : public UClothPhysicalMeshDataBase_Legacy
{
public:
	TArray<float>                                 MaxDistances;                                      // 0x00E0(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 BackstopDistances;                                 // 0x00F0(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 BackstopRadiuses;                                  // 0x0100(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 AnimDriveMultipliers;                              // 0x0110(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothPhysicalMeshDataNv_Legacy">();
	}
	static class UClothPhysicalMeshDataNv_Legacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothPhysicalMeshDataNv_Legacy>();
	}
};
static_assert(alignof(UClothPhysicalMeshDataNv_Legacy) == 0x000008, "Wrong alignment on UClothPhysicalMeshDataNv_Legacy");
static_assert(sizeof(UClothPhysicalMeshDataNv_Legacy) == 0x000120, "Wrong size on UClothPhysicalMeshDataNv_Legacy");
static_assert(offsetof(UClothPhysicalMeshDataNv_Legacy, MaxDistances) == 0x0000E0, "Member 'UClothPhysicalMeshDataNv_Legacy::MaxDistances' has a wrong offset!");
static_assert(offsetof(UClothPhysicalMeshDataNv_Legacy, BackstopDistances) == 0x0000F0, "Member 'UClothPhysicalMeshDataNv_Legacy::BackstopDistances' has a wrong offset!");
static_assert(offsetof(UClothPhysicalMeshDataNv_Legacy, BackstopRadiuses) == 0x000100, "Member 'UClothPhysicalMeshDataNv_Legacy::BackstopRadiuses' has a wrong offset!");
static_assert(offsetof(UClothPhysicalMeshDataNv_Legacy, AnimDriveMultipliers) == 0x000110, "Member 'UClothPhysicalMeshDataNv_Legacy::AnimDriveMultipliers' has a wrong offset!");

}

