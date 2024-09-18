#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Slider

#include "Basic.hpp"

#include "W_Slider_classes.hpp"
#include "W_Slider_parameters.hpp"


namespace SDK
{

// Function W_Slider.W_Slider_C.BndEvt__W_Slider_Slider_119_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Slider_C::BndEvt__W_Slider_Slider_119_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Slider_C", "BndEvt__W_Slider_Slider_119_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	Params::W_Slider_C_BndEvt__W_Slider_Slider_119_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Slider.W_Slider_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_Slider_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Slider_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Slider.W_Slider_C.ExecuteUbergraph_W_Slider
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Slider_C::ExecuteUbergraph_W_Slider(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Slider_C", "ExecuteUbergraph_W_Slider");

	Params::W_Slider_C_ExecuteUbergraph_W_Slider Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Slider.W_Slider_C.OnValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Setting                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Slider_C::OnValueChanged__DelegateSignature(double Value, const class FString& Setting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Slider_C", "OnValueChanged__DelegateSignature");

	Params::W_Slider_C_OnValueChanged__DelegateSignature Parms{};

	Parms.Value = Value;
	Parms.Setting = std::move(Setting);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Slider.W_Slider_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Slider_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Slider_C", "PreConstruct");

	Params::W_Slider_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Slider.W_Slider_C.Refresh Slider Params
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_SliderParams                  Params_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Setting                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Slider_C::Refresh_Slider_Params(const struct FS_SliderParams& Params_0, const class FString& Setting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Slider_C", "Refresh Slider Params");

	Params::W_Slider_C_Refresh_Slider_Params Parms{};

	Parms.Params_0 = std::move(Params_0);
	Parms.Setting = std::move(Setting);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Slider.W_Slider_C.SetSliderValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Slider_C::SetSliderValue(double InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Slider_C", "SetSliderValue");

	Params::W_Slider_C_SetSliderValue Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

