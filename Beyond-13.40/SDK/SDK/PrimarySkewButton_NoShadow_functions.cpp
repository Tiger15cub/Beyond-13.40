#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PrimarySkewButton_NoShadow

#include "Basic.hpp"

#include "PrimarySkewButton_NoShadow_classes.hpp"
#include "PrimarySkewButton_NoShadow_parameters.hpp"


namespace SDK
{

// Function PrimarySkewButton_NoShadow.PrimarySkewButton_NoShadow_C.ExecuteUbergraph_PrimarySkewButton_NoShadow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPrimarySkewButton_NoShadow_C::ExecuteUbergraph_PrimarySkewButton_NoShadow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PrimarySkewButton_NoShadow_C", "ExecuteUbergraph_PrimarySkewButton_NoShadow");

	Params::PrimarySkewButton_NoShadow_C_ExecuteUbergraph_PrimarySkewButton_NoShadow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PrimarySkewButton_NoShadow.PrimarySkewButton_NoShadow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPrimarySkewButton_NoShadow_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PrimarySkewButton_NoShadow_C", "PreConstruct");

	Params::PrimarySkewButton_NoShadow_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PrimarySkewButton_NoShadow.PrimarySkewButton_NoShadow_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bUsingGamepad                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPrimarySkewButton_NoShadow_C::BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PrimarySkewButton_NoShadow_C", "BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");

	Params::PrimarySkewButton_NoShadow_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PrimarySkewButton_NoShadow.PrimarySkewButton_NoShadow_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)

void UPrimarySkewButton_NoShadow_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PrimarySkewButton_NoShadow_C", "BP_OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PrimarySkewButton_NoShadow.PrimarySkewButton_NoShadow_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UPrimarySkewButton_NoShadow_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PrimarySkewButton_NoShadow_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PrimarySkewButton_NoShadow.PrimarySkewButton_NoShadow_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UPrimarySkewButton_NoShadow_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PrimarySkewButton_NoShadow_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PrimarySkewButton_NoShadow.PrimarySkewButton_NoShadow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPrimarySkewButton_NoShadow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PrimarySkewButton_NoShadow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PrimarySkewButton_NoShadow.PrimarySkewButton_NoShadow_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UPrimarySkewButton_NoShadow_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PrimarySkewButton_NoShadow_C", "OnMouseButtonDown");

	Params::PrimarySkewButton_NoShadow_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function PrimarySkewButton_NoShadow.PrimarySkewButton_NoShadow_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UPrimarySkewButton_NoShadow_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PrimarySkewButton_NoShadow_C", "OnMouseButtonUp");

	Params::PrimarySkewButton_NoShadow_C_OnMouseButtonUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

