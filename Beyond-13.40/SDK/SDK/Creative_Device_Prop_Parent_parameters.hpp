#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Creative_Device_Prop_Parent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EVisibleInGameState_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.On Play Mode Changed__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Creative_Device_Prop_Parent_C_On_Play_Mode_Changed__DelegateSignature final
{
public:
	bool                                          New_Play_Mode;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.ExecuteUbergraph_Creative_Device_Prop_Parent
// 0x00B8 (0x00B8 - 0x0000)
struct Creative_Device_Prop_Parent_C_ExecuteUbergraph_Creative_Device_Prop_Parent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A15[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortMinigame*                          K2Node_ComponentBoundEvent_Minigame;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A16[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortMinigame*                          K2Node_ComponentBoundEvent_Minigame_1;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A17[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class AFortMinigame* Minigame, bool bIsInPlayMode)> K2Node_CreateDelegate_OutputDelegate;              // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_1A18[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortMinigame*                          K2Node_CustomEvent_Minigame;                       // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortMinigameState                            K2Node_CustomEvent_MinigameState;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A19[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class AFortMinigame* Minigame, EFortMinigameState MinigameState)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_1A1A[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USceneComponent*>                CallFunc_GetVisibilityComponents_VisibilityComponents; // 0x0058(0x0010)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	TMap<class USceneComponent*, ECollisionEnabled> CallFunc_GetVisibilityComponentsWithCollisionOverrides_VisibilityComponents; // 0x0068(0x0050)(ContainsInstancedReference)
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.On Mingame State Changed
// 0x0010 (0x0010 - 0x0000)
struct Creative_Device_Prop_Parent_C_On_Mingame_State_Changed final
{
public:
	class AFortMinigame*                          Minigame;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortMinigameState                            MinigameState;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_4_OnMinigameAssignmentChanged__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct Creative_Device_Prop_Parent_C_BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_4_OnMinigameAssignmentChanged__DelegateSignature final
{
public:
	class AFortMinigame*                          Minigame;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_1_OnMinigameAssignmentChanged__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct Creative_Device_Prop_Parent_C_BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_1_OnMinigameAssignmentChanged__DelegateSignature final
{
public:
	class AFortMinigame*                          Minigame;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.PlayModeChanged
// 0x0010 (0x0010 - 0x0000)
struct Creative_Device_Prop_Parent_C_PlayModeChanged final
{
public:
	class AFortMinigame*                          Minigame;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsInPlayMode;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Activate on Phase
// 0x0004 (0x0004 - 0x0000)
struct Creative_Device_Prop_Parent_C_Activate_on_Phase final
{
public:
	EFortMinigameState                            State;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInPlayMode_bIsInPlayMode;               // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsActivatedOnPhase_Enabled;               // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BlueprintOnLocalInteract
// 0x0010 (0x0010 - 0x0000)
struct Creative_Device_Prop_Parent_C_BlueprintOnLocalInteract final
{
public:
	class AFortPlayerPawn*                        InteractingPawn;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Initialize Device
// 0x0001 (0x0001 - 0x0000)
struct Creative_Device_Prop_Parent_C_Initialize_Device final
{
public:
	bool                                          CallFunc_IsInPlayMode_bIsInPlayMode;               // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Attempt Activate Device
// 0x0010 (0x0010 - 0x0000)
struct Creative_Device_Prop_Parent_C_Attempt_Activate_Device final
{
public:
	class AController*                            Param_Instigating_Controller;                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Additional_Requirements;                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEnabled_Enabled;                        // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BlueprintModifyIncomingDamage
// 0x0058 (0x0058 - 0x0000)
struct Creative_Device_Prop_Parent_C_BlueprintModifyIncomingDamage final
{
public:
	float                                         Damage;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A1B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  InTags;                                            // 0x0008(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayEffectContextHandle           EffectContext;                                     // 0x0028(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class AController*                            EventInstigator;                                   // 0x0040(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 DamageCauser;                                      // 0x0048(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ReturnValue;                                       // 0x0050(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInPlayMode_bIsInPlayMode;               // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0056(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Is Visible In Game
// 0x0001 (0x0001 - 0x0000)
struct Creative_Device_Prop_Parent_C_Is_Visible_In_Game final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Update Visibility In Game
// 0x0005 (0x0005 - 0x0000)
struct Creative_Device_Prop_Parent_C_Update_Visibility_In_Game final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EVisibleInGameState                           Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EVisibleInGameState                           Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Is_Visible_In_Game_Visible;               // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EVisibleInGameState                           K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.GetVisibilityComponents
// 0x0020 (0x0020 - 0x0000)
struct Creative_Device_Prop_Parent_C_GetVisibilityComponents final
{
public:
	TArray<class USceneComponent*>                VisibilityComponents;                              // 0x0000(0x0010)(Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class USceneComponent*>                K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.GetVisibilityComponentsWithCollisionOverrides
// 0x00A0 (0x00A0 - 0x0000)
struct Creative_Device_Prop_Parent_C_GetVisibilityComponentsWithCollisionOverrides final
{
public:
	TMap<class USceneComponent*, ECollisionEnabled> VisibilityComponents;                              // 0x0000(0x0050)(Parm, OutParm, ContainsInstancedReference)
	TMap<class USceneComponent*, ECollisionEnabled> K2Node_MakeMap_Map;                                // 0x0050(0x0050)(ContainsInstancedReference)
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BlueprintCanInteract
// 0x0038 (0x0038 - 0x0000)
struct Creative_Device_Prop_Parent_C_BlueprintCanInteract final
{
public:
	const class AFortPawn*                        InteractingPawn;                                   // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInteractionBeingAttempted                    InteractionBeingAttempted;                         // 0x0008(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETInteractionType                             InteractionType;                                   // 0x0009(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x000A(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          bInteractSuccess;                                  // 0x000B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInPlayMode_bIsInPlayMode;               // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A1C[0x1];                                     // 0x000F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerAthena*            K2Node_DynamicCast_AsFort_Player_Controller_Athena; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A1D[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortVolume*                            CallFunc_CanPlayerCreateInCurrentVolume_OutCurrentVolume; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanPlayerCreateInCurrentVolume_ReturnValue; // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.IsInPlayMode
// 0x0003 (0x0003 - 0x0000)
struct Creative_Device_Prop_Parent_C_IsInPlayMode final
{
public:
	bool                                          bIsInPlayMode;                                     // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInPlayMode_ReturnValue;                 // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

