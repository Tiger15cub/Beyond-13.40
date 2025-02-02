#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Frontend_EventLevel_NavObject_BPDoors

#include "Basic.hpp"

#include "BP_Frontend_EventLevel_NavObject_BPDoors_classes.hpp"
#include "BP_Frontend_EventLevel_NavObject_BPDoors_parameters.hpp"


namespace SDK
{

// Function BP_Frontend_EventLevel_NavObject_BPDoors.BP_Frontend_EventLevel_NavObject_BPDoors_C.ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_BPDoors
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Frontend_EventLevel_NavObject_BPDoors_C::ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_BPDoors(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BPDoors_C", "ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_BPDoors");

	Params::BP_Frontend_EventLevel_NavObject_BPDoors_C_ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_BPDoors Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Frontend_EventLevel_NavObject_BPDoors.BP_Frontend_EventLevel_NavObject_BPDoors_C.OnInitializeForPlayer
// (Event, Public, BlueprintEvent)

void ABP_Frontend_EventLevel_NavObject_BPDoors_C::OnInitializeForPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BPDoors_C", "OnInitializeForPlayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Frontend_EventLevel_NavObject_BPDoors.BP_Frontend_EventLevel_NavObject_BPDoors_C.Close Door Sound
// (BlueprintCallable, BlueprintEvent)

void ABP_Frontend_EventLevel_NavObject_BPDoors_C::Close_Door_Sound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BPDoors_C", "Close Door Sound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Frontend_EventLevel_NavObject_BPDoors.BP_Frontend_EventLevel_NavObject_BPDoors_C.Open Door Sound
// (BlueprintCallable, BlueprintEvent)

void ABP_Frontend_EventLevel_NavObject_BPDoors_C::Open_Door_Sound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BPDoors_C", "Open Door Sound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Frontend_EventLevel_NavObject_BPDoors.BP_Frontend_EventLevel_NavObject_BPDoors_C.UpdateVisuals
// (BlueprintCallable, BlueprintEvent)

void ABP_Frontend_EventLevel_NavObject_BPDoors_C::UpdateVisuals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BPDoors_C", "UpdateVisuals");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Frontend_EventLevel_NavObject_BPDoors.BP_Frontend_EventLevel_NavObject_BPDoors_C.ReceiveActorOnClicked
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FKey                             ButtonPressed                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Frontend_EventLevel_NavObject_BPDoors_C::ReceiveActorOnClicked(const struct FKey& ButtonPressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BPDoors_C", "ReceiveActorOnClicked");

	Params::BP_Frontend_EventLevel_NavObject_BPDoors_C_ReceiveActorOnClicked Parms{};

	Parms.ButtonPressed = std::move(ButtonPressed);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Frontend_EventLevel_NavObject_BPDoors.BP_Frontend_EventLevel_NavObject_BPDoors_C.ReceiveActorEndCursorOver
// (Event, Public, BlueprintEvent)

void ABP_Frontend_EventLevel_NavObject_BPDoors_C::ReceiveActorEndCursorOver()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BPDoors_C", "ReceiveActorEndCursorOver");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Frontend_EventLevel_NavObject_BPDoors.BP_Frontend_EventLevel_NavObject_BPDoors_C.ReceiveActorBeginCursorOver
// (Event, Public, BlueprintEvent)

void ABP_Frontend_EventLevel_NavObject_BPDoors_C::ReceiveActorBeginCursorOver()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BPDoors_C", "ReceiveActorBeginCursorOver");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Frontend_EventLevel_NavObject_BPDoors.BP_Frontend_EventLevel_NavObject_BPDoors_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Frontend_EventLevel_NavObject_BPDoors_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BPDoors_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Frontend_EventLevel_NavObject_BPDoors.BP_Frontend_EventLevel_NavObject_BPDoors_C.FadeGlint__UpdateFunc
// (BlueprintEvent)

void ABP_Frontend_EventLevel_NavObject_BPDoors_C::FadeGlint__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BPDoors_C", "FadeGlint__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Frontend_EventLevel_NavObject_BPDoors.BP_Frontend_EventLevel_NavObject_BPDoors_C.FadeGlint__FinishedFunc
// (BlueprintEvent)

void ABP_Frontend_EventLevel_NavObject_BPDoors_C::FadeGlint__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BPDoors_C", "FadeGlint__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Frontend_EventLevel_NavObject_BPDoors.BP_Frontend_EventLevel_NavObject_BPDoors_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_Frontend_EventLevel_NavObject_BPDoors_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BPDoors_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Frontend_EventLevel_NavObject_BPDoors.BP_Frontend_EventLevel_NavObject_BPDoors_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_Frontend_EventLevel_NavObject_BPDoors_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BPDoors_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Frontend_EventLevel_NavObject_BPDoors.BP_Frontend_EventLevel_NavObject_BPDoors_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Frontend_EventLevel_NavObject_BPDoors_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BPDoors_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Frontend_EventLevel_NavObject_BPDoors.BP_Frontend_EventLevel_NavObject_BPDoors_C.SetBattlePassVisualState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Purchased                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Frontend_EventLevel_NavObject_BPDoors_C::SetBattlePassVisualState(bool Purchased)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BPDoors_C", "SetBattlePassVisualState");

	Params::BP_Frontend_EventLevel_NavObject_BPDoors_C_SetBattlePassVisualState Parms{};

	Parms.Purchased = Purchased;

	UObject::ProcessEvent(Func, &Parms);
}

}

