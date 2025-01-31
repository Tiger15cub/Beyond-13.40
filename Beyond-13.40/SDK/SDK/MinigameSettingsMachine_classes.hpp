#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MinigameSettingsMachine

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "MinigameScoringPreset_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass MinigameSettingsMachine.MinigameSettingsMachine_C
// 0x0180 (0x04A0 - 0x0320)
class AMinigameSettingsMachine_C final : public AFortMinigameSettingsBuilding
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UToyOptionsComponent_C*                 ToyOptionsComponent;                               // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         GameModeIndex;                                     // 0x0330(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                         TimeLimit;                                         // 0x0334(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortMinigamePlayerSpawnLocationSetting       SpawnLocationSetting;                              // 0x0338(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_608E[0x3];                                     // 0x0339(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NumTeams;                                          // 0x033C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	EFortMinigamePostGameSpawnLocationSetting     PostGameSpawnLocationSetting;                      // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_608F[0x3];                                     // 0x0341(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PlayerLives;                                       // 0x0344(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AutoEndTeamThreshold;                              // 0x0348(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TeamToMoveToWhenOutOfSpawns;                       // 0x034C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumKillsForEndCondition;                           // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AutoStartDelay;                                    // 0x0354(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumCollectItemsForEndCondition;                    // 0x0358(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6090[0x4];                                     // 0x035C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FMinigameScoringPreset>         ScoringPresets;                                    // 0x0360(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay, HasGetValueTypeHash)
	TArray<class UClass*>                         TrackedStats;                                      // 0x0370(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         NumAIKillsForEndCondition;                         // 0x0380(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ScoreForEndCondition;                              // 0x0384(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TotalRounds;                                       // 0x0388(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumObjectDestroysForWin;                           // 0x038C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WinnerDisplayTime;                                 // 0x0390(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ScoreDisplayTime;                                  // 0x0394(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TrackedScoreStat0;                                 // 0x0398(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TrackedScoreStat1;                                 // 0x039C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TrackedScoreStat2;                                 // 0x03A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TrackedScoreStat3;                                 // 0x03A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TrackedScoreStat4;                                 // 0x03A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6091[0x4];                                     // 0x03AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 TrackedScoreStats;                                 // 0x03B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FGameplayTagContainer>          AvailableUIExtensions;                             // 0x03C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CommonUIExtensions;                                // 0x03D0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         UIExtensionSetting;                                // 0x03F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6092[0x4];                                     // 0x03F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlaylistUserOptionIntEnum*             TrackedScoreStat0_Definition;                      // 0x03F8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UPlaylistUserOptionIntEnum*             TrackedScoreStat1_Definition;                      // 0x0400(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UPlaylistUserOptionIntEnum*             TrackedScoreStat2_Definition;                      // 0x0408(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UPlaylistUserOptionIntEnum*             TrackedScoreStat3_Definition;                      // 0x0410(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UPlaylistUserOptionIntEnum*             TrackedScoreStat4_Definition;                      // 0x0418(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UPlaylistUserOptionIntEnum*             UIExtensionSetting_Definition;                     // 0x0420(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int32                                         TeamSetting;                                       // 0x0428(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6093[0x4];                                     // 0x042C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlaylistUserOptionIntEnum*             TeamSetting_Definition;                            // 0x0430(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          bUseIngameScoreboard;                              // 0x0438(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EMinigameFullscreenMapWidgetType              MinigameFullscreenMapWidgetType;                   // 0x0439(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6094[0x2];                                     // 0x043A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TimerDirection;                                    // 0x043C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TeamRotationSetting;                               // 0x0440(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RoundScoreDisplayTime;                             // 0x0444(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RoundWinnerDisplayTime;                            // 0x0448(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bStopwatchMode;                                    // 0x044C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bStableTeamCosmetics;                              // 0x044D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bShowCumulativeScoreOnHUD;                         // 0x044E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EMinigameWinCondition                         WinCondition;                                      // 0x044F(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AllTeamsMustMatchEndConditions;                    // 0x0450(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EndGameOnMatchPointWin;                            // 0x0454(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DefaultClassSlot;                                  // 0x0458(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortMinigameClassResetType                   ClassResetType;                                    // 0x045C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMinigamePlayerPersistence                    PlayerPersistence;                                 // 0x045D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6095[0x2];                                     // 0x045E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         OnlyAllowRespawningIfPlayerStartPadsFound;         // 0x0460(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ShowCumulativeScoreboard;                          // 0x0464(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAllowFriendlyFire;                                // 0x0468(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EMinigameGameEndCallout                       GameEndCallout;                                    // 0x0469(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6096[0x2];                                     // 0x046A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         VictoryAudioIndex;                                 // 0x046C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DrawAudioIndex;                                    // 0x0470(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DefeatAudioIndex;                                  // 0x0474(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CustomVictoryCallout;                              // 0x0478(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 CustomDefeatCallout;                               // 0x0488(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         StartCountdownDuration;                            // 0x0498(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MinigameSettingsMachine(int32 EntryPoint);
	void AbandonMinigameHelper();
	void StartMinigameHelper();
	void OnGameSettingsUpdated();
	void ReceiveBeginPlay();
	void GetPickupSpawnLocation(struct FVector* SpawnLocation);
	void HasMinigameStarted(bool* bHasStarted);
	void UpdateGameMode();
	void UpdateTimeLimit();
	void GetCurrentMinigame(class AFortMinigame** Minigame);
	void UpdateSpawnLocationSetting();
	void UpdateTeamSetting();
	void UpdatePostGameSpawnLocationSetting();
	void UpdatePlayerLives();
	void UpdateAutoEndTeamThreshold();
	void UpdateTeamToMoveToWhenOutOfSpawns();
	void UpdateEndConditions();
	void UpdateAutoStart();
	void TryAddEndCondition_CollectItems(TArray<struct FFortMinigameStatQuery>& EndConditions, bool* bResult);
	void UpdateJoinInProgress();
	void UpdateMinigameMutators();
	void UpdateTotalRounds();
	void TryAddEndCondition_DestroyObjects(TArray<struct FFortMinigameStatQuery>& EndConditions, bool* bResult);
	void FillTrackedStats();
	void GetScoreboardStatsArray(TArray<class UClass*>* ScoreboardStats);
	void Game_Mode_Preset_Upgrade_Path();
	void GetUIExtensions(struct FGameplayTagContainer* Return_Value);
	void UpdateClassSettings();
	void UpdatePlayerPersistence();
	void UpdateGameSettings();
	void AdditionalUIExtensionValidityChecks(const struct FGameplayTagContainer& TagContainer, bool* bUIExtensionIsValid);
	void UpdateGameStartCountdown();

	bool BlueprintCanInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, const ETInteractionType InteractionType) const;
	class FText BlueprintGetInteractionString(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted) const;
	class FText BlueprintGetFailedInteractionString(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted) const;
	int32 GetTeamSetting() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MinigameSettingsMachine_C">();
	}
	static class AMinigameSettingsMachine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMinigameSettingsMachine_C>();
	}
};

}

