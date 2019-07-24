// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VarSystem/Public/BaseVariable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseVariable() {}
// Cross Module References
	VARSYSTEM_API UClass* Z_Construct_UClass_UBaseVariable_NoRegister();
	VARSYSTEM_API UClass* Z_Construct_UClass_UBaseVariable();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_VarSystem();
// End Cross Module References
	void UBaseVariable::StaticRegisterNativesUBaseVariable()
	{
	}
	UClass* Z_Construct_UClass_UBaseVariable_NoRegister()
	{
		return UBaseVariable::StaticClass();
	}
	struct Z_Construct_UClass_UBaseVariable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VariableDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_VariableDescription;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseVariable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_VarSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseVariable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "BaseVariable.h" },
		{ "ModuleRelativePath", "Public/BaseVariable.h" },
		{ "ToolTip", "Implements an asset that can store specific types of variables." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseVariable_Statics::NewProp_VariableDescription_MetaData[] = {
		{ "Category", "VarSystem" },
		{ "ModuleRelativePath", "Public/BaseVariable.h" },
		{ "ToolTip", "Full description of the variable usage.." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UBaseVariable_Statics::NewProp_VariableDescription = { "VariableDescription", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseVariable, VariableDescription), METADATA_PARAMS(Z_Construct_UClass_UBaseVariable_Statics::NewProp_VariableDescription_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBaseVariable_Statics::NewProp_VariableDescription_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseVariable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseVariable_Statics::NewProp_VariableDescription,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseVariable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseVariable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseVariable_Statics::ClassParams = {
		&UBaseVariable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseVariable_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBaseVariable_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseVariable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBaseVariable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseVariable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseVariable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseVariable, 2896294056);
	template<> VARSYSTEM_API UClass* StaticClass<UBaseVariable>()
	{
		return UBaseVariable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseVariable(Z_Construct_UClass_UBaseVariable, &UBaseVariable::StaticClass, TEXT("/Script/VarSystem"), TEXT("UBaseVariable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseVariable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
