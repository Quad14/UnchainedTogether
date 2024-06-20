#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Tip

#include "Basic.hpp"

#include "W_Tip_classes.hpp"
#include "W_Tip_parameters.hpp"


namespace SDK
{

// Function W_Tip.W_Tip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_Tip_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Tip_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Tip.W_Tip_C.ExecuteUbergraph_W_Tip
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Tip_C::ExecuteUbergraph_W_Tip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Tip_C", "ExecuteUbergraph_W_Tip");

	Params::W_Tip_C_ExecuteUbergraph_W_Tip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

