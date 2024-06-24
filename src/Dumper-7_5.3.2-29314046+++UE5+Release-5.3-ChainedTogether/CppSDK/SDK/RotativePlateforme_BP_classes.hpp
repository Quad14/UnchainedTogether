#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RotativePlateforme_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass RotativePlateforme_BP.RotativePlateforme_BP_C
// 0x0050 (0x02E8 - 0x0298)
class ARotativePlateforme_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Audio;                                             // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UC_TickOptimizer_C*                     C_TickOptimizer;                                   // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   RotativePlateforme;                                // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          A;                                                 // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_3AAE[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               NewVar_0;                                          // 0x02C8(0x0018)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	double                                        Speed;                                             // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void CustomEvent_0();
	void ExecuteUbergraph_RotativePlateforme_BP(int32 EntryPoint);
	void OnRep_NewVar_0();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RotativePlateforme_BP_C">();
	}
	static class ARotativePlateforme_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARotativePlateforme_BP_C>();
	}
};
static_assert(alignof(ARotativePlateforme_BP_C) == 0x000008, "Wrong alignment on ARotativePlateforme_BP_C");
static_assert(sizeof(ARotativePlateforme_BP_C) == 0x0002E8, "Wrong size on ARotativePlateforme_BP_C");
static_assert(offsetof(ARotativePlateforme_BP_C, UberGraphFrame) == 0x000298, "Member 'ARotativePlateforme_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ARotativePlateforme_BP_C, Audio) == 0x0002A0, "Member 'ARotativePlateforme_BP_C::Audio' has a wrong offset!");
static_assert(offsetof(ARotativePlateforme_BP_C, C_TickOptimizer) == 0x0002A8, "Member 'ARotativePlateforme_BP_C::C_TickOptimizer' has a wrong offset!");
static_assert(offsetof(ARotativePlateforme_BP_C, RotativePlateforme) == 0x0002B0, "Member 'ARotativePlateforme_BP_C::RotativePlateforme' has a wrong offset!");
static_assert(offsetof(ARotativePlateforme_BP_C, DefaultSceneRoot) == 0x0002B8, "Member 'ARotativePlateforme_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ARotativePlateforme_BP_C, A) == 0x0002C0, "Member 'ARotativePlateforme_BP_C::A' has a wrong offset!");
static_assert(offsetof(ARotativePlateforme_BP_C, NewVar_0) == 0x0002C8, "Member 'ARotativePlateforme_BP_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(ARotativePlateforme_BP_C, Speed) == 0x0002E0, "Member 'ARotativePlateforme_BP_C::Speed' has a wrong offset!");

}

