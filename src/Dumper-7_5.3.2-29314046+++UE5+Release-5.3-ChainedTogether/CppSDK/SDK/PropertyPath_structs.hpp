#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PropertyPath

#include "Basic.hpp"


namespace SDK
{

// Enum PropertyPath.EPropertyPathTestEnum
// NumValues: 0x0005
enum class EPropertyPathTestEnum : uint8
{
	One                                      = 0,
	Two                                      = 1,
	Three                                    = 2,
	Four                                     = 3,
	EPropertyPathTestEnum_MAX                = 4,
};

// ScriptStruct PropertyPath.PropertyPathSegment
// 0x0020 (0x0020 - 0x0000)
struct FPropertyPathSegment final
{
public:
	class FName                                   Name;                                              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ArrayIndex;                                        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStruct*                                Struct;                                            // 0x0010(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_18[0x8];                                       // 0x0018(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPropertyPathSegment) == 0x000008, "Wrong alignment on FPropertyPathSegment");
static_assert(sizeof(FPropertyPathSegment) == 0x000020, "Wrong size on FPropertyPathSegment");
static_assert(offsetof(FPropertyPathSegment, Name) == 0x000000, "Member 'FPropertyPathSegment::Name' has a wrong offset!");
static_assert(offsetof(FPropertyPathSegment, ArrayIndex) == 0x000008, "Member 'FPropertyPathSegment::ArrayIndex' has a wrong offset!");
static_assert(offsetof(FPropertyPathSegment, Struct) == 0x000010, "Member 'FPropertyPathSegment::Struct' has a wrong offset!");

// ScriptStruct PropertyPath.CachedPropertyPath
// 0x0038 (0x0038 - 0x0000)
struct FCachedPropertyPath
{
public:
	TArray<struct FPropertyPathSegment>           Segments;                                          // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_10[0x8];                                       // 0x0010(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UFunction*                              CachedFunction;                                    // 0x0018(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_20[0x18];                                      // 0x0020(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCachedPropertyPath) == 0x000008, "Wrong alignment on FCachedPropertyPath");
static_assert(sizeof(FCachedPropertyPath) == 0x000038, "Wrong size on FCachedPropertyPath");
static_assert(offsetof(FCachedPropertyPath, Segments) == 0x000000, "Member 'FCachedPropertyPath::Segments' has a wrong offset!");
static_assert(offsetof(FCachedPropertyPath, CachedFunction) == 0x000018, "Member 'FCachedPropertyPath::CachedFunction' has a wrong offset!");

// ScriptStruct PropertyPath.PropertyPathTestInnerStruct
// 0x0020 (0x0020 - 0x0000)
struct FPropertyPathTestInnerStruct final
{
public:
	float                                         Float;                                             // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Bool;                                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPropertyPathTestEnum                         EnumOne;                                           // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPropertyPathTestEnum                         EnumTwo;                                           // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPropertyPathTestEnum                         EnumThree;                                         // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPropertyPathTestEnum                         EnumFour;                                          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Integer;                                           // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 String;                                            // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPropertyPathTestInnerStruct) == 0x000008, "Wrong alignment on FPropertyPathTestInnerStruct");
static_assert(sizeof(FPropertyPathTestInnerStruct) == 0x000020, "Wrong size on FPropertyPathTestInnerStruct");
static_assert(offsetof(FPropertyPathTestInnerStruct, Float) == 0x000000, "Member 'FPropertyPathTestInnerStruct::Float' has a wrong offset!");
static_assert(offsetof(FPropertyPathTestInnerStruct, Bool) == 0x000004, "Member 'FPropertyPathTestInnerStruct::Bool' has a wrong offset!");
static_assert(offsetof(FPropertyPathTestInnerStruct, EnumOne) == 0x000005, "Member 'FPropertyPathTestInnerStruct::EnumOne' has a wrong offset!");
static_assert(offsetof(FPropertyPathTestInnerStruct, EnumTwo) == 0x000006, "Member 'FPropertyPathTestInnerStruct::EnumTwo' has a wrong offset!");
static_assert(offsetof(FPropertyPathTestInnerStruct, EnumThree) == 0x000007, "Member 'FPropertyPathTestInnerStruct::EnumThree' has a wrong offset!");
static_assert(offsetof(FPropertyPathTestInnerStruct, EnumFour) == 0x000008, "Member 'FPropertyPathTestInnerStruct::EnumFour' has a wrong offset!");
static_assert(offsetof(FPropertyPathTestInnerStruct, Integer) == 0x00000C, "Member 'FPropertyPathTestInnerStruct::Integer' has a wrong offset!");
static_assert(offsetof(FPropertyPathTestInnerStruct, String) == 0x000010, "Member 'FPropertyPathTestInnerStruct::String' has a wrong offset!");

// ScriptStruct PropertyPath.PropertyPathTestStruct
// 0x0050 (0x0050 - 0x0000)
struct FPropertyPathTestStruct final
{
public:
	bool                                          Bool;                                              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Integer;                                           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPropertyPathTestEnum                         EnumOne;                                           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPropertyPathTestEnum                         EnumTwo;                                           // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPropertyPathTestEnum                         EnumThree;                                         // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPropertyPathTestEnum                         EnumFour;                                          // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 String;                                            // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Float;                                             // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPropertyPathTestInnerStruct           InnerStruct;                                       // 0x0028(0x0020)(NativeAccessSpecifierPublic)
	class UPropertyPathTestObject*                InnerObject;                                       // 0x0048(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPropertyPathTestStruct) == 0x000008, "Wrong alignment on FPropertyPathTestStruct");
static_assert(sizeof(FPropertyPathTestStruct) == 0x000050, "Wrong size on FPropertyPathTestStruct");
static_assert(offsetof(FPropertyPathTestStruct, Bool) == 0x000000, "Member 'FPropertyPathTestStruct::Bool' has a wrong offset!");
static_assert(offsetof(FPropertyPathTestStruct, Integer) == 0x000004, "Member 'FPropertyPathTestStruct::Integer' has a wrong offset!");
static_assert(offsetof(FPropertyPathTestStruct, EnumOne) == 0x000008, "Member 'FPropertyPathTestStruct::EnumOne' has a wrong offset!");
static_assert(offsetof(FPropertyPathTestStruct, EnumTwo) == 0x000009, "Member 'FPropertyPathTestStruct::EnumTwo' has a wrong offset!");
static_assert(offsetof(FPropertyPathTestStruct, EnumThree) == 0x00000A, "Member 'FPropertyPathTestStruct::EnumThree' has a wrong offset!");
static_assert(offsetof(FPropertyPathTestStruct, EnumFour) == 0x00000B, "Member 'FPropertyPathTestStruct::EnumFour' has a wrong offset!");
static_assert(offsetof(FPropertyPathTestStruct, String) == 0x000010, "Member 'FPropertyPathTestStruct::String' has a wrong offset!");
static_assert(offsetof(FPropertyPathTestStruct, Float) == 0x000020, "Member 'FPropertyPathTestStruct::Float' has a wrong offset!");
static_assert(offsetof(FPropertyPathTestStruct, InnerStruct) == 0x000028, "Member 'FPropertyPathTestStruct::InnerStruct' has a wrong offset!");
static_assert(offsetof(FPropertyPathTestStruct, InnerObject) == 0x000048, "Member 'FPropertyPathTestStruct::InnerObject' has a wrong offset!");

// ScriptStruct PropertyPath.PropertyPathTestBed
// 0x00B0 (0x00B0 - 0x0000)
struct FPropertyPathTestBed final
{
public:
	class UPropertyPathTestObject*                Object;                                            // 0x0000(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPropertyPathTestObject*                ModifiedObject;                                    // 0x0008(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPropertyPathTestStruct                ModifiedStruct;                                    // 0x0010(0x0050)(NativeAccessSpecifierPublic)
	struct FPropertyPathTestStruct                DefaultStruct;                                     // 0x0060(0x0050)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FPropertyPathTestBed) == 0x000008, "Wrong alignment on FPropertyPathTestBed");
static_assert(sizeof(FPropertyPathTestBed) == 0x0000B0, "Wrong size on FPropertyPathTestBed");
static_assert(offsetof(FPropertyPathTestBed, Object) == 0x000000, "Member 'FPropertyPathTestBed::Object' has a wrong offset!");
static_assert(offsetof(FPropertyPathTestBed, ModifiedObject) == 0x000008, "Member 'FPropertyPathTestBed::ModifiedObject' has a wrong offset!");
static_assert(offsetof(FPropertyPathTestBed, ModifiedStruct) == 0x000010, "Member 'FPropertyPathTestBed::ModifiedStruct' has a wrong offset!");
static_assert(offsetof(FPropertyPathTestBed, DefaultStruct) == 0x000060, "Member 'FPropertyPathTestBed::DefaultStruct' has a wrong offset!");

}

