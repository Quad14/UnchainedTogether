#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IGLE_AxisProperty

#include "Basic.hpp"

#include "IGLE_PropertyValueObject_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass IGLE_AxisProperty.IGLE_AxisProperty_C
// 0x0010 (0x0040 - 0x0030)
class UIGLE_AxisProperty_C final : public UIGLE_PropertyValueObject_Base_C
{
public:
	class FString                                 Axis;                                              // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IGLE_AxisProperty_C">();
	}
	static class UIGLE_AxisProperty_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIGLE_AxisProperty_C>();
	}
};
static_assert(alignof(UIGLE_AxisProperty_C) == 0x000008, "Wrong alignment on UIGLE_AxisProperty_C");
static_assert(sizeof(UIGLE_AxisProperty_C) == 0x000040, "Wrong size on UIGLE_AxisProperty_C");
static_assert(offsetof(UIGLE_AxisProperty_C, Axis) == 0x000030, "Member 'UIGLE_AxisProperty_C::Axis' has a wrong offset!");

}

