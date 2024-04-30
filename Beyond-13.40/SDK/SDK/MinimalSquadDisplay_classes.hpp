#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MinimalSquadDisplay

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MinimalSquadDisplay.MinimalSquadDisplay_C
// 0x0010 (0x0278 - 0x0268)
class UMinimalSquadDisplay_C final : public UAthenaTeamSquadEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 SquadRibbon;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MinimalSquadDisplay(int32 EntryPoint);
	void OnSquadIsEmptyChanged(bool bSquadIsEmpty, bool bMultipleSquadsPopulated);
	void OnSquadAssigned(const struct FAthenaTeamDisplayInfo& SquadStyle);
	void OnLoaded_86B795124D19C878C8559FA7E78726E0(class UObject* Loaded);
	void OnLoaded_1B34C3FE47597A4DBA2DA7AFCF8744FB(class UObject* Loaded);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MinimalSquadDisplay_C">();
	}
	static class UMinimalSquadDisplay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMinimalSquadDisplay_C>();
	}
};

}
