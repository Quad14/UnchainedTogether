#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TemplateSequence

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "MovieScene_structs.hpp"
#include "MovieScene_classes.hpp"
#include "CinematicCamera_structs.hpp"
#include "TemplateSequence_structs.hpp"


namespace SDK
{

// Class TemplateSequence.TemplateSequence
// 0x0080 (0x00E8 - 0x0068)
class UTemplateSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                            MovieScene;                                        // 0x0068(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                   BoundActorClass;                                   // 0x0070(0x0028)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FGuid, class FName>               BoundActorComponents;                              // 0x0098(0x0050)(NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TemplateSequence">();
	}
	static class UTemplateSequence* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTemplateSequence>();
	}
};
static_assert(alignof(UTemplateSequence) == 0x000008, "Wrong alignment on UTemplateSequence");
static_assert(sizeof(UTemplateSequence) == 0x0000E8, "Wrong size on UTemplateSequence");
static_assert(offsetof(UTemplateSequence, MovieScene) == 0x000068, "Member 'UTemplateSequence::MovieScene' has a wrong offset!");
static_assert(offsetof(UTemplateSequence, BoundActorClass) == 0x000070, "Member 'UTemplateSequence::BoundActorClass' has a wrong offset!");
static_assert(offsetof(UTemplateSequence, BoundActorComponents) == 0x000098, "Member 'UTemplateSequence::BoundActorComponents' has a wrong offset!");

// Class TemplateSequence.CameraAnimationSequence
// 0x0000 (0x00E8 - 0x00E8)
class UCameraAnimationSequence final : public UTemplateSequence
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraAnimationSequence">();
	}
	static class UCameraAnimationSequence* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraAnimationSequence>();
	}
};
static_assert(alignof(UCameraAnimationSequence) == 0x000008, "Wrong alignment on UCameraAnimationSequence");
static_assert(sizeof(UCameraAnimationSequence) == 0x0000E8, "Wrong size on UCameraAnimationSequence");

// Class TemplateSequence.CameraAnimationSequenceCameraStandIn
// 0x0808 (0x0830 - 0x0028)
class UCameraAnimationSequenceCameraStandIn final : public UObject
{
public:
	float                                         FieldOfView;                                       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bConstrainAspectRatio : 1;                         // 0x002C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_257E[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AspectRatio;                                       // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_257F[0xC];                                     // 0x0034(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPostProcessSettings                   PostProcessSettings;                               // 0x0040(0x06E0)(NativeAccessSpecifierPublic)
	float                                         PostProcessBlendWeight;                            // 0x0720(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCameraFilmbackSettings                Filmback;                                          // 0x0724(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	struct FCameraLensSettings                    LensSettings;                                      // 0x0730(0x001C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_2580[0x4];                                     // 0x074C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCameraFocusSettings                   FocusSettings;                                     // 0x0750(0x0060)(NativeAccessSpecifierPublic)
	float                                         CurrentFocalLength;                                // 0x07B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CurrentAperture;                                   // 0x07B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CurrentFocusDistance;                              // 0x07B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2581[0x74];                                    // 0x07BC(0x0074)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraAnimationSequenceCameraStandIn">();
	}
	static class UCameraAnimationSequenceCameraStandIn* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraAnimationSequenceCameraStandIn>();
	}
};
static_assert(alignof(UCameraAnimationSequenceCameraStandIn) == 0x000010, "Wrong alignment on UCameraAnimationSequenceCameraStandIn");
static_assert(sizeof(UCameraAnimationSequenceCameraStandIn) == 0x000830, "Wrong size on UCameraAnimationSequenceCameraStandIn");
static_assert(offsetof(UCameraAnimationSequenceCameraStandIn, FieldOfView) == 0x000028, "Member 'UCameraAnimationSequenceCameraStandIn::FieldOfView' has a wrong offset!");
static_assert(offsetof(UCameraAnimationSequenceCameraStandIn, AspectRatio) == 0x000030, "Member 'UCameraAnimationSequenceCameraStandIn::AspectRatio' has a wrong offset!");
static_assert(offsetof(UCameraAnimationSequenceCameraStandIn, PostProcessSettings) == 0x000040, "Member 'UCameraAnimationSequenceCameraStandIn::PostProcessSettings' has a wrong offset!");
static_assert(offsetof(UCameraAnimationSequenceCameraStandIn, PostProcessBlendWeight) == 0x000720, "Member 'UCameraAnimationSequenceCameraStandIn::PostProcessBlendWeight' has a wrong offset!");
static_assert(offsetof(UCameraAnimationSequenceCameraStandIn, Filmback) == 0x000724, "Member 'UCameraAnimationSequenceCameraStandIn::Filmback' has a wrong offset!");
static_assert(offsetof(UCameraAnimationSequenceCameraStandIn, LensSettings) == 0x000730, "Member 'UCameraAnimationSequenceCameraStandIn::LensSettings' has a wrong offset!");
static_assert(offsetof(UCameraAnimationSequenceCameraStandIn, FocusSettings) == 0x000750, "Member 'UCameraAnimationSequenceCameraStandIn::FocusSettings' has a wrong offset!");
static_assert(offsetof(UCameraAnimationSequenceCameraStandIn, CurrentFocalLength) == 0x0007B0, "Member 'UCameraAnimationSequenceCameraStandIn::CurrentFocalLength' has a wrong offset!");
static_assert(offsetof(UCameraAnimationSequenceCameraStandIn, CurrentAperture) == 0x0007B4, "Member 'UCameraAnimationSequenceCameraStandIn::CurrentAperture' has a wrong offset!");
static_assert(offsetof(UCameraAnimationSequenceCameraStandIn, CurrentFocusDistance) == 0x0007B8, "Member 'UCameraAnimationSequenceCameraStandIn::CurrentFocusDistance' has a wrong offset!");

// Class TemplateSequence.CameraAnimationSequencePlayer
// 0x0370 (0x0398 - 0x0028)
class UCameraAnimationSequencePlayer final : public UObject
{
public:
	uint8                                         Pad_2582[0x270];                                   // 0x0028(0x0270)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                BoundObjectOverride;                               // 0x0298(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMovieSceneSequence*                    Sequence;                                          // 0x02A0(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;                              // 0x02A8(0x0088)(Transient, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2583[0x68];                                    // 0x0330(0x0068)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraAnimationSequencePlayer">();
	}
	static class UCameraAnimationSequencePlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraAnimationSequencePlayer>();
	}
};
static_assert(alignof(UCameraAnimationSequencePlayer) == 0x000008, "Wrong alignment on UCameraAnimationSequencePlayer");
static_assert(sizeof(UCameraAnimationSequencePlayer) == 0x000398, "Wrong size on UCameraAnimationSequencePlayer");
static_assert(offsetof(UCameraAnimationSequencePlayer, BoundObjectOverride) == 0x000298, "Member 'UCameraAnimationSequencePlayer::BoundObjectOverride' has a wrong offset!");
static_assert(offsetof(UCameraAnimationSequencePlayer, Sequence) == 0x0002A0, "Member 'UCameraAnimationSequencePlayer::Sequence' has a wrong offset!");
static_assert(offsetof(UCameraAnimationSequencePlayer, RootTemplateInstance) == 0x0002A8, "Member 'UCameraAnimationSequencePlayer::RootTemplateInstance' has a wrong offset!");

// Class TemplateSequence.CameraAnimationSpawnableSystem
// 0x0000 (0x0040 - 0x0040)
class UCameraAnimationSpawnableSystem final : public UMovieSceneEntitySystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraAnimationSpawnableSystem">();
	}
	static class UCameraAnimationSpawnableSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraAnimationSpawnableSystem>();
	}
};
static_assert(alignof(UCameraAnimationSpawnableSystem) == 0x000008, "Wrong alignment on UCameraAnimationSpawnableSystem");
static_assert(sizeof(UCameraAnimationSpawnableSystem) == 0x000040, "Wrong size on UCameraAnimationSpawnableSystem");

// Class TemplateSequence.CameraAnimationBoundObjectInstantiator
// 0x0000 (0x0040 - 0x0040)
class UCameraAnimationBoundObjectInstantiator final : public UMovieSceneEntityInstantiatorSystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraAnimationBoundObjectInstantiator">();
	}
	static class UCameraAnimationBoundObjectInstantiator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraAnimationBoundObjectInstantiator>();
	}
};
static_assert(alignof(UCameraAnimationBoundObjectInstantiator) == 0x000008, "Wrong alignment on UCameraAnimationBoundObjectInstantiator");
static_assert(sizeof(UCameraAnimationBoundObjectInstantiator) == 0x000040, "Wrong size on UCameraAnimationBoundObjectInstantiator");

// Class TemplateSequence.CameraAnimationEntitySystemLinker
// 0x0000 (0x0738 - 0x0738)
class UCameraAnimationEntitySystemLinker final : public UMovieSceneEntitySystemLinker
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraAnimationEntitySystemLinker">();
	}
	static class UCameraAnimationEntitySystemLinker* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraAnimationEntitySystemLinker>();
	}
};
static_assert(alignof(UCameraAnimationEntitySystemLinker) == 0x000008, "Wrong alignment on UCameraAnimationEntitySystemLinker");
static_assert(sizeof(UCameraAnimationEntitySystemLinker) == 0x000738, "Wrong size on UCameraAnimationEntitySystemLinker");

// Class TemplateSequence.CameraAnimationSequenceSubsystem
// 0x0018 (0x0048 - 0x0030)
class UCameraAnimationSequenceSubsystem final : public UWorldSubsystem
{
public:
	class UMovieSceneEntitySystemLinker*          Linker;                                            // 0x0030(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2584[0x10];                                    // 0x0038(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraAnimationSequenceSubsystem">();
	}
	static class UCameraAnimationSequenceSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraAnimationSequenceSubsystem>();
	}
};
static_assert(alignof(UCameraAnimationSequenceSubsystem) == 0x000008, "Wrong alignment on UCameraAnimationSequenceSubsystem");
static_assert(sizeof(UCameraAnimationSequenceSubsystem) == 0x000048, "Wrong size on UCameraAnimationSequenceSubsystem");
static_assert(offsetof(UCameraAnimationSequenceSubsystem, Linker) == 0x000030, "Member 'UCameraAnimationSequenceSubsystem::Linker' has a wrong offset!");

// Class TemplateSequence.TemplateSequenceSection
// 0x0010 (0x0148 - 0x0138)
class UTemplateSequenceSection final : public UMovieSceneSubSection
{
public:
	TArray<struct FTemplateSectionPropertyScale>  PropertyScales;                                    // 0x0138(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TemplateSequenceSection">();
	}
	static class UTemplateSequenceSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTemplateSequenceSection>();
	}
};
static_assert(alignof(UTemplateSequenceSection) == 0x000008, "Wrong alignment on UTemplateSequenceSection");
static_assert(sizeof(UTemplateSequenceSection) == 0x000148, "Wrong size on UTemplateSequenceSection");
static_assert(offsetof(UTemplateSequenceSection, PropertyScales) == 0x000138, "Member 'UTemplateSequenceSection::PropertyScales' has a wrong offset!");

// Class TemplateSequence.SequenceCameraShakePattern
// 0x0050 (0x0078 - 0x0028)
class USequenceCameraShakePattern final : public UCameraShakePattern
{
public:
	class UCameraAnimationSequence*               Sequence;                                          // 0x0028(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PlayRate;                                          // 0x0030(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Scale;                                             // 0x0034(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BlendInTime;                                       // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BlendOutTime;                                      // 0x003C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RandomSegmentDuration;                             // 0x0040(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRandomSegment;                                    // 0x0044(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2585[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCameraAnimationSequencePlayer*         Player;                                            // 0x0048(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCameraAnimationSequenceCameraStandIn*  CameraStandIn;                                     // 0x0050(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2586[0x20];                                    // 0x0058(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SequenceCameraShakePattern">();
	}
	static class USequenceCameraShakePattern* GetDefaultObj()
	{
		return GetDefaultObjImpl<USequenceCameraShakePattern>();
	}
};
static_assert(alignof(USequenceCameraShakePattern) == 0x000008, "Wrong alignment on USequenceCameraShakePattern");
static_assert(sizeof(USequenceCameraShakePattern) == 0x000078, "Wrong size on USequenceCameraShakePattern");
static_assert(offsetof(USequenceCameraShakePattern, Sequence) == 0x000028, "Member 'USequenceCameraShakePattern::Sequence' has a wrong offset!");
static_assert(offsetof(USequenceCameraShakePattern, PlayRate) == 0x000030, "Member 'USequenceCameraShakePattern::PlayRate' has a wrong offset!");
static_assert(offsetof(USequenceCameraShakePattern, Scale) == 0x000034, "Member 'USequenceCameraShakePattern::Scale' has a wrong offset!");
static_assert(offsetof(USequenceCameraShakePattern, BlendInTime) == 0x000038, "Member 'USequenceCameraShakePattern::BlendInTime' has a wrong offset!");
static_assert(offsetof(USequenceCameraShakePattern, BlendOutTime) == 0x00003C, "Member 'USequenceCameraShakePattern::BlendOutTime' has a wrong offset!");
static_assert(offsetof(USequenceCameraShakePattern, RandomSegmentDuration) == 0x000040, "Member 'USequenceCameraShakePattern::RandomSegmentDuration' has a wrong offset!");
static_assert(offsetof(USequenceCameraShakePattern, bRandomSegment) == 0x000044, "Member 'USequenceCameraShakePattern::bRandomSegment' has a wrong offset!");
static_assert(offsetof(USequenceCameraShakePattern, Player) == 0x000048, "Member 'USequenceCameraShakePattern::Player' has a wrong offset!");
static_assert(offsetof(USequenceCameraShakePattern, CameraStandIn) == 0x000050, "Member 'USequenceCameraShakePattern::CameraStandIn' has a wrong offset!");

// Class TemplateSequence.TemplateSequenceSystem
// 0x0070 (0x00B0 - 0x0040)
class UTemplateSequenceSystem final : public UMovieSceneEntitySystem
{
public:
	uint8                                         Pad_2587[0x70];                                    // 0x0040(0x0070)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TemplateSequenceSystem">();
	}
	static class UTemplateSequenceSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTemplateSequenceSystem>();
	}
};
static_assert(alignof(UTemplateSequenceSystem) == 0x000008, "Wrong alignment on UTemplateSequenceSystem");
static_assert(sizeof(UTemplateSequenceSystem) == 0x0000B0, "Wrong size on UTemplateSequenceSystem");

// Class TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem
// 0x0058 (0x0098 - 0x0040)
class UTemplateSequencePropertyScalingInstantiatorSystem final : public UMovieSceneEntitySystem
{
public:
	uint8                                         Pad_2588[0x58];                                    // 0x0040(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TemplateSequencePropertyScalingInstantiatorSystem">();
	}
	static class UTemplateSequencePropertyScalingInstantiatorSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTemplateSequencePropertyScalingInstantiatorSystem>();
	}
};
static_assert(alignof(UTemplateSequencePropertyScalingInstantiatorSystem) == 0x000008, "Wrong alignment on UTemplateSequencePropertyScalingInstantiatorSystem");
static_assert(sizeof(UTemplateSequencePropertyScalingInstantiatorSystem) == 0x000098, "Wrong size on UTemplateSequencePropertyScalingInstantiatorSystem");

// Class TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem
// 0x0050 (0x0090 - 0x0040)
class UTemplateSequencePropertyScalingEvaluatorSystem final : public UMovieSceneEntitySystem
{
public:
	uint8                                         Pad_2589[0x50];                                    // 0x0040(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TemplateSequencePropertyScalingEvaluatorSystem">();
	}
	static class UTemplateSequencePropertyScalingEvaluatorSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTemplateSequencePropertyScalingEvaluatorSystem>();
	}
};
static_assert(alignof(UTemplateSequencePropertyScalingEvaluatorSystem) == 0x000008, "Wrong alignment on UTemplateSequencePropertyScalingEvaluatorSystem");
static_assert(sizeof(UTemplateSequencePropertyScalingEvaluatorSystem) == 0x000090, "Wrong size on UTemplateSequencePropertyScalingEvaluatorSystem");

// Class TemplateSequence.TemplateSequenceActor
// 0x0060 (0x02F8 - 0x0298)
class ATemplateSequenceActor final : public AActor
{
public:
	uint8                                         Pad_258A[0x8];                                     // 0x0298(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMovieSceneSequencePlaybackSettings    PlaybackSettings;                                  // 0x02A0(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	class UTemplateSequencePlayer*                SequencePlayer;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                        TemplateSequence;                                  // 0x02C8(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTemplateSequenceBindingOverrideData   BindingOverride;                                   // 0x02E8(0x000C)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_258B[0x4];                                     // 0x02F4(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetBinding(class AActor* Actor, bool bOverridesDefault);
	void SetSequence(class UTemplateSequence* InSequence);

	class UTemplateSequence* GetSequence() const;
	class UTemplateSequencePlayer* GetSequencePlayer() const;
	class UTemplateSequence* LoadSequence() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TemplateSequenceActor">();
	}
	static class ATemplateSequenceActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATemplateSequenceActor>();
	}
};
static_assert(alignof(ATemplateSequenceActor) == 0x000008, "Wrong alignment on ATemplateSequenceActor");
static_assert(sizeof(ATemplateSequenceActor) == 0x0002F8, "Wrong size on ATemplateSequenceActor");
static_assert(offsetof(ATemplateSequenceActor, PlaybackSettings) == 0x0002A0, "Member 'ATemplateSequenceActor::PlaybackSettings' has a wrong offset!");
static_assert(offsetof(ATemplateSequenceActor, SequencePlayer) == 0x0002C0, "Member 'ATemplateSequenceActor::SequencePlayer' has a wrong offset!");
static_assert(offsetof(ATemplateSequenceActor, TemplateSequence) == 0x0002C8, "Member 'ATemplateSequenceActor::TemplateSequence' has a wrong offset!");
static_assert(offsetof(ATemplateSequenceActor, BindingOverride) == 0x0002E8, "Member 'ATemplateSequenceActor::BindingOverride' has a wrong offset!");

// Class TemplateSequence.TemplateSequencePlayer
// 0x0008 (0x04D0 - 0x04C8)
class UTemplateSequencePlayer final : public UMovieSceneSequencePlayer
{
public:
	uint8                                         Pad_258D[0x8];                                     // 0x04C8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UTemplateSequencePlayer* CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ATemplateSequenceActor** OutActor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TemplateSequencePlayer">();
	}
	static class UTemplateSequencePlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTemplateSequencePlayer>();
	}
};
static_assert(alignof(UTemplateSequencePlayer) == 0x000008, "Wrong alignment on UTemplateSequencePlayer");
static_assert(sizeof(UTemplateSequencePlayer) == 0x0004D0, "Wrong size on UTemplateSequencePlayer");

// Class TemplateSequence.SequenceCameraShakeTestUtil
// 0x0000 (0x0028 - 0x0028)
class USequenceCameraShakeTestUtil final : public UBlueprintFunctionLibrary
{
public:
	static struct FMinimalViewInfo GetCameraCachePOV(class APlayerController* PlayerController);
	static struct FMinimalViewInfo GetLastFrameCameraCachePOV(class APlayerController* PlayerController);
	static bool GetPostProcessBlendCache(class APlayerController* PlayerController, int32 PPIndex, struct FPostProcessSettings* OutPPSettings, float* OutPPBlendWeight);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SequenceCameraShakeTestUtil">();
	}
	static class USequenceCameraShakeTestUtil* GetDefaultObj()
	{
		return GetDefaultObjImpl<USequenceCameraShakeTestUtil>();
	}
};
static_assert(alignof(USequenceCameraShakeTestUtil) == 0x000008, "Wrong alignment on USequenceCameraShakeTestUtil");
static_assert(sizeof(USequenceCameraShakeTestUtil) == 0x000028, "Wrong size on USequenceCameraShakeTestUtil");

// Class TemplateSequence.TemplateSequenceTrack
// 0x0000 (0x00A8 - 0x00A8)
class UTemplateSequenceTrack final : public UMovieSceneSubTrack
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TemplateSequenceTrack">();
	}
	static class UTemplateSequenceTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTemplateSequenceTrack>();
	}
};
static_assert(alignof(UTemplateSequenceTrack) == 0x000008, "Wrong alignment on UTemplateSequenceTrack");
static_assert(sizeof(UTemplateSequenceTrack) == 0x0000A8, "Wrong size on UTemplateSequenceTrack");

}

