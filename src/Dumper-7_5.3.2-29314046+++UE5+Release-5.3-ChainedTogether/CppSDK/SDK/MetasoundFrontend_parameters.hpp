#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MetasoundFrontend

#include "Basic.hpp"

#include "MetasoundFrontend_structs.hpp"


namespace SDK::Params
{

// Function MetasoundFrontend.MetasoundParameterPack.MakeMetasoundParameterPack
// 0x0008 (0x0008 - 0x0000)
struct MetasoundParameterPack_MakeMetasoundParameterPack final
{
public:
	class UMetasoundParameterPack*                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MetasoundParameterPack_MakeMetasoundParameterPack) == 0x000008, "Wrong alignment on MetasoundParameterPack_MakeMetasoundParameterPack");
static_assert(sizeof(MetasoundParameterPack_MakeMetasoundParameterPack) == 0x000008, "Wrong size on MetasoundParameterPack_MakeMetasoundParameterPack");
static_assert(offsetof(MetasoundParameterPack_MakeMetasoundParameterPack, ReturnValue) == 0x000000, "Member 'MetasoundParameterPack_MakeMetasoundParameterPack::ReturnValue' has a wrong offset!");

// Function MetasoundFrontend.MetasoundParameterPack.SetBool
// 0x000C (0x000C - 0x0000)
struct MetasoundParameterPack_SetBool final
{
public:
	class FName                                   ParameterName;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          InValue;                                           // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          OnlyIfExists;                                      // 0x0009(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESetParamResult                               ReturnValue;                                       // 0x000A(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29B3[0x1];                                     // 0x000B(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MetasoundParameterPack_SetBool) == 0x000004, "Wrong alignment on MetasoundParameterPack_SetBool");
static_assert(sizeof(MetasoundParameterPack_SetBool) == 0x00000C, "Wrong size on MetasoundParameterPack_SetBool");
static_assert(offsetof(MetasoundParameterPack_SetBool, ParameterName) == 0x000000, "Member 'MetasoundParameterPack_SetBool::ParameterName' has a wrong offset!");
static_assert(offsetof(MetasoundParameterPack_SetBool, InValue) == 0x000008, "Member 'MetasoundParameterPack_SetBool::InValue' has a wrong offset!");
static_assert(offsetof(MetasoundParameterPack_SetBool, OnlyIfExists) == 0x000009, "Member 'MetasoundParameterPack_SetBool::OnlyIfExists' has a wrong offset!");
static_assert(offsetof(MetasoundParameterPack_SetBool, ReturnValue) == 0x00000A, "Member 'MetasoundParameterPack_SetBool::ReturnValue' has a wrong offset!");

// Function MetasoundFrontend.MetasoundParameterPack.SetFloat
// 0x0010 (0x0010 - 0x0000)
struct MetasoundParameterPack_SetFloat final
{
public:
	class FName                                   ParameterName;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InValue;                                           // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          OnlyIfExists;                                      // 0x000C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESetParamResult                               ReturnValue;                                       // 0x000D(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29B4[0x2];                                     // 0x000E(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MetasoundParameterPack_SetFloat) == 0x000004, "Wrong alignment on MetasoundParameterPack_SetFloat");
static_assert(sizeof(MetasoundParameterPack_SetFloat) == 0x000010, "Wrong size on MetasoundParameterPack_SetFloat");
static_assert(offsetof(MetasoundParameterPack_SetFloat, ParameterName) == 0x000000, "Member 'MetasoundParameterPack_SetFloat::ParameterName' has a wrong offset!");
static_assert(offsetof(MetasoundParameterPack_SetFloat, InValue) == 0x000008, "Member 'MetasoundParameterPack_SetFloat::InValue' has a wrong offset!");
static_assert(offsetof(MetasoundParameterPack_SetFloat, OnlyIfExists) == 0x00000C, "Member 'MetasoundParameterPack_SetFloat::OnlyIfExists' has a wrong offset!");
static_assert(offsetof(MetasoundParameterPack_SetFloat, ReturnValue) == 0x00000D, "Member 'MetasoundParameterPack_SetFloat::ReturnValue' has a wrong offset!");

// Function MetasoundFrontend.MetasoundParameterPack.SetInt
// 0x0010 (0x0010 - 0x0000)
struct MetasoundParameterPack_SetInt final
{
public:
	class FName                                   ParameterName;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InValue;                                           // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          OnlyIfExists;                                      // 0x000C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESetParamResult                               ReturnValue;                                       // 0x000D(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29B5[0x2];                                     // 0x000E(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MetasoundParameterPack_SetInt) == 0x000004, "Wrong alignment on MetasoundParameterPack_SetInt");
static_assert(sizeof(MetasoundParameterPack_SetInt) == 0x000010, "Wrong size on MetasoundParameterPack_SetInt");
static_assert(offsetof(MetasoundParameterPack_SetInt, ParameterName) == 0x000000, "Member 'MetasoundParameterPack_SetInt::ParameterName' has a wrong offset!");
static_assert(offsetof(MetasoundParameterPack_SetInt, InValue) == 0x000008, "Member 'MetasoundParameterPack_SetInt::InValue' has a wrong offset!");
static_assert(offsetof(MetasoundParameterPack_SetInt, OnlyIfExists) == 0x00000C, "Member 'MetasoundParameterPack_SetInt::OnlyIfExists' has a wrong offset!");
static_assert(offsetof(MetasoundParameterPack_SetInt, ReturnValue) == 0x00000D, "Member 'MetasoundParameterPack_SetInt::ReturnValue' has a wrong offset!");

// Function MetasoundFrontend.MetasoundParameterPack.SetString
// 0x0020 (0x0020 - 0x0000)
struct MetasoundParameterPack_SetString final
{
public:
	class FName                                   ParameterName;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 InValue;                                           // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          OnlyIfExists;                                      // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESetParamResult                               ReturnValue;                                       // 0x0019(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29B6[0x6];                                     // 0x001A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MetasoundParameterPack_SetString) == 0x000008, "Wrong alignment on MetasoundParameterPack_SetString");
static_assert(sizeof(MetasoundParameterPack_SetString) == 0x000020, "Wrong size on MetasoundParameterPack_SetString");
static_assert(offsetof(MetasoundParameterPack_SetString, ParameterName) == 0x000000, "Member 'MetasoundParameterPack_SetString::ParameterName' has a wrong offset!");
static_assert(offsetof(MetasoundParameterPack_SetString, InValue) == 0x000008, "Member 'MetasoundParameterPack_SetString::InValue' has a wrong offset!");
static_assert(offsetof(MetasoundParameterPack_SetString, OnlyIfExists) == 0x000018, "Member 'MetasoundParameterPack_SetString::OnlyIfExists' has a wrong offset!");
static_assert(offsetof(MetasoundParameterPack_SetString, ReturnValue) == 0x000019, "Member 'MetasoundParameterPack_SetString::ReturnValue' has a wrong offset!");

// Function MetasoundFrontend.MetasoundParameterPack.SetTrigger
// 0x000C (0x000C - 0x0000)
struct MetasoundParameterPack_SetTrigger final
{
public:
	class FName                                   ParameterName;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          OnlyIfExists;                                      // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESetParamResult                               ReturnValue;                                       // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29B7[0x2];                                     // 0x000A(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MetasoundParameterPack_SetTrigger) == 0x000004, "Wrong alignment on MetasoundParameterPack_SetTrigger");
static_assert(sizeof(MetasoundParameterPack_SetTrigger) == 0x00000C, "Wrong size on MetasoundParameterPack_SetTrigger");
static_assert(offsetof(MetasoundParameterPack_SetTrigger, ParameterName) == 0x000000, "Member 'MetasoundParameterPack_SetTrigger::ParameterName' has a wrong offset!");
static_assert(offsetof(MetasoundParameterPack_SetTrigger, OnlyIfExists) == 0x000008, "Member 'MetasoundParameterPack_SetTrigger::OnlyIfExists' has a wrong offset!");
static_assert(offsetof(MetasoundParameterPack_SetTrigger, ReturnValue) == 0x000009, "Member 'MetasoundParameterPack_SetTrigger::ReturnValue' has a wrong offset!");

// Function MetasoundFrontend.MetasoundParameterPack.GetBool
// 0x000C (0x000C - 0x0000)
struct MetasoundParameterPack_GetBool final
{
public:
	class FName                                   ParameterName;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESetParamResult                               Result;                                            // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29B8[0x2];                                     // 0x000A(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MetasoundParameterPack_GetBool) == 0x000004, "Wrong alignment on MetasoundParameterPack_GetBool");
static_assert(sizeof(MetasoundParameterPack_GetBool) == 0x00000C, "Wrong size on MetasoundParameterPack_GetBool");
static_assert(offsetof(MetasoundParameterPack_GetBool, ParameterName) == 0x000000, "Member 'MetasoundParameterPack_GetBool::ParameterName' has a wrong offset!");
static_assert(offsetof(MetasoundParameterPack_GetBool, Result) == 0x000008, "Member 'MetasoundParameterPack_GetBool::Result' has a wrong offset!");
static_assert(offsetof(MetasoundParameterPack_GetBool, ReturnValue) == 0x000009, "Member 'MetasoundParameterPack_GetBool::ReturnValue' has a wrong offset!");

// Function MetasoundFrontend.MetasoundParameterPack.GetFloat
// 0x0010 (0x0010 - 0x0000)
struct MetasoundParameterPack_GetFloat final
{
public:
	class FName                                   ParameterName;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESetParamResult                               Result;                                            // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29B9[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ReturnValue;                                       // 0x000C(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MetasoundParameterPack_GetFloat) == 0x000004, "Wrong alignment on MetasoundParameterPack_GetFloat");
static_assert(sizeof(MetasoundParameterPack_GetFloat) == 0x000010, "Wrong size on MetasoundParameterPack_GetFloat");
static_assert(offsetof(MetasoundParameterPack_GetFloat, ParameterName) == 0x000000, "Member 'MetasoundParameterPack_GetFloat::ParameterName' has a wrong offset!");
static_assert(offsetof(MetasoundParameterPack_GetFloat, Result) == 0x000008, "Member 'MetasoundParameterPack_GetFloat::Result' has a wrong offset!");
static_assert(offsetof(MetasoundParameterPack_GetFloat, ReturnValue) == 0x00000C, "Member 'MetasoundParameterPack_GetFloat::ReturnValue' has a wrong offset!");

// Function MetasoundFrontend.MetasoundParameterPack.GetInt
// 0x0010 (0x0010 - 0x0000)
struct MetasoundParameterPack_GetInt final
{
public:
	class FName                                   ParameterName;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESetParamResult                               Result;                                            // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29BA[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ReturnValue;                                       // 0x000C(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MetasoundParameterPack_GetInt) == 0x000004, "Wrong alignment on MetasoundParameterPack_GetInt");
static_assert(sizeof(MetasoundParameterPack_GetInt) == 0x000010, "Wrong size on MetasoundParameterPack_GetInt");
static_assert(offsetof(MetasoundParameterPack_GetInt, ParameterName) == 0x000000, "Member 'MetasoundParameterPack_GetInt::ParameterName' has a wrong offset!");
static_assert(offsetof(MetasoundParameterPack_GetInt, Result) == 0x000008, "Member 'MetasoundParameterPack_GetInt::Result' has a wrong offset!");
static_assert(offsetof(MetasoundParameterPack_GetInt, ReturnValue) == 0x00000C, "Member 'MetasoundParameterPack_GetInt::ReturnValue' has a wrong offset!");

// Function MetasoundFrontend.MetasoundParameterPack.GetString
// 0x0020 (0x0020 - 0x0000)
struct MetasoundParameterPack_GetString final
{
public:
	class FName                                   ParameterName;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESetParamResult                               Result;                                            // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29BB[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MetasoundParameterPack_GetString) == 0x000008, "Wrong alignment on MetasoundParameterPack_GetString");
static_assert(sizeof(MetasoundParameterPack_GetString) == 0x000020, "Wrong size on MetasoundParameterPack_GetString");
static_assert(offsetof(MetasoundParameterPack_GetString, ParameterName) == 0x000000, "Member 'MetasoundParameterPack_GetString::ParameterName' has a wrong offset!");
static_assert(offsetof(MetasoundParameterPack_GetString, Result) == 0x000008, "Member 'MetasoundParameterPack_GetString::Result' has a wrong offset!");
static_assert(offsetof(MetasoundParameterPack_GetString, ReturnValue) == 0x000010, "Member 'MetasoundParameterPack_GetString::ReturnValue' has a wrong offset!");

// Function MetasoundFrontend.MetasoundParameterPack.GetTrigger
// 0x000C (0x000C - 0x0000)
struct MetasoundParameterPack_GetTrigger final
{
public:
	class FName                                   ParameterName;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESetParamResult                               Result;                                            // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29BC[0x2];                                     // 0x000A(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MetasoundParameterPack_GetTrigger) == 0x000004, "Wrong alignment on MetasoundParameterPack_GetTrigger");
static_assert(sizeof(MetasoundParameterPack_GetTrigger) == 0x00000C, "Wrong size on MetasoundParameterPack_GetTrigger");
static_assert(offsetof(MetasoundParameterPack_GetTrigger, ParameterName) == 0x000000, "Member 'MetasoundParameterPack_GetTrigger::ParameterName' has a wrong offset!");
static_assert(offsetof(MetasoundParameterPack_GetTrigger, Result) == 0x000008, "Member 'MetasoundParameterPack_GetTrigger::Result' has a wrong offset!");
static_assert(offsetof(MetasoundParameterPack_GetTrigger, ReturnValue) == 0x000009, "Member 'MetasoundParameterPack_GetTrigger::ReturnValue' has a wrong offset!");

// Function MetasoundFrontend.MetasoundParameterPack.HasBool
// 0x000C (0x000C - 0x0000)
struct MetasoundParameterPack_HasBool final
{
public:
	class FName                                   ParameterName;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29BD[0x3];                                     // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MetasoundParameterPack_HasBool) == 0x000004, "Wrong alignment on MetasoundParameterPack_HasBool");
static_assert(sizeof(MetasoundParameterPack_HasBool) == 0x00000C, "Wrong size on MetasoundParameterPack_HasBool");
static_assert(offsetof(MetasoundParameterPack_HasBool, ParameterName) == 0x000000, "Member 'MetasoundParameterPack_HasBool::ParameterName' has a wrong offset!");
static_assert(offsetof(MetasoundParameterPack_HasBool, ReturnValue) == 0x000008, "Member 'MetasoundParameterPack_HasBool::ReturnValue' has a wrong offset!");

// Function MetasoundFrontend.MetasoundParameterPack.HasFloat
// 0x000C (0x000C - 0x0000)
struct MetasoundParameterPack_HasFloat final
{
public:
	class FName                                   ParameterName;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29BE[0x3];                                     // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MetasoundParameterPack_HasFloat) == 0x000004, "Wrong alignment on MetasoundParameterPack_HasFloat");
static_assert(sizeof(MetasoundParameterPack_HasFloat) == 0x00000C, "Wrong size on MetasoundParameterPack_HasFloat");
static_assert(offsetof(MetasoundParameterPack_HasFloat, ParameterName) == 0x000000, "Member 'MetasoundParameterPack_HasFloat::ParameterName' has a wrong offset!");
static_assert(offsetof(MetasoundParameterPack_HasFloat, ReturnValue) == 0x000008, "Member 'MetasoundParameterPack_HasFloat::ReturnValue' has a wrong offset!");

// Function MetasoundFrontend.MetasoundParameterPack.HasInt
// 0x000C (0x000C - 0x0000)
struct MetasoundParameterPack_HasInt final
{
public:
	class FName                                   ParameterName;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29BF[0x3];                                     // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MetasoundParameterPack_HasInt) == 0x000004, "Wrong alignment on MetasoundParameterPack_HasInt");
static_assert(sizeof(MetasoundParameterPack_HasInt) == 0x00000C, "Wrong size on MetasoundParameterPack_HasInt");
static_assert(offsetof(MetasoundParameterPack_HasInt, ParameterName) == 0x000000, "Member 'MetasoundParameterPack_HasInt::ParameterName' has a wrong offset!");
static_assert(offsetof(MetasoundParameterPack_HasInt, ReturnValue) == 0x000008, "Member 'MetasoundParameterPack_HasInt::ReturnValue' has a wrong offset!");

// Function MetasoundFrontend.MetasoundParameterPack.HasString
// 0x000C (0x000C - 0x0000)
struct MetasoundParameterPack_HasString final
{
public:
	class FName                                   ParameterName;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29C0[0x3];                                     // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MetasoundParameterPack_HasString) == 0x000004, "Wrong alignment on MetasoundParameterPack_HasString");
static_assert(sizeof(MetasoundParameterPack_HasString) == 0x00000C, "Wrong size on MetasoundParameterPack_HasString");
static_assert(offsetof(MetasoundParameterPack_HasString, ParameterName) == 0x000000, "Member 'MetasoundParameterPack_HasString::ParameterName' has a wrong offset!");
static_assert(offsetof(MetasoundParameterPack_HasString, ReturnValue) == 0x000008, "Member 'MetasoundParameterPack_HasString::ReturnValue' has a wrong offset!");

// Function MetasoundFrontend.MetasoundParameterPack.HasTrigger
// 0x000C (0x000C - 0x0000)
struct MetasoundParameterPack_HasTrigger final
{
public:
	class FName                                   ParameterName;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29C1[0x3];                                     // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MetasoundParameterPack_HasTrigger) == 0x000004, "Wrong alignment on MetasoundParameterPack_HasTrigger");
static_assert(sizeof(MetasoundParameterPack_HasTrigger) == 0x00000C, "Wrong size on MetasoundParameterPack_HasTrigger");
static_assert(offsetof(MetasoundParameterPack_HasTrigger, ParameterName) == 0x000000, "Member 'MetasoundParameterPack_HasTrigger::ParameterName' has a wrong offset!");
static_assert(offsetof(MetasoundParameterPack_HasTrigger, ReturnValue) == 0x000008, "Member 'MetasoundParameterPack_HasTrigger::ReturnValue' has a wrong offset!");

}

