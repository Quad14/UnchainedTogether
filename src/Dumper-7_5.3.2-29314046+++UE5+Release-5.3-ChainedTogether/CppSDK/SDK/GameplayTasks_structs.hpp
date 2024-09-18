#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameplayTasks

#include "Basic.hpp"


namespace SDK
{

// Enum GameplayTasks.ETaskResourceOverlapPolicy
// NumValues: 0x0005
enum class ETaskResourceOverlapPolicy : uint8
{
	StartOnTop                               = 0,
	StartAtEnd                               = 1,
	RequestCancelAndStartOnTop               = 2,
	RequestCancelAndStartAtEnd               = 3,
	ETaskResourceOverlapPolicy_MAX           = 4,
};

// Enum GameplayTasks.EGameplayTaskState
// NumValues: 0x0006
enum class EGameplayTaskState : uint8
{
	Uninitialized                            = 0,
	AwaitingActivation                       = 1,
	Paused                                   = 2,
	Active                                   = 3,
	Finished                                 = 4,
	EGameplayTaskState_MAX                   = 5,
};

// Enum GameplayTasks.EGameplayTaskRunResult
// NumValues: 0x0006
enum class EGameplayTaskRunResult : uint8
{
	Error                                    = 0,
	Failed                                   = 1,
	Success_Paused                           = 2,
	Success_Active                           = 3,
	Success_Finished                         = 4,
	EGameplayTaskRunResult_MAX               = 5,
};

// ScriptStruct GameplayTasks.GameplayResourceSet
// 0x0002 (0x0002 - 0x0000)
struct alignas(0x02) FGameplayResourceSet final
{
public:
	uint8                                         Pad_0[0x2];                                        // 0x0000(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameplayResourceSet) == 0x000002, "Wrong alignment on FGameplayResourceSet");
static_assert(sizeof(FGameplayResourceSet) == 0x000002, "Wrong size on FGameplayResourceSet");

}

