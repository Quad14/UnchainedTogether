#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_LobbyCharacter

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "E_ChoosenChar_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_LobbyCharacter.BPI_LobbyCharacter_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_LobbyCharacter_C final : public IInterface
{
public:
	void SetAffectedPS(class APlayerState* Ps);
	void SetChosenChar(E_ChoosenChar ChosenChar);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_LobbyCharacter_C">();
	}
	static class IBPI_LobbyCharacter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_LobbyCharacter_C>();
	}
};
static_assert(alignof(IBPI_LobbyCharacter_C) == 0x000008, "Wrong alignment on IBPI_LobbyCharacter_C");
static_assert(sizeof(IBPI_LobbyCharacter_C) == 0x000028, "Wrong size on IBPI_LobbyCharacter_C");

}

