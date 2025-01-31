#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP13_StyleChallenge_Mannequin

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP13_StyleChallenge_Mannequin.BP13_StyleChallenge_Mannequin_C
// 0x0038 (0x04D0 - 0x0498)
class ABP13_StyleChallenge_Mannequin_C final : public AFortPlayerMannequin
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0498(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCustomCharacterPart*                   NewPart;                                           // 0x04A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      BodyVFX;                                           // 0x04A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      ProfPupVFXs;                                       // 0x04B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               RacerZeroBody1VFX;                                 // 0x04B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Racer_Zero_Body2VFX;                               // 0x04C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Racer_Zero_Head_VFX;                               // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP13_StyleChallenge_Mannequin(int32 EntryPoint);
	void OnPartChanged(const class UCustomCharacterPart* OldPart, const class UCustomCharacterPart* Param_NewPart, EFortCustomPartType PartType);
	void OnVariantChanged(const struct FGameplayTag& VariantChannel, const struct FGameplayTag& OldVariantTag, const struct FGameplayTag& NewVariantTag);
	void ProfPupSetup();
	void RacerZeroSetup();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP13_StyleChallenge_Mannequin_C">();
	}
	static class ABP13_StyleChallenge_Mannequin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP13_StyleChallenge_Mannequin_C>();
	}
};

}

