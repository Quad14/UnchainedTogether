#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Obelisk

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Obelisk.BP_Obelisk_C
// 0x0050 (0x02E8 - 0x0298)
class ABP_Obelisk_C final : public AActor
{
public:
	class UStaticMeshComponent*                   StaticMesh7;                                       // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh6;                                       // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh5;                                       // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh4;                                       // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh3;                                       // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh2;                                       // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Roof_Ending_02;                                 // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Roof_Ending_01;                                 // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh1;                                       // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Obelisk_C">();
	}
	static class ABP_Obelisk_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Obelisk_C>();
	}
};
static_assert(alignof(ABP_Obelisk_C) == 0x000008, "Wrong alignment on ABP_Obelisk_C");
static_assert(sizeof(ABP_Obelisk_C) == 0x0002E8, "Wrong size on ABP_Obelisk_C");
static_assert(offsetof(ABP_Obelisk_C, StaticMesh7) == 0x000298, "Member 'ABP_Obelisk_C::StaticMesh7' has a wrong offset!");
static_assert(offsetof(ABP_Obelisk_C, StaticMesh6) == 0x0002A0, "Member 'ABP_Obelisk_C::StaticMesh6' has a wrong offset!");
static_assert(offsetof(ABP_Obelisk_C, StaticMesh5) == 0x0002A8, "Member 'ABP_Obelisk_C::StaticMesh5' has a wrong offset!");
static_assert(offsetof(ABP_Obelisk_C, StaticMesh4) == 0x0002B0, "Member 'ABP_Obelisk_C::StaticMesh4' has a wrong offset!");
static_assert(offsetof(ABP_Obelisk_C, StaticMesh3) == 0x0002B8, "Member 'ABP_Obelisk_C::StaticMesh3' has a wrong offset!");
static_assert(offsetof(ABP_Obelisk_C, StaticMesh2) == 0x0002C0, "Member 'ABP_Obelisk_C::StaticMesh2' has a wrong offset!");
static_assert(offsetof(ABP_Obelisk_C, SM_Roof_Ending_02) == 0x0002C8, "Member 'ABP_Obelisk_C::SM_Roof_Ending_02' has a wrong offset!");
static_assert(offsetof(ABP_Obelisk_C, SM_Roof_Ending_01) == 0x0002D0, "Member 'ABP_Obelisk_C::SM_Roof_Ending_01' has a wrong offset!");
static_assert(offsetof(ABP_Obelisk_C, StaticMesh1) == 0x0002D8, "Member 'ABP_Obelisk_C::StaticMesh1' has a wrong offset!");
static_assert(offsetof(ABP_Obelisk_C, DefaultSceneRoot) == 0x0002E0, "Member 'ABP_Obelisk_C::DefaultSceneRoot' has a wrong offset!");

}

