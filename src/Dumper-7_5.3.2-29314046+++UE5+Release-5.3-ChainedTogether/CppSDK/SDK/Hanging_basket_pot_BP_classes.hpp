#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Hanging_basket_pot_BP

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass hanging_basket_pot_BP.hanging_basket_pot_BP_C
// 0x0070 (0x0308 - 0x0298)
class AHanging_basket_pot_BP_C final : public AActor
{
public:
	class UStaticMeshComponent*                   Creeping_jenny_05;                                 // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Hanging_basket3_StaticMeshComponent0;              // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Creeping_jenny_01;                                 // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Creeping_jenny_04;                                 // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Creeping_jenny_03;                                 // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Creeping_jenny_02;                                 // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Geranium_small;                                    // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Dianthus_small;                                    // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Hanging_post_StaticMeshComponent0;                 // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   bay_tree3_StaticMeshComponent0;                    // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        SharedRoot;                                        // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMesh*>                    Creeper_array;                                     // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRandomStream                          Stream;                                            // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"hanging_basket_pot_BP_C">();
	}
	static class AHanging_basket_pot_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AHanging_basket_pot_BP_C>();
	}
};
static_assert(alignof(AHanging_basket_pot_BP_C) == 0x000008, "Wrong alignment on AHanging_basket_pot_BP_C");
static_assert(sizeof(AHanging_basket_pot_BP_C) == 0x000308, "Wrong size on AHanging_basket_pot_BP_C");
static_assert(offsetof(AHanging_basket_pot_BP_C, Creeping_jenny_05) == 0x000298, "Member 'AHanging_basket_pot_BP_C::Creeping_jenny_05' has a wrong offset!");
static_assert(offsetof(AHanging_basket_pot_BP_C, Hanging_basket3_StaticMeshComponent0) == 0x0002A0, "Member 'AHanging_basket_pot_BP_C::Hanging_basket3_StaticMeshComponent0' has a wrong offset!");
static_assert(offsetof(AHanging_basket_pot_BP_C, Creeping_jenny_01) == 0x0002A8, "Member 'AHanging_basket_pot_BP_C::Creeping_jenny_01' has a wrong offset!");
static_assert(offsetof(AHanging_basket_pot_BP_C, Creeping_jenny_04) == 0x0002B0, "Member 'AHanging_basket_pot_BP_C::Creeping_jenny_04' has a wrong offset!");
static_assert(offsetof(AHanging_basket_pot_BP_C, Creeping_jenny_03) == 0x0002B8, "Member 'AHanging_basket_pot_BP_C::Creeping_jenny_03' has a wrong offset!");
static_assert(offsetof(AHanging_basket_pot_BP_C, Creeping_jenny_02) == 0x0002C0, "Member 'AHanging_basket_pot_BP_C::Creeping_jenny_02' has a wrong offset!");
static_assert(offsetof(AHanging_basket_pot_BP_C, Geranium_small) == 0x0002C8, "Member 'AHanging_basket_pot_BP_C::Geranium_small' has a wrong offset!");
static_assert(offsetof(AHanging_basket_pot_BP_C, Dianthus_small) == 0x0002D0, "Member 'AHanging_basket_pot_BP_C::Dianthus_small' has a wrong offset!");
static_assert(offsetof(AHanging_basket_pot_BP_C, Hanging_post_StaticMeshComponent0) == 0x0002D8, "Member 'AHanging_basket_pot_BP_C::Hanging_post_StaticMeshComponent0' has a wrong offset!");
static_assert(offsetof(AHanging_basket_pot_BP_C, bay_tree3_StaticMeshComponent0) == 0x0002E0, "Member 'AHanging_basket_pot_BP_C::bay_tree3_StaticMeshComponent0' has a wrong offset!");
static_assert(offsetof(AHanging_basket_pot_BP_C, SharedRoot) == 0x0002E8, "Member 'AHanging_basket_pot_BP_C::SharedRoot' has a wrong offset!");
static_assert(offsetof(AHanging_basket_pot_BP_C, Creeper_array) == 0x0002F0, "Member 'AHanging_basket_pot_BP_C::Creeper_array' has a wrong offset!");
static_assert(offsetof(AHanging_basket_pot_BP_C, Stream) == 0x000300, "Member 'AHanging_basket_pot_BP_C::Stream' has a wrong offset!");

}

