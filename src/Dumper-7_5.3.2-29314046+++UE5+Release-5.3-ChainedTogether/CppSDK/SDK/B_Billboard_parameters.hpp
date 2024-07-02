#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Billboard

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function B_Billboard.B_Billboard_C.UserConstructionScript
// 0x00F0 (0x00F0 - 0x0000)
struct B_Billboard_C_UserConstructionScript final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A4E[0xF];                                     // 0x0001(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue;           // 0x0010(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CallFunc_AddComponent_ReturnValue;                 // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A4F[0x8];                                     // 0x0078(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue_1;         // 0x0080(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CallFunc_AddComponent_ReturnValue_1;               // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Billboard_C_UserConstructionScript) == 0x000010, "Wrong alignment on B_Billboard_C_UserConstructionScript");
static_assert(sizeof(B_Billboard_C_UserConstructionScript) == 0x0000F0, "Wrong size on B_Billboard_C_UserConstructionScript");
static_assert(offsetof(B_Billboard_C_UserConstructionScript, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'B_Billboard_C_UserConstructionScript::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Billboard_C_UserConstructionScript, CallFunc_GetSocketTransform_ReturnValue) == 0x000010, "Member 'B_Billboard_C_UserConstructionScript::CallFunc_GetSocketTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Billboard_C_UserConstructionScript, CallFunc_AddComponent_ReturnValue) == 0x000070, "Member 'B_Billboard_C_UserConstructionScript::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Billboard_C_UserConstructionScript, CallFunc_GetSocketTransform_ReturnValue_1) == 0x000080, "Member 'B_Billboard_C_UserConstructionScript::CallFunc_GetSocketTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Billboard_C_UserConstructionScript, CallFunc_AddComponent_ReturnValue_1) == 0x0000E0, "Member 'B_Billboard_C_UserConstructionScript::CallFunc_AddComponent_ReturnValue_1' has a wrong offset!");

}

