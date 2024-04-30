#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RigVM

#include "Basic.hpp"

#include "RigVM_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class RigVM.RigVM
// 0x0220 (0x0248 - 0x0028)
class URigVM final : public UObject
{
public:
	struct FRigVMMemoryContainer                  WorkMemory;                                        // 0x0028(0x00A0)(NativeAccessSpecifierPublic)
	struct FRigVMMemoryContainer                  LiteralMemory;                                     // 0x00C8(0x00A0)(NativeAccessSpecifierPublic)
	struct FRigVMByteCode                         ByteCode;                                          // 0x0168(0x0010)(NativeAccessSpecifierPublic)
	struct FRigVMInstructionArray                 Instructions;                                      // 0x0178(0x0010)(Transient, NativeAccessSpecifierPrivate)
	TArray<class FName>                           FunctionNames;                                     // 0x0188(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4DA8[0x10];                                    // 0x0198(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRigVMParameter>                Parameters;                                        // 0x01A8(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FName, int32>                      ParametersNameMap;                                 // 0x01B8(0x0050)(NativeAccessSpecifierPrivate)
	uint8                                         Pad_4DA9[0x38];                                    // 0x0208(0x0038)(Fixing Size After Last Property [ Dumper-7 ])
	class URigVM*                                 DeferredVMToCopy;                                  // 0x0240(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	int32 AddRigVMFunction(class UScriptStruct* InRigVMStruct, const class FName& InMethodName);
	bool Execute();
	bool GetParameterValueBool(const class FName& InParameterName, int32 InArrayIndex);
	float GetParameterValueFloat(const class FName& InParameterName, int32 InArrayIndex);
	int32 GetParameterValueInt(const class FName& InParameterName, int32 InArrayIndex);
	class FName GetParameterValueName(const class FName& InParameterName, int32 InArrayIndex);
	struct FQuat GetParameterValueQuat(const class FName& InParameterName, int32 InArrayIndex);
	class FString GetParameterValueString(const class FName& InParameterName, int32 InArrayIndex);
	struct FTransform GetParameterValueTransform(const class FName& InParameterName, int32 InArrayIndex);
	struct FVector GetParameterValueVector(const class FName& InParameterName, int32 InArrayIndex);
	struct FVector2D GetParameterValueVector2D(const class FName& InParameterName, int32 InArrayIndex);
	void SetParameterValueBool(const class FName& InParameterName, bool InValue, int32 InArrayIndex);
	void SetParameterValueFloat(const class FName& InParameterName, float InValue, int32 InArrayIndex);
	void SetParameterValueInt(const class FName& InParameterName, int32 InValue, int32 InArrayIndex);
	void SetParameterValueName(const class FName& InParameterName, const class FName& InValue, int32 InArrayIndex);
	void SetParameterValueQuat(const class FName& InParameterName, const struct FQuat& InValue, int32 InArrayIndex);
	void SetParameterValueString(const class FName& InParameterName, const class FString& InValue, int32 InArrayIndex);
	void SetParameterValueTransform(const class FName& InParameterName, const struct FTransform& InValue, int32 InArrayIndex);
	void SetParameterValueVector(const class FName& InParameterName, const struct FVector& InValue, int32 InArrayIndex);
	void SetParameterValueVector2D(const class FName& InParameterName, const struct FVector2D& InValue, int32 InArrayIndex);

	int32 GetParameterArraySize(const class FName& InParameterName) const;
	class FString GetRigVMFunctionName(int32 InFunctionIndex) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RigVM">();
	}
	static class URigVM* GetDefaultObj()
	{
		return GetDefaultObjImpl<URigVM>();
	}
};

}
