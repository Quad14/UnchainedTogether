#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PivotPlanche

#include "Basic.hpp"

#include "BP_PivotPlanche_classes.hpp"
#include "BP_PivotPlanche_parameters.hpp"


namespace SDK
{

// Function BP_PivotPlanche.BP_PivotPlanche_C.ExecuteUbergraph_BP_PivotPlanche
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PivotPlanche_C::ExecuteUbergraph_BP_PivotPlanche(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PivotPlanche_C", "ExecuteUbergraph_BP_PivotPlanche");

	Params::BP_PivotPlanche_C_ExecuteUbergraph_BP_PivotPlanche Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PivotPlanche.BP_PivotPlanche_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PivotPlanche_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PivotPlanche_C", "ReceiveTick");

	Params::BP_PivotPlanche_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PivotPlanche.BP_PivotPlanche_C.SetRotationDeltaTarget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Delta1                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PivotPlanche_C::SetRotationDeltaTarget(double* Delta1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PivotPlanche_C", "SetRotationDeltaTarget");

	Params::BP_PivotPlanche_C_SetRotationDeltaTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Delta1 != nullptr)
		*Delta1 = Parms.Delta1;
}

}

