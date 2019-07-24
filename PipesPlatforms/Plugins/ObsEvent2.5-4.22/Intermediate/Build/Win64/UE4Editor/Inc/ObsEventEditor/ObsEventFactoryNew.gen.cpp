// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObsEventEditor/Private/Factories/ObsEventFactoryNew.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObsEventFactoryNew() {}
// Cross Module References
	OBSEVENTEDITOR_API UClass* Z_Construct_UClass_UObsEventFactoryNew_NoRegister();
	OBSEVENTEDITOR_API UClass* Z_Construct_UClass_UObsEventFactoryNew();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_ObsEventEditor();
// End Cross Module References
	void UObsEventFactoryNew::StaticRegisterNativesUObsEventFactoryNew()
	{
	}
	UClass* Z_Construct_UClass_UObsEventFactoryNew_NoRegister()
	{
		return UObsEventFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UObsEventFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObsEventFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ObsEventEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObsEventFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/ObsEventFactoryNew.h" },
		{ "ModuleRelativePath", "Private/Factories/ObsEventFactoryNew.h" },
		{ "ToolTip", "Implements a factory for UObsEvent objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObsEventFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObsEventFactoryNew>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObsEventFactoryNew_Statics::ClassParams = {
		&UObsEventFactoryNew::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UObsEventFactoryNew_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UObsEventFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObsEventFactoryNew()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObsEventFactoryNew_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObsEventFactoryNew, 4134091616);
	template<> OBSEVENTEDITOR_API UClass* StaticClass<UObsEventFactoryNew>()
	{
		return UObsEventFactoryNew::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObsEventFactoryNew(Z_Construct_UClass_UObsEventFactoryNew, &UObsEventFactoryNew::StaticClass, TEXT("/Script/ObsEventEditor"), TEXT("UObsEventFactoryNew"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObsEventFactoryNew);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
