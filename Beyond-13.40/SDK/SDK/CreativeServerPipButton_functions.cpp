#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CreativeServerPipButton

#include "Basic.hpp"

#include "CreativeServerPipButton_classes.hpp"
#include "CreativeServerPipButton_parameters.hpp"


namespace SDK
{

// Function CreativeServerPipButton.CreativeServerPipButton_C.ExecuteUbergraph_CreativeServerPipButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativeServerPipButton_C::ExecuteUbergraph_CreativeServerPipButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeServerPipButton_C", "ExecuteUbergraph_CreativeServerPipButton");

	Params::CreativeServerPipButton_C_ExecuteUbergraph_CreativeServerPipButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CreativeServerPipButton.CreativeServerPipButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UCreativeServerPipButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeServerPipButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CreativeServerPipButton.CreativeServerPipButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UCreativeServerPipButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeServerPipButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CreativeServerPipButton.CreativeServerPipButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCreativeServerPipButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeServerPipButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CreativeServerPipButton.CreativeServerPipButton_C.OnActionComplete
// (Event, Protected, BlueprintEvent)

void UCreativeServerPipButton_C::OnActionComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeServerPipButton_C", "OnActionComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CreativeServerPipButton.CreativeServerPipButton_C.OnActionProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   HeldPercent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativeServerPipButton_C::OnActionProgress(float HeldPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeServerPipButton_C", "OnActionProgress");

	Params::CreativeServerPipButton_C_OnActionProgress Parms{};

	Parms.HeldPercent = HeldPercent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CreativeServerPipButton.CreativeServerPipButton_C.OnTriggeredInputActionChanged
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle              NewTriggeredAction                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UCreativeServerPipButton_C::OnTriggeredInputActionChanged(const struct FDataTableRowHandle& NewTriggeredAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeServerPipButton_C", "OnTriggeredInputActionChanged");

	Params::CreativeServerPipButton_C_OnTriggeredInputActionChanged Parms{};

	Parms.NewTriggeredAction = std::move(NewTriggeredAction);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CreativeServerPipButton.CreativeServerPipButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bUsingGamepad                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCreativeServerPipButton_C::BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeServerPipButton_C", "BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");

	Params::CreativeServerPipButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CreativeServerPipButton.CreativeServerPipButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCreativeServerPipButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeServerPipButton_C", "PreConstruct");

	Params::CreativeServerPipButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CreativeServerPipButton.CreativeServerPipButton_C.UpdateTextAndStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UCreativeServerPipButton_C::UpdateTextAndStyle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeServerPipButton_C", "UpdateTextAndStyle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CreativeServerPipButton.CreativeServerPipButton_C.InitializeButton
// (Public, BlueprintCallable, BlueprintEvent)

void UCreativeServerPipButton_C::InitializeButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeServerPipButton_C", "InitializeButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CreativeServerPipButton.CreativeServerPipButton_C.UpdateStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bUsingGamepad                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCreativeServerPipButton_C::UpdateStyle(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeServerPipButton_C", "UpdateStyle");

	Params::CreativeServerPipButton_C_UpdateStyle Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CreativeServerPipButton.CreativeServerPipButton_C.UpdateInputActionLayout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCreativeServerPipButton_C::UpdateInputActionLayout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeServerPipButton_C", "UpdateInputActionLayout");

	UObject::ProcessEvent(Func, nullptr);
}

}
