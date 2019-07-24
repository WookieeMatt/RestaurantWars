// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VarSystem/Public/StringVariable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStringVariable() {}
// Cross Module References
	VARSYSTEM_API UClass* Z_Construct_UClass_UStringVariable_NoRegister();
	VARSYSTEM_API UClass* Z_Construct_UClass_UStringVariable();
	VARSYSTEM_API UClass* Z_Construct_UClass_UBaseVariable();
	UPackage* Z_Construct_UPackage__Script_VarSystem();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_UStringVariable_CopyStringValue();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_UStringVariable_GetStringValue();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_UStringVariable_SetStringValue();
// End Cross Module References
	void UStringVariable::StaticRegisterNativesUStringVariable()
	{
		UClass* Class = UStringVariable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyStringValue", &UStringVariable::execCopyStringValue },
			{ "GetStringValue", &UStringVariable::execGetStringValue },
			{ "SetStringValue", &UStringVariable::execSetStringValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStringVariable_CopyStringValue_Statics
	{
		struct StringVariable_eventCopyStringValue_Parms
		{
			UStringVariable* var;
			UStringVariable* other;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_other;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_var;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStringVariable_CopyStringValue_Statics::NewProp_other = { "other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StringVariable_eventCopyStringValue_Parms, other), Z_Construct_UClass_UStringVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStringVariable_CopyStringValue_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StringVariable_eventCopyStringValue_Parms, var), Z_Construct_UClass_UStringVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStringVariable_CopyStringValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringVariable_CopyStringValue_Statics::NewProp_other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringVariable_CopyStringValue_Statics::NewProp_var,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStringVariable_CopyStringValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Var System" },
		{ "ModuleRelativePath", "Public/StringVariable.h" },
		{ "ToolTip", "Copy the value of a string variable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStringVariable_CopyStringValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStringVariable, nullptr, "CopyStringValue", sizeof(StringVariable_eventCopyStringValue_Parms), Z_Construct_UFunction_UStringVariable_CopyStringValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStringVariable_CopyStringValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStringVariable_CopyStringValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStringVariable_CopyStringValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStringVariable_CopyStringValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStringVariable_CopyStringValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStringVariable_GetStringValue_Statics
	{
		struct StringVariable_eventGetStringValue_Parms
		{
			UStringVariable* var;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_var;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStringVariable_GetStringValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StringVariable_eventGetStringValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStringVariable_GetStringValue_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StringVariable_eventGetStringValue_Parms, var), Z_Construct_UClass_UStringVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStringVariable_GetStringValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringVariable_GetStringValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringVariable_GetStringValue_Statics::NewProp_var,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStringVariable_GetStringValue_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Var System" },
		{ "ModuleRelativePath", "Public/StringVariable.h" },
		{ "ToolTip", "Get the value of a string variable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStringVariable_GetStringValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStringVariable, nullptr, "GetStringValue", sizeof(StringVariable_eventGetStringValue_Parms), Z_Construct_UFunction_UStringVariable_GetStringValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStringVariable_GetStringValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStringVariable_GetStringValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStringVariable_GetStringValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStringVariable_GetStringValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStringVariable_GetStringValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStringVariable_SetStringValue_Statics
	{
		struct StringVariable_eventSetStringValue_Parms
		{
			UStringVariable* var;
			FString _value;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_var;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStringVariable_SetStringValue_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StringVariable_eventSetStringValue_Parms, _value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStringVariable_SetStringValue_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StringVariable_eventSetStringValue_Parms, var), Z_Construct_UClass_UStringVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStringVariable_SetStringValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringVariable_SetStringValue_Statics::NewProp__value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringVariable_SetStringValue_Statics::NewProp_var,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStringVariable_SetStringValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Var System" },
		{ "ModuleRelativePath", "Public/StringVariable.h" },
		{ "ToolTip", "Set the value of a string variable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStringVariable_SetStringValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStringVariable, nullptr, "SetStringValue", sizeof(StringVariable_eventSetStringValue_Parms), Z_Construct_UFunction_UStringVariable_SetStringValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStringVariable_SetStringValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStringVariable_SetStringValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStringVariable_SetStringValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStringVariable_SetStringValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStringVariable_SetStringValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStringVariable_NoRegister()
	{
		return UStringVariable::StaticClass();
	}
	struct Z_Construct_UClass_UStringVariable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStringVariable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseVariable,
		(UObject* (*)())Z_Construct_UPackage__Script_VarSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStringVariable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStringVariable_CopyStringValue, "CopyStringValue" }, // 4165175778
		{ &Z_Construct_UFunction_UStringVariable_GetStringValue, "GetStringValue" }, // 249965390
		{ &Z_Construct_UFunction_UStringVariable_SetStringValue, "SetStringValue" }, // 1495918192
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStringVariable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "StringVariable.h" },
		{ "ModuleRelativePath", "Public/StringVariable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStringVariable_Statics::NewProp_value_MetaData[] = {
		{ "Category", "Var System" },
		{ "ModuleRelativePath", "Public/StringVariable.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStringVariable_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStringVariable, value), METADATA_PARAMS(Z_Construct_UClass_UStringVariable_Statics::NewProp_value_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStringVariable_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStringVariable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStringVariable_Statics::NewProp_value,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStringVariable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStringVariable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStringVariable_Statics::ClassParams = {
		&UStringVariable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStringVariable_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UStringVariable_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStringVariable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStringVariable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStringVariable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStringVariable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStringVariable, 716302105);
	template<> VARSYSTEM_API UClass* StaticClass<UStringVariable>()
	{
		return UStringVariable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStringVariable(Z_Construct_UClass_UStringVariable, &UStringVariable::StaticClass, TEXT("/Script/VarSystem"), TEXT("UStringVariable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStringVariable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
