#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaChatWidgetModalWrapper

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaChatWidgetModalWrapper.AthenaChatWidgetModalWrapper_C
// 0x0008 (0x02E8 - 0x02E0)
class UAthenaChatWidgetModalWrapper_C final : public UAthenaChatModalWrapper
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void PreConstruct(bool IsDesignTime);
	void OnInitialized();
	void ExecuteUbergraph_AthenaChatWidgetModalWrapper(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaChatWidgetModalWrapper_C">();
	}
	static class UAthenaChatWidgetModalWrapper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaChatWidgetModalWrapper_C>();
	}
};

}

