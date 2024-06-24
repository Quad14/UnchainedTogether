#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PS_Lobby

#include "Basic.hpp"

#include "E_ChoosenChar_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PS_Lobby.PS_Lobby_C
// 0x0018 (0x0368 - 0x0350)
class APS_Lobby_C : public APlayerState
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	E_ChoosenChar                                 ChosenChar;                                        // 0x0358(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_323B[0x7];                                     // 0x0359(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 ChosenCharBP;                                      // 0x0360(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void OnRep_ChosenChar();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PS_Lobby_C">();
	}
	static class APS_Lobby_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APS_Lobby_C>();
	}
};
static_assert(alignof(APS_Lobby_C) == 0x000008, "Wrong alignment on APS_Lobby_C");
static_assert(sizeof(APS_Lobby_C) == 0x000368, "Wrong size on APS_Lobby_C");
static_assert(offsetof(APS_Lobby_C, DefaultSceneRoot) == 0x000350, "Member 'APS_Lobby_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(APS_Lobby_C, ChosenChar) == 0x000358, "Member 'APS_Lobby_C::ChosenChar' has a wrong offset!");
static_assert(offsetof(APS_Lobby_C, ChosenCharBP) == 0x000360, "Member 'APS_Lobby_C::ChosenCharBP' has a wrong offset!");

}

