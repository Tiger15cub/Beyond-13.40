#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S13_MainRoom_ToComicBookStand

#include "Basic.hpp"


namespace SDK::Params
{

// Function S13_MainRoom_ToComicBookStand.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
// 0x0060 (0x0060 - 0x0000)
struct SequenceDirector_C_ExecuteUbergraph_SequenceDirector final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Battlepass_LightSwitcher_C*         K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom_1; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Battlepass_LightSwitcher_C*         K2Node_CustomEvent_BP_Battlepass_LightSwitcher2_1; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Battlepass_LightSwitcher_C*         K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Battlepass_LightSwitcher_C*         K2Node_CustomEvent_BP_Battlepass_LightSwitcher2;   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             K2Node_CustomEvent_Sound;                          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsReversed_ReturnValue;                   // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsReversed_ReturnValue_1;                 // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DF8[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AItemOnPawnPreview_C*>           CallFunc_GetAllActorsOfClass_OutActors;            // 0x0040(0x0010)(ReferenceParm, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function S13_MainRoom_ToComicBookStand.SequenceDirector_C.Audio Camera Movemt Event
// 0x0008 (0x0008 - 0x0000)
struct SequenceDirector_C_Audio_Camera_Movemt_Event final
{
public:
	class USoundBase*                             Sound;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function S13_MainRoom_ToComicBookStand.SequenceDirector_C.BP_Battlepass_LightSwitcher2_Event_1
// 0x0008 (0x0008 - 0x0000)
struct SequenceDirector_C_BP_Battlepass_LightSwitcher2_Event_1 final
{
public:
	class ABP_Battlepass_LightSwitcher_C*         BP_Battlepass_LightSwitcher2;                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function S13_MainRoom_ToComicBookStand.SequenceDirector_C.BP_Battlepass_LightSwitcher_Maproom_Event_1
// 0x0008 (0x0008 - 0x0000)
struct SequenceDirector_C_BP_Battlepass_LightSwitcher_Maproom_Event_1 final
{
public:
	class ABP_Battlepass_LightSwitcher_C*         BP_Battlepass_LightSwitcher_Maproom;               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function S13_MainRoom_ToComicBookStand.SequenceDirector_C.BP_Battlepass_LightSwitcher2_Event_0
// 0x0008 (0x0008 - 0x0000)
struct SequenceDirector_C_BP_Battlepass_LightSwitcher2_Event_0 final
{
public:
	class ABP_Battlepass_LightSwitcher_C*         BP_Battlepass_LightSwitcher2;                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function S13_MainRoom_ToComicBookStand.SequenceDirector_C.BP_Battlepass_LightSwitcher_Maproom_Event_0
// 0x0008 (0x0008 - 0x0000)
struct SequenceDirector_C_BP_Battlepass_LightSwitcher_Maproom_Event_0 final
{
public:
	class ABP_Battlepass_LightSwitcher_C*         BP_Battlepass_LightSwitcher_Maproom;               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
