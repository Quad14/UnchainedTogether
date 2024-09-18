#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Devil_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// ScriptStruct Devil_AnimBP.Devil_AnimBP_C.AnimBlueprintGeneratedConstantData
// 0x015F (0x0160 - 0x0001)
struct Devil_AnimBP::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_185;                                // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlendProfile*                          __BlendProfile_186;                                // 0x0010(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_187;                                  // 0x0018(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_188;                                // 0x0020(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_189;                                // 0x0021(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_190;                               // 0x0028(0x0010)(BlueprintVisible, EditFixedSize)
	TArray<int32>                                 __ArrayProperty_191;                               // 0x0038(0x0010)(BlueprintVisible)
	class FName                                   __NameProperty_192;                                // 0x0048(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_193;                                 // 0x0050(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_194;                                // 0x0054(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_195;                                 // 0x005C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimNodeFunctionRef                   __StructProperty_196;                              // 0x0060(0x0020)(BlueprintVisible, NoDestructor)
	bool                                          __BoolProperty_197;                                // 0x0080(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_198;                               // 0x0084(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_199;                              // 0x0088(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_200;                               // 0x00B4(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_201;                                // 0x00B8(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_202;                                // 0x00B9(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_203;                                // 0x00BA(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BB[0x1];                                       // 0x00BB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_204;                                // 0x00BC(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C4[0x4];                                       // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x00C8(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0148(0x0018)()
};
static_assert(alignof(Devil_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on Devil_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(Devil_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x000160, "Wrong size on Devil_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(Devil_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_185) == 0x000004, "Member 'Devil_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_185' has a wrong offset!");
static_assert(offsetof(Devil_AnimBP::FAnimBlueprintGeneratedConstantData, __BlendProfile_186) == 0x000010, "Member 'Devil_AnimBP::FAnimBlueprintGeneratedConstantData::__BlendProfile_186' has a wrong offset!");
static_assert(offsetof(Devil_AnimBP::FAnimBlueprintGeneratedConstantData, __CurveFloat_187) == 0x000018, "Member 'Devil_AnimBP::FAnimBlueprintGeneratedConstantData::__CurveFloat_187' has a wrong offset!");
static_assert(offsetof(Devil_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_188) == 0x000020, "Member 'Devil_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_188' has a wrong offset!");
static_assert(offsetof(Devil_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_189) == 0x000021, "Member 'Devil_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_189' has a wrong offset!");
static_assert(offsetof(Devil_AnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_190) == 0x000028, "Member 'Devil_AnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_190' has a wrong offset!");
static_assert(offsetof(Devil_AnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_191) == 0x000038, "Member 'Devil_AnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_191' has a wrong offset!");
static_assert(offsetof(Devil_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_192) == 0x000048, "Member 'Devil_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_192' has a wrong offset!");
static_assert(offsetof(Devil_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_193) == 0x000050, "Member 'Devil_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_193' has a wrong offset!");
static_assert(offsetof(Devil_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_194) == 0x000054, "Member 'Devil_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_194' has a wrong offset!");
static_assert(offsetof(Devil_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_195) == 0x00005C, "Member 'Devil_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_195' has a wrong offset!");
static_assert(offsetof(Devil_AnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_196) == 0x000060, "Member 'Devil_AnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_196' has a wrong offset!");
static_assert(offsetof(Devil_AnimBP::FAnimBlueprintGeneratedConstantData, __BoolProperty_197) == 0x000080, "Member 'Devil_AnimBP::FAnimBlueprintGeneratedConstantData::__BoolProperty_197' has a wrong offset!");
static_assert(offsetof(Devil_AnimBP::FAnimBlueprintGeneratedConstantData, __FloatProperty_198) == 0x000084, "Member 'Devil_AnimBP::FAnimBlueprintGeneratedConstantData::__FloatProperty_198' has a wrong offset!");
static_assert(offsetof(Devil_AnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_199) == 0x000088, "Member 'Devil_AnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_199' has a wrong offset!");
static_assert(offsetof(Devil_AnimBP::FAnimBlueprintGeneratedConstantData, __FloatProperty_200) == 0x0000B4, "Member 'Devil_AnimBP::FAnimBlueprintGeneratedConstantData::__FloatProperty_200' has a wrong offset!");
static_assert(offsetof(Devil_AnimBP::FAnimBlueprintGeneratedConstantData, __BoolProperty_201) == 0x0000B8, "Member 'Devil_AnimBP::FAnimBlueprintGeneratedConstantData::__BoolProperty_201' has a wrong offset!");
static_assert(offsetof(Devil_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_202) == 0x0000B9, "Member 'Devil_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_202' has a wrong offset!");
static_assert(offsetof(Devil_AnimBP::FAnimBlueprintGeneratedConstantData, __ByteProperty_203) == 0x0000BA, "Member 'Devil_AnimBP::FAnimBlueprintGeneratedConstantData::__ByteProperty_203' has a wrong offset!");
static_assert(offsetof(Devil_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_204) == 0x0000BC, "Member 'Devil_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_204' has a wrong offset!");
static_assert(offsetof(Devil_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x0000C8, "Member 'Devil_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(Devil_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000148, "Member 'Devil_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct Devil_AnimBP.Devil_AnimBP_C.AnimBlueprintGeneratedMutableData
// 0x0001 (0x0002 - 0x0001)
struct Devil_AnimBP::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	uint8                                         __ByteProperty;                                    // 0x0001(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Devil_AnimBP::FAnimBlueprintGeneratedMutableData) == 0x000001, "Wrong alignment on Devil_AnimBP::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(Devil_AnimBP::FAnimBlueprintGeneratedMutableData) == 0x000002, "Wrong size on Devil_AnimBP::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(Devil_AnimBP::FAnimBlueprintGeneratedMutableData, __ByteProperty) == 0x000001, "Member 'Devil_AnimBP::FAnimBlueprintGeneratedMutableData::__ByteProperty' has a wrong offset!");

}

