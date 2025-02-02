#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ExplosvieBow_AnimBP

#include "Basic.hpp"

#include "ExplosvieBow_AnimBP_classes.hpp"
#include "ExplosvieBow_AnimBP_parameters.hpp"


namespace SDK
{

// Function ExplosvieBow_AnimBP.ExplosvieBow_AnimBP_C.ExecuteUbergraph_ExplosvieBow_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UExplosvieBow_AnimBP_C::ExecuteUbergraph_ExplosvieBow_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ExplosvieBow_AnimBP_C", "ExecuteUbergraph_ExplosvieBow_AnimBP");

	Params::ExplosvieBow_AnimBP_C_ExecuteUbergraph_ExplosvieBow_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ExplosvieBow_AnimBP.ExplosvieBow_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosvieBow_AnimBP_AnimGraphNode_ModifyBone_0E1011B841DA7A109A69F18ED59C9A93
// (BlueprintEvent)

void UExplosvieBow_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosvieBow_AnimBP_AnimGraphNode_ModifyBone_0E1011B841DA7A109A69F18ED59C9A93()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ExplosvieBow_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosvieBow_AnimBP_AnimGraphNode_ModifyBone_0E1011B841DA7A109A69F18ED59C9A93");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ExplosvieBow_AnimBP.ExplosvieBow_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosvieBow_AnimBP_AnimGraphNode_ModifyBone_D0BC44E84FB0F05DC49A24B18D5B2D51
// (BlueprintEvent)

void UExplosvieBow_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosvieBow_AnimBP_AnimGraphNode_ModifyBone_D0BC44E84FB0F05DC49A24B18D5B2D51()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ExplosvieBow_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosvieBow_AnimBP_AnimGraphNode_ModifyBone_D0BC44E84FB0F05DC49A24B18D5B2D51");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ExplosvieBow_AnimBP.ExplosvieBow_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UExplosvieBow_AnimBP_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ExplosvieBow_AnimBP_C", "AnimGraph");

	Params::ExplosvieBow_AnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}

}

