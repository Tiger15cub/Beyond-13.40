#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prj_Athena_GrapplingHoot

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Prj_Athena_GrapplingHoot.Prj_Athena_GrapplingHoot_C.ExecuteUbergraph_Prj_Athena_GrapplingHoot
// 0x0004 (0x0004 - 0x0000)
struct Prj_Athena_GrapplingHoot_C_ExecuteUbergraph_Prj_Athena_GrapplingHoot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Prj_Athena_GrapplingHoot.Prj_Athena_GrapplingHoot_C.SpawnRope
// 0x0060 (0x0060 - 0x0000)
struct Prj_Athena_GrapplingHoot_C_SpawnRope final
{
public:
	class AFortPlayerPawn*                        Param_PlayerPawn;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_HookGunRope_C*                       RopeSpawned;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59F9[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0020(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_Athena_GrapplingHoot_Rope_C*         CallFunc_FinishSpawningActor_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

