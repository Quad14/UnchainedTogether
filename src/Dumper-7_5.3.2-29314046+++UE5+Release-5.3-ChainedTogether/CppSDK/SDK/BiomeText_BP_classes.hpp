#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BiomeText_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BiomeText_BP.BiomeText_BP_C
// 0x0050 (0x02E8 - 0x0298)
class ABiomeText_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FText                                   BiomeNameText;                                     // 0x02B0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FString                                 AchievementName;                                   // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ABP_RescuePoint_C*                      RescuePoint;                                       // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AActor*                                 Height0;                                           // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BiomeText_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_BiomeText_BP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BiomeText_BP_C">();
	}
	static class ABiomeText_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABiomeText_BP_C>();
	}
};
static_assert(alignof(ABiomeText_BP_C) == 0x000008, "Wrong alignment on ABiomeText_BP_C");
static_assert(sizeof(ABiomeText_BP_C) == 0x0002E8, "Wrong size on ABiomeText_BP_C");
static_assert(offsetof(ABiomeText_BP_C, UberGraphFrame) == 0x000298, "Member 'ABiomeText_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABiomeText_BP_C, Box) == 0x0002A0, "Member 'ABiomeText_BP_C::Box' has a wrong offset!");
static_assert(offsetof(ABiomeText_BP_C, DefaultSceneRoot) == 0x0002A8, "Member 'ABiomeText_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABiomeText_BP_C, BiomeNameText) == 0x0002B0, "Member 'ABiomeText_BP_C::BiomeNameText' has a wrong offset!");
static_assert(offsetof(ABiomeText_BP_C, AchievementName) == 0x0002C8, "Member 'ABiomeText_BP_C::AchievementName' has a wrong offset!");
static_assert(offsetof(ABiomeText_BP_C, RescuePoint) == 0x0002D8, "Member 'ABiomeText_BP_C::RescuePoint' has a wrong offset!");
static_assert(offsetof(ABiomeText_BP_C, Height0) == 0x0002E0, "Member 'ABiomeText_BP_C::Height0' has a wrong offset!");

}

