#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FallingRockShake

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FallingRockShake.FallingRockShake_C
// 0x0000 (0x01F0 - 0x01F0)
class UFallingRockShake_C final : public ULegacyCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FallingRockShake_C">();
	}
	static class UFallingRockShake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFallingRockShake_C>();
	}
};
static_assert(alignof(UFallingRockShake_C) == 0x000010, "Wrong alignment on UFallingRockShake_C");
static_assert(sizeof(UFallingRockShake_C) == 0x0001F0, "Wrong size on UFallingRockShake_C");

}

