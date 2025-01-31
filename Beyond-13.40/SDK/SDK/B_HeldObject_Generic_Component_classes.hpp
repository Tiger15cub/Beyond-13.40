#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_HeldObject_Generic_Component

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_HeldObject_Generic_Component.B_HeldObject_Generic_Component_C
// 0x0010 (0x0C28 - 0x0C18)
class AB_HeldObject_Generic_Component_C : public AFortWeapon
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0C18(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         BattleLabHudKeyDataIndex;                          // 0x0C20(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_HeldObject_Generic_Component(int32 EntryPoint);
	void OnWeaponAttached();
	void K2_OnUnEquip();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_HeldObject_Generic_Component_C">();
	}
	static class AB_HeldObject_Generic_Component_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_HeldObject_Generic_Component_C>();
	}
};

}

