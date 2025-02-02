#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Generic_AdrenalineRush_DirectHeal_Latent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C
// 0x0090 (0x0850 - 0x07C0)
class AGC_Generic_AdrenalineRush_DirectHeal_Latent_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         HealthSweep_SafetyOpacity_AEAC519D4817261537105281CD9192C7; // 0x07C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HealthSweep_Sweep_AEAC519D4817261537105281CD9192C7; // 0x07CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            HealthSweep__Direction_AEAC519D4817261537105281CD9192C7; // 0x07D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C37[0x7];                                     // 0x07D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     HealthSweep;                                       // 0x07D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        My_Target;                                         // 0x07E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>       Duplicate_MIDs;                                    // 0x07E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Duplicate_Head;                                    // 0x07F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Duplicate_Body;                                    // 0x0800(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Duplicate_Hat;                                     // 0x0808(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Duplicate_Backpack;                                // 0x0810(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Duplicate_Charm;                                   // 0x0818(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Duplicate_Face;                                    // 0x0820(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Adrenaline_Rush_Color_Outer_Direct;                // 0x0828(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Adrenaline_Rush_Color_Inner_Direct;                // 0x0838(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Adrenaline_Rush_WPO_Offset;                        // 0x0848(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GC_Generic_AdrenalineRush_DirectHeal_Latent(int32 EntryPoint);
	void K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void HealthSweep__UpdateFunc();
	void HealthSweep__FinishedFunc();
	void Set_Adrenaline_Rush_Visibility(bool Visible, class AFortPlayerPawn* Player_Pawn);
	void Duplicate_Meshes(class AFortPlayerPawn* Player_Pawn);
	void Toggle_Mesh_Visibility(bool Visibility);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Generic_AdrenalineRush_DirectHeal_Latent_C">();
	}
	static class AGC_Generic_AdrenalineRush_DirectHeal_Latent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_Generic_AdrenalineRush_DirectHeal_Latent_C>();
	}
};

}

