#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_JoinSessionMenu

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "SteamCorePro_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_JoinSessionMenu.W_JoinSessionMenu_C
// 0x00B8 (0x0378 - 0x02C0)
class UW_JoinSessionMenu_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       NewAnimation;                                      // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                            BackButton;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           FriendBox;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ComboBox_C*                          ModeComboBox;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       NameFilterTextBox;                                 // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NotFoundText_1;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ComboBox_C*                          PublicComboBox;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            RefreshButton;                                     // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SearchSessionsText;                                // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           SessionsBox;                                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_535;                                     // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          CanSearch;                                         // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_332C[0x7];                                     // 0x0321(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 PublicOrPrivate;                                   // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 Mode;                                              // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         FriendIndex;                                       // 0x0348(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_332D[0x4];                                     // 0x034C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSteamSessionResult>            Sessions;                                          // 0x0350(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 PlayerName;                                        // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         FriendCount;                                       // 0x0370(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddOtherSessions();
	void BndEvt__W_JoinSessionMenu_BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__W_JoinSessionMenu_PublicComboBox_1_K2Node_ComponentBoundEvent_3_OnComboSettingChange__DelegateSignature(const class FString& NewSelection, ESelectInfo SelectType);
	void BndEvt__W_JoinSessionMenu_PublicComboBox_K2Node_ComponentBoundEvent_2_OnComboSettingChange__DelegateSignature(const class FString& NewSelection, ESelectInfo SelectType);
	void BndEvt__W_JoinSessionMenu_RefreshButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_W_JoinSessionMenu(int32 EntryPoint);
	void FilterResults(TArray<struct FSteamSessionResult>& Array, TArray<struct FSteamSessionResult>* OutResults);
	void FriendSession();
	TMap<class FString, struct FSteamSessionSearchSetting> GetFriendSearchFilters(const class FString& FriendName, bool SearchFriend);
	TMap<class FString, struct FSteamSessionSearchSetting> GetSearchFilters(const class FString& Chainedsessionname);
	bool IsFilled(class UEditableTextBox* Self2);
	void OnCallback_B5D226D24CB75FB809C5A3A5AA545D81(const TArray<struct FSteamSessionResult>& Results);
	void OnCallback_D727BDAF4FAB43F507DD30A14A3E42D7(const TArray<struct FSteamSessionResult>& Results);
	void RelaunchFriendSessionSearch();
	void SearchSessions();
	void ShowJoiningText(bool Show);
	void SomethingWrittenInTextField(class UEditableTextBox* Self2, bool* SomethingWritten);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_JoinSessionMenu_C">();
	}
	static class UW_JoinSessionMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_JoinSessionMenu_C>();
	}
};
static_assert(alignof(UW_JoinSessionMenu_C) == 0x000008, "Wrong alignment on UW_JoinSessionMenu_C");
static_assert(sizeof(UW_JoinSessionMenu_C) == 0x000378, "Wrong size on UW_JoinSessionMenu_C");
static_assert(offsetof(UW_JoinSessionMenu_C, UberGraphFrame) == 0x0002C0, "Member 'UW_JoinSessionMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_JoinSessionMenu_C, NewAnimation) == 0x0002C8, "Member 'UW_JoinSessionMenu_C::NewAnimation' has a wrong offset!");
static_assert(offsetof(UW_JoinSessionMenu_C, BackButton) == 0x0002D0, "Member 'UW_JoinSessionMenu_C::BackButton' has a wrong offset!");
static_assert(offsetof(UW_JoinSessionMenu_C, FriendBox) == 0x0002D8, "Member 'UW_JoinSessionMenu_C::FriendBox' has a wrong offset!");
static_assert(offsetof(UW_JoinSessionMenu_C, ModeComboBox) == 0x0002E0, "Member 'UW_JoinSessionMenu_C::ModeComboBox' has a wrong offset!");
static_assert(offsetof(UW_JoinSessionMenu_C, NameFilterTextBox) == 0x0002E8, "Member 'UW_JoinSessionMenu_C::NameFilterTextBox' has a wrong offset!");
static_assert(offsetof(UW_JoinSessionMenu_C, NotFoundText_1) == 0x0002F0, "Member 'UW_JoinSessionMenu_C::NotFoundText_1' has a wrong offset!");
static_assert(offsetof(UW_JoinSessionMenu_C, PublicComboBox) == 0x0002F8, "Member 'UW_JoinSessionMenu_C::PublicComboBox' has a wrong offset!");
static_assert(offsetof(UW_JoinSessionMenu_C, RefreshButton) == 0x000300, "Member 'UW_JoinSessionMenu_C::RefreshButton' has a wrong offset!");
static_assert(offsetof(UW_JoinSessionMenu_C, SearchSessionsText) == 0x000308, "Member 'UW_JoinSessionMenu_C::SearchSessionsText' has a wrong offset!");
static_assert(offsetof(UW_JoinSessionMenu_C, SessionsBox) == 0x000310, "Member 'UW_JoinSessionMenu_C::SessionsBox' has a wrong offset!");
static_assert(offsetof(UW_JoinSessionMenu_C, TextBlock_535) == 0x000318, "Member 'UW_JoinSessionMenu_C::TextBlock_535' has a wrong offset!");
static_assert(offsetof(UW_JoinSessionMenu_C, CanSearch) == 0x000320, "Member 'UW_JoinSessionMenu_C::CanSearch' has a wrong offset!");
static_assert(offsetof(UW_JoinSessionMenu_C, PublicOrPrivate) == 0x000328, "Member 'UW_JoinSessionMenu_C::PublicOrPrivate' has a wrong offset!");
static_assert(offsetof(UW_JoinSessionMenu_C, Mode) == 0x000338, "Member 'UW_JoinSessionMenu_C::Mode' has a wrong offset!");
static_assert(offsetof(UW_JoinSessionMenu_C, FriendIndex) == 0x000348, "Member 'UW_JoinSessionMenu_C::FriendIndex' has a wrong offset!");
static_assert(offsetof(UW_JoinSessionMenu_C, Sessions) == 0x000350, "Member 'UW_JoinSessionMenu_C::Sessions' has a wrong offset!");
static_assert(offsetof(UW_JoinSessionMenu_C, PlayerName) == 0x000360, "Member 'UW_JoinSessionMenu_C::PlayerName' has a wrong offset!");
static_assert(offsetof(UW_JoinSessionMenu_C, FriendCount) == 0x000370, "Member 'UW_JoinSessionMenu_C::FriendCount' has a wrong offset!");

}

