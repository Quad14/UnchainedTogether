#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChaosCaching

#include "Basic.hpp"


namespace SDK::Params
{

// Function ChaosCaching.ChaosCacheManager.EnablePlayback
// 0x0008 (0x0008 - 0x0000)
struct ChaosCacheManager_EnablePlayback final
{
public:
	int32                                         Index_0;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnable;                                           // 0x0004(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ChaosCacheManager_EnablePlayback) == 0x000004, "Wrong alignment on ChaosCacheManager_EnablePlayback");
static_assert(sizeof(ChaosCacheManager_EnablePlayback) == 0x000008, "Wrong size on ChaosCacheManager_EnablePlayback");
static_assert(offsetof(ChaosCacheManager_EnablePlayback, Index_0) == 0x000000, "Member 'ChaosCacheManager_EnablePlayback::Index_0' has a wrong offset!");
static_assert(offsetof(ChaosCacheManager_EnablePlayback, bEnable) == 0x000004, "Member 'ChaosCacheManager_EnablePlayback::bEnable' has a wrong offset!");

// Function ChaosCaching.ChaosCacheManager.EnablePlaybackByCache
// 0x000C (0x000C - 0x0000)
struct ChaosCacheManager_EnablePlaybackByCache final
{
public:
	class FName                                   InCacheName;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnable;                                           // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ChaosCacheManager_EnablePlaybackByCache) == 0x000004, "Wrong alignment on ChaosCacheManager_EnablePlaybackByCache");
static_assert(sizeof(ChaosCacheManager_EnablePlaybackByCache) == 0x00000C, "Wrong size on ChaosCacheManager_EnablePlaybackByCache");
static_assert(offsetof(ChaosCacheManager_EnablePlaybackByCache, InCacheName) == 0x000000, "Member 'ChaosCacheManager_EnablePlaybackByCache::InCacheName' has a wrong offset!");
static_assert(offsetof(ChaosCacheManager_EnablePlaybackByCache, bEnable) == 0x000008, "Member 'ChaosCacheManager_EnablePlaybackByCache::bEnable' has a wrong offset!");

// Function ChaosCaching.ChaosCacheManager.ResetSingleTransform
// 0x0004 (0x0004 - 0x0000)
struct ChaosCacheManager_ResetSingleTransform final
{
public:
	int32                                         InIndex;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChaosCacheManager_ResetSingleTransform) == 0x000004, "Wrong alignment on ChaosCacheManager_ResetSingleTransform");
static_assert(sizeof(ChaosCacheManager_ResetSingleTransform) == 0x000004, "Wrong size on ChaosCacheManager_ResetSingleTransform");
static_assert(offsetof(ChaosCacheManager_ResetSingleTransform, InIndex) == 0x000000, "Member 'ChaosCacheManager_ResetSingleTransform::InIndex' has a wrong offset!");

// Function ChaosCaching.ChaosCacheManager.SetCacheCollection
// 0x0008 (0x0008 - 0x0000)
struct ChaosCacheManager_SetCacheCollection final
{
public:
	class UChaosCacheCollection*                  InCacheCollection;                                 // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChaosCacheManager_SetCacheCollection) == 0x000008, "Wrong alignment on ChaosCacheManager_SetCacheCollection");
static_assert(sizeof(ChaosCacheManager_SetCacheCollection) == 0x000008, "Wrong size on ChaosCacheManager_SetCacheCollection");
static_assert(offsetof(ChaosCacheManager_SetCacheCollection, InCacheCollection) == 0x000000, "Member 'ChaosCacheManager_SetCacheCollection::InCacheCollection' has a wrong offset!");

// Function ChaosCaching.ChaosCacheManager.SetStartTime
// 0x0004 (0x0004 - 0x0000)
struct ChaosCacheManager_SetStartTime final
{
public:
	float                                         InStartTime;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChaosCacheManager_SetStartTime) == 0x000004, "Wrong alignment on ChaosCacheManager_SetStartTime");
static_assert(sizeof(ChaosCacheManager_SetStartTime) == 0x000004, "Wrong size on ChaosCacheManager_SetStartTime");
static_assert(offsetof(ChaosCacheManager_SetStartTime, InStartTime) == 0x000000, "Member 'ChaosCacheManager_SetStartTime::InStartTime' has a wrong offset!");

// Function ChaosCaching.ChaosCacheManager.TriggerComponent
// 0x0008 (0x0008 - 0x0000)
struct ChaosCacheManager_TriggerComponent final
{
public:
	class UPrimitiveComponent*                    InComponent;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChaosCacheManager_TriggerComponent) == 0x000008, "Wrong alignment on ChaosCacheManager_TriggerComponent");
static_assert(sizeof(ChaosCacheManager_TriggerComponent) == 0x000008, "Wrong size on ChaosCacheManager_TriggerComponent");
static_assert(offsetof(ChaosCacheManager_TriggerComponent, InComponent) == 0x000000, "Member 'ChaosCacheManager_TriggerComponent::InComponent' has a wrong offset!");

// Function ChaosCaching.ChaosCacheManager.TriggerComponentByCache
// 0x0008 (0x0008 - 0x0000)
struct ChaosCacheManager_TriggerComponentByCache final
{
public:
	class FName                                   InCacheName;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChaosCacheManager_TriggerComponentByCache) == 0x000004, "Wrong alignment on ChaosCacheManager_TriggerComponentByCache");
static_assert(sizeof(ChaosCacheManager_TriggerComponentByCache) == 0x000008, "Wrong size on ChaosCacheManager_TriggerComponentByCache");
static_assert(offsetof(ChaosCacheManager_TriggerComponentByCache, InCacheName) == 0x000000, "Member 'ChaosCacheManager_TriggerComponentByCache::InCacheName' has a wrong offset!");

}

