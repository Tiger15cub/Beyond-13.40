#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BF_ManagedParticles

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function BF_ManagedParticles.BF_ManagedParticles_C.getNiagaraParticles
// 0x0060 (0x0060 - 0x0000)
struct BF_ManagedParticles_C_GetNiagaraParticles final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  Gameplay_Tag_Container;                            // 0x0008(0x0020)(Parm, OutParm)
	struct FGameplayTag                           NiagaraTag;                                        // 0x0028(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                   K2Node_MakeArray_Array;                            // 0x0030(0x0010)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_MakeGameplayTagContainerFromArray_ReturnValue; // 0x0040(0x0020)()
};

// Function BF_ManagedParticles.BF_ManagedParticles_C.Activate Managed Niagara
// 0x0038 (0x0038 - 0x0000)
struct BF_ManagedParticles_C_Activate_Managed_Niagara final
{
public:
	bool                                          Reset;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D12[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Niagara;                                           // 0x0010(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_getNiagaraParticles_Gameplay_Tag_Container; // 0x0018(0x0020)()
};

// Function BF_ManagedParticles.BF_ManagedParticles_C.Deactivate Managed Niagara
// 0x0028 (0x0028 - 0x0000)
struct BF_ManagedParticles_C_Deactivate_Managed_Niagara final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_getNiagaraParticles_Gameplay_Tag_Container; // 0x0008(0x0020)()
};

// Function BF_ManagedParticles.BF_ManagedParticles_C.Set Managed Particles Parameter (Bool)
// 0x0038 (0x0038 - 0x0000)
struct BF_ManagedParticles_C_Set_Managed_Particles_Parameter__Bool_ final
{
public:
	class FName                                   Param_Name;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Value;                                             // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D13[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_getNiagaraParticles_Gameplay_Tag_Container; // 0x0018(0x0020)()
};

}
