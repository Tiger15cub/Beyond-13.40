#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CCPM_F_BlackKnight

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CCPM_Base_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass CCPM_F_BlackKnight.CCPM_F_BlackKnight_C
// 0x0038 (0x0418 - 0x03E0)
class ACCPM_F_BlackKnight_C final : public ACCPM_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_CCPM_F_BlackKnight_C;               // 0x03E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class APlayerPawn_Athena_C*                   LastPawn;                                          // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SL_LastValue;                                      // 0x03F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50DA[0x4];                                     // 0x03F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           SL_RefreshTimeHandler;                             // 0x03F8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         SL_StartLevel;                                     // 0x0400(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SL_EndLevel;                                       // 0x0404(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EndRadius;                                         // 0x0408(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50DB[0x4];                                     // 0x040C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      SpawnedNiagara;                                    // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CCPM_F_BlackKnight(int32 EntryPoint);
	void Open_Niagara_Gate();
	void InitializeVariabels();
	void ResetSafetyGate();
	void OnPostResIn();
	void HackyWorkaroundRefreshTimerGuy();
	void OnActualStatChange();
	void OnPawnAndPartChanged();
	void OnStatChanged_3C7EC5CC4132EA954E634EB904347363(class FName StatName, int32 StatValue);
	void UserConstructionScript();
	void Death_Check();
	void GetAssociatedAthenaController(class AFortPlayerControllerAthena** AsFort_Player_Controller_Athena);
	void ApplyLevelParam(int32 Level);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CCPM_F_BlackKnight_C">();
	}
	static class ACCPM_F_BlackKnight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACCPM_F_BlackKnight_C>();
	}
};

}

