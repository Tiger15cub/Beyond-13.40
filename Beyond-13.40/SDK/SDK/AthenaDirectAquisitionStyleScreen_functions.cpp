#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaDirectAquisitionStyleScreen

#include "Basic.hpp"

#include "AthenaDirectAquisitionStyleScreen_classes.hpp"
#include "AthenaDirectAquisitionStyleScreen_parameters.hpp"


namespace SDK
{

// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.ExecuteUbergraph_AthenaDirectAquisitionStyleScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAquisitionStyleScreen_C::ExecuteUbergraph_AthenaDirectAquisitionStyleScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAquisitionStyleScreen_C", "ExecuteUbergraph_AthenaDirectAquisitionStyleScreen");

	Params::AthenaDirectAquisitionStyleScreen_C_ExecuteUbergraph_AthenaDirectAquisitionStyleScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAquisitionStyleScreen_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAquisitionStyleScreen_C", "BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::AthenaDirectAquisitionStyleScreen_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.OnVariantChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     VariantChannel                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     VariantTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                                    IsOwned                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaDirectAquisitionStyleScreen_C::OnVariantChanged(const struct FGameplayTag& VariantChannel, const struct FGameplayTag& VariantTag, bool IsOwned)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAquisitionStyleScreen_C", "OnVariantChanged");

	Params::AthenaDirectAquisitionStyleScreen_C_OnVariantChanged Parms{};

	Parms.VariantChannel = std::move(VariantChannel);
	Parms.VariantTag = std::move(VariantTag);
	Parms.IsOwned = IsOwned;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BndEvt__Button_Next_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAquisitionStyleScreen_C::BndEvt__Button_Next_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAquisitionStyleScreen_C", "BndEvt__Button_Next_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::AthenaDirectAquisitionStyleScreen_C_BndEvt__Button_Next_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BndEvt__Button_Previous_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAquisitionStyleScreen_C::BndEvt__Button_Previous_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAquisitionStyleScreen_C", "BndEvt__Button_Previous_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::AthenaDirectAquisitionStyleScreen_C_BndEvt__Button_Previous_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAthenaDirectAquisitionStyleScreen_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAquisitionStyleScreen_C", "BP_OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaDirectAquisitionStyleScreen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAquisitionStyleScreen_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.OnOfferSet
// (Event, Public, BlueprintEvent)

void UAthenaDirectAquisitionStyleScreen_C::OnOfferSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAquisitionStyleScreen_C", "OnOfferSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPassThrough                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaDirectAquisitionStyleScreen_C::HandleBack(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAquisitionStyleScreen_C", "HandleBack");

	Params::AthenaDirectAquisitionStyleScreen_C_HandleBack Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.GetWidgetForFramingViewedItem
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UAthenaDirectAquisitionStyleScreen_C::GetWidgetForFramingViewedItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAquisitionStyleScreen_C", "GetWidgetForFramingViewedItem");

	Params::AthenaDirectAquisitionStyleScreen_C_GetWidgetForFramingViewedItem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.UpdateFromVariant
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     VariantChannelTag                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     VariantTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                                    IsOwned                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaDirectAquisitionStyleScreen_C::UpdateFromVariant(const struct FGameplayTag& VariantChannelTag, const struct FGameplayTag& VariantTag, bool IsOwned)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAquisitionStyleScreen_C", "UpdateFromVariant");

	Params::AthenaDirectAquisitionStyleScreen_C_UpdateFromVariant Parms{};

	Parms.VariantChannelTag = std::move(VariantChannelTag);
	Parms.VariantTag = std::move(VariantTag);
	Parms.IsOwned = IsOwned;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.ScanOfferForVariants
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAquisitionStyleScreen_C::ScanOfferForVariants()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAquisitionStyleScreen_C", "ScanOfferForVariants");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.SwitchToNextItemInOffer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Direction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAquisitionStyleScreen_C::SwitchToNextItemInOffer(int32 Direction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAquisitionStyleScreen_C", "SwitchToNextItemInOffer");

	Params::AthenaDirectAquisitionStyleScreen_C_SwitchToNextItemInOffer Parms{};

	Parms.Direction = Direction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.RebuildStylesFromOffer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAquisitionStyleScreen_C::RebuildStylesFromOffer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAquisitionStyleScreen_C", "RebuildStylesFromOffer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.GetOfferGrantedItemDef
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortAccountItemDefinition*       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UFortAccountItemDefinition* UAthenaDirectAquisitionStyleScreen_C::GetOfferGrantedItemDef()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAquisitionStyleScreen_C", "GetOfferGrantedItemDef");

	Params::AthenaDirectAquisitionStyleScreen_C_GetOfferGrantedItemDef Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.SetupCharacterItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAquisitionStyleScreen_C::SetupCharacterItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAquisitionStyleScreen_C", "SetupCharacterItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.ViewVaultItemWithBackpack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*              Param_ItemToRepresent                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAquisitionStyleScreen_C::ViewVaultItemWithBackpack(class UFortItemDefinition* Param_ItemToRepresent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAquisitionStyleScreen_C", "ViewVaultItemWithBackpack");

	Params::AthenaDirectAquisitionStyleScreen_C_ViewVaultItemWithBackpack Parms{};

	Parms.Param_ItemToRepresent = Param_ItemToRepresent;

	UObject::ProcessEvent(Func, &Parms);
}

}

