#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IGLE_A_RotationGizmo

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "IGLE_E_GizmoSpace_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass IGLE_A_RotationGizmo.IGLE_A_RotationGizmo_C
// 0x0128 (0x03C0 - 0x0298)
class AIGLE_A_RotationGizmo_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   RotationZ;                                         // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   RotationY;                                         // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   RotationX;                                         // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MatRotationX;                                      // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           RotationXColor;                                    // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MatRotationY;                                      // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MatRotationZ;                                      // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           RotationYColor;                                    // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           RotationZColor;                                    // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PreUseWorldMousePlanePosition;                     // 0x0308(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIGLE_A_Gizmo_C*                        Gizmo;                                             // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                CurrentWorldMousePlanePosition;                    // 0x0328(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PreUsePlaneNormal;                                 // 0x0340(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxCursorDistanceFromGizmoMultiplier;              // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                  DeltaRotationQuat;                                 // 0x0360(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LastWorldMousePlanePosition;                       // 0x0380(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RotatingMouseX;                                    // 0x0398(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_399[0x7];                                      // 0x0399(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Mouse_X_Multiplier;                                // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Mouse_Y_Multiplier;                                // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DeltaX;                                            // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DeltaY;                                            // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_IGLE_A_RotationGizmo(int32 EntryPoint);
	void GenerateGizmo(class AIGLE_A_Gizmo_C* GizmoOuter);
	void GenerateRotationGizmo();
	void OrientRotationRings(const struct FRotator& WorldRotation);
	void RotationSnapCompleted_(const struct FQuat& CurrentDeltaQuat, double AngleSnap, bool* Result);
	struct FRotator SnapAngle(double Delta, double Multiplier, double IncrementedDelta);
	void SnapDeltaQuat(const struct FQuat& DeltaQuat, double SnapAngle_0, struct FQuat* Result_Quat);
	void TickGizmo();
	void UpdateGizmoSpace(EIGLE_E_GizmoSpace New_Gizmo_Space);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IGLE_A_RotationGizmo_C">();
	}
	static class AIGLE_A_RotationGizmo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AIGLE_A_RotationGizmo_C>();
	}
};
static_assert(alignof(AIGLE_A_RotationGizmo_C) == 0x000010, "Wrong alignment on AIGLE_A_RotationGizmo_C");
static_assert(sizeof(AIGLE_A_RotationGizmo_C) == 0x0003C0, "Wrong size on AIGLE_A_RotationGizmo_C");
static_assert(offsetof(AIGLE_A_RotationGizmo_C, UberGraphFrame) == 0x000298, "Member 'AIGLE_A_RotationGizmo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AIGLE_A_RotationGizmo_C, RotationZ) == 0x0002A0, "Member 'AIGLE_A_RotationGizmo_C::RotationZ' has a wrong offset!");
static_assert(offsetof(AIGLE_A_RotationGizmo_C, RotationY) == 0x0002A8, "Member 'AIGLE_A_RotationGizmo_C::RotationY' has a wrong offset!");
static_assert(offsetof(AIGLE_A_RotationGizmo_C, RotationX) == 0x0002B0, "Member 'AIGLE_A_RotationGizmo_C::RotationX' has a wrong offset!");
static_assert(offsetof(AIGLE_A_RotationGizmo_C, Root) == 0x0002B8, "Member 'AIGLE_A_RotationGizmo_C::Root' has a wrong offset!");
static_assert(offsetof(AIGLE_A_RotationGizmo_C, MatRotationX) == 0x0002C0, "Member 'AIGLE_A_RotationGizmo_C::MatRotationX' has a wrong offset!");
static_assert(offsetof(AIGLE_A_RotationGizmo_C, RotationXColor) == 0x0002C8, "Member 'AIGLE_A_RotationGizmo_C::RotationXColor' has a wrong offset!");
static_assert(offsetof(AIGLE_A_RotationGizmo_C, MatRotationY) == 0x0002D8, "Member 'AIGLE_A_RotationGizmo_C::MatRotationY' has a wrong offset!");
static_assert(offsetof(AIGLE_A_RotationGizmo_C, MatRotationZ) == 0x0002E0, "Member 'AIGLE_A_RotationGizmo_C::MatRotationZ' has a wrong offset!");
static_assert(offsetof(AIGLE_A_RotationGizmo_C, RotationYColor) == 0x0002E8, "Member 'AIGLE_A_RotationGizmo_C::RotationYColor' has a wrong offset!");
static_assert(offsetof(AIGLE_A_RotationGizmo_C, RotationZColor) == 0x0002F8, "Member 'AIGLE_A_RotationGizmo_C::RotationZColor' has a wrong offset!");
static_assert(offsetof(AIGLE_A_RotationGizmo_C, PreUseWorldMousePlanePosition) == 0x000308, "Member 'AIGLE_A_RotationGizmo_C::PreUseWorldMousePlanePosition' has a wrong offset!");
static_assert(offsetof(AIGLE_A_RotationGizmo_C, Gizmo) == 0x000320, "Member 'AIGLE_A_RotationGizmo_C::Gizmo' has a wrong offset!");
static_assert(offsetof(AIGLE_A_RotationGizmo_C, CurrentWorldMousePlanePosition) == 0x000328, "Member 'AIGLE_A_RotationGizmo_C::CurrentWorldMousePlanePosition' has a wrong offset!");
static_assert(offsetof(AIGLE_A_RotationGizmo_C, PreUsePlaneNormal) == 0x000340, "Member 'AIGLE_A_RotationGizmo_C::PreUsePlaneNormal' has a wrong offset!");
static_assert(offsetof(AIGLE_A_RotationGizmo_C, MaxCursorDistanceFromGizmoMultiplier) == 0x000358, "Member 'AIGLE_A_RotationGizmo_C::MaxCursorDistanceFromGizmoMultiplier' has a wrong offset!");
static_assert(offsetof(AIGLE_A_RotationGizmo_C, DeltaRotationQuat) == 0x000360, "Member 'AIGLE_A_RotationGizmo_C::DeltaRotationQuat' has a wrong offset!");
static_assert(offsetof(AIGLE_A_RotationGizmo_C, LastWorldMousePlanePosition) == 0x000380, "Member 'AIGLE_A_RotationGizmo_C::LastWorldMousePlanePosition' has a wrong offset!");
static_assert(offsetof(AIGLE_A_RotationGizmo_C, RotatingMouseX) == 0x000398, "Member 'AIGLE_A_RotationGizmo_C::RotatingMouseX' has a wrong offset!");
static_assert(offsetof(AIGLE_A_RotationGizmo_C, Mouse_X_Multiplier) == 0x0003A0, "Member 'AIGLE_A_RotationGizmo_C::Mouse_X_Multiplier' has a wrong offset!");
static_assert(offsetof(AIGLE_A_RotationGizmo_C, Mouse_Y_Multiplier) == 0x0003A8, "Member 'AIGLE_A_RotationGizmo_C::Mouse_Y_Multiplier' has a wrong offset!");
static_assert(offsetof(AIGLE_A_RotationGizmo_C, DeltaX) == 0x0003B0, "Member 'AIGLE_A_RotationGizmo_C::DeltaX' has a wrong offset!");
static_assert(offsetof(AIGLE_A_RotationGizmo_C, DeltaY) == 0x0003B8, "Member 'AIGLE_A_RotationGizmo_C::DeltaY' has a wrong offset!");

}

