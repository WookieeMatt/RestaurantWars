// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VarSystem/Public/LocalBoolVariable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalBoolVariable() {}
// Cross Module References
	VARSYSTEM_API UClass* Z_Construct_UClass_ULocalBoolVariable_NoRegister();
	VARSYSTEM_API UClass* Z_Construct_UClass_ULocalBoolVariable();
	VARSYSTEM_API UClass* Z_Construct_UClass_UBaseVariable();
	UPackage* Z_Construct_UPackage__Script_VarSystem();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_ULocalBoolVariable_CopyLocalBoolValue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_ULocalBoolVariable_GetLocalBool();
	VARSYSTEM_API UFunction* Z_Construct_UFunction_ULocalBoolVariable_SetLocalBoolValue();
// End Cross Module References
	void ULocalBoolVariable::StaticRegisterNativesULocalBoolVariable()
	{
		UClass* Class = ULocalBoolVariable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyLocalBoolValue", &ULocalBoolVariable::execCopyLocalBoolValue },
			{ "GetLocalBool", &ULocalBoolVariable::execGetLocalBool },
			{ "SetLocalBoolValue", &ULocalBoolVariable::execSetLocalBoolValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULocalBoolVariable_CopyLocalBoolValue_Statics
	{
		struct LocalBoolVariable_eventCopyLocalBoolValue_Parms
		{
			UObject* owner;
			ULocalBoolVariable* var;
			UObject* otherOwner;
			ULocalBoolVariable* other;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalBoolVariable_CopyLocalBoolValue_Statics::NewProp_other = { "other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalBoolVariable_eventCopyLocalBoolValue_Parms, other), Z_Construct_UClass_ULocalBoolVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalBoolVariable_CopyLocalBoolValue_Statics::NewProp_otherOwner = { "otherOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalBoolVariable_eventCopyLocalBoolValue_Parms, otherOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalBoolVariable_CopyLocalBoolValue_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalBoolVariable_eventCopyLocalBoolValue_Parms, var), Z_Construct_UClass_ULocalBoolVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalBoolVariable_CopyLocalBoolValue_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalBoolVariable_eventCopyLocalBoolValue_Parms, owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalBoolVariable_CopyLocalBoolValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalBoolVariable_CopyLocalBoolValue_Statics::NewProp_other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalBoolVariable_CopyLocalBoolValue_Statics::NewProp_otherOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalBoolVariable_CopyLocalBoolValue_Statics::NewProp_var,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalBoolVariable_CopyLocalBoolValue_Statics::NewProp_owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalBoolVariable_CopyLocalBoolValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Var System Local" },
		{ "ModuleRelativePath", "Public/LocalBoolVariable.h" },
		{ "ToolTip", "Copy the value of a LocalBool variable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalBoolVariable_CopyLocalBoolValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalBoolVariable, nullptr, "CopyLocalBoolValue", sizeof(LocalBoolVariable_eventCopyLocalBoolValue_Parms), Z_Construct_UFunction_ULocalBoolVariable_CopyLocalBoolValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULocalBoolVariable_CopyLocalBoolValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULocalBoolVariable_CopyLocalBoolValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULocalBoolVariable_CopyLocalBoolValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULocalBoolVariable_CopyLocalBoolValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULocalBoolVariable_CopyLocalBoolValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULocalBoolVariable_GetLocalBool_Statics
	{
		struct LocalBoolVariable_eventGetLocalBool_Parms
		{
			UObject* owner;
			ULocalBoolVariable* var;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_var;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULocalBoolVariable_GetLocalBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LocalBoolVariable_eventGetLocalBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULocalBoolVariable_GetLocalBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LocalBoolVariable_eventGetLocalBool_Parms), &Z_Construct_UFunction_ULocalBoolVariable_GetLocalBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalBoolVariable_GetLocalBool_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalBoolVariable_eventGetLocalBool_Parms, var), Z_Construct_UClass_ULocalBoolVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalBoolVariable_GetLocalBool_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalBoolVariable_eventGetLocalBool_Parms, owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalBoolVariable_GetLocalBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalBoolVariable_GetLocalBool_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalBoolVariable_GetLocalBool_Statics::NewProp_var,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalBoolVariable_GetLocalBool_Statics::NewProp_owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalBoolVariable_GetLocalBool_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Var System Local" },
		{ "ModuleRelativePath", "Public/LocalBoolVariable.h" },
		{ "ToolTip", "Get the value of a LocalBool variable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalBoolVariable_GetLocalBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalBoolVariable, nullptr, "GetLocalBool", sizeof(LocalBoolVariable_eventGetLocalBool_Parms), Z_Construct_UFunction_ULocalBoolVariable_GetLocalBool_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULocalBoolVariable_GetLocalBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULocalBoolVariable_GetLocalBool_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULocalBoolVariable_GetLocalBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULocalBoolVariable_GetLocalBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULocalBoolVariable_GetLocalBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULocalBoolVariable_SetLocalBoolValue_Statics
	{
		struct LocalBoolVariable_eventSetLocalBoolValue_Parms
		{
			UObject* owner;
			ULocalBoolVariable* var;
			bool _value;
		};
		static void NewProp__value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_var;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULocalBoolVariable_SetLocalBoolValue_Statics::NewProp__value_SetBit(void* Obj)
	{
		((LocalBoolVariable_eventSetLocalBoolValue_Parms*)Obj)->_value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULocalBoolVariable_SetLocalBoolValue_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LocalBoolVariable_eventSetLocalBoolValue_Parms), &Z_Construct_UFunction_ULocalBoolVariable_SetLocalBoolValue_Statics::NewProp__value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalBoolVariable_SetLocalBoolValue_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalBoolVariable_eventSetLocalBoolValue_Parms, var), Z_Construct_UClass_ULocalBoolVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalBoolVariable_SetLocalBoolValue_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalBoolVariable_eventSetLocalBoolValue_Parms, owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalBoolVariable_SetLocalBoolValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalBoolVariable_SetLocalBoolValue_Statics::NewProp__value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalBoolVariable_SetLocalBoolValue_Statics::NewProp_var,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalBoolVariable_SetLocalBoolValue_Statics::NewProp_owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalBoolVariable_SetLocalBoolValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Var System Local" },
		{ "ModuleRelativePath", "Public/LocalBoolVariable.h" },
		{ "ToolTip", "Set the value of a LocalBool variable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalBoolVariable_SetLocalBoolValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalBoolVariable, nullptr, "SetLocalBoolValue", sizeof(LocalBoolVariable_eventSetLocalBoolValue_Parms), Z_Construct_UFunction_ULocalBoolVariable_SetLocalBoolValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULocalBoolVariable_SetLocalBoolValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULocalBoolVariable_SetLocalBoolValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULocalBoolVariable_SetLocalBoolValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULocalBoolVariable_SetLocalBoolValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULocalBoolVariable_SetLocalBoolValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULocalBoolVariable_NoRegister()
	{
		return ULocalBoolVariable::StaticClass();
	}
	struct Z_Construct_UClass_ULocalBoolVariable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocalBoolVariable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseVariable,
		(UObject* (*)())Z_Construct_UPackage__Script_VarSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULocalBoolVariable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULocalBoolVariable_CopyLocalBoolValue, "CopyLocalBoolValue" }, // 3284554160
		{ &Z_Construct_UFunction_ULocalBoolVariable_GetLocalBool, "GetLocalBool" }, // 3287594898
		{ &Z_Construct_UFunction_ULocalBoolVariable_SetLocalBoolValue, "SetLocalBoolValue" }, // 2344404411
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalBoolVariable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "LocalBoolVariable.h" },
		{ "ModuleRelativePath", "Public/LocalBoolVariable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocalBoolVariable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalBoolVariable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULocalBoolVariable_Statics::ClassParams = {
		&ULocalBoolVariable::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULocalBoolVariable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULocalBoolVariable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocalBoolVariable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULocalBoolVariable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULocalBoolVariable, 3228543302);
	template<> VARSYSTEM_API UClass* StaticClass<ULocalBoolVariable>()
	{
		return ULocalBoolVariable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULocalBoolVariable(Z_Construct_UClass_ULocalBoolVariable, &ULocalBoolVariable::StaticClass, TEXT("/Script/VarSystem"), TEXT("ULocalBoolVariable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalBoolVariable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
