#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SettingsMain

#include "Basic.hpp"

#include "S_Checkpoint_structs.hpp"
#include "E_SettingCategory_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "E_SettingSubCategory_structs.hpp"
#include "E_Gamemodes_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_SettingsMain.W_SettingsMain_C
// 0x01D0 (0x0490 - 0x02C0)
class UW_SettingsMain_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Entry;                                             // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                            ApplyButton;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           AudioVerticalBox;                                  // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            BackButton;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           BindBox;                                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Tab_C*                               BindsTab;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Tab_C*                               ControlsTab;                                       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ControlsVerticalBox;                               // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Tab_C*                               DevTab;                                            // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Slider_C*                            DialogsVolume;                                     // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Slider_C*                            EffectsVolume;                                     // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Slider_C*                            Gamma;                                             // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            HighestUnlockedPoint_Button;                       // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox;                                     // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_0;                                   // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_1;                                   // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_2;                                   // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ComboBox_C*                          InvertX;                                           // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ComboBox_C*                          InvertY;                                           // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         LoadCheckpointBox;                                 // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            LoadCheckpointButton;                              // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            LoadGame_Button;                                   // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Slider_C*                            MasterVolume;                                      // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ComboBox_C*                          Maxfps;                                            // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ComboBox_C*                          MotionBlur;                                        // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Slider_C*                            MusicVolume;                                       // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            NearestSafeLocation_Button;                        // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            QuitButton_1;                                      // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            RelaunchButton_1;                                  // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            ResetButton_1;                                     // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ComboBox_C*                          Resolution;                                        // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Slider_C*                            Resolutionscale;                                   // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Savesautomatic;                                    // 0x03E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SettingSwitcher;                                   // 0x03E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ComboBox_C*                          ShadowQuality;                                     // 0x03F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Slider_C*                            Sharpen;                                           // 0x03F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Tab_C*                               SoundTab;                                          // 0x0400(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         TabsBox;                                           // 0x0408(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_2;                                     // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Tab_C*                               VideoTab;                                          // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VideoVerticalBox;                                  // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ComboBox_C*                          Vsync;                                             // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ComboBox_C*                          W_ComboBox;                                        // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ComboBox_C*                          Windowedmode;                                      // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Slider_C*                            XSensitivity;                                      // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Slider_C*                            YSensitivity;                                      // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	E_SettingCategory                             CurrentSettingCategory;                            // 0x0450(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInMainMenu;                                      // 0x0451(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_3329[0x6];                                     // 0x0452(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_Checkpoint                          Checkpoint_Save_Infos;                             // 0x0458(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 SelectedCheckpoint;                                // 0x0470(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UEnhancedInputUserSettings*             UserInputSettings;                                 // 0x0480(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_Lava_C*                             Lava_Ref;                                          // 0x0488(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__W_Settings_SoundButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__W_Settings_W_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__W_Settings_W_Buttons_2_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__W_SettingsMain_BindsTab_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
	void BndEvt__W_SettingsMain_ControlsTab_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
	void BndEvt__W_SettingsMain_DialogsVolume_K2Node_ComponentBoundEvent_25_OnValueChanged__DelegateSignature(double Value, const class FString& Setting);
	void BndEvt__W_SettingsMain_EffectsVolume_K2Node_ComponentBoundEvent_24_OnValueChanged__DelegateSignature(double Value, const class FString& Setting);
	void BndEvt__W_SettingsMain_Gamma_K2Node_ComponentBoundEvent_18_OnValueChanged__DelegateSignature(double Value, const class FString& Setting);
	void BndEvt__W_SettingsMain_HighestUnlockedPoint_Button_K2Node_ComponentBoundEvent_30_OnClicked__DelegateSignature();
	void BndEvt__W_SettingsMain_InvertX_K2Node_ComponentBoundEvent_26_OnComboSettingChange__DelegateSignature(const class FString& NewSelection, ESelectInfo SelectType);
	void BndEvt__W_SettingsMain_InvertY_K2Node_ComponentBoundEvent_27_OnComboSettingChange__DelegateSignature(const class FString& NewSelection, ESelectInfo SelectType);
	void BndEvt__W_SettingsMain_LoadCheckpointButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature();
	void BndEvt__W_SettingsMain_LoadGame_Button_K2Node_ComponentBoundEvent_31_OnClicked__DelegateSignature();
	void BndEvt__W_SettingsMain_MasterVolume_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature(double Value, const class FString& Setting);
	void BndEvt__W_SettingsMain_MAXFPS_K2Node_ComponentBoundEvent_22_OnComboSettingChange__DelegateSignature(const class FString& NewSelection, ESelectInfo SelectType);
	void BndEvt__W_SettingsMain_MotionBlur_K2Node_ComponentBoundEvent_5_OnComboSettingChange__DelegateSignature(const class FString& NewSelection, ESelectInfo SelectType);
	void BndEvt__W_SettingsMain_MusicVolume_K2Node_ComponentBoundEvent_23_OnValueChanged__DelegateSignature(double Value, const class FString& Setting);
	void BndEvt__W_SettingsMain_QuitButton_1_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature();
	void BndEvt__W_SettingsMain_RelaunchButton_1_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature();
	void BndEvt__W_SettingsMain_ResetButton_1_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
	void BndEvt__W_SettingsMain_Resolution_K2Node_ComponentBoundEvent_9_OnComboSettingChange__DelegateSignature(const class FString& NewSelection, ESelectInfo SelectType);
	void BndEvt__W_SettingsMain_ResolutionScale_K2Node_ComponentBoundEvent_11_OnValueChanged__DelegateSignature(double Value, const class FString& Setting);
	void BndEvt__W_SettingsMain_ShadowQuality_K2Node_ComponentBoundEvent_14_OnComboSettingChange__DelegateSignature(const class FString& NewSelection, ESelectInfo SelectType);
	void BndEvt__W_SettingsMain_Sharpen_K2Node_ComponentBoundEvent_20_OnValueChanged__DelegateSignature(double Value, const class FString& Setting);
	void BndEvt__W_SettingsMain_TeleportButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature();
	void BndEvt__W_SettingsMain_VSync_K2Node_ComponentBoundEvent_21_OnComboSettingChange__DelegateSignature(const class FString& NewSelection, ESelectInfo SelectType);
	void BndEvt__W_SettingsMain_W_Buttons_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void BndEvt__W_SettingsMain_W_ComboBox_K2Node_ComponentBoundEvent_15_OnComboSettingChange__DelegateSignature(const class FString& NewSelection, ESelectInfo SelectType);
	void BndEvt__W_SettingsMain_WindowedMode_K2Node_ComponentBoundEvent_10_OnComboSettingChange__DelegateSignature(const class FString& NewSelection, ESelectInfo SelectType);
	void BndEvt__W_SettingsMain_XSensitivity_K2Node_ComponentBoundEvent_28_OnValueChanged__DelegateSignature(double Value, const class FString& Setting);
	void BndEvt__W_SettingsMain_YSensitivity_K2Node_ComponentBoundEvent_29_OnValueChanged__DelegateSignature(double Value, const class FString& Setting);
	void CheckCheckpointOption(TArray<struct FS_Checkpoint>& Array, const class FString& Option, bool* Saved, struct FS_Checkpoint* SaveInfos);
	void Construct();
	void ExecuteUbergraph_W_SettingsMain(int32 EntryPoint);
	class UWidget* Get_HighestUnlockedPoint_Button_ToolTipWidget();
	class UWidget* Get_LoadCheckpointButton_ToolTipWidget();
	class FText Get_LoadGame_Button_ToolTipText();
	class UWidget* Get_LoadGame_Button_ToolTipWidget();
	class UWidget* Get_NearestSafeLocation_Button_ToolTipWidget();
	void GetCheckpointByName(const class FString& Param_Name, class ACheckpoint_BP_C** Checkpoint, bool* Found);
	bool GetNearestRescuePoint(bool Lava, class ABP_RescuePoint_C** Out);
	void GetSettingsTabs(TArray<class UW_Tab_C*>* Array);
	void InitRelaunchButtons();
	void OnComboSettingChange(const class FString& NewSelection, const class FString& Identifier, const class FText& SettingName);
	void OnSliderSettingChange(double NewValue, const class FString& Identifier, const class FText& SettingName);
	void RefreshAudioSettings();
	void RefreshKeyBinding();
	void RefreshSettings();
	void RefreshTabSelection(const class FString& TabCategory, class UUserWidget* SelectedTab);
	void RefreshTabsParent();
	void Rescue();
	void UpdateLoadCheckpointVisibility();
	void UpdateResolution(const class FString& Param_Resolution);
	void UpdateShowDebug(const class FString& Selection);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_SettingsMain_C">();
	}
	static class UW_SettingsMain_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_SettingsMain_C>();
	}
};
static_assert(alignof(UW_SettingsMain_C) == 0x000008, "Wrong alignment on UW_SettingsMain_C");
static_assert(sizeof(UW_SettingsMain_C) == 0x000490, "Wrong size on UW_SettingsMain_C");
static_assert(offsetof(UW_SettingsMain_C, UberGraphFrame) == 0x0002C0, "Member 'UW_SettingsMain_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, Entry) == 0x0002C8, "Member 'UW_SettingsMain_C::Entry' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, ApplyButton) == 0x0002D0, "Member 'UW_SettingsMain_C::ApplyButton' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, AudioVerticalBox) == 0x0002D8, "Member 'UW_SettingsMain_C::AudioVerticalBox' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, BackButton) == 0x0002E0, "Member 'UW_SettingsMain_C::BackButton' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, BindBox) == 0x0002E8, "Member 'UW_SettingsMain_C::BindBox' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, BindsTab) == 0x0002F0, "Member 'UW_SettingsMain_C::BindsTab' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, ControlsTab) == 0x0002F8, "Member 'UW_SettingsMain_C::ControlsTab' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, ControlsVerticalBox) == 0x000300, "Member 'UW_SettingsMain_C::ControlsVerticalBox' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, DevTab) == 0x000308, "Member 'UW_SettingsMain_C::DevTab' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, DialogsVolume) == 0x000310, "Member 'UW_SettingsMain_C::DialogsVolume' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, EffectsVolume) == 0x000318, "Member 'UW_SettingsMain_C::EffectsVolume' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, Gamma) == 0x000320, "Member 'UW_SettingsMain_C::Gamma' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, HighestUnlockedPoint_Button) == 0x000328, "Member 'UW_SettingsMain_C::HighestUnlockedPoint_Button' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, HorizontalBox) == 0x000330, "Member 'UW_SettingsMain_C::HorizontalBox' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, HorizontalBox_0) == 0x000338, "Member 'UW_SettingsMain_C::HorizontalBox_0' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, HorizontalBox_1) == 0x000340, "Member 'UW_SettingsMain_C::HorizontalBox_1' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, HorizontalBox_2) == 0x000348, "Member 'UW_SettingsMain_C::HorizontalBox_2' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, Image) == 0x000350, "Member 'UW_SettingsMain_C::Image' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, Image_1) == 0x000358, "Member 'UW_SettingsMain_C::Image_1' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, Image_2) == 0x000360, "Member 'UW_SettingsMain_C::Image_2' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, InvertX) == 0x000368, "Member 'UW_SettingsMain_C::InvertX' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, InvertY) == 0x000370, "Member 'UW_SettingsMain_C::InvertY' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, LoadCheckpointBox) == 0x000378, "Member 'UW_SettingsMain_C::LoadCheckpointBox' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, LoadCheckpointButton) == 0x000380, "Member 'UW_SettingsMain_C::LoadCheckpointButton' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, LoadGame_Button) == 0x000388, "Member 'UW_SettingsMain_C::LoadGame_Button' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, MasterVolume) == 0x000390, "Member 'UW_SettingsMain_C::MasterVolume' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, Maxfps) == 0x000398, "Member 'UW_SettingsMain_C::Maxfps' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, MotionBlur) == 0x0003A0, "Member 'UW_SettingsMain_C::MotionBlur' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, MusicVolume) == 0x0003A8, "Member 'UW_SettingsMain_C::MusicVolume' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, NearestSafeLocation_Button) == 0x0003B0, "Member 'UW_SettingsMain_C::NearestSafeLocation_Button' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, QuitButton_1) == 0x0003B8, "Member 'UW_SettingsMain_C::QuitButton_1' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, RelaunchButton_1) == 0x0003C0, "Member 'UW_SettingsMain_C::RelaunchButton_1' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, ResetButton_1) == 0x0003C8, "Member 'UW_SettingsMain_C::ResetButton_1' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, Resolution) == 0x0003D0, "Member 'UW_SettingsMain_C::Resolution' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, Resolutionscale) == 0x0003D8, "Member 'UW_SettingsMain_C::Resolutionscale' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, Savesautomatic) == 0x0003E0, "Member 'UW_SettingsMain_C::Savesautomatic' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, SettingSwitcher) == 0x0003E8, "Member 'UW_SettingsMain_C::SettingSwitcher' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, ShadowQuality) == 0x0003F0, "Member 'UW_SettingsMain_C::ShadowQuality' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, Sharpen) == 0x0003F8, "Member 'UW_SettingsMain_C::Sharpen' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, SoundTab) == 0x000400, "Member 'UW_SettingsMain_C::SoundTab' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, TabsBox) == 0x000408, "Member 'UW_SettingsMain_C::TabsBox' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, VerticalBox_2) == 0x000410, "Member 'UW_SettingsMain_C::VerticalBox_2' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, VideoTab) == 0x000418, "Member 'UW_SettingsMain_C::VideoTab' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, VideoVerticalBox) == 0x000420, "Member 'UW_SettingsMain_C::VideoVerticalBox' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, Vsync) == 0x000428, "Member 'UW_SettingsMain_C::Vsync' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, W_ComboBox) == 0x000430, "Member 'UW_SettingsMain_C::W_ComboBox' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, Windowedmode) == 0x000438, "Member 'UW_SettingsMain_C::Windowedmode' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, XSensitivity) == 0x000440, "Member 'UW_SettingsMain_C::XSensitivity' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, YSensitivity) == 0x000448, "Member 'UW_SettingsMain_C::YSensitivity' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, CurrentSettingCategory) == 0x000450, "Member 'UW_SettingsMain_C::CurrentSettingCategory' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, IsInMainMenu) == 0x000451, "Member 'UW_SettingsMain_C::IsInMainMenu' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, Checkpoint_Save_Infos) == 0x000458, "Member 'UW_SettingsMain_C::Checkpoint_Save_Infos' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, SelectedCheckpoint) == 0x000470, "Member 'UW_SettingsMain_C::SelectedCheckpoint' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, UserInputSettings) == 0x000480, "Member 'UW_SettingsMain_C::UserInputSettings' has a wrong offset!");
static_assert(offsetof(UW_SettingsMain_C, Lava_Ref) == 0x000488, "Member 'UW_SettingsMain_C::Lava_Ref' has a wrong offset!");

}

