#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EventLeaderboardEventDetails

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EventLeaderboardEventDetails.EventLeaderboardEventDetails_C
// 0x0020 (0x0630 - 0x0610)
class UEventLeaderboardEventDetails_C final : public UFortShowdownDetailView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0610(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       Text_EventName;                                    // 0x0618(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_RegionName;                                   // 0x0620(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_SessionName;                                  // 0x0628(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_EventLeaderboardEventDetails(int32 EntryPoint);
	void RefreshDataBP();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventLeaderboardEventDetails_C">();
	}
	static class UEventLeaderboardEventDetails_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventLeaderboardEventDetails_C>();
	}
};

}

