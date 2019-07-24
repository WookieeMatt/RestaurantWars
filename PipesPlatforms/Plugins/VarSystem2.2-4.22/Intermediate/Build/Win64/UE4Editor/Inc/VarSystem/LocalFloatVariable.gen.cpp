// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VarSystem/Public/LocalFloatVariable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalFloatVariable() {}
// Cross Module References
	VARSYSTEM_API UClass* Z_Construct_UClass_ULocalFloatVariable_NoRegister();
	VARSYSTEM_API UClass* Z_Construct_UClass_ULocalFloatVariable();
	VARSYSTEM_API UClass* Z_Construct_UClass_UBaseVariable();
	UPackage* Z_Construct_UPackage__Script_VarSystem();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_ULocalFloatVariable_CopyLocalFloatValue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_ULocalFloatVariable_GetLocalFloat();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_ULocalFloatVariable_SetLocalFloatValue();
// End Cross Module References
	void ULocalFloatVariable::StaticRegisterNativesULocalFloatVariable()
	{
		UClass* Class = ULocalFloatVariable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyLocalFloatValue", &ULocalFloatVariable::execCopyLocalFloatValue },
			{ "GetLocalFloat", &ULocalFloatVariable::execGetLocalFloat },
			{ "SetLocalFloatValue", &ULocalFloatVariable::execSetLocalFloatValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULocalFloatVariable_CopyLocalFloatValue_Statics
	{
		struct LocalFloatVariable_eventCopyLocalFloatValue_Parms
		{
			UObject* owner;
			ULocalFloatVariable* var;
			UObject* otherOwner;
			ULocalFloatVariable* other;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_other;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherOwner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_var;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalFloatVariable_CopyLocalFloatValue_Statics::NewProp_other = { "other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFloatVariable_eventCopyLocalFloatValue_Parms, other), Z_Construct_UClass_ULocalFloatVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalFloatVariable_CopyLocalFloatValue_Statics::NewProp_otherOwner = { "otherOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFloatVariable_eventCopyLocalFloatValue_Parms, otherOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalFloatVariable_CopyLocalFloatValue_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFloatVariable_eventCopyLocalFloatValue_Parms, var), Z_Construct_UClass_ULocalFloatVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalFloatVariable_CopyLocalFloatValue_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFloatVariable_eventCopyLocalFloatValue_Parms, owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalFloatVariable_CopyLocalFloatValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFloatVariable_CopyLocalFloatValue_Statics::NewProp_other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFloatVariable_CopyLocalFloatValue_Statics::NewProp_otherOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFloatVariable_CopyLocalFloatValue_Statics::NewProp_var,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFloatVariable_CopyLocalFloatValue_Statics::NewProp_owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalFloatVariable_CopyLocalFloatValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Var System Local" },
		{ "ModuleRelativePath", "Public/LocalFloatVariable.h" },
		{ "ToolTip", "Copy the value of a LocalFloat variable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalFloatVariable_CopyLocalFloatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalFloatVariable, nullptr, "CopyLocalFloatValue", sizeof(LocalFloatVariable_eventCopyLocalFloatValue_Parms), Z_Construct_UFunction_ULocalFloatVariable_CopyLocalFloatValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULocalFloatVariable_CopyLocalFloatValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULocalFloatVariable_CopyLocalFloatValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULocalFloatVariable_CopyLocalFloatValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULocalFloatVariable_CopyLocalFloatValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULocalFloatVariable_CopyLocalFloatValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULocalFloatVariable_GetLocalFloat_Statics
	{
		struct LocalFloatVariable_eventGetLocalFloat_Parms
		{
			UObject* owner;
			ULocalFloatVariable* var;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_var;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULocalFloatVariable_GetLocalFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFloatVariable_eventGetLocalFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalFloatVariable_GetLocalFloat_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFloatVariable_eventGetLocalFloat_Parms, var), Z_Construct_UClass_ULocalFloatVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalFloatVariable_GetLocalFloat_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFloatVariable_eventGetLocalFloat_Parms, owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalFloatVariable_GetLocalFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFloatVariable_GetLocalFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFloatVariable_GetLocalFloat_Statics::NewProp_var,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFloatVariable_GetLocalFloat_Statics::NewProp_owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalFloatVariable_GetLocalFloat_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Var System Local" },
		{ "ModuleRelativePath", "Public/LocalFloatVariable.h" },
		{ "ToolTip", "Get the value of a LocalFloat variable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalFloatVariable_GetLocalFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalFloatVariable, nullptr, "GetLocalFloat", sizeof(LocalFloatVariable_eventGetLocalFloat_Parms), Z_Construct_UFunction_ULocalFloatVariable_GetLocalFloat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULocalFloatVariable_GetLocalFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULocalFloatVariable_GetLocalFloat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULocalFloatVariable_GetLocalFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULocalFloatVariable_GetLocalFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULocalFloatVariable_GetLocalFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULocalFloatVariable_SetLocalFloatValue_Statics
	{
		struct LocalFloatVariable_eventSetLocalFloatValue_Parms
		{
			UObject* owner;
			ULocalFloatVariable* var;
			float _value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_var;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULocalFloatVariable_SetLocalFloatValue_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFloatVariable_eventSetLocalFloatValue_Parms, _value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalFloatVariable_SetLocalFloatValue_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFloatVariable_eventSetLocalFloatValue_Parms, var), Z_Construct_UClass_ULocalFloatVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalFloatVariable_SetLocalFloatValue_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFloatVariable_eventSetLocalFloatValue_Parms, owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalFloatVariable_SetLocalFloatValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFloatVariable_SetLocalFloatValue_Statics::NewProp__value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFloatVariable_SetLocalFloatValue_Statics::NewProp_var,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFloatVariable_SetLocalFloatValue_Statics::NewProp_owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalFloatVariable_SetLocalFloatValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Var System Local" },
		{ "ModuleRelativePath", "Public/LocalFloatVariable.h" },
		{ "ToolTip", "Set the value of a LocalFloat variable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalFloatVariable_SetLocalFloatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalFloatVariable, nullptr, "SetLocalFloatValue", sizeof(LocalFloatVariable_eventSetLocalFloatValue_Parms), Z_Construct_UFunction_ULocalFloatVariable_SetLocalFloatValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULocalFloatVariable_SetLocalFloatValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULocalFloatVariable_SetLocalFloatValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULocalFloatVariable_SetLocalFloatValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULocalFloatVariable_SetLocalFloatValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULocalFloatVariable_SetLocalFloatValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULocalFloatVariable_NoRegister()
	{
		return ULocalFloatVariable::StaticClass();
	}
	struct Z_Construct_UClass_ULocalFloatVariable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocalFloatVariable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseVariable,
		(UObject* (*)())Z_Construct_UPackage__Script_VarSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULocalFloatVariable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULocalFloatVariable_CopyLocalFloatValue, "CopyLocalFloatValue" }, // 1475090018
		{ &Z_Construct_UFunction_ULocalFloatVariable_GetLocalFloat, "GetLocalFloat" }, // 1848726695
		{ &Z_Construct_UFunction_ULocalFloatVariable_SetLocalFloatValue, "SetLocalFloatValue" }, // 3837466252
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalFloatVariable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "LocalFloatVariable.h" },
		{ "ModuleRelativePath", "Public/LocalFloatVariable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocalFloatVariable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalFloatVariable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULocalFloatVariable_Statics::ClassParams = {
		&ULocalFloatVariable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULocalFloatVariable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULocalFloatVariable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocalFloatVariable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULocalFloatVariable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULocalFloatVariable, 23883428);
	template<> VARSYSTEM_API UClass* StaticClass<ULocalFloatVariable>()
	{
		return ULocalFloatVariable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULocalFloatVariable(Z_Construct_UClass_ULocalFloatVariable, &ULocalFloatVariable::StaticClass, TEXT("/Script/VarSystem"), TEXT("ULocalFloatVariable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalFloatVariable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
