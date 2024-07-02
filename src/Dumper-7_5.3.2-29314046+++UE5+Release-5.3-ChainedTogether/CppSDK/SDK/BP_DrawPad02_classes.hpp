#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DrawPad02

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DrawPad02.BP_DrawPad02_C
// 0x0030 (0x02C8 - 0x0298)
class ABP_DrawPad02_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          On;                                                // 0x02B8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C52[0x7];                                     // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_DrawScreenManager02_C*              Manager;                                           // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__BP_DrawPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_BP_DrawPad02(int32 EntryPoint);
	void OnRep_On();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DrawPad02_C">();
	}
	static class ABP_DrawPad02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DrawPad02_C>();
	}
};
static_assert(alignof(ABP_DrawPad02_C) == 0x000008, "Wrong alignment on ABP_DrawPad02_C");
static_assert(sizeof(ABP_DrawPad02_C) == 0x0002C8, "Wrong size on ABP_DrawPad02_C");
static_assert(offsetof(ABP_DrawPad02_C, UberGraphFrame) == 0x000298, "Member 'ABP_DrawPad02_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_DrawPad02_C, Box) == 0x0002A0, "Member 'ABP_DrawPad02_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_DrawPad02_C, StaticMesh) == 0x0002A8, "Member 'ABP_DrawPad02_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_DrawPad02_C, DefaultSceneRoot) == 0x0002B0, "Member 'ABP_DrawPad02_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_DrawPad02_C, On) == 0x0002B8, "Member 'ABP_DrawPad02_C::On' has a wrong offset!");
static_assert(offsetof(ABP_DrawPad02_C, Manager) == 0x0002C0, "Member 'ABP_DrawPad02_C::Manager' has a wrong offset!");

}

