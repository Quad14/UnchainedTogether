#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_GameInstanceWithSave

#include "Basic.hpp"

#include "BPI_GameInstanceWithSave_classes.hpp"
#include "BPI_GameInstanceWithSave_parameters.hpp"


namespace SDK
{

// Function BPI_GameInstanceWithSave.BPI_GameInstanceWithSave_C.BackupSaveGameObject
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_GameInstanceWithSave_C::BackupSaveGameObject()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GameInstanceWithSave_C", "BackupSaveGameObject");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_GameInstanceWithSave.BPI_GameInstanceWithSave_C.CancelSettings
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_GameInstanceWithSave_C::CancelSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GameInstanceWithSave_C", "CancelSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_GameInstanceWithSave.BPI_GameInstanceWithSave_C.EraseCheckpoint
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_GameInstanceWithSave_C::EraseCheckpoint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GameInstanceWithSave_C", "EraseCheckpoint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_GameInstanceWithSave.BPI_GameInstanceWithSave_C.GetCameraSettings
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InvertX                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InvertY                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  X_Sensitivity                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Y_Sensitivity                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_GameInstanceWithSave_C::GetCameraSettings(bool* InvertX, bool* InvertY, double* X_Sensitivity, double* Y_Sensitivity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GameInstanceWithSave_C", "GetCameraSettings");

	Params::BPI_GameInstanceWithSave_C_GetCameraSettings Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (InvertX != nullptr)
		*InvertX = Parms.InvertX;

	if (InvertY != nullptr)
		*InvertY = Parms.InvertY;

	if (X_Sensitivity != nullptr)
		*X_Sensitivity = Parms.X_Sensitivity;

	if (Y_Sensitivity != nullptr)
		*Y_Sensitivity = Parms.Y_Sensitivity;
}


// Function BPI_GameInstanceWithSave.BPI_GameInstanceWithSave_C.GetCheckpoints
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_Checkpoint>            Checkpoints                                            (Parm, OutParm)

void IBPI_GameInstanceWithSave_C::GetCheckpoints(TArray<struct FS_Checkpoint>* Checkpoints)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GameInstanceWithSave_C", "GetCheckpoints");

	Params::BPI_GameInstanceWithSave_C_GetCheckpoints Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Checkpoints != nullptr)
		*Checkpoints = std::move(Parms.Checkpoints);
}


// Function BPI_GameInstanceWithSave.BPI_GameInstanceWithSave_C.GetPushToTalk
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    PTT                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_GameInstanceWithSave_C::GetPushToTalk(bool* PTT)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GameInstanceWithSave_C", "GetPushToTalk");

	Params::BPI_GameInstanceWithSave_C_GetPushToTalk Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PTT != nullptr)
		*PTT = Parms.PTT;
}


// Function BPI_GameInstanceWithSave.BPI_GameInstanceWithSave_C.GetSaveGameObject
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UV_SaveGame_C*                    SaveGame_0                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_GameInstanceWithSave_C::GetSaveGameObject(class UV_SaveGame_C** SaveGame_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GameInstanceWithSave_C", "GetSaveGameObject");

	Params::BPI_GameInstanceWithSave_C_GetSaveGameObject Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SaveGame_0 != nullptr)
		*SaveGame_0 = Parms.SaveGame_0;
}


// Function BPI_GameInstanceWithSave.BPI_GameInstanceWithSave_C.GetShowDebug
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Debug                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_GameInstanceWithSave_C::GetShowDebug(bool* Debug)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GameInstanceWithSave_C", "GetShowDebug");

	Params::BPI_GameInstanceWithSave_C_GetShowDebug Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Debug != nullptr)
		*Debug = Parms.Debug;
}


// Function BPI_GameInstanceWithSave.BPI_GameInstanceWithSave_C.GetTestControl
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    TestControl                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_GameInstanceWithSave_C::GetTestControl(bool* TestControl)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GameInstanceWithSave_C", "GetTestControl");

	Params::BPI_GameInstanceWithSave_C_GetTestControl Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TestControl != nullptr)
		*TestControl = Parms.TestControl;
}


// Function BPI_GameInstanceWithSave.BPI_GameInstanceWithSave_C.GetTestPlayers
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Count                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_GameInstanceWithSave_C::GetTestPlayers(int32* Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GameInstanceWithSave_C", "GetTestPlayers");

	Params::BPI_GameInstanceWithSave_C_GetTestPlayers Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Count != nullptr)
		*Count = Parms.Count;
}


// Function BPI_GameInstanceWithSave.BPI_GameInstanceWithSave_C.ResetResolution
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_GameInstanceWithSave_C::ResetResolution()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GameInstanceWithSave_C", "ResetResolution");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_GameInstanceWithSave.BPI_GameInstanceWithSave_C.ResetSettings
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_GameInstanceWithSave_C::ResetSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GameInstanceWithSave_C", "ResetSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_GameInstanceWithSave.BPI_GameInstanceWithSave_C.SaveAfterRetrigerableDelay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Delay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_GameInstanceWithSave_C::SaveAfterRetrigerableDelay(double Delay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GameInstanceWithSave_C", "SaveAfterRetrigerableDelay");

	Params::BPI_GameInstanceWithSave_C_SaveAfterRetrigerableDelay Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_GameInstanceWithSave.BPI_GameInstanceWithSave_C.SaveCheckpoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Checkpoint                    Checkpoints                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void IBPI_GameInstanceWithSave_C::SaveCheckpoint(const struct FS_Checkpoint& Checkpoints)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GameInstanceWithSave_C", "SaveCheckpoint");

	Params::BPI_GameInstanceWithSave_C_SaveCheckpoint Parms{};

	Parms.Checkpoints = std::move(Checkpoints);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_GameInstanceWithSave.BPI_GameInstanceWithSave_C.SaveGame
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_GameInstanceWithSave_C::SaveGame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GameInstanceWithSave_C", "SaveGame");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_GameInstanceWithSave.BPI_GameInstanceWithSave_C.SetCameraInvertX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InvertX                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_GameInstanceWithSave_C::SetCameraInvertX(bool InvertX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GameInstanceWithSave_C", "SetCameraInvertX");

	Params::BPI_GameInstanceWithSave_C_SetCameraInvertX Parms{};

	Parms.InvertX = InvertX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_GameInstanceWithSave.BPI_GameInstanceWithSave_C.SetCameraInvertY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InvertY                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_GameInstanceWithSave_C::SetCameraInvertY(bool InvertY)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GameInstanceWithSave_C", "SetCameraInvertY");

	Params::BPI_GameInstanceWithSave_C_SetCameraInvertY Parms{};

	Parms.InvertY = InvertY;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_GameInstanceWithSave.BPI_GameInstanceWithSave_C.SetInstructionsAlreadyShown
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_GameInstanceWithSave_C::SetInstructionsAlreadyShown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GameInstanceWithSave_C", "SetInstructionsAlreadyShown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_GameInstanceWithSave.BPI_GameInstanceWithSave_C.UpdateBoolSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Identifier                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    Bool                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_ApplySettingType                      Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_GameInstanceWithSave_C::UpdateBoolSetting(const class FString& Identifier, bool Bool, E_ApplySettingType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GameInstanceWithSave_C", "UpdateBoolSetting");

	Params::BPI_GameInstanceWithSave_C_UpdateBoolSetting Parms{};

	Parms.Identifier = std::move(Identifier);
	Parms.Bool = Bool;
	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_GameInstanceWithSave.BPI_GameInstanceWithSave_C.UpdateFloatSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Setting                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// E_ApplySettingType                      Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_GameInstanceWithSave_C::UpdateFloatSetting(double Value, const class FString& Setting, E_ApplySettingType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GameInstanceWithSave_C", "UpdateFloatSetting");

	Params::BPI_GameInstanceWithSave_C_UpdateFloatSetting Parms{};

	Parms.Value = Value;
	Parms.Setting = std::move(Setting);
	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_GameInstanceWithSave.BPI_GameInstanceWithSave_C.UpdateSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void IBPI_GameInstanceWithSave_C::UpdateSetting(const class FString& ID, const class FString& NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GameInstanceWithSave_C", "UpdateSetting");

	Params::BPI_GameInstanceWithSave_C_UpdateSetting Parms{};

	Parms.ID = std::move(ID);
	Parms.NewValue = std::move(NewValue);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_GameInstanceWithSave.BPI_GameInstanceWithSave_C.UpdateStringSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Identifier                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           NewString                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// E_ApplySettingType                      Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_GameInstanceWithSave_C::UpdateStringSetting(const class FString& Identifier, const class FString& NewString, E_ApplySettingType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GameInstanceWithSave_C", "UpdateStringSetting");

	Params::BPI_GameInstanceWithSave_C_UpdateStringSetting Parms{};

	Parms.Identifier = std::move(Identifier);
	Parms.NewString = std::move(NewString);
	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}

}

