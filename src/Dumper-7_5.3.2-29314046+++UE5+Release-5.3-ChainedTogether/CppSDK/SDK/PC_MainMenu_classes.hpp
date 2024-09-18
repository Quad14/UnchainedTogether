#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PC_MainMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PC_WithSettings_classes.hpp"
#include "E_ChoosenChar_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass PC_MainMenu.PC_MainMenu_C
// 0x0018 (0x0888 - 0x0870)
class APC_MainMenu_C final : public APC_WithSettings_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_PC_MainMenu_C;                      // 0x0870(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FString                                 MainMenuAction;                                    // 0x0878(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void BPI_RequestCharacter(E_ChoosenChar Character_0);
	void ExecuteUbergraph_PC_MainMenu(int32 EntryPoint);
	void GetAudioDevices(TArray<class FString>* Devices);
	void GetControlledActor(class AActor** Actor);
	void PlayAudioComponent(class UAudioComponent* AudioComponent);
	void PlaySound(class USoundWave* Sound);
	void RefreshTestControlChar();
	void RequestCharacterSpawnSRV();
	void Rescue_Srv_(class UPrimitiveComponent* RescueComponent, bool ExitingCar);
	void SendMessageClient(const class FString& Message);
	void SetAudioDevice(const class FString& Device);
	void SetControlledPawn(class AActor* Actor);
	void SetLocalMpChosenChar(E_ChoosenChar Char);
	void ShowTchatUI(bool RefreshTchat);
	void SpawnCharacter_Srv_();
	void Trigger_Moving_Object(class ABP_MovingObject_C* MovingObject);
	void UpdateCanEscape(bool CanEscape_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PC_MainMenu_C">();
	}
	static class APC_MainMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APC_MainMenu_C>();
	}
};
static_assert(alignof(APC_MainMenu_C) == 0x000008, "Wrong alignment on APC_MainMenu_C");
static_assert(sizeof(APC_MainMenu_C) == 0x000888, "Wrong size on APC_MainMenu_C");
static_assert(offsetof(APC_MainMenu_C, UberGraphFrame_PC_MainMenu_C) == 0x000870, "Member 'APC_MainMenu_C::UberGraphFrame_PC_MainMenu_C' has a wrong offset!");
static_assert(offsetof(APC_MainMenu_C, MainMenuAction) == 0x000878, "Member 'APC_MainMenu_C::MainMenuAction' has a wrong offset!");

}

