#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ModFoliageSpawner

#include "Basic.hpp"

#include "BP_ModFoliageSpawner_classes.hpp"
#include "BP_ModFoliageSpawner_parameters.hpp"


namespace SDK
{

// Function BP_ModFoliageSpawner.BP_ModFoliageSpawner_C.BndEvt__BP_ModFoliageSpawner_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_ModFoliageSpawner_C::BndEvt__BP_ModFoliageSpawner_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ModFoliageSpawner_C", "BndEvt__BP_ModFoliageSpawner_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_ModFoliageSpawner_C_BndEvt__BP_ModFoliageSpawner_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ModFoliageSpawner.BP_ModFoliageSpawner_C.ExecuteUbergraph_BP_ModFoliageSpawner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ModFoliageSpawner_C::ExecuteUbergraph_BP_ModFoliageSpawner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ModFoliageSpawner_C", "ExecuteUbergraph_BP_ModFoliageSpawner");

	Params::BP_ModFoliageSpawner_C_ExecuteUbergraph_BP_ModFoliageSpawner Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ModFoliageSpawner.BP_ModFoliageSpawner_C.SetRemoveMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           FoliageActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    RemoveMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ModFoliageSpawner_C::SetRemoveMode(class AActor* FoliageActor, bool RemoveMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ModFoliageSpawner_C", "SetRemoveMode");

	Params::BP_ModFoliageSpawner_C_SetRemoveMode Parms{};

	Parms.FoliageActor = FoliageActor;
	Parms.RemoveMode = RemoveMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ModFoliageSpawner.BP_ModFoliageSpawner_C.UpdateRadius
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Radius                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ModFoliageSpawner_C::UpdateRadius(double Radius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ModFoliageSpawner_C", "UpdateRadius");

	Params::BP_ModFoliageSpawner_C_UpdateRadius Parms{};

	Parms.Radius = Radius;

	UObject::ProcessEvent(Func, &Parms);
}

}

