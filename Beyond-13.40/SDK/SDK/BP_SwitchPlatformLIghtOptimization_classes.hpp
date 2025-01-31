#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SwitchPlatformLIghtOptimization

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SwitchPlatformLIghtOptimization.BP_SwitchPlatformLIghtOptimization_C
// 0x0038 (0x0258 - 0x0220)
class ABP_SwitchPlatformLIghtOptimization_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Debug;                                             // 0x0230(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7299[0x7];                                     // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Spotlights_PC;                                     // 0x0238(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	TArray<class AActor*>                         Spotlights_Switch;                                 // 0x0248(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SwitchPlatformLIghtOptimization(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void SwitchLights(bool EnableSwitchPlatform);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SwitchPlatformLIghtOptimization_C">();
	}
	static class ABP_SwitchPlatformLIghtOptimization_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SwitchPlatformLIghtOptimization_C>();
	}
};

}

