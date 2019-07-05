// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VarSystem/Public/LocalStringVariable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalStringVariable() {}
// Cross Module References
	VARSYSTEM_API UClass* Z_Construct_UClass_ULocalFStringVariable_NoRegister();
	VARSYSTEM_API UClass* Z_Construct_UClass_ULocalFStringVariable();
	VARSYSTEM_API UClass* Z_Construct_UClass_UBaseVariable();
	UPackage* Z_Construct_UPackage__Script_VarSystem();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_ULocalFStringVariable_CopyLocalFStringValue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_ULocalFStringVariable_GetLocalFString();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_ULocalFStringVariable_SetLocalFStringValue();
// End Cross Module References
	void ULocalFStringVariable::StaticRegisterNativesULocalFStringVariable()
	{
		UClass* Class = ULocalFStringVariable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyLocalFStringValue", &ULocalFStringVariable::execCopyLocalFStringValue },
			{ "GetLocalFString", &ULocalFStringVariable::execGetLocalFString },
			{ "SetLocalFStringValue", &ULocalFStringVariable::execSetLocalFStringValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULocalFStringVariable_CopyLocalFStringValue_Statics
	{
		struct LocalFStringVariable_eventCopyLocalFStringValue_Parms
		{
			UObject* owner;
			ULocalFStringVariable* var;
			UObject* otherOwner;
			ULocalFStringVariable* other;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalFStringVariable_CopyLocalFStringValue_Statics::NewProp_other = { "other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFStringVariable_eventCopyLocalFStringValue_Parms, other), Z_Construct_UClass_ULocalFStringVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalFStringVariable_CopyLocalFStringValue_Statics::NewProp_otherOwner = { "otherOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFStringVariable_eventCopyLocalFStringValue_Parms, otherOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalFStringVariable_CopyLocalFStringValue_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFStringVariable_eventCopyLocalFStringValue_Parms, var), Z_Construct_UClass_ULocalFStringVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalFStringVariable_CopyLocalFStringValue_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFStringVariable_eventCopyLocalFStringValue_Parms, owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalFStringVariable_CopyLocalFStringValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFStringVariable_CopyLocalFStringValue_Statics::NewProp_other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFStringVariable_CopyLocalFStringValue_Statics::NewProp_otherOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFStringVariable_CopyLocalFStringValue_Statics::NewProp_var,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFStringVariable_CopyLocalFStringValue_Statics::NewProp_owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalFStringVariable_CopyLocalFStringValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Var System Local" },
		{ "ModuleRelativePath", "Public/LocalStringVariable.h" },
		{ "ToolTip", "Copy the value of a LocalFString variable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalFStringVariable_CopyLocalFStringValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalFStringVariable, nullptr, "CopyLocalFStringValue", sizeof(LocalFStringVariable_eventCopyLocalFStringValue_Parms), Z_Construct_UFunction_ULocalFStringVariable_CopyLocalFStringValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULocalFStringVariable_CopyLocalFStringValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULocalFStringVariable_CopyLocalFStringValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULocalFStringVariable_CopyLocalFStringValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULocalFStringVariable_CopyLocalFStringValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULocalFStringVariable_CopyLocalFStringValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULocalFStringVariable_GetLocalFString_Statics
	{
		struct LocalFStringVariable_eventGetLocalFString_Parms
		{
			UObject* owner;
			ULocalFStringVariable* var;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_var;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULocalFStringVariable_GetLocalFString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFStringVariable_eventGetLocalFString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalFStringVariable_GetLocalFString_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFStringVariable_eventGetLocalFString_Parms, var), Z_Construct_UClass_ULocalFStringVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalFStringVariable_GetLocalFString_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFStringVariable_eventGetLocalFString_Parms, owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalFStringVariable_GetLocalFString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFStringVariable_GetLocalFString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFStringVariable_GetLocalFString_Statics::NewProp_var,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFStringVariable_GetLocalFString_Statics::NewProp_owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalFStringVariable_GetLocalFString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Var System Local" },
		{ "ModuleRelativePath", "Public/LocalStringVariable.h" },
		{ "ToolTip", "Get the value of a LocalFString variable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalFStringVariable_GetLocalFString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalFStringVariable, nullptr, "GetLocalFString", sizeof(LocalFStringVariable_eventGetLocalFString_Parms), Z_Construct_UFunction_ULocalFStringVariable_GetLocalFString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULocalFStringVariable_GetLocalFString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULocalFStringVariable_GetLocalFString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULocalFStringVariable_GetLocalFString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULocalFStringVariable_GetLocalFString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULocalFStringVariable_GetLocalFString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULocalFStringVariable_SetLocalFStringValue_Statics
	{
		struct LocalFStringVariable_eventSetLocalFStringValue_Parms
		{
			UObject* owner;
			ULocalFStringVariable* var;
			FString _value;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_var;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULocalFStringVariable_SetLocalFStringValue_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFStringVariable_eventSetLocalFStringValue_Parms, _value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalFStringVariable_SetLocalFStringValue_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFStringVariable_eventSetLocalFStringValue_Parms, var), Z_Construct_UClass_ULocalFStringVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalFStringVariable_SetLocalFStringValue_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFStringVariable_eventSetLocalFStringValue_Parms, owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalFStringVariable_SetLocalFStringValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFStringVariable_SetLocalFStringValue_Statics::NewProp__value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFStringVariable_SetLocalFStringValue_Statics::NewProp_var,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFStringVariable_SetLocalFStringValue_Statics::NewProp_owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalFStringVariable_SetLocalFStringValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Var System Local" },
		{ "ModuleRelativePath", "Public/LocalStringVariable.h" },
		{ "ToolTip", "Set the value of a LocalFString variable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalFStringVariable_SetLocalFStringValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalFStringVariable, nullptr, "SetLocalFStringValue", sizeof(LocalFStringVariable_eventSetLocalFStringValue_Parms), Z_Construct_UFunction_ULocalFStringVariable_SetLocalFStringValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULocalFStringVariable_SetLocalFStringValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULocalFStringVariable_SetLocalFStringValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULocalFStringVariable_SetLocalFStringValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULocalFStringVariable_SetLocalFStringValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULocalFStringVariable_SetLocalFStringValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULocalFStringVariable_NoRegister()
	{
		return ULocalFStringVariable::StaticClass();
	}
	struct Z_Construct_UClass_ULocalFStringVariable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocalFStringVariable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseVariable,
		(UObject* (*)())Z_Construct_UPackage__Script_VarSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULocalFStringVariable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULocalFStringVariable_CopyLocalFStringValue, "CopyLocalFStringValue" }, // 3269974364
		{ &Z_Construct_UFunction_ULocalFStringVariable_GetLocalFString, "GetLocalFString" }, // 630188002
		{ &Z_Construct_UFunction_ULocalFStringVariable_SetLocalFStringValue, "SetLocalFStringValue" }, // 975110747
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalFStringVariable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "LocalStringVariable.h" },
		{ "ModuleRelativePath", "Public/LocalStringVariable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocalFStringVariable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalFStringVariable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULocalFStringVariable_Statics::ClassParams = {
		&ULocalFStringVariable::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULocalFStringVariable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULocalFStringVariable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocalFStringVariable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULocalFStringVariable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULocalFStringVariable, 2885994654);
	template<> VARSYSTEM_API UClass* StaticClass<ULocalFStringVariable>()
	{
		return ULocalFStringVariable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULocalFStringVariable(Z_Construct_UClass_ULocalFStringVariable, &ULocalFStringVariable::StaticClass, TEXT("/Script/VarSystem"), TEXT("ULocalFStringVariable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalFStringVariable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
