#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Mod_Group

#include "Basic.hpp"

#include "Mod_Group_classes.hpp"
#include "Mod_Group_parameters.hpp"


namespace SDK
{

// Function Mod_Group.Mod_Group_C.AddActorsToGroup
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>                   Actors                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AMod_Group_C::AddActorsToGroup(const TArray<class AActor*>& Actors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Mod_Group_C", "AddActorsToGroup");

	Params::Mod_Group_C_AddActorsToGroup Parms{};

	Parms.Actors = std::move(Actors);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Mod_Group.Mod_Group_C.BndEvt__Mod_Group_IGLE_Interface_K2Node_ComponentBoundEvent_0_IGLE_OnPropertyValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           PropertyName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AMod_Group_C::BndEvt__Mod_Group_IGLE_Interface_K2Node_ComponentBoundEvent_0_IGLE_OnPropertyValueChanged__DelegateSignature(const class FString& PropertyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Mod_Group_C", "BndEvt__Mod_Group_IGLE_Interface_K2Node_ComponentBoundEvent_0_IGLE_OnPropertyValueChanged__DelegateSignature");

	Params::Mod_Group_C_BndEvt__Mod_Group_IGLE_Interface_K2Node_ComponentBoundEvent_0_IGLE_OnPropertyValueChanged__DelegateSignature Parms{};

	Parms.PropertyName = std::move(PropertyName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Mod_Group.Mod_Group_C.ExecuteUbergraph_Mod_Group
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_Group_C::ExecuteUbergraph_Mod_Group(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Mod_Group_C", "ExecuteUbergraph_Mod_Group");

	Params::Mod_Group_C_ExecuteUbergraph_Mod_Group Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Mod_Group.Mod_Group_C.GetPlacableByID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                                   A                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Found                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Actor                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AMod_Group_C::GetPlacableByID(int64 A, bool* Found, class AActor** Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Mod_Group_C", "GetPlacableByID");

	Params::Mod_Group_C_GetPlacableByID Parms{};

	Parms.A = A;

	UObject::ProcessEvent(Func, &Parms);

	if (Found != nullptr)
		*Found = Parms.Found;

	if (Actor != nullptr)
		*Actor = Parms.Actor;
}


// Function Mod_Group.Mod_Group_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMod_Group_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Mod_Group_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

