#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PCM_Game

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function PCM_Game.PCM_Game_C.AddWaterPP
// 0x0008 (0x0008 - 0x0000)
struct PCM_Game_C_AddWaterPP final
{
public:
	class APostProcessVolume*                     PP;                                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PCM_Game_C_AddWaterPP) == 0x000008, "Wrong alignment on PCM_Game_C_AddWaterPP");
static_assert(sizeof(PCM_Game_C_AddWaterPP) == 0x000008, "Wrong size on PCM_Game_C_AddWaterPP");
static_assert(offsetof(PCM_Game_C_AddWaterPP, PP) == 0x000000, "Member 'PCM_Game_C_AddWaterPP::PP' has a wrong offset!");

// Function PCM_Game.PCM_Game_C.ExecuteUbergraph_PCM_Game
// 0x00C0 (0x00C0 - 0x0000)
struct PCM_Game_C_ExecuteUbergraph_PCM_Game final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors;   // 0x0008(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E[0x2];                                       // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0038(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_3;        // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_2;    // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_3;    // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A[0x6];                                       // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APostProcessVolume*                     K2Node_CustomEvent_PP;                             // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_4;        // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors_1; // 0x0080(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_4;    // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0096(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_97[0x1];                                       // 0x0097(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class APostProcessVolume*>             CallFunc_GetAllActorsOfClassWithTag_OutActors;     // 0x00A0(0x0010)(ReferenceParm)
	class APostProcessVolume*                     CallFunc_Array_Get_Item;                           // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PCM_Game_C_ExecuteUbergraph_PCM_Game) == 0x000008, "Wrong alignment on PCM_Game_C_ExecuteUbergraph_PCM_Game");
static_assert(sizeof(PCM_Game_C_ExecuteUbergraph_PCM_Game) == 0x0000C0, "Wrong size on PCM_Game_C_ExecuteUbergraph_PCM_Game");
static_assert(offsetof(PCM_Game_C_ExecuteUbergraph_PCM_Game, EntryPoint) == 0x000000, "Member 'PCM_Game_C_ExecuteUbergraph_PCM_Game::EntryPoint' has a wrong offset!");
static_assert(offsetof(PCM_Game_C_ExecuteUbergraph_PCM_Game, CallFunc_GetOverlappingActors_OverlappingActors) == 0x000008, "Member 'PCM_Game_C_ExecuteUbergraph_PCM_Game::CallFunc_GetOverlappingActors_OverlappingActors' has a wrong offset!");
static_assert(offsetof(PCM_Game_C_ExecuteUbergraph_PCM_Game, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'PCM_Game_C_ExecuteUbergraph_PCM_Game::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PCM_Game_C_ExecuteUbergraph_PCM_Game, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'PCM_Game_C_ExecuteUbergraph_PCM_Game::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PCM_Game_C_ExecuteUbergraph_PCM_Game, CallFunc_Greater_IntInt_ReturnValue) == 0x00001D, "Member 'PCM_Game_C_ExecuteUbergraph_PCM_Game::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PCM_Game_C_ExecuteUbergraph_PCM_Game, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'PCM_Game_C_ExecuteUbergraph_PCM_Game::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PCM_Game_C_ExecuteUbergraph_PCM_Game, CallFunc_GetPlayerController_ReturnValue) == 0x000030, "Member 'PCM_Game_C_ExecuteUbergraph_PCM_Game::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PCM_Game_C_ExecuteUbergraph_PCM_Game, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000038, "Member 'PCM_Game_C_ExecuteUbergraph_PCM_Game::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(PCM_Game_C_ExecuteUbergraph_PCM_Game, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000040, "Member 'PCM_Game_C_ExecuteUbergraph_PCM_Game::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(PCM_Game_C_ExecuteUbergraph_PCM_Game, CallFunc_GetPlayerController_ReturnValue_1) == 0x000048, "Member 'PCM_Game_C_ExecuteUbergraph_PCM_Game::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PCM_Game_C_ExecuteUbergraph_PCM_Game, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000050, "Member 'PCM_Game_C_ExecuteUbergraph_PCM_Game::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PCM_Game_C_ExecuteUbergraph_PCM_Game, CallFunc_GetPlayerController_ReturnValue_2) == 0x000058, "Member 'PCM_Game_C_ExecuteUbergraph_PCM_Game::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PCM_Game_C_ExecuteUbergraph_PCM_Game, CallFunc_GetPlayerController_ReturnValue_3) == 0x000060, "Member 'PCM_Game_C_ExecuteUbergraph_PCM_Game::CallFunc_GetPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PCM_Game_C_ExecuteUbergraph_PCM_Game, CallFunc_EqualEqual_ObjectObject_ReturnValue_2) == 0x000068, "Member 'PCM_Game_C_ExecuteUbergraph_PCM_Game::CallFunc_EqualEqual_ObjectObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PCM_Game_C_ExecuteUbergraph_PCM_Game, CallFunc_EqualEqual_ObjectObject_ReturnValue_3) == 0x000069, "Member 'PCM_Game_C_ExecuteUbergraph_PCM_Game::CallFunc_EqualEqual_ObjectObject_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PCM_Game_C_ExecuteUbergraph_PCM_Game, K2Node_CustomEvent_PP) == 0x000070, "Member 'PCM_Game_C_ExecuteUbergraph_PCM_Game::K2Node_CustomEvent_PP' has a wrong offset!");
static_assert(offsetof(PCM_Game_C_ExecuteUbergraph_PCM_Game, CallFunc_GetPlayerController_ReturnValue_4) == 0x000078, "Member 'PCM_Game_C_ExecuteUbergraph_PCM_Game::CallFunc_GetPlayerController_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PCM_Game_C_ExecuteUbergraph_PCM_Game, CallFunc_GetOverlappingActors_OverlappingActors_1) == 0x000080, "Member 'PCM_Game_C_ExecuteUbergraph_PCM_Game::CallFunc_GetOverlappingActors_OverlappingActors_1' has a wrong offset!");
static_assert(offsetof(PCM_Game_C_ExecuteUbergraph_PCM_Game, CallFunc_Array_Length_ReturnValue_1) == 0x000090, "Member 'PCM_Game_C_ExecuteUbergraph_PCM_Game::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PCM_Game_C_ExecuteUbergraph_PCM_Game, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000094, "Member 'PCM_Game_C_ExecuteUbergraph_PCM_Game::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PCM_Game_C_ExecuteUbergraph_PCM_Game, CallFunc_EqualEqual_ObjectObject_ReturnValue_4) == 0x000095, "Member 'PCM_Game_C_ExecuteUbergraph_PCM_Game::CallFunc_EqualEqual_ObjectObject_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PCM_Game_C_ExecuteUbergraph_PCM_Game, CallFunc_BooleanOR_ReturnValue) == 0x000096, "Member 'PCM_Game_C_ExecuteUbergraph_PCM_Game::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(PCM_Game_C_ExecuteUbergraph_PCM_Game, K2Node_Event_DeltaSeconds) == 0x000098, "Member 'PCM_Game_C_ExecuteUbergraph_PCM_Game::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(PCM_Game_C_ExecuteUbergraph_PCM_Game, CallFunc_GetAllActorsOfClassWithTag_OutActors) == 0x0000A0, "Member 'PCM_Game_C_ExecuteUbergraph_PCM_Game::CallFunc_GetAllActorsOfClassWithTag_OutActors' has a wrong offset!");
static_assert(offsetof(PCM_Game_C_ExecuteUbergraph_PCM_Game, CallFunc_Array_Get_Item) == 0x0000B0, "Member 'PCM_Game_C_ExecuteUbergraph_PCM_Game::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PCM_Game_C_ExecuteUbergraph_PCM_Game, CallFunc_Array_IsEmpty_ReturnValue) == 0x0000B8, "Member 'PCM_Game_C_ExecuteUbergraph_PCM_Game::CallFunc_Array_IsEmpty_ReturnValue' has a wrong offset!");

// Function PCM_Game.PCM_Game_C.Make Lava PP Ref
// 0x0028 (0x0028 - 0x0000)
struct PCM_Game_C_Make_Lava_PP_Ref final
{
public:
	TArray<class APostProcessVolume*>             CallFunc_GetAllActorsOfClassWithTag_OutActors;     // 0x0000(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APostProcessVolume*                     CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PCM_Game_C_Make_Lava_PP_Ref) == 0x000008, "Wrong alignment on PCM_Game_C_Make_Lava_PP_Ref");
static_assert(sizeof(PCM_Game_C_Make_Lava_PP_Ref) == 0x000028, "Wrong size on PCM_Game_C_Make_Lava_PP_Ref");
static_assert(offsetof(PCM_Game_C_Make_Lava_PP_Ref, CallFunc_GetAllActorsOfClassWithTag_OutActors) == 0x000000, "Member 'PCM_Game_C_Make_Lava_PP_Ref::CallFunc_GetAllActorsOfClassWithTag_OutActors' has a wrong offset!");
static_assert(offsetof(PCM_Game_C_Make_Lava_PP_Ref, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'PCM_Game_C_Make_Lava_PP_Ref::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PCM_Game_C_Make_Lava_PP_Ref, CallFunc_Array_Get_Item) == 0x000018, "Member 'PCM_Game_C_Make_Lava_PP_Ref::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PCM_Game_C_Make_Lava_PP_Ref, CallFunc_Array_IsEmpty_ReturnValue) == 0x000020, "Member 'PCM_Game_C_Make_Lava_PP_Ref::CallFunc_Array_IsEmpty_ReturnValue' has a wrong offset!");

// Function PCM_Game.PCM_Game_C.MakeLavaRef
// 0x0028 (0x0028 - 0x0000)
struct PCM_Game_C_MakeLavaRef final
{
public:
	TArray<class ABP_Lava_C*>                     CallFunc_GetAllActorsOfClass_OutActors;            // 0x0000(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Lava_C*                             CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PCM_Game_C_MakeLavaRef) == 0x000008, "Wrong alignment on PCM_Game_C_MakeLavaRef");
static_assert(sizeof(PCM_Game_C_MakeLavaRef) == 0x000028, "Wrong size on PCM_Game_C_MakeLavaRef");
static_assert(offsetof(PCM_Game_C_MakeLavaRef, CallFunc_GetAllActorsOfClass_OutActors) == 0x000000, "Member 'PCM_Game_C_MakeLavaRef::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(PCM_Game_C_MakeLavaRef, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'PCM_Game_C_MakeLavaRef::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PCM_Game_C_MakeLavaRef, CallFunc_Array_Get_Item) == 0x000018, "Member 'PCM_Game_C_MakeLavaRef::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PCM_Game_C_MakeLavaRef, CallFunc_Array_IsEmpty_ReturnValue) == 0x000020, "Member 'PCM_Game_C_MakeLavaRef::CallFunc_Array_IsEmpty_ReturnValue' has a wrong offset!");

// Function PCM_Game.PCM_Game_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct PCM_Game_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PCM_Game_C_ReceiveTick) == 0x000004, "Wrong alignment on PCM_Game_C_ReceiveTick");
static_assert(sizeof(PCM_Game_C_ReceiveTick) == 0x000004, "Wrong size on PCM_Game_C_ReceiveTick");
static_assert(offsetof(PCM_Game_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'PCM_Game_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

