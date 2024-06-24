#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Generic_BP

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Generic_BP.Generic_BP_C
// 0x0058 (0x02F0 - 0x0298)
class AGeneric_BP_C final : public AActor
{
public:
	class UTextRenderComponent*                   TextRender;                                        // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         Textes;                                            // 0x02A8(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FVector                                Spacing;                                           // 0x02B8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        WorldSize;                                         // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FRotator                               Rotation;                                          // 0x02D8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Generic_BP_C">();
	}
	static class AGeneric_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGeneric_BP_C>();
	}
};
static_assert(alignof(AGeneric_BP_C) == 0x000008, "Wrong alignment on AGeneric_BP_C");
static_assert(sizeof(AGeneric_BP_C) == 0x0002F0, "Wrong size on AGeneric_BP_C");
static_assert(offsetof(AGeneric_BP_C, TextRender) == 0x000298, "Member 'AGeneric_BP_C::TextRender' has a wrong offset!");
static_assert(offsetof(AGeneric_BP_C, DefaultSceneRoot) == 0x0002A0, "Member 'AGeneric_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AGeneric_BP_C, Textes) == 0x0002A8, "Member 'AGeneric_BP_C::Textes' has a wrong offset!");
static_assert(offsetof(AGeneric_BP_C, Spacing) == 0x0002B8, "Member 'AGeneric_BP_C::Spacing' has a wrong offset!");
static_assert(offsetof(AGeneric_BP_C, WorldSize) == 0x0002D0, "Member 'AGeneric_BP_C::WorldSize' has a wrong offset!");
static_assert(offsetof(AGeneric_BP_C, Rotation) == 0x0002D8, "Member 'AGeneric_BP_C::Rotation' has a wrong offset!");

}

