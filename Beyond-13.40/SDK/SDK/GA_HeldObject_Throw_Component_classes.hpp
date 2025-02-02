#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_HeldObject_Throw_Component

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C
// 0x01D0 (0x0C48 - 0x0A78)
class UGA_HeldObject_Throw_Component_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A78(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0A80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AbilityKeyPressed;                                 // 0x0A88(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          InThrowWindup;                                     // 0x0A89(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67C4[0x2];                                     // 0x0A8A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AdditionalThrowAngle;                              // 0x0A8C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxTossPitch;                                      // 0x0A90(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                GrenadeTargetingOriginOffset;                      // 0x0A94(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                GrenadeTargetingOriginOffset_Crouched;             // 0x0AA0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_67C5[0x4];                                     // 0x0AAC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortProjectileBase*                    SpawnedProjectile;                                 // 0x0AB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Proj_ThrownProjectile;                             // 0x0AB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayEffectContainerSpec       ExplosionEffectContainerSpec;                      // 0x0AC0(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         ProjectileSpeed;                                   // 0x0B78(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         ProjectileGravityScale;                            // 0x0B98(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         TrajectoryUpdateInterval;                          // 0x0BB8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           EC_DefaultExplosion;                               // 0x0BBC(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_67C6[0x4];                                     // 0x0BC4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CookMonage;                                        // 0x0BC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           ThrowMontage;                                      // 0x0BD0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_OnThrow;                                        // 0x0BD8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_ProjectileTrajectory_C*             TrajectoryIndicator;                               // 0x0BE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 TrajectoryIndicatorClass;                          // 0x0BE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortProjectileBase*                    DummyProjectile;                                   // 0x0BF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DummyMaxSpeed;                                     // 0x0BF8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DummyGravity;                                      // 0x0BFC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DummyExtent;                                       // 0x0C00(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DummyTimeStep;                                     // 0x0C04(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_InWindup;                                       // 0x0C08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            Handle_GE_InWindup;                                // 0x0C10(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          SpawnedOnEquip;                                    // 0x0C18(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67C7[0x7];                                     // 0x0C19(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 HeldObject;                                        // 0x0C20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ProjectileTrajectory_C*             ProjectileTrajectorySocketed;                      // 0x0C28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 TrajectoryIndicatorSocketedClass;                  // 0x0C30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortHeldObjectComponent*               HeldObjectComponent;                               // 0x0C38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CookOverrideCamera;                                // 0x0C40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_HeldObject_Throw_Component(int32 EntryPoint);
	void OnAbilityInputReleased();
	void K2_ActivateAbility();
	void UpdateTrajectory();
	void CleanupTrajectoryIndicatorOnUnequip();
	void InitTrajectoryVariables();
	void K2_OnEndAbility(bool bWasCancelled);
	void AttemptSpawnThrownProjectile();
	void ThrowProjectile();
	void OnFinish_CE16214748EB548E38F0A4A5EBFDD545();
	void Triggered_A44500A44ED1BD047C0A7FB13050E377(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_A44500A44ED1BD047C0A7FB13050E377(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_A44500A44ED1BD047C0A7FB13050E377(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void PrethrowSetup();
	void SpawnThrownProjectile(class UClass* Param_ProjectileClass, const struct FVector& ProjectileSpawnLocation, const struct FRotator& ProjectileSpawnDirection, const struct FFortGameplayEffectContainerSpec& Param_ExplosionEffectContainerSpec, float ProjectileInitialSpeed, float Param_ProjectileGravityScale, class AFortProjectileBase** Param_SpawnedProjectile);
	void OnHeldObjectThrown(class AFortProjectileBase* Param_SpawnedProjectile);
	void OnHeldObjectSetup();
	void SetupDummyProjectile();
	void UpdateTrajectorySpline();
	void PostThrowCleanup();
	void CleanupTrajectory();
	void SetupDummyProjectileSocketed();
	void HitValidSocket(const struct FHitResult& HitResult, bool* CanSocket);
	void Setup_Late_Trajectory_Data();
	void SetupSplineActors();
	void GetProjectileTrajectoryPoints(TArray<struct FVector>* OutSplinePoints, TArray<struct FVector>* OutSplineTangents, struct FHitResult* OutHitResult);
	class AFortProjectileTrajectory* SpawnTrajectoryIndicator(bool bSpawnOnEquip);

	void GetSpawnLocationAndRotation(struct FVector* Location, struct FRotator* Rotation) const;
	void GetOwningPlayer(class AFortPlayerPawn** Player_Pawn) const;
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags) const;
	TSubclassOf<class AFortProjectileTrajectory> GetProjectileTrajectoryActor() const;
	bool ShouldOnlyShowTrajectoryOnUse() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_HeldObject_Throw_Component_C">();
	}
	static class UGA_HeldObject_Throw_Component_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_HeldObject_Throw_Component_C>();
	}
};

}

