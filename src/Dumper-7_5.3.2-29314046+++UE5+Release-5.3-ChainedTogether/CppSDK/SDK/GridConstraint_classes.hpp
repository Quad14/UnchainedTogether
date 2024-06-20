#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GridConstraint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GridConstraint.GridConstraint_C
// 0x0018 (0x02D0 - 0x02B8)
class AGridConstraint_C final : public APhysicsConstraintActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Cube;                                              // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    Capsule;                                           // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GridConstraint(int32 EntryPoint);
	void OnJump();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetContrainedComps(class UPrimitiveComponent* Comp1, class UPrimitiveComponent* Comp2);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GridConstraint_C">();
	}
	static class AGridConstraint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGridConstraint_C>();
	}
};
static_assert(alignof(AGridConstraint_C) == 0x000008, "Wrong alignment on AGridConstraint_C");
static_assert(sizeof(AGridConstraint_C) == 0x0002D0, "Wrong size on AGridConstraint_C");
static_assert(offsetof(AGridConstraint_C, UberGraphFrame) == 0x0002B8, "Member 'AGridConstraint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGridConstraint_C, Cube) == 0x0002C0, "Member 'AGridConstraint_C::Cube' has a wrong offset!");
static_assert(offsetof(AGridConstraint_C, Capsule) == 0x0002C8, "Member 'AGridConstraint_C::Capsule' has a wrong offset!");

}

