#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LetoFrontendJoinPrompt_Side

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function LetoFrontendJoinPrompt_Side.LetoFrontendJoinPrompt_Side_C.ExecuteUbergraph_LetoFrontendJoinPrompt_Side
// 0x0120 (0x0120 - 0x0000)
struct LetoFrontendJoinPrompt_Side_C_ExecuteUbergraph_LetoFrontendJoinPrompt_Side final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71F5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x0008(0x0070)(ConstParm)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0078(0x0038)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x00B0(0x0070)(ConstParm)
};

// Function LetoFrontendJoinPrompt_Side.LetoFrontendJoinPrompt_Side_C.OnMouseLeave
// 0x0070 (0x0070 - 0x0000)
struct LetoFrontendJoinPrompt_Side_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function LetoFrontendJoinPrompt_Side.LetoFrontendJoinPrompt_Side_C.OnMouseEnter
// 0x00A8 (0x00A8 - 0x0000)
struct LetoFrontendJoinPrompt_Side_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

}

