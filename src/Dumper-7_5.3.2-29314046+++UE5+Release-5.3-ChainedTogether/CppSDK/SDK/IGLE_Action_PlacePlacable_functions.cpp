#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IGLE_Action_PlacePlacable

#include "Basic.hpp"

#include "IGLE_Action_PlacePlacable_classes.hpp"
#include "IGLE_Action_PlacePlacable_parameters.hpp"


namespace SDK
{

// Function IGLE_Action_PlacePlacable.IGLE_Action_PlacePlacable_C.ExecuteUbergraph_IGLE_Action_PlacePlacable
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIGLE_Action_PlacePlacable_C::ExecuteUbergraph_IGLE_Action_PlacePlacable(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IGLE_Action_PlacePlacable_C", "ExecuteUbergraph_IGLE_Action_PlacePlacable");

	Params::IGLE_Action_PlacePlacable_C_ExecuteUbergraph_IGLE_Action_PlacePlacable Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IGLE_Action_PlacePlacable.IGLE_Action_PlacePlacable_C.GetFriendlyActionName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           OutName                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UIGLE_Action_PlacePlacable_C::GetFriendlyActionName(class FString* OutName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IGLE_Action_PlacePlacable_C", "GetFriendlyActionName");

	Params::IGLE_Action_PlacePlacable_C_GetFriendlyActionName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutName != nullptr)
		*OutName = std::move(Parms.OutName);
}


// Function IGLE_Action_PlacePlacable.IGLE_Action_PlacePlacable_C.Initialize
// (Event, Public, BlueprintEvent)

void UIGLE_Action_PlacePlacable_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IGLE_Action_PlacePlacable_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IGLE_Action_PlacePlacable.IGLE_Action_PlacePlacable_C.RedoAction
// (Event, Public, BlueprintEvent)

void UIGLE_Action_PlacePlacable_C::RedoAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IGLE_Action_PlacePlacable_C", "RedoAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IGLE_Action_PlacePlacable.IGLE_Action_PlacePlacable_C.UndoAction
// (Event, Public, BlueprintEvent)

void UIGLE_Action_PlacePlacable_C::UndoAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IGLE_Action_PlacePlacable_C", "UndoAction");

	UObject::ProcessEvent(Func, nullptr);
}

}

