#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FloatingPlatform

#include "Basic.hpp"

#include "BP_FloatingPlatform_classes.hpp"
#include "BP_FloatingPlatform_parameters.hpp"


namespace SDK
{

// Function BP_FloatingPlatform.BP_FloatingPlatform_C.ExecuteUbergraph_BP_FloatingPlatform
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FloatingPlatform_C::ExecuteUbergraph_BP_FloatingPlatform(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FloatingPlatform_C", "ExecuteUbergraph_BP_FloatingPlatform");

	Params::BP_FloatingPlatform_C_ExecuteUbergraph_BP_FloatingPlatform Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FloatingPlatform.BP_FloatingPlatform_C.Optimise
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Optimise                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FloatingPlatform_C::Optimise(bool Param_Optimise)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FloatingPlatform_C", "Optimise");

	Params::BP_FloatingPlatform_C_Optimise Parms{};

	Parms.Param_Optimise = Param_Optimise;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FloatingPlatform.BP_FloatingPlatform_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FloatingPlatform_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FloatingPlatform_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FloatingPlatform.BP_FloatingPlatform_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FloatingPlatform_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FloatingPlatform_C", "ReceiveTick");

	Params::BP_FloatingPlatform_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FloatingPlatform.BP_FloatingPlatform_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FloatingPlatform_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FloatingPlatform_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

