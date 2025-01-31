#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_CCPM_Base_Niagara_Template

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_CCPM_Base_Niagara_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_CCPM_Base_Niagara_Template.B_CCPM_Base_Niagara_Template_C
// 0x0008 (0x03E0 - 0x03D8)
class AB_CCPM_Base_Niagara_Template_C : public AB_CCPM_Base_Niagara_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_CCPM_Base_Niagara_Template_C;     // 0x03D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_B_CCPM_Base_Niagara_Template(int32 EntryPoint);
	void Character_Movement_Updated(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity);
	void OnBeginSkydiving();
	void OnEndSkydiving();
	void Enter_Vehicle();
	void Exit_Vehicle();
	void OnHitPawn(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ResIn();
	void ResOut();
	void OnTargetingOrFirstPersonCameraChanged();
	void Night_Phase(bool At_Creation);
	void Evening_Phase(bool At_Creation);
	void Day_Phase(bool At_Creation);
	void Morning_Phase(bool At_Creation);
	void GetIsDriving(bool* Param_IsDriving);
	void Set_Niagara_System_User_Variable__Float_(class FName Param_Name, float Value);
	void GetNiagaraParticles(struct FGameplayTagContainer* Gameplay_Tag_Container);
	void Set_Niagara_System_User_Variable__Color_(class FName Param_Name, const struct FLinearColor& Value);
	void Set_Niagara_System_User_Variable__Int_(class FName Param_Name, int32 Value);
	void Set_Niagara_System_User_Variable__Vector_(class FName Param_Name, const struct FVector& Value);
	void Set_Niagara_System_User_Variable__Bool_(class FName Param_Name, bool Value);
	void GetIsFrontEnd(bool* Param_IsInFrontEnd);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_CCPM_Base_Niagara_Template_C">();
	}
	static class AB_CCPM_Base_Niagara_Template_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_CCPM_Base_Niagara_Template_C>();
	}
};

}

