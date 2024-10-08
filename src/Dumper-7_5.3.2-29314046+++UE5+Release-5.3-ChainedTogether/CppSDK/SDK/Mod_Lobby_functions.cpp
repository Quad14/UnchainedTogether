#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Mod_Lobby

#include "Basic.hpp"

#include "Mod_Lobby_classes.hpp"
#include "Mod_Lobby_parameters.hpp"


namespace SDK
{

// Function Mod_Lobby.Mod_Lobby_C.ExecuteUbergraph_Mod_Lobby
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_Lobby_C::ExecuteUbergraph_Mod_Lobby(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Mod_Lobby_C", "ExecuteUbergraph_Mod_Lobby");

	Params::Mod_Lobby_C_ExecuteUbergraph_Mod_Lobby Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Mod_Lobby.Mod_Lobby_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMod_Lobby_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Mod_Lobby_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Mod_Lobby.Mod_Lobby_C.SpawnLobbyCharacters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMod_Lobby_C::SpawnLobbyCharacters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Mod_Lobby_C", "SpawnLobbyCharacters");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Mod_Lobby.Mod_Lobby_C.Timeline__FinishedFunc
// (BlueprintEvent)

void AMod_Lobby_C::Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Mod_Lobby_C", "Timeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Mod_Lobby.Mod_Lobby_C.Timeline__UpdateFunc
// (BlueprintEvent)

void AMod_Lobby_C::Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Mod_Lobby_C", "Timeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Mod_Lobby.Mod_Lobby_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMod_Lobby_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Mod_Lobby_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

