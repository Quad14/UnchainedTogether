#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SoloPlay_W

#include "Basic.hpp"

#include "SoloPlay_W_classes.hpp"
#include "SoloPlay_W_parameters.hpp"


namespace SDK
{

// Function SoloPlay_W.SoloPlay_W_C.BndEvt__SoloPlay_W_Back_Button_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USoloPlay_W_C::BndEvt__SoloPlay_W_Back_Button_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoloPlay_W_C", "BndEvt__SoloPlay_W_Back_Button_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SoloPlay_W.SoloPlay_W_C.BndEvt__SoloPlay_W_Play_Button_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USoloPlay_W_C::BndEvt__SoloPlay_W_Play_Button_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoloPlay_W_C", "BndEvt__SoloPlay_W_Play_Button_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SoloPlay_W.SoloPlay_W_C.BndEvt__SoloPlay_W_W_ComboBox_2_K2Node_ComponentBoundEvent_11_OnComboSettingChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           NewSelection                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USoloPlay_W_C::BndEvt__SoloPlay_W_W_ComboBox_2_K2Node_ComponentBoundEvent_11_OnComboSettingChange__DelegateSignature(const class FString& NewSelection, ESelectInfo SelectType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoloPlay_W_C", "BndEvt__SoloPlay_W_W_ComboBox_2_K2Node_ComponentBoundEvent_11_OnComboSettingChange__DelegateSignature");

	Params::SoloPlay_W_C_BndEvt__SoloPlay_W_W_ComboBox_2_K2Node_ComponentBoundEvent_11_OnComboSettingChange__DelegateSignature Parms{};

	Parms.NewSelection = std::move(NewSelection);
	Parms.SelectType = SelectType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SoloPlay_W.SoloPlay_W_C.BndEvt__W_CreateSession_Button_147_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USoloPlay_W_C::BndEvt__W_CreateSession_Button_147_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoloPlay_W_C", "BndEvt__W_CreateSession_Button_147_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SoloPlay_W.SoloPlay_W_C.BndEvt__W_CreateSession_Button_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USoloPlay_W_C::BndEvt__W_CreateSession_Button_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoloPlay_W_C", "BndEvt__W_CreateSession_Button_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SoloPlay_W.SoloPlay_W_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USoloPlay_W_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoloPlay_W_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SoloPlay_W.SoloPlay_W_C.ExecuteUbergraph_SoloPlay_W
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USoloPlay_W_C::ExecuteUbergraph_SoloPlay_W(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoloPlay_W_C", "ExecuteUbergraph_SoloPlay_W");

	Params::SoloPlay_W_C_ExecuteUbergraph_SoloPlay_W Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SoloPlay_W.SoloPlay_W_C.RefreshSave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_BiomeSave                     Save                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void USoloPlay_W_C::RefreshSave(const struct FS_BiomeSave& Save)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoloPlay_W_C", "RefreshSave");

	Params::SoloPlay_W_C_RefreshSave Parms{};

	Parms.Save = std::move(Save);

	UObject::ProcessEvent(Func, &Parms);
}

}

