#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Big_Bridge_Jonction_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "BridgeType_structs.hpp"
#include "ConnectorsNum_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Big_Bridge_Jonction_BP.Big_Bridge_Jonction_BP_C
// 0x00E0 (0x0378 - 0x0298)
class ABig_Bridge_Jonction_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USplineComponent*                       Spline;                                            // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   Con_2;                                             // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   Con_1;                                             // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Road_To_Connect;                                   // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	EBridgeType                                   Select_Bridge_Type;                                // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConnectorsNum                                Choose_Connector;                                  // 0x02D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Con_Text_Visibility;                               // 0x02D2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Connect_Road_At_Con_Location;                      // 0x02D3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Move_Road_At_Con_Location;                         // 0x02D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CE6[0x3];                                     // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Splines_Index_To_Connect;                          // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CE7[0x4];                                     // 0x02DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Trace_Radius;                                      // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Con_1_Location;                                    // 0x02E8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Can_2_Location;                                    // 0x0300(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARoad_BP_C*                             HitActor;                                          // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Con_1_Rot;                                         // 0x0320(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               Con_2_Rot;                                         // 0x0338(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	double                                        Spline_Tangent_Lenght_At_Con_Location;             // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALandscapeProxy*                        Landscape;                                         // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	double                                        Side_Falloff;                                      // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Number_of_Subdivisions_to_be_added;                // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Raise_Terrain;                                     // 0x036C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Lower_Terrain;                                     // 0x036D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CE8[0x2];                                     // 0x036E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Layer_To_Apply;                                    // 0x0370(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Perform_Landscape_Adjustation;                     // 0x0374(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Add_Road_At_End();
	void Add_Road_At_End_();
	void Connect_Road_To_(const struct FVector& Location, const struct FRotator& Con_Rotation);
	void ExecuteUbergraph_Big_Bridge_Jonction_BP(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Set_Road_Location(const struct FVector& Location, class AActor* Param_HitActor, const struct FRotator& Rotation);
	void Spawn_Road_At_this_Con();
	void Spawn_Road_At_this_Con_();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Big_Bridge_Jonction_BP_C">();
	}
	static class ABig_Bridge_Jonction_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABig_Bridge_Jonction_BP_C>();
	}
};
static_assert(alignof(ABig_Bridge_Jonction_BP_C) == 0x000008, "Wrong alignment on ABig_Bridge_Jonction_BP_C");
static_assert(sizeof(ABig_Bridge_Jonction_BP_C) == 0x000378, "Wrong size on ABig_Bridge_Jonction_BP_C");
static_assert(offsetof(ABig_Bridge_Jonction_BP_C, UberGraphFrame) == 0x000298, "Member 'ABig_Bridge_Jonction_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABig_Bridge_Jonction_BP_C, Spline) == 0x0002A0, "Member 'ABig_Bridge_Jonction_BP_C::Spline' has a wrong offset!");
static_assert(offsetof(ABig_Bridge_Jonction_BP_C, Con_2) == 0x0002A8, "Member 'ABig_Bridge_Jonction_BP_C::Con_2' has a wrong offset!");
static_assert(offsetof(ABig_Bridge_Jonction_BP_C, Con_1) == 0x0002B0, "Member 'ABig_Bridge_Jonction_BP_C::Con_1' has a wrong offset!");
static_assert(offsetof(ABig_Bridge_Jonction_BP_C, StaticMesh) == 0x0002B8, "Member 'ABig_Bridge_Jonction_BP_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABig_Bridge_Jonction_BP_C, DefaultSceneRoot) == 0x0002C0, "Member 'ABig_Bridge_Jonction_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABig_Bridge_Jonction_BP_C, Road_To_Connect) == 0x0002C8, "Member 'ABig_Bridge_Jonction_BP_C::Road_To_Connect' has a wrong offset!");
static_assert(offsetof(ABig_Bridge_Jonction_BP_C, Select_Bridge_Type) == 0x0002D0, "Member 'ABig_Bridge_Jonction_BP_C::Select_Bridge_Type' has a wrong offset!");
static_assert(offsetof(ABig_Bridge_Jonction_BP_C, Choose_Connector) == 0x0002D1, "Member 'ABig_Bridge_Jonction_BP_C::Choose_Connector' has a wrong offset!");
static_assert(offsetof(ABig_Bridge_Jonction_BP_C, Con_Text_Visibility) == 0x0002D2, "Member 'ABig_Bridge_Jonction_BP_C::Con_Text_Visibility' has a wrong offset!");
static_assert(offsetof(ABig_Bridge_Jonction_BP_C, Connect_Road_At_Con_Location) == 0x0002D3, "Member 'ABig_Bridge_Jonction_BP_C::Connect_Road_At_Con_Location' has a wrong offset!");
static_assert(offsetof(ABig_Bridge_Jonction_BP_C, Move_Road_At_Con_Location) == 0x0002D4, "Member 'ABig_Bridge_Jonction_BP_C::Move_Road_At_Con_Location' has a wrong offset!");
static_assert(offsetof(ABig_Bridge_Jonction_BP_C, Splines_Index_To_Connect) == 0x0002D8, "Member 'ABig_Bridge_Jonction_BP_C::Splines_Index_To_Connect' has a wrong offset!");
static_assert(offsetof(ABig_Bridge_Jonction_BP_C, Trace_Radius) == 0x0002E0, "Member 'ABig_Bridge_Jonction_BP_C::Trace_Radius' has a wrong offset!");
static_assert(offsetof(ABig_Bridge_Jonction_BP_C, Con_1_Location) == 0x0002E8, "Member 'ABig_Bridge_Jonction_BP_C::Con_1_Location' has a wrong offset!");
static_assert(offsetof(ABig_Bridge_Jonction_BP_C, Can_2_Location) == 0x000300, "Member 'ABig_Bridge_Jonction_BP_C::Can_2_Location' has a wrong offset!");
static_assert(offsetof(ABig_Bridge_Jonction_BP_C, HitActor) == 0x000318, "Member 'ABig_Bridge_Jonction_BP_C::HitActor' has a wrong offset!");
static_assert(offsetof(ABig_Bridge_Jonction_BP_C, Con_1_Rot) == 0x000320, "Member 'ABig_Bridge_Jonction_BP_C::Con_1_Rot' has a wrong offset!");
static_assert(offsetof(ABig_Bridge_Jonction_BP_C, Con_2_Rot) == 0x000338, "Member 'ABig_Bridge_Jonction_BP_C::Con_2_Rot' has a wrong offset!");
static_assert(offsetof(ABig_Bridge_Jonction_BP_C, Spline_Tangent_Lenght_At_Con_Location) == 0x000350, "Member 'ABig_Bridge_Jonction_BP_C::Spline_Tangent_Lenght_At_Con_Location' has a wrong offset!");
static_assert(offsetof(ABig_Bridge_Jonction_BP_C, Landscape) == 0x000358, "Member 'ABig_Bridge_Jonction_BP_C::Landscape' has a wrong offset!");
static_assert(offsetof(ABig_Bridge_Jonction_BP_C, Side_Falloff) == 0x000360, "Member 'ABig_Bridge_Jonction_BP_C::Side_Falloff' has a wrong offset!");
static_assert(offsetof(ABig_Bridge_Jonction_BP_C, Number_of_Subdivisions_to_be_added) == 0x000368, "Member 'ABig_Bridge_Jonction_BP_C::Number_of_Subdivisions_to_be_added' has a wrong offset!");
static_assert(offsetof(ABig_Bridge_Jonction_BP_C, Raise_Terrain) == 0x00036C, "Member 'ABig_Bridge_Jonction_BP_C::Raise_Terrain' has a wrong offset!");
static_assert(offsetof(ABig_Bridge_Jonction_BP_C, Lower_Terrain) == 0x00036D, "Member 'ABig_Bridge_Jonction_BP_C::Lower_Terrain' has a wrong offset!");
static_assert(offsetof(ABig_Bridge_Jonction_BP_C, Layer_To_Apply) == 0x000370, "Member 'ABig_Bridge_Jonction_BP_C::Layer_To_Apply' has a wrong offset!");
static_assert(offsetof(ABig_Bridge_Jonction_BP_C, Perform_Landscape_Adjustation) == 0x000374, "Member 'ABig_Bridge_Jonction_BP_C::Perform_Landscape_Adjustation' has a wrong offset!");

}

