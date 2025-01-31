#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_PetrolWeapon

#include "Basic.hpp"

#include "B_Ranged_Generic_Athena_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_PetrolWeapon.B_PetrolWeapon_C
// 0x00D0 (0x11E0 - 0x1110)
class AB_PetrolWeapon_C final : public AB_Ranged_Generic_Athena_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_PetrolWeapon_C;                   // 0x1110(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortSplatterSourceComponent*           FortSplatterSource;                                // 0x1118(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          EnableAmmoMod;                                     // 0x1120(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66F6[0x7];                                     // 0x1121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABGA_Petrol_Pickup_C*                   AttachedBGAActor;                                  // 0x1128(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class FName                                   AttachSocket;                                      // 0x1130(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                AttachedBGAScale;                                  // 0x1138(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_66F7[0xC];                                     // 0x1144(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             AttachedBGARelativeTransform;                      // 0x1150(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TScriptInterface<class IFortInventoryOwnerInterface> InventoryInterface;                                // 0x1180(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGuid                                  InventoryGUID;                                     // 0x1190(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_FuelLeaking;                                    // 0x11A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         IsShootableWhileHeld;                              // 0x11A8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortWeapon*                            WeaponReference;                                   // 0x11C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowHUDKeyActions;                                 // 0x11D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_B_PetrolWeapon(int32 EntryPoint);
	void ReplicateOnHolstered();
	void ReplicateOnUnholstered();
	void BGADestroyedWhileHeld();
	void UnbindHolsterEvents();
	void BindHolsterEvents();
	void OnUnholstered();
	void OnHolstered();
	void HUDKeyAction_Targeting(bool IsTargeting);
	void ReceiveBeginPlay();
	void OnUnEquip_Copy_();
	void OnStopWeaponFireFX();
	void OnEquip_Copy_();
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void UpdateAndAttachBGA();
	void K2_OnUnEquip();
	void OnWeaponAttached();
	void OnSpawnProjectile(class AFortProjectileBase* SpawnProjectile);
	void OnRep_AttachedBGAActor();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_PetrolWeapon_C">();
	}
	static class AB_PetrolWeapon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_PetrolWeapon_C>();
	}
};

}

