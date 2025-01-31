#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_Athena_HidingProp_PropTeleporting

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCNL_Athena_HidingProp_PropTeleporting.GCNL_Athena_HidingProp_PropTeleporting_C
// 0x0008 (0x07C8 - 0x07C0)
class AGCNL_Athena_HidingProp_PropTeleporting_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GCNL_Athena_HidingProp_PropTeleporting(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Athena_HidingProp_PropTeleporting_C">();
	}
	static class AGCNL_Athena_HidingProp_PropTeleporting_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Athena_HidingProp_PropTeleporting_C>();
	}
};

}

