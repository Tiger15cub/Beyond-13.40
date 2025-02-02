#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BladeMenu_SocialPanel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BladeMenu_SocialPanel.BladeMenu_SocialPanel_C
// 0x0020 (0x0320 - 0x0300)
class UBladeMenu_SocialPanel_C final : public UFortBladeMenu_SocialPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0300(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnClose;                                           // 0x0308(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnOpen;                                            // 0x0310(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_Content;                                  // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BladeMenu_SocialPanel(int32 EntryPoint);
	void OnCloseAnimationFinished();
	void OnInitialized();
	void OnClosed();
	void OnOpened();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BladeMenu_SocialPanel_C">();
	}
	static class UBladeMenu_SocialPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBladeMenu_SocialPanel_C>();
	}
};

}

