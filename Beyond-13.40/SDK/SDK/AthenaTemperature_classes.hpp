#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaTemperature

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaTemperature.AthenaTemperature_C
// 0x0008 (0x0270 - 0x0268)
class UAthenaTemperature_C final : public UAthenaTemperatureBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_AthenaTemperature(int32 EntryPoint);
	void Construct();
	void ShowTemperatureChanged(bool bShowTemperature);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaTemperature_C">();
	}
	static class UAthenaTemperature_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaTemperature_C>();
	}
};

}
