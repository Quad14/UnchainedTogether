#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Window_150_01

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Window_150_01.BP_Window_150_01_C
// 0x0020 (0x02B8 - 0x0298)
class ABP_Window_150_01_C final : public AActor
{
public:
	class UStaticMeshComponent*                   SM_window_edgedirt_02;                             // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Ext_wall_window_200;                               // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wall_window_200_01;                                // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Window_150_01_C">();
	}
	static class ABP_Window_150_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Window_150_01_C>();
	}
};
static_assert(alignof(ABP_Window_150_01_C) == 0x000008, "Wrong alignment on ABP_Window_150_01_C");
static_assert(sizeof(ABP_Window_150_01_C) == 0x0002B8, "Wrong size on ABP_Window_150_01_C");
static_assert(offsetof(ABP_Window_150_01_C, SM_window_edgedirt_02) == 0x000298, "Member 'ABP_Window_150_01_C::SM_window_edgedirt_02' has a wrong offset!");
static_assert(offsetof(ABP_Window_150_01_C, Ext_wall_window_200) == 0x0002A0, "Member 'ABP_Window_150_01_C::Ext_wall_window_200' has a wrong offset!");
static_assert(offsetof(ABP_Window_150_01_C, Wall_window_200_01) == 0x0002A8, "Member 'ABP_Window_150_01_C::Wall_window_200_01' has a wrong offset!");
static_assert(offsetof(ABP_Window_150_01_C, DefaultSceneRoot) == 0x0002B0, "Member 'ABP_Window_150_01_C::DefaultSceneRoot' has a wrong offset!");

}

