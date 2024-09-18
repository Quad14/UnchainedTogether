#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IGLE_SplinePointPropertyValueObject

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "IGLE_PropertyValueObject_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass IGLE_SplinePointPropertyValueObject.IGLE_SplinePointPropertyValueObject_C
// 0x0010 (0x0040 - 0x0030)
class UIGLE_SplinePointPropertyValueObject_C final : public UIGLE_PropertyValueObject_Base_C
{
public:
	TArray<struct FVector>                        Points;                                            // 0x0030(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void Add_Point();
	void RemovePoint();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IGLE_SplinePointPropertyValueObject_C">();
	}
	static class UIGLE_SplinePointPropertyValueObject_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIGLE_SplinePointPropertyValueObject_C>();
	}
};
static_assert(alignof(UIGLE_SplinePointPropertyValueObject_C) == 0x000008, "Wrong alignment on UIGLE_SplinePointPropertyValueObject_C");
static_assert(sizeof(UIGLE_SplinePointPropertyValueObject_C) == 0x000040, "Wrong size on UIGLE_SplinePointPropertyValueObject_C");
static_assert(offsetof(UIGLE_SplinePointPropertyValueObject_C, Points) == 0x000030, "Member 'UIGLE_SplinePointPropertyValueObject_C::Points' has a wrong offset!");

}

