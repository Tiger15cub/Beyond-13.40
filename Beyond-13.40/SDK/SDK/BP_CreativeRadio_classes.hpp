#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CreativeRadio

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "EVisibleInGameState_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CreativeRadio.BP_CreativeRadio_C
// 0x0040 (0x0CA0 - 0x0C60)
class ABP_CreativeRadio_C final : public ABuildingPropPlaygroundMusicPlayer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0C60(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCreative_VisibleInGame_Component_C*    VisibleInGameComponent;                            // 0x0C68(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCreative_Radio_AudioToMPC_C*           Creative_Radio_AudioToMPC;                         // 0x0C70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortMinigameProgressComponent*         FortMinigameProgress;                              // 0x0C78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UToyOptionsComponent_C*                 ToyOptionsComponent;                               // 0x0C80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         RadioAttenuationDistance;                          // 0x0C88(0x0004)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         VolumeOverride;                                    // 0x0C8C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CachedVolumeMultiplier;                            // 0x0C90(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	float                                         CachedAttenuationSetting;                          // 0x0C94(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldDriveVisualization;                          // 0x0C98(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                          CachedShouldDriveVisualization;                    // 0x0C99(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor)
	bool                                          IsMeshVisibleDuringMinigame;                       // 0x0C9A(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_CreativeRadio(int32 EntryPoint);
	void OnWorldReady();
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature();
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_0_AnyPropertyChangedDelegate__DelegateSignature();
	void ReceiveBeginPlay();
	void OnPropertyChanged();
	void OnRep_CachedVolumeMultiplier();
	void OnRep_CachedAttenuationSetting();
	void OnRep_CachedShouldDriveVisualization();
	void SetAttenuationDistance();
	void UpdateCachedAttenuationSettings();
	void PlaybackTypeUpgradePath();
	void CheckMinigameStateOnPropertyChanged();

	class FText BlueprintGetInteractionString(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted) const;
	bool BlueprintCanInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, const ETInteractionType InteractionType) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CreativeRadio_C">();
	}
	static class ABP_CreativeRadio_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CreativeRadio_C>();
	}
};

}
