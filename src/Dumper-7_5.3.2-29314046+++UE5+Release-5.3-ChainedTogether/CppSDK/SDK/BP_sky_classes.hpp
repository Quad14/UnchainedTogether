#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_sky

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_sky.BP_sky_C
// 0x0010 (0x02A8 - 0x0298)
class ABP_sky_C final : public AActor
{
public:
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_sky_C">();
	}
	static class ABP_sky_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_sky_C>();
	}
};
static_assert(alignof(ABP_sky_C) == 0x000008, "Wrong alignment on ABP_sky_C");
static_assert(sizeof(ABP_sky_C) == 0x0002A8, "Wrong size on ABP_sky_C");
static_assert(offsetof(ABP_sky_C, StaticMesh) == 0x000298, "Member 'ABP_sky_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_sky_C, DefaultSceneRoot) == 0x0002A0, "Member 'ABP_sky_C::DefaultSceneRoot' has a wrong offset!");

}

