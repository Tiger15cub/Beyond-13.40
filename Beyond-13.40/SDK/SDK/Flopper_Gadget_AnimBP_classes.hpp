#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Flopper_Gadget_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Flopper_Gadget_AnimBP.Flopper_Gadget_AnimBP_C
// 0x0550 (0x07C0 - 0x0270)
class UFlopper_Gadget_AnimBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_576B[0x8];                                     // 0x0268(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose;                        // 0x0278(0x0018)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0290(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x02B0(0x0020)()
	struct FAnimNode_Trail                        AnimGraphNode_Trail_1;                             // 0x02D0(0x0260)()
	struct FAnimNode_Trail                        AnimGraphNode_Trail;                               // 0x0530(0x0260)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0790(0x0030)()

public:
	void ExecuteUbergraph_Flopper_Gadget_AnimBP(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Flopper_Gadget_AnimBP_C">();
	}
	static class UFlopper_Gadget_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFlopper_Gadget_AnimBP_C>();
	}
};

}
