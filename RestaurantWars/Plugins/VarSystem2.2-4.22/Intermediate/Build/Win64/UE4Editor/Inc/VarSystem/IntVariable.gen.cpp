// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VarSystem/Public/IntVariable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntVariable() {}
// Cross Module References
	VARSYSTEM_API UClass* Z_Construct_UClass_UIntVariable_NoRegister();
	VARSYSTEM_API UClass* Z_Construct_UClass_UIntVariable();
	VARSYSTEM_API UClass* Z_Construct_UClass_UBaseVariable();
	UPackage* Z_Construct_UPackage__Script_VarSystem();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_UIntVariable_CopyIntValue();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_UIntVariable_GetIntValue();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_UIntVariable_SetIntValue();
// End Cross Module References
	void UIntVariable::StaticRegisterNativesUIntVariable()
	{
		UClass* Class = UIntVariable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyIntValue", &UIntVariable::execCopyIntValue },
			{ "GetIntValue", &UIntVariable::execGetIntValue },
			{ "SetIntValue", &UIntVariable::execSetIntValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIntVariable_CopyIntValue_Statics
	{
		struct IntVariable_eventCopyIntValue_Parms
		{
			UIntVariable* var;
			UIntVariable* other;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_other;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_var;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIntVariable_CopyIntValue_Statics::NewProp_other = { "other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IntVariable_eventCopyIntValue_Parms, other), Z_Construct_UClass_UIntVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIntVariable_CopyIntValue_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IntVariable_eventCopyIntValue_Parms, var), Z_Construct_UClass_UIntVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIntVariable_CopyIntValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIntVariable_CopyIntValue_Statics::NewProp_other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIntVariable_CopyIntValue_Statics::NewProp_var,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIntVariable_CopyIntValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Var System" },
		{ "ModuleRelativePath", "Public/IntVariable.h" },
		{ "ToolTip", "Copy the value of a int variable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIntVariable_CopyIntValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIntVariable, nullptr, "CopyIntValue", sizeof(IntVariable_eventCopyIntValue_Parms), Z_Construct_UFunction_UIntVariable_CopyIntValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UIntVariable_CopyIntValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIntVariable_CopyIntValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UIntVariable_CopyIntValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIntVariable_CopyIntValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIntVariable_CopyIntValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIntVariable_GetIntValue_Statics
	{
		struct IntVariable_eventGetIntValue_Parms
		{
			UIntVariable* var;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_var;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIntVariable_GetIntValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IntVariable_eventGetIntValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIntVariable_GetIntValue_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IntVariable_eventGetIntValue_Parms, var), Z_Construct_UClass_UIntVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIntVariable_GetIntValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIntVariable_GetIntValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIntVariable_GetIntValue_Statics::NewProp_var,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIntVariable_GetIntValue_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Var System" },
		{ "ModuleRelativePath", "Public/IntVariable.h" },
		{ "ToolTip", "Get the value of a int variable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIntVariable_GetIntValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIntVariable, nullptr, "GetIntValue", sizeof(IntVariable_eventGetIntValue_Parms), Z_Construct_UFunction_UIntVariable_GetIntValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UIntVariable_GetIntValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIntVariable_GetIntValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UIntVariable_GetIntValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIntVariable_GetIntValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIntVariable_GetIntValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIntVariable_SetIntValue_Statics
	{
		struct IntVariable_eventSetIntValue_Parms
		{
			UIntVariable* var;
			int32 _value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_var;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIntVariable_SetIntValue_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IntVariable_eventSetIntValue_Parms, _value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIntVariable_SetIntValue_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IntVariable_eventSetIntValue_Parms, var), Z_Construct_UClass_UIntVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIntVariable_SetIntValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIntVariable_SetIntValue_Statics::NewProp__value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIntVariable_SetIntValue_Statics::NewProp_var,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIntVariable_SetIntValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Var System" },
		{ "ModuleRelativePath", "Public/IntVariable.h" },
		{ "ToolTip", "Set the value of a int variable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIntVariable_SetIntValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIntVariable, nullptr, "SetIntValue", sizeof(IntVariable_eventSetIntValue_Parms), Z_Construct_UFunction_UIntVariable_SetIntValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UIntVariable_SetIntValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIntVariable_SetIntValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UIntVariable_SetIntValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIntVariable_SetIntValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIntVariable_SetIntValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIntVariable_NoRegister()
	{
		return UIntVariable::StaticClass();
	}
	struct Z_Construct_UClass_UIntVariable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIntVariable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseVariable,
		(UObject* (*)())Z_Construct_UPackage__Script_VarSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIntVariable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIntVariable_CopyIntValue, "CopyIntValue" }, // 2561621270
		{ &Z_Construct_UFunction_UIntVariable_GetIntValue, "GetIntValue" }, // 720975375
		{ &Z_Construct_UFunction_UIntVariable_SetIntValue, "SetIntValue" }, // 1252374224
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIntVariable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "IntVariable.h" },
		{ "ModuleRelativePath", "Public/IntVariable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIntVariable_Statics::NewProp_value_MetaData[] = {
		{ "Category", "Var System" },
		{ "ModuleRelativePath", "Public/IntVariable.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIntVariable_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIntVariable, value), METADATA_PARAMS(Z_Construct_UClass_UIntVariable_Statics::NewProp_value_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIntVariable_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIntVariable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIntVariable_Statics::NewProp_value,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIntVariable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIntVariable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIntVariable_Statics::ClassParams = {
		&UIntVariable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIntVariable_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UIntVariable_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIntVariable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UIntVariable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIntVariable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIntVariable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIntVariable, 2884876783);
	template<> VARSYSTEM_API UClass* StaticClass<UIntVariable>()
	{
		return UIntVariable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIntVariable(Z_Construct_UClass_UIntVariable, &UIntVariable::StaticClass, TEXT("/Script/VarSystem"), TEXT("UIntVariable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIntVariable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
