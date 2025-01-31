#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SettingsListEntry_ControllerButton

#include "Basic.hpp"

#include "SettingsListEntry_ControllerButton_classes.hpp"
#include "SettingsListEntry_ControllerButton_parameters.hpp"


namespace SDK
{

// Function SettingsListEntry_ControllerButton.SettingsListEntry_ControllerButton_C.ExecuteUbergraph_SettingsListEntry_ControllerButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsListEntry_ControllerButton_C::ExecuteUbergraph_SettingsListEntry_ControllerButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_ControllerButton_C", "ExecuteUbergraph_SettingsListEntry_ControllerButton");

	Params::SettingsListEntry_ControllerButton_C_ExecuteUbergraph_SettingsListEntry_ControllerButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SettingsListEntry_ControllerButton.SettingsListEntry_ControllerButton_C.OnSettingAssigned
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             ActionText                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USettingsListEntry_ControllerButton_C::OnSettingAssigned(const class FText& ActionText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_ControllerButton_C", "OnSettingAssigned");

	Params::SettingsListEntry_ControllerButton_C_OnSettingAssigned Parms{};

	Parms.ActionText = std::move(ActionText);

	UObject::ProcessEvent(Func, &Parms);
}

}

