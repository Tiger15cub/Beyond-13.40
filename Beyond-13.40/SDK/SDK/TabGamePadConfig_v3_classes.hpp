#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TabGamePadConfig_v3

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "InputCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TabGamePadConfig_v3.TabGamePadConfig_v3_C
// 0x00F8 (0x0438 - 0x0340)
class UTabGamePadConfig_v3_C final : public UFortGamepadInputOptions
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0340(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UGamepadInfoSelectorPanel_v3_C*         GamepadInfoSelectorPanel_v3;                       // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGamepadMappingInfo_v3_C*               GamepadMappingInfo_v3;                             // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             GamepadMappingInfoChanged;                         // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class FString>                         InputPresets;                                      // 0x0368(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FText>                           InputPresetNames_NoCustom;                         // 0x0378(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         PresetMappingIndex;                                // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PlatformMappingIndex;                              // 0x038C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CustomInputTemplatePresetIndex;                    // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EB5[0x4];                                     // 0x0394(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGamepadKeyTextButton_C*                DisplayObject;                                     // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortInputActionGroup                         CurrentInputActionGroup;                           // 0x03A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EB6[0x3];                                     // 0x03A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CustomResetToDefaultConfig;                        // 0x03A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                   CustomKeySelection;                                // 0x03A8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class FName                                   CustomActionSelection;                             // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CustomInputActionGroupSelectionIndex;              // 0x03C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CustomActionSelectionIndex;                        // 0x03CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                   Key_None;                                          // 0x03D0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UClass*                                 RadioButtonClass;                                  // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 RadioButtonStyle;                                  // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortOptionsMenuInputData*>      InputDataForActionsPanel;                          // 0x03F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             TabGamePadConfigBack;                              // 0x0408(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             TabGamePadConfigApply;                             // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             TabGamePadActionsThatNeedBinds;                    // 0x0428(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void GamepadMappingInfoChanged__DelegateSignature();
	void TabGamePadConfigBack__DelegateSignature();
	void TabGamePadConfigApply__DelegateSignature();
	void TabGamePadActionsThatNeedBinds__DelegateSignature(TArray<class FText>& ScreenLabels);
	void ExecuteUbergraph_TabGamePadConfig_v3(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void DeadZoneMoveSettingValueChanged_Bind(float Value);
	void DeadZoneLookSettingValueChanged_Bind(float Value);
	void OnTabActivated_Bind();
	void OnTabDeactivated_Bind();
	void HandleUsingGamepadChanged(ECommonInputType NewInputType);
	void Construct();
	void ModesTabSelected_Bind(class FName TabId);
	void CustomClearButton_Bind();
	void CustomClosedUsingBack_Bind();
	void CustomActionSelected_Bind(int32 SelectedIndex, class FName ActionName);
	void CustomKeySelected_Bind(const struct FKey& Key);
	void CustomDoResetToDefault();
	void UpdateOptionsTab();
	void CenterOnTab();
	void GamepadPlatformConfigChanged(class UCommonButton* AssociatedButton, int32 ButtonIndex);
	void Gamepad_Config_Changed(class UCommonButton* AssociatedButton, int32 ButtonIndex);
	void DialogResult_7D7E06D747FFEF9849D3CAA2D3D91717(EFortDialogResult Result, class FName ResultName);
	void DialogResult_017CD690454514A07B4DE5BE109AEC6E(EFortDialogResult Result, class FName ResultName);
	void InitializeData();
	void PreConstructData();
	void UpdateData();
	void GetCurrentPlatformIndex(int32* PlatformIndex);
	void HandleGamepadMappingInfoChange();
	bool IsConsole();
	bool IsCustomConfig(int32 PresetIndex);
	void SetupDisplayObject(class FName ActionName, const struct FKey& Key, class UGamepadKeyTextButton_C** Param_DisplayObject);
	void SelectSameItemInActionsList();
	void CloseCustomActionsPanel(bool FocusLastButton);
	TArray<struct FConfirmationDialogAction> CreateCustomResetToDefaultList();
	void ChangeCustomTabListVisibilityForInputType(ECommonInputType Selection);
	void HandleGamepadInfoSelectorBack();
	void HandleGamepadInfoSelectorApply();
	void ChangeCustomResetVisibilityForInputType(ECommonInputType InputType);
	void ChangeCustomClearVisibilityForInputType(ECommonInputType InputType);
	void NavigateToSelectedConfig();
	void HandleGamepadInfoSelectorFocus();
	void AreWeOkayWithThisChange(class FName ActionName, const struct FKey& Key, bool* IsOkay);
	void GamepadInfoSelectorNavRight();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TabGamePadConfig_v3_C">();
	}
	static class UTabGamePadConfig_v3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTabGamePadConfig_v3_C>();
	}
};

}
