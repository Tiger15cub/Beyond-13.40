#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_AppleSun_Athena

#include "Basic.hpp"

#include "B_ConsumableSmall_Athena_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_AppleSun_Athena.B_AppleSun_Athena_C
// 0x0030 (0x0C58 - 0x0C28)
class AB_AppleSun_Athena_C final : public AB_ConsumableSmall_Athena_C
{
public:
	class UStaticMeshComponent*                   Apple_Sun;                                         // 0x0C28(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                   NewVar_0;                                          // 0x0C30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   NewVar_1;                                          // 0x0C38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   NewVar_2;                                          // 0x0C40(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_AppleSun_Athena_C">();
	}
	static class AB_AppleSun_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_AppleSun_Athena_C>();
	}
};

}

