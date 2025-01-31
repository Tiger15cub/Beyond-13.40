#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayspaceFramework

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "PlayspaceFramework_structs.hpp"


namespace SDK::Params
{

// Function PlayspaceFramework.GameplayVolume.UpdateSize
// 0x000C (0x000C - 0x0000)
struct GameplayVolume_UpdateSize final
{
public:
	struct FVector                                NewScale;                                          // 0x0000(0x000C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlayspaceFramework.OverlapComponent.OnBeginActorOverlap
// 0x00B0 (0x00B0 - 0x0000)
struct OverlapComponent_OnBeginActorOverlap final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3F33[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x008C)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         Pad_3F34[0x4];                                     // 0x00AC(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function PlayspaceFramework.OverlapComponent.OnEndActorOverlap
// 0x0020 (0x0020 - 0x0000)
struct OverlapComponent_OnEndActorOverlap final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3F35[0x4];                                     // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function PlayspaceFramework.PlayspaceControllerComponent_PlayerSpawning.GetSpawnInfo
// 0x001C (0x001C - 0x0000)
struct PlayspaceControllerComponent_PlayerSpawning_GetSpawnInfo final
{
public:
	struct FReplicatedSpawnInfo                   ReturnValue;                                       // 0x0000(0x001C)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function PlayspaceFramework.PlayspaceManagerComponent.OnPlayerBeginOverlapGameplayVolume
// 0x0010 (0x0010 - 0x0000)
struct PlayspaceManagerComponent_OnPlayerBeginOverlapGameplayVolume final
{
public:
	class APlayerState*                           PlayerState;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGameplayVolume*                        Volume;                                            // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlayspaceFramework.PlayspaceManagerComponent.OnPlayerEndOverlapGameplayVolume
// 0x0010 (0x0010 - 0x0000)
struct PlayspaceManagerComponent_OnPlayerEndOverlapGameplayVolume final
{
public:
	class APlayerState*                           PlayerState;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGameplayVolume*                        Volume;                                            // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlayspaceFramework.PlayspaceManagerComponent.ProcessOverlapEvents
// 0x0008 (0x0008 - 0x0000)
struct PlayspaceManagerComponent_ProcessOverlapEvents final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3F40[0x3];                                     // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}

