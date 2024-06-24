#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CinematicCamera

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CinematicCamera_structs.hpp"
#include "DeveloperSettings_classes.hpp"


namespace SDK
{

// Class CinematicCamera.CameraRig_Crane
// 0x0030 (0x02C8 - 0x0298)
class ACameraRig_Crane final : public AActor
{
public:
	float                                         CranePitch;                                        // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CraneYaw;                                          // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CraneArmLength;                                    // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLockMountPitch;                                   // 0x02A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLockMountYaw;                                     // 0x02A5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_165B[0x2];                                     // 0x02A6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        TransformComponent;                                // 0x02A8(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                        CraneYawControl;                                   // 0x02B0(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                        CranePitchControl;                                 // 0x02B8(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                        CraneCameraMount;                                  // 0x02C0(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraRig_Crane">();
	}
	static class ACameraRig_Crane* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACameraRig_Crane>();
	}
};
static_assert(alignof(ACameraRig_Crane) == 0x000008, "Wrong alignment on ACameraRig_Crane");
static_assert(sizeof(ACameraRig_Crane) == 0x0002C8, "Wrong size on ACameraRig_Crane");
static_assert(offsetof(ACameraRig_Crane, CranePitch) == 0x000298, "Member 'ACameraRig_Crane::CranePitch' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, CraneYaw) == 0x00029C, "Member 'ACameraRig_Crane::CraneYaw' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, CraneArmLength) == 0x0002A0, "Member 'ACameraRig_Crane::CraneArmLength' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, bLockMountPitch) == 0x0002A4, "Member 'ACameraRig_Crane::bLockMountPitch' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, bLockMountYaw) == 0x0002A5, "Member 'ACameraRig_Crane::bLockMountYaw' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, TransformComponent) == 0x0002A8, "Member 'ACameraRig_Crane::TransformComponent' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, CraneYawControl) == 0x0002B0, "Member 'ACameraRig_Crane::CraneYawControl' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, CranePitchControl) == 0x0002B8, "Member 'ACameraRig_Crane::CranePitchControl' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, CraneCameraMount) == 0x0002C0, "Member 'ACameraRig_Crane::CraneCameraMount' has a wrong offset!");

// Class CinematicCamera.CameraRig_Rail
// 0x0020 (0x02B8 - 0x0298)
class ACameraRig_Rail final : public AActor
{
public:
	float                                         CurrentPositionOnRail;                             // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLockOrientationToRail;                            // 0x029C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_165C[0x3];                                     // 0x029D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        TransformComponent;                                // 0x02A0(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USplineComponent*                       RailSplineComponent;                               // 0x02A8(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USceneComponent*                        RailCameraMount;                                   // 0x02B0(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	class USplineComponent* GetRailSplineComponent();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraRig_Rail">();
	}
	static class ACameraRig_Rail* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACameraRig_Rail>();
	}
};
static_assert(alignof(ACameraRig_Rail) == 0x000008, "Wrong alignment on ACameraRig_Rail");
static_assert(sizeof(ACameraRig_Rail) == 0x0002B8, "Wrong size on ACameraRig_Rail");
static_assert(offsetof(ACameraRig_Rail, CurrentPositionOnRail) == 0x000298, "Member 'ACameraRig_Rail::CurrentPositionOnRail' has a wrong offset!");
static_assert(offsetof(ACameraRig_Rail, bLockOrientationToRail) == 0x00029C, "Member 'ACameraRig_Rail::bLockOrientationToRail' has a wrong offset!");
static_assert(offsetof(ACameraRig_Rail, TransformComponent) == 0x0002A0, "Member 'ACameraRig_Rail::TransformComponent' has a wrong offset!");
static_assert(offsetof(ACameraRig_Rail, RailSplineComponent) == 0x0002A8, "Member 'ACameraRig_Rail::RailSplineComponent' has a wrong offset!");
static_assert(offsetof(ACameraRig_Rail, RailCameraMount) == 0x0002B0, "Member 'ACameraRig_Rail::RailCameraMount' has a wrong offset!");

// Class CinematicCamera.CineCameraActor
// 0x0080 (0x0A20 - 0x09A0)
class ACineCameraActor final : public ACameraActor
{
public:
	struct FCameraLookatTrackingSettings          LookatTrackingSettings;                            // 0x09A0(0x0068)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                         Pad_165D[0x18];                                    // 0x0A08(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class UCineCameraComponent* GetCineCameraComponent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CineCameraActor">();
	}
	static class ACineCameraActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACineCameraActor>();
	}
};
static_assert(alignof(ACineCameraActor) == 0x000010, "Wrong alignment on ACineCameraActor");
static_assert(sizeof(ACineCameraActor) == 0x000A20, "Wrong size on ACineCameraActor");
static_assert(offsetof(ACineCameraActor, LookatTrackingSettings) == 0x0009A0, "Member 'ACineCameraActor::LookatTrackingSettings' has a wrong offset!");

// Class CinematicCamera.CineCameraComponent
// 0x0110 (0x0B40 - 0x0A30)
class UCineCameraComponent final : public UCameraComponent
{
public:
	struct FCameraFilmbackSettings                FilmbackSettings;                                  // 0x0A30(0x000C)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	struct FCameraFilmbackSettings                Filmback;                                          // 0x0A3C(0x000C)(Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
	struct FCameraLensSettings                    LensSettings;                                      // 0x0A48(0x001C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_165E[0x4];                                     // 0x0A64(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCameraFocusSettings                   FocusSettings;                                     // 0x0A68(0x0060)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FPlateCropSettings                     CropSettings;                                      // 0x0AC8(0x0004)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                         CurrentFocalLength;                                // 0x0ACC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CurrentAperture;                                   // 0x0AD0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CurrentFocusDistance;                              // 0x0AD4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bOverride_CustomNearClippingPlane : 1;             // 0x0AD8(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_165F[0x3];                                     // 0x0AD9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CustomNearClippingPlane;                           // 0x0ADC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1660[0x8];                                     // 0x0AE0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FNamedFilmbackPreset>           FilmbackPresets;                                   // 0x0AE8(0x0010)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TArray<struct FNamedLensPreset>               LensPresets;                                       // 0x0AF8(0x0010)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	class FString                                 DefaultFilmbackPresetName;                         // 0x0B08(0x0010)(ZeroConstructor, Config, Deprecated, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                 DefaultFilmbackPreset;                             // 0x0B18(0x0010)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                 DefaultLensPresetName;                             // 0x0B28(0x0010)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         DefaultLensFocalLength;                            // 0x0B38(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         DefaultLensFStop;                                  // 0x0B3C(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static TArray<struct FNamedFilmbackPreset> GetFilmbackPresetsCopy();
	static TArray<struct FNamedLensPreset> GetLensPresetsCopy();

	void SetCropPresetByName(const class FString& InPresetName);
	void SetCropSettings(const struct FPlateCropSettings& NewCropSettings);
	void SetCurrentAperture(const float NewCurrentAperture);
	void SetCurrentFocalLength(float InFocalLength);
	void SetCustomNearClippingPlane(const float NewCustomNearClippingPlane);
	void SetFilmback(const struct FCameraFilmbackSettings& NewFilmback);
	void SetFilmbackPresetByName(const class FString& InPresetName);
	void SetFocusSettings(const struct FCameraFocusSettings& NewFocusSettings);
	void SetLensPresetByName(const class FString& InPresetName);
	void SetLensSettings(const struct FCameraLensSettings& NewLensSettings);

	class FString GetCropPresetName() const;
	class FString GetDefaultFilmbackPresetName() const;
	class FString GetFilmbackPresetName() const;
	float GetHorizontalFieldOfView() const;
	class FString GetLensPresetName() const;
	float GetVerticalFieldOfView() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CineCameraComponent">();
	}
	static class UCineCameraComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCineCameraComponent>();
	}
};
static_assert(alignof(UCineCameraComponent) == 0x000010, "Wrong alignment on UCineCameraComponent");
static_assert(sizeof(UCineCameraComponent) == 0x000B40, "Wrong size on UCineCameraComponent");
static_assert(offsetof(UCineCameraComponent, FilmbackSettings) == 0x000A30, "Member 'UCineCameraComponent::FilmbackSettings' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, Filmback) == 0x000A3C, "Member 'UCineCameraComponent::Filmback' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, LensSettings) == 0x000A48, "Member 'UCineCameraComponent::LensSettings' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, FocusSettings) == 0x000A68, "Member 'UCineCameraComponent::FocusSettings' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, CropSettings) == 0x000AC8, "Member 'UCineCameraComponent::CropSettings' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, CurrentFocalLength) == 0x000ACC, "Member 'UCineCameraComponent::CurrentFocalLength' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, CurrentAperture) == 0x000AD0, "Member 'UCineCameraComponent::CurrentAperture' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, CurrentFocusDistance) == 0x000AD4, "Member 'UCineCameraComponent::CurrentFocusDistance' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, CustomNearClippingPlane) == 0x000ADC, "Member 'UCineCameraComponent::CustomNearClippingPlane' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, FilmbackPresets) == 0x000AE8, "Member 'UCineCameraComponent::FilmbackPresets' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, LensPresets) == 0x000AF8, "Member 'UCineCameraComponent::LensPresets' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, DefaultFilmbackPresetName) == 0x000B08, "Member 'UCineCameraComponent::DefaultFilmbackPresetName' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, DefaultFilmbackPreset) == 0x000B18, "Member 'UCineCameraComponent::DefaultFilmbackPreset' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, DefaultLensPresetName) == 0x000B28, "Member 'UCineCameraComponent::DefaultLensPresetName' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, DefaultLensFocalLength) == 0x000B38, "Member 'UCineCameraComponent::DefaultLensFocalLength' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, DefaultLensFStop) == 0x000B3C, "Member 'UCineCameraComponent::DefaultLensFStop' has a wrong offset!");

// Class CinematicCamera.CineCameraSettings
// 0x0078 (0x00B0 - 0x0038)
class UCineCameraSettings final : public UDeveloperSettings
{
public:
	class FString                                 DefaultLensPresetName;                             // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DefaultLensFocalLength;                            // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DefaultLensFStop;                                  // 0x004C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNamedLensPreset>               LensPresets;                                       // 0x0050(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	class FString                                 DefaultFilmbackPreset;                             // 0x0060(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNamedFilmbackPreset>           FilmbackPresets;                                   // 0x0070(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	class FString                                 DefaultCropPresetName;                             // 0x0080(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNamedPlateCropPreset>          CropPresets;                                       // 0x0090(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	uint8                                         Pad_1661[0x10];                                    // 0x00A0(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UCineCameraSettings* GetCineCameraSettings();

	bool GetCropPresetByName(const class FString& PresetName, struct FPlateCropSettings* CropSettings);
	bool GetFilmbackPresetByName(const class FString& PresetName, struct FCameraFilmbackSettings* FilmbackSettings);
	bool GetLensPresetByName(const class FString& PresetName, struct FCameraLensSettings* LensSettings);
	void SetCropPresets(const TArray<struct FNamedPlateCropPreset>& InCropPresets);
	void SetDefaultCropPresetName(const class FString& InDefaultCropPresetName);
	void SetDefaultFilmbackPreset(const class FString& InDefaultFilmbackPreset);
	void SetDefaultLensFocalLength(const float InDefaultLensFocalLength);
	void SetDefaultLensFStop(const float InDefaultLensFStop);
	void SetDefaultLensPresetName(const class FString& InDefaultLensPresetName);
	void SetFilmbackPresets(const TArray<struct FNamedFilmbackPreset>& InFilmbackPresets);
	void SetLensPresets(const TArray<struct FNamedLensPreset>& InLensPresets);

	TArray<class FString> GetCropPresetNames() const;
	TArray<class FString> GetFilmbackPresetNames() const;
	TArray<class FString> GetLensPresetNames() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CineCameraSettings">();
	}
	static class UCineCameraSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCineCameraSettings>();
	}
};
static_assert(alignof(UCineCameraSettings) == 0x000008, "Wrong alignment on UCineCameraSettings");
static_assert(sizeof(UCineCameraSettings) == 0x0000B0, "Wrong size on UCineCameraSettings");
static_assert(offsetof(UCineCameraSettings, DefaultLensPresetName) == 0x000038, "Member 'UCineCameraSettings::DefaultLensPresetName' has a wrong offset!");
static_assert(offsetof(UCineCameraSettings, DefaultLensFocalLength) == 0x000048, "Member 'UCineCameraSettings::DefaultLensFocalLength' has a wrong offset!");
static_assert(offsetof(UCineCameraSettings, DefaultLensFStop) == 0x00004C, "Member 'UCineCameraSettings::DefaultLensFStop' has a wrong offset!");
static_assert(offsetof(UCineCameraSettings, LensPresets) == 0x000050, "Member 'UCineCameraSettings::LensPresets' has a wrong offset!");
static_assert(offsetof(UCineCameraSettings, DefaultFilmbackPreset) == 0x000060, "Member 'UCineCameraSettings::DefaultFilmbackPreset' has a wrong offset!");
static_assert(offsetof(UCineCameraSettings, FilmbackPresets) == 0x000070, "Member 'UCineCameraSettings::FilmbackPresets' has a wrong offset!");
static_assert(offsetof(UCineCameraSettings, DefaultCropPresetName) == 0x000080, "Member 'UCineCameraSettings::DefaultCropPresetName' has a wrong offset!");
static_assert(offsetof(UCineCameraSettings, CropPresets) == 0x000090, "Member 'UCineCameraSettings::CropPresets' has a wrong offset!");

}

