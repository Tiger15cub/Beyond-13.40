#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SocialUMG

#include "Basic.hpp"

#include "SocialUMG_classes.hpp"
#include "SocialUMG_parameters.hpp"


namespace SDK
{

// Function SocialUMG.SocialChatContainer.DynamicHandleMessageTextCommitted
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FText                             MessageText                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// ETextCommit                             CommitMethod                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USocialChatContainer::DynamicHandleMessageTextCommitted(const class FText& MessageText, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialChatContainer", "DynamicHandleMessageTextCommitted");

	Params::SocialChatContainer_DynamicHandleMessageTextCommitted Parms{};

	Parms.MessageText = std::move(MessageText);
	Parms.CommitMethod = CommitMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SocialUMG.SocialChatContainer.FocusEditableText
// (Final, Native, Public, BlueprintCallable)

void USocialChatContainer::FocusEditableText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialChatContainer", "FocusEditableText");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function SocialUMG.SocialChatContainer.HandleLeftTabPressed
// (Final, Native, Public, BlueprintCallable)

void USocialChatContainer::HandleLeftTabPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialChatContainer", "HandleLeftTabPressed");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function SocialUMG.SocialChatContainer.HandleRightTabPressed
// (Final, Native, Public, BlueprintCallable)

void USocialChatContainer::HandleRightTabPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialChatContainer", "HandleRightTabPressed");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function SocialUMG.SocialChatContainer.OnChatOpenChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bShouldBeOpen                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USocialChatContainer::OnChatOpenChanged(bool bShouldBeOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialChatContainer", "OnChatOpenChanged");

	Params::SocialChatContainer_OnChatOpenChanged Parms{};

	Parms.bShouldBeOpen = bShouldBeOpen;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SocialUMG.SocialChatContainer.SendCurrentMessage
// (Final, Native, Public, BlueprintCallable)

void USocialChatContainer::SendCurrentMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialChatContainer", "SendCurrentMessage");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function SocialUMG.SocialChatMessageEntry.OnMessageSet
// (Event, Protected, BlueprintEvent)

void USocialChatMessageEntry::OnMessageSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialChatMessageEntry", "OnMessageSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SocialUMG.SocialChatMessageEntry.CanInteract
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USocialChatMessageEntry::CanInteract() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialChatMessageEntry", "CanInteract");

	Params::SocialChatMessageEntry_CanInteract Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SocialUMG.SocialGroupListEntry.HandleGetMenuContent
// (Final, Native, Protected)
// Parameters:
// class UWidget*                          ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* USocialGroupListEntry::HandleGetMenuContent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialGroupListEntry", "HandleGetMenuContent");

	Params::SocialGroupListEntry_HandleGetMenuContent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SocialUMG.SocialInteractionButton.OnInteractionSet
// (Event, Protected, BlueprintEvent)

void USocialInteractionButton::OnInteractionSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialInteractionButton", "OnInteractionSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SocialUMG.SocialInteractionButton.GetInteractionName
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName USocialInteractionButton::GetInteractionName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialInteractionButton", "GetInteractionName");

	Params::SocialInteractionButton_GetInteractionName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SocialUMG.SocialInteractionButton.IsPlatformOnlyFriend
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USocialInteractionButton::IsPlatformOnlyFriend() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialInteractionButton", "IsPlatformOnlyFriend");

	Params::SocialInteractionButton_IsPlatformOnlyFriend Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SocialUMG.SocialActionMenu.HandleMenuAnchorOpenChanged
// (Final, Native, Protected)
// Parameters:
// bool                                    bIsOpen                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USocialActionMenu::HandleMenuAnchorOpenChanged(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialActionMenu", "HandleMenuAnchorOpenChanged");

	Params::SocialActionMenu_HandleMenuAnchorOpenChanged Parms{};

	Parms.bIsOpen = bIsOpen;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SocialUMG.SocialActionMenu.OnOpened
// (Event, Protected, BlueprintEvent)

void USocialActionMenu::OnOpened()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialActionMenu", "OnOpened");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SocialUMG.SocialInteractionMenu.OnToggleConfirmation
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsVisible                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USocialInteractionMenu::OnToggleConfirmation(bool bIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialInteractionMenu", "OnToggleConfirmation");

	Params::SocialInteractionMenu_OnToggleConfirmation Parms{};

	Parms.bIsVisible = bIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SocialUMG.SocialInteractionMenu.GetFirstEntryToCenter
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* USocialInteractionMenu::GetFirstEntryToCenter() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialInteractionMenu", "GetFirstEntryToCenter");

	Params::SocialInteractionMenu_GetFirstEntryToCenter Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SocialUMG.SocialListInteractableEntryBase.HandleGetMenuContent
// (Final, Native, Protected)
// Parameters:
// class UWidget*                          ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* USocialListInteractableEntryBase::HandleGetMenuContent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialListInteractableEntryBase", "HandleGetMenuContent");

	Params::SocialListInteractableEntryBase_HandleGetMenuContent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SocialUMG.SocialListInteractableEntryBase.HandleMenuOpenChanged
// (Final, Native, Private)
// Parameters:
// bool                                    bIsMenuOpen                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USocialListInteractableEntryBase::HandleMenuOpenChanged(bool bIsMenuOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialListInteractableEntryBase", "HandleMenuOpenChanged");

	Params::SocialListInteractableEntryBase_HandleMenuOpenChanged Parms{};

	Parms.bIsMenuOpen = bIsMenuOpen;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
