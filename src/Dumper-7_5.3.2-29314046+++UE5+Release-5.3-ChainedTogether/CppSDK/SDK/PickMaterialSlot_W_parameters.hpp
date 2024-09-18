#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PickMaterialSlot_W

#include "Basic.hpp"


namespace SDK::Params
{

// Function PickMaterialSlot_W.PickMaterialSlot_W_C.ExecuteUbergraph_PickMaterialSlot_W
// 0x0068 (0x0068 - 0x0000)
struct PickMaterialSlot_W_C_ExecuteUbergraph_PickMaterialSlot_W final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0040(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AIGLE_Pawn_Example_C*                   K2Node_DynamicCast_AsIGLE_Pawn_Example;            // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PickMaterialSlot_W_C_ExecuteUbergraph_PickMaterialSlot_W) == 0x000008, "Wrong alignment on PickMaterialSlot_W_C_ExecuteUbergraph_PickMaterialSlot_W");
static_assert(sizeof(PickMaterialSlot_W_C_ExecuteUbergraph_PickMaterialSlot_W) == 0x000068, "Wrong size on PickMaterialSlot_W_C_ExecuteUbergraph_PickMaterialSlot_W");
static_assert(offsetof(PickMaterialSlot_W_C_ExecuteUbergraph_PickMaterialSlot_W, EntryPoint) == 0x000000, "Member 'PickMaterialSlot_W_C_ExecuteUbergraph_PickMaterialSlot_W::EntryPoint' has a wrong offset!");
static_assert(offsetof(PickMaterialSlot_W_C_ExecuteUbergraph_PickMaterialSlot_W, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'PickMaterialSlot_W_C_ExecuteUbergraph_PickMaterialSlot_W::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(PickMaterialSlot_W_C_ExecuteUbergraph_PickMaterialSlot_W, Temp_object_Variable) == 0x000010, "Member 'PickMaterialSlot_W_C_ExecuteUbergraph_PickMaterialSlot_W::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(PickMaterialSlot_W_C_ExecuteUbergraph_PickMaterialSlot_W, K2Node_DynamicCast_AsTexture_2D) == 0x000018, "Member 'PickMaterialSlot_W_C_ExecuteUbergraph_PickMaterialSlot_W::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(PickMaterialSlot_W_C_ExecuteUbergraph_PickMaterialSlot_W, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'PickMaterialSlot_W_C_ExecuteUbergraph_PickMaterialSlot_W::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PickMaterialSlot_W_C_ExecuteUbergraph_PickMaterialSlot_W, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'PickMaterialSlot_W_C_ExecuteUbergraph_PickMaterialSlot_W::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PickMaterialSlot_W_C_ExecuteUbergraph_PickMaterialSlot_W, K2Node_CreateDelegate_OutputDelegate) == 0x000040, "Member 'PickMaterialSlot_W_C_ExecuteUbergraph_PickMaterialSlot_W::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PickMaterialSlot_W_C_ExecuteUbergraph_PickMaterialSlot_W, CallFunc_GetPlayerPawn_ReturnValue) == 0x000050, "Member 'PickMaterialSlot_W_C_ExecuteUbergraph_PickMaterialSlot_W::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(PickMaterialSlot_W_C_ExecuteUbergraph_PickMaterialSlot_W, K2Node_DynamicCast_AsIGLE_Pawn_Example) == 0x000058, "Member 'PickMaterialSlot_W_C_ExecuteUbergraph_PickMaterialSlot_W::K2Node_DynamicCast_AsIGLE_Pawn_Example' has a wrong offset!");
static_assert(offsetof(PickMaterialSlot_W_C_ExecuteUbergraph_PickMaterialSlot_W, K2Node_DynamicCast_bSuccess_1) == 0x000060, "Member 'PickMaterialSlot_W_C_ExecuteUbergraph_PickMaterialSlot_W::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(PickMaterialSlot_W_C_ExecuteUbergraph_PickMaterialSlot_W, CallFunc_IsValid_ReturnValue) == 0x000061, "Member 'PickMaterialSlot_W_C_ExecuteUbergraph_PickMaterialSlot_W::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function PickMaterialSlot_W.PickMaterialSlot_W_C.OnLoaded_C9FFD6DA4D816200F53493B02DF73EC5
// 0x0008 (0x0008 - 0x0000)
struct PickMaterialSlot_W_C_OnLoaded_C9FFD6DA4D816200F53493B02DF73EC5 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PickMaterialSlot_W_C_OnLoaded_C9FFD6DA4D816200F53493B02DF73EC5) == 0x000008, "Wrong alignment on PickMaterialSlot_W_C_OnLoaded_C9FFD6DA4D816200F53493B02DF73EC5");
static_assert(sizeof(PickMaterialSlot_W_C_OnLoaded_C9FFD6DA4D816200F53493B02DF73EC5) == 0x000008, "Wrong size on PickMaterialSlot_W_C_OnLoaded_C9FFD6DA4D816200F53493B02DF73EC5");
static_assert(offsetof(PickMaterialSlot_W_C_OnLoaded_C9FFD6DA4D816200F53493B02DF73EC5, Loaded) == 0x000000, "Member 'PickMaterialSlot_W_C_OnLoaded_C9FFD6DA4D816200F53493B02DF73EC5::Loaded' has a wrong offset!");

}

