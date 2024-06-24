#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Panel_Widget

#include "Basic.hpp"

#include "Panel_Widget_classes.hpp"
#include "Panel_Widget_parameters.hpp"


namespace SDK
{

// Function Panel_Widget.Panel_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPanel_Widget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Panel_Widget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Panel_Widget.Panel_Widget_C.ExecuteUbergraph_Panel_Widget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPanel_Widget_C::ExecuteUbergraph_Panel_Widget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Panel_Widget_C", "ExecuteUbergraph_Panel_Widget");

	Params::Panel_Widget_C_ExecuteUbergraph_Panel_Widget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

