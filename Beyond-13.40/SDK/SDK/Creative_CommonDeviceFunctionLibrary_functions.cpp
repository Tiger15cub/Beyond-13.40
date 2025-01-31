#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Creative_CommonDeviceFunctionLibrary

#include "Basic.hpp"

#include "Creative_CommonDeviceFunctionLibrary_classes.hpp"
#include "Creative_CommonDeviceFunctionLibrary_parameters.hpp"


namespace SDK
{

// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IsOnUnpublishedIsland
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           Actor                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Edit_Mode                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCreative_CommonDeviceFunctionLibrary_C::IsOnUnpublishedIsland(const class AActor* Actor, class UObject* __WorldContext, bool* Edit_Mode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "IsOnUnpublishedIsland");

	Params::Creative_CommonDeviceFunctionLibrary_C_IsOnUnpublishedIsland Parms{};

	Parms.Actor = Actor;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Edit_Mode != nullptr)
		*Edit_Mode = Parms.Edit_Mode;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.AwardScore
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Score                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EAwardScoreType                         Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      Controller                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMinigameLogicComponent*      Minigame_Logic                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            TargetTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreative_CommonDeviceFunctionLibrary_C::AwardScore(class AActor* Actor, int32 Score, EAwardScoreType Type, class AController* Controller, class UFortMinigameLogicComponent* Minigame_Logic, const struct FGameplayTagContainer& TargetTags, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "AwardScore");

	Params::Creative_CommonDeviceFunctionLibrary_C_AwardScore Parms{};

	Parms.Actor = Actor;
	Parms.Score = Score;
	Parms.Type = Type;
	Parms.Controller = Controller;
	Parms.Minigame_Logic = Minigame_Logic;
	Parms.TargetTags = std::move(TargetTags);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IsValidTeam
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Team_to_Check                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Actor_To_Check                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Valid                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCreative_CommonDeviceFunctionLibrary_C::IsValidTeam(int32 Team_to_Check, const class AActor* Actor_To_Check, class UObject* __WorldContext, bool* Valid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "IsValidTeam");

	Params::Creative_CommonDeviceFunctionLibrary_C_IsValidTeam Parms{};

	Parms.Team_to_Check = Team_to_Check;
	Parms.Actor_To_Check = Actor_To_Check;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Valid != nullptr)
		*Valid = Parms.Valid;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IsEnabledPhaseMatch
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EFortMinigameState                      State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PhaseIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Actor                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Enabled                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCreative_CommonDeviceFunctionLibrary_C::IsEnabledPhaseMatch(EFortMinigameState State, int32 PhaseIndex, const class AActor* Actor, class UObject* __WorldContext, bool* Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "IsEnabledPhaseMatch");

	Params::Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch Parms{};

	Parms.State = State;
	Parms.PhaseIndex = PhaseIndex;
	Parms.Actor = Actor;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IsActivatedOnPhase
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EFortMinigameState                      State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PhaseIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Actor                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Enabled                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCreative_CommonDeviceFunctionLibrary_C::IsActivatedOnPhase(EFortMinigameState State, int32 PhaseIndex, const class AActor* Actor, class UObject* __WorldContext, bool* Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "IsActivatedOnPhase");

	Params::Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase Parms{};

	Parms.State = State;
	Parms.PhaseIndex = PhaseIndex;
	Parms.Actor = Actor;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.ActorCanTrigger
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           Actor_To_Check                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              Overlap_Component                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CanTrigger                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                      Controller                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreative_CommonDeviceFunctionLibrary_C::ActorCanTrigger(class AActor* Actor_To_Check, class UPrimitiveComponent* Overlap_Component, class UObject* __WorldContext, bool* CanTrigger, class AController** Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "ActorCanTrigger");

	Params::Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger Parms{};

	Parms.Actor_To_Check = Actor_To_Check;
	Parms.Overlap_Component = Overlap_Component;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (CanTrigger != nullptr)
		*CanTrigger = Parms.CanTrigger;

	if (Controller != nullptr)
		*Controller = Parms.Controller;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.GetMID
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*              Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         Mid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreative_CommonDeviceFunctionLibrary_C::GetMID(class UPrimitiveComponent* Target, class UObject* __WorldContext, class UMaterialInstanceDynamic** Mid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "GetMID");

	Params::Creative_CommonDeviceFunctionLibrary_C_GetMID Parms{};

	Parms.Target = Target;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Mid != nullptr)
		*Mid = Parms.Mid;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Update Team Color
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMinigameLogicComponent*      Minigame_Logic                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Team                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreative_CommonDeviceFunctionLibrary_C::Update_Team_Color(class UFortMinigameLogicComponent* Minigame_Logic, class UPrimitiveComponent* Mesh, int32 Team, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "Update Team Color");

	Params::Creative_CommonDeviceFunctionLibrary_C_Update_Team_Color Parms{};

	Parms.Minigame_Logic = Minigame_Logic;
	Parms.Mesh = Mesh;
	Parms.Team = Team;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Refresh Team Change Binding
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMinigameLogicComponent*      Minigame_Logic                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Unbind                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TDelegate<void()>                       Event                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreative_CommonDeviceFunctionLibrary_C::Refresh_Team_Change_Binding(class UFortMinigameLogicComponent* Minigame_Logic, bool Unbind, const TDelegate<void()>& Event, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "Refresh Team Change Binding");

	Params::Creative_CommonDeviceFunctionLibrary_C_Refresh_Team_Change_Binding Parms{};

	Parms.Minigame_Logic = Minigame_Logic;
	Parms.Unbind = Unbind;
	Parms.Event = Event;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.GetMID_FromMaterial
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*              Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*               SourceMaterial                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         Mid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreative_CommonDeviceFunctionLibrary_C::GetMID_FromMaterial(class UPrimitiveComponent* Target, int32 Param_Index, class UMaterialInterface* SourceMaterial, class UObject* __WorldContext, class UMaterialInstanceDynamic** Mid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "GetMID_FromMaterial");

	Params::Creative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial Parms{};

	Parms.Target = Target;
	Parms.Param_Index = Param_Index;
	Parms.SourceMaterial = SourceMaterial;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Mid != nullptr)
		*Mid = Parms.Mid;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Get Driver or Pawn Controller
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           Actor_To_Check                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Valid_Controller                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                      Controller                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreative_CommonDeviceFunctionLibrary_C::Get_Driver_or_Pawn_Controller(class AActor* Actor_To_Check, class UObject* __WorldContext, bool* Valid_Controller, class AController** Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "Get Driver or Pawn Controller");

	Params::Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller Parms{};

	Parms.Actor_To_Check = Actor_To_Check;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Valid_Controller != nullptr)
		*Valid_Controller = Parms.Valid_Controller;

	if (Controller != nullptr)
		*Controller = Parms.Controller;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IsInPlayMode
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           Actor                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Play_Mode                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCreative_CommonDeviceFunctionLibrary_C::IsInPlayMode(const class AActor*& Actor, class UObject* __WorldContext, bool* Play_Mode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "IsInPlayMode");

	Params::Creative_CommonDeviceFunctionLibrary_C_IsInPlayMode Parms{};

	Parms.Actor = Actor;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Play_Mode != nullptr)
		*Play_Mode = Parms.Play_Mode;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IsLocalPawn
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_IsLocalPawn                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCreative_CommonDeviceFunctionLibrary_C::IsLocalPawn(class AActor* Actor, class UObject* __WorldContext, bool* Param_IsLocalPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "IsLocalPawn");

	Params::Creative_CommonDeviceFunctionLibrary_C_IsLocalPawn Parms{};

	Parms.Actor = Actor;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Param_IsLocalPawn != nullptr)
		*Param_IsLocalPawn = Parms.Param_IsLocalPawn;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Get Team Color Index or Team Index
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortMinigameLogicComponent*      Minigame_Logic                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Team_Index                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UCreative_CommonDeviceFunctionLibrary_C::Get_Team_Color_Index_or_Team_Index(class UFortMinigameLogicComponent* Minigame_Logic, int32 Team_Index, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "Get Team Color Index or Team Index");

	Params::Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_or_Team_Index Parms{};

	Parms.Minigame_Logic = Minigame_Logic;
	Parms.Team_Index = Team_Index;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Get Team Color Index from Tag
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           Actor_with_Tag                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortMinigame*                    Minigame                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Array_Index                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECreativeColorSetType                   Color_Type_Out                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreative_CommonDeviceFunctionLibrary_C::Get_Team_Color_Index_from_Tag(class AActor* Actor_with_Tag, class AFortMinigame* Minigame, class UObject* __WorldContext, int32* Array_Index, ECreativeColorSetType* Color_Type_Out)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "Get Team Color Index from Tag");

	Params::Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag Parms{};

	Parms.Actor_with_Tag = Actor_with_Tag;
	Parms.Minigame = Minigame;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Array_Index != nullptr)
		*Array_Index = Parms.Array_Index;

	if (Color_Type_Out != nullptr)
		*Color_Type_Out = Parms.Color_Type_Out;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Get Dynamic Team Color
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortMinigame*                    Minigame                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECreativeColorSetType                   Color_Type                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Array_Index                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreative_CommonDeviceFunctionLibrary_C::Get_Dynamic_Team_Color(class AActor* Actor, class AFortMinigame* Minigame, ECreativeColorSetType Color_Type, class UObject* __WorldContext, int32* Array_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "Get Dynamic Team Color");

	Params::Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color Parms{};

	Parms.Actor = Actor;
	Parms.Minigame = Minigame;
	Parms.Color_Type = Color_Type;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Array_Index != nullptr)
		*Array_Index = Parms.Array_Index;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IsLogicInPlayMode
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortMinigameLogicComponent*      Logic                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Play_Mode                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCreative_CommonDeviceFunctionLibrary_C::IsLogicInPlayMode(const class UFortMinigameLogicComponent*& Logic, class UObject* __WorldContext, bool* Play_Mode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "IsLogicInPlayMode");

	Params::Creative_CommonDeviceFunctionLibrary_C_IsLogicInPlayMode Parms{};

	Parms.Logic = Logic;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Play_Mode != nullptr)
		*Play_Mode = Parms.Play_Mode;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IndexToTeam
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                                   Team                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreative_CommonDeviceFunctionLibrary_C::IndexToTeam(int32 Param_Index, class UObject* __WorldContext, uint8* Team)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "IndexToTeam");

	Params::Creative_CommonDeviceFunctionLibrary_C_IndexToTeam Parms{};

	Parms.Param_Index = Param_Index;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Team != nullptr)
		*Team = Parms.Team;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.TeamToIndex
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// uint8                                   Team                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreative_CommonDeviceFunctionLibrary_C::TeamToIndex(uint8 Team, class UObject* __WorldContext, int32* Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "TeamToIndex");

	Params::Creative_CommonDeviceFunctionLibrary_C_TeamToIndex Parms{};

	Parms.Team = Team;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Param_Index != nullptr)
		*Param_Index = Parms.Param_Index;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Animate Float Curve
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Delta_Time                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Current_Time                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                      FCurve                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Animation_Time                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Invert_Time                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Value                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsComplete                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCreative_CommonDeviceFunctionLibrary_C::Animate_Float_Curve(float Delta_Time, float& Current_Time, class UCurveFloat* FCurve, float Animation_Time, bool Invert_Time, class UObject* __WorldContext, float* Value, bool* bIsComplete)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "Animate Float Curve");

	Params::Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve Parms{};

	Parms.Delta_Time = Delta_Time;
	Parms.Current_Time = Current_Time;
	Parms.FCurve = FCurve;
	Parms.Animation_Time = Animation_Time;
	Parms.Invert_Time = Invert_Time;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Current_Time = Parms.Current_Time;

	if (Value != nullptr)
		*Value = Parms.Value;

	if (bIsComplete != nullptr)
		*bIsComplete = Parms.bIsComplete;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Wrapping Modulo
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   A                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   B                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Out                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreative_CommonDeviceFunctionLibrary_C::Wrapping_Modulo(int32 A, int32 B, class UObject* __WorldContext, int32* Out)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "Wrapping Modulo");

	Params::Creative_CommonDeviceFunctionLibrary_C_Wrapping_Modulo Parms{};

	Parms.A = A;
	Parms.B = B;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = Parms.Out;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Reattach or Create MID
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         Target_MID                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MatId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreative_CommonDeviceFunctionLibrary_C::Reattach_or_Create_MID(class UPrimitiveComponent* Mesh, class UMaterialInstanceDynamic*& Target_MID, int32 MatId, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "Reattach or Create MID");

	Params::Creative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID Parms{};

	Parms.Mesh = Mesh;
	Parms.Target_MID = Target_MID;
	Parms.MatId = MatId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Target_MID = Parms.Target_MID;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.GetMinigameSettingsMachineForMinigame
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFortMinigame*                    Minigame                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMinigameSettingsMachine_C*       MinigameSettingsMachine                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreative_CommonDeviceFunctionLibrary_C::GetMinigameSettingsMachineForMinigame(class AFortMinigame* Minigame, class UObject* __WorldContext, class AMinigameSettingsMachine_C** MinigameSettingsMachine)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Creative_CommonDeviceFunctionLibrary_C", "GetMinigameSettingsMachineForMinigame");

	Params::Creative_CommonDeviceFunctionLibrary_C_GetMinigameSettingsMachineForMinigame Parms{};

	Parms.Minigame = Minigame;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (MinigameSettingsMachine != nullptr)
		*MinigameSettingsMachine = Parms.MinigameSettingsMachine;
}

}

