#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPCStatusWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function NPCStatusWidget.NPCStatusWidget_C.VisibilityChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct NPCStatusWidget_C_VisibilityChanged__DelegateSignature final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function NPCStatusWidget.NPCStatusWidget_C.ExecuteUbergraph_NPCStatusWidget
// 0x0020 (0x0020 - 0x0000)
struct NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_health;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
};

// Function NPCStatusWidget.NPCStatusWidget_C.EventUpdateStatus
// 0x0004 (0x0004 - 0x0000)
struct NPCStatusWidget_C_EventUpdateStatus final
{
public:
	float                                         Health;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

