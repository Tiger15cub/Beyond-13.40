#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaCustomizationSlotButtonWrapper

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.OnSlotClicked__DelegateSignature
// 0x0050 (0x0050 - 0x0000)
struct AthenaCustomizationSlotButtonWrapper_C_OnSlotClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAthenaCustomizationParams             CustomizationParams;                               // 0x0008(0x0048)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.OnSlotHovered__DelegateSignature
// 0x0048 (0x0048 - 0x0000)
struct AthenaCustomizationSlotButtonWrapper_C_OnSlotHovered__DelegateSignature final
{
public:
	class UAthenaCustomizationSlotButtonWrapper_C* ButtonWrapper;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAthenaCustomizationCategory                  Param_CustomizationType;                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6CAE[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   BannerLabel;                                       // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   CustomizationDescription;                          // 0x0028(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         Param_SubslotIndex;                                // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper
// 0x00A8 (0x00A8 - 0x0000)
struct AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6CAF[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button_2;               // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanShowLockerSlotType_ReturnValue;        // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CB0[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button_1;               // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6CB1[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAthenaCustomizationParams             K2Node_MakeStruct_AthenaCustomizationParams;       // 0x0048(0x0048)()
	int32                                         K2Node_CustomEvent_ButtonIndex;                    // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6CB2[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.AnimPopulateInternal
// 0x0004 (0x0004 - 0x0000)
struct AthenaCustomizationSlotButtonWrapper_C_AnimPopulateInternal final
{
public:
	int32                                         ButtonIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.GetCustomizationSlotActiveState
// 0x0004 (0x0004 - 0x0000)
struct AthenaCustomizationSlotButtonWrapper_C_GetCustomizationSlotActiveState final
{
public:
	bool                                          bCosmeticAvaialble;                                // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bActive;                                           // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetCustomizationSlotActiveState_bOutAttachableCosmeticAvailable; // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetCustomizationSlotActiveState_bOutActive; // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.ResetPopulateAnimVisual
// 0x0010 (0x0010 - 0x0000)
struct AthenaCustomizationSlotButtonWrapper_C_ResetPopulateAnimVisual final
{
public:
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6CB3[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
