#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: bp_neon_light_a_01MinusON1

#include "Basic.hpp"

#include "bp_neon_light_a_01MinusON1_classes.hpp"
#include "bp_neon_light_a_01MinusON1_parameters.hpp"


namespace SDK
{

// Function bp_neon_light_a_01-ON1.bp_neon_light_a_01-ON1_C.ExecuteUbergraph_bp_neon_light_a_01-ON1
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_neon_light_a_01MinusON1_C::ExecuteUbergraph_bp_neon_light_a_01MinusON1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("bp_neon_light_a_01-ON1_C", "ExecuteUbergraph_bp_neon_light_a_01-ON1");

	Params::bp_neon_light_a_01MinusON1_C_ExecuteUbergraph_bp_neon_light_a_01MinusON1 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function bp_neon_light_a_01-ON1.bp_neon_light_a_01-ON1_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Abp_neon_light_a_01MinusON1_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("bp_neon_light_a_01-ON1_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function bp_neon_light_a_01-ON1.bp_neon_light_a_01-ON1_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void Abp_neon_light_a_01MinusON1_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("bp_neon_light_a_01-ON1_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function bp_neon_light_a_01-ON1.bp_neon_light_a_01-ON1_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void Abp_neon_light_a_01MinusON1_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("bp_neon_light_a_01-ON1_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function bp_neon_light_a_01-ON1.bp_neon_light_a_01-ON1_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_neon_light_a_01MinusON1_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("bp_neon_light_a_01-ON1_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

