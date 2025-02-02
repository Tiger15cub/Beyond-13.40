#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemAttributesDetailWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemAttributesDetailWidget.ItemAttributesDetailWidget_C
// 0x0010 (0x02C0 - 0x02B0)
class UItemAttributesDetailWidget_C final : public UFortItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStatsListWidget_C*                     StatsListWidget;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void UpdateItemsForWidgets();
	void HandlePostDifferentItemToDetailSet();
	void HandlePostDifferentItemToCompareWithSet();
	void HandleShouldPreviewUpgradingItemChanged();
	void HandleItemToDetailChangedBP();
	void HandleItemToCompareWithChangedBP();
	void HandleUpgradeLevelDeltaChanged();
	void ExecuteUbergraph_ItemAttributesDetailWidget(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemAttributesDetailWidget_C">();
	}
	static class UItemAttributesDetailWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemAttributesDetailWidget_C>();
	}
};

}

