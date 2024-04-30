#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_ChillBronco

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function GA_Athena_ChillBronco.GA_Athena_ChillBronco_C.ExecuteUbergraph_GA_Athena_ChillBronco
// 0x0030 (0x0030 - 0x0000)
struct GA_Athena_ChillBronco_C_ExecuteUbergraph_GA_Athena_ChillBronco final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_66BC[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortProjectileBase*                    K2Node_Event_SpawnedProjectile;                    // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                      CallFunc_GetQuestManager_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SendComplexCustomStatEvent_QuestActive;   // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SendComplexCustomStatEvent_QuestCompleted; // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Athena_ChillBronco.GA_Athena_ChillBronco_C.OnProjectileSpawned
// 0x0008 (0x0008 - 0x0000)
struct GA_Athena_ChillBronco_C_OnProjectileSpawned final
{
public:
	class AFortProjectileBase*                    Param_SpawnedProjectile;                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_Athena_ChillBronco.GA_Athena_ChillBronco_C.SpawnThrownProjectile
// 0x01D8 (0x01D8 - 0x0000)
struct GA_Athena_ChillBronco_C_SpawnThrownProjectile final
{
public:
	class UClass*                                 Param_ProjectileClass;                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ProjectileSpawnLocation;                           // 0x0008(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               ProjectileSpawnDirection;                          // 0x0014(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FFortGameplayEffectContainerSpec       Param_HitEffectContainerSpec;                      // 0x0020(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortGameplayEffectContainerSpec       Param_ExplosionEffectContainerSpec;                // 0x00D8(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm)
	float                                         ProjectileInitialSpeed;                            // 0x0190(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Param_ProjectileGravityScale;                      // 0x0194(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortProjectileBase*                    Param_SpawnedProjectile;                           // 0x0198(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortProjectileBase*                    CallFunc_SpawnThrownProjectile_SpawnedProjectile;  // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x01A8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x01C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x01C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x01D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
