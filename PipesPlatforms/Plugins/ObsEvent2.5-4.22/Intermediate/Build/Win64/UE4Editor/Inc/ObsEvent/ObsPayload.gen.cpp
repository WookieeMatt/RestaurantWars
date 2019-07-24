// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObsEvent/Public/ObsPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObsPayload() {}
// Cross Module References
	OBSEVENT_API UClass* Z_Construct_UClass_UObsPayload_NoRegister();
	OBSEVENT_API UClass* Z_Construct_UClass_UObsPayload();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ObsEvent();
// End Cross Module References
	void UObsPayload::StaticRegisterNativesUObsPayload()
	{
	}
	UClass* Z_Construct_UClass_UObsPayload_NoRegister()
	{
		return UObsPayload::StaticClass();
	}
	struct Z_Construct_UClass_UObsPayload_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObsPayload_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ObsEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObsPayload_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ObsEvents" },
		{ "ClassGroupNames", "Events" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ObsPayload.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ObsPayload.h" },
		{ "ToolTip", "Event holding all the listeners and delegating the call to them." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObsPayload_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObsPayload>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObsPayload_Statics::ClassParams = {
		&UObsPayload::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UObsPayload_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UObsPayload_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObsPayload()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObsPayload_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObsPayload, 3711437520);
	template<> OBSEVENT_API UClass* StaticClass<UObsPayload>()
	{
		return UObsPayload::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObsPayload(Z_Construct_UClass_UObsPayload, &UObsPayload::StaticClass, TEXT("/Script/ObsEvent"), TEXT("UObsPayload"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObsPayload);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
