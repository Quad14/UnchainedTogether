#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WayWall_01_BPC

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WayWall_BP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WayWall_01_BPC.WayWall_01_BPC_C
// 0x0038 (0x0328 - 0x02F0)
class AWayWall_01_BPC_C final : public AWayWall_BP_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WayWall_01_BPC_C;                   // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_beam2;                                          // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_beam1;                                          // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_beam;                                           // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_FEB76D60414EC7D9D7BBC38107BC8835; // 0x0318(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_FEB76D60414EC7D9D7BBC38107BC8835; // 0x031C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_82[0x3];                                       // 0x031D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WayWall_01_BPC_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__WayWall_01_BPC_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ExecuteUbergraph_WayWall_01_BPC(int32 EntryPoint);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WayWall_01_BPC_C">();
	}
	static class AWayWall_01_BPC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWayWall_01_BPC_C>();
	}
};
static_assert(alignof(AWayWall_01_BPC_C) == 0x000008, "Wrong alignment on AWayWall_01_BPC_C");
static_assert(sizeof(AWayWall_01_BPC_C) == 0x000328, "Wrong size on AWayWall_01_BPC_C");
static_assert(offsetof(AWayWall_01_BPC_C, UberGraphFrame_WayWall_01_BPC_C) == 0x0002F0, "Member 'AWayWall_01_BPC_C::UberGraphFrame_WayWall_01_BPC_C' has a wrong offset!");
static_assert(offsetof(AWayWall_01_BPC_C, Box) == 0x0002F8, "Member 'AWayWall_01_BPC_C::Box' has a wrong offset!");
static_assert(offsetof(AWayWall_01_BPC_C, SM_beam2) == 0x000300, "Member 'AWayWall_01_BPC_C::SM_beam2' has a wrong offset!");
static_assert(offsetof(AWayWall_01_BPC_C, SM_beam1) == 0x000308, "Member 'AWayWall_01_BPC_C::SM_beam1' has a wrong offset!");
static_assert(offsetof(AWayWall_01_BPC_C, SM_beam) == 0x000310, "Member 'AWayWall_01_BPC_C::SM_beam' has a wrong offset!");
static_assert(offsetof(AWayWall_01_BPC_C, Timeline_0_NewTrack_0_FEB76D60414EC7D9D7BBC38107BC8835) == 0x000318, "Member 'AWayWall_01_BPC_C::Timeline_0_NewTrack_0_FEB76D60414EC7D9D7BBC38107BC8835' has a wrong offset!");
static_assert(offsetof(AWayWall_01_BPC_C, Timeline_0__Direction_FEB76D60414EC7D9D7BBC38107BC8835) == 0x00031C, "Member 'AWayWall_01_BPC_C::Timeline_0__Direction_FEB76D60414EC7D9D7BBC38107BC8835' has a wrong offset!");
static_assert(offsetof(AWayWall_01_BPC_C, Timeline_0) == 0x000320, "Member 'AWayWall_01_BPC_C::Timeline_0' has a wrong offset!");

}

