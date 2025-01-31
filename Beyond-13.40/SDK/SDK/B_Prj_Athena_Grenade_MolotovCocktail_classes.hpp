#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Athena_Grenade_MolotovCocktail

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "B_Prj_Athena_Grenade_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C
// 0x0158 (0x0A88 - 0x0930)
class AB_Prj_Athena_Grenade_MolotovCocktail_C final : public AB_Prj_Athena_Grenade_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_Prj_Athena_Grenade_MolotovCocktail_C; // 0x0930(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Niagara_Projectile_Particles;                      // 0x0938(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Hit_Location;                                      // 0x0940(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_67EA[0x4];                                     // 0x094C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Bottle_Smash_Audio_Cue;                            // 0x0950(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Ignite_Audio_Cue;                                  // 0x0958(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Hit_Normal;                                        // 0x0960(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_67EB[0x4];                                     // 0x096C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        ProjectileSpawnVectors;                            // 0x0970(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FScalableFloat                         SpawnedProjectileMinSpeed;                         // 0x0980(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         SpawnedProjectileMaxSpeed;                         // 0x09A0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         ConeHalfAngleInDegrees;                            // 0x09C0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         FireBallsToSPawn;                                  // 0x09E0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          CurieActivated;                                    // 0x0A00(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67EC[0x7];                                     // 0x0A01(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         DoWeUseHomingProjectile;                           // 0x0A08(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                ReflectionVector;                                  // 0x0A28(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FireflyProjectileAngleExtreme;                     // 0x0A34(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FireflyProjectileDirection;                        // 0x0A38(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FireflyProjectileRadius_Min;                       // 0x0A44(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FireflyProjectileRadius_Max;                       // 0x0A48(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FireflyProjectileEndPoint;                         // 0x0A4C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumProjectileSpawned;                              // 0x0A58(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumProjectilesToSpawn;                             // 0x0A5C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NewTemp;                                           // 0x0A60(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EnteredWater;                                      // 0x0A6C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Hit;                                               // 0x0A6D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67ED[0x2];                                     // 0x0A6E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UFXSystemAsset*                         Sound_EnterWater;                                  // 0x0A70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWorldItemDefinition*               ItemToSpawn_Molotov;                               // 0x0A78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanInteractWithWater;                              // 0x0A80(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_B_Prj_Athena_Grenade_MolotovCocktail(int32 EntryPoint);
	void HasEnteredWater();
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* Param_WaterInteractionComponent, bool bIsFirstBody);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Param_Hit);
	void ReceiveBeginPlay();
	void OnCurieActive_7575DCC3440AA42836D7988BCA6485E5();
	void Drunk_Projectiles();
	void FireflyProjectileLogic();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Prj_Athena_Grenade_MolotovCocktail_C">();
	}
	static class AB_Prj_Athena_Grenade_MolotovCocktail_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Prj_Athena_Grenade_MolotovCocktail_C>();
	}
};

}

