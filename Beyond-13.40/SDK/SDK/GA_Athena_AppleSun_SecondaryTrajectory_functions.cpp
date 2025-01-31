#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_AppleSun_SecondaryTrajectory

#include "Basic.hpp"

#include "GA_Athena_AppleSun_SecondaryTrajectory_classes.hpp"
#include "GA_Athena_AppleSun_SecondaryTrajectory_parameters.hpp"


namespace SDK
{

// Function GA_Athena_AppleSun_SecondaryTrajectory.GA_Athena_AppleSun_SecondaryTrajectory_C.ExecuteUbergraph_GA_Athena_AppleSun_SecondaryTrajectory
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_AppleSun_SecondaryTrajectory_C::ExecuteUbergraph_GA_Athena_AppleSun_SecondaryTrajectory(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_AppleSun_SecondaryTrajectory_C", "ExecuteUbergraph_GA_Athena_AppleSun_SecondaryTrajectory");

	Params::GA_Athena_AppleSun_SecondaryTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_SecondaryTrajectory Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_AppleSun_SecondaryTrajectory.GA_Athena_AppleSun_SecondaryTrajectory_C.Remove Item?
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_AppleSun_SecondaryTrajectory_C::Remove_Item_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_AppleSun_SecondaryTrajectory_C", "Remove Item?");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_AppleSun_SecondaryTrajectory.GA_Athena_AppleSun_SecondaryTrajectory_C.UpdateTrajectory
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_AppleSun_SecondaryTrajectory_C::UpdateTrajectory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_AppleSun_SecondaryTrajectory_C", "UpdateTrajectory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_AppleSun_SecondaryTrajectory.GA_Athena_AppleSun_SecondaryTrajectory_C.K2_CommitExecute
// (Event, Public, BlueprintEvent)

void UGA_Athena_AppleSun_SecondaryTrajectory_C::K2_CommitExecute()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_AppleSun_SecondaryTrajectory_C", "K2_CommitExecute");

	UObject::ProcessEvent(Func, nullptr);
}

}

