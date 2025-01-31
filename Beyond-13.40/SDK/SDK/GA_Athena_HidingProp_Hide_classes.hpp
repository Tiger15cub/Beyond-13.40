#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_HidingProp_Hide

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C
// 0x0190 (0x0C08 - 0x0A78)
class UGA_Athena_HidingProp_Hide_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A78(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0A80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_HidingProp_C*                        HidingProp;                                        // 0x0A88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           Enter_Anim_Montage;                                // 0x0A90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           RustleCue;                                         // 0x0A98(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_Wobble;                                         // 0x0AA0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           Exit_Anim_Montage;                                 // 0x0AA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         ExitBlockShootDelay;                               // 0x0AB0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRotator                               ControlRotation;                                   // 0x0AD0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FB6[0x4];                                     // 0x0ADC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCameraModifier*                        CameraModifier;                                    // 0x0AE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_Quest;                                          // 0x0AE8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_PlayerOwned;                                    // 0x0B08(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         RustleMinDelay;                                    // 0x0B28(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         RustleMaxDelay;                                    // 0x0B48(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         RustlePerWobble;                                   // 0x0B68(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerController*                  PlayerController;                                  // 0x0B88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             NewEventDispatcher_0;                              // 0x0B90(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FGameplayTag>                   BlockExitTags;                                     // 0x0BA0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGameplayTagContainer                  HidingInPropTag;                                   // 0x0BB0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  GettingInPropTag;                                  // 0x0BD0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                           CurieBurningTag;                                   // 0x0BF0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          AllowCosmetics;                                    // 0x0BF8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FB7[0x3];                                     // 0x0BF9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           DisallowCosmeticsTag;                              // 0x0BFC(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void NewEventDispatcher_0__DelegateSignature();
	void ExecuteUbergraph_GA_Athena_HidingProp_Hide(int32 EntryPoint);
	void End();
	void RustleLoop();
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void Added_75ABACB94D60139EB5D79798D471DB17();
	void Added_1D4A49874AC422976CAC2C9155DDA736();
	void Added_D329D9924DF9DF1B79D0738C6CB8EBA1();
	void Added_E60D990647FDAB06895E738C7A2BAE7E();
	void Added_CD24BC554E955808A88A5B809807A94E();
	void Added_35C56E354FE08855A837E0BDFB150F20();
	void Added_F049BFC743FE176042ECD98641AFE2B9();
	void OnTimedOut_8010F4C64221E8F497C6559558420C32();
	void OnTimedOutAndDestinationReached_8010F4C64221E8F497C6559558420C32();
	void OnTimedOut_859E251740F1C46B914344A9FC343B19();
	void OnTimedOutAndDestinationReached_859E251740F1C46B914344A9FC343B19();
	void Triggered_75B60D4B43DAA553E4C21EA3D2E3AD03(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_75B60D4B43DAA553E4C21EA3D2E3AD03(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_75B60D4B43DAA553E4C21EA3D2E3AD03(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void SetCosmeticsAllowed(bool Allowed);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_HidingProp_Hide_C">();
	}
	static class UGA_Athena_HidingProp_Hide_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_HidingProp_Hide_C>();
	}
};

}

