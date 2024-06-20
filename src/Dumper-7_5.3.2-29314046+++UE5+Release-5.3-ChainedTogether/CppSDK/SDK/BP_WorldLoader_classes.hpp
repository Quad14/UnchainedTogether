#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WorldLoader

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_WorldLoader.BP_WorldLoader_C
// 0x0018 (0x02B0 - 0x0298)
class ABP_WorldLoader_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Make_Visible_After_LoadOther;                      // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BlockOnLoad;                                       // 0x02A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_WorldLoader(int32 EntryPoint);
	void LoadBeginLevels();
	void UnloadLobby();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WorldLoader_C">();
	}
	static class ABP_WorldLoader_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_WorldLoader_C>();
	}
};
static_assert(alignof(ABP_WorldLoader_C) == 0x000008, "Wrong alignment on ABP_WorldLoader_C");
static_assert(sizeof(ABP_WorldLoader_C) == 0x0002B0, "Wrong size on ABP_WorldLoader_C");
static_assert(offsetof(ABP_WorldLoader_C, UberGraphFrame) == 0x000298, "Member 'ABP_WorldLoader_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_WorldLoader_C, DefaultSceneRoot) == 0x0002A0, "Member 'ABP_WorldLoader_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_WorldLoader_C, Make_Visible_After_LoadOther) == 0x0002A8, "Member 'ABP_WorldLoader_C::Make_Visible_After_LoadOther' has a wrong offset!");
static_assert(offsetof(ABP_WorldLoader_C, BlockOnLoad) == 0x0002A9, "Member 'ABP_WorldLoader_C::BlockOnLoad' has a wrong offset!");

}

