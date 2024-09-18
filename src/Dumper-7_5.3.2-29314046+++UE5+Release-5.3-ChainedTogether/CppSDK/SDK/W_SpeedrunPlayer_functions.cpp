#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SpeedrunPlayer

#include "Basic.hpp"

#include "W_SpeedrunPlayer_classes.hpp"
#include "W_SpeedrunPlayer_parameters.hpp"


namespace SDK
{

// Function W_SpeedrunPlayer.W_SpeedrunPlayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_SpeedrunPlayer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SpeedrunPlayer_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SpeedrunPlayer.W_SpeedrunPlayer_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestRequestJSON*               Request                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_SpeedrunPlayer_C::CustomEvent(class UVaRestRequestJSON* Request)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SpeedrunPlayer_C", "CustomEvent");

	Params::W_SpeedrunPlayer_C_CustomEvent Parms{};

	Parms.Request = Request;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SpeedrunPlayer.W_SpeedrunPlayer_C.ExecuteUbergraph_W_SpeedrunPlayer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SpeedrunPlayer_C::ExecuteUbergraph_W_SpeedrunPlayer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SpeedrunPlayer_C", "ExecuteUbergraph_W_SpeedrunPlayer");

	Params::W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

