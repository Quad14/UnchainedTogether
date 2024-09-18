#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AdvancedSteamSessions

#include "Basic.hpp"

#include "AdvancedSteamSessions_classes.hpp"
#include "AdvancedSteamSessions_parameters.hpp"


namespace SDK
{

// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.CreateSteamIDFromString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                           SteamID64                                              (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId                   ReturnValue                                            (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FBPUniqueNetId UAdvancedSteamFriendsLibrary::CreateSteamIDFromString(const class FString& SteamID64)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AdvancedSteamFriendsLibrary", "CreateSteamIDFromString");

	Params::AdvancedSteamFriendsLibrary_CreateSteamIDFromString Parms{};

	Parms.SteamID64 = std::move(SteamID64);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.FilterText
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                           TextToFilter                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EBPTextFilteringContext                 Context                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId                   TextSourceID                                           (ConstParm, Parm, NativeAccessSpecifierPublic)
// class FString                           FilteredText                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAdvancedSteamFriendsLibrary::FilterText(const class FString& TextToFilter, EBPTextFilteringContext Context, const struct FBPUniqueNetId& TextSourceID, class FString* FilteredText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AdvancedSteamFriendsLibrary", "FilterText");

	Params::AdvancedSteamFriendsLibrary_FilterText Parms{};

	Parms.TextToFilter = std::move(TextToFilter);
	Parms.Context = Context;
	Parms.TextSourceID = std::move(TextSourceID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (FilteredText != nullptr)
		*FilteredText = std::move(Parms.FilteredText);

	return Parms.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetFriendSteamLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId                   UniqueNetId                                            (ConstParm, Parm, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAdvancedSteamFriendsLibrary::GetFriendSteamLevel(const struct FBPUniqueNetId& UniqueNetId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AdvancedSteamFriendsLibrary", "GetFriendSteamLevel");

	Params::AdvancedSteamFriendsLibrary_GetFriendSteamLevel Parms{};

	Parms.UniqueNetId = std::move(UniqueNetId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetLocalSteamIDFromSteam
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPUniqueNetId                   ReturnValue                                            (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FBPUniqueNetId UAdvancedSteamFriendsLibrary::GetLocalSteamIDFromSteam()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AdvancedSteamFriendsLibrary", "GetLocalSteamIDFromSteam");

	Params::AdvancedSteamFriendsLibrary_GetLocalSteamIDFromSteam Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamFriendAvatar
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId                   UniqueNetId                                            (ConstParm, Parm, NativeAccessSpecifierPublic)
// EBlueprintAsyncResultSwitch             Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ESteamAvatarSize                        AvatarSize                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* UAdvancedSteamFriendsLibrary::GetSteamFriendAvatar(const struct FBPUniqueNetId& UniqueNetId, EBlueprintAsyncResultSwitch* Result, ESteamAvatarSize AvatarSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AdvancedSteamFriendsLibrary", "GetSteamFriendAvatar");

	Params::AdvancedSteamFriendsLibrary_GetSteamFriendAvatar Parms{};

	Parms.UniqueNetId = std::move(UniqueNetId);
	Parms.AvatarSize = AvatarSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamFriendGamePlayed
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId                   UniqueNetId                                            (ConstParm, Parm, NativeAccessSpecifierPublic)
// EBlueprintResultSwitch                  Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   AppID                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedSteamFriendsLibrary::GetSteamFriendGamePlayed(const struct FBPUniqueNetId& UniqueNetId, EBlueprintResultSwitch* Result, int32* AppID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AdvancedSteamFriendsLibrary", "GetSteamFriendGamePlayed");

	Params::AdvancedSteamFriendsLibrary_GetSteamFriendGamePlayed Parms{};

	Parms.UniqueNetId = std::move(UniqueNetId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	if (AppID != nullptr)
		*AppID = Parms.AppID;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamGroups
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FBPSteamGroupInfo>        SteamGroups                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UAdvancedSteamFriendsLibrary::GetSteamGroups(TArray<struct FBPSteamGroupInfo>* SteamGroups)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AdvancedSteamFriendsLibrary", "GetSteamGroups");

	Params::AdvancedSteamFriendsLibrary_GetSteamGroups Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (SteamGroups != nullptr)
		*SteamGroups = std::move(Parms.SteamGroups);
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamPersonaName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId                   UniqueNetId                                            (ConstParm, Parm, NativeAccessSpecifierPublic)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAdvancedSteamFriendsLibrary::GetSteamPersonaName(const struct FBPUniqueNetId& UniqueNetId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AdvancedSteamFriendsLibrary", "GetSteamPersonaName");

	Params::AdvancedSteamFriendsLibrary_GetSteamPersonaName Parms{};

	Parms.UniqueNetId = std::move(UniqueNetId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.InitTextFiltering
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAdvancedSteamFriendsLibrary::InitTextFiltering()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AdvancedSteamFriendsLibrary", "InitTextFiltering");

	Params::AdvancedSteamFriendsLibrary_InitTextFiltering Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.IsOverlayEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAdvancedSteamFriendsLibrary::IsOverlayEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AdvancedSteamFriendsLibrary", "IsOverlayEnabled");

	Params::AdvancedSteamFriendsLibrary_IsOverlayEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.IsSteamInBigPictureMode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAdvancedSteamFriendsLibrary::IsSteamInBigPictureMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AdvancedSteamFriendsLibrary", "IsSteamInBigPictureMode");

	Params::AdvancedSteamFriendsLibrary_IsSteamInBigPictureMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.OpenSteamUserOverlay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId                   UniqueNetId                                            (ConstParm, Parm, NativeAccessSpecifierPublic)
// ESteamUserOverlayType                   DialogType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAdvancedSteamFriendsLibrary::OpenSteamUserOverlay(const struct FBPUniqueNetId& UniqueNetId, ESteamUserOverlayType DialogType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AdvancedSteamFriendsLibrary", "OpenSteamUserOverlay");

	Params::AdvancedSteamFriendsLibrary_OpenSteamUserOverlay Parms{};

	Parms.UniqueNetId = std::move(UniqueNetId);
	Parms.DialogType = DialogType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.RequestSteamFriendInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId                   UniqueNetId                                            (ConstParm, Parm, NativeAccessSpecifierPublic)
// bool                                    bRequireNameOnly                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAdvancedSteamFriendsLibrary::RequestSteamFriendInfo(const struct FBPUniqueNetId& UniqueNetId, bool bRequireNameOnly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AdvancedSteamFriendsLibrary", "RequestSteamFriendInfo");

	Params::AdvancedSteamFriendsLibrary_RequestSteamFriendInfo Parms{};

	Parms.UniqueNetId = std::move(UniqueNetId);
	Parms.bRequireNameOnly = bRequireNameOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamWorkshopLibrary.GetNumSubscribedWorkshopItems
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                                   NumberOfItems                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedSteamWorkshopLibrary::GetNumSubscribedWorkshopItems(int32* NumberOfItems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AdvancedSteamWorkshopLibrary", "GetNumSubscribedWorkshopItems");

	Params::AdvancedSteamWorkshopLibrary_GetNumSubscribedWorkshopItems Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (NumberOfItems != nullptr)
		*NumberOfItems = Parms.NumberOfItems;
}


// Function AdvancedSteamSessions.AdvancedSteamWorkshopLibrary.GetSubscribedWorkshopItems
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                                   NumberOfItems                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FBPSteamWorkshopID>       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FBPSteamWorkshopID> UAdvancedSteamWorkshopLibrary::GetSubscribedWorkshopItems(int32* NumberOfItems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AdvancedSteamWorkshopLibrary", "GetSubscribedWorkshopItems");

	Params::AdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (NumberOfItems != nullptr)
		*NumberOfItems = Parms.NumberOfItems;

	return Parms.ReturnValue;
}


// Function AdvancedSteamSessions.SteamRequestGroupOfficersCallbackProxy.GetSteamGroupOfficerList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId                   GroupUniqueNetID                                       (Parm, NativeAccessSpecifierPublic)
// class USteamRequestGroupOfficersCallbackProxy*ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamRequestGroupOfficersCallbackProxy* USteamRequestGroupOfficersCallbackProxy::GetSteamGroupOfficerList(class UObject* WorldContextObject, const struct FBPUniqueNetId& GroupUniqueNetID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SteamRequestGroupOfficersCallbackProxy", "GetSteamGroupOfficerList");

	Params::SteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.GroupUniqueNetID = std::move(GroupUniqueNetID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AdvancedSteamSessions.SteamWSRequestUGCDetailsCallbackProxy.GetWorkshopItemDetails
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPSteamWorkshopID               WorkShopID                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class USteamWSRequestUGCDetailsCallbackProxy*ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamWSRequestUGCDetailsCallbackProxy* USteamWSRequestUGCDetailsCallbackProxy::GetWorkshopItemDetails(class UObject* WorldContextObject, const struct FBPSteamWorkshopID& WorkShopID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SteamWSRequestUGCDetailsCallbackProxy", "GetWorkshopItemDetails");

	Params::SteamWSRequestUGCDetailsCallbackProxy_GetWorkshopItemDetails Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.WorkShopID = std::move(WorkShopID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

