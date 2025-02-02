#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BannerEditorTile

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_BannerEditorTile.BP_BannerEditorTile_C
// 0x0050 (0x0BD0 - 0x0B80)
class UBP_BannerEditorTile_C final : public UFortPlayerProfileBannerEditorTile
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B80(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 ColorImage;                                        // 0x0B88(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  CommonWidgetSwitcher_0;                            // 0x0B90(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconImage;                                         // 0x0B98(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLoadGuard*                       IconLoadGuard;                                     // 0x0BA0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BannerEditBorder;                            // 0x0BA8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNormalBangWrapper_C*                   NormalBangWrapper;                                 // 0x0BB0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               ColorMID;                                          // 0x0BB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             BannerTileBangUpdated;                             // 0x0BC0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BannerTileBangUpdated__DelegateSignature();
	void ExecuteUbergraph_BP_BannerEditorTile(int32 EntryPoint);
	void BP_OnHovered();
	void BP_OnSelected();
	void HandleBannerIconLoadGuardFinished(class UObject* Object);
	void Construct();
	void OnListItemObjectSet(class UObject* ListItemObject);
	void Update_Bang_State();
	void Mark_Item_As_Seen();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BannerEditorTile_C">();
	}
	static class UBP_BannerEditorTile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_BannerEditorTile_C>();
	}
};

}

