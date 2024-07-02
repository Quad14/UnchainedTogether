#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MovementSettings

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct MovementSettings.MovementSettings
// 0x0020 (0x0020 - 0x0000)
struct FMovementSettings final
{
public:
	float                                         WalkSpeed_40_9AD737B14B8BC378F924E890E018B5B0;     // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RunSpeed_39_7397773A4A46B563F765429BD6A2DDE8;      // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SprintSpeed_38_6123675A40931BD70D4CF18D9A2A1C4C;   // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DB9[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveVector*                           MovementCurve_51_FDDCE64149CA0F8A553745BEA0FEE53E; // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            RotationRateCurve_52_73FA146B4B31FF205DE8E1BBFA8800F6; // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FMovementSettings) == 0x000008, "Wrong alignment on FMovementSettings");
static_assert(sizeof(FMovementSettings) == 0x000020, "Wrong size on FMovementSettings");
static_assert(offsetof(FMovementSettings, WalkSpeed_40_9AD737B14B8BC378F924E890E018B5B0) == 0x000000, "Member 'FMovementSettings::WalkSpeed_40_9AD737B14B8BC378F924E890E018B5B0' has a wrong offset!");
static_assert(offsetof(FMovementSettings, RunSpeed_39_7397773A4A46B563F765429BD6A2DDE8) == 0x000004, "Member 'FMovementSettings::RunSpeed_39_7397773A4A46B563F765429BD6A2DDE8' has a wrong offset!");
static_assert(offsetof(FMovementSettings, SprintSpeed_38_6123675A40931BD70D4CF18D9A2A1C4C) == 0x000008, "Member 'FMovementSettings::SprintSpeed_38_6123675A40931BD70D4CF18D9A2A1C4C' has a wrong offset!");
static_assert(offsetof(FMovementSettings, MovementCurve_51_FDDCE64149CA0F8A553745BEA0FEE53E) == 0x000010, "Member 'FMovementSettings::MovementCurve_51_FDDCE64149CA0F8A553745BEA0FEE53E' has a wrong offset!");
static_assert(offsetof(FMovementSettings, RotationRateCurve_52_73FA146B4B31FF205DE8E1BBFA8800F6) == 0x000018, "Member 'FMovementSettings::RotationRateCurve_52_73FA146B4B31FF205DE8E1BBFA8800F6' has a wrong offset!");

}

