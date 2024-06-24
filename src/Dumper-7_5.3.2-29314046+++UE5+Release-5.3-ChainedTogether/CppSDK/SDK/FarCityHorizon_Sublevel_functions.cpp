#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FarCityHorizon_Sublevel

#include "Basic.hpp"

#include "FarCityHorizon_Sublevel_classes.hpp"
#include "FarCityHorizon_Sublevel_parameters.hpp"


namespace SDK
{

// Function FarCityHorizon_Sublevel.FarCityHorizon_Sublevel_C.ExecuteUbergraph_FarCityHorizon_Sublevel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFarCityHorizon_Sublevel_C::ExecuteUbergraph_FarCityHorizon_Sublevel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FarCityHorizon_Sublevel_C", "ExecuteUbergraph_FarCityHorizon_Sublevel");

	Params::FarCityHorizon_Sublevel_C_ExecuteUbergraph_FarCityHorizon_Sublevel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FarCityHorizon_Sublevel.FarCityHorizon_Sublevel_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFarCityHorizon_Sublevel_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FarCityHorizon_Sublevel_C", "ReceiveTick");

	Params::FarCityHorizon_Sublevel_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

