#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_HeldObject_Generic

#include "Basic.hpp"

#include "B_HeldObject_Generic_classes.hpp"
#include "B_HeldObject_Generic_parameters.hpp"


namespace SDK
{

// Function B_HeldObject_Generic.B_HeldObject_Generic_C.ExecuteUbergraph_B_HeldObject_Generic
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_HeldObject_Generic_C::ExecuteUbergraph_B_HeldObject_Generic(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HeldObject_Generic_C", "ExecuteUbergraph_B_HeldObject_Generic");

	Params::B_HeldObject_Generic_C_ExecuteUbergraph_B_HeldObject_Generic Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_HeldObject_Generic.B_HeldObject_Generic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_HeldObject_Generic_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HeldObject_Generic_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

