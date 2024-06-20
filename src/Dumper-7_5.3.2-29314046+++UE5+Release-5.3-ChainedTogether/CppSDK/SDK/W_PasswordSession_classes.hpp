#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PasswordSession

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SteamCorePro_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_PasswordSession.W_PasswordSession_C
// 0x0178 (0x0438 - 0x02C0)
class UW_PasswordSession_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       NewAnimation;                                      // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEditableTextBox*                       EditableTextBox_101;                               // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_165;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            W_Button;                                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            W_Button_1;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSteamSessionResult                    Session;                                           // 0x02F0(0x0130)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FString                                 CurrentPassword;                                   // 0x0420(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UW_SessionButton_C*                     SessionButton;                                     // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__W_PasswordSession_W_Button_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__W_PasswordSession_W_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_W_PasswordSession(int32 EntryPoint);
	void JoinSession();
	void OnFailure_A3EA653E4CED4437FD71FDB9F764A87A();
	void OnSuccess_A3EA653E4CED4437FD71FDB9F764A87A();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_PasswordSession_C">();
	}
	static class UW_PasswordSession_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_PasswordSession_C>();
	}
};
static_assert(alignof(UW_PasswordSession_C) == 0x000008, "Wrong alignment on UW_PasswordSession_C");
static_assert(sizeof(UW_PasswordSession_C) == 0x000438, "Wrong size on UW_PasswordSession_C");
static_assert(offsetof(UW_PasswordSession_C, UberGraphFrame) == 0x0002C0, "Member 'UW_PasswordSession_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_PasswordSession_C, NewAnimation) == 0x0002C8, "Member 'UW_PasswordSession_C::NewAnimation' has a wrong offset!");
static_assert(offsetof(UW_PasswordSession_C, EditableTextBox_101) == 0x0002D0, "Member 'UW_PasswordSession_C::EditableTextBox_101' has a wrong offset!");
static_assert(offsetof(UW_PasswordSession_C, Image_165) == 0x0002D8, "Member 'UW_PasswordSession_C::Image_165' has a wrong offset!");
static_assert(offsetof(UW_PasswordSession_C, W_Button) == 0x0002E0, "Member 'UW_PasswordSession_C::W_Button' has a wrong offset!");
static_assert(offsetof(UW_PasswordSession_C, W_Button_1) == 0x0002E8, "Member 'UW_PasswordSession_C::W_Button_1' has a wrong offset!");
static_assert(offsetof(UW_PasswordSession_C, Session) == 0x0002F0, "Member 'UW_PasswordSession_C::Session' has a wrong offset!");
static_assert(offsetof(UW_PasswordSession_C, CurrentPassword) == 0x000420, "Member 'UW_PasswordSession_C::CurrentPassword' has a wrong offset!");
static_assert(offsetof(UW_PasswordSession_C, SessionButton) == 0x000430, "Member 'UW_PasswordSession_C::SessionButton' has a wrong offset!");

}

