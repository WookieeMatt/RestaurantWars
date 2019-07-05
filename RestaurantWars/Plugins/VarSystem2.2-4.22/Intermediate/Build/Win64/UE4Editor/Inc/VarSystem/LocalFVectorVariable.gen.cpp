// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VarSystem/Public/LocalFVectorVariable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalFVectorVariable() {}
// Cross Module References
	VARSYSTEM_API UClass* Z_Construct_UClass_ULocalFVectorVariable_NoRegister();
	VARSYSTEM_API UClass* Z_Construct_UClass_ULocalFVectorVariable();
	VARSYSTEM_API UClass* Z_Construct_UClass_UBaseVariable();
	UPackage* Z_Construct_UPackage__Script_VarSystem();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_ULocalFVectorVariable_CopyLocalFVectorValue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_ULocalFVectorVariable_GetLocalFVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_ULocalFVectorVariable_SetLocalFVectorValue();
// End Cross Module References
	void ULocalFVectorVariable::StaticRegisterNativesULocalFVectorVariable()
	{
		UClass* Class = ULocalFVectorVariable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyLocalFVectorValue", &ULocalFVectorVariable::execCopyLocalFVectorValue },
			{ "GetLocalFVector", &ULocalFVectorVariable::execGetLocalFVector },
			{ "SetLocalFVectorValue", &ULocalFVectorVariable::execSetLocalFVectorValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULocalFVectorVariable_CopyLocalFVectorValue_Statics
	{
		struct LocalFVectorVariable_eventCopyLocalFVectorValue_Parms
		{
			UObject* owner;
			ULocalFVectorVariable* var;
			UObject* otherOwner;
			ULocalFVectorVariable* other;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalFVectorVariable_CopyLocalFVectorValue_Statics::NewProp_other = { "other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFVectorVariable_eventCopyLocalFVectorValue_Parms, other), Z_Construct_UClass_ULocalFVectorVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalFVectorVariable_CopyLocalFVectorValue_Statics::NewProp_otherOwner = { "otherOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFVectorVariable_eventCopyLocalFVectorValue_Parms, otherOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalFVectorVariable_CopyLocalFVectorValue_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFVectorVariable_eventCopyLocalFVectorValue_Parms, var), Z_Construct_UClass_ULocalFVectorVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalFVectorVariable_CopyLocalFVectorValue_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFVectorVariable_eventCopyLocalFVectorValue_Parms, owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalFVectorVariable_CopyLocalFVectorValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFVectorVariable_CopyLocalFVectorValue_Statics::NewProp_other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFVectorVariable_CopyLocalFVectorValue_Statics::NewProp_otherOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFVectorVariable_CopyLocalFVectorValue_Statics::NewProp_var,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFVectorVariable_CopyLocalFVectorValue_Statics::NewProp_owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalFVectorVariable_CopyLocalFVectorValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Var System Local" },
		{ "ModuleRelativePath", "Public/LocalFVectorVariable.h" },
		{ "ToolTip", "Copy the value of a LocalFVector variable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalFVectorVariable_CopyLocalFVectorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalFVectorVariable, nullptr, "CopyLocalFVectorValue", sizeof(LocalFVectorVariable_eventCopyLocalFVectorValue_Parms), Z_Construct_UFunction_ULocalFVectorVariable_CopyLocalFVectorValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULocalFVectorVariable_CopyLocalFVectorValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULocalFVectorVariable_CopyLocalFVectorValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULocalFVectorVariable_CopyLocalFVectorValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULocalFVectorVariable_CopyLocalFVectorValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULocalFVectorVariable_CopyLocalFVectorValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULocalFVectorVariable_GetLocalFVector_Statics
	{
		struct LocalFVectorVariable_eventGetLocalFVector_Parms
		{
			UObject* owner;
			ULocalFVectorVariable* var;
			FVector ReturnValue;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULocalFVectorVariable_GetLocalFVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFVectorVariable_eventGetLocalFVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalFVectorVariable_GetLocalFVector_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFVectorVariable_eventGetLocalFVector_Parms, var), Z_Construct_UClass_ULocalFVectorVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalFVectorVariable_GetLocalFVector_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFVectorVariable_eventGetLocalFVector_Parms, owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalFVectorVariable_GetLocalFVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFVectorVariable_GetLocalFVector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFVectorVariable_GetLocalFVector_Statics::NewProp_var,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFVectorVariable_GetLocalFVector_Statics::NewProp_owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalFVectorVariable_GetLocalFVector_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Var System Local" },
		{ "ModuleRelativePath", "Public/LocalFVectorVariable.h" },
		{ "ToolTip", "Get the value of a LocalFVector variable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalFVectorVariable_GetLocalFVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalFVectorVariable, nullptr, "GetLocalFVector", sizeof(LocalFVectorVariable_eventGetLocalFVector_Parms), Z_Construct_UFunction_ULocalFVectorVariable_GetLocalFVector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULocalFVectorVariable_GetLocalFVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULocalFVectorVariable_GetLocalFVector_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULocalFVectorVariable_GetLocalFVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULocalFVectorVariable_GetLocalFVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULocalFVectorVariable_GetLocalFVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULocalFVectorVariable_SetLocalFVectorValue_Statics
	{
		struct LocalFVectorVariable_eventSetLocalFVectorValue_Parms
		{
			UObject* owner;
			ULocalFVectorVariable* var;
			FVector _value;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULocalFVectorVariable_SetLocalFVectorValue_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFVectorVariable_eventSetLocalFVectorValue_Parms, _value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalFVectorVariable_SetLocalFVectorValue_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFVectorVariable_eventSetLocalFVectorValue_Parms, var), Z_Construct_UClass_ULocalFVectorVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalFVectorVariable_SetLocalFVectorValue_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalFVectorVariable_eventSetLocalFVectorValue_Parms, owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalFVectorVariable_SetLocalFVectorValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFVectorVariable_SetLocalFVectorValue_Statics::NewProp__value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFVectorVariable_SetLocalFVectorValue_Statics::NewProp_var,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFVectorVariable_SetLocalFVectorValue_Statics::NewProp_owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalFVectorVariable_SetLocalFVectorValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Var System Local" },
		{ "ModuleRelativePath", "Public/LocalFVectorVariable.h" },
		{ "ToolTip", "Set the value of a LocalFVector variable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalFVectorVariable_SetLocalFVectorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalFVectorVariable, nullptr, "SetLocalFVectorValue", sizeof(LocalFVectorVariable_eventSetLocalFVectorValue_Parms), Z_Construct_UFunction_ULocalFVectorVariable_SetLocalFVectorValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULocalFVectorVariable_SetLocalFVectorValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULocalFVectorVariable_SetLocalFVectorValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULocalFVectorVariable_SetLocalFVectorValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULocalFVectorVariable_SetLocalFVectorValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULocalFVectorVariable_SetLocalFVectorValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULocalFVectorVariable_NoRegister()
	{
		return ULocalFVectorVariable::StaticClass();
	}
	struct Z_Construct_UClass_ULocalFVectorVariable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocalFVectorVariable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseVariable,
		(UObject* (*)())Z_Construct_UPackage__Script_VarSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULocalFVectorVariable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULocalFVectorVariable_CopyLocalFVectorValue, "CopyLocalFVectorValue" }, // 2688024177
		{ &Z_Construct_UFunction_ULocalFVectorVariable_GetLocalFVector, "GetLocalFVector" }, // 1685246737
		{ &Z_Construct_UFunction_ULocalFVectorVariable_SetLocalFVectorValue, "SetLocalFVectorValue" }, // 138874409
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalFVectorVariable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "LocalFVectorVariable.h" },
		{ "ModuleRelativePath", "Public/LocalFVectorVariable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocalFVectorVariable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalFVectorVariable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULocalFVectorVariable_Statics::ClassParams = {
		&ULocalFVectorVariable::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULocalFVectorVariable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULocalFVectorVariable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocalFVectorVariable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULocalFVectorVariable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULocalFVectorVariable, 1566361093);
	template<> VARSYSTEM_API UClass* StaticClass<ULocalFVectorVariable>()
	{
		return ULocalFVectorVariable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULocalFVectorVariable(Z_Construct_UClass_ULocalFVectorVariable, &ULocalFVectorVariable::StaticClass, TEXT("/Script/VarSystem"), TEXT("ULocalFVectorVariable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalFVectorVariable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
