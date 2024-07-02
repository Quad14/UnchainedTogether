#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: bp_neon_light_a_01MinusON1

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass bp_neon_light_a_01-ON1.bp_neon_light_a_01-ON1_C
// 0x0048 (0x02E0 - 0x0298)
class Abp_neon_light_a_01MinusON1_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                   PointLight;                                        // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UC_TickOptimizer_C*                     C_TickOptimizer;                                   // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Neon_light_a_01;                                   // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_688CBE0C43309A9E405BAB974B5B546D; // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_688CBE0C43309A9E405BAB974B5B546D; // 0x02BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37B1[0x3];                                     // 0x02BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 NewVar_0;                                          // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_37B2[0x4];                                     // 0x02CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Intensity;                                         // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               NewVar_1;                                          // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_bp_neon_light_a_01MinusON1(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"bp_neon_light_a_01-ON1_C">();
	}
	static class Abp_neon_light_a_01MinusON1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<Abp_neon_light_a_01MinusON1_C>();
	}
};
static_assert(alignof(Abp_neon_light_a_01MinusON1_C) == 0x000008, "Wrong alignment on Abp_neon_light_a_01MinusON1_C");
static_assert(sizeof(Abp_neon_light_a_01MinusON1_C) == 0x0002E0, "Wrong size on Abp_neon_light_a_01MinusON1_C");
static_assert(offsetof(Abp_neon_light_a_01MinusON1_C, UberGraphFrame) == 0x000298, "Member 'Abp_neon_light_a_01MinusON1_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(Abp_neon_light_a_01MinusON1_C, PointLight) == 0x0002A0, "Member 'Abp_neon_light_a_01MinusON1_C::PointLight' has a wrong offset!");
static_assert(offsetof(Abp_neon_light_a_01MinusON1_C, C_TickOptimizer) == 0x0002A8, "Member 'Abp_neon_light_a_01MinusON1_C::C_TickOptimizer' has a wrong offset!");
static_assert(offsetof(Abp_neon_light_a_01MinusON1_C, Neon_light_a_01) == 0x0002B0, "Member 'Abp_neon_light_a_01MinusON1_C::Neon_light_a_01' has a wrong offset!");
static_assert(offsetof(Abp_neon_light_a_01MinusON1_C, Timeline_0_NewTrack_0_688CBE0C43309A9E405BAB974B5B546D) == 0x0002B8, "Member 'Abp_neon_light_a_01MinusON1_C::Timeline_0_NewTrack_0_688CBE0C43309A9E405BAB974B5B546D' has a wrong offset!");
static_assert(offsetof(Abp_neon_light_a_01MinusON1_C, Timeline_0__Direction_688CBE0C43309A9E405BAB974B5B546D) == 0x0002BC, "Member 'Abp_neon_light_a_01MinusON1_C::Timeline_0__Direction_688CBE0C43309A9E405BAB974B5B546D' has a wrong offset!");
static_assert(offsetof(Abp_neon_light_a_01MinusON1_C, Timeline_0) == 0x0002C0, "Member 'Abp_neon_light_a_01MinusON1_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(Abp_neon_light_a_01MinusON1_C, NewVar_0) == 0x0002C8, "Member 'Abp_neon_light_a_01MinusON1_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(Abp_neon_light_a_01MinusON1_C, Intensity) == 0x0002D0, "Member 'Abp_neon_light_a_01MinusON1_C::Intensity' has a wrong offset!");
static_assert(offsetof(Abp_neon_light_a_01MinusON1_C, NewVar_1) == 0x0002D8, "Member 'Abp_neon_light_a_01MinusON1_C::NewVar_1' has a wrong offset!");

}

