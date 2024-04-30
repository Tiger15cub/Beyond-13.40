#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Space_Wanderer_Head_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "LiveLink_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Space_Wanderer_Head_AnimBP.Space_Wanderer_Head_AnimBP_C
// 0x1430 (0x1890 - 0x0460)
class USpace_Wanderer_Head_AnimBP_C final : public UHeadPartAnimInstance
{
public:
	uint8                                         Pad_728C[0x8];                                     // 0x0458(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0460(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0468(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0498(0x0078)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_4;                  // 0x0510(0x00C0)()
	struct FAnimNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend;                         // 0x05D0(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_5;                    // 0x0698(0x00C8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_17;                    // 0x0760(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_16;                    // 0x0788(0x0028)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_4;                    // 0x07B0(0x00C8)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0878(0x0048)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_3;                  // 0x08C0(0x00C0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_15;                    // 0x0980(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_14;                    // 0x09A8(0x0028)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x09D0(0x0108)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0AD8(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0AF8(0x0020)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_3;                    // 0x0B18(0x00C8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_13;                    // 0x0BE0(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_2;                   // 0x0C08(0x00A0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_12;                    // 0x0CA8(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_11;                    // 0x0CD0(0x0028)()
	struct FAnimNode_LiveLinkPose                 AnimGraphNode_LiveLinkPose_1;                      // 0x0CF8(0x0050)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_2;                    // 0x0D48(0x00C8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_10;                    // 0x0E10(0x0028)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_1;                   // 0x0E38(0x00B0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_9;                     // 0x0EE8(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x0F10(0x00A0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_8;                     // 0x0FB0(0x0028)()
	struct FAnimNode_LiveLinkPose                 AnimGraphNode_LiveLinkPose;                        // 0x0FD8(0x0050)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_2;                  // 0x1028(0x00C0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x10E8(0x00C8)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh;                    // 0x11B0(0x0140)(ContainsInstancedReference)
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_7;                     // 0x12F0(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_6;                     // 0x1318(0x0028)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;                     // 0x1340(0x00B0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_5;                     // 0x13F0(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;                     // 0x1418(0x0028)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_1;                  // 0x1440(0x00C0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x1500(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x1528(0x0028)()
	struct FAnimNode_PoseBlendNode                AnimGraphNode_PoseBlendNode;                       // 0x1550(0x0098)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x15E8(0x00C8)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x16B0(0x00A0)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x1750(0x00C0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x1810(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x1838(0x0028)()
	class USkeletalMeshComponent*                 MeshToCopy;                                        // 0x1860(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GetPlayerListUsesCustomCharacterParts;             // 0x1868(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsMoving;                                         // 0x1869(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsOnGround_0;                                     // 0x186A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsSlopeSliding_0;                                 // 0x186B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsFallingLocal;                                   // 0x186C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsJumpingLocal;                                   // 0x186D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsCrouching_0;                                    // 0x186E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsCrouchWalking;                                  // 0x186F(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsCrouchSprinting_0;                              // 0x1870(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsSprinting_0;                                    // 0x1871(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsJogging_0;                                      // 0x1872(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsDBNO_0;                                         // 0x1873(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsTargeting_0;                                    // 0x1874(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsDancing;                                        // 0x1875(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsMeleeSwing_0;                                   // 0x1876(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsLocomotion_0;                                   // 0x1877(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bRecentlyFired_0;                                  // 0x1878(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_728D[0x3];                                     // 0x1879(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LastFireTime;                                      // 0x187C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSkydiving0;                                      // 0x1880(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsDive0;                                           // 0x1881(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Hair_base_active;                                  // 0x1882(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_Space_Wanderer_Head_AnimBP(int32 EntryPoint);
	void OnCharacterCustomizationLoaded();
	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Space_Wanderer_Head_AnimBP_C">();
	}
	static class USpace_Wanderer_Head_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpace_Wanderer_Head_AnimBP_C>();
	}
};

}
