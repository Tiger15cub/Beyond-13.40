#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Mechanical_Engineer_Female_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C
// 0x0CB0 (0x1100 - 0x0450)
class UMechanical_Engineer_Female_AnimBP_C final : public UCustomCharacterPartAnimInstance
{
public:
	uint8                                         Pad_5AE2[0x8];                                     // 0x0448(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0450(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x0458(0x0088)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x04E0(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0500(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0520(0x0030)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics;                        // 0x0550(0x0440)()
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody;                           // 0x0990(0x0650)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0FE0(0x0108)()
	struct FRotator                               Gear_rot;                                          // 0x10E8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AE3[0x4];                                     // 0x10F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 Skel_mesh;                                         // 0x10F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* Param_AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Mechanical_Engineer_Female_AnimBP_C">();
	}
	static class UMechanical_Engineer_Female_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMechanical_Engineer_Female_AnimBP_C>();
	}
};

}

