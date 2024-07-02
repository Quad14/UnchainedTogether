#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MetasoundFrontend

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "MetasoundFrontend_structs.hpp"


namespace SDK
{

// Class MetasoundFrontend.MetaSoundDocumentInterface
// 0x0000 (0x0028 - 0x0028)
class IMetaSoundDocumentInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetaSoundDocumentInterface">();
	}
	static class IMetaSoundDocumentInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMetaSoundDocumentInterface>();
	}
};
static_assert(alignof(IMetaSoundDocumentInterface) == 0x000008, "Wrong alignment on IMetaSoundDocumentInterface");
static_assert(sizeof(IMetaSoundDocumentInterface) == 0x000028, "Wrong size on IMetaSoundDocumentInterface");

// Class MetasoundFrontend.MetasoundParameterPack
// 0x0018 (0x0040 - 0x0028)
class UMetasoundParameterPack final : public UObject
{
public:
	uint8                                         Pad_2B1F[0x18];                                    // 0x0028(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UMetasoundParameterPack* MakeMetasoundParameterPack();

	ESetParamResult SetBool(class FName ParameterName, bool InValue, bool OnlyIfExists);
	ESetParamResult SetFloat(class FName ParameterName, float InValue, bool OnlyIfExists);
	ESetParamResult SetInt(class FName ParameterName, int32 InValue, bool OnlyIfExists);
	ESetParamResult SetString(class FName ParameterName, const class FString& InValue, bool OnlyIfExists);
	ESetParamResult SetTrigger(class FName ParameterName, bool OnlyIfExists);

	bool GetBool(class FName ParameterName, ESetParamResult* Result) const;
	float GetFloat(class FName ParameterName, ESetParamResult* Result) const;
	int32 GetInt(class FName ParameterName, ESetParamResult* Result) const;
	class FString GetString(class FName ParameterName, ESetParamResult* Result) const;
	bool GetTrigger(class FName ParameterName, ESetParamResult* Result) const;
	bool HasBool(class FName ParameterName) const;
	bool HasFloat(class FName ParameterName) const;
	bool HasInt(class FName ParameterName) const;
	bool HasString(class FName ParameterName) const;
	bool HasTrigger(class FName ParameterName) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetasoundParameterPack">();
	}
	static class UMetasoundParameterPack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetasoundParameterPack>();
	}
};
static_assert(alignof(UMetasoundParameterPack) == 0x000008, "Wrong alignment on UMetasoundParameterPack");
static_assert(sizeof(UMetasoundParameterPack) == 0x000040, "Wrong size on UMetasoundParameterPack");

// Class MetasoundFrontend.MetaSoundBuilderDocument
// 0x01D8 (0x0200 - 0x0028)
class UMetaSoundBuilderDocument final : public UObject
{
public:
	uint8                                         Pad_2B2F[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMetasoundFrontendDocument             Document;                                          // 0x0030(0x01C8)(Transient, NativeAccessSpecifierPrivate)
	TSubclassOf<class UObject>                    MetaSoundUClass;                                   // 0x01F8(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetaSoundBuilderDocument">();
	}
	static class UMetaSoundBuilderDocument* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetaSoundBuilderDocument>();
	}
};
static_assert(alignof(UMetaSoundBuilderDocument) == 0x000008, "Wrong alignment on UMetaSoundBuilderDocument");
static_assert(sizeof(UMetaSoundBuilderDocument) == 0x000200, "Wrong size on UMetaSoundBuilderDocument");
static_assert(offsetof(UMetaSoundBuilderDocument, Document) == 0x000030, "Member 'UMetaSoundBuilderDocument::Document' has a wrong offset!");
static_assert(offsetof(UMetaSoundBuilderDocument, MetaSoundUClass) == 0x0001F8, "Member 'UMetaSoundBuilderDocument::MetaSoundUClass' has a wrong offset!");

}

