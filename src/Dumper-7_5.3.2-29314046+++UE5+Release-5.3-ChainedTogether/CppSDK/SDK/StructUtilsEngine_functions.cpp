#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StructUtilsEngine

#include "Basic.hpp"

#include "StructUtilsEngine_classes.hpp"
#include "StructUtilsEngine_parameters.hpp"


namespace SDK
{

// Function StructUtilsEngine.StructUtilsFunctionLibrary.EqualEqual_InstancedStruct
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInstancedStruct                 A                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FInstancedStruct                 B                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UStructUtilsFunctionLibrary::EqualEqual_InstancedStruct(const struct FInstancedStruct& A, const struct FInstancedStruct& B)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StructUtilsFunctionLibrary", "EqualEqual_InstancedStruct");

	Params::StructUtilsFunctionLibrary_EqualEqual_InstancedStruct Parms{};

	Parms.A = std::move(A);
	Parms.B = std::move(B);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function StructUtilsEngine.StructUtilsFunctionLibrary.GetInstancedStructValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// EStructUtilsResult                      ExecResult                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInstancedStruct                 InstancedStruct                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                                   Value                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStructUtilsFunctionLibrary::GetInstancedStructValue(EStructUtilsResult* ExecResult, const struct FInstancedStruct& InstancedStruct, int32* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StructUtilsFunctionLibrary", "GetInstancedStructValue");

	Params::StructUtilsFunctionLibrary_GetInstancedStructValue Parms{};

	Parms.InstancedStruct = std::move(InstancedStruct);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (ExecResult != nullptr)
		*ExecResult = Parms.ExecResult;

	if (Value != nullptr)
		*Value = Parms.Value;
}


// Function StructUtilsEngine.StructUtilsFunctionLibrary.IsInstancedStructValid
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FInstancedStruct                 InstancedStruct                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// EStructUtilsResult                      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EStructUtilsResult UStructUtilsFunctionLibrary::IsInstancedStructValid(const struct FInstancedStruct& InstancedStruct)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StructUtilsFunctionLibrary", "IsInstancedStructValid");

	Params::StructUtilsFunctionLibrary_IsInstancedStructValid Parms{};

	Parms.InstancedStruct = std::move(InstancedStruct);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function StructUtilsEngine.StructUtilsFunctionLibrary.IsValid_InstancedStruct
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInstancedStruct                 InstancedStruct                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UStructUtilsFunctionLibrary::IsValid_InstancedStruct(const struct FInstancedStruct& InstancedStruct)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StructUtilsFunctionLibrary", "IsValid_InstancedStruct");

	Params::StructUtilsFunctionLibrary_IsValid_InstancedStruct Parms{};

	Parms.InstancedStruct = std::move(InstancedStruct);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function StructUtilsEngine.StructUtilsFunctionLibrary.MakeInstancedStruct
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                                   Value                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInstancedStruct                 ReturnValue                                            (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FInstancedStruct UStructUtilsFunctionLibrary::MakeInstancedStruct(const int32& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StructUtilsFunctionLibrary", "MakeInstancedStruct");

	Params::StructUtilsFunctionLibrary_MakeInstancedStruct Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function StructUtilsEngine.StructUtilsFunctionLibrary.NotEqual_InstancedStruct
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInstancedStruct                 A                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FInstancedStruct                 B                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UStructUtilsFunctionLibrary::NotEqual_InstancedStruct(const struct FInstancedStruct& A, const struct FInstancedStruct& B)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StructUtilsFunctionLibrary", "NotEqual_InstancedStruct");

	Params::StructUtilsFunctionLibrary_NotEqual_InstancedStruct Parms{};

	Parms.A = std::move(A);
	Parms.B = std::move(B);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function StructUtilsEngine.StructUtilsFunctionLibrary.Reset
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FInstancedStruct                 InstancedStruct                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UScriptStruct*                    StructType                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStructUtilsFunctionLibrary::Reset(struct FInstancedStruct& InstancedStruct, const class UScriptStruct* StructType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StructUtilsFunctionLibrary", "Reset");

	Params::StructUtilsFunctionLibrary_Reset Parms{};

	Parms.InstancedStruct = std::move(InstancedStruct);
	Parms.StructType = StructType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InstancedStruct = std::move(Parms.InstancedStruct);
}


// Function StructUtilsEngine.StructUtilsFunctionLibrary.SetInstancedStructValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FInstancedStruct                 InstancedStruct                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                                   Value                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStructUtilsFunctionLibrary::SetInstancedStructValue(struct FInstancedStruct& InstancedStruct, const int32& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StructUtilsFunctionLibrary", "SetInstancedStructValue");

	Params::StructUtilsFunctionLibrary_SetInstancedStructValue Parms{};

	Parms.InstancedStruct = std::move(InstancedStruct);
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InstancedStruct = std::move(Parms.InstancedStruct);
}

}

