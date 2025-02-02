#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_HeldObjectSocket

#include "Basic.hpp"

#include "B_HeldObjectSocket_classes.hpp"
#include "B_HeldObjectSocket_parameters.hpp"


namespace SDK
{

// Function B_HeldObjectSocket.B_HeldObjectSocket_C.ExecuteUbergraph_B_HeldObjectSocket
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_HeldObjectSocket_C::ExecuteUbergraph_B_HeldObjectSocket(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HeldObjectSocket_C", "ExecuteUbergraph_B_HeldObjectSocket");

	Params::B_HeldObjectSocket_C_ExecuteUbergraph_B_HeldObjectSocket Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_HeldObjectSocket.B_HeldObjectSocket_C.EventOnSocketEmptied
// (BlueprintCallable, BlueprintEvent)

void AB_HeldObjectSocket_C::EventOnSocketEmptied()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HeldObjectSocket_C", "EventOnSocketEmptied");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_HeldObjectSocket.B_HeldObjectSocket_C.EventOnSocketFilled
// (BlueprintCallable, BlueprintEvent)

void AB_HeldObjectSocket_C::EventOnSocketFilled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HeldObjectSocket_C", "EventOnSocketFilled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_HeldObjectSocket.B_HeldObjectSocket_C.OnHitHeldObject
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           SelfActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_HeldObjectSocket_C::OnHitHeldObject(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HeldObjectSocket_C", "OnHitHeldObject");

	Params::B_HeldObjectSocket_C_OnHitHeldObject Parms{};

	Parms.SelfActor = SelfActor;
	Parms.OtherActor = OtherActor;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_HeldObjectSocket.B_HeldObjectSocket_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_HeldObjectSocket_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HeldObjectSocket_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_HeldObjectSocket.B_HeldObjectSocket_C.OnRep_SocketIsFilled
// (BlueprintCallable, BlueprintEvent)

void AB_HeldObjectSocket_C::OnRep_SocketIsFilled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HeldObjectSocket_C", "OnRep_SocketIsFilled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_HeldObjectSocket.B_HeldObjectSocket_C.ValidateHeldObject
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AB_HeldObject_Parent_C*           HeldObject_Input                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_HeldObject_Parent_C*           HeldObject_Output                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_HeldObjectSocket_C::ValidateHeldObject(class AB_HeldObject_Parent_C* HeldObject_Input, class AB_HeldObject_Parent_C** HeldObject_Output, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HeldObjectSocket_C", "ValidateHeldObject");

	Params::B_HeldObjectSocket_C_ValidateHeldObject Parms{};

	Parms.HeldObject_Input = HeldObject_Input;

	UObject::ProcessEvent(Func, &Parms);

	if (HeldObject_Output != nullptr)
		*HeldObject_Output = Parms.HeldObject_Output;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;
}

}

