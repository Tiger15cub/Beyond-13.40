#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SimpleFeatured_YellowButton

#include "Basic.hpp"

#include "SimpleFeatured_YellowButton_classes.hpp"
#include "SimpleFeatured_YellowButton_parameters.hpp"


namespace SDK
{

// Function SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C.ExecuteUbergraph_SimpleFeatured_YellowButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USimpleFeatured_YellowButton_C::ExecuteUbergraph_SimpleFeatured_YellowButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SimpleFeatured_YellowButton_C", "ExecuteUbergraph_SimpleFeatured_YellowButton");

	Params::SimpleFeatured_YellowButton_C_ExecuteUbergraph_SimpleFeatured_YellowButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C.RefreshUI
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void USimpleFeatured_YellowButton_C::RefreshUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SimpleFeatured_YellowButton_C", "RefreshUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C.ChangeSecondaryText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             NewText                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USimpleFeatured_YellowButton_C::ChangeSecondaryText(const class FText& NewText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SimpleFeatured_YellowButton_C", "ChangeSecondaryText");

	Params::SimpleFeatured_YellowButton_C_ChangeSecondaryText Parms{};

	Parms.NewText = std::move(NewText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C.SetText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             NewText                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USimpleFeatured_YellowButton_C::SetText(const class FText& NewText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SimpleFeatured_YellowButton_C", "SetText");

	Params::SimpleFeatured_YellowButton_C_SetText Parms{};

	Parms.NewText = std::move(NewText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)

void USimpleFeatured_YellowButton_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SimpleFeatured_YellowButton_C", "BP_OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void USimpleFeatured_YellowButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SimpleFeatured_YellowButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void USimpleFeatured_YellowButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SimpleFeatured_YellowButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USimpleFeatured_YellowButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SimpleFeatured_YellowButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USimpleFeatured_YellowButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SimpleFeatured_YellowButton_C", "PreConstruct");

	Params::SimpleFeatured_YellowButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C.HandleSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USimpleFeatured_YellowButton_C::HandleSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SimpleFeatured_YellowButton_C", "HandleSize");

	UObject::ProcessEvent(Func, nullptr);
}

}
