#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Cinematic

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Cinematic.Cinematic_C
// 0x0060 (0x04D0 - 0x0470)
class UCinematic_C final : public UFortUIStateWidget_NUI
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0470(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNamedSlot*                             LocalizedAudioOnlyMovieSlot;                       // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetStack*                     MainContentStack;                                  // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             MovieSlot;                                         // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayMovieOverlay;                               // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USubtitles_C*                           Subtitles;                                         // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTeamMicStack_C*                        TeamMicStack;                                      // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBuildWatermark_C*                      Widget_BuildWatermark;                             // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMovieWidget_C*                         MovieWidget;                                       // 0x04B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMediaSubtitlesPlayer*              SubtitlesPlayer;                                   // 0x04B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CinematicMediaSoundWave;                           // 0x04C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFinished;                                         // 0x04C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_Cinematic(int32 EntryPoint);
	void OnExitState(EFortUIState NextUIState);
	void OnEnterState(EFortUIState PreviousUIState);
	void PushContentWidgetInternal(class UWidget* Widget, const struct FContentPushState& State);
	void HandleClientEvent_SkipCinematic(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void HandleEndReached();
	void Destruct();
	void HandleClientEvent_QueueCinematic(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void Construct();
	void ShowMovie(class UMediaPlayer* MediaPlayer, class UMediaSource* MediaSource, class UNamedSlot*& Param_MovieSlot, class UMovieWidget_C*& Param_MovieWidget);
	void ClearMovie();
	void SkipMovie();
	class UWidget* PopContentWidgetInternal(const struct FContentPushState& State);
	void ClearMovieSlot(class UPanelWidget*& MovieSlotToClear);
	void ClearMovieWidget(class UFortMovieWidget*& MovieWidgetToClear);
	void SetMoviePlaying(bool MoviePlaying);
	void ClearOldSubtitlesIfNecessary(bool NewSubtitlesExist, class UFortMediaSubtitlesPlayer* NewSubtitles);
	void StopAndClearSubtitles();
	void GetAudioTrackIndex(int32* AudioTrack);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Cinematic_C">();
	}
	static class UCinematic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCinematic_C>();
	}
};

}

