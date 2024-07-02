#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ModelingComponents

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "ModelingComponents_structs.hpp"


namespace SDK::Params
{

// Function ModelingComponents.OctreeDynamicMeshComponent.SetDynamicMesh
// 0x0008 (0x0008 - 0x0000)
struct OctreeDynamicMeshComponent_SetDynamicMesh final
{
public:
	class UDynamicMesh*                           NewMesh;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(OctreeDynamicMeshComponent_SetDynamicMesh) == 0x000008, "Wrong alignment on OctreeDynamicMeshComponent_SetDynamicMesh");
static_assert(sizeof(OctreeDynamicMeshComponent_SetDynamicMesh) == 0x000008, "Wrong size on OctreeDynamicMeshComponent_SetDynamicMesh");
static_assert(offsetof(OctreeDynamicMeshComponent_SetDynamicMesh, NewMesh) == 0x000000, "Member 'OctreeDynamicMeshComponent_SetDynamicMesh::NewMesh' has a wrong offset!");

// Function ModelingComponents.PreviewGeometry.AddLineSet
// 0x0018 (0x0018 - 0x0000)
struct PreviewGeometry_AddLineSet final
{
public:
	class FString                                 LineSetIdentifier;                                 // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULineSetComponent*                      ReturnValue;                                       // 0x0010(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PreviewGeometry_AddLineSet) == 0x000008, "Wrong alignment on PreviewGeometry_AddLineSet");
static_assert(sizeof(PreviewGeometry_AddLineSet) == 0x000018, "Wrong size on PreviewGeometry_AddLineSet");
static_assert(offsetof(PreviewGeometry_AddLineSet, LineSetIdentifier) == 0x000000, "Member 'PreviewGeometry_AddLineSet::LineSetIdentifier' has a wrong offset!");
static_assert(offsetof(PreviewGeometry_AddLineSet, ReturnValue) == 0x000010, "Member 'PreviewGeometry_AddLineSet::ReturnValue' has a wrong offset!");

// Function ModelingComponents.PreviewGeometry.AddPointSet
// 0x0018 (0x0018 - 0x0000)
struct PreviewGeometry_AddPointSet final
{
public:
	class FString                                 PointSetIdentifier;                                // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPointSetComponent*                     ReturnValue;                                       // 0x0010(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PreviewGeometry_AddPointSet) == 0x000008, "Wrong alignment on PreviewGeometry_AddPointSet");
static_assert(sizeof(PreviewGeometry_AddPointSet) == 0x000018, "Wrong size on PreviewGeometry_AddPointSet");
static_assert(offsetof(PreviewGeometry_AddPointSet, PointSetIdentifier) == 0x000000, "Member 'PreviewGeometry_AddPointSet::PointSetIdentifier' has a wrong offset!");
static_assert(offsetof(PreviewGeometry_AddPointSet, ReturnValue) == 0x000010, "Member 'PreviewGeometry_AddPointSet::ReturnValue' has a wrong offset!");

// Function ModelingComponents.PreviewGeometry.AddTriangleSet
// 0x0018 (0x0018 - 0x0000)
struct PreviewGeometry_AddTriangleSet final
{
public:
	class FString                                 TriangleSetIdentifier;                             // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTriangleSetComponent*                  ReturnValue;                                       // 0x0010(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PreviewGeometry_AddTriangleSet) == 0x000008, "Wrong alignment on PreviewGeometry_AddTriangleSet");
static_assert(sizeof(PreviewGeometry_AddTriangleSet) == 0x000018, "Wrong size on PreviewGeometry_AddTriangleSet");
static_assert(offsetof(PreviewGeometry_AddTriangleSet, TriangleSetIdentifier) == 0x000000, "Member 'PreviewGeometry_AddTriangleSet::TriangleSetIdentifier' has a wrong offset!");
static_assert(offsetof(PreviewGeometry_AddTriangleSet, ReturnValue) == 0x000010, "Member 'PreviewGeometry_AddTriangleSet::ReturnValue' has a wrong offset!");

// Function ModelingComponents.PreviewGeometry.CreateInWorld
// 0x0070 (0x0070 - 0x0000)
struct PreviewGeometry_CreateInWorld final
{
public:
	class UWorld*                                 World;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1BB3[0x8];                                     // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             WithTransform;                                     // 0x0010(0x0060)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PreviewGeometry_CreateInWorld) == 0x000010, "Wrong alignment on PreviewGeometry_CreateInWorld");
static_assert(sizeof(PreviewGeometry_CreateInWorld) == 0x000070, "Wrong size on PreviewGeometry_CreateInWorld");
static_assert(offsetof(PreviewGeometry_CreateInWorld, World) == 0x000000, "Member 'PreviewGeometry_CreateInWorld::World' has a wrong offset!");
static_assert(offsetof(PreviewGeometry_CreateInWorld, WithTransform) == 0x000010, "Member 'PreviewGeometry_CreateInWorld::WithTransform' has a wrong offset!");

// Function ModelingComponents.PreviewGeometry.FindLineSet
// 0x0018 (0x0018 - 0x0000)
struct PreviewGeometry_FindLineSet final
{
public:
	class FString                                 LineSetIdentifier;                                 // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULineSetComponent*                      ReturnValue;                                       // 0x0010(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PreviewGeometry_FindLineSet) == 0x000008, "Wrong alignment on PreviewGeometry_FindLineSet");
static_assert(sizeof(PreviewGeometry_FindLineSet) == 0x000018, "Wrong size on PreviewGeometry_FindLineSet");
static_assert(offsetof(PreviewGeometry_FindLineSet, LineSetIdentifier) == 0x000000, "Member 'PreviewGeometry_FindLineSet::LineSetIdentifier' has a wrong offset!");
static_assert(offsetof(PreviewGeometry_FindLineSet, ReturnValue) == 0x000010, "Member 'PreviewGeometry_FindLineSet::ReturnValue' has a wrong offset!");

// Function ModelingComponents.PreviewGeometry.FindPointSet
// 0x0018 (0x0018 - 0x0000)
struct PreviewGeometry_FindPointSet final
{
public:
	class FString                                 PointSetIdentifier;                                // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPointSetComponent*                     ReturnValue;                                       // 0x0010(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PreviewGeometry_FindPointSet) == 0x000008, "Wrong alignment on PreviewGeometry_FindPointSet");
static_assert(sizeof(PreviewGeometry_FindPointSet) == 0x000018, "Wrong size on PreviewGeometry_FindPointSet");
static_assert(offsetof(PreviewGeometry_FindPointSet, PointSetIdentifier) == 0x000000, "Member 'PreviewGeometry_FindPointSet::PointSetIdentifier' has a wrong offset!");
static_assert(offsetof(PreviewGeometry_FindPointSet, ReturnValue) == 0x000010, "Member 'PreviewGeometry_FindPointSet::ReturnValue' has a wrong offset!");

// Function ModelingComponents.PreviewGeometry.FindTriangleSet
// 0x0018 (0x0018 - 0x0000)
struct PreviewGeometry_FindTriangleSet final
{
public:
	class FString                                 TriangleSetIdentifier;                             // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTriangleSetComponent*                  ReturnValue;                                       // 0x0010(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PreviewGeometry_FindTriangleSet) == 0x000008, "Wrong alignment on PreviewGeometry_FindTriangleSet");
static_assert(sizeof(PreviewGeometry_FindTriangleSet) == 0x000018, "Wrong size on PreviewGeometry_FindTriangleSet");
static_assert(offsetof(PreviewGeometry_FindTriangleSet, TriangleSetIdentifier) == 0x000000, "Member 'PreviewGeometry_FindTriangleSet::TriangleSetIdentifier' has a wrong offset!");
static_assert(offsetof(PreviewGeometry_FindTriangleSet, ReturnValue) == 0x000010, "Member 'PreviewGeometry_FindTriangleSet::ReturnValue' has a wrong offset!");

// Function ModelingComponents.PreviewGeometry.RemoveAllLineSets
// 0x0001 (0x0001 - 0x0000)
struct PreviewGeometry_RemoveAllLineSets final
{
public:
	bool                                          bDestroy;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PreviewGeometry_RemoveAllLineSets) == 0x000001, "Wrong alignment on PreviewGeometry_RemoveAllLineSets");
static_assert(sizeof(PreviewGeometry_RemoveAllLineSets) == 0x000001, "Wrong size on PreviewGeometry_RemoveAllLineSets");
static_assert(offsetof(PreviewGeometry_RemoveAllLineSets, bDestroy) == 0x000000, "Member 'PreviewGeometry_RemoveAllLineSets::bDestroy' has a wrong offset!");

// Function ModelingComponents.PreviewGeometry.RemoveAllPointSets
// 0x0001 (0x0001 - 0x0000)
struct PreviewGeometry_RemoveAllPointSets final
{
public:
	bool                                          bDestroy;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PreviewGeometry_RemoveAllPointSets) == 0x000001, "Wrong alignment on PreviewGeometry_RemoveAllPointSets");
static_assert(sizeof(PreviewGeometry_RemoveAllPointSets) == 0x000001, "Wrong size on PreviewGeometry_RemoveAllPointSets");
static_assert(offsetof(PreviewGeometry_RemoveAllPointSets, bDestroy) == 0x000000, "Member 'PreviewGeometry_RemoveAllPointSets::bDestroy' has a wrong offset!");

// Function ModelingComponents.PreviewGeometry.RemoveLineSet
// 0x0018 (0x0018 - 0x0000)
struct PreviewGeometry_RemoveLineSet final
{
public:
	class FString                                 LineSetIdentifier;                                 // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDestroy;                                          // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0011(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1BB4[0x6];                                     // 0x0012(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(PreviewGeometry_RemoveLineSet) == 0x000008, "Wrong alignment on PreviewGeometry_RemoveLineSet");
static_assert(sizeof(PreviewGeometry_RemoveLineSet) == 0x000018, "Wrong size on PreviewGeometry_RemoveLineSet");
static_assert(offsetof(PreviewGeometry_RemoveLineSet, LineSetIdentifier) == 0x000000, "Member 'PreviewGeometry_RemoveLineSet::LineSetIdentifier' has a wrong offset!");
static_assert(offsetof(PreviewGeometry_RemoveLineSet, bDestroy) == 0x000010, "Member 'PreviewGeometry_RemoveLineSet::bDestroy' has a wrong offset!");
static_assert(offsetof(PreviewGeometry_RemoveLineSet, ReturnValue) == 0x000011, "Member 'PreviewGeometry_RemoveLineSet::ReturnValue' has a wrong offset!");

// Function ModelingComponents.PreviewGeometry.RemovePointSet
// 0x0018 (0x0018 - 0x0000)
struct PreviewGeometry_RemovePointSet final
{
public:
	class FString                                 PointSetIdentifier;                                // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDestroy;                                          // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0011(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1BB5[0x6];                                     // 0x0012(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(PreviewGeometry_RemovePointSet) == 0x000008, "Wrong alignment on PreviewGeometry_RemovePointSet");
static_assert(sizeof(PreviewGeometry_RemovePointSet) == 0x000018, "Wrong size on PreviewGeometry_RemovePointSet");
static_assert(offsetof(PreviewGeometry_RemovePointSet, PointSetIdentifier) == 0x000000, "Member 'PreviewGeometry_RemovePointSet::PointSetIdentifier' has a wrong offset!");
static_assert(offsetof(PreviewGeometry_RemovePointSet, bDestroy) == 0x000010, "Member 'PreviewGeometry_RemovePointSet::bDestroy' has a wrong offset!");
static_assert(offsetof(PreviewGeometry_RemovePointSet, ReturnValue) == 0x000011, "Member 'PreviewGeometry_RemovePointSet::ReturnValue' has a wrong offset!");

// Function ModelingComponents.PreviewGeometry.SetAllLineSetsMaterial
// 0x0008 (0x0008 - 0x0000)
struct PreviewGeometry_SetAllLineSetsMaterial final
{
public:
	class UMaterialInterface*                     Material;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PreviewGeometry_SetAllLineSetsMaterial) == 0x000008, "Wrong alignment on PreviewGeometry_SetAllLineSetsMaterial");
static_assert(sizeof(PreviewGeometry_SetAllLineSetsMaterial) == 0x000008, "Wrong size on PreviewGeometry_SetAllLineSetsMaterial");
static_assert(offsetof(PreviewGeometry_SetAllLineSetsMaterial, Material) == 0x000000, "Member 'PreviewGeometry_SetAllLineSetsMaterial::Material' has a wrong offset!");

// Function ModelingComponents.PreviewGeometry.SetAllPointSetsMaterial
// 0x0008 (0x0008 - 0x0000)
struct PreviewGeometry_SetAllPointSetsMaterial final
{
public:
	class UMaterialInterface*                     Material;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PreviewGeometry_SetAllPointSetsMaterial) == 0x000008, "Wrong alignment on PreviewGeometry_SetAllPointSetsMaterial");
static_assert(sizeof(PreviewGeometry_SetAllPointSetsMaterial) == 0x000008, "Wrong size on PreviewGeometry_SetAllPointSetsMaterial");
static_assert(offsetof(PreviewGeometry_SetAllPointSetsMaterial, Material) == 0x000000, "Member 'PreviewGeometry_SetAllPointSetsMaterial::Material' has a wrong offset!");

// Function ModelingComponents.PreviewGeometry.SetLineSetMaterial
// 0x0020 (0x0020 - 0x0000)
struct PreviewGeometry_SetLineSetMaterial final
{
public:
	class FString                                 LineSetIdentifier;                                 // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                     NewMaterial;                                       // 0x0010(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1BB6[0x7];                                     // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(PreviewGeometry_SetLineSetMaterial) == 0x000008, "Wrong alignment on PreviewGeometry_SetLineSetMaterial");
static_assert(sizeof(PreviewGeometry_SetLineSetMaterial) == 0x000020, "Wrong size on PreviewGeometry_SetLineSetMaterial");
static_assert(offsetof(PreviewGeometry_SetLineSetMaterial, LineSetIdentifier) == 0x000000, "Member 'PreviewGeometry_SetLineSetMaterial::LineSetIdentifier' has a wrong offset!");
static_assert(offsetof(PreviewGeometry_SetLineSetMaterial, NewMaterial) == 0x000010, "Member 'PreviewGeometry_SetLineSetMaterial::NewMaterial' has a wrong offset!");
static_assert(offsetof(PreviewGeometry_SetLineSetMaterial, ReturnValue) == 0x000018, "Member 'PreviewGeometry_SetLineSetMaterial::ReturnValue' has a wrong offset!");

// Function ModelingComponents.PreviewGeometry.SetLineSetVisibility
// 0x0018 (0x0018 - 0x0000)
struct PreviewGeometry_SetLineSetVisibility final
{
public:
	class FString                                 LineSetIdentifier;                                 // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bVisible;                                          // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0011(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1BB7[0x6];                                     // 0x0012(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(PreviewGeometry_SetLineSetVisibility) == 0x000008, "Wrong alignment on PreviewGeometry_SetLineSetVisibility");
static_assert(sizeof(PreviewGeometry_SetLineSetVisibility) == 0x000018, "Wrong size on PreviewGeometry_SetLineSetVisibility");
static_assert(offsetof(PreviewGeometry_SetLineSetVisibility, LineSetIdentifier) == 0x000000, "Member 'PreviewGeometry_SetLineSetVisibility::LineSetIdentifier' has a wrong offset!");
static_assert(offsetof(PreviewGeometry_SetLineSetVisibility, bVisible) == 0x000010, "Member 'PreviewGeometry_SetLineSetVisibility::bVisible' has a wrong offset!");
static_assert(offsetof(PreviewGeometry_SetLineSetVisibility, ReturnValue) == 0x000011, "Member 'PreviewGeometry_SetLineSetVisibility::ReturnValue' has a wrong offset!");

// Function ModelingComponents.PreviewGeometry.SetPointSetMaterial
// 0x0020 (0x0020 - 0x0000)
struct PreviewGeometry_SetPointSetMaterial final
{
public:
	class FString                                 PointSetIdentifier;                                // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                     NewMaterial;                                       // 0x0010(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1BB8[0x7];                                     // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(PreviewGeometry_SetPointSetMaterial) == 0x000008, "Wrong alignment on PreviewGeometry_SetPointSetMaterial");
static_assert(sizeof(PreviewGeometry_SetPointSetMaterial) == 0x000020, "Wrong size on PreviewGeometry_SetPointSetMaterial");
static_assert(offsetof(PreviewGeometry_SetPointSetMaterial, PointSetIdentifier) == 0x000000, "Member 'PreviewGeometry_SetPointSetMaterial::PointSetIdentifier' has a wrong offset!");
static_assert(offsetof(PreviewGeometry_SetPointSetMaterial, NewMaterial) == 0x000010, "Member 'PreviewGeometry_SetPointSetMaterial::NewMaterial' has a wrong offset!");
static_assert(offsetof(PreviewGeometry_SetPointSetMaterial, ReturnValue) == 0x000018, "Member 'PreviewGeometry_SetPointSetMaterial::ReturnValue' has a wrong offset!");

// Function ModelingComponents.PreviewGeometry.SetPointSetVisibility
// 0x0018 (0x0018 - 0x0000)
struct PreviewGeometry_SetPointSetVisibility final
{
public:
	class FString                                 PointSetIdentifier;                                // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bVisible;                                          // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0011(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1BB9[0x6];                                     // 0x0012(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(PreviewGeometry_SetPointSetVisibility) == 0x000008, "Wrong alignment on PreviewGeometry_SetPointSetVisibility");
static_assert(sizeof(PreviewGeometry_SetPointSetVisibility) == 0x000018, "Wrong size on PreviewGeometry_SetPointSetVisibility");
static_assert(offsetof(PreviewGeometry_SetPointSetVisibility, PointSetIdentifier) == 0x000000, "Member 'PreviewGeometry_SetPointSetVisibility::PointSetIdentifier' has a wrong offset!");
static_assert(offsetof(PreviewGeometry_SetPointSetVisibility, bVisible) == 0x000010, "Member 'PreviewGeometry_SetPointSetVisibility::bVisible' has a wrong offset!");
static_assert(offsetof(PreviewGeometry_SetPointSetVisibility, ReturnValue) == 0x000011, "Member 'PreviewGeometry_SetPointSetVisibility::ReturnValue' has a wrong offset!");

// Function ModelingComponents.PreviewGeometry.GetActor
// 0x0008 (0x0008 - 0x0000)
struct PreviewGeometry_GetActor final
{
public:
	class APreviewGeometryActor*                  ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PreviewGeometry_GetActor) == 0x000008, "Wrong alignment on PreviewGeometry_GetActor");
static_assert(sizeof(PreviewGeometry_GetActor) == 0x000008, "Wrong size on PreviewGeometry_GetActor");
static_assert(offsetof(PreviewGeometry_GetActor, ReturnValue) == 0x000000, "Member 'PreviewGeometry_GetActor::ReturnValue' has a wrong offset!");

// Function ModelingComponents.ModelingObjectsCreationAPI.CreateMaterialObject
// 0x0038 (0x0038 - 0x0000)
struct ModelingObjectsCreationAPI_CreateMaterialObject final
{
public:
	struct FCreateMaterialObjectParams            CreateMaterialParams;                              // 0x0000(0x0028)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FCreateMaterialObjectResult            ReturnValue;                                       // 0x0028(0x0010)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(ModelingObjectsCreationAPI_CreateMaterialObject) == 0x000008, "Wrong alignment on ModelingObjectsCreationAPI_CreateMaterialObject");
static_assert(sizeof(ModelingObjectsCreationAPI_CreateMaterialObject) == 0x000038, "Wrong size on ModelingObjectsCreationAPI_CreateMaterialObject");
static_assert(offsetof(ModelingObjectsCreationAPI_CreateMaterialObject, CreateMaterialParams) == 0x000000, "Member 'ModelingObjectsCreationAPI_CreateMaterialObject::CreateMaterialParams' has a wrong offset!");
static_assert(offsetof(ModelingObjectsCreationAPI_CreateMaterialObject, ReturnValue) == 0x000028, "Member 'ModelingObjectsCreationAPI_CreateMaterialObject::ReturnValue' has a wrong offset!");

// Function ModelingComponents.ModelingObjectsCreationAPI.CreateMeshObject
// 0x0690 (0x0690 - 0x0000)
struct ModelingObjectsCreationAPI_CreateMeshObject final
{
public:
	struct FCreateMeshObjectParams                CreateMeshParams;                                  // 0x0000(0x0670)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FCreateMeshObjectResult                ReturnValue;                                       // 0x0670(0x0020)(Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
static_assert(alignof(ModelingObjectsCreationAPI_CreateMeshObject) == 0x000010, "Wrong alignment on ModelingObjectsCreationAPI_CreateMeshObject");
static_assert(sizeof(ModelingObjectsCreationAPI_CreateMeshObject) == 0x000690, "Wrong size on ModelingObjectsCreationAPI_CreateMeshObject");
static_assert(offsetof(ModelingObjectsCreationAPI_CreateMeshObject, CreateMeshParams) == 0x000000, "Member 'ModelingObjectsCreationAPI_CreateMeshObject::CreateMeshParams' has a wrong offset!");
static_assert(offsetof(ModelingObjectsCreationAPI_CreateMeshObject, ReturnValue) == 0x000670, "Member 'ModelingObjectsCreationAPI_CreateMeshObject::ReturnValue' has a wrong offset!");

// Function ModelingComponents.ModelingObjectsCreationAPI.CreateNewActor
// 0x00A0 (0x00A0 - 0x0000)
struct ModelingObjectsCreationAPI_CreateNewActor final
{
public:
	struct FCreateActorParams                     CreateActorParams;                                 // 0x0000(0x0090)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FCreateActorResult                     ReturnValue;                                       // 0x0090(0x0010)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(ModelingObjectsCreationAPI_CreateNewActor) == 0x000010, "Wrong alignment on ModelingObjectsCreationAPI_CreateNewActor");
static_assert(sizeof(ModelingObjectsCreationAPI_CreateNewActor) == 0x0000A0, "Wrong size on ModelingObjectsCreationAPI_CreateNewActor");
static_assert(offsetof(ModelingObjectsCreationAPI_CreateNewActor, CreateActorParams) == 0x000000, "Member 'ModelingObjectsCreationAPI_CreateNewActor::CreateActorParams' has a wrong offset!");
static_assert(offsetof(ModelingObjectsCreationAPI_CreateNewActor, ReturnValue) == 0x000090, "Member 'ModelingObjectsCreationAPI_CreateNewActor::ReturnValue' has a wrong offset!");

// Function ModelingComponents.ModelingObjectsCreationAPI.CreateTextureObject
// 0x0040 (0x0040 - 0x0000)
struct ModelingObjectsCreationAPI_CreateTextureObject final
{
public:
	struct FCreateTextureObjectParams             CreateTexParams;                                   // 0x0000(0x0030)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FCreateTextureObjectResult             ReturnValue;                                       // 0x0030(0x0010)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(ModelingObjectsCreationAPI_CreateTextureObject) == 0x000008, "Wrong alignment on ModelingObjectsCreationAPI_CreateTextureObject");
static_assert(sizeof(ModelingObjectsCreationAPI_CreateTextureObject) == 0x000040, "Wrong size on ModelingObjectsCreationAPI_CreateTextureObject");
static_assert(offsetof(ModelingObjectsCreationAPI_CreateTextureObject, CreateTexParams) == 0x000000, "Member 'ModelingObjectsCreationAPI_CreateTextureObject::CreateTexParams' has a wrong offset!");
static_assert(offsetof(ModelingObjectsCreationAPI_CreateTextureObject, ReturnValue) == 0x000030, "Member 'ModelingObjectsCreationAPI_CreateTextureObject::ReturnValue' has a wrong offset!");

// Function ModelingComponents.CreateMeshObjectTypeProperties.GetOutputTypeNamesFunc
// 0x0010 (0x0010 - 0x0000)
struct CreateMeshObjectTypeProperties_GetOutputTypeNamesFunc final
{
public:
	TArray<class FString>                         ReturnValue;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(CreateMeshObjectTypeProperties_GetOutputTypeNamesFunc) == 0x000008, "Wrong alignment on CreateMeshObjectTypeProperties_GetOutputTypeNamesFunc");
static_assert(sizeof(CreateMeshObjectTypeProperties_GetOutputTypeNamesFunc) == 0x000010, "Wrong size on CreateMeshObjectTypeProperties_GetOutputTypeNamesFunc");
static_assert(offsetof(CreateMeshObjectTypeProperties_GetOutputTypeNamesFunc, ReturnValue) == 0x000000, "Member 'CreateMeshObjectTypeProperties_GetOutputTypeNamesFunc::ReturnValue' has a wrong offset!");

// Function ModelingComponents.CreateMeshObjectTypeProperties.GetCurrentCreateMeshType
// 0x0001 (0x0001 - 0x0000)
struct CreateMeshObjectTypeProperties_GetCurrentCreateMeshType final
{
public:
	ECreateObjectTypeHint                         ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CreateMeshObjectTypeProperties_GetCurrentCreateMeshType) == 0x000001, "Wrong alignment on CreateMeshObjectTypeProperties_GetCurrentCreateMeshType");
static_assert(sizeof(CreateMeshObjectTypeProperties_GetCurrentCreateMeshType) == 0x000001, "Wrong size on CreateMeshObjectTypeProperties_GetCurrentCreateMeshType");
static_assert(offsetof(CreateMeshObjectTypeProperties_GetCurrentCreateMeshType, ReturnValue) == 0x000000, "Member 'CreateMeshObjectTypeProperties_GetCurrentCreateMeshType::ReturnValue' has a wrong offset!");

// Function ModelingComponents.CreateMeshObjectTypeProperties.ShouldShowPropertySet
// 0x0001 (0x0001 - 0x0000)
struct CreateMeshObjectTypeProperties_ShouldShowPropertySet final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CreateMeshObjectTypeProperties_ShouldShowPropertySet) == 0x000001, "Wrong alignment on CreateMeshObjectTypeProperties_ShouldShowPropertySet");
static_assert(sizeof(CreateMeshObjectTypeProperties_ShouldShowPropertySet) == 0x000001, "Wrong size on CreateMeshObjectTypeProperties_ShouldShowPropertySet");
static_assert(offsetof(CreateMeshObjectTypeProperties_ShouldShowPropertySet, ReturnValue) == 0x000000, "Member 'CreateMeshObjectTypeProperties_ShouldShowPropertySet::ReturnValue' has a wrong offset!");

// Function ModelingComponents.PolygroupLayersProperties.GetGroupLayersFunc
// 0x0010 (0x0010 - 0x0000)
struct PolygroupLayersProperties_GetGroupLayersFunc final
{
public:
	TArray<class FString>                         ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(PolygroupLayersProperties_GetGroupLayersFunc) == 0x000008, "Wrong alignment on PolygroupLayersProperties_GetGroupLayersFunc");
static_assert(sizeof(PolygroupLayersProperties_GetGroupLayersFunc) == 0x000010, "Wrong size on PolygroupLayersProperties_GetGroupLayersFunc");
static_assert(offsetof(PolygroupLayersProperties_GetGroupLayersFunc, ReturnValue) == 0x000000, "Member 'PolygroupLayersProperties_GetGroupLayersFunc::ReturnValue' has a wrong offset!");

// Function ModelingComponents.WeightMapSetProperties.GetWeightMapsFunc
// 0x0010 (0x0010 - 0x0000)
struct WeightMapSetProperties_GetWeightMapsFunc final
{
public:
	TArray<class FString>                         ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(WeightMapSetProperties_GetWeightMapsFunc) == 0x000008, "Wrong alignment on WeightMapSetProperties_GetWeightMapsFunc");
static_assert(sizeof(WeightMapSetProperties_GetWeightMapsFunc) == 0x000010, "Wrong size on WeightMapSetProperties_GetWeightMapsFunc");
static_assert(offsetof(WeightMapSetProperties_GetWeightMapsFunc, ReturnValue) == 0x000000, "Member 'WeightMapSetProperties_GetWeightMapsFunc::ReturnValue' has a wrong offset!");

}

