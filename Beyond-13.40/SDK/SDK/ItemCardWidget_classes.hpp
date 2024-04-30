#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemCardWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemCardWidget.ItemCardWidget_C
// 0x0100 (0x0C70 - 0x0B70)
class UItemCardWidget_C final : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B70(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Show;                                              // 0x0B78(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                 FortMultiSizeItemCard_0;                           // 0x0B80(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnHoveredEvent;                                    // 0x0B88(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FFortReceivedItemLootInfo              ItemReceivedInfo_BP;                               // 0x0B98(0x00C8)(Edit, BlueprintVisible, ExposeOnSpawn)
	class USoundBase*                             SoundOnItemCardShow;                               // 0x0C60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Cscs;                                              // 0x0C68(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void OnCentered();
	void PlayShow(int32 Idx);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void BP_OnHovered();
	void Construct();
	void ExecuteUbergraph_ItemCardWidget(int32 EntryPoint);
	void OnHoveredEvent__DelegateSignature(const struct FFortReceivedItemLootInfo& NewParam);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemCardWidget_C">();
	}
	static class UItemCardWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemCardWidget_C>();
	}
};

}
