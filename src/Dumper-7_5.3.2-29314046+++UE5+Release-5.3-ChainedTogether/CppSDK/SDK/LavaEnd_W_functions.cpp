#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LavaEnd_W

#include "Basic.hpp"

#include "LavaEnd_W_classes.hpp"
#include "LavaEnd_W_parameters.hpp"


namespace SDK
{

// Function LavaEnd_W.LavaEnd_W_C.BndEvt__LavaEnd_W_Button_169_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULavaEnd_W_C::BndEvt__LavaEnd_W_Button_169_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LavaEnd_W_C", "BndEvt__LavaEnd_W_Button_169_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LavaEnd_W.LavaEnd_W_C.BndEvt__LavaEnd_W_Button_169_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void ULavaEnd_W_C::BndEvt__LavaEnd_W_Button_169_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LavaEnd_W_C", "BndEvt__LavaEnd_W_Button_169_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LavaEnd_W.LavaEnd_W_C.BndEvt__LavaEnd_W_Button_169_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void ULavaEnd_W_C::BndEvt__LavaEnd_W_Button_169_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LavaEnd_W_C", "BndEvt__LavaEnd_W_Button_169_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LavaEnd_W.LavaEnd_W_C.BndEvt__LavaEnd_W_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULavaEnd_W_C::BndEvt__LavaEnd_W_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LavaEnd_W_C", "BndEvt__LavaEnd_W_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LavaEnd_W.LavaEnd_W_C.BndEvt__LavaEnd_W_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void ULavaEnd_W_C::BndEvt__LavaEnd_W_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LavaEnd_W_C", "BndEvt__LavaEnd_W_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LavaEnd_W.LavaEnd_W_C.BndEvt__LavaEnd_W_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void ULavaEnd_W_C::BndEvt__LavaEnd_W_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LavaEnd_W_C", "BndEvt__LavaEnd_W_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LavaEnd_W.LavaEnd_W_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULavaEnd_W_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LavaEnd_W_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LavaEnd_W.LavaEnd_W_C.ExecuteUbergraph_LavaEnd_W
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULavaEnd_W_C::ExecuteUbergraph_LavaEnd_W(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LavaEnd_W_C", "ExecuteUbergraph_LavaEnd_W");

	Params::LavaEnd_W_C_ExecuteUbergraph_LavaEnd_W Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LavaEnd_W.LavaEnd_W_C.GetHeightTexteMeter
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Self2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                           Return                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void ULavaEnd_W_C::GetHeightTexteMeter(class AActor* Self2, class FString* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LavaEnd_W_C", "GetHeightTexteMeter");

	Params::LavaEnd_W_C_GetHeightTexteMeter Parms{};

	Parms.Self2 = Self2;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = std::move(Parms.Return);
}

}

