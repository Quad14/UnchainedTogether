#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tunnel_Fan_BP

#include "Basic.hpp"

#include "Tunnel_Fan_BP_classes.hpp"
#include "Tunnel_Fan_BP_parameters.hpp"


namespace SDK
{

// Function Tunnel_Fan_BP.Tunnel_Fan_BP_C.ExecuteUbergraph_Tunnel_Fan_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATunnel_Fan_BP_C::ExecuteUbergraph_Tunnel_Fan_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tunnel_Fan_BP_C", "ExecuteUbergraph_Tunnel_Fan_BP");

	Params::Tunnel_Fan_BP_C_ExecuteUbergraph_Tunnel_Fan_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Tunnel_Fan_BP.Tunnel_Fan_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATunnel_Fan_BP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tunnel_Fan_BP_C", "ReceiveTick");

	Params::Tunnel_Fan_BP_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

