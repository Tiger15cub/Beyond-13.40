#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_CCPM_Base_Niagara

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.ExecuteUbergraph_B_CCPM_Base_Niagara
// 0x0228 (0x0228 - 0x0000)
struct B_CCPM_Base_Niagara_C_ExecuteUbergraph_B_CCPM_Base_Niagara final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName StatName, int32 StatValue)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_StatName;                       // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_StatValue;                      // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x002C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_726C[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAsyncAction_WaitManagedParticles*  CallFunc_SpawnManagedParticlesWithCallback_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_726D[0x5];                                     // 0x004B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_getNiagaraParticles_Gameplay_Tag_Container; // 0x0050(0x0020)()
	bool                                          CallFunc_IsInFrontend_ReturnValue;                 // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_726E[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_getNiagaraParticles_Gameplay_Tag_Container_1; // 0x0078(0x0020)()
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_726F[0x6];                                     // 0x009A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        CallFunc_GetAssociatedPlayerPawn_ReturnValue;      // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_Stat_Name;                      // 0x00A8(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Stat_Value;                     // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7270[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAsyncAction_CosmeticAdaptiveStatWatcher* CallFunc_WatchCosmeticStat_ReturnValue;            // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_At_Creation_3;                  // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_At_Creation_2;                  // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_At_Creation_1;                  // 0x00C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_At_Creation;                    // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortDayPhase                                 K2Node_Event_CurrentDayPhase;                      // 0x00C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortDayPhase                                 K2Node_Event_PreviousDayPhase;                     // 0x00C6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bAtCreation;                          // 0x00C7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_getIsDriving_isDriving;                   // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7271[0x6];                                     // 0x00CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        CallFunc_GetAssociatedPlayerPawn_ReturnValue_1;    // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena;           // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7272[0x3];                                     // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool IsHidden)>                K2Node_CreateDelegate_OutputDelegate_2;            // 0x00E4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x00F4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7273[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        CallFunc_GetAssociatedPlayerPawn_ReturnValue_2;    // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7274[0x6];                                     // 0x0112(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        CallFunc_GetAssociatedPlayerPawn_ReturnValue_3;    // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7275[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena_1;         // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7276[0x3];                                     // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0134(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x0144(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable_1;               // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7277[0x3];                                     // 0x0155(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_CustomEvent_DeltaSeconds;                   // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_OldLocation;                    // 0x015C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_OldVelocity;                    // 0x0168(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7278[0x4];                                     // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        CallFunc_GetAssociatedPlayerPawn_ReturnValue_4;    // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena_2;         // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInVehicle_ReturnValue;                  // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDrivingVehicle_ReturnValue;             // 0x018A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7279[0x5];                                     // 0x018B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_getNiagaraParticles_Gameplay_Tag_Container_2; // 0x0190(0x0020)()
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_727A[0x7];                                     // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_getNiagaraParticles_Gameplay_Tag_Container_3; // 0x01B8(0x0020)()
	bool                                          K2Node_CustomEvent_isHidden;                       // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_727B[0x7];                                     // 0x01D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IFortVehicleInterface> K2Node_Event_VehicleEntered;                       // 0x01E0(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x01F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_727C[0x6];                                     // 0x01F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMeshComponent*                         CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue; // 0x01F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_getNiagaraParticles_Gameplay_Tag_Container_4; // 0x0200(0x0020)()
	bool                                          CallFunc_getIsFrontEnd_IsInFrontEnd;               // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0221(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable_1;                     // 0x0222(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x0223(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.OnEnterVehicle
// 0x0010 (0x0010 - 0x0000)
struct B_CCPM_Base_Niagara_C_OnEnterVehicle final
{
public:
	TScriptInterface<class IFortVehicleInterface> VehicleEntered;                                    // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper)
};

// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.isHiddenInProp
// 0x0001 (0x0001 - 0x0000)
struct B_CCPM_Base_Niagara_C_IsHiddenInProp final
{
public:
	bool                                          IsHidden;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.Character Movement Updated
// 0x001C (0x001C - 0x0000)
struct B_CCPM_Base_Niagara_C_Character_Movement_Updated final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OldLocation;                                       // 0x0004(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OldVelocity;                                       // 0x0010(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.OnDayPhaseChanged
// 0x0003 (0x0003 - 0x0000)
struct B_CCPM_Base_Niagara_C_OnDayPhaseChanged final
{
public:
	EFortDayPhase                                 CurrentDayPhase;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortDayPhase                                 PreviousDayPhase;                                  // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAtCreation;                                       // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.Night Phase
// 0x0001 (0x0001 - 0x0000)
struct B_CCPM_Base_Niagara_C_Night_Phase final
{
public:
	bool                                          At_Creation;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.Evening Phase
// 0x0001 (0x0001 - 0x0000)
struct B_CCPM_Base_Niagara_C_Evening_Phase final
{
public:
	bool                                          At_Creation;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.Day Phase
// 0x0001 (0x0001 - 0x0000)
struct B_CCPM_Base_Niagara_C_Day_Phase final
{
public:
	bool                                          At_Creation;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.Morning Phase
// 0x0001 (0x0001 - 0x0000)
struct B_CCPM_Base_Niagara_C_Morning_Phase final
{
public:
	bool                                          At_Creation;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.On Stat Canged
// 0x000C (0x000C - 0x0000)
struct B_CCPM_Base_Niagara_C_On_Stat_Canged final
{
public:
	class FName                                   Stat_Name;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Stat_Value;                                        // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct B_CCPM_Base_Niagara_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.OnStatChanged_B170ACAB47DC1A9DBE8D138BF0A01420
// 0x000C (0x000C - 0x0000)
struct B_CCPM_Base_Niagara_C_OnStatChanged_B170ACAB47DC1A9DBE8D138BF0A01420 final
{
public:
	class FName                                   StatName;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StatValue;                                         // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.getNiagaraParticles
// 0x0050 (0x0050 - 0x0000)
struct B_CCPM_Base_Niagara_C_GetNiagaraParticles final
{
public:
	struct FGameplayTagContainer                  Gameplay_Tag_Container;                            // 0x0000(0x0020)(Parm, OutParm)
	TArray<struct FGameplayTag>                   K2Node_MakeArray_Array;                            // 0x0020(0x0010)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_MakeGameplayTagContainerFromArray_ReturnValue; // 0x0030(0x0020)()
};

// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.getIsDriving
// 0x0001 (0x0001 - 0x0000)
struct B_CCPM_Base_Niagara_C_GetIsDriving final
{
public:
	bool                                          Param_IsDriving;                                   // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.set Niagara System User Variable (Float)
// 0x0030 (0x0030 - 0x0000)
struct B_CCPM_Base_Niagara_C_Set_Niagara_System_User_Variable__Float_ final
{
public:
	class FName                                   Param_Name;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Value;                                             // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_727D[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_getNiagaraParticles_Gameplay_Tag_Container; // 0x0010(0x0020)()
};

// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.set Niagara System User Variable (Int)
// 0x0030 (0x0030 - 0x0000)
struct B_CCPM_Base_Niagara_C_Set_Niagara_System_User_Variable__Int_ final
{
public:
	class FName                                   Param_Name;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Value;                                             // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_727E[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_getNiagaraParticles_Gameplay_Tag_Container; // 0x0010(0x0020)()
};

// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.set Niagara System User Variable (Vector)
// 0x0038 (0x0038 - 0x0000)
struct B_CCPM_Base_Niagara_C_Set_Niagara_System_User_Variable__Vector_ final
{
public:
	class FName                                   Param_Name;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Value;                                             // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_727F[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_getNiagaraParticles_Gameplay_Tag_Container; // 0x0018(0x0020)()
};

// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.set Niagara System User Variable (Color)
// 0x0038 (0x0038 - 0x0000)
struct B_CCPM_Base_Niagara_C_Set_Niagara_System_User_Variable__Color_ final
{
public:
	class FName                                   Param_Name;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Value;                                             // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_getNiagaraParticles_Gameplay_Tag_Container; // 0x0018(0x0020)()
};

// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.set Niagara System User Variable (Bool)
// 0x0030 (0x0030 - 0x0000)
struct B_CCPM_Base_Niagara_C_Set_Niagara_System_User_Variable__Bool_ final
{
public:
	class FName                                   Param_Name;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Value;                                             // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7280[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_getNiagaraParticles_Gameplay_Tag_Container; // 0x0010(0x0020)()
};

// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.getIsFrontEnd
// 0x0002 (0x0002 - 0x0000)
struct B_CCPM_Base_Niagara_C_GetIsFrontEnd final
{
public:
	bool                                          Param_IsInFrontEnd;                                // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInFrontend_ReturnValue;                 // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.debug FX
// 0x0010 (0x0010 - 0x0000)
struct B_CCPM_Base_Niagara_C_Debug_FX final
{
public:
	class FString                                 Print_String;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.getNiagaraSuperLevelParticles
// 0x0050 (0x0050 - 0x0000)
struct B_CCPM_Base_Niagara_C_GetNiagaraSuperLevelParticles final
{
public:
	struct FGameplayTagContainer                  ReturnValue;                                       // 0x0000(0x0020)(Parm, OutParm, ReturnParm)
	TArray<struct FGameplayTag>                   K2Node_MakeArray_Array;                            // 0x0020(0x0010)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_MakeGameplayTagContainerFromArray_ReturnValue; // 0x0030(0x0020)()
};

}

