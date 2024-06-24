#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RotativePlateforme_BP

#include "Basic.hpp"

#include "RotativePlateforme_BP_classes.hpp"
#include "RotativePlateforme_BP_parameters.hpp"


namespace SDK
{

// Function RotativePlateforme_BP.RotativePlateforme_BP_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void ARotativePlateforme_BP_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RotativePlateforme_BP_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RotativePlateforme_BP.RotativePlateforme_BP_C.ExecuteUbergraph_RotativePlateforme_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARotativePlateforme_BP_C::ExecuteUbergraph_RotativePlateforme_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RotativePlateforme_BP_C", "ExecuteUbergraph_RotativePlateforme_BP");

	Params::RotativePlateforme_BP_C_ExecuteUbergraph_RotativePlateforme_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RotativePlateforme_BP.RotativePlateforme_BP_C.OnRep_NewVar_0
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ARotativePlateforme_BP_C::OnRep_NewVar_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RotativePlateforme_BP_C", "OnRep_NewVar_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RotativePlateforme_BP.RotativePlateforme_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ARotativePlateforme_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RotativePlateforme_BP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RotativePlateforme_BP.RotativePlateforme_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARotativePlateforme_BP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RotativePlateforme_BP_C", "ReceiveTick");

	Params::RotativePlateforme_BP_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RotativePlateforme_BP.RotativePlateforme_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ARotativePlateforme_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RotativePlateforme_BP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

