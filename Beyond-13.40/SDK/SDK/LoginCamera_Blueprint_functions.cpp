#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoginCamera_Blueprint

#include "Basic.hpp"

#include "LoginCamera_Blueprint_classes.hpp"
#include "LoginCamera_Blueprint_parameters.hpp"


namespace SDK
{

// Function LoginCamera_Blueprint.LoginCamera_Blueprint_C.OnActivated
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerController*            PlayerController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALoginCamera_Blueprint_C::OnActivated(class AFortPlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoginCamera_Blueprint_C", "OnActivated");

	Params::LoginCamera_Blueprint_C_OnActivated Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LoginCamera_Blueprint.LoginCamera_Blueprint_C.ExecuteUbergraph_LoginCamera_Blueprint
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALoginCamera_Blueprint_C::ExecuteUbergraph_LoginCamera_Blueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoginCamera_Blueprint_C", "ExecuteUbergraph_LoginCamera_Blueprint");

	Params::LoginCamera_Blueprint_C_ExecuteUbergraph_LoginCamera_Blueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
