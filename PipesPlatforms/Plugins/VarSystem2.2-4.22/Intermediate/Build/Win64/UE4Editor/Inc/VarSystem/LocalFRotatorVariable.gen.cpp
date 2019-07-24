// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VarSystem/Public/LocalFRotatorVariable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalFRotatorVariable() {}
// Cross Module References
	VARSYSTEM_API UClass* Z_Construct_UClass_ULocalFRotatorVariable_NoRegister();
	VARSYSTEM_API UClass* Z_Construct_UClass_ULocalFRotatorVariable();
	VARSYSTEM_API UClass* Z_Construct_UClass_UBaseVariable();
	UPackage* Z_Construct_UPackage__Script_VarSystem();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_ULocalFRotatorVariable_CopyLocalFRotatorValue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_ULocalFRotatorVariable_GetLocalFRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_ULocalFRotatorVariable_SetLocalFRotatorValue();
// End Cross Module References
	void ULocalFRotatorVariable::StaticRegisterNativesULocalFRotatorVariable()
	{
		UClass* Class = ULocalFRotatorVariable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyLocalFRotatorValue", &ULocalFRotatorVariable::execCopyLocalFRotatorValue },
			{ "GetLocalFRotator", &ULocalFRotatorVariable::execGetLocalFRotator },
			{ "SetLocalFRotatorValue", &ULocalFRotatorVariable::execSetLocalFRotatorValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULocalFRotatorVariable_CopyLocalFRotatorValue_Statics
	{
		struct LocalFRotatorVariable_eventCopyLocalFRotatorValue_Parms
		{
			UObject* owner;
			ULocalFRotatorVariable* var;
			UObject* otherOwner;
			ULocalFRotatorVariable* other;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalFRotatorVariable_CopyLocalFRotatorValue_Statics::NewProp_other = { "other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFRotatorVariable_eventCopyLocalFRotatorValue_Parms, other), Z_Construct_UClass_ULocalFRotatorVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalFRotatorVariable_CopyLocalFRotatorValue_Statics::NewProp_otherOwner = { "otherOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFRotatorVariable_eventCopyLocalFRotatorValue_Parms, otherOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalFRotatorVariable_CopyLocalFRotatorValue_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFRotatorVariable_eventCopyLocalFRotatorValue_Parms, var), Z_Construct_UClass_ULocalFRotatorVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalFRotatorVariable_CopyLocalFRotatorValue_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFRotatorVariable_eventCopyLocalFRotatorValue_Parms, owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalFRotatorVariable_CopyLocalFRotatorValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFRotatorVariable_CopyLocalFRotatorValue_Statics::NewProp_other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFRotatorVariable_CopyLocalFRotatorValue_Statics::NewProp_otherOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFRotatorVariable_CopyLocalFRotatorValue_Statics::NewProp_var,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFRotatorVariable_CopyLocalFRotatorValue_Statics::NewProp_owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalFRotatorVariable_CopyLocalFRotatorValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Var System Local" },
		{ "ModuleRelativePath", "Public/LocalFRotatorVariable.h" },
		{ "ToolTip", "Copy the value of a LocalFRotator variable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalFRotatorVariable_CopyLocalFRotatorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalFRotatorVariable, nullptr, "CopyLocalFRotatorValue", sizeof(LocalFRotatorVariable_eventCopyLocalFRotatorValue_Parms), Z_Construct_UFunction_ULocalFRotatorVariable_CopyLocalFRotatorValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULocalFRotatorVariable_CopyLocalFRotatorValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULocalFRotatorVariable_CopyLocalFRotatorValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULocalFRotatorVariable_CopyLocalFRotatorValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULocalFRotatorVariable_CopyLocalFRotatorValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULocalFRotatorVariable_CopyLocalFRotatorValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULocalFRotatorVariable_GetLocalFRotator_Statics
	{
		struct LocalFRotatorVariable_eventGetLocalFRotator_Parms
		{
			UObject* owner;
			ULocalFRotatorVariable* var;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_var;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULocalFRotatorVariable_GetLocalFRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFRotatorVariable_eventGetLocalFRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalFRotatorVariable_GetLocalFRotator_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFRotatorVariable_eventGetLocalFRotator_Parms, var), Z_Construct_UClass_ULocalFRotatorVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalFRotatorVariable_GetLocalFRotator_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFRotatorVariable_eventGetLocalFRotator_Parms, owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalFRotatorVariable_GetLocalFRotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFRotatorVariable_GetLocalFRotator_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFRotatorVariable_GetLocalFRotator_Statics::NewProp_var,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFRotatorVariable_GetLocalFRotator_Statics::NewProp_owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalFRotatorVariable_GetLocalFRotator_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Var System Local" },
		{ "ModuleRelativePath", "Public/LocalFRotatorVariable.h" },
		{ "ToolTip", "Get the value of a LocalFRotator variable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalFRotatorVariable_GetLocalFRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalFRotatorVariable, nullptr, "GetLocalFRotator", sizeof(LocalFRotatorVariable_eventGetLocalFRotator_Parms), Z_Construct_UFunction_ULocalFRotatorVariable_GetLocalFRotator_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULocalFRotatorVariable_GetLocalFRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULocalFRotatorVariable_GetLocalFRotator_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULocalFRotatorVariable_GetLocalFRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULocalFRotatorVariable_GetLocalFRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULocalFRotatorVariable_GetLocalFRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULocalFRotatorVariable_SetLocalFRotatorValue_Statics
	{
		struct LocalFRotatorVariable_eventSetLocalFRotatorValue_Parms
		{
			UObject* owner;
			ULocalFRotatorVariable* var;
			FRotator _value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_var;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULocalFRotatorVariable_SetLocalFRotatorValue_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFRotatorVariable_eventSetLocalFRotatorValue_Parms, _value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalFRotatorVariable_SetLocalFRotatorValue_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFRotatorVariable_eventSetLocalFRotatorValue_Parms, var), Z_Construct_UClass_ULocalFRotatorVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalFRotatorVariable_SetLocalFRotatorValue_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFRotatorVariable_eventSetLocalFRotatorValue_Parms, owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalFRotatorVariable_SetLocalFRotatorValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFRotatorVariable_SetLocalFRotatorValue_Statics::NewProp__value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFRotatorVariable_SetLocalFRotatorValue_Statics::NewProp_var,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFRotatorVariable_SetLocalFRotatorValue_Statics::NewProp_owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalFRotatorVariable_SetLocalFRotatorValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Var System Local" },
		{ "ModuleRelativePath", "Public/LocalFRotatorVariable.h" },
		{ "ToolTip", "Set the value of a LocalFRotator variable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalFRotatorVariable_SetLocalFRotatorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalFRotatorVariable, nullptr, "SetLocalFRotatorValue", sizeof(LocalFRotatorVariable_eventSetLocalFRotatorValue_Parms), Z_Construct_UFunction_ULocalFRotatorVariable_SetLocalFRotatorValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULocalFRotatorVariable_SetLocalFRotatorValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULocalFRotatorVariable_SetLocalFRotatorValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULocalFRotatorVariable_SetLocalFRotatorValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULocalFRotatorVariable_SetLocalFRotatorValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULocalFRotatorVariable_SetLocalFRotatorValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULocalFRotatorVariable_NoRegister()
	{
		return ULocalFRotatorVariable::StaticClass();
	}
	struct Z_Construct_UClass_ULocalFRotatorVariable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocalFRotatorVariable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseVariable,
		(UObject* (*)())Z_Construct_UPackage__Script_VarSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULocalFRotatorVariable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULocalFRotatorVariable_CopyLocalFRotatorValue, "CopyLocalFRotatorValue" }, // 3802893155
		{ &Z_Construct_UFunction_ULocalFRotatorVariable_GetLocalFRotator, "GetLocalFRotator" }, // 1783602262
		{ &Z_Construct_UFunction_ULocalFRotatorVariable_SetLocalFRotatorValue, "SetLocalFRotatorValue" }, // 1609078376
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalFRotatorVariable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "LocalFRotatorVariable.h" },
		{ "ModuleRelativePath", "Public/LocalFRotatorVariable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocalFRotatorVariable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalFRotatorVariable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULocalFRotatorVariable_Statics::ClassParams = {
		&ULocalFRotatorVariable::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULocalFRotatorVariable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULocalFRotatorVariable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocalFRotatorVariable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULocalFRotatorVariable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULocalFRotatorVariable, 3698881875);
	template<> VARSYSTEM_API UClass* StaticClass<ULocalFRotatorVariable>()
	{
		return ULocalFRotatorVariable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULocalFRotatorVariable(Z_Construct_UClass_ULocalFRotatorVariable, &ULocalFRotatorVariable::StaticClass, TEXT("/Script/VarSystem"), TEXT("ULocalFRotatorVariable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalFRotatorVariable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
