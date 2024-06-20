#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_Trampoline

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_Trampoline.BPI_Trampoline_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_Trampoline_C final : public IInterface
{
public:
	void GetBounceForce(double* Force);
	void JustZImpulse(bool* JustZ);
	void SpawnTrampolineSound();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_Trampoline_C">();
	}
	static class IBPI_Trampoline_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_Trampoline_C>();
	}
};
static_assert(alignof(IBPI_Trampoline_C) == 0x000008, "Wrong alignment on IBPI_Trampoline_C");
static_assert(sizeof(IBPI_Trampoline_C) == 0x000028, "Wrong size on IBPI_Trampoline_C");

}

