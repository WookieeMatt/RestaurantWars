// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VarSystem/Public/ActorRefVariable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorRefVariable() {}
// Cross Module References
	VARSYSTEM_API UClass* Z_Construct_UClass_UActorRefVariable_NoRegister();
	VARSYSTEM_API UClass* Z_Construct_UClass_UActorRefVariable();
	VARSYSTEM_API UClass* Z_Construct_UClass_UBaseVariable();
	UPackage* Z_Construct_UPackage__Script_VarSystem();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_UActorRefVariable_CopyAActorValue();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_UActorRefVariable_GetAActorValue();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_UActorRefVariable_SetAActorValue();
// End Cross Module References
	void UActorRefVariable::StaticRegisterNativesUActorRefVariable()
	{
		UClass* Class = UActorRefVariable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyAActorValue", &UActorRefVariable::execCopyAActorValue },
			{ "GetAActorValue", &UActorRefVariable::execGetAActorValue },
			{ "SetAActorValue", &UActorRefVariable::execSetAActorValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActorRefVariable_CopyAActorValue_Statics
	{
		struct ActorRefVariable_eventCopyAActorValue_Parms
		{
			UActorRefVariable* var;
			UActorRefVariable* other;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_other;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_var;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorRefVariable_CopyAActorValue_Statics::NewProp_other = { "other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorRefVariable_eventCopyAActorValue_Parms, other), Z_Construct_UClass_UActorRefVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorRefVariable_CopyAActorValue_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorRefVariable_eventCopyAActorValue_Parms, var), Z_Construct_UClass_UActorRefVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorRefVariable_CopyAActorValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorRefVariable_CopyAActorValue_Statics::NewProp_other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorRefVariable_CopyAActorValue_Statics::NewProp_var,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorRefVariable_CopyAActorValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Var System" },
		{ "ModuleRelativePath", "Public/ActorRefVariable.h" },
		{ "ToolTip", "Copy the value of a AActor* variable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorRefVariable_CopyAActorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorRefVariable, nullptr, "CopyAActorValue", sizeof(ActorRefVariable_eventCopyAActorValue_Parms), Z_Construct_UFunction_UActorRefVariable_CopyAActorValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UActorRefVariable_CopyAActorValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorRefVariable_CopyAActorValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UActorRefVariable_CopyAActorValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorRefVariable_CopyAActorValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorRefVariable_CopyAActorValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorRefVariable_GetAActorValue_Statics
	{
		struct ActorRefVariable_eventGetAActorValue_Parms
		{
			UActorRefVariable* var;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_var;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorRefVariable_GetAActorValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorRefVariable_eventGetAActorValue_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorRefVariable_GetAActorValue_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorRefVariable_eventGetAActorValue_Parms, var), Z_Construct_UClass_UActorRefVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorRefVariable_GetAActorValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorRefVariable_GetAActorValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorRefVariable_GetAActorValue_Statics::NewProp_var,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorRefVariable_GetAActorValue_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Var System" },
		{ "ModuleRelativePath", "Public/ActorRefVariable.h" },
		{ "ToolTip", "Get the value of a AActor* variable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorRefVariable_GetAActorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorRefVariable, nullptr, "GetAActorValue", sizeof(ActorRefVariable_eventGetAActorValue_Parms), Z_Construct_UFunction_UActorRefVariable_GetAActorValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UActorRefVariable_GetAActorValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorRefVariable_GetAActorValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UActorRefVariable_GetAActorValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorRefVariable_GetAActorValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorRefVariable_GetAActorValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorRefVariable_SetAActorValue_Statics
	{
		struct ActorRefVariable_eventSetAActorValue_Parms
		{
			UActorRefVariable* var;
			AActor* _value;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_var;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorRefVariable_SetAActorValue_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorRefVariable_eventSetAActorValue_Parms, _value), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorRefVariable_SetAActorValue_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorRefVariable_eventSetAActorValue_Parms, var), Z_Construct_UClass_UActorRefVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorRefVariable_SetAActorValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorRefVariable_SetAActorValue_Statics::NewProp__value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorRefVariable_SetAActorValue_Statics::NewProp_var,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorRefVariable_SetAActorValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Var System" },
		{ "ModuleRelativePath", "Public/ActorRefVariable.h" },
		{ "ToolTip", "Set the value of a AActor* variable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorRefVariable_SetAActorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorRefVariable, nullptr, "SetAActorValue", sizeof(ActorRefVariable_eventSetAActorValue_Parms), Z_Construct_UFunction_UActorRefVariable_SetAActorValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UActorRefVariable_SetAActorValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorRefVariable_SetAActorValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UActorRefVariable_SetAActorValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorRefVariable_SetAActorValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorRefVariable_SetAActorValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UActorRefVariable_NoRegister()
	{
		return UActorRefVariable::StaticClass();
	}
	struct Z_Construct_UClass_UActorRefVariable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorRefVariable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseVariable,
		(UObject* (*)())Z_Construct_UPackage__Script_VarSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActorRefVariable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActorRefVariable_CopyAActorValue, "CopyAActorValue" }, // 3993426615
		{ &Z_Construct_UFunction_UActorRefVariable_GetAActorValue, "GetAActorValue" }, // 1695913883
		{ &Z_Construct_UFunction_UActorRefVariable_SetAActorValue, "SetAActorValue" }, // 1398066496
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorRefVariable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ActorRefVariable.h" },
		{ "ModuleRelativePath", "Public/ActorRefVariable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorRefVariable_Statics::NewProp_value_MetaData[] = {
		{ "Category", "Var System" },
		{ "ModuleRelativePath", "Public/ActorRefVariable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActorRefVariable_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorRefVariable, value), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActorRefVariable_Statics::NewProp_value_MetaData, ARRAY_COUNT(Z_Construct_UClass_UActorRefVariable_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorRefVariable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorRefVariable_Statics::NewProp_value,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorRefVariable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorRefVariable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorRefVariable_Statics::ClassParams = {
		&UActorRefVariable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UActorRefVariable_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UActorRefVariable_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActorRefVariable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UActorRefVariable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorRefVariable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorRefVariable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorRefVariable, 3648085324);
	template<> VARSYSTEM_API UClass* StaticClass<UActorRefVariable>()
	{
		return UActorRefVariable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorRefVariable(Z_Construct_UClass_UActorRefVariable, &UActorRefVariable::StaticClass, TEXT("/Script/VarSystem"), TEXT("UActorRefVariable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorRefVariable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
