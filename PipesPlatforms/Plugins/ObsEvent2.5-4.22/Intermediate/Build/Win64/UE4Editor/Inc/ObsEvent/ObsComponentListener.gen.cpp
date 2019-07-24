// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObsEvent/Public/ObsComponentListener.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObsComponentListener() {}
// Cross Module References
	OBSEVENT_API UClass* Z_Construct_UClass_UObsComponentListener_NoRegister();
	OBSEVENT_API UClass* Z_Construct_UClass_UObsComponentListener();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ObsEvent();
	OBSEVENT_API UFunction* Z_Construct_UDelegateFunction_ObsEvent_OnEventPayLoadCalled__DelegateSignature();
	OBSEVENT_API UFunction* Z_Construct_UDelegateFunction_ObsEvent_OnEventCalled__DelegateSignature();
	OBSEVENT_API UClass* Z_Construct_UClass_UObsEvent_NoRegister();
	OBSEVENT_API UClass* Z_Construct_UClass_UObsInterfaceListener_NoRegister();
// End Cross Module References
	void UObsComponentListener::StaticRegisterNativesUObsComponentListener()
	{
	}
	UClass* Z_Construct_UClass_UObsComponentListener_NoRegister()
	{
		return UObsComponentListener::StaticClass();
	}
	struct Z_Construct_UClass_UObsComponentListener_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEventPayloadInvoked_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEventPayloadInvoked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEventInvoked_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEventInvoked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldRegisterOnStart_MetaData[];
#endif
		static void NewProp_bShouldRegisterOnStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldRegisterOnStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eventToListen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_eventToListen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObsComponentListener_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ObsEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObsComponentListener_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Category", "ObsEvents" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Variable Tags ComponentReplication Activation Cooking Physics LOD AssetUserData Collision Rendering Sockets" },
		{ "IncludePath", "ObsComponentListener.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ObsComponentListener.h" },
		{ "ToolTip", "Component listening to event calls." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObsComponentListener_Statics::NewProp_OnEventPayloadInvoked_MetaData[] = {
		{ "Category", "ObsEvents" },
		{ "ModuleRelativePath", "Public/ObsComponentListener.h" },
		{ "ToolTip", "Flow if action when the event is called. (Including payload)" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UObsComponentListener_Statics::NewProp_OnEventPayloadInvoked = { "OnEventPayloadInvoked", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObsComponentListener, OnEventPayloadInvoked), Z_Construct_UDelegateFunction_ObsEvent_OnEventPayLoadCalled__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UObsComponentListener_Statics::NewProp_OnEventPayloadInvoked_MetaData, ARRAY_COUNT(Z_Construct_UClass_UObsComponentListener_Statics::NewProp_OnEventPayloadInvoked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObsComponentListener_Statics::NewProp_OnEventInvoked_MetaData[] = {
		{ "Category", "ObsEvents" },
		{ "ModuleRelativePath", "Public/ObsComponentListener.h" },
		{ "ToolTip", "Flow of action when the event is called." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UObsComponentListener_Statics::NewProp_OnEventInvoked = { "OnEventInvoked", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObsComponentListener, OnEventInvoked), Z_Construct_UDelegateFunction_ObsEvent_OnEventCalled__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UObsComponentListener_Statics::NewProp_OnEventInvoked_MetaData, ARRAY_COUNT(Z_Construct_UClass_UObsComponentListener_Statics::NewProp_OnEventInvoked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObsComponentListener_Statics::NewProp_bShouldRegisterOnStart_MetaData[] = {
		{ "Category", "ObsEvents" },
		{ "ModuleRelativePath", "Public/ObsComponentListener.h" },
		{ "ToolTip", "Should the listener register on start?" },
	};
#endif
	void Z_Construct_UClass_UObsComponentListener_Statics::NewProp_bShouldRegisterOnStart_SetBit(void* Obj)
	{
		((UObsComponentListener*)Obj)->bShouldRegisterOnStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UObsComponentListener_Statics::NewProp_bShouldRegisterOnStart = { "bShouldRegisterOnStart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UObsComponentListener), &Z_Construct_UClass_UObsComponentListener_Statics::NewProp_bShouldRegisterOnStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_UObsComponentListener_Statics::NewProp_bShouldRegisterOnStart_MetaData, ARRAY_COUNT(Z_Construct_UClass_UObsComponentListener_Statics::NewProp_bShouldRegisterOnStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObsComponentListener_Statics::NewProp_eventToListen_MetaData[] = {
		{ "Category", "ObsEvents" },
		{ "ModuleRelativePath", "Public/ObsComponentListener.h" },
		{ "ToolTip", "Event to listen to." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObsComponentListener_Statics::NewProp_eventToListen = { "eventToListen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObsComponentListener, eventToListen), Z_Construct_UClass_UObsEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UObsComponentListener_Statics::NewProp_eventToListen_MetaData, ARRAY_COUNT(Z_Construct_UClass_UObsComponentListener_Statics::NewProp_eventToListen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObsComponentListener_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObsComponentListener_Statics::NewProp_OnEventPayloadInvoked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObsComponentListener_Statics::NewProp_OnEventInvoked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObsComponentListener_Statics::NewProp_bShouldRegisterOnStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObsComponentListener_Statics::NewProp_eventToListen,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UObsComponentListener_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UObsInterfaceListener_NoRegister, (int32)VTABLE_OFFSET(UObsComponentListener, IObsInterfaceListener), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObsComponentListener_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObsComponentListener>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObsComponentListener_Statics::ClassParams = {
		&UObsComponentListener::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UObsComponentListener_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UObsComponentListener_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UObsComponentListener_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UObsComponentListener_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObsComponentListener()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObsComponentListener_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObsComponentListener, 3801756971);
	template<> OBSEVENT_API UClass* StaticClass<UObsComponentListener>()
	{
		return UObsComponentListener::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObsComponentListener(Z_Construct_UClass_UObsComponentListener, &UObsComponentListener::StaticClass, TEXT("/Script/ObsEvent"), TEXT("UObsComponentListener"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObsComponentListener);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
