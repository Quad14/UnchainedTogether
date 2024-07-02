#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CosmeticChain

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CosmeticChain.BP_CosmeticChain_C
// 0x00B8 (0x0350 - 0x0298)
class ABP_CosmeticChain_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Sphere1;                                           // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         ResyncTL_NewTrack_0_2BA6D6194ADC651C8EE963A6E953E128; // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            ResyncTL__Direction_2BA6D6194ADC651C8EE963A6E953E128; // 0x02BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1736[0x3];                                     // 0x02BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     ResyncTL;                                          // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_6D6D31CD46F2FBBB0DFCFDAB2F873017; // 0x02C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_6D6D31CD46F2FBBB0DFCFDAB2F873017; // 0x02CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1737[0x3];                                     // 0x02CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Length;                                            // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1738[0x4];                                     // 0x02DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Spacing;                                           // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMeshComponent*>           Maillons;                                          // 0x02E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class APawn*                                  Player01;                                          // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class APawn*                                  Player02;                                          // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UCurveFloat*                            MassCurve;                                         // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_NewChain_C*                         ParentChain;                                       // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class APawn*                                  Puller;                                            // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MaillonMat;                                        // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            FidelityCurve;                                     // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMeshComponent*>           TrueMaillonArray;                                  // 0x0330(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FVector>                        MaillonsLocCaches;                                 // 0x0340(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void Three0fps();
	void Five0fps();
	class UPhysicsConstraintComponent* AddConstraint(const struct FVector& RelativeTransform_Location);
	void AutoDestroy();
	void CalculateDistance(double* Distance);
	void DetectDesyncWithTrueChain(double MaillonAlpha, bool* Desync);
	void Dissolve(float TL_Rate);
	void ExecuteUbergraph_BP_CosmeticChain(int32 EntryPoint);
	void Pulling();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ResyncCosmeticChain();
	void ResyncTL__FinishedFunc();
	void ResyncTL__UpdateFunc();
	void SpawnChainsAndConstraints();
	void Sync_With_True_Chain();
	void SyncMaillon(TArray<class UStaticMeshComponent*>& Array, double MaillonAlpha);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void UpdateDamping();
	void UpdateSocketsLocation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CosmeticChain_C">();
	}
	static class ABP_CosmeticChain_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CosmeticChain_C>();
	}
};
static_assert(alignof(ABP_CosmeticChain_C) == 0x000008, "Wrong alignment on ABP_CosmeticChain_C");
static_assert(sizeof(ABP_CosmeticChain_C) == 0x000350, "Wrong size on ABP_CosmeticChain_C");
static_assert(offsetof(ABP_CosmeticChain_C, UberGraphFrame) == 0x000298, "Member 'ABP_CosmeticChain_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CosmeticChain_C, Sphere1) == 0x0002A0, "Member 'ABP_CosmeticChain_C::Sphere1' has a wrong offset!");
static_assert(offsetof(ABP_CosmeticChain_C, Sphere) == 0x0002A8, "Member 'ABP_CosmeticChain_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_CosmeticChain_C, DefaultSceneRoot) == 0x0002B0, "Member 'ABP_CosmeticChain_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_CosmeticChain_C, ResyncTL_NewTrack_0_2BA6D6194ADC651C8EE963A6E953E128) == 0x0002B8, "Member 'ABP_CosmeticChain_C::ResyncTL_NewTrack_0_2BA6D6194ADC651C8EE963A6E953E128' has a wrong offset!");
static_assert(offsetof(ABP_CosmeticChain_C, ResyncTL__Direction_2BA6D6194ADC651C8EE963A6E953E128) == 0x0002BC, "Member 'ABP_CosmeticChain_C::ResyncTL__Direction_2BA6D6194ADC651C8EE963A6E953E128' has a wrong offset!");
static_assert(offsetof(ABP_CosmeticChain_C, ResyncTL) == 0x0002C0, "Member 'ABP_CosmeticChain_C::ResyncTL' has a wrong offset!");
static_assert(offsetof(ABP_CosmeticChain_C, Timeline_0_NewTrack_0_6D6D31CD46F2FBBB0DFCFDAB2F873017) == 0x0002C8, "Member 'ABP_CosmeticChain_C::Timeline_0_NewTrack_0_6D6D31CD46F2FBBB0DFCFDAB2F873017' has a wrong offset!");
static_assert(offsetof(ABP_CosmeticChain_C, Timeline_0__Direction_6D6D31CD46F2FBBB0DFCFDAB2F873017) == 0x0002CC, "Member 'ABP_CosmeticChain_C::Timeline_0__Direction_6D6D31CD46F2FBBB0DFCFDAB2F873017' has a wrong offset!");
static_assert(offsetof(ABP_CosmeticChain_C, Timeline_0) == 0x0002D0, "Member 'ABP_CosmeticChain_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(ABP_CosmeticChain_C, Length) == 0x0002D8, "Member 'ABP_CosmeticChain_C::Length' has a wrong offset!");
static_assert(offsetof(ABP_CosmeticChain_C, Spacing) == 0x0002E0, "Member 'ABP_CosmeticChain_C::Spacing' has a wrong offset!");
static_assert(offsetof(ABP_CosmeticChain_C, Maillons) == 0x0002E8, "Member 'ABP_CosmeticChain_C::Maillons' has a wrong offset!");
static_assert(offsetof(ABP_CosmeticChain_C, Player01) == 0x0002F8, "Member 'ABP_CosmeticChain_C::Player01' has a wrong offset!");
static_assert(offsetof(ABP_CosmeticChain_C, Player02) == 0x000300, "Member 'ABP_CosmeticChain_C::Player02' has a wrong offset!");
static_assert(offsetof(ABP_CosmeticChain_C, MassCurve) == 0x000308, "Member 'ABP_CosmeticChain_C::MassCurve' has a wrong offset!");
static_assert(offsetof(ABP_CosmeticChain_C, ParentChain) == 0x000310, "Member 'ABP_CosmeticChain_C::ParentChain' has a wrong offset!");
static_assert(offsetof(ABP_CosmeticChain_C, Puller) == 0x000318, "Member 'ABP_CosmeticChain_C::Puller' has a wrong offset!");
static_assert(offsetof(ABP_CosmeticChain_C, MaillonMat) == 0x000320, "Member 'ABP_CosmeticChain_C::MaillonMat' has a wrong offset!");
static_assert(offsetof(ABP_CosmeticChain_C, FidelityCurve) == 0x000328, "Member 'ABP_CosmeticChain_C::FidelityCurve' has a wrong offset!");
static_assert(offsetof(ABP_CosmeticChain_C, TrueMaillonArray) == 0x000330, "Member 'ABP_CosmeticChain_C::TrueMaillonArray' has a wrong offset!");
static_assert(offsetof(ABP_CosmeticChain_C, MaillonsLocCaches) == 0x000340, "Member 'ABP_CosmeticChain_C::MaillonsLocCaches' has a wrong offset!");

}

