#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LobbyPlayerPadGadgets

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C
// 0x0040 (0x0298 - 0x0258)
class ULobbyPlayerPadGadgets_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0258(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ULobbyGadgetButton_C*                   Gadget1;                                           // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULobbyGadgetButton_C*                   Gadget2;                                           // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         PlayerIndex;                                       // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F4D[0x4];                                     // 0x0274(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnGadgetsMouseEntered;                             // 0x0278(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnGadgetsMouseLeft;                                // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnGadgetsMouseEntered__DelegateSignature();
	void OnGadgetsMouseLeft__DelegateSignature();
	void ExecuteUbergraph_LobbyPlayerPadGadgets(int32 EntryPoint);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void Refresh(const struct FFortTeamMemberInfo& TeamMemberInfo);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnInputClicked();
	void Initialize(int32 Param_PlayerIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LobbyPlayerPadGadgets_C">();
	}
	static class ULobbyPlayerPadGadgets_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULobbyPlayerPadGadgets_C>();
	}
};

}

