#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UdpMessaging

#include "Basic.hpp"


namespace SDK
{

// Enum UdpMessaging.EUdpMessageFormat
// NumValues: 0x0006
enum class EUdpMessageFormat : uint8
{
	None                                     = 0,
	Json                                     = 1,
	TaggedProperty                           = 2,
	CborPlatformEndianness                   = 3,
	CborStandardEndianness                   = 4,
	EUdpMessageFormat_MAX                    = 5,
};

// ScriptStruct UdpMessaging.UdpMockMessage
// 0x0010 (0x0010 - 0x0000)
struct FUdpMockMessage final
{
public:
	TArray<uint8>                                 Data;                                              // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
