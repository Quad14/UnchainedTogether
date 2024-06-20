#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TypedElementRuntime

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "TypedElementRuntime_structs.hpp"


namespace SDK
{

// Class TypedElementRuntime.TypedElementSelectionSetLibrary
// 0x0000 (0x0028 - 0x0028)
class UTypedElementSelectionSetLibrary final : public UObject
{
public:
	static bool DeselectElementsFromList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionOptions& SelectionOptions);
	static struct FScriptTypedElementListProxy GetNormalizedElementList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionNormalizationOptions& NormalizationOptions);
	static struct FScriptTypedElementListProxy GetNormalizedSelection(class UTypedElementSelectionSet* SelectionSet, const struct FTypedElementSelectionNormalizationOptions& NormalizationOptions);
	static bool SelectElementsFromList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionOptions& SelectionOptions);
	static bool SetSelectionFromList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionOptions& SelectionOptions);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TypedElementSelectionSetLibrary">();
	}
	static class UTypedElementSelectionSetLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTypedElementSelectionSetLibrary>();
	}
};
static_assert(alignof(UTypedElementSelectionSetLibrary) == 0x000008, "Wrong alignment on UTypedElementSelectionSetLibrary");
static_assert(sizeof(UTypedElementSelectionSetLibrary) == 0x000028, "Wrong size on UTypedElementSelectionSetLibrary");

// Class TypedElementRuntime.TypedElementSelectionSet
// 0x0870 (0x0898 - 0x0028)
class UTypedElementSelectionSet final : public UObject
{
public:
	uint8                                         Pad_156[0x800];                                    // 0x0028(0x0800)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnPreSelectionChange;                              // 0x0828(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnSelectionChange;                                 // 0x0838(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_157[0x50];                                     // 0x0848(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool ClearSelection(const struct FTypedElementSelectionOptions& InSelectionOptions);
	bool DeselectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions);
	bool DeselectElements(const TArray<struct FScriptTypedElementHandle>& InElementHandles, const struct FTypedElementSelectionOptions& InSelectionOptions);
	void OnChangeDynamic__DelegateSignature(const class UTypedElementSelectionSet* SelectionSet);
	void OnPreChangeDynamic__DelegateSignature(const class UTypedElementSelectionSet* SelectionSet);
	void RestoreSelectionState(const struct FTypedElementSelectionSetState& InSelectionState);
	bool SelectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions);
	bool SelectElements(const TArray<struct FScriptTypedElementHandle>& InElementHandles, const struct FTypedElementSelectionOptions& InSelectionOptions);
	bool SetSelection(const TArray<struct FScriptTypedElementHandle>& InElementHandles, const struct FTypedElementSelectionOptions& InSelectionOptions);

	bool AllowSelectionModifiers(const struct FScriptTypedElementHandle& InElementHandle) const;
	bool CanDeselectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions) const;
	bool CanSelectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions) const;
	int32 CountSelectedElements(const TSubclassOf<class IInterface> InBaseInterfaceType) const;
	int32 CountSelectedObjects(const class UClass* InRequiredClass) const;
	class UObject* GetBottomSelectedObject(const class UClass* InRequiredClass) const;
	struct FTypedElementSelectionSetState GetCurrentSelectionState() const;
	int32 GetNumSelectedElements() const;
	TArray<class UObject*> GetSelectedObjects(const class UClass* InRequiredClass) const;
	struct FScriptTypedElementHandle GetSelectionElement(const struct FScriptTypedElementHandle& InElementHandle, const ETypedElementSelectionMethod InSelectionMethod) const;
	class UObject* GetTopSelectedObject(const class UClass* InRequiredClass) const;
	bool HasSelectedElements(const TSubclassOf<class IInterface> InBaseInterfaceType) const;
	bool HasSelectedObjects(const class UClass* InRequiredClass) const;
	bool IsElementSelected(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementIsSelectedOptions& InSelectionOptions) const;
	TArray<struct FScriptTypedElementHandle> K2_GetSelectedElementHandles(const TSubclassOf<class IInterface> InBaseInterfaceType) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TypedElementSelectionSet">();
	}
	static class UTypedElementSelectionSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTypedElementSelectionSet>();
	}
};
static_assert(alignof(UTypedElementSelectionSet) == 0x000008, "Wrong alignment on UTypedElementSelectionSet");
static_assert(sizeof(UTypedElementSelectionSet) == 0x000898, "Wrong size on UTypedElementSelectionSet");
static_assert(offsetof(UTypedElementSelectionSet, OnPreSelectionChange) == 0x000828, "Member 'UTypedElementSelectionSet::OnPreSelectionChange' has a wrong offset!");
static_assert(offsetof(UTypedElementSelectionSet, OnSelectionChange) == 0x000838, "Member 'UTypedElementSelectionSet::OnSelectionChange' has a wrong offset!");

// Class TypedElementRuntime.TypedElementAssetDataInterface
// 0x0000 (0x0028 - 0x0028)
class ITypedElementAssetDataInterface final : public IInterface
{
public:
	TArray<struct FAssetData> GetAllReferencedAssetDatas(const struct FScriptTypedElementHandle& InElementHandle);
	struct FAssetData GetAssetData(const struct FScriptTypedElementHandle& InElementHandle);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TypedElementAssetDataInterface">();
	}
	static class ITypedElementAssetDataInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<ITypedElementAssetDataInterface>();
	}
};
static_assert(alignof(ITypedElementAssetDataInterface) == 0x000008, "Wrong alignment on ITypedElementAssetDataInterface");
static_assert(sizeof(ITypedElementAssetDataInterface) == 0x000028, "Wrong size on ITypedElementAssetDataInterface");

// Class TypedElementRuntime.TypedElementHierarchyInterface
// 0x0000 (0x0028 - 0x0028)
class ITypedElementHierarchyInterface final : public IInterface
{
public:
	void GetChildElements(const struct FScriptTypedElementHandle& InElementHandle, TArray<struct FScriptTypedElementHandle>* OutElementHandles, const bool bAllowCreate);
	struct FScriptTypedElementHandle GetParentElement(const struct FScriptTypedElementHandle& InElementHandle, const bool bAllowCreate);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TypedElementHierarchyInterface">();
	}
	static class ITypedElementHierarchyInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<ITypedElementHierarchyInterface>();
	}
};
static_assert(alignof(ITypedElementHierarchyInterface) == 0x000008, "Wrong alignment on ITypedElementHierarchyInterface");
static_assert(sizeof(ITypedElementHierarchyInterface) == 0x000028, "Wrong size on ITypedElementHierarchyInterface");

// Class TypedElementRuntime.TypedElementObjectInterface
// 0x0000 (0x0028 - 0x0028)
class ITypedElementObjectInterface final : public IInterface
{
public:
	class UObject* GetObject(const struct FScriptTypedElementHandle& InElementHandle);
	class UClass* GetObjectClass(const struct FScriptTypedElementHandle& InElementHandle);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TypedElementObjectInterface">();
	}
	static class ITypedElementObjectInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<ITypedElementObjectInterface>();
	}
};
static_assert(alignof(ITypedElementObjectInterface) == 0x000008, "Wrong alignment on ITypedElementObjectInterface");
static_assert(sizeof(ITypedElementObjectInterface) == 0x000028, "Wrong size on ITypedElementObjectInterface");

// Class TypedElementRuntime.TypedElementPrimitiveCustomDataInterface
// 0x0000 (0x0028 - 0x0028)
class ITypedElementPrimitiveCustomDataInterface final : public IInterface
{
public:
	void SetCustomData(const struct FScriptTypedElementHandle& InElementHandle, const TArray<float>& CustomDataFloats, bool bMarkRenderStateDirty);
	void SetCustomDataValue(const struct FScriptTypedElementHandle& InElementHandle, int32 CustomDataIndex, float CustomDataValue, bool bMarkRenderStateDirty);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TypedElementPrimitiveCustomDataInterface">();
	}
	static class ITypedElementPrimitiveCustomDataInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<ITypedElementPrimitiveCustomDataInterface>();
	}
};
static_assert(alignof(ITypedElementPrimitiveCustomDataInterface) == 0x000008, "Wrong alignment on ITypedElementPrimitiveCustomDataInterface");
static_assert(sizeof(ITypedElementPrimitiveCustomDataInterface) == 0x000028, "Wrong size on ITypedElementPrimitiveCustomDataInterface");

// Class TypedElementRuntime.TypedElementSelectionInterface
// 0x0000 (0x0028 - 0x0028)
class ITypedElementSelectionInterface final : public IInterface
{
public:
	bool AllowSelectionModifiers(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet);
	bool CanDeselectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions);
	bool CanSelectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions);
	bool DeselectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet, const struct FTypedElementSelectionOptions& InSelectionOptions);
	struct FScriptTypedElementHandle GetSelectionElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InCurrentSelection, const ETypedElementSelectionMethod InSelectionMethod);
	bool IsElementSelected(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet, const struct FTypedElementIsSelectedOptions& InSelectionOptions);
	bool SelectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet, const struct FTypedElementSelectionOptions& InSelectionOptions);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TypedElementSelectionInterface">();
	}
	static class ITypedElementSelectionInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<ITypedElementSelectionInterface>();
	}
};
static_assert(alignof(ITypedElementSelectionInterface) == 0x000008, "Wrong alignment on ITypedElementSelectionInterface");
static_assert(sizeof(ITypedElementSelectionInterface) == 0x000028, "Wrong size on ITypedElementSelectionInterface");

}

