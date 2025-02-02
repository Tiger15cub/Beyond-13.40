#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ToyOptionsComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ToyOptionsComponent.ToyOptionsComponent_C
// 0x00B8 (0x02D8 - 0x0220)
class UToyOptionsComponent_C final : public UFortActorOptionsComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TSoftClassPtr<class UClass>                   OptionsWidgetClass;                                // 0x0228(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   MyIslandTabList;                                   // 0x0250(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsMachine;                                         // 0x0278(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42CC[0x7];                                     // 0x0279(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerController*                  InteractingPlayer;                                 // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMatchmakingKnobsModal*             OutModalWidget;                                    // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInteractSuccess;                                  // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42CD[0x7];                                     // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 ClassToLoad;                                       // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   PropertyEditorWidgetClass;                         // 0x02A0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UUserWidget*                            CachedDisplayWidget;                               // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LoadingAssets;                                     // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ToyOptionsComponent(int32 EntryPoint);
	void DisplayOptions(class APlayerController* Param_InteractingPlayer, TSoftClassPtr<class UClass> WidgetClass);
	void OnLoaded_E8F4D2FB4AB5542DE83E50B51A402D27(class UClass* Loaded);
	bool BlueprintOnLocalInteract(class AFortPlayerPawn* InteractingPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ToyOptionsComponent_C">();
	}
	static class UToyOptionsComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UToyOptionsComponent_C>();
	}
};

}

