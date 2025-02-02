#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LagerRuntime

#include "Basic.hpp"

#include "LagerRuntime_classes.hpp"
#include "LagerRuntime_parameters.hpp"


namespace SDK
{

// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerRegisterPointProvider
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                           PointProvider                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::LivingWorldManagerRegisterPointProvider(class AActor* PointProvider)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerRegisterPointProvider");

	Params::FortAthenaLivingWorldManager_LivingWorldManagerRegisterPointProvider Parms{};

	Parms.PointProvider = PointProvider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerUnregisterPointProvider
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                           PointProvider                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::LivingWorldManagerUnregisterPointProvider(class AActor* PointProvider)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerUnregisterPointProvider");

	Params::FortAthenaLivingWorldManager_LivingWorldManagerUnregisterPointProvider Parms{};

	Parms.PointProvider = PointProvider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerFlush
// (Final, Exec, Native, Public)

void UFortAthenaLivingWorldManager::LivingWorldManagerFlush()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerFlush");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerGenerateEvents
// (Final, Exec, Native, Public)

void UFortAthenaLivingWorldManager::LivingWorldManagerGenerateEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerGenerateEvents");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerProviderDebugActor
// (Final, Exec, Native, Public)
// Parameters:
// int32                                   ProviderIndex                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::LivingWorldManagerProviderDebugActor(int32 ProviderIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerProviderDebugActor");

	Params::FortAthenaLivingWorldManager_LivingWorldManagerProviderDebugActor Parms{};

	Parms.ProviderIndex = ProviderIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleActorMinimap
// (Final, Exec, Native, Public)

void UFortAthenaLivingWorldManager::LivingWorldManagerToggleActorMinimap()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerToggleActorMinimap");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleGenerateEvents
// (Final, Exec, Native, Public)

void UFortAthenaLivingWorldManager::LivingWorldManagerToggleGenerateEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerToggleGenerateEvents");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleVerboseLogging
// (Final, Exec, Native, Public)

void UFortAthenaLivingWorldManager::LivingWorldManagerToggleVerboseLogging()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerToggleVerboseLogging");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function LagerRuntime.FortAthenaLivingWorldManager.OnCurrentPlaylistLoaded
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FName                             PlaylistName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer            PlaylistContextTags                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::OnCurrentPlaylistLoaded(class FName PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnCurrentPlaylistLoaded");

	Params::FortAthenaLivingWorldManager_OnCurrentPlaylistLoaded Parms{};

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = std::move(PlaylistContextTags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LagerRuntime.FortAthenaLivingWorldManager.OnSpawnedActorDestroy
// (Final, Native, Private)
// Parameters:
// class AActor*                           DestroyedActor                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::OnSpawnedActorDestroy(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnSpawnedActorDestroy");

	Params::FortAthenaLivingWorldManager_OnSpawnedActorDestroy Parms{};

	Parms.DestroyedActor = DestroyedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetFiltersTags
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer            FilterTags                                             (Parm, OutParm, NativeAccessSpecifierPublic)

void IFortAthenaLivingWorldPointProviderInterface::GetFiltersTags(struct FGameplayTagContainer* FilterTags) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProviderInterface", "GetFiltersTags");

	Params::FortAthenaLivingWorldPointProviderInterface_GetFiltersTags Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (FilterTags != nullptr)
		*FilterTags = std::move(Parms.FilterTags);
}


// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetValidLocation
// (Native, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                          OutPosition                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                         OutRotation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IFortAthenaLivingWorldPointProviderInterface::GetValidLocation(struct FVector* OutPosition, struct FRotator* OutRotation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProviderInterface", "GetValidLocation");

	Params::FortAthenaLivingWorldPointProviderInterface_GetValidLocation Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutPosition != nullptr)
		*OutPosition = std::move(Parms.OutPosition);

	if (OutRotation != nullptr)
		*OutRotation = std::move(Parms.OutRotation);

	return Parms.ReturnValue;
}


// Function LagerRuntime.FortAthenaLivingWorldVolume.OnCurrentPlaylistLoaded
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FName                             PlaylistName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer            PlaylistContextTags                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AFortAthenaLivingWorldVolume::OnCurrentPlaylistLoaded(class FName PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "OnCurrentPlaylistLoaded");

	Params::FortAthenaLivingWorldVolume_OnCurrentPlaylistLoaded Parms{};

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = std::move(PlaylistContextTags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawn
// (Final, Exec, Native, Public)
// Parameters:
// class FString                           EventDataName                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_LivingWorldManager::LivingWorldManagerSpawn(const class FString& EventDataName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LivingWorldManagerSpawn");

	Params::FortCheatManager_LivingWorldManager_LivingWorldManagerSpawn Parms{};

	Parms.EventDataName = std::move(EventDataName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

