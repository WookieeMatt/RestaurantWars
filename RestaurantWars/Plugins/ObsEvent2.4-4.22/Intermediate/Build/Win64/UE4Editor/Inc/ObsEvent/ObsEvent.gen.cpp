// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObsEvent/Public/ObsEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObsEvent() {}
// Cross Module References
	OBSEVENT_API UClass* Z_Construct_UClass_UObsEvent_NoRegister();
	OBSEVENT_API UClass* Z_Construct_UClass_UObsEvent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ObsEvent();
	OBSEVENT_API UFunction* Z_Construct_UFunction_UObsEvent_Invoke();
	OBSEVENT_API UClass* Z_Construct_UClass_UObsPayload_NoRegister();
	OBSEVENT_API UFunction* Z_Construct_UFunction_UObsEvent_InvokeOnActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	OBSEVENT_API UFunction* Z_Construct_UFunction_UObsEvent_UnRegisterAllListeners();
// End Cross Module References
	void UObsEvent::StaticRegisterNativesUObsEvent()
	{
		UClass* Class = UObsEvent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Invoke", &UObsEvent::execInvoke },
			{ "InvokeOnActor", &UObsEvent::execInvokeOnActor },
			{ "UnRegisterAllListeners", &UObsEvent::execUnRegisterAllListeners },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UObsEvent_Invoke_Statics
	{
		struct ObsEvent_eventInvoke_Parms
		{
			UObsEvent* eventToInvoke;
			UObsPayload* payload;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_payload;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_eventToInvoke;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObsEvent_Invoke_Statics::NewProp_payload = { "payload", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObsEvent_eventInvoke_Parms, payload), Z_Construct_UClass_UObsPayload_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObsEvent_Invoke_Statics::NewProp_eventToInvoke = { "eventToInvoke", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObsEvent_eventInvoke_Parms, eventToInvoke), Z_Construct_UClass_UObsEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObsEvent_Invoke_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObsEvent_Invoke_Statics::NewProp_payload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObsEvent_Invoke_Statics::NewProp_eventToInvoke,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObsEvent_Invoke_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "payload" },
		{ "Category", "ObsEvents" },
		{ "ModuleRelativePath", "Public/ObsEvent.h" },
		{ "ToolTip", "Invoke the event." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObsEvent_Invoke_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObsEvent, nullptr, "Invoke", sizeof(ObsEvent_eventInvoke_Parms), Z_Construct_UFunction_UObsEvent_Invoke_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UObsEvent_Invoke_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObsEvent_Invoke_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UObsEvent_Invoke_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObsEvent_Invoke()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObsEvent_Invoke_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObsEvent_InvokeOnActor_Statics
	{
		struct ObsEvent_eventInvokeOnActor_Parms
		{
			AActor* actor;
			UObsEvent* eventToInvoke;
			UObsPayload* payload;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_payload;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_eventToInvoke;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObsEvent_InvokeOnActor_Statics::NewProp_payload = { "payload", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObsEvent_eventInvokeOnActor_Parms, payload), Z_Construct_UClass_UObsPayload_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObsEvent_InvokeOnActor_Statics::NewProp_eventToInvoke = { "eventToInvoke", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObsEvent_eventInvokeOnActor_Parms, eventToInvoke), Z_Construct_UClass_UObsEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObsEvent_InvokeOnActor_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObsEvent_eventInvokeOnActor_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObsEvent_InvokeOnActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObsEvent_InvokeOnActor_Statics::NewProp_payload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObsEvent_InvokeOnActor_Statics::NewProp_eventToInvoke,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObsEvent_InvokeOnActor_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObsEvent_InvokeOnActor_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "payload" },
		{ "Category", "ObsEvents" },
		{ "ModuleRelativePath", "Public/ObsEvent.h" },
		{ "ToolTip", "TODO: Add optional pin to invoke pin for actor only\n Invoke the event on a single actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObsEvent_InvokeOnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObsEvent, nullptr, "InvokeOnActor", sizeof(ObsEvent_eventInvokeOnActor_Parms), Z_Construct_UFunction_UObsEvent_InvokeOnActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UObsEvent_InvokeOnActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObsEvent_InvokeOnActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UObsEvent_InvokeOnActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObsEvent_InvokeOnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObsEvent_InvokeOnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObsEvent_UnRegisterAllListeners_Statics
	{
		struct ObsEvent_eventUnRegisterAllListeners_Parms
		{
			UObsEvent* eventToClear;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_eventToClear;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObsEvent_UnRegisterAllListeners_Statics::NewProp_eventToClear = { "eventToClear", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObsEvent_eventUnRegisterAllListeners_Parms, eventToClear), Z_Construct_UClass_UObsEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObsEvent_UnRegisterAllListeners_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObsEvent_UnRegisterAllListeners_Statics::NewProp_eventToClear,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObsEvent_UnRegisterAllListeners_Statics::Function_MetaDataParams[] = {
		{ "Category", "ObsEvents" },
		{ "ModuleRelativePath", "Public/ObsEvent.h" },
		{ "ToolTip", "Removes all the listeners from one event." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObsEvent_UnRegisterAllListeners_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObsEvent, nullptr, "UnRegisterAllListeners", sizeof(ObsEvent_eventUnRegisterAllListeners_Parms), Z_Construct_UFunction_UObsEvent_UnRegisterAllListeners_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UObsEvent_UnRegisterAllListeners_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObsEvent_UnRegisterAllListeners_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UObsEvent_UnRegisterAllListeners_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObsEvent_UnRegisterAllListeners()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObsEvent_UnRegisterAllListeners_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UObsEvent_NoRegister()
	{
		return UObsEvent::StaticClass();
	}
	struct Z_Construct_UClass_UObsEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObsEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ObsEvent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UObsEvent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UObsEvent_Invoke, "Invoke" }, // 745347326
		{ &Z_Construct_UFunction_UObsEvent_InvokeOnActor, "InvokeOnActor" }, // 776701760
		{ &Z_Construct_UFunction_UObsEvent_UnRegisterAllListeners, "UnRegisterAllListeners" }, // 2450598938
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObsEvent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ObsEvents" },
		{ "ClassGroupNames", "Events" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ObsEvent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ObsEvent.h" },
		{ "ToolTip", "Event holding all the listeners and delegating the call to them." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObsEvent_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "ObsEvents" },
		{ "ModuleRelativePath", "Public/ObsEvent.h" },
		{ "ToolTip", "Short description so you won't forget." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UObsEvent_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObsEvent, Description), METADATA_PARAMS(Z_Construct_UClass_UObsEvent_Statics::NewProp_Description_MetaData, ARRAY_COUNT(Z_Construct_UClass_UObsEvent_Statics::NewProp_Description_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObsEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObsEvent_Statics::NewProp_Description,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObsEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObsEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObsEvent_Statics::ClassParams = {
		&UObsEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UObsEvent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UObsEvent_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UObsEvent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UObsEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObsEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObsEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObsEvent, 2831206098);
	template<> OBSEVENT_API UClass* StaticClass<UObsEvent>()
	{
		return UObsEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObsEvent(Z_Construct_UClass_UObsEvent, &UObsEvent::StaticClass, TEXT("/Script/ObsEvent"), TEXT("UObsEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObsEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
