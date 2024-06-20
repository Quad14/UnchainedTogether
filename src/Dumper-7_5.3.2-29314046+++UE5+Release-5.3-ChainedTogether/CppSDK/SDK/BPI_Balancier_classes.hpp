#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_Balancier

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_Balancier.BPI_Balancier_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_Balancier_C final : public IInterface
{
public:
	void AttachMaillonToHands(class USceneComponent* Socket, class UPrimitiveComponent* Maillon);
	void DetachMaillons();
	void GetMaillonByIndex(int32 Param_Index, class UPrimitiveComponent** Maillon);
	void GetMaillonIndex(class UPrimitiveComponent* Maillon, int32* Param_Index);
	void GetRoot(class UPrimitiveComponent** Root);
	void IsOccupied(bool* Occupied);
	void SetOccupied(bool Occupied);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_Balancier_C">();
	}
	static class IBPI_Balancier_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_Balancier_C>();
	}
};
static_assert(alignof(IBPI_Balancier_C) == 0x000008, "Wrong alignment on IBPI_Balancier_C");
static_assert(sizeof(IBPI_Balancier_C) == 0x000028, "Wrong size on IBPI_Balancier_C");

}

