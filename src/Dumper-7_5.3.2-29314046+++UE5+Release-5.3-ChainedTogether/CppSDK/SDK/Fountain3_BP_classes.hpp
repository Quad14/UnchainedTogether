#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Fountain3_BP

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass fountain3_BP.fountain3_BP_C
// 0x0018 (0x02B0 - 0x0298)
class AFountain3_BP_C final : public AActor
{
public:
	class UParticleSystemComponent*               Fountain3_ParticleSystemComponent0;                // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Fountain4_StaticMeshComponent0;                    // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        SharedRoot;                                        // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"fountain3_BP_C">();
	}
	static class AFountain3_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFountain3_BP_C>();
	}
};
static_assert(alignof(AFountain3_BP_C) == 0x000008, "Wrong alignment on AFountain3_BP_C");
static_assert(sizeof(AFountain3_BP_C) == 0x0002B0, "Wrong size on AFountain3_BP_C");
static_assert(offsetof(AFountain3_BP_C, Fountain3_ParticleSystemComponent0) == 0x000298, "Member 'AFountain3_BP_C::Fountain3_ParticleSystemComponent0' has a wrong offset!");
static_assert(offsetof(AFountain3_BP_C, Fountain4_StaticMeshComponent0) == 0x0002A0, "Member 'AFountain3_BP_C::Fountain4_StaticMeshComponent0' has a wrong offset!");
static_assert(offsetof(AFountain3_BP_C, SharedRoot) == 0x0002A8, "Member 'AFountain3_BP_C::SharedRoot' has a wrong offset!");

}

