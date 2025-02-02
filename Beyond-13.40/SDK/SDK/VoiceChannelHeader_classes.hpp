#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VoiceChannelHeader

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass VoiceChannelHeader.VoiceChannelHeader_C
// 0x0010 (0x0300 - 0x02F0)
class UVoiceChannelHeader_C final : public UFortVoiceChannelHeaderEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           VBox_ActiveChannelExtras;                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_VoiceChannelHeader(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VoiceChannelHeader_C">();
	}
	static class UVoiceChannelHeader_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVoiceChannelHeader_C>();
	}
};

}

