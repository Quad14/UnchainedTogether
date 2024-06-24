#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ConstructionLift_BP

#include "Basic.hpp"

#include "ConstructionLift_BP_classes.hpp"
#include "ConstructionLift_BP_parameters.hpp"


namespace SDK
{

// Function ConstructionLift_BP.ConstructionLift_BP_C.ExecuteUbergraph_ConstructionLift_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AConstructionLift_BP_C::ExecuteUbergraph_ConstructionLift_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConstructionLift_BP_C", "ExecuteUbergraph_ConstructionLift_BP");

	Params::ConstructionLift_BP_C_ExecuteUbergraph_ConstructionLift_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ConstructionLift_BP.ConstructionLift_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AConstructionLift_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConstructionLift_BP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ConstructionLift_BP.ConstructionLift_BP_C.Repeat
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Startb                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AConstructionLift_BP_C::Repeat(bool Startb)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConstructionLift_BP_C", "Repeat");

	Params::ConstructionLift_BP_C_Repeat Parms{};

	Parms.Startb = Startb;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ConstructionLift_BP.ConstructionLift_BP_C.RptSrv
// (BlueprintCallable, BlueprintEvent)

void AConstructionLift_BP_C::RptSrv()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConstructionLift_BP_C", "RptSrv");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ConstructionLift_BP.ConstructionLift_BP_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AConstructionLift_BP_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConstructionLift_BP_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ConstructionLift_BP.ConstructionLift_BP_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AConstructionLift_BP_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConstructionLift_BP_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}

