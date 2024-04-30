#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ApplyMedkit_Athena_AnimBP

#include "Basic.hpp"

#include "ApplyMedkit_Athena_AnimBP_classes.hpp"
#include "ApplyMedkit_Athena_AnimBP_parameters.hpp"


namespace SDK
{

// Function ApplyMedkit_Athena_AnimBP.ApplyMedkit_Athena_AnimBP_C.ExecuteUbergraph_ApplyMedkit_Athena_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UApplyMedkit_Athena_AnimBP_C::ExecuteUbergraph_ApplyMedkit_Athena_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ApplyMedkit_Athena_AnimBP_C", "ExecuteUbergraph_ApplyMedkit_Athena_AnimBP");

	Params::ApplyMedkit_Athena_AnimBP_C_ExecuteUbergraph_ApplyMedkit_Athena_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ApplyMedkit_Athena_AnimBP.ApplyMedkit_Athena_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UApplyMedkit_Athena_AnimBP_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ApplyMedkit_Athena_AnimBP_C", "AnimGraph");

	Params::ApplyMedkit_Athena_AnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}

}
