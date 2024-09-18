#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SessionButton

#include "Basic.hpp"

#include "W_SessionButton_classes.hpp"
#include "W_SessionButton_parameters.hpp"


namespace SDK
{

// Function W_SessionButton.W_SessionButton_C.AdaptText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           In                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UW_SessionButton_C::AdaptText(const class FString& In)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SessionButton_C", "AdaptText");

	Params::W_SessionButton_C_AdaptText Parms{};

	Parms.In = std::move(In);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function W_SessionButton.W_SessionButton_C.BndEvt__W_SessionButton_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_SessionButton_C::BndEvt__W_SessionButton_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SessionButton_C", "BndEvt__W_SessionButton_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SessionButton.W_SessionButton_C.CheckUGC
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    UGC_Used                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           UGC_ID_0                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UW_SessionButton_C::CheckUGC(bool* UGC_Used, class FString* UGC_ID_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SessionButton_C", "CheckUGC");

	Params::W_SessionButton_C_CheckUGC Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (UGC_Used != nullptr)
		*UGC_Used = Parms.UGC_Used;

	if (UGC_ID_0 != nullptr)
		*UGC_ID_0 = std::move(Parms.UGC_ID_0);
}


// Function W_SessionButton.W_SessionButton_C.CompareVersion
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    SameVersion                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           ClientVersion                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           HostVersion                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UW_SessionButton_C::CompareVersion(bool* SameVersion, class FString* ClientVersion, class FString* HostVersion)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SessionButton_C", "CompareVersion");

	Params::W_SessionButton_C_CompareVersion Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SameVersion != nullptr)
		*SameVersion = Parms.SameVersion;

	if (ClientVersion != nullptr)
		*ClientVersion = std::move(Parms.ClientVersion);

	if (HostVersion != nullptr)
		*HostVersion = std::move(Parms.HostVersion);
}


// Function W_SessionButton.W_SessionButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_SessionButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SessionButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SessionButton.W_SessionButton_C.Downloaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Success                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SessionButton_C::Downloaded(bool Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SessionButton_C", "Downloaded");

	Params::W_SessionButton_C_Downloaded Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SessionButton.W_SessionButton_C.ExecuteUbergraph_W_SessionButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SessionButton_C::ExecuteUbergraph_W_SessionButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SessionButton_C", "ExecuteUbergraph_W_SessionButton");

	Params::W_SessionButton_C_ExecuteUbergraph_W_SessionButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SessionButton.W_SessionButton_C.Fail
// (BlueprintCallable, BlueprintEvent)

void UW_SessionButton_C::Fail()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SessionButton_C", "Fail");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SessionButton.W_SessionButton_C.GetUGCIDFromName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           SourceString                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           FullNameWithoutID                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           ID                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UW_SessionButton_C::GetUGCIDFromName(const class FString& SourceString, class FString* FullNameWithoutID, class FString* ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SessionButton_C", "GetUGCIDFromName");

	Params::W_SessionButton_C_GetUGCIDFromName Parms{};

	Parms.SourceString = std::move(SourceString);

	UObject::ProcessEvent(Func, &Parms);

	if (FullNameWithoutID != nullptr)
		*FullNameWithoutID = std::move(Parms.FullNameWithoutID);

	if (ID != nullptr)
		*ID = std::move(Parms.ID);
}


// Function W_SessionButton.W_SessionButton_C.ResetJoinSession
// (BlueprintCallable, BlueprintEvent)

void UW_SessionButton_C::ResetJoinSession()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SessionButton_C", "ResetJoinSession");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SessionButton.W_SessionButton_C.UpdateMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UW_SessionButton_C::UpdateMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SessionButton_C", "UpdateMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SessionButton.W_SessionButton_C.UpdateName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UW_SessionButton_C::UpdateName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SessionButton_C", "UpdateName");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SessionButton.W_SessionButton_C.UpdatePassword
// (Public, BlueprintCallable, BlueprintEvent)

void UW_SessionButton_C::UpdatePassword()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SessionButton_C", "UpdatePassword");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SessionButton.W_SessionButton_C.UpdatePing
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UW_SessionButton_C::UpdatePing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SessionButton_C", "UpdatePing");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SessionButton.W_SessionButton_C.UpdatePlayers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UW_SessionButton_C::UpdatePlayers()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SessionButton_C", "UpdatePlayers");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SessionButton.W_SessionButton_C.UpdateUGC
// (Public, BlueprintCallable, BlueprintEvent)

void UW_SessionButton_C::UpdateUGC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SessionButton_C", "UpdateUGC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SessionButton.W_SessionButton_C.UpdateVersion
// (Public, BlueprintCallable, BlueprintEvent)

void UW_SessionButton_C::UpdateVersion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SessionButton_C", "UpdateVersion");

	UObject::ProcessEvent(Func, nullptr);
}

}

