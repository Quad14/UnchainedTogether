#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_AC_Unit

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_AC_Unit.B_AC_Unit_C
// 0x0058 (0x02F0 - 0x0298)
class AB_AC_Unit_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Fan;                                               // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   AC_Unit;                                           // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         Type;                                              // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Rotating_Fan;                                      // 0x02BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39B6[0x3];                                     // 0x02BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Fan_Speed;                                         // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Sound_Fan;                                         // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39B7[0x7];                                     // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Sound_Volume;                                      // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Sound_Pitch;                                       // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMesh*>                    Meshes;                                            // 0x02E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_B_AC_Unit(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_AC_Unit_C">();
	}
	static class AB_AC_Unit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_AC_Unit_C>();
	}
};
static_assert(alignof(AB_AC_Unit_C) == 0x000008, "Wrong alignment on AB_AC_Unit_C");
static_assert(sizeof(AB_AC_Unit_C) == 0x0002F0, "Wrong size on AB_AC_Unit_C");
static_assert(offsetof(AB_AC_Unit_C, UberGraphFrame) == 0x000298, "Member 'AB_AC_Unit_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_AC_Unit_C, Fan) == 0x0002A0, "Member 'AB_AC_Unit_C::Fan' has a wrong offset!");
static_assert(offsetof(AB_AC_Unit_C, AC_Unit) == 0x0002A8, "Member 'AB_AC_Unit_C::AC_Unit' has a wrong offset!");
static_assert(offsetof(AB_AC_Unit_C, DefaultSceneRoot) == 0x0002B0, "Member 'AB_AC_Unit_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AB_AC_Unit_C, Type) == 0x0002B8, "Member 'AB_AC_Unit_C::Type' has a wrong offset!");
static_assert(offsetof(AB_AC_Unit_C, Rotating_Fan) == 0x0002BC, "Member 'AB_AC_Unit_C::Rotating_Fan' has a wrong offset!");
static_assert(offsetof(AB_AC_Unit_C, Fan_Speed) == 0x0002C0, "Member 'AB_AC_Unit_C::Fan_Speed' has a wrong offset!");
static_assert(offsetof(AB_AC_Unit_C, Sound_Fan) == 0x0002C8, "Member 'AB_AC_Unit_C::Sound_Fan' has a wrong offset!");
static_assert(offsetof(AB_AC_Unit_C, Sound_Volume) == 0x0002D0, "Member 'AB_AC_Unit_C::Sound_Volume' has a wrong offset!");
static_assert(offsetof(AB_AC_Unit_C, Sound_Pitch) == 0x0002D8, "Member 'AB_AC_Unit_C::Sound_Pitch' has a wrong offset!");
static_assert(offsetof(AB_AC_Unit_C, Meshes) == 0x0002E0, "Member 'AB_AC_Unit_C::Meshes' has a wrong offset!");

}

