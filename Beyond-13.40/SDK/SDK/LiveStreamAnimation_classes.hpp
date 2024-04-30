#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LiveStreamAnimation

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "LiveStreamAnimation_structs.hpp"
#include "LiveLinkInterface_classes.hpp"


namespace SDK
{

// Class LiveStreamAnimation.LiveStreamAnimationChannel
// 0x0010 (0x0080 - 0x0070)
class ULiveStreamAnimationChannel final : public UChannel
{
public:
	uint8                                         Pad_46CB[0x10];                                    // 0x0070(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveStreamAnimationChannel">();
	}
	static class ULiveStreamAnimationChannel* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveStreamAnimationChannel>();
	}
};

// Class LiveStreamAnimation.LiveStreamAnimationLiveLinkFrameTranslator
// 0x0060 (0x0088 - 0x0028)
class ULiveStreamAnimationLiveLinkFrameTranslator final : public ULiveLinkFrameTranslator
{
public:
	TMap<struct FLiveStreamAnimationHandleWrapper, struct FLiveStreamAnimationLiveLinkTranslationProfile> TranslationProfiles;                               // 0x0028(0x0050)(Edit, Config, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                         Pad_46CC[0x10];                                    // 0x0078(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveStreamAnimationLiveLinkFrameTranslator">();
	}
	static class ULiveStreamAnimationLiveLinkFrameTranslator* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveStreamAnimationLiveLinkFrameTranslator>();
	}
};

// Class LiveStreamAnimation.LiveStreamAnimationLiveLinkRole
// 0x0000 (0x0028 - 0x0028)
class ULiveStreamAnimationLiveLinkRole final : public ULiveLinkBasicRole
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveStreamAnimationLiveLinkRole">();
	}
	static class ULiveStreamAnimationLiveLinkRole* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveStreamAnimationLiveLinkRole>();
	}
};

// Class LiveStreamAnimation.LiveStreamAnimationSettings
// 0x0050 (0x0088 - 0x0038)
class ULiveStreamAnimationSettings final : public UDeveloperSettings
{
public:
	TSoftObjectPtr<class ULiveStreamAnimationLiveLinkFrameTranslator> FrameTranslator;                                   // 0x0038(0x0028)(Edit, Transient, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FName>                           HandleNames;                                       // 0x0060(0x0010)(Edit, ZeroConstructor, Transient, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_46CD[0x18];                                    // 0x0070(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveStreamAnimationSettings">();
	}
	static class ULiveStreamAnimationSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveStreamAnimationSettings>();
	}
};

// Class LiveStreamAnimation.LiveStreamAnimationSubsystem
// 0x0050 (0x0080 - 0x0030)
class ULiveStreamAnimationSubsystem final : public UGameInstanceSubsystem
{
public:
	uint8                                         Pad_46CE[0x20];                                    // 0x0030(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bEnabled;                                          // 0x0050(0x0001)(ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_46CF[0x2F];                                    // 0x0051(0x002F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetAcceptClientPackets_Private(bool bInShouldAcceptClientPackets);
	void SetRole(const ELiveStreamAnimationRole NewRole);
	bool StartTrackingLiveLinkSubject(const class FName LiveLinkSubject, const struct FLiveStreamAnimationHandleWrapper& RegisteredName, const struct FLiveStreamAnimationLiveLinkSourceOptions& Options, const struct FLiveStreamAnimationHandleWrapper& TranslationProfile);
	void StopTrackingLiveLinkSubject(const struct FLiveStreamAnimationHandleWrapper& RegisteredName);

	ELiveStreamAnimationRole GetRole() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveStreamAnimationSubsystem">();
	}
	static class ULiveStreamAnimationSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveStreamAnimationSubsystem>();
	}
};

// Class LiveStreamAnimation.LiveLinkTestSkelMeshTrackerComponent
// 0x00D0 (0x0180 - 0x00B0)
class ULiveLinkTestSkelMeshTrackerComponent final : public UActorComponent
{
public:
	uint8                                         Pad_46D2[0x8];                                     // 0x00B0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   TranslationProfile;                                // 0x00B8(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FComponentReference                    SkelMeshComp;                                      // 0x00C0(0x0028)(Edit, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class USkeletalMeshComponent>  WeakSkelMeshComp;                                  // 0x00E8(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FBoneReference>                 BonesToTrack;                                      // 0x00F0(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_46D3[0x80];                                    // 0x0100(0x0080)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void StartTrackingSkelMesh(class FName InSubjectName);
	void StopTrackingSkelMesh();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkTestSkelMeshTrackerComponent">();
	}
	static class ULiveLinkTestSkelMeshTrackerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkTestSkelMeshTrackerComponent>();
	}
};

}
