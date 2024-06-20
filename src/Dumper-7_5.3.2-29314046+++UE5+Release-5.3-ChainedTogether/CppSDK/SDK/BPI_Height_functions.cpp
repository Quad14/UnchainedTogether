#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_Height

#include "Basic.hpp"

#include "BPI_Height_classes.hpp"
#include "BPI_Height_parameters.hpp"


namespace SDK
{

// Function BPI_Height.BPI_Height_C.GetHeight0Location
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Height_C::GetHeight0Location(struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_Height_C", "GetHeight0Location");

	Params::BPI_Height_C_GetHeight0Location Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);
}

}

