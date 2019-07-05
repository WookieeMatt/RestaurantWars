// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VarSystem/Public/LocalIntVariable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalIntVariable() {}
// Cross Module References
	VARSYSTEM_API UClass* Z_Construct_UClass_ULocalIntVariable_NoRegister();
	VARSYSTEM_API UClass* Z_Construct_UClass_ULocalIntVariable();
	VARSYSTEM_API UClass* Z_Construct_UClass_UBaseVariable();
	UPackage* Z_Construct_UPackage__Script_VarSystem();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_ULocalIntVariable_CopyLocalIntValue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_ULocalIntVariable_GetLocalInt();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_ULocalIntVariable_SetLocalIntValue();
// End Cross Module References
	void ULocalIntVariable::StaticRegisterNativesULocalIntVariable()
	{
		UClass* Class = ULocalIntVariable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyLocalIntValue", &ULocalIntVariable::execCopyLocalIntValue },
			{ "GetLocalInt", &ULocalIntVariable::execGetLocalInt },
			{ "SetLocalIntValue", &ULocalIntVariable::execSetLocalIntValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULocalIntVariable_CopyLocalIntValue_Statics
	{
		struct LocalIntVariable_eventCopyLocalIntValue_Parms
		{
			UObject* owner;
			ULocalIntVariable* var;
			UObject* otherOwner;
			ULocalIntVariable* other;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalIntVariable_CopyLocalIntValue_Statics::NewProp_other = { "other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalIntVariable_eventCopyLocalIntValue_Parms, other), Z_Construct_UClass_ULocalIntVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalIntVariable_CopyLocalIntValue_Statics::NewProp_otherOwner = { "otherOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalIntVariable_eventCopyLocalIntValue_Parms, otherOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalIntVariable_CopyLocalIntValue_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalIntVariable_eventCopyLocalIntValue_Parms, var), Z_Construct_UClass_ULocalIntVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalIntVariable_CopyLocalIntValue_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalIntVariable_eventCopyLocalIntValue_Parms, owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalIntVariable_CopyLocalIntValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalIntVariable_CopyLocalIntValue_Statics::NewProp_other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalIntVariable_CopyLocalIntValue_Statics::NewProp_otherOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalIntVariable_CopyLocalIntValue_Statics::NewProp_var,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalIntVariable_CopyLocalIntValue_Statics::NewProp_owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalIntVariable_CopyLocalIntValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Var System Local" },
		{ "ModuleRelativePath", "Public/LocalIntVariable.h" },
		{ "ToolTip", "Copy the value of a LocalInt variable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalIntVariable_CopyLocalIntValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalIntVariable, nullptr, "CopyLocalIntValue", sizeof(LocalIntVariable_eventCopyLocalIntValue_Parms), Z_Construct_UFunction_ULocalIntVariable_CopyLocalIntValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULocalIntVariable_CopyLocalIntValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULocalIntVariable_CopyLocalIntValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULocalIntVariable_CopyLocalIntValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULocalIntVariable_CopyLocalIntValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULocalIntVariable_CopyLocalIntValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULocalIntVariable_GetLocalInt_Statics
	{
		struct LocalIntVariable_eventGetLocalInt_Parms
		{
			UObject* owner;
			ULocalIntVariable* var;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_var;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULocalIntVariable_GetLocalInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalIntVariable_eventGetLocalInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalIntVariable_GetLocalInt_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalIntVariable_eventGetLocalInt_Parms, var), Z_Construct_UClass_ULocalIntVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalIntVariable_GetLocalInt_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalIntVariable_eventGetLocalInt_Parms, owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalIntVariable_GetLocalInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalIntVariable_GetLocalInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalIntVariable_GetLocalInt_Statics::NewProp_var,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalIntVariable_GetLocalInt_Statics::NewProp_owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalIntVariable_GetLocalInt_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Var System Local" },
		{ "ModuleRelativePath", "Public/LocalIntVariable.h" },
		{ "ToolTip", "Get the value of a LocalInt variable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalIntVariable_GetLocalInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalIntVariable, nullptr, "GetLocalInt", sizeof(LocalIntVariable_eventGetLocalInt_Parms), Z_Construct_UFunction_ULocalIntVariable_GetLocalInt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULocalIntVariable_GetLocalInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULocalIntVariable_GetLocalInt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULocalIntVariable_GetLocalInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULocalIntVariable_GetLocalInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULocalIntVariable_GetLocalInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULocalIntVariable_SetLocalIntValue_Statics
	{
		struct LocalIntVariable_eventSetLocalIntValue_Parms
		{
			UObject* owner;
			ULocalIntVariable* var;
			int32 _value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_var;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULocalIntVariable_SetLocalIntValue_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalIntVariable_eventSetLocalIntValue_Parms, _value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalIntVariable_SetLocalIntValue_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalIntVariable_eventSetLocalIntValue_Parms, var), Z_Construct_UClass_ULocalIntVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalIntVariable_SetLocalIntValue_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalIntVariable_eventSetLocalIntValue_Parms, owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalIntVariable_SetLocalIntValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalIntVariable_SetLocalIntValue_Statics::NewProp__value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalIntVariable_SetLocalIntValue_Statics::NewProp_var,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalIntVariable_SetLocalIntValue_Statics::NewProp_owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalIntVariable_SetLocalIntValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Var System Local" },
		{ "ModuleRelativePath", "Public/LocalIntVariable.h" },
		{ "ToolTip", "Set the value of a LocalInt variable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalIntVariable_SetLocalIntValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalIntVariable, nullptr, "SetLocalIntValue", sizeof(LocalIntVariable_eventSetLocalIntValue_Parms), Z_Construct_UFunction_ULocalIntVariable_SetLocalIntValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULocalIntVariable_SetLocalIntValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULocalIntVariable_SetLocalIntValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULocalIntVariable_SetLocalIntValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULocalIntVariable_SetLocalIntValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULocalIntVariable_SetLocalIntValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULocalIntVariable_NoRegister()
	{
		return ULocalIntVariable::StaticClass();
	}
	struct Z_Construct_UClass_ULocalIntVariable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocalIntVariable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseVariable,
		(UObject* (*)())Z_Construct_UPackage__Script_VarSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULocalIntVariable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULocalIntVariable_CopyLocalIntValue, "CopyLocalIntValue" }, // 12855053
		{ &Z_Construct_UFunction_ULocalIntVariable_GetLocalInt, "GetLocalInt" }, // 1509122632
		{ &Z_Construct_UFunction_ULocalIntVariable_SetLocalIntValue, "SetLocalIntValue" }, // 2095321411
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalIntVariable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "LocalIntVariable.h" },
		{ "ModuleRelativePath", "Public/LocalIntVariable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocalIntVariable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalIntVariable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULocalIntVariable_Statics::ClassParams = {
		&ULocalIntVariable::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULocalIntVariable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULocalIntVariable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocalIntVariable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULocalIntVariable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULocalIntVariable, 3137796682);
	template<> VARSYSTEM_API UClass* StaticClass<ULocalIntVariable>()
	{
		return ULocalIntVariable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULocalIntVariable(Z_Construct_UClass_ULocalIntVariable, &ULocalIntVariable::StaticClass, TEXT("/Script/VarSystem"), TEXT("ULocalIntVariable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalIntVariable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
