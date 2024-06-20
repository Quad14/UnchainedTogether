#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CityHoleDoors

#include "Basic.hpp"

#include "BP_CityHoleDoors_classes.hpp"
#include "BP_CityHoleDoors_parameters.hpp"


namespace SDK
{

// Function BP_CityHoleDoors.BP_CityHoleDoors_C.Close
// (BlueprintCallable, BlueprintEvent)

void ABP_CityHoleDoors_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CityHoleDoors_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CityHoleDoors.BP_CityHoleDoors_C.ExecuteUbergraph_BP_CityHoleDoors
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CityHoleDoors_C::ExecuteUbergraph_BP_CityHoleDoors(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CityHoleDoors_C", "ExecuteUbergraph_BP_CityHoleDoors");

	Params::BP_CityHoleDoors_C_ExecuteUbergraph_BP_CityHoleDoors Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CityHoleDoors.BP_CityHoleDoors_C.Open
// (BlueprintCallable, BlueprintEvent)

void ABP_CityHoleDoors_C::Open()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CityHoleDoors_C", "Open");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CityHoleDoors.BP_CityHoleDoors_C.Timeline__FinishedFunc
// (BlueprintEvent)

void ABP_CityHoleDoors_C::Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CityHoleDoors_C", "Timeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CityHoleDoors.BP_CityHoleDoors_C.Timeline__UpdateFunc
// (BlueprintEvent)

void ABP_CityHoleDoors_C::Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CityHoleDoors_C", "Timeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CityHoleDoors.BP_CityHoleDoors_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_CityHoleDoors_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CityHoleDoors_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

