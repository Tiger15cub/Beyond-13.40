#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EventLeaderboardSummary

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EventLeaderboardSummary.EventLeaderboardSummary_C
// 0x00A8 (0x06B8 - 0x0610)
class UEventLeaderboardSummary_C final : public UFortShowdownDetailView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0610(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ViewAllHover;                                      // 0x0618(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UIconTextButton_C*                      Button_ViewAll;                                    // 0x0620(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorder_ContainerBG;                          // 0x0628(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorder_ScoringTitleBG;                       // 0x0630(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorder_ViewAllBG;                            // 0x0638(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_Title;                             // 0x0640(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardEntry_C*               EventLeaderboardEntry;                             // 0x0648(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardEntry_C*               EventLeaderboardEntry_0;                           // 0x0650(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardEntry_C*               EventLeaderboardEntry_1;                           // 0x0658(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardEntry_C*               EventLeaderboardEntry_2;                           // 0x0660(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardEntry_C*               EventLeaderboardEntry_3;                           // 0x0668(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardEntry_C*               EventLeaderboardEntry_4;                           // 0x0670(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardEntry_C*               EventLeaderboardEntry_5;                           // 0x0678(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardEntry_C*               EventLeaderboardEntry_6;                           // 0x0680(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardEntry_C*               EventLeaderboardEntry_7;                           // 0x0688(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardEntry_C*               EventLeaderboardEntry_8;                           // 0x0690(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_SummaryContent;                            // 0x0698(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_ViewFullLeaderboard;                          // 0x06A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             EventViewFullLeaderboard;                          // 0x06A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void EventViewFullLeaderboard__DelegateSignature(const class FString& TournamentId, const class FString& EventId);
	void ExecuteUbergraph_EventLeaderboardSummary(int32 EntryPoint);
	void RefreshDataBP();
	void BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void EventColorize(const struct FFortTournamentDisplayInfo& Param_TournamentDisplayInfo);
	void BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventLeaderboardSummary_C">();
	}
	static class UEventLeaderboardSummary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventLeaderboardSummary_C>();
	}
};

}

