#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Balancier

#include "Basic.hpp"

#include "BP_Balancier_classes.hpp"
#include "BP_Balancier_parameters.hpp"


namespace SDK
{

// Function BP_Balancier.BP_Balancier_C.DetectLeftOrRight
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  RightBalanceOut                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Balancier_C::DetectLeftOrRight(double* RightBalanceOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Balancier_C", "DetectLeftOrRight");

	Params::BP_Balancier_C_DetectLeftOrRight Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (RightBalanceOut != nullptr)
		*RightBalanceOut = Parms.RightBalanceOut;
}


// Function BP_Balancier.BP_Balancier_C.ExecuteUbergraph_BP_Balancier
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Balancier_C::ExecuteUbergraph_BP_Balancier(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Balancier_C", "ExecuteUbergraph_BP_Balancier");

	Params::BP_Balancier_C_ExecuteUbergraph_BP_Balancier Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Balancier.BP_Balancier_C.IsSomeoneMantling
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_Balancier_C::IsSomeoneMantling()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Balancier_C", "IsSomeoneMantling");

	Params::BP_Balancier_C_IsSomeoneMantling Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_Balancier.BP_Balancier_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Balancier_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Balancier_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Balancier.BP_Balancier_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Balancier_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Balancier_C", "ReceiveTick");

	Params::BP_Balancier_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

