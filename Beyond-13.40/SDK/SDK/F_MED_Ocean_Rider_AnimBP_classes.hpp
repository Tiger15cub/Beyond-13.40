#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_MED_Ocean_Rider_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass F_MED_Ocean_Rider_AnimBP.F_MED_Ocean_Rider_AnimBP_C
// 0x4110 (0x4560 - 0x0450)
class UF_MED_Ocean_Rider_AnimBP_C final : public UCustomCharacterPartAnimInstance_OceanRiderBody
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0450(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0458(0x0030)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh;                    // 0x0488(0x0140)(ContainsInstancedReference)
	uint8                                         Pad_4BFD[0x8];                                     // 0x05C8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody_7;                         // 0x05D0(0x0650)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0C20(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0C40(0x0020)()
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody_6;                         // 0x0C60(0x0650)()
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody_5;                         // 0x12B0(0x0650)()
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody_4;                         // 0x1900(0x0650)()
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody_3;                         // 0x1F50(0x0650)()
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint_10;                       // 0x25A0(0x0108)()
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint_9;                        // 0x26A8(0x0108)()
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint_8;                        // 0x27B0(0x0108)()
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint_7;                        // 0x28B8(0x0108)()
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint_6;                        // 0x29C0(0x0108)()
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint_5;                        // 0x2AC8(0x0108)()
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody_2;                         // 0x2BD0(0x0650)()
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint_4;                        // 0x3220(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x3328(0x0108)()
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint_3;                        // 0x3430(0x0108)()
	uint8                                         Pad_4BFE[0x8];                                     // 0x3538(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody_1;                         // 0x3540(0x0650)()
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint_2;                        // 0x3B90(0x0108)()
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint_1;                        // 0x3C98(0x0108)()
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint;                          // 0x3DA0(0x0108)()
	struct FAnimNode_ModifyCurve                  AnimGraphNode_ModifyCurve;                         // 0x3EA8(0x0058)()
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody;                           // 0x3F00(0x0650)()
	class USkeletalMeshComponent*                 Skel_mesh;                                         // 0x4550(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HeadRot_b;                                         // 0x4558(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LeftArmDown_b;                                     // 0x455C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_F_MED_Ocean_Rider_AnimBP(int32 EntryPoint);
	void BlueprintInitializeAnimation();
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"F_MED_Ocean_Rider_AnimBP_C">();
	}
	static class UF_MED_Ocean_Rider_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UF_MED_Ocean_Rider_AnimBP_C>();
	}
};

}
