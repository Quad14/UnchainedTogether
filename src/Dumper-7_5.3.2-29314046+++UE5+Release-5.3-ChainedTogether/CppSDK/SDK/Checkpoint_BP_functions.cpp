#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Checkpoint_BP

#include "Basic.hpp"

#include "Checkpoint_BP_classes.hpp"
#include "Checkpoint_BP_parameters.hpp"


namespace SDK
{

// Function Checkpoint_BP.Checkpoint_BP_C.BndEvt__Checkpoint_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ACheckpoint_BP_C::BndEvt__Checkpoint_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Checkpoint_BP_C", "BndEvt__Checkpoint_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::Checkpoint_BP_C_BndEvt__Checkpoint_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Checkpoint_BP.Checkpoint_BP_C.CheckSaveCheckpoint
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_Checkpoint>            Array                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    Param_Saved                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACheckpoint_BP_C::CheckSaveCheckpoint(TArray<struct FS_Checkpoint>& Array, bool* Param_Saved)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Checkpoint_BP_C", "CheckSaveCheckpoint");

	Params::Checkpoint_BP_C_CheckSaveCheckpoint Parms{};

	Parms.Array = std::move(Array);

	UObject::ProcessEvent(Func, &Parms);

	Array = std::move(Parms.Array);

	if (Param_Saved != nullptr)
		*Param_Saved = Parms.Param_Saved;
}


// Function Checkpoint_BP.Checkpoint_BP_C.ExecuteUbergraph_Checkpoint_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACheckpoint_BP_C::ExecuteUbergraph_Checkpoint_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Checkpoint_BP_C", "ExecuteUbergraph_Checkpoint_BP");

	Params::Checkpoint_BP_C_ExecuteUbergraph_Checkpoint_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Checkpoint_BP.Checkpoint_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACheckpoint_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Checkpoint_BP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Checkpoint_BP.Checkpoint_BP_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ACheckpoint_BP_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Checkpoint_BP_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Checkpoint_BP.Checkpoint_BP_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ACheckpoint_BP_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Checkpoint_BP_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Checkpoint_BP.Checkpoint_BP_C.Unsave
// (BlueprintCallable, BlueprintEvent)

void ACheckpoint_BP_C::Unsave()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Checkpoint_BP_C", "Unsave");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Checkpoint_BP.Checkpoint_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACheckpoint_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Checkpoint_BP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

