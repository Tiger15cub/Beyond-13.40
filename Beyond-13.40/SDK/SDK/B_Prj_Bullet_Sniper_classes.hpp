#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Bullet_Sniper

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C
// 0x0128 (0x0AB8 - 0x0990)
class AB_Prj_Bullet_Sniper_C final : public AFortProjectileAthena
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0990(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   TracerMesh;                                        // 0x0998(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Sniper_Bullet_Trail;                             // 0x09A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sniper_Rifle_SurfaceImpactSound;                   // 0x09A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sniper_Rifle_PlayerImpactSound;                    // 0x09B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                DecalSize;                                         // 0x09B8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F27[0x4];                                     // 0x09C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         ProjectileGravityScale;                            // 0x09C8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                        WaterImpactFX;                                     // 0x09E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             WaterHit;                                          // 0x09F0(0x008C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_5F28[0x4];                                     // 0x0A7C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      WaterHitMat;                                       // 0x0A80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WaterDepthTrace;                                   // 0x0A88(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WaterIndexTrace;                                   // 0x0A8C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TraceImpactLocation;                               // 0x0A90(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TraceImpactNormal;                                 // 0x0A9C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sniper_Rifle_WaterImpactSound;                     // 0x0AA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasPlayedWaterSound;                              // 0x0AB0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_B_Prj_Bullet_Sniper(int32 EntryPoint);
	void OnSniperTraceWaterHit(const struct FHitResult& Param_WaterHit, class AFortWaterBodyActor* WaterBody);
	void OnTouched(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& HitResult, bool bIsOverlap);
	void ReceiveBeginPlay();
	void OnStop(const struct FHitResult& Hit);
	void UserConstructionScript();
	void PlayImpactSFX(bool IsPlayer, bool IsWater);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Prj_Bullet_Sniper_C">();
	}
	static class AB_Prj_Bullet_Sniper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Prj_Bullet_Sniper_C>();
	}
};

}

