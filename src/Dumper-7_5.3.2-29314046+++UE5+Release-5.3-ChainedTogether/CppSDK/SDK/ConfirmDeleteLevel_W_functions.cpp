#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ConfirmDeleteLevel_W

#include "Basic.hpp"

#include "ConfirmDeleteLevel_W_classes.hpp"
#include "ConfirmDeleteLevel_W_parameters.hpp"


namespace SDK
{

// Function ConfirmDeleteLevel_W.ConfirmDeleteLevel_W_C.BndEvt__W_ConfirmQuit_Button_103_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UConfirmDeleteLevel_W_C::BndEvt__W_ConfirmQuit_Button_103_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfirmDeleteLevel_W_C", "BndEvt__W_ConfirmQuit_Button_103_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ConfirmDeleteLevel_W.ConfirmDeleteLevel_W_C.BndEvt__W_ConfirmQuit_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UConfirmDeleteLevel_W_C::BndEvt__W_ConfirmQuit_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfirmDeleteLevel_W_C", "BndEvt__W_ConfirmQuit_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ConfirmDeleteLevel_W.ConfirmDeleteLevel_W_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConfirmDeleteLevel_W_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfirmDeleteLevel_W_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ConfirmDeleteLevel_W.ConfirmDeleteLevel_W_C.ExecuteUbergraph_ConfirmDeleteLevel_W
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConfirmDeleteLevel_W_C::ExecuteUbergraph_ConfirmDeleteLevel_W(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfirmDeleteLevel_W_C", "ExecuteUbergraph_ConfirmDeleteLevel_W");

	Params::ConfirmDeleteLevel_W_C_ExecuteUbergraph_ConfirmDeleteLevel_W Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

