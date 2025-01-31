#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ArenaPersonalView

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ArenaPersonalView.ArenaPersonalView_C
// 0x0030 (0x0688 - 0x0658)
class UArenaPersonalView_C final : public UFortArenaPersonalDivisionView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0658(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                          CommonBorder_ContainerBG;                          // 0x0660(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       FunTitle;                                          // 0x0668(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_DivisionProgress;                    // 0x0670(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBoxHype;                                 // 0x0678(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x0680(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ArenaPersonalView(int32 EntryPoint);
	void Colorize(const struct FFortTournamentDisplayInfo& Color_Info);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ArenaPersonalView_C">();
	}
	static class UArenaPersonalView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UArenaPersonalView_C>();
	}
};

}

