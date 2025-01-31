#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Curie

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Enum Curie.ECurieEntityType
// NumValues: 0x0004
enum class ECurieEntityType : uint8
{
	Invalid                                  = 0,
	Material                                 = 1,
	Element                                  = 2,
	ECurieEntityType_MAX                     = 3,
};

// ScriptStruct Curie.CurieInteractHandle
// 0x0004 (0x0004 - 0x0000)
struct alignas(0x04) FCurieInteractHandle final
{
public:
	uint8                                         Pad_41A9[0x4];                                     // 0x0000(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct Curie.CurieContainerHandle
// 0x0004 (0x0004 - 0x0000)
struct alignas(0x04) FCurieContainerHandle final
{
public:
	uint8                                         Pad_41AA[0x4];                                     // 0x0000(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct Curie.CurieStateBehaviorContainer
// 0x0010 (0x0010 - 0x0000)
struct FCurieStateBehaviorContainer final
{
public:
	struct FGameplayTag                           Identifier;                                        // 0x0000(0x0008)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UCurieEntityStateBehavior>  StateBehaviorClass;                                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// ScriptStruct Curie.CurieInteractParamsHandle
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FCurieInteractParamsHandle final
{
public:
	uint8                                         Pad_41AB[0x10];                                    // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct Curie.CurieElementHandle
// 0x0004 (0x0004 - 0x0000)
struct alignas(0x04) FCurieElementHandle final
{
public:
	uint8                                         Pad_41AC[0x4];                                     // 0x0000(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct Curie.CurieStateHandle
// 0x0004 (0x0004 - 0x0000)
struct alignas(0x04) FCurieStateHandle final
{
public:
	uint8                                         Pad_41AD[0x4];                                     // 0x0000(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct Curie.CurieEffectContainer
// 0x0050 (0x0050 - 0x0000)
struct FCurieEffectContainer final
{
public:
	struct FGameplayTagQuery                      TargetFilter;                                      // 0x0000(0x0048)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSubclassOf<class UGameplayEffect>            GameplayEffect;                                    // 0x0048(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Curie.CurieEntityStateDefinitionBase
// 0x0010 (0x0018 - 0x0008)
struct FCurieEntityStateDefinitionBase : public FTableRowBase
{
public:
	TSubclassOf<class UCurieEntityStateBehavior>  StateBehaviorClass;                                // 0x0008(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         bIsEnabled : 1;                                    // 0x0010(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         Pad_41AE[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct Curie.CurieElementDefinitionBase
// 0x0030 (0x0038 - 0x0008)
struct FCurieElementDefinitionBase : public FTableRowBase
{
public:
	TSubclassOf<class UCurieElementBehavior>      BehaviorClass;                                     // 0x0008(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                  ElementalImmunities;                               // 0x0010(0x0020)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                         bIsEnabled : 1;                                    // 0x0030(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         Pad_41AF[0x7];                                     // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct Curie.CurieMaterialDefinitionBase
// 0x0060 (0x0068 - 0x0008)
struct FCurieMaterialDefinitionBase : public FTableRowBase
{
public:
	struct FGameplayTagContainer                  ElementalImmunities;                               // 0x0008(0x0020)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                  ElementAttachmentImmunities;                       // 0x0028(0x0020)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                  ElementsAllowedWhenCannotBeDamaged;                // 0x0048(0x0020)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
};

}

