#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPT_Drone

#include "Basic.hpp"

#include "BPT_Drone_classes.hpp"
#include "BPT_Drone_parameters.hpp"


namespace SDK
{

// Function BPT_Drone.BPT_Drone_C.ExecuteUbergraph_BPT_Drone
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPT_Drone_C::ExecuteUbergraph_BPT_Drone(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPT_Drone_C", "ExecuteUbergraph_BPT_Drone");

	Params::BPT_Drone_C_ExecuteUbergraph_BPT_Drone Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPT_Drone.BPT_Drone_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPT_Drone_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPT_Drone_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPT_Drone.BPT_Drone_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPT_Drone_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPT_Drone_C", "ReceiveTick");

	Params::BPT_Drone_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

