#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Functions_Collection

#include "Basic.hpp"

#include "Functions_Collection_classes.hpp"
#include "Functions_Collection_parameters.hpp"


namespace SDK
{

// Function Functions_Collection.Functions_Collection_C.Calculate Actors Meshes Ratio
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AStaticMeshActor*                 Source_Mesh                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AStaticMeshActor*                 Target_Mesh                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  Ratio_X                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Ratio_Y                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Ratio_Z                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStaticMeshActor*                 Source_Mesh_0                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AStaticMeshActor*                 Target_Mesh_0                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UFunctions_Collection_C::Calculate_Actors_Meshes_Ratio(class AStaticMeshActor* Source_Mesh, class AStaticMeshActor* Target_Mesh, class UObject* __WorldContext, double* Ratio_X, double* Ratio_Y, double* Ratio_Z, class AStaticMeshActor** Source_Mesh_0, class AStaticMeshActor** Target_Mesh_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Functions_Collection_C", "Calculate Actors Meshes Ratio");

	Params::Functions_Collection_C_Calculate_Actors_Meshes_Ratio Parms{};

	Parms.Source_Mesh = Source_Mesh;
	Parms.Target_Mesh = Target_Mesh;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Ratio_X != nullptr)
		*Ratio_X = Parms.Ratio_X;

	if (Ratio_Y != nullptr)
		*Ratio_Y = Parms.Ratio_Y;

	if (Ratio_Z != nullptr)
		*Ratio_Z = Parms.Ratio_Z;

	if (Source_Mesh_0 != nullptr)
		*Source_Mesh_0 = Parms.Source_Mesh_0;

	if (Target_Mesh_0 != nullptr)
		*Target_Mesh_0 = Parms.Target_Mesh_0;
}


// Function Functions_Collection.Functions_Collection_C.Calculate Meshes Ratio
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*                      Source_Mesh                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                      Target_Mesh                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  Ratio_X                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Ratio_Y                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Ratio_Z                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                      Source_Mesh_0                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                      Target_Mesh_0                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UFunctions_Collection_C::Calculate_Meshes_Ratio(class UStaticMesh* Source_Mesh, class UStaticMesh* Target_Mesh, class UObject* __WorldContext, double* Ratio_X, double* Ratio_Y, double* Ratio_Z, class UStaticMesh** Source_Mesh_0, class UStaticMesh** Target_Mesh_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Functions_Collection_C", "Calculate Meshes Ratio");

	Params::Functions_Collection_C_Calculate_Meshes_Ratio Parms{};

	Parms.Source_Mesh = Source_Mesh;
	Parms.Target_Mesh = Target_Mesh;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Ratio_X != nullptr)
		*Ratio_X = Parms.Ratio_X;

	if (Ratio_Y != nullptr)
		*Ratio_Y = Parms.Ratio_Y;

	if (Ratio_Z != nullptr)
		*Ratio_Z = Parms.Ratio_Z;

	if (Source_Mesh_0 != nullptr)
		*Source_Mesh_0 = Parms.Source_Mesh_0;

	if (Target_Mesh_0 != nullptr)
		*Target_Mesh_0 = Parms.Target_Mesh_0;
}


// Function Functions_Collection.Functions_Collection_C.Calculate static Mesh Actor Size
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AStaticMeshActor*                 Static_Mesh                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  Mesh_X_Size                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Mesh_Y_Size                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Mesh_Z_Size                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStaticMeshActor*                 Static_Mesh_0                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UFunctions_Collection_C::Calculate_static_Mesh_Actor_Size(class AStaticMeshActor* Static_Mesh, class UObject* __WorldContext, double* Mesh_X_Size, double* Mesh_Y_Size, double* Mesh_Z_Size, class AStaticMeshActor** Static_Mesh_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Functions_Collection_C", "Calculate static Mesh Actor Size");

	Params::Functions_Collection_C_Calculate_static_Mesh_Actor_Size Parms{};

	Parms.Static_Mesh = Static_Mesh;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Mesh_X_Size != nullptr)
		*Mesh_X_Size = Parms.Mesh_X_Size;

	if (Mesh_Y_Size != nullptr)
		*Mesh_Y_Size = Parms.Mesh_Y_Size;

	if (Mesh_Z_Size != nullptr)
		*Mesh_Z_Size = Parms.Mesh_Z_Size;

	if (Static_Mesh_0 != nullptr)
		*Static_Mesh_0 = Parms.Static_Mesh_0;
}


// Function Functions_Collection.Functions_Collection_C.Calculate Static Mesh Size
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*                      Static_Meshe                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  Mesh_X_Size                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Mesh_Y_Size                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Mesh_Z_Size                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                      Static_Mesh                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UFunctions_Collection_C::Calculate_Static_Mesh_Size(class UStaticMesh* Static_Meshe, class UObject* __WorldContext, double* Mesh_X_Size, double* Mesh_Y_Size, double* Mesh_Z_Size, class UStaticMesh** Static_Mesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Functions_Collection_C", "Calculate Static Mesh Size");

	Params::Functions_Collection_C_Calculate_Static_Mesh_Size Parms{};

	Parms.Static_Meshe = Static_Meshe;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Mesh_X_Size != nullptr)
		*Mesh_X_Size = Parms.Mesh_X_Size;

	if (Mesh_Y_Size != nullptr)
		*Mesh_Y_Size = Parms.Mesh_Y_Size;

	if (Mesh_Z_Size != nullptr)
		*Mesh_Z_Size = Parms.Mesh_Z_Size;

	if (Static_Mesh != nullptr)
		*Static_Mesh = Parms.Static_Mesh;
}

}

