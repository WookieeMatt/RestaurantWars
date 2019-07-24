// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VarSystem/Public/BoolVariable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoolVariable() {}
// Cross Module References
	VARSYSTEM_API UClass* Z_Construct_UClass_UBoolVariable_NoRegister();
	VARSYSTEM_API UClass* Z_Construct_UClass_UBoolVariable();
	VARSYSTEM_API UClass* Z_Construct_UClass_UBaseVariable();
	UPackage* Z_Construct_UPackage__Script_VarSystem();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_UBoolVariable_CopyBoolValue();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_UBoolVariable_GetBoolValue();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_UBoolVariable_SetBoolValue();
// End Cross Module References
	void UBoolVariable::StaticRegisterNativesUBoolVariable()
	{
		UClass* Class = UBoolVariable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyBoolValue", &UBoolVariable::execCopyBoolValue },
			{ "GetBoolValue", &UBoolVariable::execGetBoolValue },
			{ "SetBoolValue", &UBoolVariable::execSetBoolValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBoolVariable_CopyBoolValue_Statics
	{
		struct BoolVariable_eventCopyBoolValue_Parms
		{
			UBoolVariable* var;
			UBoolVariable* other;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_other;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_var;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBoolVariable_CopyBoolValue_Statics::NewProp_other = { "other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoolVariable_eventCopyBoolValue_Parms, other), Z_Construct_UClass_UBoolVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBoolVariable_CopyBoolValue_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoolVariable_eventCopyBoolValue_Parms, var), Z_Construct_UClass_UBoolVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoolVariable_CopyBoolValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoolVariable_CopyBoolValue_Statics::NewProp_other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoolVariable_CopyBoolValue_Statics::NewProp_var,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoolVariable_CopyBoolValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Var System" },
		{ "ModuleRelativePath", "Public/BoolVariable.h" },
		{ "ToolTip", "Copy the value of a bool variable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoolVariable_CopyBoolValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoolVariable, nullptr, "CopyBoolValue", sizeof(BoolVariable_eventCopyBoolValue_Parms), Z_Construct_UFunction_UBoolVariable_CopyBoolValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBoolVariable_CopyBoolValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoolVariable_CopyBoolValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBoolVariable_CopyBoolValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoolVariable_CopyBoolValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBoolVariable_CopyBoolValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBoolVariable_GetBoolValue_Statics
	{
		struct BoolVariable_eventGetBoolValue_Parms
		{
			UBoolVariable* var;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_var;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBoolVariable_GetBoolValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BoolVariable_eventGetBoolValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBoolVariable_GetBoolValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BoolVariable_eventGetBoolValue_Parms), &Z_Construct_UFunction_UBoolVariable_GetBoolValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBoolVariable_GetBoolValue_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoolVariable_eventGetBoolValue_Parms, var), Z_Construct_UClass_UBoolVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoolVariable_GetBoolValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoolVariable_GetBoolValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoolVariable_GetBoolValue_Statics::NewProp_var,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoolVariable_GetBoolValue_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Var System" },
		{ "ModuleRelativePath", "Public/BoolVariable.h" },
		{ "ToolTip", "Get the value of a bool variable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoolVariable_GetBoolValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoolVariable, nullptr, "GetBoolValue", sizeof(BoolVariable_eventGetBoolValue_Parms), Z_Construct_UFunction_UBoolVariable_GetBoolValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBoolVariable_GetBoolValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoolVariable_GetBoolValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBoolVariable_GetBoolValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoolVariable_GetBoolValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBoolVariable_GetBoolValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBoolVariable_SetBoolValue_Statics
	{
		struct BoolVariable_eventSetBoolValue_Parms
		{
			UBoolVariable* var;
			bool _value;
		};
		static void NewProp__value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_var;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBoolVariable_SetBoolValue_Statics::NewProp__value_SetBit(void* Obj)
	{
		((BoolVariable_eventSetBoolValue_Parms*)Obj)->_value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBoolVariable_SetBoolValue_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BoolVariable_eventSetBoolValue_Parms), &Z_Construct_UFunction_UBoolVariable_SetBoolValue_Statics::NewProp__value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBoolVariable_SetBoolValue_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoolVariable_eventSetBoolValue_Parms, var), Z_Construct_UClass_UBoolVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoolVariable_SetBoolValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoolVariable_SetBoolValue_Statics::NewProp__value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoolVariable_SetBoolValue_Statics::NewProp_var,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoolVariable_SetBoolValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Var System" },
		{ "ModuleRelativePath", "Public/BoolVariable.h" },
		{ "ToolTip", "Set the value of a bool variable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoolVariable_SetBoolValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoolVariable, nullptr, "SetBoolValue", sizeof(BoolVariable_eventSetBoolValue_Parms), Z_Construct_UFunction_UBoolVariable_SetBoolValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBoolVariable_SetBoolValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoolVariable_SetBoolValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBoolVariable_SetBoolValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoolVariable_SetBoolValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBoolVariable_SetBoolValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBoolVariable_NoRegister()
	{
		return UBoolVariable::StaticClass();
	}
	struct Z_Construct_UClass_UBoolVariable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static void NewProp_value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBoolVariable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseVariable,
		(UObject* (*)())Z_Construct_UPackage__Script_VarSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBoolVariable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBoolVariable_CopyBoolValue, "CopyBoolValue" }, // 429740918
		{ &Z_Construct_UFunction_UBoolVariable_GetBoolValue, "GetBoolValue" }, // 3280852278
		{ &Z_Construct_UFunction_UBoolVariable_SetBoolValue, "SetBoolValue" }, // 3686625411
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoolVariable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "BoolVariable.h" },
		{ "ModuleRelativePath", "Public/BoolVariable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoolVariable_Statics::NewProp_value_MetaData[] = {
		{ "Category", "Var System" },
		{ "ModuleRelativePath", "Public/BoolVariable.h" },
	};
#endif
	void Z_Construct_UClass_UBoolVariable_Statics::NewProp_value_SetBit(void* Obj)
	{
		((UBoolVariable*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBoolVariable_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBoolVariable), &Z_Construct_UClass_UBoolVariable_Statics::NewProp_value_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBoolVariable_Statics::NewProp_value_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBoolVariable_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBoolVariable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoolVariable_Statics::NewProp_value,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBoolVariable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoolVariable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBoolVariable_Statics::ClassParams = {
		&UBoolVariable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBoolVariable_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UBoolVariable_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBoolVariable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBoolVariable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBoolVariable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBoolVariable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBoolVariable, 3179718770);
	template<> VARSYSTEM_API UClass* StaticClass<UBoolVariable>()
	{
		return UBoolVariable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBoolVariable(Z_Construct_UClass_UBoolVariable, &UBoolVariable::StaticClass, TEXT("/Script/VarSystem"), TEXT("UBoolVariable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoolVariable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
