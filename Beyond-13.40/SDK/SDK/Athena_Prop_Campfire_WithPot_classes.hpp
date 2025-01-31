#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Athena_Prop_Campfire_WithPot

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Athena_Prop_Campfire_WithPot.Athena_Prop_Campfire_WithPot_C
// 0x0018 (0x0BD8 - 0x0BC0)
class AAthena_Prop_Campfire_WithPot_C final : public ABuildingProp
{
public:
	class USceneComponent*                        SpawnLocation;                                     // 0x0BC0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Stand;                                             // 0x0BC8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wood;                                              // 0x0BD0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_Prop_Campfire_WithPot_C">();
	}
	static class AAthena_Prop_Campfire_WithPot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAthena_Prop_Campfire_WithPot_C>();
	}
};

}

