#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EndAngelDevil_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EndAngelDevil_BP.EndAngelDevil_BP_C
// 0x01D0 (0x0468 - 0x0298)
class AEndAngelDevil_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                       Camera05;                                          // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       Camera04;                                          // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       Camera03;                                          // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       Camera02;                                          // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    SpringArm;                                         // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       Camera01;                                          // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Devil_Wings;                                       // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SKM_Devil;                                         // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGeometryCollectionComponent*           DevilRock_GeometryCollection;                      // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGeometryCacheComponent*                AngelDevil;                                        // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_5_NewTrack_1_DB6FF5494E47D31BAF9FDB962683438E; // 0x02F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_5_NewTrack_0_DB6FF5494E47D31BAF9FDB962683438E; // 0x02FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_5__Direction_DB6FF5494E47D31BAF9FDB962683438E; // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B31[0x7];                                     // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_5;                                        // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_4_NewTrack_0_13A7D9C64445E7B7A7CDA29FECB5E389; // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_4__Direction_13A7D9C64445E7B7A7CDA29FECB5E389; // 0x0314(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B32[0x3];                                     // 0x0315(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_4;                                        // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_2_NewTrack_1_5CB211814563AF8C5F438A95267CA95B; // 0x0320(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_2_NewTrack_0_5CB211814563AF8C5F438A95267CA95B; // 0x0324(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_2__Direction_5CB211814563AF8C5F438A95267CA95B; // 0x0328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B33[0x7];                                     // 0x0329(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_2;                                        // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_3_NewTrack_1_744C024247CCAA80292EA78E061D04E3; // 0x0338(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_3_NewTrack_0_744C024247CCAA80292EA78E061D04E3; // 0x033C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_3__Direction_744C024247CCAA80292EA78E061D04E3; // 0x0340(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B34[0x7];                                     // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_3;                                        // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_1_NewTrack_0_D9D5214A41A41E89A937379B63809438; // 0x0350(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_1__Direction_D9D5214A41A41E89A937379B63809438; // 0x0354(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B35[0x3];                                     // 0x0355(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_1;                                        // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_55A6EB344177A336DE84CB8672F91D27; // 0x0360(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_55A6EB344177A336DE84CB8672F91D27; // 0x0364(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B36[0x3];                                     // 0x0365(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_NewTrack_0_916881034EB610E101BED98A15B1936E; // 0x0370(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline__Direction_916881034EB610E101BED98A15B1936E; // 0x0374(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B37[0x3];                                     // 0x0375(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline;                                          // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                InitDevilLoc;                                      // 0x0380(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                InitCamera01Loc;                                   // 0x0398(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                InitSpringArmLov;                                  // 0x03B0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                InitCamera03Loc;                                   // 0x03C8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                InitCamera04Loc;                                   // 0x03E0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_CrashMeteor_C*>              Meteor;                                            // 0x03F8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn)
	struct FRotator                               Cam04RelRot;                                       // 0x0408(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class ABP_CustomSkyLight_C*                   SkyLight;                                          // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                InitCamera05Loc;                                   // 0x0428(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ASpire_BP_C*>                    Spires;                                            // 0x0440(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn)
	class AAmbientSound*                          MusicToStop;                                       // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AExponentialHeightFog*                  CityFog;                                           // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AExponentialHeightFog*                  HellFog;                                           // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AnimationDevil();
	void CameraTravelling01();
	void CameraTravelling02();
	void CameraTravelling03();
	void DevilMovement();
	void ExecuteUbergraph_EndAngelDevil_BP(int32 EntryPoint);
	void HideGeneric();
	void Play();
	void ReceiveBeginPlay();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void Timeline_3__FinishedFunc();
	void Timeline_3__UpdateFunc();
	void Timeline_4__FinishedFunc();
	void Timeline_4__UpdateFunc();
	void Timeline_5__FinishedFunc();
	void Timeline_5__UpdateFunc();
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();
	void TravellingCamera04();
	void TravellingCamera05();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EndAngelDevil_BP_C">();
	}
	static class AEndAngelDevil_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEndAngelDevil_BP_C>();
	}
};
static_assert(alignof(AEndAngelDevil_BP_C) == 0x000008, "Wrong alignment on AEndAngelDevil_BP_C");
static_assert(sizeof(AEndAngelDevil_BP_C) == 0x000468, "Wrong size on AEndAngelDevil_BP_C");
static_assert(offsetof(AEndAngelDevil_BP_C, UberGraphFrame) == 0x000298, "Member 'AEndAngelDevil_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, Camera05) == 0x0002A0, "Member 'AEndAngelDevil_BP_C::Camera05' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, Camera04) == 0x0002A8, "Member 'AEndAngelDevil_BP_C::Camera04' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, Camera03) == 0x0002B0, "Member 'AEndAngelDevil_BP_C::Camera03' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, Camera02) == 0x0002B8, "Member 'AEndAngelDevil_BP_C::Camera02' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, SpringArm) == 0x0002C0, "Member 'AEndAngelDevil_BP_C::SpringArm' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, Camera01) == 0x0002C8, "Member 'AEndAngelDevil_BP_C::Camera01' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, Devil_Wings) == 0x0002D0, "Member 'AEndAngelDevil_BP_C::Devil_Wings' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, SKM_Devil) == 0x0002D8, "Member 'AEndAngelDevil_BP_C::SKM_Devil' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, DevilRock_GeometryCollection) == 0x0002E0, "Member 'AEndAngelDevil_BP_C::DevilRock_GeometryCollection' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, AngelDevil) == 0x0002E8, "Member 'AEndAngelDevil_BP_C::AngelDevil' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, DefaultSceneRoot) == 0x0002F0, "Member 'AEndAngelDevil_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, Timeline_5_NewTrack_1_DB6FF5494E47D31BAF9FDB962683438E) == 0x0002F8, "Member 'AEndAngelDevil_BP_C::Timeline_5_NewTrack_1_DB6FF5494E47D31BAF9FDB962683438E' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, Timeline_5_NewTrack_0_DB6FF5494E47D31BAF9FDB962683438E) == 0x0002FC, "Member 'AEndAngelDevil_BP_C::Timeline_5_NewTrack_0_DB6FF5494E47D31BAF9FDB962683438E' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, Timeline_5__Direction_DB6FF5494E47D31BAF9FDB962683438E) == 0x000300, "Member 'AEndAngelDevil_BP_C::Timeline_5__Direction_DB6FF5494E47D31BAF9FDB962683438E' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, Timeline_5) == 0x000308, "Member 'AEndAngelDevil_BP_C::Timeline_5' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, Timeline_4_NewTrack_0_13A7D9C64445E7B7A7CDA29FECB5E389) == 0x000310, "Member 'AEndAngelDevil_BP_C::Timeline_4_NewTrack_0_13A7D9C64445E7B7A7CDA29FECB5E389' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, Timeline_4__Direction_13A7D9C64445E7B7A7CDA29FECB5E389) == 0x000314, "Member 'AEndAngelDevil_BP_C::Timeline_4__Direction_13A7D9C64445E7B7A7CDA29FECB5E389' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, Timeline_4) == 0x000318, "Member 'AEndAngelDevil_BP_C::Timeline_4' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, Timeline_2_NewTrack_1_5CB211814563AF8C5F438A95267CA95B) == 0x000320, "Member 'AEndAngelDevil_BP_C::Timeline_2_NewTrack_1_5CB211814563AF8C5F438A95267CA95B' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, Timeline_2_NewTrack_0_5CB211814563AF8C5F438A95267CA95B) == 0x000324, "Member 'AEndAngelDevil_BP_C::Timeline_2_NewTrack_0_5CB211814563AF8C5F438A95267CA95B' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, Timeline_2__Direction_5CB211814563AF8C5F438A95267CA95B) == 0x000328, "Member 'AEndAngelDevil_BP_C::Timeline_2__Direction_5CB211814563AF8C5F438A95267CA95B' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, Timeline_2) == 0x000330, "Member 'AEndAngelDevil_BP_C::Timeline_2' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, Timeline_3_NewTrack_1_744C024247CCAA80292EA78E061D04E3) == 0x000338, "Member 'AEndAngelDevil_BP_C::Timeline_3_NewTrack_1_744C024247CCAA80292EA78E061D04E3' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, Timeline_3_NewTrack_0_744C024247CCAA80292EA78E061D04E3) == 0x00033C, "Member 'AEndAngelDevil_BP_C::Timeline_3_NewTrack_0_744C024247CCAA80292EA78E061D04E3' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, Timeline_3__Direction_744C024247CCAA80292EA78E061D04E3) == 0x000340, "Member 'AEndAngelDevil_BP_C::Timeline_3__Direction_744C024247CCAA80292EA78E061D04E3' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, Timeline_3) == 0x000348, "Member 'AEndAngelDevil_BP_C::Timeline_3' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, Timeline_1_NewTrack_0_D9D5214A41A41E89A937379B63809438) == 0x000350, "Member 'AEndAngelDevil_BP_C::Timeline_1_NewTrack_0_D9D5214A41A41E89A937379B63809438' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, Timeline_1__Direction_D9D5214A41A41E89A937379B63809438) == 0x000354, "Member 'AEndAngelDevil_BP_C::Timeline_1__Direction_D9D5214A41A41E89A937379B63809438' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, Timeline_1) == 0x000358, "Member 'AEndAngelDevil_BP_C::Timeline_1' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, Timeline_0_NewTrack_0_55A6EB344177A336DE84CB8672F91D27) == 0x000360, "Member 'AEndAngelDevil_BP_C::Timeline_0_NewTrack_0_55A6EB344177A336DE84CB8672F91D27' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, Timeline_0__Direction_55A6EB344177A336DE84CB8672F91D27) == 0x000364, "Member 'AEndAngelDevil_BP_C::Timeline_0__Direction_55A6EB344177A336DE84CB8672F91D27' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, Timeline_0) == 0x000368, "Member 'AEndAngelDevil_BP_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, Timeline_NewTrack_0_916881034EB610E101BED98A15B1936E) == 0x000370, "Member 'AEndAngelDevil_BP_C::Timeline_NewTrack_0_916881034EB610E101BED98A15B1936E' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, Timeline__Direction_916881034EB610E101BED98A15B1936E) == 0x000374, "Member 'AEndAngelDevil_BP_C::Timeline__Direction_916881034EB610E101BED98A15B1936E' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, Timeline) == 0x000378, "Member 'AEndAngelDevil_BP_C::Timeline' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, InitDevilLoc) == 0x000380, "Member 'AEndAngelDevil_BP_C::InitDevilLoc' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, InitCamera01Loc) == 0x000398, "Member 'AEndAngelDevil_BP_C::InitCamera01Loc' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, InitSpringArmLov) == 0x0003B0, "Member 'AEndAngelDevil_BP_C::InitSpringArmLov' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, InitCamera03Loc) == 0x0003C8, "Member 'AEndAngelDevil_BP_C::InitCamera03Loc' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, InitCamera04Loc) == 0x0003E0, "Member 'AEndAngelDevil_BP_C::InitCamera04Loc' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, Meteor) == 0x0003F8, "Member 'AEndAngelDevil_BP_C::Meteor' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, Cam04RelRot) == 0x000408, "Member 'AEndAngelDevil_BP_C::Cam04RelRot' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, SkyLight) == 0x000420, "Member 'AEndAngelDevil_BP_C::SkyLight' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, InitCamera05Loc) == 0x000428, "Member 'AEndAngelDevil_BP_C::InitCamera05Loc' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, Spires) == 0x000440, "Member 'AEndAngelDevil_BP_C::Spires' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, MusicToStop) == 0x000450, "Member 'AEndAngelDevil_BP_C::MusicToStop' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, CityFog) == 0x000458, "Member 'AEndAngelDevil_BP_C::CityFog' has a wrong offset!");
static_assert(offsetof(AEndAngelDevil_BP_C, HellFog) == 0x000460, "Member 'AEndAngelDevil_BP_C::HellFog' has a wrong offset!");

}

