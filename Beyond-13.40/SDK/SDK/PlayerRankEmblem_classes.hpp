#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerRankEmblem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlayerRankEmblem.PlayerRankEmblem_C
// 0x0020 (0x0278 - 0x0258)
class UPlayerRankEmblem_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0258(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Flash;                                             // 0x0260(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UPlayerBanner_C*                        PlayerBanner;                                      // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          BindToLocalPlayerByDefault;                        // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_PlayerRankEmblem(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void SetBannerOwner(class AFortPlayerController* Target);
	void SetBannerSurroundLevel(int32 Level, bool Animate);
	void SetBannerInfo(const struct FPlayerBannerInfo& Banner);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerRankEmblem_C">();
	}
	static class UPlayerRankEmblem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerRankEmblem_C>();
	}
};

}
