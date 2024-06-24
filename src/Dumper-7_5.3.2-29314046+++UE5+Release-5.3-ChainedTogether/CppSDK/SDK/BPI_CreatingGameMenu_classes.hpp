#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CreatingGameMenu

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_CreatingGameMenu.BPI_CreatingGameMenu_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_CreatingGameMenu_C final : public IInterface
{
public:
	void RefreshSave(const struct FS_BiomeSave& Save);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_CreatingGameMenu_C">();
	}
	static class IBPI_CreatingGameMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_CreatingGameMenu_C>();
	}
};
static_assert(alignof(IBPI_CreatingGameMenu_C) == 0x000008, "Wrong alignment on IBPI_CreatingGameMenu_C");
static_assert(sizeof(IBPI_CreatingGameMenu_C) == 0x000028, "Wrong size on IBPI_CreatingGameMenu_C");

}

