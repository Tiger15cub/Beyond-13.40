#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trap_Athena_Spikes

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Trap_Athena_Spikes.Trap_Athena_Spikes_C
// 0x0128 (0x0E60 - 0x0D38)
class ATrap_Athena_Spikes_C : public ABuildingTrap
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0D38(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Spike_Mesh;                                        // 0x0D40(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Trigger;                                           // 0x0D48(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0D50(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         ResetSpikes_LERP_D054F7574E7A1041A552A5805E6C81D1; // 0x0D58(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            ResetSpikes__Direction_D054F7574E7A1041A552A5805E6C81D1; // 0x0D5C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6885[0x3];                                     // 0x0D5D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     ResetSpikes;                                       // 0x0D60(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Retract_LERP_714CAEE5449A32850D6231AEDA918B58;     // 0x0D68(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Retract__Direction_714CAEE5449A32850D6231AEDA918B58; // 0x0D6C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6886[0x3];                                     // 0x0D6D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Retract;                                           // 0x0D70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Fire_LERP_630B749B437E5CB83CB49287CC92E385;        // 0x0D78(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Fire__Direction_630B749B437E5CB83CB49287CC92E385;  // 0x0D7C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6887[0x3];                                     // 0x0D7D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Fire;                                              // 0x0D80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Place_Trap_Sound;                                  // 0x0D88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Trap_Active_Sound;                                 // 0x0D90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Reload_Sound;                                      // 0x0D98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Trap_Explode_Sound;                                // 0x0DA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Trap_Fire_Sound;                                   // 0x0DA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SpikeRestingScale;                                 // 0x0DB0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SpikeActiveScale;                                  // 0x0DB4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SpikeHoldOnFireLength;                             // 0x0DB8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6888[0x4];                                     // 0x0DBC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               SpikesMID;                                         // 0x0DC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SweepExponent;                                     // 0x0DC8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SweepColor;                                        // 0x0DCC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SweepSpeed;                                        // 0x0DDC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     FriendlyTrapMaterial;                              // 0x0DE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     NormalSpikeMaterial;                               // 0x0DE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPlayFewerSounds;                                  // 0x0DF0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6889[0x7];                                     // 0x0DF1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortPortableSoftParticles             DeathParticle_Marshalled;                          // 0x0DF8(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRotator                               Trap_Particle_Placement_Rotation;                  // 0x0E50(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_Trap_Athena_Spikes(int32 EntryPoint);
	void OnInitTeam();
	void OnWorldReady();
	void OnOutOfDurability();
	void GameplayCue_Abilities_Activation_Traps_ActivateTrap(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void OnFinishedBuilding();
	void OnPlaced();
	void OnReloadEnd();
	void OnLoaded_8A9D6DF7414FFDD42BE9FCB155F39B4D(class UObject* Loaded);
	void OnLoaded_8E622EE64F2AF153BE7162BA1D8EBCC1(class UObject* Loaded);
	void ResetSpikes__UpdateFunc();
	void ResetSpikes__FinishedFunc();
	void Retract__Sounds__EventFunc();
	void Retract__UpdateFunc();
	void Retract__FinishedFunc();
	void Fire__UpdateFunc();
	void Fire__FinishedFunc();
	void UserConstructionScript();
	void SetSpikePosition(float NewSpikePosition);
	void MaterialSweepOnSpikes(float Param_SweepSpeed, const struct FLinearColor& Param_SweepColor, float Param_SweepExponent);
	void _ChangeToFriendlyMaterial();
	void ChangeToNormalMaterial();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Trap_Athena_Spikes_C">();
	}
	static class ATrap_Athena_Spikes_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATrap_Athena_Spikes_C>();
	}
};

}

