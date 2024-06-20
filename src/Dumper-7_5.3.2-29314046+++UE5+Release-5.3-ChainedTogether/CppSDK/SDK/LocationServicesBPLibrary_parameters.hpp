#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LocationServicesBPLibrary

#include "Basic.hpp"

#include "LocationServicesBPLibrary_structs.hpp"


namespace SDK::Params
{

// Function LocationServicesBPLibrary.LocationServices.AreLocationServicesEnabled
// 0x0001 (0x0001 - 0x0000)
struct LocationServices_AreLocationServicesEnabled final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LocationServices_AreLocationServicesEnabled) == 0x000001, "Wrong alignment on LocationServices_AreLocationServicesEnabled");
static_assert(sizeof(LocationServices_AreLocationServicesEnabled) == 0x000001, "Wrong size on LocationServices_AreLocationServicesEnabled");
static_assert(offsetof(LocationServices_AreLocationServicesEnabled, ReturnValue) == 0x000000, "Member 'LocationServices_AreLocationServicesEnabled::ReturnValue' has a wrong offset!");

// Function LocationServicesBPLibrary.LocationServices.GetLastKnownLocation
// 0x0018 (0x0018 - 0x0000)
struct LocationServices_GetLastKnownLocation final
{
public:
	struct FLocationServicesData                  ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(LocationServices_GetLastKnownLocation) == 0x000004, "Wrong alignment on LocationServices_GetLastKnownLocation");
static_assert(sizeof(LocationServices_GetLastKnownLocation) == 0x000018, "Wrong size on LocationServices_GetLastKnownLocation");
static_assert(offsetof(LocationServices_GetLastKnownLocation, ReturnValue) == 0x000000, "Member 'LocationServices_GetLastKnownLocation::ReturnValue' has a wrong offset!");

// Function LocationServicesBPLibrary.LocationServices.GetLocationServicesImpl
// 0x0008 (0x0008 - 0x0000)
struct LocationServices_GetLocationServicesImpl final
{
public:
	class ULocationServicesImpl*                  ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LocationServices_GetLocationServicesImpl) == 0x000008, "Wrong alignment on LocationServices_GetLocationServicesImpl");
static_assert(sizeof(LocationServices_GetLocationServicesImpl) == 0x000008, "Wrong size on LocationServices_GetLocationServicesImpl");
static_assert(offsetof(LocationServices_GetLocationServicesImpl, ReturnValue) == 0x000000, "Member 'LocationServices_GetLocationServicesImpl::ReturnValue' has a wrong offset!");

// Function LocationServicesBPLibrary.LocationServices.InitLocationServices
// 0x0010 (0x0010 - 0x0000)
struct LocationServices_InitLocationServices final
{
public:
	ELocationAccuracy                             Accuracy;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_299D[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         UpdateFrequency;                                   // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinDistanceFilter;                                 // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x000C(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_299E[0x3];                                     // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LocationServices_InitLocationServices) == 0x000004, "Wrong alignment on LocationServices_InitLocationServices");
static_assert(sizeof(LocationServices_InitLocationServices) == 0x000010, "Wrong size on LocationServices_InitLocationServices");
static_assert(offsetof(LocationServices_InitLocationServices, Accuracy) == 0x000000, "Member 'LocationServices_InitLocationServices::Accuracy' has a wrong offset!");
static_assert(offsetof(LocationServices_InitLocationServices, UpdateFrequency) == 0x000004, "Member 'LocationServices_InitLocationServices::UpdateFrequency' has a wrong offset!");
static_assert(offsetof(LocationServices_InitLocationServices, MinDistanceFilter) == 0x000008, "Member 'LocationServices_InitLocationServices::MinDistanceFilter' has a wrong offset!");
static_assert(offsetof(LocationServices_InitLocationServices, ReturnValue) == 0x00000C, "Member 'LocationServices_InitLocationServices::ReturnValue' has a wrong offset!");

// Function LocationServicesBPLibrary.LocationServices.IsLocationAccuracyAvailable
// 0x0002 (0x0002 - 0x0000)
struct LocationServices_IsLocationAccuracyAvailable final
{
public:
	ELocationAccuracy                             Accuracy;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LocationServices_IsLocationAccuracyAvailable) == 0x000001, "Wrong alignment on LocationServices_IsLocationAccuracyAvailable");
static_assert(sizeof(LocationServices_IsLocationAccuracyAvailable) == 0x000002, "Wrong size on LocationServices_IsLocationAccuracyAvailable");
static_assert(offsetof(LocationServices_IsLocationAccuracyAvailable, Accuracy) == 0x000000, "Member 'LocationServices_IsLocationAccuracyAvailable::Accuracy' has a wrong offset!");
static_assert(offsetof(LocationServices_IsLocationAccuracyAvailable, ReturnValue) == 0x000001, "Member 'LocationServices_IsLocationAccuracyAvailable::ReturnValue' has a wrong offset!");

// Function LocationServicesBPLibrary.LocationServices.StartLocationServices
// 0x0001 (0x0001 - 0x0000)
struct LocationServices_StartLocationServices final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LocationServices_StartLocationServices) == 0x000001, "Wrong alignment on LocationServices_StartLocationServices");
static_assert(sizeof(LocationServices_StartLocationServices) == 0x000001, "Wrong size on LocationServices_StartLocationServices");
static_assert(offsetof(LocationServices_StartLocationServices, ReturnValue) == 0x000000, "Member 'LocationServices_StartLocationServices::ReturnValue' has a wrong offset!");

// Function LocationServicesBPLibrary.LocationServices.StopLocationServices
// 0x0001 (0x0001 - 0x0000)
struct LocationServices_StopLocationServices final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LocationServices_StopLocationServices) == 0x000001, "Wrong alignment on LocationServices_StopLocationServices");
static_assert(sizeof(LocationServices_StopLocationServices) == 0x000001, "Wrong size on LocationServices_StopLocationServices");
static_assert(offsetof(LocationServices_StopLocationServices, ReturnValue) == 0x000000, "Member 'LocationServices_StopLocationServices::ReturnValue' has a wrong offset!");

}

