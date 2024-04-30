#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StaticMeshDescription

#include "Basic.hpp"

#include "MeshDescription_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function StaticMeshDescription.StaticMeshDescription.CreateCube
// 0x0034 (0x0034 - 0x0000)
struct StaticMeshDescription_CreateCube final
{
public:
	struct FVector                                Center;                                            // 0x0000(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                HalfExtents;                                       // 0x000C(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonGroupID                        PolygonGroup;                                      // 0x0018(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonID                             PolygonID_PlusX;                                   // 0x001C(0x0004)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonID                             PolygonID_MinusX;                                  // 0x0020(0x0004)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonID                             PolygonID_PlusY;                                   // 0x0024(0x0004)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonID                             PolygonID_MinusY;                                  // 0x0028(0x0004)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonID                             PolygonID_PlusZ;                                   // 0x002C(0x0004)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonID                             PolygonID_MinusZ;                                  // 0x0030(0x0004)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName
// 0x000C (0x000C - 0x0000)
struct StaticMeshDescription_SetPolygonGroupMaterialSlotName final
{
public:
	struct FPolygonGroupID                        PolygonGroupID;                                    // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   SlotName;                                          // 0x0004(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV
// 0x0010 (0x0010 - 0x0000)
struct StaticMeshDescription_SetVertexInstanceUV final
{
public:
	struct FVertexInstanceID                      VertexInstanceID;                                  // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              UV;                                                // 0x0004(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         UVIndex;                                           // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV
// 0x0010 (0x0010 - 0x0000)
struct StaticMeshDescription_GetVertexInstanceUV final
{
public:
	struct FVertexInstanceID                      VertexInstanceID;                                  // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         UVIndex;                                           // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
