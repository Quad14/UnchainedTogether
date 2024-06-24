#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MovingRope

#include "Basic.hpp"

#include "BP_MovingRope_classes.hpp"
#include "BP_MovingRope_parameters.hpp"


namespace SDK
{

// Function BP_MovingRope.BP_MovingRope_C.CheckDoorOpen
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MovingRope_C::CheckDoorOpen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MovingRope_C", "CheckDoorOpen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MovingRope.BP_MovingRope_C.ExecuteUbergraph_BP_MovingRope
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MovingRope_C::ExecuteUbergraph_BP_MovingRope(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MovingRope_C", "ExecuteUbergraph_BP_MovingRope");

	Params::BP_MovingRope_C_ExecuteUbergraph_BP_MovingRope Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MovingRope.BP_MovingRope_C.GetPivotAlpha
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Alpha                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MovingRope_C::GetPivotAlpha(double* Alpha)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MovingRope_C", "GetPivotAlpha");

	Params::BP_MovingRope_C_GetPivotAlpha Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Alpha != nullptr)
		*Alpha = Parms.Alpha;
}


// Function BP_MovingRope.BP_MovingRope_C.OnPivot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Axis                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MovingRope_C::OnPivot(double Axis)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MovingRope_C", "OnPivot");

	Params::BP_MovingRope_C_OnPivot Parms{};

	Parms.Axis = Axis;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MovingRope.BP_MovingRope_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MovingRope_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MovingRope_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

