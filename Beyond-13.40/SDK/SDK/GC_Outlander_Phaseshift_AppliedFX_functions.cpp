#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Outlander_Phaseshift_AppliedFX

#include "Basic.hpp"

#include "GC_Outlander_Phaseshift_AppliedFX_classes.hpp"
#include "GC_Outlander_Phaseshift_AppliedFX_parameters.hpp"


namespace SDK
{

// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.ExecuteUbergraph_GC_Outlander_Phaseshift_AppliedFX
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_Outlander_Phaseshift_AppliedFX_C::ExecuteUbergraph_GC_Outlander_Phaseshift_AppliedFX(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Outlander_Phaseshift_AppliedFX_C", "ExecuteUbergraph_GC_Outlander_Phaseshift_AppliedFX");

	Params::GC_Outlander_Phaseshift_AppliedFX_C_ExecuteUbergraph_GC_Outlander_Phaseshift_AppliedFX Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Stop Splines if Valid
// (BlueprintCallable, BlueprintEvent)

void AGC_Outlander_Phaseshift_AppliedFX_C::Stop_Splines_if_Valid()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Outlander_Phaseshift_AppliedFX_C", "Stop Splines if Valid");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Spawn Spline Actor
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*                  Player_Pawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_Outlander_Phaseshift_AppliedFX_C::Spawn_Spline_Actor(class AFortPlayerPawn* Player_Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Outlander_Phaseshift_AppliedFX_C", "Spawn Spline Actor");

	Params::GC_Outlander_Phaseshift_AppliedFX_C_Spawn_Spline_Actor Parms{};

	Parms.Player_Pawn = Player_Pawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Remove PP
// (BlueprintCallable, BlueprintEvent)

void AGC_Outlander_Phaseshift_AppliedFX_C::Remove_PP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Outlander_Phaseshift_AppliedFX_C", "Remove PP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Activate PP
// (BlueprintCallable, BlueprintEvent)

void AGC_Outlander_Phaseshift_AppliedFX_C::Activate_PP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Outlander_Phaseshift_AppliedFX_C", "Activate PP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.OnLoopingStart
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*> ParticleComponents                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UAudioComponent*>          AudioComponents                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void AGC_Outlander_Phaseshift_AppliedFX_C::OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Outlander_Phaseshift_AppliedFX_C", "OnLoopingStart");

	Params::GC_Outlander_Phaseshift_AppliedFX_C_OnLoopingStart Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.OnRemoval
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*> ParticleComponents                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UAudioComponent*>          AudioComponents                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UCameraShake*                     BurstCameraShakeInstance                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADecalActor*                      BurstDecalInstance                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_Outlander_Phaseshift_AppliedFX_C::OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Outlander_Phaseshift_AppliedFX_C", "OnRemoval");

	Params::GC_Outlander_Phaseshift_AppliedFX_C_OnRemoval Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.OnApplication
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*> ParticleComponents                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UAudioComponent*>          AudioComponents                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UCameraShake*                     BurstCameraShakeInstance                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADecalActor*                      BurstDecalInstance                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_Outlander_Phaseshift_AppliedFX_C::OnApplication(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Outlander_Phaseshift_AppliedFX_C", "OnApplication");

	Params::GC_Outlander_Phaseshift_AppliedFX_C_OnApplication Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Teleport PP TL__UpdateFunc
// (BlueprintEvent)

void AGC_Outlander_Phaseshift_AppliedFX_C::Teleport_PP_TL__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Outlander_Phaseshift_AppliedFX_C", "Teleport PP TL__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Teleport PP TL__FinishedFunc
// (BlueprintEvent)

void AGC_Outlander_Phaseshift_AppliedFX_C::Teleport_PP_TL__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Outlander_Phaseshift_AppliedFX_C", "Teleport PP TL__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}

