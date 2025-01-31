#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile.B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C
// 0x0040 (0x08A8 - 0x0868)
class AB_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C final : public AFortProjectile_DrunkHoming
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0868(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        FireflyProjectileAudio;                            // 0x0870(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Fire_Trail_Niagara;                                // 0x0878(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Fire_Plane_Spawn_Offset;                           // 0x0880(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          DoesMeshAngleNeedAdjusted;                         // 0x0884(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6285[0x3];                                     // 0x0885(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 BGAToSpawn;                                        // 0x0888(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          HasHit;                                            // 0x0890(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6286[0x7];                                     // 0x0891(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Sound_Explode;                                     // 0x0898(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHomingToGround;                                  // 0x08A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile(int32 EntryPoint);
	void PlayClientFX(const struct FVector& HitLocationData);
	void ReceiveBeginPlay();
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* Param_WaterInteractionComponent, bool bIsFirstBody);
	void BeginDrunkenMovement();
	void HasNotLandedFadeOut();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void Landed_In_Water();
	struct FTransform Find_Mesh_Angle(const struct FVector& HitLoc, const struct FVector& HitNotmal);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C">();
	}
	static class AB_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C>();
	}
};

}

