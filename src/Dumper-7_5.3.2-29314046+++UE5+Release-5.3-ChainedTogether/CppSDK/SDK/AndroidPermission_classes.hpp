#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AndroidPermission

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class AndroidPermission.AndroidPermissionCallbackProxy
// 0x0028 (0x0050 - 0x0028)
class UAndroidPermissionCallbackProxy final : public UObject
{
public:
	FMulticastInlineDelegateProperty_             OnPermissionsGrantedDynamicDelegate;               // 0x0028(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_2AEC[0x18];                                    // 0x0038(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AndroidPermissionCallbackProxy">();
	}
	static class UAndroidPermissionCallbackProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAndroidPermissionCallbackProxy>();
	}
};
static_assert(alignof(UAndroidPermissionCallbackProxy) == 0x000008, "Wrong alignment on UAndroidPermissionCallbackProxy");
static_assert(sizeof(UAndroidPermissionCallbackProxy) == 0x000050, "Wrong size on UAndroidPermissionCallbackProxy");
static_assert(offsetof(UAndroidPermissionCallbackProxy, OnPermissionsGrantedDynamicDelegate) == 0x000028, "Member 'UAndroidPermissionCallbackProxy::OnPermissionsGrantedDynamicDelegate' has a wrong offset!");

// Class AndroidPermission.AndroidPermissionFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAndroidPermissionFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class UAndroidPermissionCallbackProxy* AcquirePermissions(const TArray<class FString>& Permissions);
	static bool CheckPermission(const class FString& Permission);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AndroidPermissionFunctionLibrary">();
	}
	static class UAndroidPermissionFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAndroidPermissionFunctionLibrary>();
	}
};
static_assert(alignof(UAndroidPermissionFunctionLibrary) == 0x000008, "Wrong alignment on UAndroidPermissionFunctionLibrary");
static_assert(sizeof(UAndroidPermissionFunctionLibrary) == 0x000028, "Wrong size on UAndroidPermissionFunctionLibrary");

}

