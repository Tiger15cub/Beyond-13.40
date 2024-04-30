#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_DangerGrape

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_ThrowConsumable_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_DangerGrape.GA_Athena_DangerGrape_C
// 0x0008 (0x0DF8 - 0x0DF0)
class UGA_Athena_DangerGrape_C final : public UGA_ThrowConsumable_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Athena_DangerGrape_C;            // 0x0DF0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_Athena_DangerGrape(int32 EntryPoint);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_DangerGrape_C">();
	}
	static class UGA_Athena_DangerGrape_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_DangerGrape_C>();
	}
};

}
