#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Bp_lamps

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Bp_lamps.Bp_lamps_C
// 0x0018 (0x02B0 - 0x0298)
class ABp_lamps_C final : public AActor
{
public:
	class USplineComponent*                       Spline;                                            // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        Length;                                            // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Bp_lamps_C">();
	}
	static class ABp_lamps_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABp_lamps_C>();
	}
};
static_assert(alignof(ABp_lamps_C) == 0x000008, "Wrong alignment on ABp_lamps_C");
static_assert(sizeof(ABp_lamps_C) == 0x0002B0, "Wrong size on ABp_lamps_C");
static_assert(offsetof(ABp_lamps_C, Spline) == 0x000298, "Member 'ABp_lamps_C::Spline' has a wrong offset!");
static_assert(offsetof(ABp_lamps_C, DefaultSceneRoot) == 0x0002A0, "Member 'ABp_lamps_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABp_lamps_C, Length) == 0x0002A8, "Member 'ABp_lamps_C::Length' has a wrong offset!");

}

