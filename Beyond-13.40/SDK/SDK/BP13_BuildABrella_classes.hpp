#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP13_BuildABrella

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP13_BuildABrella.BP13_BuildABrella_C
// 0x0130 (0x03A0 - 0x0270)
class ABP13_BuildABrella_C final : public AFortCosmeticDisplayActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        PlayAudio;                                         // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CanopyTags;                                        // 0x0280(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  ShaftTags;                                         // 0x02A0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TopperTags;                                        // 0x02C0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  HandleTags;                                        // 0x02E0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                             HandleSound;                                       // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             TopperSound;                                       // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             ShaftSound;                                        // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             CanopySound;                                       // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CanopyVariantName;                                 // 0x0320(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  ShaftVariantName;                                  // 0x0340(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TopperVariantName;                                 // 0x0360(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  BottomCapVariantName;                              // 0x0380(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP13_BuildABrella(int32 EntryPoint);
	void OnVariantChanged(const struct FGameplayTag& VariantChannel, const struct FGameplayTag& OldVariantTag, const struct FGameplayTag& NewVariantTag);
	void ReceiveBeginPlay();
	void UpdateAudio(const struct FGameplayTag& Variant_Channel);
	void UpdateTransitionVFX(const struct FGameplayTag& Variant_Channel);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP13_BuildABrella_C">();
	}
	static class ABP13_BuildABrella_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP13_BuildABrella_C>();
	}
};

}
