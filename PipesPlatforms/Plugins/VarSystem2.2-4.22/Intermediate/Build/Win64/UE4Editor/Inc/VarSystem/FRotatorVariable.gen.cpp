// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VarSystem/Public/FRotatorVariable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFRotatorVariable() {}
// Cross Module References
	VARSYSTEM_API UClass* Z_Construct_UClass_UFRotatorVariable_NoRegister();
	VARSYSTEM_API UClass* Z_Construct_UClass_UFRotatorVariable();
	VARSYSTEM_API UClass* Z_Construct_UClass_UBaseVariable();
	UPackage* Z_Construct_UPackage__Script_VarSystem();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_UFRotatorVariable_CopyFRotatorValue();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_UFRotatorVariable_GetFRotatorValue();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_UFRotatorVariable_SetFRotatorValue();
// End Cross Module References
	void UFRotatorVariable::StaticRegisterNativesUFRotatorVariable()
	{
		UClass* Class = UFRotatorVariable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyFRotatorValue", &UFRotatorVariable::execCopyFRotatorValue },
			{ "GetFRotatorValue", &UFRotatorVariable::execGetFRotatorValue },
			{ "SetFRotatorValue", &UFRotatorVariable::execSetFRotatorValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFRotatorVariable_CopyFRotatorValue_Statics
	{
		struct FRotatorVariable_eventCopyFRotatorValue_Parms
		{
			UFRotatorVariable* var;
			UFRotatorVariable* other;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_other;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_var;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFRotatorVariable_CopyFRotatorValue_Statics::NewProp_other = { "other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRotatorVariable_eventCopyFRotatorValue_Parms, other), Z_Construct_UClass_UFRotatorVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFRotatorVariable_CopyFRotatorValue_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRotatorVariable_eventCopyFRotatorValue_Parms, var), Z_Construct_UClass_UFRotatorVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFRotatorVariable_CopyFRotatorValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFRotatorVariable_CopyFRotatorValue_Statics::NewProp_other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFRotatorVariable_CopyFRotatorValue_Statics::NewProp_var,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFRotatorVariable_CopyFRotatorValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Var System" },
		{ "ModuleRelativePath", "Public/FRotatorVariable.h" },
		{ "ToolTip", "Copy the value of a FRotator variable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFRotatorVariable_CopyFRotatorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFRotatorVariable, nullptr, "CopyFRotatorValue", sizeof(FRotatorVariable_eventCopyFRotatorValue_Parms), Z_Construct_UFunction_UFRotatorVariable_CopyFRotatorValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFRotatorVariable_CopyFRotatorValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFRotatorVariable_CopyFRotatorValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFRotatorVariable_CopyFRotatorValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFRotatorVariable_CopyFRotatorValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFRotatorVariable_CopyFRotatorValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFRotatorVariable_GetFRotatorValue_Statics
	{
		struct FRotatorVariable_eventGetFRotatorValue_Parms
		{
			UFRotatorVariable* var;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_var;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFRotatorVariable_GetFRotatorValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRotatorVariable_eventGetFRotatorValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFRotatorVariable_GetFRotatorValue_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRotatorVariable_eventGetFRotatorValue_Parms, var), Z_Construct_UClass_UFRotatorVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFRotatorVariable_GetFRotatorValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFRotatorVariable_GetFRotatorValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFRotatorVariable_GetFRotatorValue_Statics::NewProp_var,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFRotatorVariable_GetFRotatorValue_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Var System" },
		{ "ModuleRelativePath", "Public/FRotatorVariable.h" },
		{ "ToolTip", "Get the value of a FRotator variable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFRotatorVariable_GetFRotatorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFRotatorVariable, nullptr, "GetFRotatorValue", sizeof(FRotatorVariable_eventGetFRotatorValue_Parms), Z_Construct_UFunction_UFRotatorVariable_GetFRotatorValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFRotatorVariable_GetFRotatorValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFRotatorVariable_GetFRotatorValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFRotatorVariable_GetFRotatorValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFRotatorVariable_GetFRotatorValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFRotatorVariable_GetFRotatorValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFRotatorVariable_SetFRotatorValue_Statics
	{
		struct FRotatorVariable_eventSetFRotatorValue_Parms
		{
			UFRotatorVariable* var;
			FRotator _value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_var;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFRotatorVariable_SetFRotatorValue_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRotatorVariable_eventSetFRotatorValue_Parms, _value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFRotatorVariable_SetFRotatorValue_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRotatorVariable_eventSetFRotatorValue_Parms, var), Z_Construct_UClass_UFRotatorVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFRotatorVariable_SetFRotatorValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFRotatorVariable_SetFRotatorValue_Statics::NewProp__value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFRotatorVariable_SetFRotatorValue_Statics::NewProp_var,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFRotatorVariable_SetFRotatorValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Var System" },
		{ "ModuleRelativePath", "Public/FRotatorVariable.h" },
		{ "ToolTip", "Set the value of a FRotator variable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFRotatorVariable_SetFRotatorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFRotatorVariable, nullptr, "SetFRotatorValue", sizeof(FRotatorVariable_eventSetFRotatorValue_Parms), Z_Construct_UFunction_UFRotatorVariable_SetFRotatorValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFRotatorVariable_SetFRotatorValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFRotatorVariable_SetFRotatorValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFRotatorVariable_SetFRotatorValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFRotatorVariable_SetFRotatorValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFRotatorVariable_SetFRotatorValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFRotatorVariable_NoRegister()
	{
		return UFRotatorVariable::StaticClass();
	}
	struct Z_Construct_UClass_UFRotatorVariable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFRotatorVariable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseVariable,
		(UObject* (*)())Z_Construct_UPackage__Script_VarSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFRotatorVariable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFRotatorVariable_CopyFRotatorValue, "CopyFRotatorValue" }, // 3772175880
		{ &Z_Construct_UFunction_UFRotatorVariable_GetFRotatorValue, "GetFRotatorValue" }, // 2981419365
		{ &Z_Construct_UFunction_UFRotatorVariable_SetFRotatorValue, "SetFRotatorValue" }, // 440692281
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFRotatorVariable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "FRotatorVariable.h" },
		{ "ModuleRelativePath", "Public/FRotatorVariable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFRotatorVariable_Statics::NewProp_value_MetaData[] = {
		{ "Category", "Var System" },
		{ "ModuleRelativePath", "Public/FRotatorVariable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFRotatorVariable_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFRotatorVariable, value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UFRotatorVariable_Statics::NewProp_value_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFRotatorVariable_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFRotatorVariable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFRotatorVariable_Statics::NewProp_value,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFRotatorVariable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFRotatorVariable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFRotatorVariable_Statics::ClassParams = {
		&UFRotatorVariable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFRotatorVariable_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFRotatorVariable_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFRotatorVariable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFRotatorVariable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFRotatorVariable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFRotatorVariable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFRotatorVariable, 3946057502);
	template<> VARSYSTEM_API UClass* StaticClass<UFRotatorVariable>()
	{
		return UFRotatorVariable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFRotatorVariable(Z_Construct_UClass_UFRotatorVariable, &UFRotatorVariable::StaticClass, TEXT("/Script/VarSystem"), TEXT("UFRotatorVariable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFRotatorVariable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
