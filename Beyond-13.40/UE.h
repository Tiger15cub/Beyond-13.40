#pragma once
#include "SDK/SDK.hpp"
using namespace SDK;

#define RESULT_DECL void*const RESULT_PARAM

namespace UE
{
	// straight from reboot cuz icl
	// if you are mad about this whoever, realize its literally not worth your time writing all this


	class FOutputDevice
	{
	public:
		bool bSuppressEventTag;
		bool bAutoEmitLineTerminator;
	};

	struct FFrame : public FOutputDevice // https://github.com/EpicGames/UnrealEngine/blob/7acbae1c8d1736bb5a0da4f6ed21ccb237bc8851/Engine/Source/Runtime/CoreUObject/Public/UObject/Stack.h#L83
	{
	public:
		void** VFT;

		UFunction* Node;
		UObject* Object;
		uint8* Code;
		uint8* Locals;

		void* MostRecentProperty;
		uint8_t* MostRecentPropertyAddress;

		void*& GetPropertyChainForCompiledIn()
		{
			static auto PropertyChainForCompiledInOffset = 0x80;
			return *(void**)(__int64(this) + PropertyChainForCompiledInOffset);
		}

		uint8_t*& GetMostRecentPropertyAddress()
		{
			auto off = (void*)(&((struct FFrame*)NULL)->MostRecentPropertyAddress);
			return MostRecentPropertyAddress;
		}

		__forceinline void StepExplicitProperty(void* const Result, void* Property)
		{
			static void (*StepExplicitPropertyOriginal)(__int64 frame, void* const Result, void* Property) = decltype(StepExplicitPropertyOriginal)(reinterpret_cast<uintptr_t>(GetModuleHandle(0)) + 0x3531160);
			StepExplicitPropertyOriginal(__int64(this), Result, Property);
		}

		__forceinline void Step(UObject* Context, RESULT_DECL)
		{
			static void (*StepOriginal)(__int64 frame, UObject * Context, RESULT_DECL) = decltype(StepOriginal)(reinterpret_cast<uintptr_t>(GetModuleHandle(0)) + 0x3531130);
			StepOriginal(__int64(this), Context, RESULT_PARAM);
		}

		__forceinline void StepCompiledIn(void* const Result/*, const FFieldClass* ExpectedPropertyType*/, bool bPrint = false) // https://github.com/EpicGames/UnrealEngine/blob/cdaec5b33ea5d332e51eee4e4866495c90442122/Engine/Source/Runtime/CoreUObject/Public/UObject/Stack.h#L444
		{
			if (Code)
			{
				Step(Object, Result);
			}
			else
			{
				void* Property = GetPropertyChainForCompiledIn();
				GetPropertyChainForCompiledIn() = *(void**)(__int64(Property) + 0x20);
				StepExplicitProperty(Result, Property);
			}
		}

		template</* class TProperty, */ typename TNativeType>
		__forceinline TNativeType& StepCompiledInRef(void* const TemporaryBuffer)
		{
			GetMostRecentPropertyAddress() = nullptr;
			// GetMostRecentPropertyContainer() = nullptr; // added in ue5.1

			if (Code)
			{
				Step(Object, TemporaryBuffer);
			}

			return (GetMostRecentPropertyAddress() != NULL) ? *(TNativeType*)(GetMostRecentPropertyAddress()) : *(TNativeType*)TemporaryBuffer;
		}
	};
	template <int32_t NumElements>
	struct TInlineAllocator
	{
		template <int32_t Size, int32_t Alignment>
		struct alignas(Alignment) TAlligendBytes
		{
			uint8_t Pad[Size];
		};

		template <typename ElementType>
		struct TTypeCompatibleBytes : public TAlligendBytes<sizeof(ElementType), alignof(ElementType)>
		{
		};

		template <typename ElementType>
		class ForElementType
		{
			friend class TBitArray;

		private:
			TTypeCompatibleBytes<ElementType> InlineData[NumElements];
			ElementType* SecondaryData;
		};
	};;

	class TBitArray
	{
	private:
		TInlineAllocator<4>::ForElementType<uint32_t> Data;
		int32_t NumBits;
		int32_t MaxBits;
	};

	template <typename ElementType>
	union TSparseArrayElementOrListLink
	{
		TSparseArrayElementOrListLink(ElementType& InElement)
			: ElementData(InElement)
		{
		}
		TSparseArrayElementOrListLink(ElementType&& InElement)
			: ElementData(InElement)
		{
		}

		TSparseArrayElementOrListLink(int32_t InPrevFree, int32_t InNextFree)
			: PrevFreeIndex(InPrevFree)
			, NextFreeIndex(InNextFree)
		{
		}

		TSparseArrayElementOrListLink<ElementType> operator=(const TSparseArrayElementOrListLink<ElementType>& Other)
		{
			return TSparseArrayElementOrListLink(Other.NextFreeIndex, Other.PrevFreeIndex);
		}

		ElementType ElementData;
		int32_t PrevFreeIndex;
		int32_t NextFreeIndex;
	};

	template<typename InElementType>
	class TSparseArray
	{
	public:
		typedef TSparseArrayElementOrListLink<InElementType> FSparseArrayElement;

		TArray<FSparseArrayElement> Data;
		TBitArray AllocationFlags;
		int32_t FirstFreeIndex;
		int32_t NumFreeIndices;

	};

	class FSetElementId
	{
		int32_t Index;
	};

	template<typename InElementType>
	class TSetElementBase
	{
	public:
		typedef InElementType ElementType;
		ElementType Value;
		FSetElementId HashNextId;
		int32_t HashIndex;
	};

	template <typename InElementType>
	class TSetElement : public TSetElementBase<InElementType>
	{

	};

	template<typename InElementType>
	class TSet
	{
	public:
		typedef TSetElement<InElementType> SetElementType;
		typedef TSparseArray<SetElementType>     ElementArrayType;
		ElementArrayType Elements;
		int32_t Hash;
		mutable int32_t	 HashSize;

	};

	template<typename KeyType, typename ValueType>
	struct TMap
	{
		typedef TPair<KeyType, ValueType> ElementType;
		TSet<ElementType> Pairs;
	};
}