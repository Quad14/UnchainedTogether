#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StructUtils

#include "Basic.hpp"

#include "StructUtils_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class StructUtils.PropertyBagMissingObject
// 0x0000 (0x0028 - 0x0028)
class UPropertyBagMissingObject final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PropertyBagMissingObject">();
	}
	static class UPropertyBagMissingObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPropertyBagMissingObject>();
	}
};
static_assert(alignof(UPropertyBagMissingObject) == 0x000008, "Wrong alignment on UPropertyBagMissingObject");
static_assert(sizeof(UPropertyBagMissingObject) == 0x000028, "Wrong size on UPropertyBagMissingObject");

// Class StructUtils.PropertyBag
// 0x0018 (0x00D8 - 0x00C0)
class UPropertyBag final : public UScriptStruct
{
public:
	TArray<struct FPropertyBagPropertyDesc>       PropertyDescs;                                     // 0x00C0(0x0010)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_2681[0x8];                                     // 0x00D0(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PropertyBag">();
	}
	static class UPropertyBag* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPropertyBag>();
	}
};
static_assert(alignof(UPropertyBag) == 0x000008, "Wrong alignment on UPropertyBag");
static_assert(sizeof(UPropertyBag) == 0x0000D8, "Wrong size on UPropertyBag");
static_assert(offsetof(UPropertyBag, PropertyDescs) == 0x0000C0, "Member 'UPropertyBag::PropertyDescs' has a wrong offset!");

}

