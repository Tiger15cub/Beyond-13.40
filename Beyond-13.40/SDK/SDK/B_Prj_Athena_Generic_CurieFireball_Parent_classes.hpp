#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Athena_Generic_CurieFireball_Parent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C
// 0x0040 (0x08A8 - 0x0868)
class AB_Prj_Athena_Generic_CurieFireball_Parent_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0868(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               FireTrail;                                         // 0x0870(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Fire_Plane_Trace_Offset;                           // 0x0878(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Fire_Plane_Spawn_Offset;                           // 0x0884(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                 BGAToSpawn;                                        // 0x0888(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UParticleSystem*                        DesiredFireTrailParticle;                          // 0x0890(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          DoesMeshAngleNeedAdjusted;                         // 0x0898(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ShouldFireSpawnWithRandomChance;                   // 0x0899(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_63E1[0x2];                                     // 0x089A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RandomSpawnChanceWeight;                           // 0x089C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          ShouldSpawnFire;                                   // 0x08A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent(int32 EntryPoint);
	void Landed_In_Water();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ReceiveBeginPlay();
	struct FTransform Line_Trace_for_Mesh_Angle();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Prj_Athena_Generic_CurieFireball_Parent_C">();
	}
	static class AB_Prj_Athena_Generic_CurieFireball_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Prj_Athena_Generic_CurieFireball_Parent_C>();
	}
};

}
