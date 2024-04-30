#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StatNumericTextBlock

#include "Basic.hpp"

#include "StatNumericTextBlock_classes.hpp"
#include "StatNumericTextBlock_parameters.hpp"


namespace SDK
{

// Function StatNumericTextBlock.StatNumericTextBlock_C.SetComparisonState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortBuffState                          Param_Buff_State                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatNumericTextBlock_C::SetComparisonState(EFortBuffState Param_Buff_State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatNumericTextBlock_C", "SetComparisonState");

	Params::StatNumericTextBlock_C_SetComparisonState Parms{};

	Parms.Param_Buff_State = Param_Buff_State;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatNumericTextBlock.StatNumericTextBlock_C.UpdateComparison
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStatNumericTextBlock_C::UpdateComparison()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatNumericTextBlock_C", "UpdateComparison");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StatNumericTextBlock.StatNumericTextBlock_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStatNumericTextBlock_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatNumericTextBlock_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StatNumericTextBlock.StatNumericTextBlock_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStatNumericTextBlock_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatNumericTextBlock_C", "PreConstruct");

	Params::StatNumericTextBlock_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatNumericTextBlock.StatNumericTextBlock_C.ExecuteUbergraph_StatNumericTextBlock
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatNumericTextBlock_C::ExecuteUbergraph_StatNumericTextBlock(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatNumericTextBlock_C", "ExecuteUbergraph_StatNumericTextBlock");

	Params::StatNumericTextBlock_C_ExecuteUbergraph_StatNumericTextBlock Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
