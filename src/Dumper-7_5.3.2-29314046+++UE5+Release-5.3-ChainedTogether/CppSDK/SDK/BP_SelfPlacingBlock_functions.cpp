#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SelfPlacingBlock

#include "Basic.hpp"

#include "BP_SelfPlacingBlock_classes.hpp"
#include "BP_SelfPlacingBlock_parameters.hpp"


namespace SDK
{

// Function BP_SelfPlacingBlock.BP_SelfPlacingBlock_C.BndEvt__BP_SelfPlacingBlock_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_SelfPlacingBlock_C::BndEvt__BP_SelfPlacingBlock_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SelfPlacingBlock_C", "BndEvt__BP_SelfPlacingBlock_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_SelfPlacingBlock_C_BndEvt__BP_SelfPlacingBlock_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SelfPlacingBlock.BP_SelfPlacingBlock_C.BndEvt__BP_SelfPlacingBlock_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SelfPlacingBlock_C::BndEvt__BP_SelfPlacingBlock_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SelfPlacingBlock_C", "BndEvt__BP_SelfPlacingBlock_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	Params::BP_SelfPlacingBlock_C_BndEvt__BP_SelfPlacingBlock_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SelfPlacingBlock.BP_SelfPlacingBlock_C.ExecuteUbergraph_BP_SelfPlacingBlock
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SelfPlacingBlock_C::ExecuteUbergraph_BP_SelfPlacingBlock(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SelfPlacingBlock_C", "ExecuteUbergraph_BP_SelfPlacingBlock");

	Params::BP_SelfPlacingBlock_C_ExecuteUbergraph_BP_SelfPlacingBlock Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SelfPlacingBlock.BP_SelfPlacingBlock_C.GlowDown
// (BlueprintCallable, BlueprintEvent)

void ABP_SelfPlacingBlock_C::GlowDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SelfPlacingBlock_C", "GlowDown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SelfPlacingBlock.BP_SelfPlacingBlock_C.PlaceBlock
// (BlueprintCallable, BlueprintEvent)

void ABP_SelfPlacingBlock_C::PlaceBlock()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SelfPlacingBlock_C", "PlaceBlock");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SelfPlacingBlock.BP_SelfPlacingBlock_C.RandomRotAxis
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double ABP_SelfPlacingBlock_C::RandomRotAxis()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SelfPlacingBlock_C", "RandomRotAxis");

	Params::BP_SelfPlacingBlock_C_RandomRotAxis Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_SelfPlacingBlock.BP_SelfPlacingBlock_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SelfPlacingBlock_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SelfPlacingBlock_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SelfPlacingBlock.BP_SelfPlacingBlock_C.ResetMaterials
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SelfPlacingBlock_C::ResetMaterials()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SelfPlacingBlock_C", "ResetMaterials");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SelfPlacingBlock.BP_SelfPlacingBlock_C.SetMaterials
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*               Material                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInstanceDynamic*> MaterialInstances                                      (Parm, OutParm)

void ABP_SelfPlacingBlock_C::SetMaterials(class UMaterialInterface* Material, TArray<class UMaterialInstanceDynamic*>* MaterialInstances)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SelfPlacingBlock_C", "SetMaterials");

	Params::BP_SelfPlacingBlock_C_SetMaterials Parms{};

	Parms.Material = Material;

	UObject::ProcessEvent(Func, &Parms);

	if (MaterialInstances != nullptr)
		*MaterialInstances = std::move(Parms.MaterialInstances);
}


// Function BP_SelfPlacingBlock.BP_SelfPlacingBlock_C.StopGlow
// (BlueprintCallable, BlueprintEvent)

void ABP_SelfPlacingBlock_C::StopGlow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SelfPlacingBlock_C", "StopGlow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SelfPlacingBlock.BP_SelfPlacingBlock_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_SelfPlacingBlock_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SelfPlacingBlock_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SelfPlacingBlock.BP_SelfPlacingBlock_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_SelfPlacingBlock_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SelfPlacingBlock_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SelfPlacingBlock.BP_SelfPlacingBlock_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void ABP_SelfPlacingBlock_C::Timeline_1__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SelfPlacingBlock_C", "Timeline_1__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SelfPlacingBlock.BP_SelfPlacingBlock_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void ABP_SelfPlacingBlock_C::Timeline_1__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SelfPlacingBlock_C", "Timeline_1__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SelfPlacingBlock.BP_SelfPlacingBlock_C.UnplaceBlock
// (BlueprintCallable, BlueprintEvent)

void ABP_SelfPlacingBlock_C::UnplaceBlock()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SelfPlacingBlock_C", "UnplaceBlock");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SelfPlacingBlock.BP_SelfPlacingBlock_C.UpdatePlacerMatOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SelfPlacingBlock_C::UpdatePlacerMatOpacity(double Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SelfPlacingBlock_C", "UpdatePlacerMatOpacity");

	Params::BP_SelfPlacingBlock_C_UpdatePlacerMatOpacity Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SelfPlacingBlock.BP_SelfPlacingBlock_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SelfPlacingBlock_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SelfPlacingBlock_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

