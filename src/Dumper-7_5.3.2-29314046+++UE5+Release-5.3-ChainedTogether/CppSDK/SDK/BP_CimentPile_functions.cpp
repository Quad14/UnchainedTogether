#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CimentPile

#include "Basic.hpp"

#include "BP_CimentPile_classes.hpp"
#include "BP_CimentPile_parameters.hpp"


namespace SDK
{

// Function BP_CimentPile.BP_CimentPile_C.Attach
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              Parent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_CimentPile_C::Attach(class UPrimitiveComponent* Parent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CimentPile_C", "Attach");

	Params::BP_CimentPile_C_Attach Parms{};

	Parms.Parent = Parent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CimentPile.BP_CimentPile_C.Detachment
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_CimentPile_C::Detachment()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CimentPile_C", "Detachment");

	Params::BP_CimentPile_C_Detachment Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_CimentPile.BP_CimentPile_C.ExecuteUbergraph_BP_CimentPile
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CimentPile_C::ExecuteUbergraph_BP_CimentPile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CimentPile_C", "ExecuteUbergraph_BP_CimentPile");

	Params::BP_CimentPile_C_ExecuteUbergraph_BP_CimentPile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

