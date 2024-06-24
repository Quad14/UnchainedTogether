#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ElevatorTruck

#include "Basic.hpp"

#include "BP_ElevatorTruck_classes.hpp"
#include "BP_ElevatorTruck_parameters.hpp"


namespace SDK
{

// Function BP_ElevatorTruck.BP_ElevatorTruck_C.DetectCimentPile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ElevatorTruck_C::DetectCimentPile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ElevatorTruck_C", "DetectCimentPile");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ElevatorTruck.BP_ElevatorTruck_C.ExecuteUbergraph_BP_ElevatorTruck
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ElevatorTruck_C::ExecuteUbergraph_BP_ElevatorTruck(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ElevatorTruck_C", "ExecuteUbergraph_BP_ElevatorTruck");

	Params::BP_ElevatorTruck_C_ExecuteUbergraph_BP_ElevatorTruck Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ElevatorTruck.BP_ElevatorTruck_C.GrabCimentPileAll
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CimentPile_C*                 Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ElevatorTruck_C::GrabCimentPileAll(class ABP_CimentPile_C* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ElevatorTruck_C", "GrabCimentPileAll");

	Params::BP_ElevatorTruck_C_GrabCimentPileAll Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ElevatorTruck.BP_ElevatorTruck_C.OnRep_Lift
// (BlueprintCallable, BlueprintEvent)

void ABP_ElevatorTruck_C::OnRep_Lift()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ElevatorTruck_C", "OnRep_Lift");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ElevatorTruck.BP_ElevatorTruck_C.PlaySound
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ElevatorTruck_C::PlaySound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ElevatorTruck_C", "PlaySound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ElevatorTruck.BP_ElevatorTruck_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ElevatorTruck_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ElevatorTruck_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ElevatorTruck.BP_ElevatorTruck_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_ElevatorTruck_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ElevatorTruck_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ElevatorTruck.BP_ElevatorTruck_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_ElevatorTruck_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ElevatorTruck_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ElevatorTruck.BP_ElevatorTruck_C.Toggle Monte Charge
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ElevatorTruck_C::Toggle_Monte_Charge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ElevatorTruck_C", "Toggle Monte Charge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ElevatorTruck.BP_ElevatorTruck_C.ToggleLift
// (BlueprintCallable, BlueprintEvent)

void ABP_ElevatorTruck_C::ToggleLift()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ElevatorTruck_C", "ToggleLift");

	UObject::ProcessEvent(Func, nullptr);
}

}

