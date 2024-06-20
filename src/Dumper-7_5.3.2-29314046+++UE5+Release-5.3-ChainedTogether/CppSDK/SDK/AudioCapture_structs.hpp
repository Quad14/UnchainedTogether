#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioCapture

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct AudioCapture.AudioInputDeviceInfo
// 0x0030 (0x0030 - 0x0000)
struct FAudioInputDeviceInfo final
{
public:
	class FString                                 DeviceName;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DeviceID;                                          // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InputChannels;                                     // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PreferredSampleRate;                               // 0x0024(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bSupportsHardwareAEC : 1;                          // 0x0028(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_24DB[0x7];                                     // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAudioInputDeviceInfo) == 0x000008, "Wrong alignment on FAudioInputDeviceInfo");
static_assert(sizeof(FAudioInputDeviceInfo) == 0x000030, "Wrong size on FAudioInputDeviceInfo");
static_assert(offsetof(FAudioInputDeviceInfo, DeviceName) == 0x000000, "Member 'FAudioInputDeviceInfo::DeviceName' has a wrong offset!");
static_assert(offsetof(FAudioInputDeviceInfo, DeviceID) == 0x000010, "Member 'FAudioInputDeviceInfo::DeviceID' has a wrong offset!");
static_assert(offsetof(FAudioInputDeviceInfo, InputChannels) == 0x000020, "Member 'FAudioInputDeviceInfo::InputChannels' has a wrong offset!");
static_assert(offsetof(FAudioInputDeviceInfo, PreferredSampleRate) == 0x000024, "Member 'FAudioInputDeviceInfo::PreferredSampleRate' has a wrong offset!");

// ScriptStruct AudioCapture.AudioCaptureDeviceInfo
// 0x0010 (0x0010 - 0x0000)
struct FAudioCaptureDeviceInfo final
{
public:
	class FName                                   DeviceName;                                        // 0x0000(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumInputChannels;                                  // 0x0008(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SampleRate;                                        // 0x000C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAudioCaptureDeviceInfo) == 0x000004, "Wrong alignment on FAudioCaptureDeviceInfo");
static_assert(sizeof(FAudioCaptureDeviceInfo) == 0x000010, "Wrong size on FAudioCaptureDeviceInfo");
static_assert(offsetof(FAudioCaptureDeviceInfo, DeviceName) == 0x000000, "Member 'FAudioCaptureDeviceInfo::DeviceName' has a wrong offset!");
static_assert(offsetof(FAudioCaptureDeviceInfo, NumInputChannels) == 0x000008, "Member 'FAudioCaptureDeviceInfo::NumInputChannels' has a wrong offset!");
static_assert(offsetof(FAudioCaptureDeviceInfo, SampleRate) == 0x00000C, "Member 'FAudioCaptureDeviceInfo::SampleRate' has a wrong offset!");

}

