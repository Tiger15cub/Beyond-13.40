#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CMSLobbyDirector

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CMSLobbyDirector.CMSLobbyDirector_C
// 0x0008 (0x02C8 - 0x02C0)
class ACMSLobbyDirector_C final : public ADynamicBackgroundDirector
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CMSLobbyDirector_C">();
	}
	static class ACMSLobbyDirector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACMSLobbyDirector_C>();
	}
};

}

