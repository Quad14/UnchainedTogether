#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PCM_Game

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PCM_Game.PCM_Game_C
// 0x0040 (0x2400 - 0x23C0)
class APCM_Game_C final : public APlayerCameraManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x23C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Sphere;                                            // 0x23C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_1B82EF0F435AA33BEDD4AF941C842FC3; // 0x23D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_1B82EF0F435AA33BEDD4AF941C842FC3; // 0x23D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DD6[0x3];                                     // 0x23D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x23D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APostProcessVolume*                     WaterPP;                                           // 0x23E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APostProcessVolume*                     LavaPP;                                            // 0x23E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_Lava_C*                             LavaRef;                                           // 0x23F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AddVolume();
	void AddWaterPP(class APostProcessVolume* PP);
	void CustomEvent();
	void ExecuteUbergraph_PCM_Game(int32 EntryPoint);
	void InWater();
	void Make_Lava_PP_Ref();
	void MakeLavaRef();
	void OutWater();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void RemoveVolume();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Update();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PCM_Game_C">();
	}
	static class APCM_Game_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APCM_Game_C>();
	}
};
static_assert(alignof(APCM_Game_C) == 0x000010, "Wrong alignment on APCM_Game_C");
static_assert(sizeof(APCM_Game_C) == 0x002400, "Wrong size on APCM_Game_C");
static_assert(offsetof(APCM_Game_C, UberGraphFrame) == 0x0023C0, "Member 'APCM_Game_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APCM_Game_C, Sphere) == 0x0023C8, "Member 'APCM_Game_C::Sphere' has a wrong offset!");
static_assert(offsetof(APCM_Game_C, Timeline_0_NewTrack_0_1B82EF0F435AA33BEDD4AF941C842FC3) == 0x0023D0, "Member 'APCM_Game_C::Timeline_0_NewTrack_0_1B82EF0F435AA33BEDD4AF941C842FC3' has a wrong offset!");
static_assert(offsetof(APCM_Game_C, Timeline_0__Direction_1B82EF0F435AA33BEDD4AF941C842FC3) == 0x0023D4, "Member 'APCM_Game_C::Timeline_0__Direction_1B82EF0F435AA33BEDD4AF941C842FC3' has a wrong offset!");
static_assert(offsetof(APCM_Game_C, Timeline_0) == 0x0023D8, "Member 'APCM_Game_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(APCM_Game_C, WaterPP) == 0x0023E0, "Member 'APCM_Game_C::WaterPP' has a wrong offset!");
static_assert(offsetof(APCM_Game_C, LavaPP) == 0x0023E8, "Member 'APCM_Game_C::LavaPP' has a wrong offset!");
static_assert(offsetof(APCM_Game_C, LavaRef) == 0x0023F0, "Member 'APCM_Game_C::LavaRef' has a wrong offset!");

}

