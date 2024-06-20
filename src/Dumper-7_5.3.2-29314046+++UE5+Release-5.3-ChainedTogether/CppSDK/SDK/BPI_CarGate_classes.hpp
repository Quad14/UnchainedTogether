#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CarGate

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_CarGate.BPI_CarGate_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_CarGate_C final : public IInterface
{
public:
	void CheckOpen();
	void Close();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_CarGate_C">();
	}
	static class IBPI_CarGate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_CarGate_C>();
	}
};
static_assert(alignof(IBPI_CarGate_C) == 0x000008, "Wrong alignment on IBPI_CarGate_C");
static_assert(sizeof(IBPI_CarGate_C) == 0x000028, "Wrong size on IBPI_CarGate_C");

}

