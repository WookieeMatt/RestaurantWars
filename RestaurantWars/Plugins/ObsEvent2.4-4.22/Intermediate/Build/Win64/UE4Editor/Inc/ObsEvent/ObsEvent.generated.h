// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObsEvent;
class AActor;
class UObsPayload;
#ifdef OBSEVENT_ObsEvent_generated_h
#error "ObsEvent.generated.h already included, missing '#pragma once' in ObsEvent.h"
#endif
#define OBSEVENT_ObsEvent_generated_h

#define MandelaEffect_Plugins_ObsEvent2_4_4_22_Source_ObsEvent_Public_ObsEvent_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUnRegisterAllListeners) \
	{ \
		P_GET_OBJECT(UObsEvent,Z_Param_eventToClear); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UObsEvent::UnRegisterAllListeners(Z_Param_eventToClear); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvokeOnActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_actor); \
		P_GET_OBJECT(UObsEvent,Z_Param_eventToInvoke); \
		P_GET_OBJECT(UObsPayload,Z_Param_payload); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UObsEvent::InvokeOnActor(Z_Param_actor,Z_Param_eventToInvoke,Z_Param_payload); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvoke) \
	{ \
		P_GET_OBJECT(UObsEvent,Z_Param_eventToInvoke); \
		P_GET_OBJECT(UObsPayload,Z_Param_payload); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UObsEvent::Invoke(Z_Param_eventToInvoke,Z_Param_payload); \
		P_NATIVE_END; \
	}


#define MandelaEffect_Plugins_ObsEvent2_4_4_22_Source_ObsEvent_Public_ObsEvent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnRegisterAllListeners) \
	{ \
		P_GET_OBJECT(UObsEvent,Z_Param_eventToClear); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UObsEvent::UnRegisterAllListeners(Z_Param_eventToClear); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvokeOnActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_actor); \
		P_GET_OBJECT(UObsEvent,Z_Param_eventToInvoke); \
		P_GET_OBJECT(UObsPayload,Z_Param_payload); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UObsEvent::InvokeOnActor(Z_Param_actor,Z_Param_eventToInvoke,Z_Param_payload); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvoke) \
	{ \
		P_GET_OBJECT(UObsEvent,Z_Param_eventToInvoke); \
		P_GET_OBJECT(UObsPayload,Z_Param_payload); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UObsEvent::Invoke(Z_Param_eventToInvoke,Z_Param_payload); \
		P_NATIVE_END; \
	}


#define MandelaEffect_Plugins_ObsEvent2_4_4_22_Source_ObsEvent_Public_ObsEvent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObsEvent(); \
	friend struct Z_Construct_UClass_UObsEvent_Statics; \
public: \
	DECLARE_CLASS(UObsEvent, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ObsEvent"), NO_API) \
	DECLARE_SERIALIZER(UObsEvent)


#define MandelaEffect_Plugins_ObsEvent2_4_4_22_Source_ObsEvent_Public_ObsEvent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUObsEvent(); \
	friend struct Z_Construct_UClass_UObsEvent_Statics; \
public: \
	DECLARE_CLASS(UObsEvent, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ObsEvent"), NO_API) \
	DECLARE_SERIALIZER(UObsEvent)


#define MandelaEffect_Plugins_ObsEvent2_4_4_22_Source_ObsEvent_Public_ObsEvent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObsEvent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObsEvent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObsEvent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObsEvent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObsEvent(UObsEvent&&); \
	NO_API UObsEvent(const UObsEvent&); \
public:


#define MandelaEffect_Plugins_ObsEvent2_4_4_22_Source_ObsEvent_Public_ObsEvent_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObsEvent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObsEvent(UObsEvent&&); \
	NO_API UObsEvent(const UObsEvent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObsEvent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObsEvent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObsEvent)


#define MandelaEffect_Plugins_ObsEvent2_4_4_22_Source_ObsEvent_Public_ObsEvent_h_21_PRIVATE_PROPERTY_OFFSET
#define MandelaEffect_Plugins_ObsEvent2_4_4_22_Source_ObsEvent_Public_ObsEvent_h_18_PROLOG
#define MandelaEffect_Plugins_ObsEvent2_4_4_22_Source_ObsEvent_Public_ObsEvent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MandelaEffect_Plugins_ObsEvent2_4_4_22_Source_ObsEvent_Public_ObsEvent_h_21_PRIVATE_PROPERTY_OFFSET \
	MandelaEffect_Plugins_ObsEvent2_4_4_22_Source_ObsEvent_Public_ObsEvent_h_21_RPC_WRAPPERS \
	MandelaEffect_Plugins_ObsEvent2_4_4_22_Source_ObsEvent_Public_ObsEvent_h_21_INCLASS \
	MandelaEffect_Plugins_ObsEvent2_4_4_22_Source_ObsEvent_Public_ObsEvent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MandelaEffect_Plugins_ObsEvent2_4_4_22_Source_ObsEvent_Public_ObsEvent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MandelaEffect_Plugins_ObsEvent2_4_4_22_Source_ObsEvent_Public_ObsEvent_h_21_PRIVATE_PROPERTY_OFFSET \
	MandelaEffect_Plugins_ObsEvent2_4_4_22_Source_ObsEvent_Public_ObsEvent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	MandelaEffect_Plugins_ObsEvent2_4_4_22_Source_ObsEvent_Public_ObsEvent_h_21_INCLASS_NO_PURE_DECLS \
	MandelaEffect_Plugins_ObsEvent2_4_4_22_Source_ObsEvent_Public_ObsEvent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBSEVENT_API UClass* StaticClass<class UObsEvent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MandelaEffect_Plugins_ObsEvent2_4_4_22_Source_ObsEvent_Public_ObsEvent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
