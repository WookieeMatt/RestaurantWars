// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VarSystem/Public/FloatVariable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloatVariable() {}
// Cross Module References
	VARSYSTEM_API UClass* Z_Construct_UClass_UFloatVariable_NoRegister();
	VARSYSTEM_API UClass* Z_Construct_UClass_UFloatVariable();
	VARSYSTEM_API UClass* Z_Construct_UClass_UBaseVariable();
	UPackage* Z_Construct_UPackage__Script_VarSystem();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_UFloatVariable_CopyFloatValue();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_UFloatVariable_GetFloatValue();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_UFloatVariable_SetFloatValue();
// End Cross Module References
	void UFloatVariable::StaticRegisterNativesUFloatVariable()
	{
		UClass* Class = UFloatVariable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyFloatValue", &UFloatVariable::execCopyFloatValue },
			{ "GetFloatValue", &UFloatVariable::execGetFloatValue },
			{ "SetFloatValue", &UFloatVariable::execSetFloatValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFloatVariable_CopyFloatValue_Statics
	{
		struct FloatVariable_eventCopyFloatValue_Parms
		{
			UFloatVariable* var;
			UFloatVariable* other;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_other;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_var;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFloatVariable_CopyFloatValue_Statics::NewProp_other = { "other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatVariable_eventCopyFloatValue_Parms, other), Z_Construct_UClass_UFloatVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFloatVariable_CopyFloatValue_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatVariable_eventCopyFloatValue_Parms, var), Z_Construct_UClass_UFloatVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatVariable_CopyFloatValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatVariable_CopyFloatValue_Statics::NewProp_other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatVariable_CopyFloatValue_Statics::NewProp_var,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatVariable_CopyFloatValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Var System" },
		{ "ModuleRelativePath", "Public/FloatVariable.h" },
		{ "ToolTip", "Copy the value of a float variable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatVariable_CopyFloatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatVariable, nullptr, "CopyFloatValue", sizeof(FloatVariable_eventCopyFloatValue_Parms), Z_Construct_UFunction_UFloatVariable_CopyFloatValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFloatVariable_CopyFloatValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFloatVariable_CopyFloatValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFloatVariable_CopyFloatValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFloatVariable_CopyFloatValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFloatVariable_CopyFloatValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFloatVariable_GetFloatValue_Statics
	{
		struct FloatVariable_eventGetFloatValue_Parms
		{
			UFloatVariable* var;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_var;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFloatVariable_GetFloatValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatVariable_eventGetFloatValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFloatVariable_GetFloatValue_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatVariable_eventGetFloatValue_Parms, var), Z_Construct_UClass_UFloatVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatVariable_GetFloatValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatVariable_GetFloatValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatVariable_GetFloatValue_Statics::NewProp_var,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatVariable_GetFloatValue_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Var System" },
		{ "ModuleRelativePath", "Public/FloatVariable.h" },
		{ "ToolTip", "Get the value of a float variable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatVariable_GetFloatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatVariable, nullptr, "GetFloatValue", sizeof(FloatVariable_eventGetFloatValue_Parms), Z_Construct_UFunction_UFloatVariable_GetFloatValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFloatVariable_GetFloatValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFloatVariable_GetFloatValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFloatVariable_GetFloatValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFloatVariable_GetFloatValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFloatVariable_GetFloatValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFloatVariable_SetFloatValue_Statics
	{
		struct FloatVariable_eventSetFloatValue_Parms
		{
			UFloatVariable* var;
			float _value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_var;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFloatVariable_SetFloatValue_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatVariable_eventSetFloatValue_Parms, _value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFloatVariable_SetFloatValue_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatVariable_eventSetFloatValue_Parms, var), Z_Construct_UClass_UFloatVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatVariable_SetFloatValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatVariable_SetFloatValue_Statics::NewProp__value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatVariable_SetFloatValue_Statics::NewProp_var,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatVariable_SetFloatValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Var System" },
		{ "ModuleRelativePath", "Public/FloatVariable.h" },
		{ "ToolTip", "Set the value of a float variable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatVariable_SetFloatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatVariable, nullptr, "SetFloatValue", sizeof(FloatVariable_eventSetFloatValue_Parms), Z_Construct_UFunction_UFloatVariable_SetFloatValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFloatVariable_SetFloatValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFloatVariable_SetFloatValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFloatVariable_SetFloatValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFloatVariable_SetFloatValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFloatVariable_SetFloatValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFloatVariable_NoRegister()
	{
		return UFloatVariable::StaticClass();
	}
	struct Z_Construct_UClass_UFloatVariable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFloatVariable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseVariable,
		(UObject* (*)())Z_Construct_UPackage__Script_VarSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFloatVariable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFloatVariable_CopyFloatValue, "CopyFloatValue" }, // 2721140221
		{ &Z_Construct_UFunction_UFloatVariable_GetFloatValue, "GetFloatValue" }, // 909566636
		{ &Z_Construct_UFunction_UFloatVariable_SetFloatValue, "SetFloatValue" }, // 1783410709
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatVariable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "FloatVariable.h" },
		{ "ModuleRelativePath", "Public/FloatVariable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatVariable_Statics::NewProp_value_MetaData[] = {
		{ "Category", "Var System" },
		{ "ModuleRelativePath", "Public/FloatVariable.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFloatVariable_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFloatVariable, value), METADATA_PARAMS(Z_Construct_UClass_UFloatVariable_Statics::NewProp_value_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFloatVariable_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFloatVariable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloatVariable_Statics::NewProp_value,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloatVariable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloatVariable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFloatVariable_Statics::ClassParams = {
		&UFloatVariable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFloatVariable_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFloatVariable_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFloatVariable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFloatVariable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFloatVariable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFloatVariable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFloatVariable, 1343672187);
	template<> VARSYSTEM_API UClass* StaticClass<UFloatVariable>()
	{
		return UFloatVariable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFloatVariable(Z_Construct_UClass_UFloatVariable, &UFloatVariable::StaticClass, TEXT("/Script/VarSystem"), TEXT("UFloatVariable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFloatVariable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
