#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaCustomizationPickerTileButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C
// 0x0048 (0x0BF8 - 0x0BB0)
class UAthenaCustomizationPickerTileButton_C final : public UAthenaCustomizationPickerTileButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BB0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnHover;                                           // 0x0BB8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UFortLazyImage*                         Image_Equipped;                                    // 0x0BC0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               NullItemOverlay;                                   // 0x0BC8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        RootWidgetSwitcher;                                // 0x0BD0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 UnownedDampen;                                     // 0x0BD8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsSlottedSomewhere;                                // 0x0BE0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EAA[0x7];                                     // 0x0BE1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             PickedButtonHovered;                               // 0x0BE8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void PickedButtonHovered__DelegateSignature(class UWidgetSwitcher* WidgetSwitcher);
	void ExecuteUbergraph_AthenaCustomizationPickerTileButton(int32 EntryPoint);
	void OnEquippedStateChanged(bool bEquipped, bool bOnDifferentSlot);
	void OnChangeOwnedState(bool bOwned);
	void BP_OnUnhovered();
	void BP_OnHovered();
	void OnListItemObjectSet(class UObject* ListItemObject);
	void HandleEquippedStateChanged(bool bEquipped, bool bOnDifferentSlot);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaCustomizationPickerTileButton_C">();
	}
	static class UAthenaCustomizationPickerTileButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaCustomizationPickerTileButton_C>();
	}
};

}

