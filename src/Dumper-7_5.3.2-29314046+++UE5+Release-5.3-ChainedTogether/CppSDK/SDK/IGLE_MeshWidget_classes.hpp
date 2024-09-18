#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IGLE_MeshWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "IGLE_W_PropertyValueWidgetBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IGLE_MeshWidget.IGLE_MeshWidget_C
// 0x0020 (0x02E8 - 0x02C8)
class UIGLE_MeshWidget_C final : public UIGLE_W_PropertyValueWidgetBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button;                                            // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_0;                                          // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_92;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__IGLE_MeshWidget_Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__IGLE_MeshWidget_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_IGLE_MeshWidget(int32 EntryPoint);
	class FText GetName(const class FString& SourceString);
	void SetMesh(TSoftObjectPtr<class UStaticMesh> Mesh, const class FString& Name_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IGLE_MeshWidget_C">();
	}
	static class UIGLE_MeshWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIGLE_MeshWidget_C>();
	}
};
static_assert(alignof(UIGLE_MeshWidget_C) == 0x000008, "Wrong alignment on UIGLE_MeshWidget_C");
static_assert(sizeof(UIGLE_MeshWidget_C) == 0x0002E8, "Wrong size on UIGLE_MeshWidget_C");
static_assert(offsetof(UIGLE_MeshWidget_C, UberGraphFrame) == 0x0002C8, "Member 'UIGLE_MeshWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UIGLE_MeshWidget_C, Button) == 0x0002D0, "Member 'UIGLE_MeshWidget_C::Button' has a wrong offset!");
static_assert(offsetof(UIGLE_MeshWidget_C, Button_0) == 0x0002D8, "Member 'UIGLE_MeshWidget_C::Button_0' has a wrong offset!");
static_assert(offsetof(UIGLE_MeshWidget_C, TextBlock_92) == 0x0002E0, "Member 'UIGLE_MeshWidget_C::TextBlock_92' has a wrong offset!");

}

