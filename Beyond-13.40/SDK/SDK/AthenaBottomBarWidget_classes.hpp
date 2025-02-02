#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaBottomBarWidget

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaBottomBarWidget.AthenaBottomBarWidget_C
// 0x00A8 (0x0300 - 0x0258)
class UAthenaBottomBarWidget_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0258(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                BorderShell;                                       // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBoundActionBar*                  CommonBoundActionBar_121;                          // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                            MobileBackground;                                  // 0x0270(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Display_Owner_Actions_Only;                        // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_AthenaBottomBarWidget(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaBottomBarWidget_C">();
	}
	static class UAthenaBottomBarWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaBottomBarWidget_C>();
	}
};

}

