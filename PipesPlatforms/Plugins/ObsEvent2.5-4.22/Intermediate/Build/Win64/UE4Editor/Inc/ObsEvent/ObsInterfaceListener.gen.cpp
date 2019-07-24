// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObsEvent/Public/ObsInterfaceListener.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObsInterfaceListener() {}
// Cross Module References
	OBSEVENT_API UFunction* Z_Construct_UDelegateFunction_ObsEvent_OnEventPayLoadCalled__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ObsEvent();
	OBSEVENT_API UClass* Z_Construct_UClass_UObsPayload_NoRegister();
	OBSEVENT_API UFunction* Z_Construct_UDelegateFunction_ObsEvent_OnEventCalled__DelegateSignature();
	OBSEVENT_API UClass* Z_Construct_UClass_UObsInterfaceListener_NoRegister();
	OBSEVENT_API UClass* Z_Construct_UClass_UObsInterfaceListener();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	OBSEVENT_API UFunction* Z_Construct_UFunction_UObsInterfaceListener_RegisterListener();
	OBSEVENT_API UClass* Z_Construct_UClass_UObsEvent_NoRegister();
	OBSEVENT_API UFunction* Z_Construct_UFunction_UObsInterfaceListener_UnregisterListener();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ObsEvent_OnEventPayLoadCalled__DelegateSignature_Statics
	{
		struct _Script_ObsEvent_eventOnEventPayLoadCalled_Parms
		{
			UObsPayload* Payload;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ObsEvent_OnEventPayLoadCalled__DelegateSignature_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ObsEvent_eventOnEventPayLoadCalled_Parms, Payload), Z_Construct_UClass_UObsPayload_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ObsEvent_OnEventPayLoadCalled__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ObsEvent_OnEventPayLoadCalled__DelegateSignature_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ObsEvent_OnEventPayLoadCalled__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObsInterfaceListener.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ObsEvent_OnEventPayLoadCalled__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ObsEvent, nullptr, "OnEventPayLoadCalled__DelegateSignature", sizeof(_Script_ObsEvent_eventOnEventPayLoadCalled_Parms), Z_Construct_UDelegateFunction_ObsEvent_OnEventPayLoadCalled__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_ObsEvent_OnEventPayLoadCalled__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ObsEvent_OnEventPayLoadCalled__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_ObsEvent_OnEventPayLoadCalled__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ObsEvent_OnEventPayLoadCalled__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ObsEvent_OnEventPayLoadCalled__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_ObsEvent_OnEventCalled__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ObsEvent_OnEventCalled__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObsInterfaceListener.h" },
		{ "ToolTip", "Interface for creating Event listeners of any type.\n //TODO: Hide more categories on the classes inherited from this." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ObsEvent_OnEventCalled__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ObsEvent, nullptr, "OnEventCalled__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ObsEvent_OnEventCalled__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_ObsEvent_OnEventCalled__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ObsEvent_OnEventCalled__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ObsEvent_OnEventCalled__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UObsInterfaceListener::StaticRegisterNativesUObsInterfaceListener()
	{
		UClass* Class = UObsInterfaceListener::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RegisterListener", &IObsInterfaceListener::execRegisterListener },
			{ "UnregisterListener", &IObsInterfaceListener::execUnregisterListener },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UObsInterfaceListener_RegisterListener_Statics
	{
		struct ObsInterfaceListener_eventRegisterListener_Parms
		{
			UObsEvent* ObsEvent;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObsEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObsInterfaceListener_RegisterListener_Statics::NewProp_ObsEvent = { "ObsEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObsInterfaceListener_eventRegisterListener_Parms, ObsEvent), Z_Construct_UClass_UObsEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObsInterfaceListener_RegisterListener_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObsInterfaceListener_RegisterListener_Statics::NewProp_ObsEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObsInterfaceListener_RegisterListener_Statics::Function_MetaDataParams[] = {
		{ "Category", "ObsEvents" },
		{ "ModuleRelativePath", "Public/ObsInterfaceListener.h" },
		{ "ToolTip", "Adds the current listener to the event's listeners" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObsInterfaceListener_RegisterListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObsInterfaceListener, nullptr, "RegisterListener", sizeof(ObsInterfaceListener_eventRegisterListener_Parms), Z_Construct_UFunction_UObsInterfaceListener_RegisterListener_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UObsInterfaceListener_RegisterListener_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObsInterfaceListener_RegisterListener_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UObsInterfaceListener_RegisterListener_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObsInterfaceListener_RegisterListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObsInterfaceListener_RegisterListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObsInterfaceListener_UnregisterListener_Statics
	{
		struct ObsInterfaceListener_eventUnregisterListener_Parms
		{
			UObsEvent* ObsEvent;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObsEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObsInterfaceListener_UnregisterListener_Statics::NewProp_ObsEvent = { "ObsEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObsInterfaceListener_eventUnregisterListener_Parms, ObsEvent), Z_Construct_UClass_UObsEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObsInterfaceListener_UnregisterListener_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObsInterfaceListener_UnregisterListener_Statics::NewProp_ObsEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObsInterfaceListener_UnregisterListener_Statics::Function_MetaDataParams[] = {
		{ "Category", "ObsEvents" },
		{ "ModuleRelativePath", "Public/ObsInterfaceListener.h" },
		{ "ToolTip", "Removes the current listener from the event's listeners" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObsInterfaceListener_UnregisterListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObsInterfaceListener, nullptr, "UnregisterListener", sizeof(ObsInterfaceListener_eventUnregisterListener_Parms), Z_Construct_UFunction_UObsInterfaceListener_UnregisterListener_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UObsInterfaceListener_UnregisterListener_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObsInterfaceListener_UnregisterListener_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UObsInterfaceListener_UnregisterListener_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObsInterfaceListener_UnregisterListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObsInterfaceListener_UnregisterListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UObsInterfaceListener_NoRegister()
	{
		return UObsInterfaceListener::StaticClass();
	}
	struct Z_Construct_UClass_UObsInterfaceListener_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObsInterfaceListener_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ObsEvent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UObsInterfaceListener_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UObsInterfaceListener_RegisterListener, "RegisterListener" }, // 367684789
		{ &Z_Construct_UFunction_UObsInterfaceListener_UnregisterListener, "UnregisterListener" }, // 3354617225
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObsInterfaceListener_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/ObsInterfaceListener.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObsInterfaceListener_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IObsInterfaceListener>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObsInterfaceListener_Statics::ClassParams = {
		&UObsInterfaceListener::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UObsInterfaceListener_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UObsInterfaceListener_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObsInterfaceListener()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObsInterfaceListener_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObsInterfaceListener, 1598791382);
	template<> OBSEVENT_API UClass* StaticClass<UObsInterfaceListener>()
	{
		return UObsInterfaceListener::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObsInterfaceListener(Z_Construct_UClass_UObsInterfaceListener, &UObsInterfaceListener::StaticClass, TEXT("/Script/ObsEvent"), TEXT("UObsInterfaceListener"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObsInterfaceListener);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
