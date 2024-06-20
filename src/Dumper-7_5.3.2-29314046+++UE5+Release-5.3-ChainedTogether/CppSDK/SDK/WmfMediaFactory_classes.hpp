#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WmfMediaFactory

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class WmfMediaFactory.WmfMediaSettings
// 0x0008 (0x0030 - 0x0028)
class UWmfMediaSettings final : public UObject
{
public:
	bool                                          AllowNonStandardCodecs;                            // 0x0028(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          LowLatency;                                        // 0x0029(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          NativeAudioOut;                                    // 0x002A(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          HardwareAcceleratedVideoDecoding;                  // 0x002B(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2974[0x4];                                     // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WmfMediaSettings">();
	}
	static class UWmfMediaSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWmfMediaSettings>();
	}
};
static_assert(alignof(UWmfMediaSettings) == 0x000008, "Wrong alignment on UWmfMediaSettings");
static_assert(sizeof(UWmfMediaSettings) == 0x000030, "Wrong size on UWmfMediaSettings");
static_assert(offsetof(UWmfMediaSettings, AllowNonStandardCodecs) == 0x000028, "Member 'UWmfMediaSettings::AllowNonStandardCodecs' has a wrong offset!");
static_assert(offsetof(UWmfMediaSettings, LowLatency) == 0x000029, "Member 'UWmfMediaSettings::LowLatency' has a wrong offset!");
static_assert(offsetof(UWmfMediaSettings, NativeAudioOut) == 0x00002A, "Member 'UWmfMediaSettings::NativeAudioOut' has a wrong offset!");
static_assert(offsetof(UWmfMediaSettings, HardwareAcceleratedVideoDecoding) == 0x00002B, "Member 'UWmfMediaSettings::HardwareAcceleratedVideoDecoding' has a wrong offset!");

}

