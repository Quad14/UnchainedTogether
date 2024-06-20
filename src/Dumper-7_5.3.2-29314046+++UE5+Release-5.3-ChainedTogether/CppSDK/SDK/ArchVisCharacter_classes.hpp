#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ArchVisCharacter

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class ArchVisCharacter.ArchVisCharacter
// 0x0060 (0x06E0 - 0x0680)
class AArchVisCharacter final : public ACharacter
{
public:
	class FString                                 LookUpAxisName;                                    // 0x0678(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 LookUpAtRateAxisName;                              // 0x0688(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 TurnAxisName;                                      // 0x0698(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 TurnAtRateAxisName;                                // 0x06A8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 MoveForwardAxisName;                               // 0x06B8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 MoveRightAxisName;                                 // 0x06C8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MouseSensitivityScale_Pitch;                       // 0x06D8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MouseSensitivityScale_Yaw;                         // 0x06DC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ArchVisCharacter">();
	}
	static class AArchVisCharacter* GetDefaultObj()
	{
		return GetDefaultObjImpl<AArchVisCharacter>();
	}
};
static_assert(alignof(AArchVisCharacter) == 0x000010, "Wrong alignment on AArchVisCharacter");
static_assert(sizeof(AArchVisCharacter) == 0x0006E0, "Wrong size on AArchVisCharacter");
static_assert(offsetof(AArchVisCharacter, LookUpAxisName) == 0x000678, "Member 'AArchVisCharacter::LookUpAxisName' has a wrong offset!");
static_assert(offsetof(AArchVisCharacter, LookUpAtRateAxisName) == 0x000688, "Member 'AArchVisCharacter::LookUpAtRateAxisName' has a wrong offset!");
static_assert(offsetof(AArchVisCharacter, TurnAxisName) == 0x000698, "Member 'AArchVisCharacter::TurnAxisName' has a wrong offset!");
static_assert(offsetof(AArchVisCharacter, TurnAtRateAxisName) == 0x0006A8, "Member 'AArchVisCharacter::TurnAtRateAxisName' has a wrong offset!");
static_assert(offsetof(AArchVisCharacter, MoveForwardAxisName) == 0x0006B8, "Member 'AArchVisCharacter::MoveForwardAxisName' has a wrong offset!");
static_assert(offsetof(AArchVisCharacter, MoveRightAxisName) == 0x0006C8, "Member 'AArchVisCharacter::MoveRightAxisName' has a wrong offset!");
static_assert(offsetof(AArchVisCharacter, MouseSensitivityScale_Pitch) == 0x0006D8, "Member 'AArchVisCharacter::MouseSensitivityScale_Pitch' has a wrong offset!");
static_assert(offsetof(AArchVisCharacter, MouseSensitivityScale_Yaw) == 0x0006DC, "Member 'AArchVisCharacter::MouseSensitivityScale_Yaw' has a wrong offset!");

// Class ArchVisCharacter.ArchVisCharMovementComponent
// 0x0090 (0x0FE0 - 0x0F50)
class UArchVisCharMovementComponent final : public UCharacterMovementComponent
{
public:
	struct FRotator                               RotationalAcceleration;                            // 0x0F48(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                               RotationalDeceleration;                            // 0x0F60(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                               MaxRotationalVelocity;                             // 0x0F78(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                         MinPitch;                                          // 0x0F90(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxPitch;                                          // 0x0F94(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WalkingFriction;                                   // 0x0F98(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WalkingSpeed;                                      // 0x0F9C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WalkingAcceleration;                               // 0x0FA0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_298C[0x3C];                                    // 0x0FA4(0x003C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ArchVisCharMovementComponent">();
	}
	static class UArchVisCharMovementComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UArchVisCharMovementComponent>();
	}
};
static_assert(alignof(UArchVisCharMovementComponent) == 0x000010, "Wrong alignment on UArchVisCharMovementComponent");
static_assert(sizeof(UArchVisCharMovementComponent) == 0x000FE0, "Wrong size on UArchVisCharMovementComponent");
static_assert(offsetof(UArchVisCharMovementComponent, RotationalAcceleration) == 0x000F48, "Member 'UArchVisCharMovementComponent::RotationalAcceleration' has a wrong offset!");
static_assert(offsetof(UArchVisCharMovementComponent, RotationalDeceleration) == 0x000F60, "Member 'UArchVisCharMovementComponent::RotationalDeceleration' has a wrong offset!");
static_assert(offsetof(UArchVisCharMovementComponent, MaxRotationalVelocity) == 0x000F78, "Member 'UArchVisCharMovementComponent::MaxRotationalVelocity' has a wrong offset!");
static_assert(offsetof(UArchVisCharMovementComponent, MinPitch) == 0x000F90, "Member 'UArchVisCharMovementComponent::MinPitch' has a wrong offset!");
static_assert(offsetof(UArchVisCharMovementComponent, MaxPitch) == 0x000F94, "Member 'UArchVisCharMovementComponent::MaxPitch' has a wrong offset!");
static_assert(offsetof(UArchVisCharMovementComponent, WalkingFriction) == 0x000F98, "Member 'UArchVisCharMovementComponent::WalkingFriction' has a wrong offset!");
static_assert(offsetof(UArchVisCharMovementComponent, WalkingSpeed) == 0x000F9C, "Member 'UArchVisCharMovementComponent::WalkingSpeed' has a wrong offset!");
static_assert(offsetof(UArchVisCharMovementComponent, WalkingAcceleration) == 0x000FA0, "Member 'UArchVisCharMovementComponent::WalkingAcceleration' has a wrong offset!");

}

