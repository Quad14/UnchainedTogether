#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TurningStatue

#include "Basic.hpp"

#include "BP_TurningStatue_classes.hpp"
#include "BP_TurningStatue_parameters.hpp"


namespace SDK
{

// Function BP_TurningStatue.BP_TurningStatue_C.ExecuteUbergraph_BP_TurningStatue
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TurningStatue_C::ExecuteUbergraph_BP_TurningStatue(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TurningStatue_C", "ExecuteUbergraph_BP_TurningStatue");

	Params::BP_TurningStatue_C_ExecuteUbergraph_BP_TurningStatue Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TurningStatue.BP_TurningStatue_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TurningStatue_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TurningStatue_C", "ReceiveTick");

	Params::BP_TurningStatue_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

