// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObsEventEditor/Private/Nodes/K2Node_ConstructObsPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_ConstructObsPayload() {}
// Cross Module References
	OBSEVENTEDITOR_API UClass* Z_Construct_UClass_UK2Node_ConstructObsPayload_NoRegister();
	OBSEVENTEDITOR_API UClass* Z_Construct_UClass_UK2Node_ConstructObsPayload();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_ConstructObjectFromClass();
	UPackage* Z_Construct_UPackage__Script_ObsEventEditor();
// End Cross Module References
	void UK2Node_ConstructObsPayload::StaticRegisterNativesUK2Node_ConstructObsPayload()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_ConstructObsPayload_NoRegister()
	{
		return UK2Node_ConstructObsPayload::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_ConstructObsPayload_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_ConstructObsPayload_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_ConstructObjectFromClass,
		(UObject* (*)())Z_Construct_UPackage__Script_ObsEventEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_ConstructObsPayload_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nodes/K2Node_ConstructObsPayload.h" },
		{ "ModuleRelativePath", "Private/Nodes/K2Node_ConstructObsPayload.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_ConstructObsPayload_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_ConstructObsPayload>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_ConstructObsPayload_Statics::ClassParams = {
		&UK2Node_ConstructObsPayload::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_ConstructObsPayload_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_ConstructObsPayload_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_ConstructObsPayload()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_ConstructObsPayload_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_ConstructObsPayload, 834310503);
	template<> OBSEVENTEDITOR_API UClass* StaticClass<UK2Node_ConstructObsPayload>()
	{
		return UK2Node_ConstructObsPayload::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_ConstructObsPayload(Z_Construct_UClass_UK2Node_ConstructObsPayload, &UK2Node_ConstructObsPayload::StaticClass, TEXT("/Script/ObsEventEditor"), TEXT("UK2Node_ConstructObsPayload"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_ConstructObsPayload);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
