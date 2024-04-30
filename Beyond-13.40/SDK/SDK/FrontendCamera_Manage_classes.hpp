#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FrontendCamera_Manage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FrontendCamera_Manage.FrontendCamera_Manage_C
// 0x0020 (0x07F0 - 0x07D0)
class AFrontendCamera_Manage_C final : public AFortCameraBase
{
public:
	uint8                                         Pad_6AE4[0x8];                                     // 0x07C8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                       LoginCamera_0;                                     // 0x07D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          ChangeTimeOfDayOnActivate;                         // 0x07E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void OnActivated(class AFortPlayerController* PlayerController);
	void OnDeactivated(class AFortPlayerController* PlayerController);
	void ExecuteUbergraph_FrontendCamera_Manage(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FrontendCamera_Manage_C">();
	}
	static class AFrontendCamera_Manage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFrontendCamera_Manage_C>();
	}
};

}
