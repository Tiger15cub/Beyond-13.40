#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GroupChallengeTag

#include "Basic.hpp"

#include "GroupChallengeTag_classes.hpp"
#include "GroupChallengeTag_parameters.hpp"


namespace SDK
{

// Function GroupChallengeTag.GroupChallengeTag_C.ExecuteUbergraph_GroupChallengeTag
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGroupChallengeTag_C::ExecuteUbergraph_GroupChallengeTag(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GroupChallengeTag_C", "ExecuteUbergraph_GroupChallengeTag");

	Params::GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GroupChallengeTag.GroupChallengeTag_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGroupChallengeTag_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GroupChallengeTag_C", "PreConstruct");

	Params::GroupChallengeTag_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GroupChallengeTag.GroupChallengeTag_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGroupChallengeTag_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GroupChallengeTag_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
