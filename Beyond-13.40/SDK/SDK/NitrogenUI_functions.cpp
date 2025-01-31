#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NitrogenUI

#include "Basic.hpp"

#include "NitrogenUI_classes.hpp"
#include "NitrogenUI_parameters.hpp"


namespace SDK
{

// Function NitrogenUI.NitrogenWidgetBase.HandleNitrogenGamePhaseChanged
// (Native, Protected)
// Parameters:
// ENitrogenGamePhase                      NewGamePhase                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenWidgetBase::HandleNitrogenGamePhaseChanged(ENitrogenGamePhase NewGamePhase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NitrogenWidgetBase", "HandleNitrogenGamePhaseChanged");

	Params::NitrogenWidgetBase_HandleNitrogenGamePhaseChanged Parms{};

	Parms.NewGamePhase = NewGamePhase;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NitrogenUI.NitrogenWidgetBase.OnEnterVehicleDriver
// (Event, Protected, BlueprintEvent)

void UNitrogenWidgetBase::OnEnterVehicleDriver()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NitrogenWidgetBase", "OnEnterVehicleDriver");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NitrogenUI.NitrogenWidgetBase.OnExitVehicle
// (Event, Protected, BlueprintEvent)

void UNitrogenWidgetBase::OnExitVehicle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NitrogenWidgetBase", "OnExitVehicle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NitrogenUI.NitrogenFareBonusWidget.HideBonus
// (Event, Protected, BlueprintEvent)

void UNitrogenFareBonusWidget::HideBonus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NitrogenFareBonusWidget", "HideBonus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NitrogenUI.NitrogenFareBonusWidget.OnActiveBonusUpdated
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FNitrogenBonusStat               BonusStat                                              (Parm, OutParm, NativeAccessSpecifierPublic)
// float                                   Value                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ShouldAwardBonus                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenFareBonusWidget::OnActiveBonusUpdated(struct FNitrogenBonusStat* BonusStat, float Value, bool ShouldAwardBonus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NitrogenFareBonusWidget", "OnActiveBonusUpdated");

	Params::NitrogenFareBonusWidget_OnActiveBonusUpdated Parms{};

	Parms.Value = Value;
	Parms.ShouldAwardBonus = ShouldAwardBonus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (BonusStat != nullptr)
		*BonusStat = std::move(Parms.BonusStat);
}


// Function NitrogenUI.NitrogenFareBonusWidget.OnBeginFare
// (Final, Native, Protected)

void UNitrogenFareBonusWidget::OnBeginFare()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NitrogenFareBonusWidget", "OnBeginFare");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NitrogenUI.NitrogenFareBonusWidget.OnEndFare
// (Final, Native, Protected)
// Parameters:
// bool                                    bFareCompleted                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenFareBonusWidget::OnEndFare(bool bFareCompleted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NitrogenFareBonusWidget", "OnEndFare");

	Params::NitrogenFareBonusWidget_OnEndFare Parms{};

	Parms.bFareCompleted = bFareCompleted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NitrogenUI.NitrogenFareBonusWidget.ShowBonus
// (Native, Event, Protected, BlueprintEvent)

void UNitrogenFareBonusWidget::ShowBonus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NitrogenFareBonusWidget", "ShowBonus");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NitrogenUI.NitrogenFareMeterWidget.BonusProgressUpdate
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   BonusProgressRatio                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenFareMeterWidget::BonusProgressUpdate(float BonusProgressRatio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NitrogenFareMeterWidget", "BonusProgressUpdate");

	Params::NitrogenFareMeterWidget_BonusProgressUpdate Parms{};

	Parms.BonusProgressRatio = BonusProgressRatio;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NitrogenUI.NitrogenFareMeterWidget.FastDeliveryTimeUpdate
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   RemainingTimeRatio                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenFareMeterWidget::FastDeliveryTimeUpdate(float RemainingTimeRatio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NitrogenFareMeterWidget", "FastDeliveryTimeUpdate");

	Params::NitrogenFareMeterWidget_FastDeliveryTimeUpdate Parms{};

	Parms.RemainingTimeRatio = RemainingTimeRatio;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NitrogenUI.NitrogenFareMeterWidget.OnActiveBonusUpdated
// (Native, Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FNitrogenBonusStat               BonusStat                                              (Parm, OutParm, NativeAccessSpecifierPublic)
// float                                   Value                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bShouldAwardBonus                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenFareMeterWidget::OnActiveBonusUpdated(struct FNitrogenBonusStat* BonusStat, float Value, bool bShouldAwardBonus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NitrogenFareMeterWidget", "OnActiveBonusUpdated");

	Params::NitrogenFareMeterWidget_OnActiveBonusUpdated Parms{};

	Parms.Value = Value;
	Parms.bShouldAwardBonus = bShouldAwardBonus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (BonusStat != nullptr)
		*BonusStat = std::move(Parms.BonusStat);
}


// Function NitrogenUI.NitrogenFareMeterWidget.OnBeginFare
// (Native, Event, Protected, BlueprintEvent)

void UNitrogenFareMeterWidget::OnBeginFare()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NitrogenFareMeterWidget", "OnBeginFare");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NitrogenUI.NitrogenFareMeterWidget.OnEndFare
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bFareCompleted                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenFareMeterWidget::OnEndFare(bool bFareCompleted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NitrogenFareMeterWidget", "OnEndFare");

	Params::NitrogenFareMeterWidget_OnEndFare Parms{};

	Parms.bFareCompleted = bFareCompleted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NitrogenUI.NitrogenFareMeterWidget.OnFareBonusFinshed
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    BonusCompleted                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenFareMeterWidget::OnFareBonusFinshed(bool BonusCompleted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NitrogenFareMeterWidget", "OnFareBonusFinshed");

	Params::NitrogenFareMeterWidget_OnFareBonusFinshed Parms{};

	Parms.BonusCompleted = BonusCompleted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NitrogenUI.NitrogenFareMeterWidget.SetCurrentFareBaseRewardValue
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   Num                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenFareMeterWidget::SetCurrentFareBaseRewardValue(const int32 Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NitrogenFareMeterWidget", "SetCurrentFareBaseRewardValue");

	Params::NitrogenFareMeterWidget_SetCurrentFareBaseRewardValue Parms{};

	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NitrogenUI.NitrogenFareMeterWidget.SetCurrentFareBonusObjectiveState
// (Event, Protected, BlueprintEvent)
// Parameters:
// ENitrogenFareObjectiveDisplayState      DisplayState                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bPlayAnimation                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenFareMeterWidget::SetCurrentFareBonusObjectiveState(const ENitrogenFareObjectiveDisplayState DisplayState, const bool bPlayAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NitrogenFareMeterWidget", "SetCurrentFareBonusObjectiveState");

	Params::NitrogenFareMeterWidget_SetCurrentFareBonusObjectiveState Parms{};

	Parms.DisplayState = DisplayState;
	Parms.bPlayAnimation = bPlayAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NitrogenUI.NitrogenFareMeterWidget.SetCurrentFareTimedDeliveryObjectiveState
// (Event, Protected, BlueprintEvent)
// Parameters:
// ENitrogenFareObjectiveDisplayState      DisplayState                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bPlayAnimation                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenFareMeterWidget::SetCurrentFareTimedDeliveryObjectiveState(const ENitrogenFareObjectiveDisplayState DisplayState, const bool bPlayAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NitrogenFareMeterWidget", "SetCurrentFareTimedDeliveryObjectiveState");

	Params::NitrogenFareMeterWidget_SetCurrentFareTimedDeliveryObjectiveState Parms{};

	Parms.DisplayState = DisplayState;
	Parms.bPlayAnimation = bPlayAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NitrogenUI.NitrogenLeaderboardWidget.UpdateLeaderboardUI
// (BlueprintCosmetic, Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FNitrogenLeaderboardData> LeaderboardInfo                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   GoalScore                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenLeaderboardWidget::UpdateLeaderboardUI(const TArray<struct FNitrogenLeaderboardData>& LeaderboardInfo, const int32 GoalScore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NitrogenLeaderboardWidget", "UpdateLeaderboardUI");

	Params::NitrogenLeaderboardWidget_UpdateLeaderboardUI Parms{};

	Parms.LeaderboardInfo = std::move(LeaderboardInfo);
	Parms.GoalScore = GoalScore;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NitrogenUI.NitrogenMatchNearEndWidget.HandleTopScoreUpdated
// (Event, Protected, BlueprintEvent)

void UNitrogenMatchNearEndWidget::HandleTopScoreUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NitrogenMatchNearEndWidget", "HandleTopScoreUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NitrogenUI.NitrogenMatchNearEndWidget.OnMatchNearEnd
// (Event, Protected, BlueprintEvent)

void UNitrogenMatchNearEndWidget::OnMatchNearEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NitrogenMatchNearEndWidget", "OnMatchNearEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NitrogenUI.NitrogenObjectiveWidget.HandleVehicleEntered
// (Final, Native, Private)
// Parameters:
// class AFortAthenaVehicle*               NewVehicle                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenObjectiveWidget::HandleVehicleEntered(class AFortAthenaVehicle* NewVehicle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NitrogenObjectiveWidget", "HandleVehicleEntered");

	Params::NitrogenObjectiveWidget_HandleVehicleEntered Parms{};

	Parms.NewVehicle = NewVehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NitrogenUI.NitrogenObjectiveWidget.HandleVehicleExited
// (Final, Native, Private)

void UNitrogenObjectiveWidget::HandleVehicleExited()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NitrogenObjectiveWidget", "HandleVehicleExited");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NitrogenUI.NitrogenObjectiveWidget.OnBeginFare
// (Final, Native, Private)

void UNitrogenObjectiveWidget::OnBeginFare()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NitrogenObjectiveWidget", "OnBeginFare");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NitrogenUI.NitrogenObjectiveWidget.OnEndFare
// (Final, Native, Private)
// Parameters:
// bool                                    bFareCompleted                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenObjectiveWidget::OnEndFare(bool bFareCompleted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NitrogenObjectiveWidget", "OnEndFare");

	Params::NitrogenObjectiveWidget_OnEndFare Parms{};

	Parms.bFareCompleted = bFareCompleted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NitrogenUI.NitrogenObjectiveWidget.SetShouldBeHidden
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                                    bInShouldBeHidden                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenObjectiveWidget::SetShouldBeHidden(bool bInShouldBeHidden)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NitrogenObjectiveWidget", "SetShouldBeHidden");

	Params::NitrogenObjectiveWidget_SetShouldBeHidden Parms{};

	Parms.bInShouldBeHidden = bInShouldBeHidden;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NitrogenUI.NitrogenObjectiveWidget.UpdateWidgetState
// (Event, Protected, BlueprintEvent)
// Parameters:
// ENitrogenObjectiveWidgetState           NewObjectiveWidgetState                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenObjectiveWidget::UpdateWidgetState(ENitrogenObjectiveWidgetState NewObjectiveWidgetState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NitrogenObjectiveWidget", "UpdateWidgetState");

	Params::NitrogenObjectiveWidget_UpdateWidgetState Parms{};

	Parms.NewObjectiveWidgetState = NewObjectiveWidgetState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NitrogenUI.NitrogenPlacementWidget.HandleScoreChanged
// (Final, Native, Private)
// Parameters:
// int32                                   Score                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenPlacementWidget::HandleScoreChanged(int32 Score)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NitrogenPlacementWidget", "HandleScoreChanged");

	Params::NitrogenPlacementWidget_HandleScoreChanged Parms{};

	Parms.Score = Score;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NitrogenUI.NitrogenPlacementWidget.OnEndFare
// (Final, Native, Private)
// Parameters:
// bool                                    bFareCompleted                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenPlacementWidget::OnEndFare(bool bFareCompleted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NitrogenPlacementWidget", "OnEndFare");

	Params::NitrogenPlacementWidget_OnEndFare Parms{};

	Parms.bFareCompleted = bFareCompleted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NitrogenUI.NitrogenPlacementWidget.OnPlayerFareComplete
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   StarsGained                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenPlacementWidget::OnPlayerFareComplete(int32 StarsGained)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NitrogenPlacementWidget", "OnPlayerFareComplete");

	Params::NitrogenPlacementWidget_OnPlayerFareComplete Parms{};

	Parms.StarsGained = StarsGained;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NitrogenUI.NitrogenPlacementWidget.OnPlayerPlacementChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   NewPlacement                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   OldPlacement                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenPlacementWidget::OnPlayerPlacementChanged(int32 NewPlacement, int32 OldPlacement)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NitrogenPlacementWidget", "OnPlayerPlacementChanged");

	Params::NitrogenPlacementWidget_OnPlayerPlacementChanged Parms{};

	Parms.NewPlacement = NewPlacement;
	Parms.OldPlacement = OldPlacement;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NitrogenUI.NitrogenPlacementWidget.OnPlayerScoreChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   NewScore                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenPlacementWidget::OnPlayerScoreChanged(int32 NewScore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NitrogenPlacementWidget", "OnPlayerScoreChanged");

	Params::NitrogenPlacementWidget_OnPlayerScoreChanged Parms{};

	Parms.NewScore = NewScore;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NitrogenUI.NitrogenPlacementWidget.OnPlayerScoringUpdate
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// int32                                   CurrentPlayerTeamScore                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   CurrentPlayerTeamPlacement                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   GoalScore                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                           SortedTeamScores                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenPlacementWidget::OnPlayerScoringUpdate(const int32 CurrentPlayerTeamScore, const int32 CurrentPlayerTeamPlacement, const int32 GoalScore, const TArray<uint8>& SortedTeamScores)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NitrogenPlacementWidget", "OnPlayerScoringUpdate");

	Params::NitrogenPlacementWidget_OnPlayerScoringUpdate Parms{};

	Parms.CurrentPlayerTeamScore = CurrentPlayerTeamScore;
	Parms.CurrentPlayerTeamPlacement = CurrentPlayerTeamPlacement;
	Parms.GoalScore = GoalScore;
	Parms.SortedTeamScores = std::move(SortedTeamScores);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NitrogenUI.NitrogenScoreEventWidget.DisplayLeadChangedEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bInLead                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenScoreEventWidget::DisplayLeadChangedEvent(bool bInLead)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NitrogenScoreEventWidget", "DisplayLeadChangedEvent");

	Params::NitrogenScoreEventWidget_DisplayLeadChangedEvent Parms{};

	Parms.bInLead = bInLead;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NitrogenUI.NitrogenScoreEventWidget.DisplayScoreEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// ENitrogenScoreReason                    ScoreReason                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenScoreEventWidget::DisplayScoreEvent(ENitrogenScoreReason ScoreReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NitrogenScoreEventWidget", "DisplayScoreEvent");

	Params::NitrogenScoreEventWidget_DisplayScoreEvent Parms{};

	Parms.ScoreReason = ScoreReason;

	UObject::ProcessEvent(Func, &Parms);
}

}

