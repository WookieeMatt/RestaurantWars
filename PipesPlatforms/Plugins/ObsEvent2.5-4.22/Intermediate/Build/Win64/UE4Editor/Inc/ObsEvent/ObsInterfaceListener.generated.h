// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObsPayload;
class UObsEvent;
#ifdef OBSEVENT_ObsInterfaceListener_generated_h
#error "ObsInterfaceListener.generated.h already included, missing '#pragma once' in ObsInterfaceListener.h"
#endif
#define OBSEVENT_ObsInterfaceListener_generated_h

#define PipesPlatforms_Plugins_ObsEvent2_5_4_22_Source_ObsEvent_Public_ObsInterfaceListener_h_15_DELEGATE \
struct _Script_ObsEvent_eventOnEventPayLoadCalled_Parms \
{ \
	UObsPayload* Payload; \
}; \
static inline void FOnEventPayLoadCalled_DelegateWrapper(const FMulticastScriptDelegate& OnEventPayLoadCalled, UObsPayload* Payload) \
{ \
	_Script_ObsEvent_eventOnEventPayLoadCalled_Parms Parms; \
	Parms.Payload=Payload; \
	OnEventPayLoadCalled.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PipesPlatforms_Plugins_ObsEvent2_5_4_22_Source_ObsEvent_Public_ObsInterfaceListener_h_14_DELEGATE \
static inline void FOnEventCalled_DelegateWrapper(const FMulticastScriptDelegate& OnEventCalled) \
{ \
	OnEventCalled.ProcessMulticastDelegate<UObject>(NULL); \
}


#define PipesPlatforms_Plugins_ObsEvent2_5_4_22_Source_ObsEvent_Public_ObsInterfaceListener_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUnregisterListener) \
	{ \
		P_GET_OBJECT(UObsEvent,Z_Param_ObsEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnregisterListener(Z_Param_ObsEvent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterListener) \
	{ \
		P_GET_OBJECT(UObsEvent,Z_Param_ObsEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterListener(Z_Param_ObsEvent); \
		P_NATIVE_END; \
	}


#define PipesPlatforms_Plugins_ObsEvent2_5_4_22_Source_ObsEvent_Public_ObsInterfaceListener_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnregisterListener) \
	{ \
		P_GET_OBJECT(UObsEvent,Z_Param_ObsEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnregisterListener(Z_Param_ObsEvent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterListener) \
	{ \
		P_GET_OBJECT(UObsEvent,Z_Param_ObsEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterListener(Z_Param_ObsEvent); \
		P_NATIVE_END; \
	}


#define PipesPlatforms_Plugins_ObsEvent2_5_4_22_Source_ObsEvent_Public_ObsInterfaceListener_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObsInterfaceListener(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObsInterfaceListener) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObsInterfaceListener); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObsInterfaceListener); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObsInterfaceListener(UObsInterfaceListener&&); \
	NO_API UObsInterfaceListener(const UObsInterfaceListener&); \
public:


#define PipesPlatforms_Plugins_ObsEvent2_5_4_22_Source_ObsEvent_Public_ObsInterfaceListener_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObsInterfaceListener(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObsInterfaceListener(UObsInterfaceListener&&); \
	NO_API UObsInterfaceListener(const UObsInterfaceListener&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObsInterfaceListener); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObsInterfaceListener); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObsInterfaceListener)


#define PipesPlatforms_Plugins_ObsEvent2_5_4_22_Source_ObsEvent_Public_ObsInterfaceListener_h_22_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUObsInterfaceListener(); \
	friend struct Z_Construct_UClass_UObsInterfaceListener_Statics; \
public: \
	DECLARE_CLASS(UObsInterfaceListener, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ObsEvent"), NO_API) \
	DECLARE_SERIALIZER(UObsInterfaceListener)


#define PipesPlatforms_Plugins_ObsEvent2_5_4_22_Source_ObsEvent_Public_ObsInterfaceListener_h_22_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PipesPlatforms_Plugins_ObsEvent2_5_4_22_Source_ObsEvent_Public_ObsInterfaceListener_h_22_GENERATED_UINTERFACE_BODY() \
	PipesPlatforms_Plugins_ObsEvent2_5_4_22_Source_ObsEvent_Public_ObsInterfaceListener_h_22_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PipesPlatforms_Plugins_ObsEvent2_5_4_22_Source_ObsEvent_Public_ObsInterfaceListener_h_22_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PipesPlatforms_Plugins_ObsEvent2_5_4_22_Source_ObsEvent_Public_ObsInterfaceListener_h_22_GENERATED_UINTERFACE_BODY() \
	PipesPlatforms_Plugins_ObsEvent2_5_4_22_Source_ObsEvent_Public_ObsInterfaceListener_h_22_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PipesPlatforms_Plugins_ObsEvent2_5_4_22_Source_ObsEvent_Public_ObsInterfaceListener_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IObsInterfaceListener() {} \
public: \
	typedef UObsInterfaceListener UClassType; \
	typedef IObsInterfaceListener ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PipesPlatforms_Plugins_ObsEvent2_5_4_22_Source_ObsEvent_Public_ObsInterfaceListener_h_22_INCLASS_IINTERFACE \
protected: \
	virtual ~IObsInterfaceListener() {} \
public: \
	typedef UObsInterfaceListener UClassType; \
	typedef IObsInterfaceListener ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PipesPlatforms_Plugins_ObsEvent2_5_4_22_Source_ObsEvent_Public_ObsInterfaceListener_h_19_PROLOG
#define PipesPlatforms_Plugins_ObsEvent2_5_4_22_Source_ObsEvent_Public_ObsInterfaceListener_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PipesPlatforms_Plugins_ObsEvent2_5_4_22_Source_ObsEvent_Public_ObsInterfaceListener_h_22_RPC_WRAPPERS \
	PipesPlatforms_Plugins_ObsEvent2_5_4_22_Source_ObsEvent_Public_ObsInterfaceListener_h_22_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PipesPlatforms_Plugins_ObsEvent2_5_4_22_Source_ObsEvent_Public_ObsInterfaceListener_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PipesPlatforms_Plugins_ObsEvent2_5_4_22_Source_ObsEvent_Public_ObsInterfaceListener_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	PipesPlatforms_Plugins_ObsEvent2_5_4_22_Source_ObsEvent_Public_ObsInterfaceListener_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBSEVENT_API UClass* StaticClass<class UObsInterfaceListener>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PipesPlatforms_Plugins_ObsEvent2_5_4_22_Source_ObsEvent_Public_ObsInterfaceListener_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
