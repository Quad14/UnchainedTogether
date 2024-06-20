#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MediaPlate

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"
#include "MediaAssets_structs.hpp"


namespace SDK
{

// Class MediaPlate.MediaPlate
// 0x0010 (0x02A8 - 0x0298)
class AMediaPlate final : public AActor
{
public:
	class UMediaPlateComponent*                   MediaPlateComponent;                               // 0x0298(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                   StaticMeshComponent;                               // 0x02A0(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaPlate">();
	}
	static class AMediaPlate* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMediaPlate>();
	}
};
static_assert(alignof(AMediaPlate) == 0x000008, "Wrong alignment on AMediaPlate");
static_assert(sizeof(AMediaPlate) == 0x0002A8, "Wrong size on AMediaPlate");
static_assert(offsetof(AMediaPlate, MediaPlateComponent) == 0x000298, "Member 'AMediaPlate::MediaPlateComponent' has a wrong offset!");
static_assert(offsetof(AMediaPlate, StaticMeshComponent) == 0x0002A0, "Member 'AMediaPlate::StaticMeshComponent' has a wrong offset!");

// Class MediaPlate.MediaPlateAssetUserData
// 0x0010 (0x0038 - 0x0028)
class UMediaPlateAssetUserData final : public UAssetUserData
{
public:
	uint8                                         Pad_296A[0x10];                                    // 0x0028(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaPlateAssetUserData">();
	}
	static class UMediaPlateAssetUserData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaPlateAssetUserData>();
	}
};
static_assert(alignof(UMediaPlateAssetUserData) == 0x000008, "Wrong alignment on UMediaPlateAssetUserData");
static_assert(sizeof(UMediaPlateAssetUserData) == 0x000038, "Wrong size on UMediaPlateAssetUserData");

// Class MediaPlate.MediaPlateComponent
// 0x00C8 (0x0168 - 0x00A0)
class UMediaPlateComponent final : public UActorComponent
{
public:
	uint8                                         Pad_296B[0x8];                                     // 0x00A0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bPlayOnOpen;                                       // 0x00A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAutoPlay;                                         // 0x00A9(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableAudio;                                      // 0x00AA(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_296C[0x1];                                     // 0x00AB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         StartTime;                                         // 0x00AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaSoundComponent*                   SoundComponent;                                    // 0x00B0(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                   StaticMeshComponent;                               // 0x00B8(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UStaticMeshComponent*>           Letterboxes;                                       // 0x00C0(0x0010)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPublic)
	class UMediaPlaylist*                         MediaPlaylist;                                     // 0x00D0(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PlaylistIndex;                                     // 0x00D8(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMediaSourceCacheSettings              CacheSettings;                                     // 0x00DC(0x0008)(Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                          bIsMediaPlatePlaying;                              // 0x00E4(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_296D[0x7];                                     // 0x00E5(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bPlayOnlyWhenVisible;                              // 0x00EC(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bLoop;                                             // 0x00ED(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	EMediaTextureVisibleMipsTiles                 VisibleMipsTilesCalculations;                      // 0x00EE(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_296E[0x1];                                     // 0x00EF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MipMapBias;                                        // 0x00F0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bIsAspectRatioAuto;                                // 0x00F4(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bEnableMipMapUpscaling;                            // 0x00F5(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_296F[0x2];                                     // 0x00F6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MipLevelToUpscale;                                 // 0x00F8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         LetterboxAspectRatio;                              // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2970[0x8];                                     // 0x0100(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              MeshRange;                                         // 0x0108(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMediaTexture*>                  MediaTextures;                                     // 0x0118(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UMediaPlayer*                           MediaPlayer;                                       // 0x0128(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2971[0x38];                                    // 0x0130(0x0038)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Close();
	float GetLetterboxAspectRatio();
	bool GetLoop();
	class UMediaPlayer* GetMediaPlayer();
	class UMediaTexture* GetMediaTexture(int32 Param_Index);
	void OnMediaEnd();
	void OnMediaOpened(const class FString& DeviceUrl);
	void Open();
	void Pause();
	void Play();
	bool Rewind();
	bool Seek(const struct FTimespan& Time);
	void SetIsAspectRatioAuto(bool bInIsAspectRatioAuto);
	void SetLetterboxAspectRatio(float AspectRatio);
	void SetLoop(bool bInLoop);
	void SetMeshRange(const struct FVector2D& InMeshRange);
	void SetPlayOnlyWhenVisible(bool bInPlayOnlyWhenVisible);

	bool GetIsAspectRatioAuto() const;
	struct FVector2D GetMeshRange() const;
	bool IsMediaPlatePlaying() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaPlateComponent">();
	}
	static class UMediaPlateComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaPlateComponent>();
	}
};
static_assert(alignof(UMediaPlateComponent) == 0x000008, "Wrong alignment on UMediaPlateComponent");
static_assert(sizeof(UMediaPlateComponent) == 0x000168, "Wrong size on UMediaPlateComponent");
static_assert(offsetof(UMediaPlateComponent, bPlayOnOpen) == 0x0000A8, "Member 'UMediaPlateComponent::bPlayOnOpen' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, bAutoPlay) == 0x0000A9, "Member 'UMediaPlateComponent::bAutoPlay' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, bEnableAudio) == 0x0000AA, "Member 'UMediaPlateComponent::bEnableAudio' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, StartTime) == 0x0000AC, "Member 'UMediaPlateComponent::StartTime' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, SoundComponent) == 0x0000B0, "Member 'UMediaPlateComponent::SoundComponent' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, StaticMeshComponent) == 0x0000B8, "Member 'UMediaPlateComponent::StaticMeshComponent' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, Letterboxes) == 0x0000C0, "Member 'UMediaPlateComponent::Letterboxes' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, MediaPlaylist) == 0x0000D0, "Member 'UMediaPlateComponent::MediaPlaylist' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, PlaylistIndex) == 0x0000D8, "Member 'UMediaPlateComponent::PlaylistIndex' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, CacheSettings) == 0x0000DC, "Member 'UMediaPlateComponent::CacheSettings' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, bIsMediaPlatePlaying) == 0x0000E4, "Member 'UMediaPlateComponent::bIsMediaPlatePlaying' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, bPlayOnlyWhenVisible) == 0x0000EC, "Member 'UMediaPlateComponent::bPlayOnlyWhenVisible' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, bLoop) == 0x0000ED, "Member 'UMediaPlateComponent::bLoop' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, VisibleMipsTilesCalculations) == 0x0000EE, "Member 'UMediaPlateComponent::VisibleMipsTilesCalculations' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, MipMapBias) == 0x0000F0, "Member 'UMediaPlateComponent::MipMapBias' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, bIsAspectRatioAuto) == 0x0000F4, "Member 'UMediaPlateComponent::bIsAspectRatioAuto' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, bEnableMipMapUpscaling) == 0x0000F5, "Member 'UMediaPlateComponent::bEnableMipMapUpscaling' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, MipLevelToUpscale) == 0x0000F8, "Member 'UMediaPlateComponent::MipLevelToUpscale' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, LetterboxAspectRatio) == 0x0000FC, "Member 'UMediaPlateComponent::LetterboxAspectRatio' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, MeshRange) == 0x000108, "Member 'UMediaPlateComponent::MeshRange' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, MediaTextures) == 0x000118, "Member 'UMediaPlateComponent::MediaTextures' has a wrong offset!");
static_assert(offsetof(UMediaPlateComponent, MediaPlayer) == 0x000128, "Member 'UMediaPlateComponent::MediaPlayer' has a wrong offset!");

}

