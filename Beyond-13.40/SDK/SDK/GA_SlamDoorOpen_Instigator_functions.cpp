#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SlamDoorOpen_Instigator

#include "Basic.hpp"

#include "GA_SlamDoorOpen_Instigator_classes.hpp"
#include "GA_SlamDoorOpen_Instigator_parameters.hpp"


namespace SDK
{

// Function GA_SlamDoorOpen_Instigator.GA_SlamDoorOpen_Instigator_C.ExecuteUbergraph_GA_SlamDoorOpen_Instigator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SlamDoorOpen_Instigator_C::ExecuteUbergraph_GA_SlamDoorOpen_Instigator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SlamDoorOpen_Instigator_C", "ExecuteUbergraph_GA_SlamDoorOpen_Instigator");

	Params::GA_SlamDoorOpen_Instigator_C_ExecuteUbergraph_GA_SlamDoorOpen_Instigator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SlamDoorOpen_Instigator.GA_SlamDoorOpen_Instigator_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_SlamDoorOpen_Instigator_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SlamDoorOpen_Instigator_C", "K2_ActivateAbilityFromEvent");

	Params::GA_SlamDoorOpen_Instigator_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SlamDoorOpen_Instigator.GA_SlamDoorOpen_Instigator_C.Triggered_6B6649DA4284DCE7779BA98D6543CFFB
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_SlamDoorOpen_Instigator_C::Triggered_6B6649DA4284DCE7779BA98D6543CFFB(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SlamDoorOpen_Instigator_C", "Triggered_6B6649DA4284DCE7779BA98D6543CFFB");

	Params::GA_SlamDoorOpen_Instigator_C_Triggered_6B6649DA4284DCE7779BA98D6543CFFB Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SlamDoorOpen_Instigator.GA_SlamDoorOpen_Instigator_C.Cancelled_6B6649DA4284DCE7779BA98D6543CFFB
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_SlamDoorOpen_Instigator_C::Cancelled_6B6649DA4284DCE7779BA98D6543CFFB(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SlamDoorOpen_Instigator_C", "Cancelled_6B6649DA4284DCE7779BA98D6543CFFB");

	Params::GA_SlamDoorOpen_Instigator_C_Cancelled_6B6649DA4284DCE7779BA98D6543CFFB Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SlamDoorOpen_Instigator.GA_SlamDoorOpen_Instigator_C.Completed_6B6649DA4284DCE7779BA98D6543CFFB
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_SlamDoorOpen_Instigator_C::Completed_6B6649DA4284DCE7779BA98D6543CFFB(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SlamDoorOpen_Instigator_C", "Completed_6B6649DA4284DCE7779BA98D6543CFFB");

	Params::GA_SlamDoorOpen_Instigator_C_Completed_6B6649DA4284DCE7779BA98D6543CFFB Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}

}

