#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IGLE_Action_PlacePlacable

#include "Basic.hpp"

#include "IGLE_ActionBuffer_Base_classes.hpp"
#include "InGameLevelEditor_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass IGLE_Action_PlacePlacable.IGLE_Action_PlacePlacable_C
// 0x0108 (0x0140 - 0x0038)
class UIGLE_Action_PlacePlacable_C final : public UIGLE_ActionBuffer_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_IGLE_Action_PlacePlacable_C;        // 0x0038(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                 PlacedPlacable;                                    // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_48[0x8];                                       // 0x0048(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FIGLEPlacableSave                      PlacedPlacable_Save;                               // 0x0050(0x00D0)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class AIGLE_Pawn_EditorBase_C*                EditorPawn;                                        // 0x0120(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FIGLEActorReference                    PlacedPlacable_Ref;                                // 0x0128(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_IGLE_Action_PlacePlacable(int32 EntryPoint);
	void GetFriendlyActionName(class FString* OutName);
	void Initialize();
	void RedoAction();
	void UndoAction();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IGLE_Action_PlacePlacable_C">();
	}
	static class UIGLE_Action_PlacePlacable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIGLE_Action_PlacePlacable_C>();
	}
};
static_assert(alignof(UIGLE_Action_PlacePlacable_C) == 0x000010, "Wrong alignment on UIGLE_Action_PlacePlacable_C");
static_assert(sizeof(UIGLE_Action_PlacePlacable_C) == 0x000140, "Wrong size on UIGLE_Action_PlacePlacable_C");
static_assert(offsetof(UIGLE_Action_PlacePlacable_C, UberGraphFrame_IGLE_Action_PlacePlacable_C) == 0x000038, "Member 'UIGLE_Action_PlacePlacable_C::UberGraphFrame_IGLE_Action_PlacePlacable_C' has a wrong offset!");
static_assert(offsetof(UIGLE_Action_PlacePlacable_C, PlacedPlacable) == 0x000040, "Member 'UIGLE_Action_PlacePlacable_C::PlacedPlacable' has a wrong offset!");
static_assert(offsetof(UIGLE_Action_PlacePlacable_C, PlacedPlacable_Save) == 0x000050, "Member 'UIGLE_Action_PlacePlacable_C::PlacedPlacable_Save' has a wrong offset!");
static_assert(offsetof(UIGLE_Action_PlacePlacable_C, EditorPawn) == 0x000120, "Member 'UIGLE_Action_PlacePlacable_C::EditorPawn' has a wrong offset!");
static_assert(offsetof(UIGLE_Action_PlacePlacable_C, PlacedPlacable_Ref) == 0x000128, "Member 'UIGLE_Action_PlacePlacable_C::PlacedPlacable_Ref' has a wrong offset!");

}

