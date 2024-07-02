#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioExtensions

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class AudioExtensions.SpatializationPluginSourceSettingsBase
// 0x0000 (0x0028 - 0x0028)
class USpatializationPluginSourceSettingsBase : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpatializationPluginSourceSettingsBase">();
	}
	static class USpatializationPluginSourceSettingsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpatializationPluginSourceSettingsBase>();
	}
};
static_assert(alignof(USpatializationPluginSourceSettingsBase) == 0x000008, "Wrong alignment on USpatializationPluginSourceSettingsBase");
static_assert(sizeof(USpatializationPluginSourceSettingsBase) == 0x000028, "Wrong size on USpatializationPluginSourceSettingsBase");

// Class AudioExtensions.SourceDataOverridePluginSourceSettingsBase
// 0x0000 (0x0028 - 0x0028)
class USourceDataOverridePluginSourceSettingsBase final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SourceDataOverridePluginSourceSettingsBase">();
	}
	static class USourceDataOverridePluginSourceSettingsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USourceDataOverridePluginSourceSettingsBase>();
	}
};
static_assert(alignof(USourceDataOverridePluginSourceSettingsBase) == 0x000008, "Wrong alignment on USourceDataOverridePluginSourceSettingsBase");
static_assert(sizeof(USourceDataOverridePluginSourceSettingsBase) == 0x000028, "Wrong size on USourceDataOverridePluginSourceSettingsBase");

// Class AudioExtensions.OcclusionPluginSourceSettingsBase
// 0x0000 (0x0028 - 0x0028)
class UOcclusionPluginSourceSettingsBase final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OcclusionPluginSourceSettingsBase">();
	}
	static class UOcclusionPluginSourceSettingsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOcclusionPluginSourceSettingsBase>();
	}
};
static_assert(alignof(UOcclusionPluginSourceSettingsBase) == 0x000008, "Wrong alignment on UOcclusionPluginSourceSettingsBase");
static_assert(sizeof(UOcclusionPluginSourceSettingsBase) == 0x000028, "Wrong size on UOcclusionPluginSourceSettingsBase");

// Class AudioExtensions.ReverbPluginSourceSettingsBase
// 0x0000 (0x0028 - 0x0028)
class UReverbPluginSourceSettingsBase final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReverbPluginSourceSettingsBase">();
	}
	static class UReverbPluginSourceSettingsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReverbPluginSourceSettingsBase>();
	}
};
static_assert(alignof(UReverbPluginSourceSettingsBase) == 0x000008, "Wrong alignment on UReverbPluginSourceSettingsBase");
static_assert(sizeof(UReverbPluginSourceSettingsBase) == 0x000028, "Wrong size on UReverbPluginSourceSettingsBase");

// Class AudioExtensions.AudioParameterControllerInterface
// 0x0000 (0x0028 - 0x0028)
class IAudioParameterControllerInterface : public IInterface
{
public:
	void ResetParameters();
	void SetBoolArrayParameter(class FName InName, const TArray<bool>& InValue);
	void SetBoolParameter(class FName InName, bool InBool);
	void SetFloatArrayParameter(class FName InName, const TArray<float>& InValue);
	void SetFloatParameter(class FName InName, float InFloat);
	void SetIntArrayParameter(class FName InName, const TArray<int32>& InValue);
	void SetIntParameter(class FName InName, int32 InInt);
	void SetObjectArrayParameter(class FName InName, const TArray<class UObject*>& InValue);
	void SetObjectParameter(class FName InName, class UObject* InValue);
	void SetParameters_Blueprint(const TArray<struct FAudioParameter>& InParameters);
	void SetStringArrayParameter(class FName InName, const TArray<class FString>& InValue);
	void SetStringParameter(class FName InName, const class FString& InValue);
	void SetTriggerParameter(class FName InName);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioParameterControllerInterface">();
	}
	static class IAudioParameterControllerInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IAudioParameterControllerInterface>();
	}
};
static_assert(alignof(IAudioParameterControllerInterface) == 0x000008, "Wrong alignment on IAudioParameterControllerInterface");
static_assert(sizeof(IAudioParameterControllerInterface) == 0x000028, "Wrong size on IAudioParameterControllerInterface");

// Class AudioExtensions.AudioCodecEncoderSettings
// 0x0008 (0x0030 - 0x0028)
class UAudioCodecEncoderSettings final : public UObject
{
public:
	int32                                         Version;                                           // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_161[0x4];                                      // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioCodecEncoderSettings">();
	}
	static class UAudioCodecEncoderSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioCodecEncoderSettings>();
	}
};
static_assert(alignof(UAudioCodecEncoderSettings) == 0x000008, "Wrong alignment on UAudioCodecEncoderSettings");
static_assert(sizeof(UAudioCodecEncoderSettings) == 0x000030, "Wrong size on UAudioCodecEncoderSettings");
static_assert(offsetof(UAudioCodecEncoderSettings, Version) == 0x000028, "Member 'UAudioCodecEncoderSettings::Version' has a wrong offset!");

// Class AudioExtensions.AudioEndpointSettingsBase
// 0x0000 (0x0028 - 0x0028)
class UAudioEndpointSettingsBase : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioEndpointSettingsBase">();
	}
	static class UAudioEndpointSettingsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioEndpointSettingsBase>();
	}
};
static_assert(alignof(UAudioEndpointSettingsBase) == 0x000008, "Wrong alignment on UAudioEndpointSettingsBase");
static_assert(sizeof(UAudioEndpointSettingsBase) == 0x000028, "Wrong size on UAudioEndpointSettingsBase");

// Class AudioExtensions.DummyEndpointSettings
// 0x0000 (0x0028 - 0x0028)
class UDummyEndpointSettings final : public UAudioEndpointSettingsBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DummyEndpointSettings">();
	}
	static class UDummyEndpointSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDummyEndpointSettings>();
	}
};
static_assert(alignof(UDummyEndpointSettings) == 0x000008, "Wrong alignment on UDummyEndpointSettings");
static_assert(sizeof(UDummyEndpointSettings) == 0x000028, "Wrong size on UDummyEndpointSettings");

// Class AudioExtensions.SoundModulatorBase
// 0x0008 (0x0030 - 0x0028)
class USoundModulatorBase final : public UObject
{
public:
	uint8                                         Pad_162[0x8];                                      // 0x0028(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundModulatorBase">();
	}
	static class USoundModulatorBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundModulatorBase>();
	}
};
static_assert(alignof(USoundModulatorBase) == 0x000008, "Wrong alignment on USoundModulatorBase");
static_assert(sizeof(USoundModulatorBase) == 0x000030, "Wrong size on USoundModulatorBase");

// Class AudioExtensions.SoundfieldEndpointSettingsBase
// 0x0000 (0x0028 - 0x0028)
class USoundfieldEndpointSettingsBase final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundfieldEndpointSettingsBase">();
	}
	static class USoundfieldEndpointSettingsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundfieldEndpointSettingsBase>();
	}
};
static_assert(alignof(USoundfieldEndpointSettingsBase) == 0x000008, "Wrong alignment on USoundfieldEndpointSettingsBase");
static_assert(sizeof(USoundfieldEndpointSettingsBase) == 0x000028, "Wrong size on USoundfieldEndpointSettingsBase");

// Class AudioExtensions.SoundfieldEncodingSettingsBase
// 0x0000 (0x0028 - 0x0028)
class USoundfieldEncodingSettingsBase : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundfieldEncodingSettingsBase">();
	}
	static class USoundfieldEncodingSettingsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundfieldEncodingSettingsBase>();
	}
};
static_assert(alignof(USoundfieldEncodingSettingsBase) == 0x000008, "Wrong alignment on USoundfieldEncodingSettingsBase");
static_assert(sizeof(USoundfieldEncodingSettingsBase) == 0x000028, "Wrong size on USoundfieldEncodingSettingsBase");

// Class AudioExtensions.SoundfieldEffectSettingsBase
// 0x0000 (0x0028 - 0x0028)
class USoundfieldEffectSettingsBase final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundfieldEffectSettingsBase">();
	}
	static class USoundfieldEffectSettingsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundfieldEffectSettingsBase>();
	}
};
static_assert(alignof(USoundfieldEffectSettingsBase) == 0x000008, "Wrong alignment on USoundfieldEffectSettingsBase");
static_assert(sizeof(USoundfieldEffectSettingsBase) == 0x000028, "Wrong size on USoundfieldEffectSettingsBase");

// Class AudioExtensions.SoundfieldEffectBase
// 0x0008 (0x0030 - 0x0028)
class USoundfieldEffectBase final : public UObject
{
public:
	class USoundfieldEffectSettingsBase*          Settings;                                          // 0x0028(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundfieldEffectBase">();
	}
	static class USoundfieldEffectBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundfieldEffectBase>();
	}
};
static_assert(alignof(USoundfieldEffectBase) == 0x000008, "Wrong alignment on USoundfieldEffectBase");
static_assert(sizeof(USoundfieldEffectBase) == 0x000030, "Wrong size on USoundfieldEffectBase");
static_assert(offsetof(USoundfieldEffectBase, Settings) == 0x000028, "Member 'USoundfieldEffectBase::Settings' has a wrong offset!");

// Class AudioExtensions.WaveformTransformationBase
// 0x0000 (0x0028 - 0x0028)
class UWaveformTransformationBase final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaveformTransformationBase">();
	}
	static class UWaveformTransformationBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaveformTransformationBase>();
	}
};
static_assert(alignof(UWaveformTransformationBase) == 0x000008, "Wrong alignment on UWaveformTransformationBase");
static_assert(sizeof(UWaveformTransformationBase) == 0x000028, "Wrong size on UWaveformTransformationBase");

// Class AudioExtensions.WaveformTransformationChain
// 0x0010 (0x0038 - 0x0028)
class UWaveformTransformationChain final : public UObject
{
public:
	TArray<class UWaveformTransformationBase*>    Transformations;                                   // 0x0028(0x0010)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaveformTransformationChain">();
	}
	static class UWaveformTransformationChain* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaveformTransformationChain>();
	}
};
static_assert(alignof(UWaveformTransformationChain) == 0x000008, "Wrong alignment on UWaveformTransformationChain");
static_assert(sizeof(UWaveformTransformationChain) == 0x000038, "Wrong size on UWaveformTransformationChain");
static_assert(offsetof(UWaveformTransformationChain, Transformations) == 0x000028, "Member 'UWaveformTransformationChain::Transformations' has a wrong offset!");

}

