#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BS_Billboard_A

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BS_Billboard_A.BS_Billboard_A_C
// 0x0030 (0x02C8 - 0x0298)
class ABS_Billboard_A_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UC_TickOptimizer_C*                     C_TickOptimizer;                                   // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Billboard_01;                                      // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_4B599D184BA885EA3B3AEB91D5384625; // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_4B599D184BA885EA3B3AEB91D5384625; // 0x02B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_372D[0x3];                                     // 0x02B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Mat;                                               // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BS_Billboard_A(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BS_Billboard_A_C">();
	}
	static class ABS_Billboard_A_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABS_Billboard_A_C>();
	}
};
static_assert(alignof(ABS_Billboard_A_C) == 0x000008, "Wrong alignment on ABS_Billboard_A_C");
static_assert(sizeof(ABS_Billboard_A_C) == 0x0002C8, "Wrong size on ABS_Billboard_A_C");
static_assert(offsetof(ABS_Billboard_A_C, UberGraphFrame) == 0x000298, "Member 'ABS_Billboard_A_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABS_Billboard_A_C, C_TickOptimizer) == 0x0002A0, "Member 'ABS_Billboard_A_C::C_TickOptimizer' has a wrong offset!");
static_assert(offsetof(ABS_Billboard_A_C, Billboard_01) == 0x0002A8, "Member 'ABS_Billboard_A_C::Billboard_01' has a wrong offset!");
static_assert(offsetof(ABS_Billboard_A_C, Timeline_0_NewTrack_0_4B599D184BA885EA3B3AEB91D5384625) == 0x0002B0, "Member 'ABS_Billboard_A_C::Timeline_0_NewTrack_0_4B599D184BA885EA3B3AEB91D5384625' has a wrong offset!");
static_assert(offsetof(ABS_Billboard_A_C, Timeline_0__Direction_4B599D184BA885EA3B3AEB91D5384625) == 0x0002B4, "Member 'ABS_Billboard_A_C::Timeline_0__Direction_4B599D184BA885EA3B3AEB91D5384625' has a wrong offset!");
static_assert(offsetof(ABS_Billboard_A_C, Timeline_0) == 0x0002B8, "Member 'ABS_Billboard_A_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(ABS_Billboard_A_C, Mat) == 0x0002C0, "Member 'ABS_Billboard_A_C::Mat' has a wrong offset!");

}

