#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_HeldObject_Component_Passive

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_HeldObject_Component_Passive.GA_HeldObject_Component_Passive_C
// 0x0048 (0x0AC0 - 0x0A78)
class UGA_HeldObject_Component_Passive_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A78(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTagContainer                  T_StatusHeldObject;                                // 0x0A80(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_HeldObjectPassive;                              // 0x0AA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           T_DanceStunned;                                    // 0x0AA8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         DanceDropDelay;                                    // 0x0AB0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Event_ForceDrop;                                   // 0x0AB4(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_HeldObject_Component_Passive(int32 EntryPoint);
	void DropHeldObject();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void EventReceived_DD24550D4856E973AC41D9BDAECD0498(const struct FGameplayEventData& Payload);
	void Added_EB79E5C3467383D5FAE134978A7BDE59();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_HeldObject_Component_Passive_C">();
	}
	static class UGA_HeldObject_Component_Passive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_HeldObject_Component_Passive_C>();
	}
};

}
