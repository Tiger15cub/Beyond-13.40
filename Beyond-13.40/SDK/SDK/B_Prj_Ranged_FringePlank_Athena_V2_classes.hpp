#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Ranged_FringePlank_Athena_V2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Prj_Ranged_FringePlank_Athena_V2.B_Prj_Ranged_FringePlank_Athena_V2_C
// 0x0310 (0x0B78 - 0x0868)
class AB_Prj_Ranged_FringePlank_Athena_V2_C final : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0868(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               GiantFlare;                                        // 0x0870(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_SurfaceTypeSoundComponent_C*        BP_SurfaceTypeSoundComponent;                      // 0x0878(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortCollisionAudioComponent*           FortCollisionAudio;                                // 0x0880(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        LoopingAudioTell;                                  // 0x0888(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_GL_Ribbon_SmokeTrail;                            // 0x0890(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Mesh;                                              // 0x0898(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         VelocityAndGravityLerp_VelocityCurve_A7409B354D16857784EA3C8FCB6D7A14; // 0x08A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            VelocityAndGravityLerp__Direction_A7409B354D16857784EA3C8FCB6D7A14; // 0x08A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6716[0x3];                                     // 0x08A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     VelocityAndGravityLerp;                            // 0x08A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        RibbonTrail_PS;                                    // 0x08B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               RibbonTrail_PSC;                                   // 0x08B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        DeathExplosion_PS;                                 // 0x08C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        WaterImpact_PS;                                    // 0x08C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Bounce_Sound;                                      // 0x08D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           BounceCueTag;                                      // 0x08D8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         Initial_Speed;                                     // 0x08E0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Final_XYSpeedMultiplier;                           // 0x0900(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         DisableMarkingPlayers;                             // 0x0920(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         CurrentBounces;                                    // 0x0940(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSlowing;                                         // 0x0944(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6717[0x3];                                     // 0x0945(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         GravityAfterBounced;                               // 0x0948(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          InWater;                                           // 0x0968(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6718[0x7];                                     // 0x0969(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        SparkExplosion_PS;                                 // 0x0970(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SparkExplosionSize;                                // 0x0978(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6719[0x4];                                     // 0x097C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 FireMeshBGA;                                       // 0x0980(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Spark;                                             // 0x0988(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             HitWater_Sound;                                    // 0x0990(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SparkExplosion_Sound;                              // 0x0998(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         NumSparksToDrop;                                   // 0x09A0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         TimeBeforeSparkExplosion;                          // 0x09C0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         SparkSpeed;                                        // 0x09E0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         SparkGravityScale;                                 // 0x0A00(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         GravityAfterParachute;                             // 0x0A20(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                Lerp_StartVel;                                     // 0x0A40(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_671A[0x4];                                     // 0x0A4C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         MaxBounces;                                        // 0x0A50(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         ChuteAngleInterpSpeed;                             // 0x0A70(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShootSparksInCone;                                 // 0x0A74(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_671B[0x3];                                     // 0x0A75(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Lerp_StartXYSpeed;                                 // 0x0A78(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Lerp_FinalXYSpeed;                                 // 0x0A7C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Lerp_StartZSpeed;                                  // 0x0A80(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Lerp_XYDirection;                                  // 0x0A84(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CachedRandomSparkOffsetAngle;                      // 0x0A90(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Impact_Point;                                      // 0x0A94(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Impact_Sound;                                      // 0x0AA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Parachute_Audio;                                   // 0x0AA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Parachute_Disapears;                               // 0x0AB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MarkActorInt;                                      // 0x0AB8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_671C[0x4];                                     // 0x0ABC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        IndicatedPS;                                       // 0x0AC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ParticleSystemParamName;                           // 0x0AC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PSOffset;                                          // 0x0AD0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PSDBNOOffset;                                      // 0x0ADC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   PSVectorParamName;                                 // 0x0AE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 IndicatorGroup;                                    // 0x0AF0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class AAthena_PlayerController_C*             AthenaPlayerControler;                             // 0x0B00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentMarkingRadius;                              // 0x0B08(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OriginalParachuteScale;                            // 0x0B0C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         Initial_Gravity;                                   // 0x0B18(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                           CueOnMark;                                         // 0x0B38(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          MarkPlayers;                                       // 0x0B40(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_671D[0x3];                                     // 0x0B41(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaxMarkRaycastDistance;                            // 0x0B44(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MinMarkRadius;                                     // 0x0B48(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxMarkRadius;                                     // 0x0B4C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SparksCurrentlySpawned;                            // 0x0B50(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDying;                                           // 0x0B54(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_671E[0x3];                                     // 0x0B55(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         MarkingRange;                                      // 0x0B58(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_B_Prj_Ranged_FringePlank_Athena_V2(int32 EntryPoint);
	void HitWaterEffects();
	void MarkEnemies_();
	void DetroySelf();
	void WaterBounce();
	void DropSparksOnWater();
	void SendOutPing();
	void ReceiveDestroyed();
	void Play_Impact_Sound();
	void OnStop(const struct FHitResult& Hit);
	void IncrementBounces();
	void SetInitialProjectileValues();
	void DropMultipleSparks(int32 Number, const struct FVector& Location);
	void SparkAndSlowDown();
	void SlowSpeed();
	void HaltVelocityCurve();
	void DropSingleSpark(float Rotation, const struct FVector& Location);
	void SparkExplosion();
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* Param_WaterInteractionComponent, bool bIsFirstBody);
	void OnBounce(const struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void VelocityAndGravityLerp__UpdateFunc();
	void VelocityAndGravityLerp__FinishedFunc();
	void UserConstructionScript();
	void SpawnBounceFX(struct FHitResult& Hit);
	void GetActorsInRange(TArray<class AFortPlayerPawn*>& Array, TArray<class AFortPlayerPawn*>* Result_);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Prj_Ranged_FringePlank_Athena_V2_C">();
	}
	static class AB_Prj_Ranged_FringePlank_Athena_V2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Prj_Ranged_FringePlank_Athena_V2_C>();
	}
};

}

