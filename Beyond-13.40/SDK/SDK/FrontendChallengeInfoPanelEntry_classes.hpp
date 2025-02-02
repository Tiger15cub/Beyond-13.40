#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FrontendChallengeInfoPanelEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FrontendChallengeInfoPanelEntry.FrontendChallengeInfoPanelEntry_C
// 0x0030 (0x02B8 - 0x0288)
class UFrontendChallengeInfoPanelEntry_C final : public UAthenaChallengeInfoPanelEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       PartyAssistInfoIntro;                              // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AmbientPartyAssistAttention;                       // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UGroupChallengeTag_C*                   GroupChallengeTag;                                 // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         PartyAssistHB;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherContent;                                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_FrontendChallengeInfoPanelEntry(int32 EntryPoint);
	void Construct();
	void OnLocalPlayerMissingAssistedChallenge();
	void OnChallengeInfoSet();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FrontendChallengeInfoPanelEntry_C">();
	}
	static class UFrontendChallengeInfoPanelEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFrontendChallengeInfoPanelEntry_C>();
	}
};

}

