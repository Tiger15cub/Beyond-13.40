#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_MED_Black_Knight_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function F_MED_Black_Knight_AnimBP.F_MED_Black_Knight_AnimBP_C.ExecuteUbergraph_F_MED_Black_Knight_AnimBP
// 0x0018 (0x0018 - 0x0000)
struct F_MED_Black_Knight_AnimBP_C_ExecuteUbergraph_F_MED_Black_Knight_AnimBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D61[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckForBackbling_bIsWearingBackbling;    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckForBackbling_bIsBackblingLong;       // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function F_MED_Black_Knight_AnimBP.F_MED_Black_Knight_AnimBP_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct F_MED_Black_Knight_AnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};

}

