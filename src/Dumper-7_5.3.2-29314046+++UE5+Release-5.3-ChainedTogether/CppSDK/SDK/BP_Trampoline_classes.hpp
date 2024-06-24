#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Trampoline

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Trampoline.BP_Trampoline_C
// 0x0030 (0x02C8 - 0x0298)
class ABP_Trampoline_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Mesh;                                              // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        ImpulseForce;                                      // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          JustZ;                                             // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Trampoline(int32 EntryPoint);
	void GetBounceForce(double* Force);
	void JustZImpulse(bool* Param_JustZ);
	void SpawnTrampolineSound();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Trampoline_C">();
	}
	static class ABP_Trampoline_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Trampoline_C>();
	}
};
static_assert(alignof(ABP_Trampoline_C) == 0x000008, "Wrong alignment on ABP_Trampoline_C");
static_assert(sizeof(ABP_Trampoline_C) == 0x0002C8, "Wrong size on ABP_Trampoline_C");
static_assert(offsetof(ABP_Trampoline_C, UberGraphFrame) == 0x000298, "Member 'ABP_Trampoline_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Trampoline_C, StaticMesh) == 0x0002A0, "Member 'ABP_Trampoline_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_Trampoline_C, DefaultSceneRoot) == 0x0002A8, "Member 'ABP_Trampoline_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Trampoline_C, Mesh) == 0x0002B0, "Member 'ABP_Trampoline_C::Mesh' has a wrong offset!");
static_assert(offsetof(ABP_Trampoline_C, ImpulseForce) == 0x0002B8, "Member 'ABP_Trampoline_C::ImpulseForce' has a wrong offset!");
static_assert(offsetof(ABP_Trampoline_C, JustZ) == 0x0002C0, "Member 'ABP_Trampoline_C::JustZ' has a wrong offset!");

}

