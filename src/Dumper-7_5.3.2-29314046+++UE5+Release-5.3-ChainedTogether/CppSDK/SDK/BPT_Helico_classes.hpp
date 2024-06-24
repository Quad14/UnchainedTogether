#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPT_Helico

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_Tyrolienne_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPT_Helico.BPT_Helico_C
// 0x0030 (0x04A0 - 0x0470)
class ABPT_Helico_C final : public ABP_Tyrolienne_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BPT_Helico_C;                       // 0x0470(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        S_Helico;                                          // 0x0478(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   AileBack;                                          // 0x0480(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   AileUp;                                            // 0x0488(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        Min_Tick_Distance;                                 // 0x0490(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        Max_Tick_Distance;                                 // 0x0498(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPT_Helico(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPT_Helico_C">();
	}
	static class ABPT_Helico_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABPT_Helico_C>();
	}
};
static_assert(alignof(ABPT_Helico_C) == 0x000010, "Wrong alignment on ABPT_Helico_C");
static_assert(sizeof(ABPT_Helico_C) == 0x0004A0, "Wrong size on ABPT_Helico_C");
static_assert(offsetof(ABPT_Helico_C, UberGraphFrame_BPT_Helico_C) == 0x000470, "Member 'ABPT_Helico_C::UberGraphFrame_BPT_Helico_C' has a wrong offset!");
static_assert(offsetof(ABPT_Helico_C, S_Helico) == 0x000478, "Member 'ABPT_Helico_C::S_Helico' has a wrong offset!");
static_assert(offsetof(ABPT_Helico_C, AileBack) == 0x000480, "Member 'ABPT_Helico_C::AileBack' has a wrong offset!");
static_assert(offsetof(ABPT_Helico_C, AileUp) == 0x000488, "Member 'ABPT_Helico_C::AileUp' has a wrong offset!");
static_assert(offsetof(ABPT_Helico_C, Min_Tick_Distance) == 0x000490, "Member 'ABPT_Helico_C::Min_Tick_Distance' has a wrong offset!");
static_assert(offsetof(ABPT_Helico_C, Max_Tick_Distance) == 0x000498, "Member 'ABPT_Helico_C::Max_Tick_Distance' has a wrong offset!");

}

