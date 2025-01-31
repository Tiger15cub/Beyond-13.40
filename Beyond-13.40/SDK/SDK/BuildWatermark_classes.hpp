#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BuildWatermark

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BuildWatermark.BuildWatermark_C
// 0x0008 (0x02C0 - 0x02B8)
class UBuildWatermark_C final : public UFortBuildWatermark
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BuildWatermark(int32 EntryPoint);
	void HandlePlayerStateChanged(const struct FFortTeamMemberInfo& PlayerInfo);
	void Destruct();
	void HandlePartyJoined();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BuildWatermark_C">();
	}
	static class UBuildWatermark_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBuildWatermark_C>();
	}
};

}

