#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_Athena_BadgerBangs_ChargeUpLight

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCNL_Athena_BadgerBangs_ChargeUpLight.GCNL_Athena_BadgerBangs_ChargeUpLight_C
// 0x0008 (0x07C8 - 0x07C0)
class AGCNL_Athena_BadgerBangs_ChargeUpLight_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GCNL_Athena_BadgerBangs_ChargeUpLight(int32 EntryPoint);
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Athena_BadgerBangs_ChargeUpLight_C">();
	}
	static class AGCNL_Athena_BadgerBangs_ChargeUpLight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Athena_BadgerBangs_ChargeUpLight_C>();
	}
};

}

