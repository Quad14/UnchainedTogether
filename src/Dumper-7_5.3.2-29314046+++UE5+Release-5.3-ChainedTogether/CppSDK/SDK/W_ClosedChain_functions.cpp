#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ClosedChain

#include "Basic.hpp"

#include "W_ClosedChain_classes.hpp"
#include "W_ClosedChain_parameters.hpp"


namespace SDK
{

// Function W_ClosedChain.W_ClosedChain_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_ClosedChain_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ClosedChain_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_ClosedChain.W_ClosedChain_C.ExecuteUbergraph_W_ClosedChain
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ClosedChain_C::ExecuteUbergraph_W_ClosedChain(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ClosedChain_C", "ExecuteUbergraph_W_ClosedChain");

	Params::W_ClosedChain_C_ExecuteUbergraph_W_ClosedChain Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

