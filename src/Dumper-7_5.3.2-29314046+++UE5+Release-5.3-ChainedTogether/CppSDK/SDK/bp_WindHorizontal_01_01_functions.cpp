#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: bp_WindHorizontal_01_01

#include "Basic.hpp"

#include "bp_WindHorizontal_01_01_classes.hpp"
#include "bp_WindHorizontal_01_01_parameters.hpp"


namespace SDK
{

// Function bp_WindHorizontal_01_01.bp_WindHorizontal_01_01_C.ExecuteUbergraph_bp_WindHorizontal_01_01
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_WindHorizontal_01_01_C::ExecuteUbergraph_bp_WindHorizontal_01_01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("bp_WindHorizontal_01_01_C", "ExecuteUbergraph_bp_WindHorizontal_01_01");

	Params::bp_WindHorizontal_01_01_C_ExecuteUbergraph_bp_WindHorizontal_01_01 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function bp_WindHorizontal_01_01.bp_WindHorizontal_01_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Abp_WindHorizontal_01_01_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("bp_WindHorizontal_01_01_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function bp_WindHorizontal_01_01.bp_WindHorizontal_01_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_WindHorizontal_01_01_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("bp_WindHorizontal_01_01_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

