#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VaRest

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "VaRest_structs.hpp"


namespace SDK
{

// Class VaRest.VaRestJsonObject
// 0x0010 (0x0038 - 0x0028)
class UVaRestJsonObject final : public UObject
{
public:
	uint8                                         Pad_1DA6[0x10];                                    // 0x0028(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool DecodeJson(const class FString& JsonString, bool bUseIncrementalParser);
	void MergeJsonObject(class UVaRestJsonObject* InJsonObject, bool Overwrite);
	void RemoveField(const class FString& FieldName);
	void Reset();
	void SetArrayField(const class FString& FieldName, const TArray<class UVaRestJsonValue*>& InArray);
	void SetBoolArrayField(const class FString& FieldName, const TArray<bool>& BoolArray);
	void SetBoolField(const class FString& FieldName, bool InValue);
	void SetField(const class FString& FieldName, class UVaRestJsonValue* JsonValue);
	void SetInt64Field(const class FString& FieldName, int64 Number);
	void SetIntegerField(const class FString& FieldName, int32 Number);
	void SetMapFields_bool(const TMap<class FString, bool>& Fields);
	void SetMapFields_int32(const TMap<class FString, int32>& Fields);
	void SetMapFields_int64(const TMap<class FString, int64>& Fields);
	void SetMapFields_string(const TMap<class FString, class FString>& Fields);
	void SetMapFields_uint8(const TMap<class FString, uint8>& Fields);
	void SetNumberArrayField(const class FString& FieldName, const TArray<float>& NumberArray);
	void SetNumberArrayFieldDouble(const class FString& FieldName, const TArray<double>& NumberArray);
	void SetNumberField(const class FString& FieldName, float Number);
	void SetNumberFieldDouble(const class FString& FieldName, double Number);
	void SetObjectArrayField(const class FString& FieldName, const TArray<class UVaRestJsonObject*>& ObjectArray);
	void SetObjectField(const class FString& FieldName, class UVaRestJsonObject* JsonObject);
	void SetStringArrayField(const class FString& FieldName, const TArray<class FString>& StringArray);
	void SetStringField(const class FString& FieldName, const class FString& StringValue);
	bool WriteToFilePath(const class FString& Path, const bool bIsRelativeToProjectDir);

	class FString EncodeJson() const;
	class FString EncodeJsonToSingleString() const;
	TArray<class UVaRestJsonValue*> GetArrayField(const class FString& FieldName) const;
	TArray<bool> GetBoolArrayField(const class FString& FieldName) const;
	bool GetBoolField(const class FString& FieldName) const;
	class UVaRestJsonValue* GetField(const class FString& FieldName) const;
	TArray<class FString> GetFieldNames() const;
	class FString GetFieldTypeString(const class FString& FieldName) const;
	int64 GetInt64Field(const class FString& FieldName) const;
	TArray<int32> GetIntegerArrayField(const class FString& FieldName) const;
	int32 GetIntegerField(const class FString& FieldName) const;
	TArray<float> GetNumberArrayField(const class FString& FieldName) const;
	float GetNumberField(const class FString& FieldName) const;
	TArray<class UVaRestJsonObject*> GetObjectArrayField(const class FString& FieldName) const;
	class UVaRestJsonObject* GetObjectField(const class FString& FieldName) const;
	TArray<class FString> GetStringArrayField(const class FString& FieldName) const;
	class FString GetStringField(const class FString& FieldName) const;
	bool HasField(const class FString& FieldName) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VaRestJsonObject">();
	}
	static class UVaRestJsonObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVaRestJsonObject>();
	}
};
static_assert(alignof(UVaRestJsonObject) == 0x000008, "Wrong alignment on UVaRestJsonObject");
static_assert(sizeof(UVaRestJsonObject) == 0x000038, "Wrong size on UVaRestJsonObject");

// Class VaRest.VaRestJsonValue
// 0x0010 (0x0038 - 0x0028)
class UVaRestJsonValue final : public UObject
{
public:
	uint8                                         Pad_1DB1[0x10];                                    // 0x0028(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class UVaRestJsonObject* AsObject();
	void Reset();

	TArray<class UVaRestJsonValue*> AsArray() const;
	bool AsBool() const;
	int32 AsInt32() const;
	int64 AsInt64() const;
	float AsNumber() const;
	class FString AsString() const;
	EVaJson GetType() const;
	class FString GetTypeString() const;
	bool IsNull() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VaRestJsonValue">();
	}
	static class UVaRestJsonValue* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVaRestJsonValue>();
	}
};
static_assert(alignof(UVaRestJsonValue) == 0x000008, "Wrong alignment on UVaRestJsonValue");
static_assert(sizeof(UVaRestJsonValue) == 0x000038, "Wrong size on UVaRestJsonValue");

// Class VaRest.VaRestLibrary
// 0x0000 (0x0028 - 0x0028)
class UVaRestLibrary final : public UBlueprintFunctionLibrary
{
public:
	static bool Base64Decode(const class FString& Source, class FString* Dest);
	static bool Base64DecodeData(const class FString& Source, TArray<uint8>* Dest);
	static class FString Base64Encode(const class FString& Source);
	static bool Base64EncodeData(const TArray<uint8>& Data, class FString* Dest);
	static class UVaRestSettings* GetVaRestSettings();
	static class FString GetVaRestVersion();
	static struct FVaRestURL GetWorldURL(class UObject* WorldContextObject);
	static EVaRestHttpStatusCode HTTPStatusIntToEnum(int32 StatusCode);
	static class FString PercentEncode(const class FString& Source);
	static class FString StringToMd5(const class FString& StringToHash);
	static class FString StringToSha1(const class FString& StringToHash);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VaRestLibrary">();
	}
	static class UVaRestLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVaRestLibrary>();
	}
};
static_assert(alignof(UVaRestLibrary) == 0x000008, "Wrong alignment on UVaRestLibrary");
static_assert(sizeof(UVaRestLibrary) == 0x000028, "Wrong size on UVaRestLibrary");

// Class VaRest.VaRestRequestJSON
// 0x01B8 (0x01E0 - 0x0028)
class UVaRestRequestJSON final : public UObject
{
public:
	FMulticastInlineDelegateProperty_             OnRequestComplete;                                 // 0x0028(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnRequestFail;                                     // 0x0038(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_1DB6[0x40];                                    // 0x0048(0x0040)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ResponseSize;                                      // 0x0088(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1DB7[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ResponseContent;                                   // 0x0090(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsValidJsonResponse;                              // 0x00A0(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1DB8[0xF];                                     // 0x00A1(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	class UVaRestJsonObject*                      RequestJsonObj;                                    // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1DB9[0x48];                                    // 0x00B8(0x0048)(Fixing Size After Last Property [ Dumper-7 ])
	class UVaRestJsonObject*                      ResponseJsonObj;                                   // 0x0100(0x0008)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVaRestJsonValue*                       ResponseJsonValue;                                 // 0x0108(0x0008)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1DBA[0xD0];                                    // 0x0110(0x00D0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AddTag(class FName Tag);
	void ApplyURL(const class FString& URL, class UVaRestJsonObject** Result, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	void Cancel();
	void ExecuteProcessRequest();
	class FString GetResponseContentAsString(bool bCacheResponseContent);
	class FString GetResponseHeader(const class FString& HeaderName);
	void ProcessURL(const class FString& URL);
	int32 RemoveTag(class FName Tag);
	void ResetData();
	void ResetRequestData();
	void ResetResponseData();
	void SetBinaryContentType(const class FString& ContentType);
	void SetBinaryRequestContent(const TArray<uint8>& Content);
	void SetContentType(EVaRestRequestContentType ContentType);
	void SetCustomVerb(const class FString& Verb);
	void SetHeader(const class FString& HeaderName, const class FString& HeaderValue);
	void SetRequestObject(class UVaRestJsonObject* JsonObject);
	void SetResponseObject(class UVaRestJsonObject* JsonObject);
	void SetStringRequestContent(const class FString& Content);
	void SetURL(const class FString& URL);
	void SetVerb(EVaRestRequestVerb Verb);

	TArray<class FString> GetAllResponseHeaders() const;
	class UVaRestJsonObject* GetRequestObject() const;
	int32 GetResponseCode() const;
	const TArray<uint8> GetResponseContent() const;
	int32 GetResponseContentLength() const;
	class UVaRestJsonObject* GetResponseObject() const;
	class UVaRestJsonValue* GetResponseValue() const;
	EVaRestRequestStatus GetStatus() const;
	class FString GetUrl() const;
	EVaRestRequestVerb GetVerb() const;
	bool HasTag(class FName Tag) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VaRestRequestJSON">();
	}
	static class UVaRestRequestJSON* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVaRestRequestJSON>();
	}
};
static_assert(alignof(UVaRestRequestJSON) == 0x000008, "Wrong alignment on UVaRestRequestJSON");
static_assert(sizeof(UVaRestRequestJSON) == 0x0001E0, "Wrong size on UVaRestRequestJSON");
static_assert(offsetof(UVaRestRequestJSON, OnRequestComplete) == 0x000028, "Member 'UVaRestRequestJSON::OnRequestComplete' has a wrong offset!");
static_assert(offsetof(UVaRestRequestJSON, OnRequestFail) == 0x000038, "Member 'UVaRestRequestJSON::OnRequestFail' has a wrong offset!");
static_assert(offsetof(UVaRestRequestJSON, ResponseSize) == 0x000088, "Member 'UVaRestRequestJSON::ResponseSize' has a wrong offset!");
static_assert(offsetof(UVaRestRequestJSON, ResponseContent) == 0x000090, "Member 'UVaRestRequestJSON::ResponseContent' has a wrong offset!");
static_assert(offsetof(UVaRestRequestJSON, bIsValidJsonResponse) == 0x0000A0, "Member 'UVaRestRequestJSON::bIsValidJsonResponse' has a wrong offset!");
static_assert(offsetof(UVaRestRequestJSON, RequestJsonObj) == 0x0000B0, "Member 'UVaRestRequestJSON::RequestJsonObj' has a wrong offset!");
static_assert(offsetof(UVaRestRequestJSON, ResponseJsonObj) == 0x000100, "Member 'UVaRestRequestJSON::ResponseJsonObj' has a wrong offset!");
static_assert(offsetof(UVaRestRequestJSON, ResponseJsonValue) == 0x000108, "Member 'UVaRestRequestJSON::ResponseJsonValue' has a wrong offset!");

// Class VaRest.VaRestSettings
// 0x0008 (0x0030 - 0x0028)
class UVaRestSettings final : public UObject
{
public:
	bool                                          bExtendedLog;                                      // 0x0028(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseChunkedParser;                                 // 0x0029(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1DBD[0x6];                                     // 0x002A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VaRestSettings">();
	}
	static class UVaRestSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVaRestSettings>();
	}
};
static_assert(alignof(UVaRestSettings) == 0x000008, "Wrong alignment on UVaRestSettings");
static_assert(sizeof(UVaRestSettings) == 0x000030, "Wrong size on UVaRestSettings");
static_assert(offsetof(UVaRestSettings, bExtendedLog) == 0x000028, "Member 'UVaRestSettings::bExtendedLog' has a wrong offset!");
static_assert(offsetof(UVaRestSettings, bUseChunkedParser) == 0x000029, "Member 'UVaRestSettings::bUseChunkedParser' has a wrong offset!");

// Class VaRest.VaRestSubsystem
// 0x0050 (0x0080 - 0x0030)
class UVaRestSubsystem final : public UEngineSubsystem
{
public:
	TMap<class UVaRestRequestJSON*, struct FVaRestCallResponse> RequestMap;                                        // 0x0030(0x0050)(ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

public:
	static class UVaRestJsonObject* StaticConstructVaRestJsonObject();

	void CallURL(const class FString& URL, EVaRestRequestVerb Verb, EVaRestRequestContentType ContentType, class UVaRestJsonObject* VaRestJson, const TDelegate<void(class UVaRestRequestJSON* Request)>& Callback);
	class UVaRestJsonValue* ConstructJsonValueArray(const TArray<class UVaRestJsonValue*>& InArray);
	class UVaRestJsonValue* ConstructJsonValueBool(bool InValue);
	class UVaRestJsonValue* ConstructJsonValueNumber(float Number);
	class UVaRestJsonValue* ConstructJsonValueObject(class UVaRestJsonObject* JsonObject);
	class UVaRestJsonValue* ConstructJsonValueString(const class FString& StringValue);
	class UVaRestJsonObject* ConstructVaRestJsonObject();
	class UVaRestRequestJSON* ConstructVaRestRequest();
	class UVaRestRequestJSON* ConstructVaRestRequestExt(EVaRestRequestVerb Verb, EVaRestRequestContentType ContentType);
	class UVaRestJsonObject* DecodeJsonObject(const class FString& JsonString);
	class UVaRestJsonValue* DecodeJsonValue(const class FString& JsonString);
	class UVaRestJsonObject* LoadJsonFromFile(const class FString& Path, const bool bIsRelativeToContentDir);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VaRestSubsystem">();
	}
	static class UVaRestSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVaRestSubsystem>();
	}
};
static_assert(alignof(UVaRestSubsystem) == 0x000008, "Wrong alignment on UVaRestSubsystem");
static_assert(sizeof(UVaRestSubsystem) == 0x000080, "Wrong size on UVaRestSubsystem");
static_assert(offsetof(UVaRestSubsystem, RequestMap) == 0x000030, "Member 'UVaRestSubsystem::RequestMap' has a wrong offset!");

}

