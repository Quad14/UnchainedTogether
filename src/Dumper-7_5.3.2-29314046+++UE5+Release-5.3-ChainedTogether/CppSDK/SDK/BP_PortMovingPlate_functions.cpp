#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PortMovingPlate

#include "Basic.hpp"

#include "BP_PortMovingPlate_classes.hpp"
#include "BP_PortMovingPlate_parameters.hpp"


namespace SDK
{

// Function BP_PortMovingPlate.BP_PortMovingPlate_C.ExecuteUbergraph_BP_PortMovingPlate
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PortMovingPlate_C::ExecuteUbergraph_BP_PortMovingPlate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PortMovingPlate_C", "ExecuteUbergraph_BP_PortMovingPlate");

	Params::BP_PortMovingPlate_C_ExecuteUbergraph_BP_PortMovingPlate Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PortMovingPlate.BP_PortMovingPlate_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PortMovingPlate_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PortMovingPlate_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PortMovingPlate.BP_PortMovingPlate_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_PortMovingPlate_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PortMovingPlate_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PortMovingPlate.BP_PortMovingPlate_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_PortMovingPlate_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PortMovingPlate_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}

