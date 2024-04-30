#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prj_Athena_Bucket_Old

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_Prj_ThrownConsumable_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Prj_Athena_Bucket_Old.Prj_Athena_Bucket_Old_C
// 0x0038 (0x0940 - 0x0908)
class APrj_Athena_Bucket_Old_C : public AB_Prj_ThrownConsumable_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prj_Athena_Bucket_Old_C;            // 0x0908(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortWorldItemDefinition*               ItemToSpawn;                                       // 0x0910(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TurnOffFX;                                         // 0x0918(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_6874[0x7];                                     // 0x0919(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             HitMarkerSound;                                    // 0x0920(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             ThrowIndicator_SoundRef;                           // 0x0928(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldSpawnItem;                                   // 0x0930(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6875[0x7];                                     // 0x0931(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Splash_Sound_0;                                    // 0x0938(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Prj_Athena_Bucket_Old(int32 EntryPoint);
	void Held_Water_Impact();
	void ReceiveBeginPlay();
	void PlayHitSound();
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* Param_WaterInteractionComponent, bool bIsFirstBody);
	void OnExploded(const TArray<class AActor*>& HitActors, const TArray<struct FHitResult>& HitResults);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnRep_TurnOffFX();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Prj_Athena_Bucket_Old_C">();
	}
	static class APrj_Athena_Bucket_Old_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APrj_Athena_Bucket_Old_C>();
	}
};

}
