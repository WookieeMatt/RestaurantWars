// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VarSystem/Public/VariablesSaver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVariablesSaver() {}
// Cross Module References
	VARSYSTEM_API UClass* Z_Construct_UClass_UVariablesSaver_NoRegister();
	VARSYSTEM_API UClass* Z_Construct_UClass_UVariablesSaver();
	VARSYSTEM_API UClass* Z_Construct_UClass_UBaseVariable();
	UPackage* Z_Construct_UPackage__Script_VarSystem();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_UVariablesSaver_LoadAllDaa();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_UVariablesSaver_SaveAllData();
	VARSYSTEM_API UClass* Z_Construct_UClass_UBaseVariable_NoRegister();
// End Cross Module References
	void UVariablesSaver::StaticRegisterNativesUVariablesSaver()
	{
		UClass* Class = UVariablesSaver::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadAllDaa", &UVariablesSaver::execLoadAllDaa },
			{ "SaveAllData", &UVariablesSaver::execSaveAllData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVariablesSaver_LoadAllDaa_Statics
	{
		struct VariablesSaver_eventLoadAllDaa_Parms
		{
			UVariablesSaver* Manager;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Manager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariablesSaver_LoadAllDaa_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariablesSaver_eventLoadAllDaa_Parms, Manager), Z_Construct_UClass_UVariablesSaver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariablesSaver_LoadAllDaa_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariablesSaver_LoadAllDaa_Statics::NewProp_Manager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariablesSaver_LoadAllDaa_Statics::Function_MetaDataParams[] = {
		{ "Category", "Var System" },
		{ "ModuleRelativePath", "Public/VariablesSaver.h" },
		{ "ToolTip", "Loads all the current variables." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariablesSaver_LoadAllDaa_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariablesSaver, nullptr, "LoadAllDaa", sizeof(VariablesSaver_eventLoadAllDaa_Parms), Z_Construct_UFunction_UVariablesSaver_LoadAllDaa_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVariablesSaver_LoadAllDaa_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariablesSaver_LoadAllDaa_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVariablesSaver_LoadAllDaa_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariablesSaver_LoadAllDaa()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariablesSaver_LoadAllDaa_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariablesSaver_SaveAllData_Statics
	{
		struct VariablesSaver_eventSaveAllData_Parms
		{
			UVariablesSaver* Manager;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Manager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariablesSaver_SaveAllData_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariablesSaver_eventSaveAllData_Parms, Manager), Z_Construct_UClass_UVariablesSaver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariablesSaver_SaveAllData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariablesSaver_SaveAllData_Statics::NewProp_Manager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariablesSaver_SaveAllData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Var System" },
		{ "ModuleRelativePath", "Public/VariablesSaver.h" },
		{ "ToolTip", "Save all the current variables." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariablesSaver_SaveAllData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariablesSaver, nullptr, "SaveAllData", sizeof(VariablesSaver_eventSaveAllData_Parms), Z_Construct_UFunction_UVariablesSaver_SaveAllData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVariablesSaver_SaveAllData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariablesSaver_SaveAllData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVariablesSaver_SaveAllData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariablesSaver_SaveAllData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariablesSaver_SaveAllData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVariablesSaver_NoRegister()
	{
		return UVariablesSaver::StaticClass();
	}
	struct Z_Construct_UClass_UVariablesSaver_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Variables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Variables;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Variables_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVariablesSaver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseVariable,
		(UObject* (*)())Z_Construct_UPackage__Script_VarSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVariablesSaver_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVariablesSaver_LoadAllDaa, "LoadAllDaa" }, // 3110950447
		{ &Z_Construct_UFunction_UVariablesSaver_SaveAllData, "SaveAllData" }, // 3279548370
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVariablesSaver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "VariablesSaver.h" },
		{ "ModuleRelativePath", "Public/VariablesSaver.h" },
		{ "ToolTip", "Implements an asset that can be used to store arbitrary text, such as notes\nor documentation." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVariablesSaver_Statics::NewProp_Variables_MetaData[] = {
		{ "Category", "VarSystem" },
		{ "ModuleRelativePath", "Public/VariablesSaver.h" },
		{ "ToolTip", "Holds the stored text." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVariablesSaver_Statics::NewProp_Variables = { "Variables", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVariablesSaver, Variables), METADATA_PARAMS(Z_Construct_UClass_UVariablesSaver_Statics::NewProp_Variables_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVariablesSaver_Statics::NewProp_Variables_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVariablesSaver_Statics::NewProp_Variables_Inner = { "Variables", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBaseVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVariablesSaver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariablesSaver_Statics::NewProp_Variables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariablesSaver_Statics::NewProp_Variables_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVariablesSaver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVariablesSaver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVariablesSaver_Statics::ClassParams = {
		&UVariablesSaver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVariablesSaver_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UVariablesSaver_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVariablesSaver_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVariablesSaver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVariablesSaver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVariablesSaver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVariablesSaver, 3181197470);
	template<> VARSYSTEM_API UClass* StaticClass<UVariablesSaver>()
	{
		return UVariablesSaver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVariablesSaver(Z_Construct_UClass_UVariablesSaver, &UVariablesSaver::StaticClass, TEXT("/Script/VarSystem"), TEXT("UVariablesSaver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVariablesSaver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
