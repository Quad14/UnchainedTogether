#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_ModButton

#include "Basic.hpp"

#include "BPI_ModButton_classes.hpp"
#include "BPI_ModButton_parameters.hpp"


namespace SDK
{

// Function BPI_ModButton.BPI_ModButton_C.Trigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Start                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  Duration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_ModButton_C::Trigger(bool Start, class AActor* Actor, double Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_ModButton_C", "Trigger");

	Params::BPI_ModButton_C_Trigger Parms{};

	Parms.Start = Start;
	Parms.Actor = Actor;
	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);
}

}

