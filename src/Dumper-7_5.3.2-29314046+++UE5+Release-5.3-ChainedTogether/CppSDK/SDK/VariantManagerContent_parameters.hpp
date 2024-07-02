#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VariantManagerContent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "VariantManagerContent_structs.hpp"


namespace SDK::Params
{

// Function VariantManagerContent.LevelVariantSets.GetNumVariantSets
// 0x0004 (0x0004 - 0x0000)
struct LevelVariantSets_GetNumVariantSets final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelVariantSets_GetNumVariantSets) == 0x000004, "Wrong alignment on LevelVariantSets_GetNumVariantSets");
static_assert(sizeof(LevelVariantSets_GetNumVariantSets) == 0x000004, "Wrong size on LevelVariantSets_GetNumVariantSets");
static_assert(offsetof(LevelVariantSets_GetNumVariantSets, ReturnValue) == 0x000000, "Member 'LevelVariantSets_GetNumVariantSets::ReturnValue' has a wrong offset!");

// Function VariantManagerContent.LevelVariantSets.GetVariantSet
// 0x0010 (0x0010 - 0x0000)
struct LevelVariantSets_GetVariantSet final
{
public:
	int32                                         VariantSetIndex;                                   // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_25DB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVariantSet*                            ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelVariantSets_GetVariantSet) == 0x000008, "Wrong alignment on LevelVariantSets_GetVariantSet");
static_assert(sizeof(LevelVariantSets_GetVariantSet) == 0x000010, "Wrong size on LevelVariantSets_GetVariantSet");
static_assert(offsetof(LevelVariantSets_GetVariantSet, VariantSetIndex) == 0x000000, "Member 'LevelVariantSets_GetVariantSet::VariantSetIndex' has a wrong offset!");
static_assert(offsetof(LevelVariantSets_GetVariantSet, ReturnValue) == 0x000008, "Member 'LevelVariantSets_GetVariantSet::ReturnValue' has a wrong offset!");

// Function VariantManagerContent.LevelVariantSets.GetVariantSetByName
// 0x0018 (0x0018 - 0x0000)
struct LevelVariantSets_GetVariantSetByName final
{
public:
	class FString                                 VariantSetName;                                    // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVariantSet*                            ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelVariantSets_GetVariantSetByName) == 0x000008, "Wrong alignment on LevelVariantSets_GetVariantSetByName");
static_assert(sizeof(LevelVariantSets_GetVariantSetByName) == 0x000018, "Wrong size on LevelVariantSets_GetVariantSetByName");
static_assert(offsetof(LevelVariantSets_GetVariantSetByName, VariantSetName) == 0x000000, "Member 'LevelVariantSets_GetVariantSetByName::VariantSetName' has a wrong offset!");
static_assert(offsetof(LevelVariantSets_GetVariantSetByName, ReturnValue) == 0x000010, "Member 'LevelVariantSets_GetVariantSetByName::ReturnValue' has a wrong offset!");

// Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
// 0x0010 (0x0010 - 0x0000)
struct LevelVariantSetsActor_GetLevelVariantSets final
{
public:
	bool                                          bLoad;                                             // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_25DC[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULevelVariantSets*                      ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelVariantSetsActor_GetLevelVariantSets) == 0x000008, "Wrong alignment on LevelVariantSetsActor_GetLevelVariantSets");
static_assert(sizeof(LevelVariantSetsActor_GetLevelVariantSets) == 0x000010, "Wrong size on LevelVariantSetsActor_GetLevelVariantSets");
static_assert(offsetof(LevelVariantSetsActor_GetLevelVariantSets, bLoad) == 0x000000, "Member 'LevelVariantSetsActor_GetLevelVariantSets::bLoad' has a wrong offset!");
static_assert(offsetof(LevelVariantSetsActor_GetLevelVariantSets, ReturnValue) == 0x000008, "Member 'LevelVariantSetsActor_GetLevelVariantSets::ReturnValue' has a wrong offset!");

// Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
// 0x0008 (0x0008 - 0x0000)
struct LevelVariantSetsActor_SetLevelVariantSets final
{
public:
	class ULevelVariantSets*                      InVariantSets;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelVariantSetsActor_SetLevelVariantSets) == 0x000008, "Wrong alignment on LevelVariantSetsActor_SetLevelVariantSets");
static_assert(sizeof(LevelVariantSetsActor_SetLevelVariantSets) == 0x000008, "Wrong size on LevelVariantSetsActor_SetLevelVariantSets");
static_assert(offsetof(LevelVariantSetsActor_SetLevelVariantSets, InVariantSets) == 0x000000, "Member 'LevelVariantSetsActor_SetLevelVariantSets::InVariantSets' has a wrong offset!");

// Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
// 0x000C (0x000C - 0x0000)
struct LevelVariantSetsActor_SwitchOnVariantByIndex final
{
public:
	int32                                         VariantSetIndex;                                   // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         VariantIndex;                                      // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_25DD[0x3];                                     // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LevelVariantSetsActor_SwitchOnVariantByIndex) == 0x000004, "Wrong alignment on LevelVariantSetsActor_SwitchOnVariantByIndex");
static_assert(sizeof(LevelVariantSetsActor_SwitchOnVariantByIndex) == 0x00000C, "Wrong size on LevelVariantSetsActor_SwitchOnVariantByIndex");
static_assert(offsetof(LevelVariantSetsActor_SwitchOnVariantByIndex, VariantSetIndex) == 0x000000, "Member 'LevelVariantSetsActor_SwitchOnVariantByIndex::VariantSetIndex' has a wrong offset!");
static_assert(offsetof(LevelVariantSetsActor_SwitchOnVariantByIndex, VariantIndex) == 0x000004, "Member 'LevelVariantSetsActor_SwitchOnVariantByIndex::VariantIndex' has a wrong offset!");
static_assert(offsetof(LevelVariantSetsActor_SwitchOnVariantByIndex, ReturnValue) == 0x000008, "Member 'LevelVariantSetsActor_SwitchOnVariantByIndex::ReturnValue' has a wrong offset!");

// Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
// 0x0028 (0x0028 - 0x0000)
struct LevelVariantSetsActor_SwitchOnVariantByName final
{
public:
	class FString                                 VariantSetName;                                    // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 VariantName;                                       // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_25DE[0x7];                                     // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LevelVariantSetsActor_SwitchOnVariantByName) == 0x000008, "Wrong alignment on LevelVariantSetsActor_SwitchOnVariantByName");
static_assert(sizeof(LevelVariantSetsActor_SwitchOnVariantByName) == 0x000028, "Wrong size on LevelVariantSetsActor_SwitchOnVariantByName");
static_assert(offsetof(LevelVariantSetsActor_SwitchOnVariantByName, VariantSetName) == 0x000000, "Member 'LevelVariantSetsActor_SwitchOnVariantByName::VariantSetName' has a wrong offset!");
static_assert(offsetof(LevelVariantSetsActor_SwitchOnVariantByName, VariantName) == 0x000010, "Member 'LevelVariantSetsActor_SwitchOnVariantByName::VariantName' has a wrong offset!");
static_assert(offsetof(LevelVariantSetsActor_SwitchOnVariantByName, ReturnValue) == 0x000020, "Member 'LevelVariantSetsActor_SwitchOnVariantByName::ReturnValue' has a wrong offset!");

// Function VariantManagerContent.PropertyValue.GetFullDisplayString
// 0x0010 (0x0010 - 0x0000)
struct PropertyValue_GetFullDisplayString final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PropertyValue_GetFullDisplayString) == 0x000008, "Wrong alignment on PropertyValue_GetFullDisplayString");
static_assert(sizeof(PropertyValue_GetFullDisplayString) == 0x000010, "Wrong size on PropertyValue_GetFullDisplayString");
static_assert(offsetof(PropertyValue_GetFullDisplayString, ReturnValue) == 0x000000, "Member 'PropertyValue_GetFullDisplayString::ReturnValue' has a wrong offset!");

// Function VariantManagerContent.PropertyValue.GetPropertyTooltip
// 0x0018 (0x0018 - 0x0000)
struct PropertyValue_GetPropertyTooltip final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(PropertyValue_GetPropertyTooltip) == 0x000008, "Wrong alignment on PropertyValue_GetPropertyTooltip");
static_assert(sizeof(PropertyValue_GetPropertyTooltip) == 0x000018, "Wrong size on PropertyValue_GetPropertyTooltip");
static_assert(offsetof(PropertyValue_GetPropertyTooltip, ReturnValue) == 0x000000, "Member 'PropertyValue_GetPropertyTooltip::ReturnValue' has a wrong offset!");

// Function VariantManagerContent.PropertyValue.HasRecordedData
// 0x0001 (0x0001 - 0x0000)
struct PropertyValue_HasRecordedData final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PropertyValue_HasRecordedData) == 0x000001, "Wrong alignment on PropertyValue_HasRecordedData");
static_assert(sizeof(PropertyValue_HasRecordedData) == 0x000001, "Wrong size on PropertyValue_HasRecordedData");
static_assert(offsetof(PropertyValue_HasRecordedData, ReturnValue) == 0x000000, "Member 'PropertyValue_HasRecordedData::ReturnValue' has a wrong offset!");

// Function VariantManagerContent.SwitchActor.SelectOption
// 0x0004 (0x0004 - 0x0000)
struct SwitchActor_SelectOption final
{
public:
	int32                                         OptionIndex;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SwitchActor_SelectOption) == 0x000004, "Wrong alignment on SwitchActor_SelectOption");
static_assert(sizeof(SwitchActor_SelectOption) == 0x000004, "Wrong size on SwitchActor_SelectOption");
static_assert(offsetof(SwitchActor_SelectOption, OptionIndex) == 0x000000, "Member 'SwitchActor_SelectOption::OptionIndex' has a wrong offset!");

// Function VariantManagerContent.SwitchActor.GetOptions
// 0x0010 (0x0010 - 0x0000)
struct SwitchActor_GetOptions final
{
public:
	TArray<class AActor*>                         ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(SwitchActor_GetOptions) == 0x000008, "Wrong alignment on SwitchActor_GetOptions");
static_assert(sizeof(SwitchActor_GetOptions) == 0x000010, "Wrong size on SwitchActor_GetOptions");
static_assert(offsetof(SwitchActor_GetOptions, ReturnValue) == 0x000000, "Member 'SwitchActor_GetOptions::ReturnValue' has a wrong offset!");

// Function VariantManagerContent.SwitchActor.GetSelectedOption
// 0x0004 (0x0004 - 0x0000)
struct SwitchActor_GetSelectedOption final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SwitchActor_GetSelectedOption) == 0x000004, "Wrong alignment on SwitchActor_GetSelectedOption");
static_assert(sizeof(SwitchActor_GetSelectedOption) == 0x000004, "Wrong size on SwitchActor_GetSelectedOption");
static_assert(offsetof(SwitchActor_GetSelectedOption, ReturnValue) == 0x000000, "Member 'SwitchActor_GetSelectedOption::ReturnValue' has a wrong offset!");

// Function VariantManagerContent.Variant.AddDependency
// 0x0060 (0x0060 - 0x0000)
struct Variant_AddDependency final
{
public:
	struct FVariantDependency                     Dependency;                                        // 0x0000(0x0058)(Parm, OutParm, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0058(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_25E7[0x4];                                     // 0x005C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(Variant_AddDependency) == 0x000008, "Wrong alignment on Variant_AddDependency");
static_assert(sizeof(Variant_AddDependency) == 0x000060, "Wrong size on Variant_AddDependency");
static_assert(offsetof(Variant_AddDependency, Dependency) == 0x000000, "Member 'Variant_AddDependency::Dependency' has a wrong offset!");
static_assert(offsetof(Variant_AddDependency, ReturnValue) == 0x000058, "Member 'Variant_AddDependency::ReturnValue' has a wrong offset!");

// Function VariantManagerContent.Variant.DeleteDependency
// 0x0004 (0x0004 - 0x0000)
struct Variant_DeleteDependency final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(Variant_DeleteDependency) == 0x000004, "Wrong alignment on Variant_DeleteDependency");
static_assert(sizeof(Variant_DeleteDependency) == 0x000004, "Wrong size on Variant_DeleteDependency");
static_assert(offsetof(Variant_DeleteDependency, Param_Index) == 0x000000, "Member 'Variant_DeleteDependency::Param_Index' has a wrong offset!");

// Function VariantManagerContent.Variant.GetActor
// 0x0010 (0x0010 - 0x0000)
struct Variant_GetActor final
{
public:
	int32                                         ActorIndex;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_25E8[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(Variant_GetActor) == 0x000008, "Wrong alignment on Variant_GetActor");
static_assert(sizeof(Variant_GetActor) == 0x000010, "Wrong size on Variant_GetActor");
static_assert(offsetof(Variant_GetActor, ActorIndex) == 0x000000, "Member 'Variant_GetActor::ActorIndex' has a wrong offset!");
static_assert(offsetof(Variant_GetActor, ReturnValue) == 0x000008, "Member 'Variant_GetActor::ReturnValue' has a wrong offset!");

// Function VariantManagerContent.Variant.GetDependency
// 0x0060 (0x0060 - 0x0000)
struct Variant_GetDependency final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_25E9[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVariantDependency                     ReturnValue;                                       // 0x0008(0x0058)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(Variant_GetDependency) == 0x000008, "Wrong alignment on Variant_GetDependency");
static_assert(sizeof(Variant_GetDependency) == 0x000060, "Wrong size on Variant_GetDependency");
static_assert(offsetof(Variant_GetDependency, Param_Index) == 0x000000, "Member 'Variant_GetDependency::Param_Index' has a wrong offset!");
static_assert(offsetof(Variant_GetDependency, ReturnValue) == 0x000008, "Member 'Variant_GetDependency::ReturnValue' has a wrong offset!");

// Function VariantManagerContent.Variant.GetDependents
// 0x0020 (0x0020 - 0x0000)
struct Variant_GetDependents final
{
public:
	class ULevelVariantSets*                      LevelVariantSets;                                  // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOnlyEnabledDependencies;                          // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_25EA[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UVariant*>                       ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(Variant_GetDependents) == 0x000008, "Wrong alignment on Variant_GetDependents");
static_assert(sizeof(Variant_GetDependents) == 0x000020, "Wrong size on Variant_GetDependents");
static_assert(offsetof(Variant_GetDependents, LevelVariantSets) == 0x000000, "Member 'Variant_GetDependents::LevelVariantSets' has a wrong offset!");
static_assert(offsetof(Variant_GetDependents, bOnlyEnabledDependencies) == 0x000008, "Member 'Variant_GetDependents::bOnlyEnabledDependencies' has a wrong offset!");
static_assert(offsetof(Variant_GetDependents, ReturnValue) == 0x000010, "Member 'Variant_GetDependents::ReturnValue' has a wrong offset!");

// Function VariantManagerContent.Variant.GetNumActors
// 0x0004 (0x0004 - 0x0000)
struct Variant_GetNumActors final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(Variant_GetNumActors) == 0x000004, "Wrong alignment on Variant_GetNumActors");
static_assert(sizeof(Variant_GetNumActors) == 0x000004, "Wrong size on Variant_GetNumActors");
static_assert(offsetof(Variant_GetNumActors, ReturnValue) == 0x000000, "Member 'Variant_GetNumActors::ReturnValue' has a wrong offset!");

// Function VariantManagerContent.Variant.GetNumDependencies
// 0x0004 (0x0004 - 0x0000)
struct Variant_GetNumDependencies final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(Variant_GetNumDependencies) == 0x000004, "Wrong alignment on Variant_GetNumDependencies");
static_assert(sizeof(Variant_GetNumDependencies) == 0x000004, "Wrong size on Variant_GetNumDependencies");
static_assert(offsetof(Variant_GetNumDependencies, ReturnValue) == 0x000000, "Member 'Variant_GetNumDependencies::ReturnValue' has a wrong offset!");

// Function VariantManagerContent.Variant.GetParent
// 0x0008 (0x0008 - 0x0000)
struct Variant_GetParent final
{
public:
	class UVariantSet*                            ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(Variant_GetParent) == 0x000008, "Wrong alignment on Variant_GetParent");
static_assert(sizeof(Variant_GetParent) == 0x000008, "Wrong size on Variant_GetParent");
static_assert(offsetof(Variant_GetParent, ReturnValue) == 0x000000, "Member 'Variant_GetParent::ReturnValue' has a wrong offset!");

// Function VariantManagerContent.Variant.GetThumbnail
// 0x0008 (0x0008 - 0x0000)
struct Variant_GetThumbnail final
{
public:
	class UTexture2D*                             ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(Variant_GetThumbnail) == 0x000008, "Wrong alignment on Variant_GetThumbnail");
static_assert(sizeof(Variant_GetThumbnail) == 0x000008, "Wrong size on Variant_GetThumbnail");
static_assert(offsetof(Variant_GetThumbnail, ReturnValue) == 0x000000, "Member 'Variant_GetThumbnail::ReturnValue' has a wrong offset!");

// Function VariantManagerContent.Variant.IsActive
// 0x0001 (0x0001 - 0x0000)
struct Variant_IsActive final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(Variant_IsActive) == 0x000001, "Wrong alignment on Variant_IsActive");
static_assert(sizeof(Variant_IsActive) == 0x000001, "Wrong size on Variant_IsActive");
static_assert(offsetof(Variant_IsActive, ReturnValue) == 0x000000, "Member 'Variant_IsActive::ReturnValue' has a wrong offset!");

// Function VariantManagerContent.Variant.SetDependency
// 0x0060 (0x0060 - 0x0000)
struct Variant_SetDependency final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_25EB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVariantDependency                     Dependency;                                        // 0x0008(0x0058)(Parm, OutParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(Variant_SetDependency) == 0x000008, "Wrong alignment on Variant_SetDependency");
static_assert(sizeof(Variant_SetDependency) == 0x000060, "Wrong size on Variant_SetDependency");
static_assert(offsetof(Variant_SetDependency, Param_Index) == 0x000000, "Member 'Variant_SetDependency::Param_Index' has a wrong offset!");
static_assert(offsetof(Variant_SetDependency, Dependency) == 0x000008, "Member 'Variant_SetDependency::Dependency' has a wrong offset!");

// Function VariantManagerContent.Variant.SetDisplayText
// 0x0018 (0x0018 - 0x0000)
struct Variant_SetDisplayText final
{
public:
	class FText                                   NewDisplayText;                                    // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(Variant_SetDisplayText) == 0x000008, "Wrong alignment on Variant_SetDisplayText");
static_assert(sizeof(Variant_SetDisplayText) == 0x000018, "Wrong size on Variant_SetDisplayText");
static_assert(offsetof(Variant_SetDisplayText, NewDisplayText) == 0x000000, "Member 'Variant_SetDisplayText::NewDisplayText' has a wrong offset!");

// Function VariantManagerContent.Variant.SetThumbnailFromCamera
// 0x0080 (0x0080 - 0x0000)
struct Variant_SetThumbnailFromCamera final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_25EC[0x8];                                     // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CameraTransform;                                   // 0x0010(0x0060)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FOVDegrees;                                        // 0x0070(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinZ;                                              // 0x0074(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Gamma;                                             // 0x0078(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_25ED[0x4];                                     // 0x007C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(Variant_SetThumbnailFromCamera) == 0x000010, "Wrong alignment on Variant_SetThumbnailFromCamera");
static_assert(sizeof(Variant_SetThumbnailFromCamera) == 0x000080, "Wrong size on Variant_SetThumbnailFromCamera");
static_assert(offsetof(Variant_SetThumbnailFromCamera, WorldContextObject) == 0x000000, "Member 'Variant_SetThumbnailFromCamera::WorldContextObject' has a wrong offset!");
static_assert(offsetof(Variant_SetThumbnailFromCamera, CameraTransform) == 0x000010, "Member 'Variant_SetThumbnailFromCamera::CameraTransform' has a wrong offset!");
static_assert(offsetof(Variant_SetThumbnailFromCamera, FOVDegrees) == 0x000070, "Member 'Variant_SetThumbnailFromCamera::FOVDegrees' has a wrong offset!");
static_assert(offsetof(Variant_SetThumbnailFromCamera, MinZ) == 0x000074, "Member 'Variant_SetThumbnailFromCamera::MinZ' has a wrong offset!");
static_assert(offsetof(Variant_SetThumbnailFromCamera, Gamma) == 0x000078, "Member 'Variant_SetThumbnailFromCamera::Gamma' has a wrong offset!");

// Function VariantManagerContent.Variant.SetThumbnailFromFile
// 0x0010 (0x0010 - 0x0000)
struct Variant_SetThumbnailFromFile final
{
public:
	class FString                                 FilePath;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(Variant_SetThumbnailFromFile) == 0x000008, "Wrong alignment on Variant_SetThumbnailFromFile");
static_assert(sizeof(Variant_SetThumbnailFromFile) == 0x000010, "Wrong size on Variant_SetThumbnailFromFile");
static_assert(offsetof(Variant_SetThumbnailFromFile, FilePath) == 0x000000, "Member 'Variant_SetThumbnailFromFile::FilePath' has a wrong offset!");

// Function VariantManagerContent.Variant.SetThumbnailFromTexture
// 0x0008 (0x0008 - 0x0000)
struct Variant_SetThumbnailFromTexture final
{
public:
	class UTexture2D*                             NewThumbnail;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(Variant_SetThumbnailFromTexture) == 0x000008, "Wrong alignment on Variant_SetThumbnailFromTexture");
static_assert(sizeof(Variant_SetThumbnailFromTexture) == 0x000008, "Wrong size on Variant_SetThumbnailFromTexture");
static_assert(offsetof(Variant_SetThumbnailFromTexture, NewThumbnail) == 0x000000, "Member 'Variant_SetThumbnailFromTexture::NewThumbnail' has a wrong offset!");

// Function VariantManagerContent.Variant.GetDisplayText
// 0x0018 (0x0018 - 0x0000)
struct Variant_GetDisplayText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(Variant_GetDisplayText) == 0x000008, "Wrong alignment on Variant_GetDisplayText");
static_assert(sizeof(Variant_GetDisplayText) == 0x000018, "Wrong size on Variant_GetDisplayText");
static_assert(offsetof(Variant_GetDisplayText, ReturnValue) == 0x000000, "Member 'Variant_GetDisplayText::ReturnValue' has a wrong offset!");

// Function VariantManagerContent.VariantSet.GetParent
// 0x0008 (0x0008 - 0x0000)
struct VariantSet_GetParent final
{
public:
	class ULevelVariantSets*                      ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(VariantSet_GetParent) == 0x000008, "Wrong alignment on VariantSet_GetParent");
static_assert(sizeof(VariantSet_GetParent) == 0x000008, "Wrong size on VariantSet_GetParent");
static_assert(offsetof(VariantSet_GetParent, ReturnValue) == 0x000000, "Member 'VariantSet_GetParent::ReturnValue' has a wrong offset!");

// Function VariantManagerContent.VariantSet.GetThumbnail
// 0x0008 (0x0008 - 0x0000)
struct VariantSet_GetThumbnail final
{
public:
	class UTexture2D*                             ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(VariantSet_GetThumbnail) == 0x000008, "Wrong alignment on VariantSet_GetThumbnail");
static_assert(sizeof(VariantSet_GetThumbnail) == 0x000008, "Wrong size on VariantSet_GetThumbnail");
static_assert(offsetof(VariantSet_GetThumbnail, ReturnValue) == 0x000000, "Member 'VariantSet_GetThumbnail::ReturnValue' has a wrong offset!");

// Function VariantManagerContent.VariantSet.GetVariant
// 0x0010 (0x0010 - 0x0000)
struct VariantSet_GetVariant final
{
public:
	int32                                         VariantIndex;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_25F0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVariant*                               ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(VariantSet_GetVariant) == 0x000008, "Wrong alignment on VariantSet_GetVariant");
static_assert(sizeof(VariantSet_GetVariant) == 0x000010, "Wrong size on VariantSet_GetVariant");
static_assert(offsetof(VariantSet_GetVariant, VariantIndex) == 0x000000, "Member 'VariantSet_GetVariant::VariantIndex' has a wrong offset!");
static_assert(offsetof(VariantSet_GetVariant, ReturnValue) == 0x000008, "Member 'VariantSet_GetVariant::ReturnValue' has a wrong offset!");

// Function VariantManagerContent.VariantSet.GetVariantByName
// 0x0018 (0x0018 - 0x0000)
struct VariantSet_GetVariantByName final
{
public:
	class FString                                 VariantName;                                       // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVariant*                               ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(VariantSet_GetVariantByName) == 0x000008, "Wrong alignment on VariantSet_GetVariantByName");
static_assert(sizeof(VariantSet_GetVariantByName) == 0x000018, "Wrong size on VariantSet_GetVariantByName");
static_assert(offsetof(VariantSet_GetVariantByName, VariantName) == 0x000000, "Member 'VariantSet_GetVariantByName::VariantName' has a wrong offset!");
static_assert(offsetof(VariantSet_GetVariantByName, ReturnValue) == 0x000010, "Member 'VariantSet_GetVariantByName::ReturnValue' has a wrong offset!");

// Function VariantManagerContent.VariantSet.SetDisplayText
// 0x0018 (0x0018 - 0x0000)
struct VariantSet_SetDisplayText final
{
public:
	class FText                                   NewDisplayText;                                    // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(VariantSet_SetDisplayText) == 0x000008, "Wrong alignment on VariantSet_SetDisplayText");
static_assert(sizeof(VariantSet_SetDisplayText) == 0x000018, "Wrong size on VariantSet_SetDisplayText");
static_assert(offsetof(VariantSet_SetDisplayText, NewDisplayText) == 0x000000, "Member 'VariantSet_SetDisplayText::NewDisplayText' has a wrong offset!");

// Function VariantManagerContent.VariantSet.SetThumbnailFromCamera
// 0x0080 (0x0080 - 0x0000)
struct VariantSet_SetThumbnailFromCamera final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_25F1[0x8];                                     // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CameraTransform;                                   // 0x0010(0x0060)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FOVDegrees;                                        // 0x0070(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinZ;                                              // 0x0074(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Gamma;                                             // 0x0078(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_25F2[0x4];                                     // 0x007C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(VariantSet_SetThumbnailFromCamera) == 0x000010, "Wrong alignment on VariantSet_SetThumbnailFromCamera");
static_assert(sizeof(VariantSet_SetThumbnailFromCamera) == 0x000080, "Wrong size on VariantSet_SetThumbnailFromCamera");
static_assert(offsetof(VariantSet_SetThumbnailFromCamera, WorldContextObject) == 0x000000, "Member 'VariantSet_SetThumbnailFromCamera::WorldContextObject' has a wrong offset!");
static_assert(offsetof(VariantSet_SetThumbnailFromCamera, CameraTransform) == 0x000010, "Member 'VariantSet_SetThumbnailFromCamera::CameraTransform' has a wrong offset!");
static_assert(offsetof(VariantSet_SetThumbnailFromCamera, FOVDegrees) == 0x000070, "Member 'VariantSet_SetThumbnailFromCamera::FOVDegrees' has a wrong offset!");
static_assert(offsetof(VariantSet_SetThumbnailFromCamera, MinZ) == 0x000074, "Member 'VariantSet_SetThumbnailFromCamera::MinZ' has a wrong offset!");
static_assert(offsetof(VariantSet_SetThumbnailFromCamera, Gamma) == 0x000078, "Member 'VariantSet_SetThumbnailFromCamera::Gamma' has a wrong offset!");

// Function VariantManagerContent.VariantSet.SetThumbnailFromFile
// 0x0010 (0x0010 - 0x0000)
struct VariantSet_SetThumbnailFromFile final
{
public:
	class FString                                 FilePath;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(VariantSet_SetThumbnailFromFile) == 0x000008, "Wrong alignment on VariantSet_SetThumbnailFromFile");
static_assert(sizeof(VariantSet_SetThumbnailFromFile) == 0x000010, "Wrong size on VariantSet_SetThumbnailFromFile");
static_assert(offsetof(VariantSet_SetThumbnailFromFile, FilePath) == 0x000000, "Member 'VariantSet_SetThumbnailFromFile::FilePath' has a wrong offset!");

// Function VariantManagerContent.VariantSet.SetThumbnailFromTexture
// 0x0008 (0x0008 - 0x0000)
struct VariantSet_SetThumbnailFromTexture final
{
public:
	class UTexture2D*                             NewThumbnail;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(VariantSet_SetThumbnailFromTexture) == 0x000008, "Wrong alignment on VariantSet_SetThumbnailFromTexture");
static_assert(sizeof(VariantSet_SetThumbnailFromTexture) == 0x000008, "Wrong size on VariantSet_SetThumbnailFromTexture");
static_assert(offsetof(VariantSet_SetThumbnailFromTexture, NewThumbnail) == 0x000000, "Member 'VariantSet_SetThumbnailFromTexture::NewThumbnail' has a wrong offset!");

// Function VariantManagerContent.VariantSet.GetDisplayText
// 0x0018 (0x0018 - 0x0000)
struct VariantSet_GetDisplayText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(VariantSet_GetDisplayText) == 0x000008, "Wrong alignment on VariantSet_GetDisplayText");
static_assert(sizeof(VariantSet_GetDisplayText) == 0x000018, "Wrong size on VariantSet_GetDisplayText");
static_assert(offsetof(VariantSet_GetDisplayText, ReturnValue) == 0x000000, "Member 'VariantSet_GetDisplayText::ReturnValue' has a wrong offset!");

// Function VariantManagerContent.VariantSet.GetNumVariants
// 0x0004 (0x0004 - 0x0000)
struct VariantSet_GetNumVariants final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(VariantSet_GetNumVariants) == 0x000004, "Wrong alignment on VariantSet_GetNumVariants");
static_assert(sizeof(VariantSet_GetNumVariants) == 0x000004, "Wrong size on VariantSet_GetNumVariants");
static_assert(offsetof(VariantSet_GetNumVariants, ReturnValue) == 0x000000, "Member 'VariantSet_GetNumVariants::ReturnValue' has a wrong offset!");

}

