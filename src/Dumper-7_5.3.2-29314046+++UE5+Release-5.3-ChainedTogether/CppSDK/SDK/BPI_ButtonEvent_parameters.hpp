#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_ButtonEvent

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_ButtonEvent.BPI_ButtonEvent_C.IsActivated
// 0x0001 (0x0001 - 0x0000)
struct BPI_ButtonEvent_C_IsActivated final
{
public:
	bool                                          Activated;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_ButtonEvent_C_IsActivated) == 0x000001, "Wrong alignment on BPI_ButtonEvent_C_IsActivated");
static_assert(sizeof(BPI_ButtonEvent_C_IsActivated) == 0x000001, "Wrong size on BPI_ButtonEvent_C_IsActivated");
static_assert(offsetof(BPI_ButtonEvent_C_IsActivated, Activated) == 0x000000, "Member 'BPI_ButtonEvent_C_IsActivated::Activated' has a wrong offset!");

}

