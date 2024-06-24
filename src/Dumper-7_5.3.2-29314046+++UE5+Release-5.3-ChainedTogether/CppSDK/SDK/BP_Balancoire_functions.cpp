#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Balancoire

#include "Basic.hpp"

#include "BP_Balancoire_classes.hpp"
#include "BP_Balancoire_parameters.hpp"


namespace SDK
{

// Function BP_Balancoire.BP_Balancoire_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_Balancoire_C::CustomEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Balancoire_C", "CustomEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Balancoire.BP_Balancoire_C.ExecuteUbergraph_BP_Balancoire
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Balancoire_C::ExecuteUbergraph_BP_Balancoire(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Balancoire_C", "ExecuteUbergraph_BP_Balancoire");

	Params::BP_Balancoire_C_ExecuteUbergraph_BP_Balancoire Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Balancoire.BP_Balancoire_C.OnRep_RepPosition
// (BlueprintCallable, BlueprintEvent)

void ABP_Balancoire_C::OnRep_RepPosition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Balancoire_C", "OnRep_RepPosition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Balancoire.BP_Balancoire_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Balancoire_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Balancoire_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Balancoire.BP_Balancoire_C.Timeline__FinishedFunc
// (BlueprintEvent)

void ABP_Balancoire_C::Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Balancoire_C", "Timeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Balancoire.BP_Balancoire_C.Timeline__UpdateFunc
// (BlueprintEvent)

void ABP_Balancoire_C::Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Balancoire_C", "Timeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}

