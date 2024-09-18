#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IGLE_W_Viewport

#include "Basic.hpp"


namespace SDK::Params
{

// Function IGLE_W_Viewport.IGLE_W_Viewport_C.ExecuteUbergraph_IGLE_W_Viewport
// 0x0020 (0x0020 - 0x0000)
struct IGLE_W_Viewport_C_ExecuteUbergraph_IGLE_W_Viewport final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture*                               K2Node_CustomEvent_Texture_1;                      // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture*                               K2Node_CustomEvent_Texture;                        // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IGLE_W_Viewport_C_ExecuteUbergraph_IGLE_W_Viewport) == 0x000008, "Wrong alignment on IGLE_W_Viewport_C_ExecuteUbergraph_IGLE_W_Viewport");
static_assert(sizeof(IGLE_W_Viewport_C_ExecuteUbergraph_IGLE_W_Viewport) == 0x000020, "Wrong size on IGLE_W_Viewport_C_ExecuteUbergraph_IGLE_W_Viewport");
static_assert(offsetof(IGLE_W_Viewport_C_ExecuteUbergraph_IGLE_W_Viewport, EntryPoint) == 0x000000, "Member 'IGLE_W_Viewport_C_ExecuteUbergraph_IGLE_W_Viewport::EntryPoint' has a wrong offset!");
static_assert(offsetof(IGLE_W_Viewport_C_ExecuteUbergraph_IGLE_W_Viewport, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000008, "Member 'IGLE_W_Viewport_C_ExecuteUbergraph_IGLE_W_Viewport::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_Viewport_C_ExecuteUbergraph_IGLE_W_Viewport, K2Node_CustomEvent_Texture_1) == 0x000010, "Member 'IGLE_W_Viewport_C_ExecuteUbergraph_IGLE_W_Viewport::K2Node_CustomEvent_Texture_1' has a wrong offset!");
static_assert(offsetof(IGLE_W_Viewport_C_ExecuteUbergraph_IGLE_W_Viewport, K2Node_CustomEvent_Texture) == 0x000018, "Member 'IGLE_W_Viewport_C_ExecuteUbergraph_IGLE_W_Viewport::K2Node_CustomEvent_Texture' has a wrong offset!");

// Function IGLE_W_Viewport.IGLE_W_Viewport_C.SetViewportBaseViewTexture
// 0x0008 (0x0008 - 0x0000)
struct IGLE_W_Viewport_C_SetViewportBaseViewTexture final
{
public:
	class UTexture*                               Texture;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IGLE_W_Viewport_C_SetViewportBaseViewTexture) == 0x000008, "Wrong alignment on IGLE_W_Viewport_C_SetViewportBaseViewTexture");
static_assert(sizeof(IGLE_W_Viewport_C_SetViewportBaseViewTexture) == 0x000008, "Wrong size on IGLE_W_Viewport_C_SetViewportBaseViewTexture");
static_assert(offsetof(IGLE_W_Viewport_C_SetViewportBaseViewTexture, Texture) == 0x000000, "Member 'IGLE_W_Viewport_C_SetViewportBaseViewTexture::Texture' has a wrong offset!");

// Function IGLE_W_Viewport.IGLE_W_Viewport_C.SetViewportSecondaryViewTexture
// 0x0008 (0x0008 - 0x0000)
struct IGLE_W_Viewport_C_SetViewportSecondaryViewTexture final
{
public:
	class UTexture*                               Texture;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IGLE_W_Viewport_C_SetViewportSecondaryViewTexture) == 0x000008, "Wrong alignment on IGLE_W_Viewport_C_SetViewportSecondaryViewTexture");
static_assert(sizeof(IGLE_W_Viewport_C_SetViewportSecondaryViewTexture) == 0x000008, "Wrong size on IGLE_W_Viewport_C_SetViewportSecondaryViewTexture");
static_assert(offsetof(IGLE_W_Viewport_C_SetViewportSecondaryViewTexture, Texture) == 0x000000, "Member 'IGLE_W_Viewport_C_SetViewportSecondaryViewTexture::Texture' has a wrong offset!");

}

