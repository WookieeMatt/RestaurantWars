// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VarSystem/Public/FVectorVariable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFVectorVariable() {}
// Cross Module References
	VARSYSTEM_API UClass* Z_Construct_UClass_UFVectorVariable_NoRegister();
	VARSYSTEM_API UClass* Z_Construct_UClass_UFVectorVariable();
	VARSYSTEM_API UClass* Z_Construct_UClass_UBaseVariable();
	UPackage* Z_Construct_UPackage__Script_VarSystem();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_UFVectorVariable_CopyFVectorValue();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_UFVectorVariable_GetFVectorValue();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_UFVectorVariable_SetFVectorValue();
// End Cross Module References
	void UFVectorVariable::StaticRegisterNativesUFVectorVariable()
	{
		UClass* Class = UFVectorVariable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyFVectorValue", &UFVectorVariable::execCopyFVectorValue },
			{ "GetFVectorValue", &UFVectorVariable::execGetFVectorValue },
			{ "SetFVectorValue", &UFVectorVariable::execSetFVectorValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFVectorVariable_CopyFVectorValue_Statics
	{
		struct FVectorVariable_eventCopyFVectorValue_Parms
		{
			UFVectorVariable* var;
			UFVectorVariable* other;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_other;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_var;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFVectorVariable_CopyFVectorValue_Statics::NewProp_other = { "other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVectorVariable_eventCopyFVectorValue_Parms, other), Z_Construct_UClass_UFVectorVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFVectorVariable_CopyFVectorValue_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVectorVariable_eventCopyFVectorValue_Parms, var), Z_Construct_UClass_UFVectorVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFVectorVariable_CopyFVectorValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFVectorVariable_CopyFVectorValue_Statics::NewProp_other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFVectorVariable_CopyFVectorValue_Statics::NewProp_var,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFVectorVariable_CopyFVectorValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Var System" },
		{ "ModuleRelativePath", "Public/FVectorVariable.h" },
		{ "ToolTip", "Copy the value of a FVector variable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFVectorVariable_CopyFVectorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFVectorVariable, nullptr, "CopyFVectorValue", sizeof(FVectorVariable_eventCopyFVectorValue_Parms), Z_Construct_UFunction_UFVectorVariable_CopyFVectorValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFVectorVariable_CopyFVectorValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFVectorVariable_CopyFVectorValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFVectorVariable_CopyFVectorValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFVectorVariable_CopyFVectorValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFVectorVariable_CopyFVectorValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFVectorVariable_GetFVectorValue_Statics
	{
		struct FVectorVariable_eventGetFVectorValue_Parms
		{
			UFVectorVariable* var;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_var;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFVectorVariable_GetFVectorValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVectorVariable_eventGetFVectorValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFVectorVariable_GetFVectorValue_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVectorVariable_eventGetFVectorValue_Parms, var), Z_Construct_UClass_UFVectorVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFVectorVariable_GetFVectorValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFVectorVariable_GetFVectorValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFVectorVariable_GetFVectorValue_Statics::NewProp_var,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFVectorVariable_GetFVectorValue_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Var System" },
		{ "ModuleRelativePath", "Public/FVectorVariable.h" },
		{ "ToolTip", "Get the value of a FVector variable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFVectorVariable_GetFVectorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFVectorVariable, nullptr, "GetFVectorValue", sizeof(FVectorVariable_eventGetFVectorValue_Parms), Z_Construct_UFunction_UFVectorVariable_GetFVectorValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFVectorVariable_GetFVectorValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFVectorVariable_GetFVectorValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFVectorVariable_GetFVectorValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFVectorVariable_GetFVectorValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFVectorVariable_GetFVectorValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFVectorVariable_SetFVectorValue_Statics
	{
		struct FVectorVariable_eventSetFVectorValue_Parms
		{
			UFVectorVariable* var;
			FVector _value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_var;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFVectorVariable_SetFVectorValue_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVectorVariable_eventSetFVectorValue_Parms, _value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFVectorVariable_SetFVectorValue_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVectorVariable_eventSetFVectorValue_Parms, var), Z_Construct_UClass_UFVectorVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFVectorVariable_SetFVectorValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFVectorVariable_SetFVectorValue_Statics::NewProp__value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFVectorVariable_SetFVectorValue_Statics::NewProp_var,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFVectorVariable_SetFVectorValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Var System" },
		{ "ModuleRelativePath", "Public/FVectorVariable.h" },
		{ "ToolTip", "Set the value of a FVector variable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFVectorVariable_SetFVectorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFVectorVariable, nullptr, "SetFVectorValue", sizeof(FVectorVariable_eventSetFVectorValue_Parms), Z_Construct_UFunction_UFVectorVariable_SetFVectorValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFVectorVariable_SetFVectorValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFVectorVariable_SetFVectorValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFVectorVariable_SetFVectorValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFVectorVariable_SetFVectorValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFVectorVariable_SetFVectorValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFVectorVariable_NoRegister()
	{
		return UFVectorVariable::StaticClass();
	}
	struct Z_Construct_UClass_UFVectorVariable_Statics
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
	UObject* (*const Z_Construct_UClass_UFVectorVariable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseVariable,
		(UObject* (*)())Z_Construct_UPackage__Script_VarSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFVectorVariable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFVectorVariable_CopyFVectorValue, "CopyFVectorValue" }, // 3028787407
		{ &Z_Construct_UFunction_UFVectorVariable_GetFVectorValue, "GetFVectorValue" }, // 470499486
		{ &Z_Construct_UFunction_UFVectorVariable_SetFVectorValue, "SetFVectorValue" }, // 1941154513
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFVectorVariable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "FVectorVariable.h" },
		{ "ModuleRelativePath", "Public/FVectorVariable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFVectorVariable_Statics::NewProp_value_MetaData[] = {
		{ "Category", "Var System" },
		{ "ModuleRelativePath", "Public/FVectorVariable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFVectorVariable_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFVectorVariable, value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFVectorVariable_Statics::NewProp_value_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFVectorVariable_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFVectorVariable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFVectorVariable_Statics::NewProp_value,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFVectorVariable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFVectorVariable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFVectorVariable_Statics::ClassParams = {
		&UFVectorVariable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFVectorVariable_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFVectorVariable_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFVectorVariable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFVectorVariable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFVectorVariable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFVectorVariable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFVectorVariable, 1156396391);
	template<> VARSYSTEM_API UClass* StaticClass<UFVectorVariable>()
	{
		return UFVectorVariable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFVectorVariable(Z_Construct_UClass_UFVectorVariable, &UFVectorVariable::StaticClass, TEXT("/Script/VarSystem"), TEXT("UFVectorVariable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFVectorVariable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
