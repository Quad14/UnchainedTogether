#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GeometryCollectionTracks

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "MovieScene_structs.hpp"


namespace SDK
{

// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionParams
// 0x0038 (0x0038 - 0x0000)
struct FMovieSceneGeometryCollectionParams
{
public:
	uint8                                         Pad_24DF[0x8];                                     // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoftObjectPath                        GeometryCollectionCache;                           // 0x0008(0x0020)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                           StartFrameOffset;                                  // 0x0028(0x0004)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                           EndFrameOffset;                                    // 0x002C(0x0004)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PlayRate;                                          // 0x0030(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24E0[0x4];                                     // 0x0034(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMovieSceneGeometryCollectionParams) == 0x000008, "Wrong alignment on FMovieSceneGeometryCollectionParams");
static_assert(sizeof(FMovieSceneGeometryCollectionParams) == 0x000038, "Wrong size on FMovieSceneGeometryCollectionParams");
static_assert(offsetof(FMovieSceneGeometryCollectionParams, GeometryCollectionCache) == 0x000008, "Member 'FMovieSceneGeometryCollectionParams::GeometryCollectionCache' has a wrong offset!");
static_assert(offsetof(FMovieSceneGeometryCollectionParams, StartFrameOffset) == 0x000028, "Member 'FMovieSceneGeometryCollectionParams::StartFrameOffset' has a wrong offset!");
static_assert(offsetof(FMovieSceneGeometryCollectionParams, EndFrameOffset) == 0x00002C, "Member 'FMovieSceneGeometryCollectionParams::EndFrameOffset' has a wrong offset!");
static_assert(offsetof(FMovieSceneGeometryCollectionParams, PlayRate) == 0x000030, "Member 'FMovieSceneGeometryCollectionParams::PlayRate' has a wrong offset!");

// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplateParameters
// 0x0008 (0x0040 - 0x0038)
struct FMovieSceneGeometryCollectionSectionTemplateParameters final : public FMovieSceneGeometryCollectionParams
{
public:
	struct FFrameNumber                           SectionStartTime;                                  // 0x0038(0x0004)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                           SectionEndTime;                                    // 0x003C(0x0004)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMovieSceneGeometryCollectionSectionTemplateParameters) == 0x000008, "Wrong alignment on FMovieSceneGeometryCollectionSectionTemplateParameters");
static_assert(sizeof(FMovieSceneGeometryCollectionSectionTemplateParameters) == 0x000040, "Wrong size on FMovieSceneGeometryCollectionSectionTemplateParameters");
static_assert(offsetof(FMovieSceneGeometryCollectionSectionTemplateParameters, SectionStartTime) == 0x000038, "Member 'FMovieSceneGeometryCollectionSectionTemplateParameters::SectionStartTime' has a wrong offset!");
static_assert(offsetof(FMovieSceneGeometryCollectionSectionTemplateParameters, SectionEndTime) == 0x00003C, "Member 'FMovieSceneGeometryCollectionSectionTemplateParameters::SectionEndTime' has a wrong offset!");

// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplate
// 0x0040 (0x0060 - 0x0020)
struct FMovieSceneGeometryCollectionSectionTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneGeometryCollectionSectionTemplateParameters Params;                                            // 0x0020(0x0040)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FMovieSceneGeometryCollectionSectionTemplate) == 0x000008, "Wrong alignment on FMovieSceneGeometryCollectionSectionTemplate");
static_assert(sizeof(FMovieSceneGeometryCollectionSectionTemplate) == 0x000060, "Wrong size on FMovieSceneGeometryCollectionSectionTemplate");
static_assert(offsetof(FMovieSceneGeometryCollectionSectionTemplate, Params) == 0x000020, "Member 'FMovieSceneGeometryCollectionSectionTemplate::Params' has a wrong offset!");

}

