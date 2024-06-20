#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_Character

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "E_ChoosenChar_structs.hpp"
#include "ALS_MovementState_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_Character.BPI_Character_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_Character_C final : public IInterface
{
public:
	void ActivateCollisions(bool Active);
	void Add_Character_Constraint(class AActor* Constraint);
	void AddAttachedCharacter(class APawn* Character);
	void AddChainPhysic(class UObject* Physics, class UStaticMeshComponent* Comp);
	void AddChainSocket(class UPrimitiveComponent* Socket);
	void AddConnectedChain(class AActor* Chain);
	void AddForce(const struct FVector& Vector, bool MakeSlide, double StabilizeSpeed, bool PushedByTrain, bool ShuffleFixToGround);
	void AddImpulseToCar(const struct FVector& Impulse);
	void AddImpulseToCharacter(const struct FVector& Impulse, bool OverrideVelocityZ, bool StopClimb, bool ShuffleAirControl, bool IgnoreDoOnce, bool PushedByObstacle);
	void AddWaterVolume(bool Remove);
	void AnulateCharacterVelocity(double Time);
	void BeAttractedBySun(class UPrimitiveComponent* SunMesh);
	void BeginCinematic(const struct FTransform& BeginTransform);
	void BeginPullOtherCharacter(bool BeginPull, class AActor* OtherCharacter);
	void ChangeCurrentVehicle(class AActor* Vehicle);
	void Character_Bounce(double Force);
	void EnableMovements();
	void EndCinematic();
	void Get_Belt_Fall_Cam_Loc_Rot(struct FVector* Loc, struct FRotator* Rot);
	void GetAnimVariables(bool* Jump, bool* Fall, struct FVector* RadialVelocity, struct FVector2D* MoveInput, bool* Climb, bool* Pull, class AActor** PulledCharacter, bool* IsDriving, struct FVector* DriveLeftHand, struct FVector* DriveRightHand, bool* LookAround);
	TArray<class AActor*> GetAttachedCharacters();
	void GetBaseLocation(struct FVector* Location);
	void GetBeltLocation(struct FVector* Location);
	void GetBeltSocket(class USceneComponent** Comp);
	void GetCapsuleBase(class USphereComponent** base);
	void GetCapsuleComponent(class UCapsuleComponent** Capsule);
	void GetCapsuleLocation(struct FVector* NewParam);
	void GetCapsuleRotation(struct FRotator* Rotation);
	void GetCharacter(E_ChoosenChar* Character);
	void GetConnectedChains(TArray<class AActor*>* Chains);
	void GetCurrentVehicle(class AActor** Vehicle);
	void GetFakeChainSocket(class USceneComponent** Socket);
	void GetHandLocation(struct FVector* Location);
	bool GetIsDetectableByPlacingBlocks();
	void GetLastUpdateRotation(struct FRotator* Rot);
	void GetMovementState(EALS_MovementState* State);
	void GetSkeletalMesh(class USkeletalMeshComponent** SKM);
	void GetWalkMagnitude(double* Magnitude);
	void IsBeingAttracted(bool* Attracted);
	bool IsChained();
	bool IsClimbing();
	void IsGrounded(bool* Grounded);
	bool IsInCinematicMode();
	bool IsOnTyrolienne();
	void IsPulling(bool* Pulling);
	void IsSwimming(bool* Swim);
	bool IsWalkableSurface(const struct FHitResult& Hit);
	void MakeBeltFall();
	void MantleCheckShuffle(double Delay);
	void OnVehicleExit();
	void PlayClimbSound();
	void PlayVoiceSRV(const TArray<uint8>& Data);
	void ReplicatePseudo(const class FString& Pseudo);
	void RescueTeleport(const struct FVector& Location, const struct FRotator& Rotation);
	void RessortImpulse(const struct FVector& Impulse);
	void SetCameraRotation(const struct FRotator& Rotation);
	void SetChainComp(class UStaticMeshComponent* Comp);
	void SetCollisionResponse(ECollisionChannel Collision, ECollisionResponse Response);
	void SetController(const struct FVector& Location);
	void SetCosmeticChainFixSocket(class UPrimitiveComponent* Socket, class FName Param_Name);
	void SetFlyMode(bool FlyMode);
	void SetInAirDamping(double Damping);
	void SetIsDetectableByPlacingBlocks(bool Detectable);
	void SetIsDriving(bool Driving);
	void SetIsInMovingObject(bool InMovingObject);
	void SetIsSwimming(bool Swim);
	void SetLookAround(bool LookAround);
	void SetPlayerNameSRV(const class FString& PlayerName);
	void SetRotation(const struct FRotator& Rotation);
	void SetZLocation(double Z);
	void ShowHidePullWidget(bool Show);
	void ShuffleHardSnap(double Delay);
	void ShuffleReplicationScale(double NullDuration, double TimelineDuration);
	void SnapCharacterToVehicle(class USphereComponent* DriverSocket);
	void Spawn_Chains();
	void SwitchToTyrolienne(class ABP_Tyrolienne_C* Tyrolienne);
	void TrampolineBounce(double Force, bool Instigator, bool UseControlRot);
	void UnderLava();
	void UpdateDriveHands(const struct FVector& Left, const struct FVector& Right);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_Character_C">();
	}
	static class IBPI_Character_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_Character_C>();
	}
};
static_assert(alignof(IBPI_Character_C) == 0x000008, "Wrong alignment on IBPI_Character_C");
static_assert(sizeof(IBPI_Character_C) == 0x000028, "Wrong size on IBPI_Character_C");

}

