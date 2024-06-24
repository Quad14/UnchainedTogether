#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EndCinematicShake

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EndCinematicShake.EndCinematicShake_C
// 0x0000 (0x01F0 - 0x01F0)
class UEndCinematicShake_C final : public ULegacyCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EndCinematicShake_C">();
	}
	static class UEndCinematicShake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEndCinematicShake_C>();
	}
};
static_assert(alignof(UEndCinematicShake_C) == 0x000010, "Wrong alignment on UEndCinematicShake_C");
static_assert(sizeof(UEndCinematicShake_C) == 0x0001F0, "Wrong size on UEndCinematicShake_C");

}

