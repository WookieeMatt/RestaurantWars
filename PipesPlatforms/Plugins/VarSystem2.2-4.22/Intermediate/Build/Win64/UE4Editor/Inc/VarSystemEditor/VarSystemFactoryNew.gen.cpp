// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VarSystemEditor/Private/Factories/VarSystemFactoryNew.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVarSystemFactoryNew() {}
// Cross Module References
	VARSYSTEMEDITOR_API UClass* Z_Construct_UClass_UVarSystemFactoryNew_NoRegister();
	VARSYSTEMEDITOR_API UClass* Z_Construct_UClass_UVarSystemFactoryNew();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_VarSystemEditor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	VARSYSTEM_API UClass* Z_Construct_UClass_UBaseVariable_NoRegister();
// End Cross Module References
	void UVarSystemFactoryNew::StaticRegisterNativesUVarSystemFactoryNew()
	{
	}
	UClass* Z_Construct_UClass_UVarSystemFactoryNew_NoRegister()
	{
		return UVarSystemFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UVarSystemFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataAssetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DataAssetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVarSystemFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VarSystemEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVarSystemFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/VarSystemFactoryNew.h" },
		{ "ModuleRelativePath", "Private/Factories/VarSystemFactoryNew.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVarSystemFactoryNew_Statics::NewProp_DataAssetClass_MetaData[] = {
		{ "Category", "DataAsset" },
		{ "ModuleRelativePath", "Private/Factories/VarSystemFactoryNew.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVarSystemFactoryNew_Statics::NewProp_DataAssetClass = { "DataAssetClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVarSystemFactoryNew, DataAssetClass), Z_Construct_UClass_UBaseVariable_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UVarSystemFactoryNew_Statics::NewProp_DataAssetClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVarSystemFactoryNew_Statics::NewProp_DataAssetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVarSystemFactoryNew_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVarSystemFactoryNew_Statics::NewProp_DataAssetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVarSystemFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVarSystemFactoryNew>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVarSystemFactoryNew_Statics::ClassParams = {
		&UVarSystemFactoryNew::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVarSystemFactoryNew_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UVarSystemFactoryNew_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVarSystemFactoryNew_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVarSystemFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVarSystemFactoryNew()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVarSystemFactoryNew_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVarSystemFactoryNew, 3272015411);
	template<> VARSYSTEMEDITOR_API UClass* StaticClass<UVarSystemFactoryNew>()
	{
		return UVarSystemFactoryNew::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVarSystemFactoryNew(Z_Construct_UClass_UVarSystemFactoryNew, &UVarSystemFactoryNew::StaticClass, TEXT("/Script/VarSystemEditor"), TEXT("UVarSystemFactoryNew"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVarSystemFactoryNew);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
