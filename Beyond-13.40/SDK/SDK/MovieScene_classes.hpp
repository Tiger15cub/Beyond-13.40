#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MovieScene

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_structs.hpp"
#include "MovieScene_structs.hpp"


namespace SDK
{

// Class MovieScene.MovieSceneSignedObject
// 0x0028 (0x0050 - 0x0028)
class UMovieSceneSignedObject : public UObject
{
public:
	struct FGuid                                  Signature;                                         // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_415D[0x18];                                    // 0x0038(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneSignedObject">();
	}
	static class UMovieSceneSignedObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneSignedObject>();
	}
};

// Class MovieScene.MovieSceneSection
// 0x0090 (0x00E0 - 0x0050)
class UMovieSceneSection : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneSectionEvalOptions          EvalOptions;                                       // 0x0050(0x0002)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_415E[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMovieSceneEasingSettings              Easing;                                            // 0x0058(0x0038)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMovieSceneFrameRange                  SectionRange;                                      // 0x0090(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FFrameNumber                           PreRollFrames;                                     // 0x00A0(0x0004)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFrameNumber                           PostRollFrames;                                    // 0x00A4(0x0004)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         RowIndex;                                          // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         OverlapPriority;                                   // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         bIsActive : 1;                                     // 0x00B0(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         bIsLocked : 1;                                     // 0x00B0(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         Pad_415F[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         StartTime;                                         // 0x00B4(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         EndTime;                                           // 0x00B8(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         PrerollTime;                                       // 0x00BC(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         PostrollTime;                                      // 0x00C0(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         bIsInfinite : 1;                                   // 0x00C4(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_4160[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bSupportsInfiniteRange;                            // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FOptionalMovieSceneBlendType           BlendType;                                         // 0x00C9(0x0002)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_4161[0x15];                                    // 0x00CB(0x0015)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetBlendType(EMovieSceneBlendType InBlendType);
	void SetCompletionMode(EMovieSceneCompletionMode InCompletionMode);
	void SetIsActive(bool bInIsActive);
	void SetIsLocked(bool bInIsLocked);
	void SetOverlapPriority(int32 NewPriority);
	void SetPostRollFrames(int32 InPostRollFrames);
	void SetPreRollFrames(int32 InPreRollFrames);
	void SetRowIndex(int32 NewRowIndex);

	struct FOptionalMovieSceneBlendType GetBlendType() const;
	EMovieSceneCompletionMode GetCompletionMode() const;
	int32 GetOverlapPriority() const;
	int32 GetPostRollFrames() const;
	int32 GetPreRollFrames() const;
	int32 GetRowIndex() const;
	bool IsActive() const;
	bool IsLocked() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneSection">();
	}
	static class UMovieSceneSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneSection>();
	}
};

// Class MovieScene.MovieSceneTrack
// 0x0008 (0x0058 - 0x0050)
class UMovieSceneTrack : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneTrackEvalOptions            EvalOptions;                                       // 0x0050(0x0004)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4162[0x1];                                     // 0x0054(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bIsEvalDisabled;                                   // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_4163[0x2];                                     // 0x0056(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneTrack">();
	}
	static class UMovieSceneTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneTrack>();
	}
};

// Class MovieScene.MovieSceneNameableTrack
// 0x0000 (0x0058 - 0x0058)
class UMovieSceneNameableTrack : public UMovieSceneTrack
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneNameableTrack">();
	}
	static class UMovieSceneNameableTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneNameableTrack>();
	}
};

// Class MovieScene.MovieSceneSpawnTrack
// 0x0020 (0x0078 - 0x0058)
class UMovieSceneSpawnTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>             Sections;                                          // 0x0058(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                  ObjectGuid;                                        // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneSpawnTrack">();
	}
	static class UMovieSceneSpawnTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneSpawnTrack>();
	}
};

// Class MovieScene.MovieSceneSubTrack
// 0x0010 (0x0068 - 0x0058)
class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>             Sections;                                          // 0x0058(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneSubTrack">();
	}
	static class UMovieSceneSubTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneSubTrack>();
	}
};

// Class MovieScene.TestMovieSceneTrack
// 0x0018 (0x0070 - 0x0058)
class UTestMovieSceneTrack final : public UMovieSceneTrack
{
public:
	bool                                          bHighPassFilter;                                   // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4164[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMovieSceneSection*>             SectionArray;                                      // 0x0060(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TestMovieSceneTrack">();
	}
	static class UTestMovieSceneTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTestMovieSceneTrack>();
	}
};

// Class MovieScene.MovieSceneSequence
// 0x02F8 (0x0348 - 0x0050)
class UMovieSceneSequence : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneEvaluationTemplate          PrecompiledEvaluationTemplate;                     // 0x0050(0x02F0)(ContainsInstancedReference, NativeAccessSpecifierPublic)
	EMovieSceneCompletionMode                     DefaultCompletionMode;                             // 0x0340(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bParentContextsAreSignificant;                     // 0x0341(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bPlayableDirectly;                                 // 0x0342(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_4165[0x5];                                     // 0x0343(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	struct FMovieSceneObjectBindingID FindBindingByTag(class FName InBindingName) const;
	const TArray<struct FMovieSceneObjectBindingID> FindBindingsByTag(class FName InBindingName) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneSequence">();
	}
	static class UMovieSceneSequence* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneSequence>();
	}
};

// Class MovieScene.MovieSceneEasingExternalCurve
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneEasingExternalCurve final : public UObject
{
public:
	uint8                                         Pad_4166[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            Curve;                                             // 0x0030(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneEasingExternalCurve">();
	}
	static class UMovieSceneEasingExternalCurve* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneEasingExternalCurve>();
	}
};

// Class MovieScene.MovieSceneSubSection
// 0x0078 (0x0158 - 0x00E0)
class UMovieSceneSubSection : public UMovieSceneSection
{
public:
	struct FMovieSceneSectionParameters           Parameters;                                        // 0x00E0(0x0024)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                         StartOffset;                                       // 0x0104(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         TimeScale;                                         // 0x0108(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         PrerollTime_MovieSceneSubSection;                  // 0x010C(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMovieSceneSequence*                    SubSequence;                                       // 0x0110(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TLazyObjectPtr<class AActor>                  ActorToRecord;                                     // 0x0118(0x001C)(Edit, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_4167[0x4];                                     // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TargetSequenceName;                                // 0x0138(0x0010)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDirectoryPath                         TargetPathToRecordTo;                              // 0x0148(0x0010)(Edit, Protected, NativeAccessSpecifierProtected)

public:
	void SetSequence(class UMovieSceneSequence* Sequence);

	class UMovieSceneSequence* GetSequence() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneSubSection">();
	}
	static class UMovieSceneSubSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneSubSection>();
	}
};

// Class MovieScene.MovieSceneCustomClockSource
// 0x0000 (0x0028 - 0x0028)
class IMovieSceneCustomClockSource final : public IInterface
{
public:
	struct FFrameTime OnRequestCurrentTime(const struct FQualifiedFrameTime& InCurrentTime, float InPlayRate);
	void OnStartPlaying(const struct FQualifiedFrameTime& InStartTime);
	void OnStopPlaying(const struct FQualifiedFrameTime& InStopTime);
	void OnTick(float DeltaSeconds, float InPlayRate);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneCustomClockSource">();
	}
	static class IMovieSceneCustomClockSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMovieSceneCustomClockSource>();
	}
};

// Class MovieScene.MovieScenePlaybackClient
// 0x0000 (0x0028 - 0x0028)
class IMovieScenePlaybackClient final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieScenePlaybackClient">();
	}
	static class IMovieScenePlaybackClient* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMovieScenePlaybackClient>();
	}
};

// Class MovieScene.MovieSceneNodeGroup
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneNodeGroup final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneNodeGroup">();
	}
	static class UMovieSceneNodeGroup* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneNodeGroup>();
	}
};

// Class MovieScene.MovieSceneNodeGroupCollection
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneNodeGroupCollection final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneNodeGroupCollection">();
	}
	static class UMovieSceneNodeGroupCollection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneNodeGroupCollection>();
	}
};

// Class MovieScene.MovieScene
// 0x00F8 (0x0148 - 0x0050)
class UMovieScene final : public UMovieSceneSignedObject
{
public:
	TArray<struct FMovieSceneSpawnable>           Spawnables;                                        // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FMovieScenePossessable>         Possessables;                                      // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneBinding>             ObjectBindings;                                    // 0x0070(0x0010)(ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FName, struct FMovieSceneObjectBindingIDs> BindingGroups;                                     // 0x0080(0x0050)(NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneTrack*>               MasterTracks;                                      // 0x00D0(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMovieSceneTrack*                       CameraCutTrack;                                    // 0x00E0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMovieSceneFrameRange                  SelectionRange;                                    // 0x00E8(0x0010)(NoDestructor, NativeAccessSpecifierPrivate)
	struct FMovieSceneFrameRange                  PlaybackRange;                                     // 0x00F8(0x0010)(NoDestructor, NativeAccessSpecifierPrivate)
	struct FFrameRate                             TickResolution;                                    // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFrameRate                             DisplayRate;                                       // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	EMovieSceneEvaluationType                     EvaluationType;                                    // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	EUpdateClockSource                            ClockSource;                                       // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4168[0x6];                                     // 0x011A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoftObjectPath                        CustomClockSourcePath;                             // 0x0120(0x0018)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneMarkedFrame>         MarkedFrames;                                      // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieScene">();
	}
	static class UMovieScene* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieScene>();
	}
};

// Class MovieScene.MovieSceneBindingOverrides
// 0x0068 (0x0090 - 0x0028)
class UMovieSceneBindingOverrides final : public UObject
{
public:
	TArray<struct FMovieSceneBindingOverrideData> BindingData;                                       // 0x0028(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4169[0x58];                                    // 0x0038(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneBindingOverrides">();
	}
	static class UMovieSceneBindingOverrides* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneBindingOverrides>();
	}
};

// Class MovieScene.MovieSceneBindingOwnerInterface
// 0x0000 (0x0028 - 0x0028)
class IMovieSceneBindingOwnerInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneBindingOwnerInterface">();
	}
	static class IMovieSceneBindingOwnerInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMovieSceneBindingOwnerInterface>();
	}
};

// Class MovieScene.MovieSceneBoolSection
// 0x0098 (0x0178 - 0x00E0)
class UMovieSceneBoolSection : public UMovieSceneSection
{
public:
	bool                                          DefaultValue;                                      // 0x00E0(0x0001)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_416A[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMovieSceneBoolChannel                 BoolCurve;                                         // 0x00E8(0x0090)(Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneBoolSection">();
	}
	static class UMovieSceneBoolSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneBoolSection>();
	}
};

// Class MovieScene.MovieSceneBuiltInEasingFunction
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneBuiltInEasingFunction final : public UObject
{
public:
	uint8                                         Pad_416B[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	EMovieSceneBuiltInEasing                      Type;                                              // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_416C[0x7];                                     // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneBuiltInEasingFunction">();
	}
	static class UMovieSceneBuiltInEasingFunction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneBuiltInEasingFunction>();
	}
};

// Class MovieScene.MovieSceneEasingFunction
// 0x0000 (0x0028 - 0x0028)
class IMovieSceneEasingFunction final : public IInterface
{
public:
	float OnEvaluate(float Interp) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneEasingFunction">();
	}
	static class IMovieSceneEasingFunction* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMovieSceneEasingFunction>();
	}
};

// Class MovieScene.MovieSceneFolder
// 0x0048 (0x0070 - 0x0028)
class UMovieSceneFolder final : public UObject
{
public:
	class FName                                   FolderName;                                        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneFolder*>              ChildFolders;                                      // 0x0030(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneTrack*>               ChildMasterTracks;                                 // 0x0040(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FString>                         ChildObjectBindingStrings;                         // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_416D[0x10];                                    // 0x0060(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneFolder">();
	}
	static class UMovieSceneFolder* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneFolder>();
	}
};

// Class MovieScene.MovieSceneKeyProxy
// 0x0000 (0x0028 - 0x0028)
class IMovieSceneKeyProxy final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneKeyProxy">();
	}
	static class IMovieSceneKeyProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMovieSceneKeyProxy>();
	}
};

// Class MovieScene.MovieSceneSequencePlayer
// 0x0870 (0x0898 - 0x0028)
class UMovieSceneSequencePlayer : public UObject
{
public:
	uint8                                         Pad_416E[0x3E0];                                   // 0x0028(0x03E0)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnPlay;                                            // 0x0408(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnPlayReverse;                                     // 0x0418(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnStop;                                            // 0x0428(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnPause;                                           // 0x0438(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnFinished;                                        // 0x0448(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	EMovieScenePlayerStatus                       Status;                                            // 0x0458(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_416F[0x3];                                     // 0x0459(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bReversePlayback : 1;                              // 0x045C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_4170[0x3];                                     // 0x045D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMovieSceneSequence*                    Sequence;                                          // 0x0460(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FFrameNumber                           StartTime;                                         // 0x0468(0x0004)(Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         DurationFrames;                                    // 0x046C(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         CurrentNumLoops;                                   // 0x0470(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_4171[0x14];                                    // 0x0474(0x0014)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMovieSceneSequencePlaybackSettings    PlaybackSettings;                                  // 0x0488(0x0014)(Net, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_4172[0x4];                                     // 0x049C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;                              // 0x04A0(0x0320)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_4173[0x68];                                    // 0x07C0(0x0068)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMovieSceneSequenceReplProperties      NetSyncProps;                                      // 0x0828(0x0010)(Net, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TScriptInterface<class IMovieScenePlaybackClient> PlaybackClient;                                    // 0x0838(0x0010)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                         Pad_4174[0x50];                                    // 0x0848(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ChangePlaybackDirection();
	TArray<class UObject*> GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding);
	bool GetDisableCameraCuts();
	TArray<struct FMovieSceneObjectBindingID> GetObjectBindings(class UObject* InObject);
	void GoToEndAndStop();
	void JumpToFrame(const struct FFrameTime& NewPosition);
	bool JumpToMarkedFrame(const class FString& InLabel);
	void JumpToSeconds(float TimeInSeconds);
	void Pause();
	void Play();
	void PlayLooping(int32 NumLoops);
	void PlayReverse();
	void PlayTo(const struct FMovieSceneSequencePlaybackParams& PlaybackParams);
	void PlayToFrame(const struct FFrameTime& NewPosition);
	bool PlayToMarkedFrame(const class FString& InLabel);
	void PlayToSeconds(float TimeInSeconds);
	void RPC_ExplicitServerUpdateEvent(EUpdatePositionMethod Method, const struct FFrameTime& RelevantTime);
	void RPC_OnStopEvent(const struct FFrameTime& StoppedTime);
	void Scrub();
	void ScrubToFrame(const struct FFrameTime& NewPosition);
	bool ScrubToMarkedFrame(const class FString& InLabel);
	void ScrubToSeconds(float TimeInSeconds);
	void SetDisableCameraCuts(bool bInDisableCameraCuts);
	void SetFrameRange(int32 StartFrame, int32 Duration);
	void SetFrameRate(const struct FFrameRate& FrameRate);
	void SetPlaybackPosition(const struct FMovieSceneSequencePlaybackParams& PlaybackParams);
	void SetPlayRate(float PlayRate);
	void SetTimeRange(float Param_StartTime, float Duration);
	void Stop();
	void StopAtCurrentTime();

	struct FQualifiedFrameTime GetCurrentTime() const;
	struct FQualifiedFrameTime GetDuration() const;
	struct FQualifiedFrameTime GetEndTime() const;
	int32 GetFrameDuration() const;
	struct FFrameRate GetFrameRate() const;
	float GetPlayRate() const;
	struct FQualifiedFrameTime GetStartTime() const;
	bool IsPaused() const;
	bool IsPlaying() const;
	bool IsReversed() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneSequencePlayer">();
	}
	static class UMovieSceneSequencePlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneSequencePlayer>();
	}
};

// Class MovieScene.MovieSceneSpawnSection
// 0x0000 (0x0178 - 0x0178)
class UMovieSceneSpawnSection final : public UMovieSceneBoolSection
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneSpawnSection">();
	}
	static class UMovieSceneSpawnSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneSpawnSection>();
	}
};

// Class MovieScene.TestMovieSceneSection
// 0x0000 (0x00E0 - 0x00E0)
class UTestMovieSceneSection final : public UMovieSceneSection
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TestMovieSceneSection">();
	}
	static class UTestMovieSceneSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTestMovieSceneSection>();
	}
};

// Class MovieScene.TestMovieSceneSequence
// 0x0008 (0x0350 - 0x0348)
class UTestMovieSceneSequence final : public UMovieSceneSequence
{
public:
	class UMovieScene*                            MovieScene;                                        // 0x0348(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TestMovieSceneSequence">();
	}
	static class UTestMovieSceneSequence* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTestMovieSceneSequence>();
	}
};

// Class MovieScene.TestMovieSceneSubTrack
// 0x0010 (0x0078 - 0x0068)
class UTestMovieSceneSubTrack final : public UMovieSceneSubTrack
{
public:
	TArray<class UMovieSceneSection*>             SectionArray;                                      // 0x0068(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TestMovieSceneSubTrack">();
	}
	static class UTestMovieSceneSubTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTestMovieSceneSubTrack>();
	}
};

// Class MovieScene.TestMovieSceneSubSection
// 0x0000 (0x0158 - 0x0158)
class UTestMovieSceneSubSection final : public UMovieSceneSubSection
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TestMovieSceneSubSection">();
	}
	static class UTestMovieSceneSubSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTestMovieSceneSubSection>();
	}
};

}

