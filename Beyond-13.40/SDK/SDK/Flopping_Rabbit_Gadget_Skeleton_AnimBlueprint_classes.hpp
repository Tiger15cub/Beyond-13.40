#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint.Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C
// 0x0EB0 (0x1120 - 0x0270)
class UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C final : public UAnimInstance
{
public:
	uint8                                         Pad_3E48[0x8];                                     // 0x0268(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_LinkedInputPose              AnimGraphNode_SubInput;                            // 0x0278(0x0088)()
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody;                           // 0x0300(0x0650)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x0950(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x0970(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x0990(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x09B8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x09E0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0A08(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0A30(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0AA8(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0AD8(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0B50(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0B80(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0BF8(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0C28(0x00B0)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0CD8(0x0108)()
	struct FAnimNode_Trail                        AnimGraphNode_Trail;                               // 0x0DE0(0x0260)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x1040(0x0048)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x1088(0x0030)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x10B8(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x10D8(0x0020)()
	struct FVector                                GripOffset;                                        // 0x10F8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OneHandGrip;                                       // 0x1104(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E49[0x3];                                     // 0x1105(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Trail_Alpha;                                       // 0x1108(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Trail_RelaxScale;                                  // 0x110C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               GripRotation;                                      // 0x1110(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsTethered;                                        // 0x111C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint(int32 EntryPoint);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C">();
	}
	static class UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C>();
	}
};

}
