#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WaveTable

#include "Basic.hpp"

#include "WaveTable_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class WaveTable.WaveTableBank
// 0x0038 (0x0060 - 0x0028)
class UWaveTableBank final : public UObject
{
public:
	uint8                                         Pad_2B36[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	EWaveTableSamplingMode                        SampleMode;                                        // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EWaveTableResolution                          Resolution;                                        // 0x0031(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2B37[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SampleRate;                                        // 0x0034(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bBipolar;                                          // 0x0038(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2B38[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FWaveTableBankEntry>            Entries;                                           // 0x0040(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_2B39[0x10];                                    // 0x0050(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaveTableBank">();
	}
	static class UWaveTableBank* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaveTableBank>();
	}
};
static_assert(alignof(UWaveTableBank) == 0x000008, "Wrong alignment on UWaveTableBank");
static_assert(sizeof(UWaveTableBank) == 0x000060, "Wrong size on UWaveTableBank");
static_assert(offsetof(UWaveTableBank, SampleMode) == 0x000030, "Member 'UWaveTableBank::SampleMode' has a wrong offset!");
static_assert(offsetof(UWaveTableBank, Resolution) == 0x000031, "Member 'UWaveTableBank::Resolution' has a wrong offset!");
static_assert(offsetof(UWaveTableBank, SampleRate) == 0x000034, "Member 'UWaveTableBank::SampleRate' has a wrong offset!");
static_assert(offsetof(UWaveTableBank, bBipolar) == 0x000038, "Member 'UWaveTableBank::bBipolar' has a wrong offset!");
static_assert(offsetof(UWaveTableBank, Entries) == 0x000040, "Member 'UWaveTableBank::Entries' has a wrong offset!");

}

