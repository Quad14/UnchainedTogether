#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GeometryCache

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "GeometryCache_structs.hpp"
#include "Niagara_structs.hpp"
#include "Niagara_classes.hpp"


namespace SDK
{

// Class GeometryCache.GeometryCache
// 0x0068 (0x0090 - 0x0028)
class UGeometryCache final : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInterface*>             Materials;                                         // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class FName>                           MaterialSlotNames;                                 // 0x0040(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UGeometryCacheTrack*>            Tracks;                                            // 0x0050(0x0010)(Edit, ZeroConstructor, EditConst, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UAssetUserData*>                 AssetUserData;                                     // 0x0060(0x0010)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                         Pad_70[0x10];                                      // 0x0070(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         StartFrame;                                        // 0x0080(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         EndFrame;                                          // 0x0084(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint64                                        Hash;                                              // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCache">();
	}
	static class UGeometryCache* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCache>();
	}
};
static_assert(alignof(UGeometryCache) == 0x000008, "Wrong alignment on UGeometryCache");
static_assert(sizeof(UGeometryCache) == 0x000090, "Wrong size on UGeometryCache");
static_assert(offsetof(UGeometryCache, Materials) == 0x000030, "Member 'UGeometryCache::Materials' has a wrong offset!");
static_assert(offsetof(UGeometryCache, MaterialSlotNames) == 0x000040, "Member 'UGeometryCache::MaterialSlotNames' has a wrong offset!");
static_assert(offsetof(UGeometryCache, Tracks) == 0x000050, "Member 'UGeometryCache::Tracks' has a wrong offset!");
static_assert(offsetof(UGeometryCache, AssetUserData) == 0x000060, "Member 'UGeometryCache::AssetUserData' has a wrong offset!");
static_assert(offsetof(UGeometryCache, StartFrame) == 0x000080, "Member 'UGeometryCache::StartFrame' has a wrong offset!");
static_assert(offsetof(UGeometryCache, EndFrame) == 0x000084, "Member 'UGeometryCache::EndFrame' has a wrong offset!");
static_assert(offsetof(UGeometryCache, Hash) == 0x000088, "Member 'UGeometryCache::Hash' has a wrong offset!");

// Class GeometryCache.GeometryCacheActor
// 0x0008 (0x02A0 - 0x0298)
class AGeometryCacheActor final : public AActor
{
public:
	class UGeometryCacheComponent*                GeometryCacheComponent;                            // 0x0298(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	class UGeometryCacheComponent* GetGeometryCacheComponent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCacheActor">();
	}
	static class AGeometryCacheActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGeometryCacheActor>();
	}
};
static_assert(alignof(AGeometryCacheActor) == 0x000008, "Wrong alignment on AGeometryCacheActor");
static_assert(sizeof(AGeometryCacheActor) == 0x0002A0, "Wrong size on AGeometryCacheActor");
static_assert(offsetof(AGeometryCacheActor, GeometryCacheComponent) == 0x000298, "Member 'AGeometryCacheActor::GeometryCacheComponent' has a wrong offset!");

// Class GeometryCache.GeometryCacheCodecBase
// 0x0010 (0x0038 - 0x0028)
class UGeometryCacheCodecBase : public UObject
{
public:
	TArray<int32>                                 TopologyRanges;                                    // 0x0028(0x0010)(Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCacheCodecBase">();
	}
	static class UGeometryCacheCodecBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCacheCodecBase>();
	}
};
static_assert(alignof(UGeometryCacheCodecBase) == 0x000008, "Wrong alignment on UGeometryCacheCodecBase");
static_assert(sizeof(UGeometryCacheCodecBase) == 0x000038, "Wrong size on UGeometryCacheCodecBase");
static_assert(offsetof(UGeometryCacheCodecBase, TopologyRanges) == 0x000028, "Member 'UGeometryCacheCodecBase::TopologyRanges' has a wrong offset!");

// Class GeometryCache.GeometryCacheCodecRaw
// 0x0008 (0x0040 - 0x0038)
class UGeometryCacheCodecRaw final : public UGeometryCacheCodecBase
{
public:
	int32                                         DummyProperty;                                     // 0x0038(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCacheCodecRaw">();
	}
	static class UGeometryCacheCodecRaw* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCacheCodecRaw>();
	}
};
static_assert(alignof(UGeometryCacheCodecRaw) == 0x000008, "Wrong alignment on UGeometryCacheCodecRaw");
static_assert(sizeof(UGeometryCacheCodecRaw) == 0x000040, "Wrong size on UGeometryCacheCodecRaw");
static_assert(offsetof(UGeometryCacheCodecRaw, DummyProperty) == 0x000038, "Member 'UGeometryCacheCodecRaw::DummyProperty' has a wrong offset!");

// Class GeometryCache.GeometryCacheCodecV1
// 0x0008 (0x0040 - 0x0038)
class UGeometryCacheCodecV1 final : public UGeometryCacheCodecBase
{
public:
	uint8                                         Pad_38[0x8];                                       // 0x0038(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCacheCodecV1">();
	}
	static class UGeometryCacheCodecV1* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCacheCodecV1>();
	}
};
static_assert(alignof(UGeometryCacheCodecV1) == 0x000008, "Wrong alignment on UGeometryCacheCodecV1");
static_assert(sizeof(UGeometryCacheCodecV1) == 0x000040, "Wrong size on UGeometryCacheCodecV1");

// Class GeometryCache.GeometryCacheComponent
// 0x0080 (0x0630 - 0x05B0)
class UGeometryCacheComponent final : public UMeshComponent
{
public:
	class UGeometryCache*                         GeometryCache;                                     // 0x05A8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRunning;                                          // 0x05B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bLooping;                                          // 0x05B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bExtrapolateFrames;                                // 0x05B2(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_5B3[0x1];                                      // 0x05B3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         StartTimeOffset;                                   // 0x05B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         PlaybackSpeed;                                     // 0x05B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         MotionVectorScale;                                 // 0x05BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         NumTracks;                                         // 0x05C0(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         ElapsedTime;                                       // 0x05C4(0x0004)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_5C8[0x4C];                                     // 0x05C8(0x004C)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Duration;                                          // 0x0614(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bManualTick;                                       // 0x0618(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bOverrideWireframeColor;                           // 0x0619(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_61A[0x2];                                      // 0x061A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           WireframeOverrideColor;                            // 0x061C(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_62C[0x4];                                      // 0x062C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Pause();
	void Play();
	void PlayFromStart();
	void PlayReversed();
	void PlayReversedFromEnd();
	void SetExtrapolateFrames(const bool bNewExtrapolating);
	bool SetGeometryCache(class UGeometryCache* NewGeomCache);
	void SetLooping(const bool bNewLooping);
	void SetMotionVectorScale(const float NewMotionVectorScale);
	void SetOverrideWireframeColor(bool bOverride);
	void SetPlaybackSpeed(const float NewPlaybackSpeed);
	void SetStartTimeOffset(const float NewStartTimeOffset);
	void SetWireframeOverrideColor(const struct FLinearColor& Color);
	void Stop();
	void TickAtThisTime(const float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);

	float GetAnimationTime() const;
	float GetDuration() const;
	float GetMotionVectorScale() const;
	int32 GetNumberOfFrames() const;
	bool GetOverrideWireframeColor() const;
	float GetPlaybackDirection() const;
	float GetPlaybackSpeed() const;
	float GetStartTimeOffset() const;
	struct FLinearColor GetWireframeOverrideColor() const;
	bool IsExtrapolatingFrames() const;
	bool IsLooping() const;
	bool IsPlaying() const;
	bool IsPlayingReversed() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCacheComponent">();
	}
	static class UGeometryCacheComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCacheComponent>();
	}
};
static_assert(alignof(UGeometryCacheComponent) == 0x000010, "Wrong alignment on UGeometryCacheComponent");
static_assert(sizeof(UGeometryCacheComponent) == 0x000630, "Wrong size on UGeometryCacheComponent");
static_assert(offsetof(UGeometryCacheComponent, GeometryCache) == 0x0005A8, "Member 'UGeometryCacheComponent::GeometryCache' has a wrong offset!");
static_assert(offsetof(UGeometryCacheComponent, bRunning) == 0x0005B0, "Member 'UGeometryCacheComponent::bRunning' has a wrong offset!");
static_assert(offsetof(UGeometryCacheComponent, bLooping) == 0x0005B1, "Member 'UGeometryCacheComponent::bLooping' has a wrong offset!");
static_assert(offsetof(UGeometryCacheComponent, bExtrapolateFrames) == 0x0005B2, "Member 'UGeometryCacheComponent::bExtrapolateFrames' has a wrong offset!");
static_assert(offsetof(UGeometryCacheComponent, StartTimeOffset) == 0x0005B4, "Member 'UGeometryCacheComponent::StartTimeOffset' has a wrong offset!");
static_assert(offsetof(UGeometryCacheComponent, PlaybackSpeed) == 0x0005B8, "Member 'UGeometryCacheComponent::PlaybackSpeed' has a wrong offset!");
static_assert(offsetof(UGeometryCacheComponent, MotionVectorScale) == 0x0005BC, "Member 'UGeometryCacheComponent::MotionVectorScale' has a wrong offset!");
static_assert(offsetof(UGeometryCacheComponent, NumTracks) == 0x0005C0, "Member 'UGeometryCacheComponent::NumTracks' has a wrong offset!");
static_assert(offsetof(UGeometryCacheComponent, ElapsedTime) == 0x0005C4, "Member 'UGeometryCacheComponent::ElapsedTime' has a wrong offset!");
static_assert(offsetof(UGeometryCacheComponent, Duration) == 0x000614, "Member 'UGeometryCacheComponent::Duration' has a wrong offset!");
static_assert(offsetof(UGeometryCacheComponent, bManualTick) == 0x000618, "Member 'UGeometryCacheComponent::bManualTick' has a wrong offset!");
static_assert(offsetof(UGeometryCacheComponent, bOverrideWireframeColor) == 0x000619, "Member 'UGeometryCacheComponent::bOverrideWireframeColor' has a wrong offset!");
static_assert(offsetof(UGeometryCacheComponent, WireframeOverrideColor) == 0x00061C, "Member 'UGeometryCacheComponent::WireframeOverrideColor' has a wrong offset!");

// Class GeometryCache.GeometryCacheTrack
// 0x0030 (0x0058 - 0x0028)
class UGeometryCacheTrack : public UObject
{
public:
	float                                         Duration;                                          // 0x0028(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_2C[0x2C];                                      // 0x002C(0x002C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCacheTrack">();
	}
	static class UGeometryCacheTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCacheTrack>();
	}
};
static_assert(alignof(UGeometryCacheTrack) == 0x000008, "Wrong alignment on UGeometryCacheTrack");
static_assert(sizeof(UGeometryCacheTrack) == 0x000058, "Wrong size on UGeometryCacheTrack");
static_assert(offsetof(UGeometryCacheTrack, Duration) == 0x000028, "Member 'UGeometryCacheTrack::Duration' has a wrong offset!");

// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
// 0x0028 (0x0080 - 0x0058)
class UGeometryCacheTrack_FlipbookAnimation final : public UGeometryCacheTrack
{
public:
	uint32                                        NumMeshSamples;                                    // 0x0058(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_5C[0x24];                                      // 0x005C(0x0024)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AddMeshSample(const struct FGeometryCacheMeshData& MeshData, const float SampleTime);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCacheTrack_FlipbookAnimation">();
	}
	static class UGeometryCacheTrack_FlipbookAnimation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCacheTrack_FlipbookAnimation>();
	}
};
static_assert(alignof(UGeometryCacheTrack_FlipbookAnimation) == 0x000008, "Wrong alignment on UGeometryCacheTrack_FlipbookAnimation");
static_assert(sizeof(UGeometryCacheTrack_FlipbookAnimation) == 0x000080, "Wrong size on UGeometryCacheTrack_FlipbookAnimation");
static_assert(offsetof(UGeometryCacheTrack_FlipbookAnimation, NumMeshSamples) == 0x000058, "Member 'UGeometryCacheTrack_FlipbookAnimation::NumMeshSamples' has a wrong offset!");

// Class GeometryCache.GeometryCacheTrackStreamable
// 0x0080 (0x00D8 - 0x0058)
class UGeometryCacheTrackStreamable final : public UGeometryCacheTrack
{
public:
	class UGeometryCacheCodecBase*                Codec;                                             // 0x0058(0x0008)(Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x68];                                      // 0x0060(0x0068)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         StartSampleTime;                                   // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_CC[0xC];                                       // 0x00CC(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCacheTrackStreamable">();
	}
	static class UGeometryCacheTrackStreamable* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCacheTrackStreamable>();
	}
};
static_assert(alignof(UGeometryCacheTrackStreamable) == 0x000008, "Wrong alignment on UGeometryCacheTrackStreamable");
static_assert(sizeof(UGeometryCacheTrackStreamable) == 0x0000D8, "Wrong size on UGeometryCacheTrackStreamable");
static_assert(offsetof(UGeometryCacheTrackStreamable, Codec) == 0x000058, "Member 'UGeometryCacheTrackStreamable::Codec' has a wrong offset!");
static_assert(offsetof(UGeometryCacheTrackStreamable, StartSampleTime) == 0x0000C8, "Member 'UGeometryCacheTrackStreamable::StartSampleTime' has a wrong offset!");

// Class GeometryCache.GeometryCacheTrack_TransformAnimation
// 0x00C8 (0x0120 - 0x0058)
class UGeometryCacheTrack_TransformAnimation final : public UGeometryCacheTrack
{
public:
	uint8                                         Pad_58[0xC8];                                      // 0x0058(0x00C8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCacheTrack_TransformAnimation">();
	}
	static class UGeometryCacheTrack_TransformAnimation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCacheTrack_TransformAnimation>();
	}
};
static_assert(alignof(UGeometryCacheTrack_TransformAnimation) == 0x000008, "Wrong alignment on UGeometryCacheTrack_TransformAnimation");
static_assert(sizeof(UGeometryCacheTrack_TransformAnimation) == 0x000120, "Wrong size on UGeometryCacheTrack_TransformAnimation");

// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
// 0x00C8 (0x0120 - 0x0058)
class UGeometryCacheTrack_TransformGroupAnimation final : public UGeometryCacheTrack
{
public:
	uint8                                         Pad_58[0xC8];                                      // 0x0058(0x00C8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCacheTrack_TransformGroupAnimation">();
	}
	static class UGeometryCacheTrack_TransformGroupAnimation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCacheTrack_TransformGroupAnimation>();
	}
};
static_assert(alignof(UGeometryCacheTrack_TransformGroupAnimation) == 0x000008, "Wrong alignment on UGeometryCacheTrack_TransformGroupAnimation");
static_assert(sizeof(UGeometryCacheTrack_TransformGroupAnimation) == 0x000120, "Wrong size on UGeometryCacheTrack_TransformGroupAnimation");

// Class GeometryCache.NiagaraGeometryCacheRendererProperties
// 0x0228 (0x02E8 - 0x00C0)
class UNiagaraGeometryCacheRendererProperties final : public UNiagaraRendererProperties
{
public:
	TArray<struct FNiagaraGeometryCacheReference> GeometryCaches;                                    // 0x00C0(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	ENiagaraRendererSourceDataMode                SourceMode;                                        // 0x00D0(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsLooping;                                        // 0x00D1(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D2[0x2];                                       // 0x00D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	uint32                                        ComponentCountLimit;                               // 0x00D4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding       PositionBinding;                                   // 0x00D8(0x0038)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding       RotationBinding;                                   // 0x0110(0x0038)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding       ScaleBinding;                                      // 0x0148(0x0038)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding       ElapsedTimeBinding;                                // 0x0180(0x0038)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding       EnabledBinding;                                    // 0x01B8(0x0038)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding       ArrayIndexBinding;                                 // 0x01F0(0x0038)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding       RendererVisibilityTagBinding;                      // 0x0228(0x0038)(Edit, NativeAccessSpecifierPublic)
	int32                                         RendererVisibility;                                // 0x0260(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAssignComponentsOnParticleID;                     // 0x0264(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_265[0x3];                                      // 0x0265(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNiagaraRendererMaterialParameters     MaterialParameters;                                // 0x0268(0x0050)(Edit, NativeAccessSpecifierPublic)
	uint8                                         Pad_2B8[0x30];                                     // 0x02B8(0x0030)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraGeometryCacheRendererProperties">();
	}
	static class UNiagaraGeometryCacheRendererProperties* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraGeometryCacheRendererProperties>();
	}
};
static_assert(alignof(UNiagaraGeometryCacheRendererProperties) == 0x000008, "Wrong alignment on UNiagaraGeometryCacheRendererProperties");
static_assert(sizeof(UNiagaraGeometryCacheRendererProperties) == 0x0002E8, "Wrong size on UNiagaraGeometryCacheRendererProperties");
static_assert(offsetof(UNiagaraGeometryCacheRendererProperties, GeometryCaches) == 0x0000C0, "Member 'UNiagaraGeometryCacheRendererProperties::GeometryCaches' has a wrong offset!");
static_assert(offsetof(UNiagaraGeometryCacheRendererProperties, SourceMode) == 0x0000D0, "Member 'UNiagaraGeometryCacheRendererProperties::SourceMode' has a wrong offset!");
static_assert(offsetof(UNiagaraGeometryCacheRendererProperties, bIsLooping) == 0x0000D1, "Member 'UNiagaraGeometryCacheRendererProperties::bIsLooping' has a wrong offset!");
static_assert(offsetof(UNiagaraGeometryCacheRendererProperties, ComponentCountLimit) == 0x0000D4, "Member 'UNiagaraGeometryCacheRendererProperties::ComponentCountLimit' has a wrong offset!");
static_assert(offsetof(UNiagaraGeometryCacheRendererProperties, PositionBinding) == 0x0000D8, "Member 'UNiagaraGeometryCacheRendererProperties::PositionBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraGeometryCacheRendererProperties, RotationBinding) == 0x000110, "Member 'UNiagaraGeometryCacheRendererProperties::RotationBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraGeometryCacheRendererProperties, ScaleBinding) == 0x000148, "Member 'UNiagaraGeometryCacheRendererProperties::ScaleBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraGeometryCacheRendererProperties, ElapsedTimeBinding) == 0x000180, "Member 'UNiagaraGeometryCacheRendererProperties::ElapsedTimeBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraGeometryCacheRendererProperties, EnabledBinding) == 0x0001B8, "Member 'UNiagaraGeometryCacheRendererProperties::EnabledBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraGeometryCacheRendererProperties, ArrayIndexBinding) == 0x0001F0, "Member 'UNiagaraGeometryCacheRendererProperties::ArrayIndexBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraGeometryCacheRendererProperties, RendererVisibilityTagBinding) == 0x000228, "Member 'UNiagaraGeometryCacheRendererProperties::RendererVisibilityTagBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraGeometryCacheRendererProperties, RendererVisibility) == 0x000260, "Member 'UNiagaraGeometryCacheRendererProperties::RendererVisibility' has a wrong offset!");
static_assert(offsetof(UNiagaraGeometryCacheRendererProperties, bAssignComponentsOnParticleID) == 0x000264, "Member 'UNiagaraGeometryCacheRendererProperties::bAssignComponentsOnParticleID' has a wrong offset!");
static_assert(offsetof(UNiagaraGeometryCacheRendererProperties, MaterialParameters) == 0x000268, "Member 'UNiagaraGeometryCacheRendererProperties::MaterialParameters' has a wrong offset!");

}

