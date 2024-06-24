#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LightScene

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LightScene.BP_LightScene_C
// 0x0018 (0x02B0 - 0x0298)
class ABP_LightScene_C final : public AActor
{
public:
	class USpotLightComponent*                    SpotLight;                                         // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        Light_Intensity;                                   // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LightScene_C">();
	}
	static class ABP_LightScene_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LightScene_C>();
	}
};
static_assert(alignof(ABP_LightScene_C) == 0x000008, "Wrong alignment on ABP_LightScene_C");
static_assert(sizeof(ABP_LightScene_C) == 0x0002B0, "Wrong size on ABP_LightScene_C");
static_assert(offsetof(ABP_LightScene_C, SpotLight) == 0x000298, "Member 'ABP_LightScene_C::SpotLight' has a wrong offset!");
static_assert(offsetof(ABP_LightScene_C, DefaultSceneRoot) == 0x0002A0, "Member 'ABP_LightScene_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_LightScene_C, Light_Intensity) == 0x0002A8, "Member 'ABP_LightScene_C::Light_Intensity' has a wrong offset!");

}

