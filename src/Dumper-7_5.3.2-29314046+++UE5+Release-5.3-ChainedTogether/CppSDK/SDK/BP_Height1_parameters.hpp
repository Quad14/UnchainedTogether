#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Height1

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_Height1.BP_Height1_C.GetHeight0Location
// 0x0030 (0x0030 - 0x0000)
struct BP_Height1_C_GetHeight0Location final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Height1_C_GetHeight0Location) == 0x000008, "Wrong alignment on BP_Height1_C_GetHeight0Location");
static_assert(sizeof(BP_Height1_C_GetHeight0Location) == 0x000030, "Wrong size on BP_Height1_C_GetHeight0Location");
static_assert(offsetof(BP_Height1_C_GetHeight0Location, Location) == 0x000000, "Member 'BP_Height1_C_GetHeight0Location::Location' has a wrong offset!");
static_assert(offsetof(BP_Height1_C_GetHeight0Location, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'BP_Height1_C_GetHeight0Location::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");

}

