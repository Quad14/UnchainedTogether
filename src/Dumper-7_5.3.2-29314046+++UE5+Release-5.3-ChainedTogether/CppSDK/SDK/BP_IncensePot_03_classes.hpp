#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_IncensePot_03

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_IncensePot_03.BP_IncensePot_03_C
// 0x0058 (0x02F0 - 0x0298)
class ABP_IncensePot_03_C final : public AActor
{
public:
	class UAudioComponent*                        Fire_Sound;                                        // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Stone01_02;                                     // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Stone01_01;                                     // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Stone01_05;                                     // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Stone01_04;                                     // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Stone01_03;                                     // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Fire;                                            // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Pot02_01;                                       // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Fire_Enable;                                       // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_IncensePot_03_C">();
	}
	static class ABP_IncensePot_03_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_IncensePot_03_C>();
	}
};
static_assert(alignof(ABP_IncensePot_03_C) == 0x000008, "Wrong alignment on ABP_IncensePot_03_C");
static_assert(sizeof(ABP_IncensePot_03_C) == 0x0002F0, "Wrong size on ABP_IncensePot_03_C");
static_assert(offsetof(ABP_IncensePot_03_C, Fire_Sound) == 0x000298, "Member 'ABP_IncensePot_03_C::Fire_Sound' has a wrong offset!");
static_assert(offsetof(ABP_IncensePot_03_C, SM_Stone01_02) == 0x0002A0, "Member 'ABP_IncensePot_03_C::SM_Stone01_02' has a wrong offset!");
static_assert(offsetof(ABP_IncensePot_03_C, SM_Stone01_01) == 0x0002A8, "Member 'ABP_IncensePot_03_C::SM_Stone01_01' has a wrong offset!");
static_assert(offsetof(ABP_IncensePot_03_C, SM_Stone01_05) == 0x0002B0, "Member 'ABP_IncensePot_03_C::SM_Stone01_05' has a wrong offset!");
static_assert(offsetof(ABP_IncensePot_03_C, SM_Stone01_04) == 0x0002B8, "Member 'ABP_IncensePot_03_C::SM_Stone01_04' has a wrong offset!");
static_assert(offsetof(ABP_IncensePot_03_C, SM_Stone01_03) == 0x0002C0, "Member 'ABP_IncensePot_03_C::SM_Stone01_03' has a wrong offset!");
static_assert(offsetof(ABP_IncensePot_03_C, P_Fire) == 0x0002C8, "Member 'ABP_IncensePot_03_C::P_Fire' has a wrong offset!");
static_assert(offsetof(ABP_IncensePot_03_C, PointLight) == 0x0002D0, "Member 'ABP_IncensePot_03_C::PointLight' has a wrong offset!");
static_assert(offsetof(ABP_IncensePot_03_C, SM_Pot02_01) == 0x0002D8, "Member 'ABP_IncensePot_03_C::SM_Pot02_01' has a wrong offset!");
static_assert(offsetof(ABP_IncensePot_03_C, DefaultSceneRoot) == 0x0002E0, "Member 'ABP_IncensePot_03_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_IncensePot_03_C, Fire_Enable) == 0x0002E8, "Member 'ABP_IncensePot_03_C::Fire_Enable' has a wrong offset!");

}

