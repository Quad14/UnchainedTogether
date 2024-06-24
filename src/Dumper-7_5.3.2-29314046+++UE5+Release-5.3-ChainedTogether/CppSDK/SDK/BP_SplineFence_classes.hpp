#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SplineFence

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SplineFence.BP_SplineFence_C
// 0x0080 (0x0318 - 0x0298)
class ABP_SplineFence_C final : public AActor
{
public:
	class USplineComponent*                       Spline;                                            // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Pole_Mesh;                                         // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Rib_Mesh;                                          // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Connector_Mesh;                                    // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        ConnectionLength;                                  // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        Ribs_Locations;                                    // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FRotator>                       Ribs_Rotations;                                    // 0x02D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        Bottom_Connection_Up_Position;                     // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Top_Connection_Up_Position;                        // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Spline_Ribs_Count;                                 // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Corner_Rib_Step;                                   // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Seed;                                              // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NextSeed;                                          // 0x0304(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Disorder;                                          // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Rotator_Direction;                                 // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BuildFence();
	void CalculatePolesAndRibsTransforms();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SplineFence_C">();
	}
	static class ABP_SplineFence_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SplineFence_C>();
	}
};
static_assert(alignof(ABP_SplineFence_C) == 0x000008, "Wrong alignment on ABP_SplineFence_C");
static_assert(sizeof(ABP_SplineFence_C) == 0x000318, "Wrong size on ABP_SplineFence_C");
static_assert(offsetof(ABP_SplineFence_C, Spline) == 0x000298, "Member 'ABP_SplineFence_C::Spline' has a wrong offset!");
static_assert(offsetof(ABP_SplineFence_C, DefaultSceneRoot) == 0x0002A0, "Member 'ABP_SplineFence_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_SplineFence_C, Pole_Mesh) == 0x0002A8, "Member 'ABP_SplineFence_C::Pole_Mesh' has a wrong offset!");
static_assert(offsetof(ABP_SplineFence_C, Rib_Mesh) == 0x0002B0, "Member 'ABP_SplineFence_C::Rib_Mesh' has a wrong offset!");
static_assert(offsetof(ABP_SplineFence_C, Connector_Mesh) == 0x0002B8, "Member 'ABP_SplineFence_C::Connector_Mesh' has a wrong offset!");
static_assert(offsetof(ABP_SplineFence_C, ConnectionLength) == 0x0002C0, "Member 'ABP_SplineFence_C::ConnectionLength' has a wrong offset!");
static_assert(offsetof(ABP_SplineFence_C, Ribs_Locations) == 0x0002C8, "Member 'ABP_SplineFence_C::Ribs_Locations' has a wrong offset!");
static_assert(offsetof(ABP_SplineFence_C, Ribs_Rotations) == 0x0002D8, "Member 'ABP_SplineFence_C::Ribs_Rotations' has a wrong offset!");
static_assert(offsetof(ABP_SplineFence_C, Bottom_Connection_Up_Position) == 0x0002E8, "Member 'ABP_SplineFence_C::Bottom_Connection_Up_Position' has a wrong offset!");
static_assert(offsetof(ABP_SplineFence_C, Top_Connection_Up_Position) == 0x0002F0, "Member 'ABP_SplineFence_C::Top_Connection_Up_Position' has a wrong offset!");
static_assert(offsetof(ABP_SplineFence_C, Spline_Ribs_Count) == 0x0002F8, "Member 'ABP_SplineFence_C::Spline_Ribs_Count' has a wrong offset!");
static_assert(offsetof(ABP_SplineFence_C, Corner_Rib_Step) == 0x0002FC, "Member 'ABP_SplineFence_C::Corner_Rib_Step' has a wrong offset!");
static_assert(offsetof(ABP_SplineFence_C, Seed) == 0x000300, "Member 'ABP_SplineFence_C::Seed' has a wrong offset!");
static_assert(offsetof(ABP_SplineFence_C, NextSeed) == 0x000304, "Member 'ABP_SplineFence_C::NextSeed' has a wrong offset!");
static_assert(offsetof(ABP_SplineFence_C, Disorder) == 0x000308, "Member 'ABP_SplineFence_C::Disorder' has a wrong offset!");
static_assert(offsetof(ABP_SplineFence_C, Rotator_Direction) == 0x000310, "Member 'ABP_SplineFence_C::Rotator_Direction' has a wrong offset!");

}

