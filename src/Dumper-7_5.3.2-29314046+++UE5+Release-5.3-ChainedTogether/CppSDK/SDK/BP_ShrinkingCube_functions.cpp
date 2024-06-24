#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ShrinkingCube

#include "Basic.hpp"

#include "BP_ShrinkingCube_classes.hpp"
#include "BP_ShrinkingCube_parameters.hpp"


namespace SDK
{

// Function BP_ShrinkingCube.BP_ShrinkingCube_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_ShrinkingCube_C::CustomEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShrinkingCube_C", "CustomEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ShrinkingCube.BP_ShrinkingCube_C.ExecuteUbergraph_BP_ShrinkingCube
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ShrinkingCube_C::ExecuteUbergraph_BP_ShrinkingCube(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShrinkingCube_C", "ExecuteUbergraph_BP_ShrinkingCube");

	Params::BP_ShrinkingCube_C_ExecuteUbergraph_BP_ShrinkingCube Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ShrinkingCube.BP_ShrinkingCube_C.OnRep_RepPosition
// (BlueprintCallable, BlueprintEvent)

void ABP_ShrinkingCube_C::OnRep_RepPosition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShrinkingCube_C", "OnRep_RepPosition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ShrinkingCube.BP_ShrinkingCube_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ShrinkingCube_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShrinkingCube_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ShrinkingCube.BP_ShrinkingCube_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ShrinkingCube_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShrinkingCube_C", "ReceiveTick");

	Params::BP_ShrinkingCube_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ShrinkingCube.BP_ShrinkingCube_C.Timeline__FinishedFunc
// (BlueprintEvent)

void ABP_ShrinkingCube_C::Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShrinkingCube_C", "Timeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ShrinkingCube.BP_ShrinkingCube_C.Timeline__UpdateFunc
// (BlueprintEvent)

void ABP_ShrinkingCube_C::Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShrinkingCube_C", "Timeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ShrinkingCube.BP_ShrinkingCube_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ShrinkingCube_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShrinkingCube_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

