#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IGLE_FoliageCountWidget

#include "Basic.hpp"

#include "IGLE_FoliageCountWidget_classes.hpp"
#include "IGLE_FoliageCountWidget_parameters.hpp"


namespace SDK
{

// Function IGLE_FoliageCountWidget.IGLE_FoliageCountWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIGLE_FoliageCountWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IGLE_FoliageCountWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IGLE_FoliageCountWidget.IGLE_FoliageCountWidget_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)

void UIGLE_FoliageCountWidget_C::CustomEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IGLE_FoliageCountWidget_C", "CustomEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IGLE_FoliageCountWidget.IGLE_FoliageCountWidget_C.ExecuteUbergraph_IGLE_FoliageCountWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIGLE_FoliageCountWidget_C::ExecuteUbergraph_IGLE_FoliageCountWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IGLE_FoliageCountWidget_C", "ExecuteUbergraph_IGLE_FoliageCountWidget");

	Params::IGLE_FoliageCountWidget_C_ExecuteUbergraph_IGLE_FoliageCountWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

