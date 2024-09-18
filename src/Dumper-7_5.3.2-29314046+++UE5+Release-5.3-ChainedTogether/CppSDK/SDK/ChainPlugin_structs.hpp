#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChainPlugin

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// ScriptStruct ChainPlugin.ChainPoint
// 0x0100 (0x0100 - 0x0000)
struct FChainPoint final
{
public:
	bool                                          Free;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Position;                                          // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                OldPosition;                                       // 0x0020(0x0018)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Velocity;                                          // 0x0038(0x0018)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Force;                                             // 0x0050(0x0018)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               Rotation;                                          // 0x0068(0x0018)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             Transform;                                         // 0x0080(0x0060)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Time;                                              // 0x00E0(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Index;                                             // 0x00E4(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Direction;                                         // 0x00E8(0x0018)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FChainPoint) == 0x000010, "Wrong alignment on FChainPoint");
static_assert(sizeof(FChainPoint) == 0x000100, "Wrong size on FChainPoint");
static_assert(offsetof(FChainPoint, Free) == 0x000000, "Member 'FChainPoint::Free' has a wrong offset!");
static_assert(offsetof(FChainPoint, Position) == 0x000008, "Member 'FChainPoint::Position' has a wrong offset!");
static_assert(offsetof(FChainPoint, OldPosition) == 0x000020, "Member 'FChainPoint::OldPosition' has a wrong offset!");
static_assert(offsetof(FChainPoint, Velocity) == 0x000038, "Member 'FChainPoint::Velocity' has a wrong offset!");
static_assert(offsetof(FChainPoint, Force) == 0x000050, "Member 'FChainPoint::Force' has a wrong offset!");
static_assert(offsetof(FChainPoint, Rotation) == 0x000068, "Member 'FChainPoint::Rotation' has a wrong offset!");
static_assert(offsetof(FChainPoint, Transform) == 0x000080, "Member 'FChainPoint::Transform' has a wrong offset!");
static_assert(offsetof(FChainPoint, Time) == 0x0000E0, "Member 'FChainPoint::Time' has a wrong offset!");
static_assert(offsetof(FChainPoint, Index) == 0x0000E4, "Member 'FChainPoint::Index' has a wrong offset!");
static_assert(offsetof(FChainPoint, Direction) == 0x0000E8, "Member 'FChainPoint::Direction' has a wrong offset!");

}

