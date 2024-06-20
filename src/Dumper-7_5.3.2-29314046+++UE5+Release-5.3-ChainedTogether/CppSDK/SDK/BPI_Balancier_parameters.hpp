#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_Balancier

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_Balancier.BPI_Balancier_C.AttachMaillonToHands
// 0x0010 (0x0010 - 0x0000)
struct BPI_Balancier_C_AttachMaillonToHands final
{
public:
	class USceneComponent*                        Socket;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    Maillon;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Balancier_C_AttachMaillonToHands) == 0x000008, "Wrong alignment on BPI_Balancier_C_AttachMaillonToHands");
static_assert(sizeof(BPI_Balancier_C_AttachMaillonToHands) == 0x000010, "Wrong size on BPI_Balancier_C_AttachMaillonToHands");
static_assert(offsetof(BPI_Balancier_C_AttachMaillonToHands, Socket) == 0x000000, "Member 'BPI_Balancier_C_AttachMaillonToHands::Socket' has a wrong offset!");
static_assert(offsetof(BPI_Balancier_C_AttachMaillonToHands, Maillon) == 0x000008, "Member 'BPI_Balancier_C_AttachMaillonToHands::Maillon' has a wrong offset!");

// Function BPI_Balancier.BPI_Balancier_C.GetMaillonByIndex
// 0x0010 (0x0010 - 0x0000)
struct BPI_Balancier_C_GetMaillonByIndex final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2CB4[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    Maillon;                                           // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Balancier_C_GetMaillonByIndex) == 0x000008, "Wrong alignment on BPI_Balancier_C_GetMaillonByIndex");
static_assert(sizeof(BPI_Balancier_C_GetMaillonByIndex) == 0x000010, "Wrong size on BPI_Balancier_C_GetMaillonByIndex");
static_assert(offsetof(BPI_Balancier_C_GetMaillonByIndex, Param_Index) == 0x000000, "Member 'BPI_Balancier_C_GetMaillonByIndex::Param_Index' has a wrong offset!");
static_assert(offsetof(BPI_Balancier_C_GetMaillonByIndex, Maillon) == 0x000008, "Member 'BPI_Balancier_C_GetMaillonByIndex::Maillon' has a wrong offset!");

// Function BPI_Balancier.BPI_Balancier_C.GetMaillonIndex
// 0x0010 (0x0010 - 0x0000)
struct BPI_Balancier_C_GetMaillonIndex final
{
public:
	class UPrimitiveComponent*                    Maillon;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Balancier_C_GetMaillonIndex) == 0x000008, "Wrong alignment on BPI_Balancier_C_GetMaillonIndex");
static_assert(sizeof(BPI_Balancier_C_GetMaillonIndex) == 0x000010, "Wrong size on BPI_Balancier_C_GetMaillonIndex");
static_assert(offsetof(BPI_Balancier_C_GetMaillonIndex, Maillon) == 0x000000, "Member 'BPI_Balancier_C_GetMaillonIndex::Maillon' has a wrong offset!");
static_assert(offsetof(BPI_Balancier_C_GetMaillonIndex, Param_Index) == 0x000008, "Member 'BPI_Balancier_C_GetMaillonIndex::Param_Index' has a wrong offset!");

// Function BPI_Balancier.BPI_Balancier_C.GetRoot
// 0x0008 (0x0008 - 0x0000)
struct BPI_Balancier_C_GetRoot final
{
public:
	class UPrimitiveComponent*                    Root;                                              // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Balancier_C_GetRoot) == 0x000008, "Wrong alignment on BPI_Balancier_C_GetRoot");
static_assert(sizeof(BPI_Balancier_C_GetRoot) == 0x000008, "Wrong size on BPI_Balancier_C_GetRoot");
static_assert(offsetof(BPI_Balancier_C_GetRoot, Root) == 0x000000, "Member 'BPI_Balancier_C_GetRoot::Root' has a wrong offset!");

// Function BPI_Balancier.BPI_Balancier_C.IsOccupied
// 0x0001 (0x0001 - 0x0000)
struct BPI_Balancier_C_IsOccupied final
{
public:
	bool                                          Occupied;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Balancier_C_IsOccupied) == 0x000001, "Wrong alignment on BPI_Balancier_C_IsOccupied");
static_assert(sizeof(BPI_Balancier_C_IsOccupied) == 0x000001, "Wrong size on BPI_Balancier_C_IsOccupied");
static_assert(offsetof(BPI_Balancier_C_IsOccupied, Occupied) == 0x000000, "Member 'BPI_Balancier_C_IsOccupied::Occupied' has a wrong offset!");

// Function BPI_Balancier.BPI_Balancier_C.SetOccupied
// 0x0001 (0x0001 - 0x0000)
struct BPI_Balancier_C_SetOccupied final
{
public:
	bool                                          Occupied;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Balancier_C_SetOccupied) == 0x000001, "Wrong alignment on BPI_Balancier_C_SetOccupied");
static_assert(sizeof(BPI_Balancier_C_SetOccupied) == 0x000001, "Wrong size on BPI_Balancier_C_SetOccupied");
static_assert(offsetof(BPI_Balancier_C_SetOccupied, Occupied) == 0x000000, "Member 'BPI_Balancier_C_SetOccupied::Occupied' has a wrong offset!");

}

