#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EntityCore

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Enum EntityCore.EMovementType
// NumValues: 0x0004
enum class EMovementType : uint8
{
	SweepPhysics                             = 0,
	TeleportPhysics                          = 1,
	ResetPhysics                             = 2,
	EMovementType_MAX                        = 3,
};

// ScriptStruct EntityCore.ComponentData
// 0x0000 (0x0000 - 0x0000)
#pragma pack(push, 0x1)
struct alignas(0x01) FComponentData
{
};
#pragma pack(pop)

// ScriptStruct EntityCore.EntityCoreSystemRelativePositionComponentData
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x04) FEntityCoreSystemRelativePositionComponentData final : public FComponentData
{
public:
	uint8                                         Pad_482B[0x10];                                    // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct EntityCore.EntityScaleComponentData
// 0x000C (0x000C - 0x0000)
struct FEntityScaleComponentData final : public FComponentData
{
public:
	struct FVector                                WorldScale3D;                                      // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct EntityCore.EntityRotationComponentData
// 0x000C (0x000C - 0x0000)
struct FEntityRotationComponentData final : public FComponentData
{
public:
	struct FRotator                               WorldRotation;                                     // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct EntityCore.EntityPositionComponentData
// 0x000C (0x000C - 0x0000)
struct FEntityPositionComponentData final : public FComponentData
{
public:
	struct FVector                                WorldPosition;                                     // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct EntityCore.EntityTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FEntityTickFunction final : public FTickFunction
{
public:
	uint8                                         Pad_482C[0x8];                                     // 0x0028(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}
