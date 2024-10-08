#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IGLE_Action_ChangeGizmoState

#include "Basic.hpp"

#include "IGLE_Action_ChangeGizmoState_classes.hpp"
#include "IGLE_Action_ChangeGizmoState_parameters.hpp"


namespace SDK
{

// Function IGLE_Action_ChangeGizmoState.IGLE_Action_ChangeGizmoState_C.ExecuteUbergraph_IGLE_Action_ChangeGizmoState
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIGLE_Action_ChangeGizmoState_C::ExecuteUbergraph_IGLE_Action_ChangeGizmoState(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IGLE_Action_ChangeGizmoState_C", "ExecuteUbergraph_IGLE_Action_ChangeGizmoState");

	Params::IGLE_Action_ChangeGizmoState_C_ExecuteUbergraph_IGLE_Action_ChangeGizmoState Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IGLE_Action_ChangeGizmoState.IGLE_Action_ChangeGizmoState_C.GetFriendlyActionName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           OutName                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UIGLE_Action_ChangeGizmoState_C::GetFriendlyActionName(class FString* OutName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IGLE_Action_ChangeGizmoState_C", "GetFriendlyActionName");

	Params::IGLE_Action_ChangeGizmoState_C_GetFriendlyActionName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutName != nullptr)
		*OutName = std::move(Parms.OutName);
}


// Function IGLE_Action_ChangeGizmoState.IGLE_Action_ChangeGizmoState_C.RedoAction
// (Event, Public, BlueprintEvent)

void UIGLE_Action_ChangeGizmoState_C::RedoAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IGLE_Action_ChangeGizmoState_C", "RedoAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IGLE_Action_ChangeGizmoState.IGLE_Action_ChangeGizmoState_C.UndoAction
// (Event, Public, BlueprintEvent)

void UIGLE_Action_ChangeGizmoState_C::UndoAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IGLE_Action_ChangeGizmoState_C", "UndoAction");

	UObject::ProcessEvent(Func, nullptr);
}

}

