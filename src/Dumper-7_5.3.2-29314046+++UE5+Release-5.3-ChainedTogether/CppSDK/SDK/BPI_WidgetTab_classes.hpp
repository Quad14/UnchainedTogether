#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_WidgetTab

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_WidgetTab.BPI_WidgetTab_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_WidgetTab_C final : public IInterface
{
public:
	void SetParentWidget(class UUserWidget* Parent);
	void SetSelected(bool Selected);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_WidgetTab_C">();
	}
	static class IBPI_WidgetTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_WidgetTab_C>();
	}
};
static_assert(alignof(IBPI_WidgetTab_C) == 0x000008, "Wrong alignment on IBPI_WidgetTab_C");
static_assert(sizeof(IBPI_WidgetTab_C) == 0x000028, "Wrong size on IBPI_WidgetTab_C");

}

