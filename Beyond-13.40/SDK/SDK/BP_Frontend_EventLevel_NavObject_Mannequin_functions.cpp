#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Frontend_EventLevel_NavObject_Mannequin

#include "Basic.hpp"

#include "BP_Frontend_EventLevel_NavObject_Mannequin_classes.hpp"
#include "BP_Frontend_EventLevel_NavObject_Mannequin_parameters.hpp"


namespace SDK
{

// Function BP_Frontend_EventLevel_NavObject_Mannequin.BP_Frontend_EventLevel_NavObject_Mannequin_C.ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_Mannequin
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Frontend_EventLevel_NavObject_Mannequin_C::ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_Mannequin(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_Mannequin_C", "ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_Mannequin");

	Params::BP_Frontend_EventLevel_NavObject_Mannequin_C_ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_Mannequin Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Frontend_EventLevel_NavObject_Mannequin.BP_Frontend_EventLevel_NavObject_Mannequin_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Frontend_EventLevel_NavObject_Mannequin_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_Mannequin_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
