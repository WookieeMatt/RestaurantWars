// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UActorRefVariable;
class AActor;
#ifdef VARSYSTEM_ActorRefVariable_generated_h
#error "ActorRefVariable.generated.h already included, missing '#pragma once' in ActorRefVariable.h"
#endif
#define VARSYSTEM_ActorRefVariable_generated_h

#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_ActorRefVariable_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCopyAActorValue) \
	{ \
		P_GET_OBJECT(UActorRefVariable,Z_Param_var); \
		P_GET_OBJECT(UActorRefVariable,Z_Param_other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UActorRefVariable::CopyAActorValue(Z_Param_var,Z_Param_other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAActorValue) \
	{ \
		P_GET_OBJECT(UActorRefVariable,Z_Param_var); \
		P_GET_OBJECT(AActor,Z_Param__value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UActorRefVariable::SetAActorValue(Z_Param_var,Z_Param__value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAActorValue) \
	{ \
		P_GET_OBJECT(UActorRefVariable,Z_Param_var); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UActorRefVariable::GetAActorValue(Z_Param_var); \
		P_NATIVE_END; \
	}


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_ActorRefVariable_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCopyAActorValue) \
	{ \
		P_GET_OBJECT(UActorRefVariable,Z_Param_var); \
		P_GET_OBJECT(UActorRefVariable,Z_Param_other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UActorRefVariable::CopyAActorValue(Z_Param_var,Z_Param_other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAActorValue) \
	{ \
		P_GET_OBJECT(UActorRefVariable,Z_Param_var); \
		P_GET_OBJECT(AActor,Z_Param__value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UActorRefVariable::SetAActorValue(Z_Param_var,Z_Param__value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAActorValue) \
	{ \
		P_GET_OBJECT(UActorRefVariable,Z_Param_var); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UActorRefVariable::GetAActorValue(Z_Param_var); \
		P_NATIVE_END; \
	}


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_ActorRefVariable_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorRefVariable(); \
	friend struct Z_Construct_UClass_UActorRefVariable_Statics; \
public: \
	DECLARE_CLASS(UActorRefVariable, UBaseVariable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VarSystem"), NO_API) \
	DECLARE_SERIALIZER(UActorRefVariable)


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_ActorRefVariable_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUActorRefVariable(); \
	friend struct Z_Construct_UClass_UActorRefVariable_Statics; \
public: \
	DECLARE_CLASS(UActorRefVariable, UBaseVariable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VarSystem"), NO_API) \
	DECLARE_SERIALIZER(UActorRefVariable)


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_ActorRefVariable_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorRefVariable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorRefVariable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorRefVariable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorRefVariable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorRefVariable(UActorRefVariable&&); \
	NO_API UActorRefVariable(const UActorRefVariable&); \
public:


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_ActorRefVariable_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorRefVariable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorRefVariable(UActorRefVariable&&); \
	NO_API UActorRefVariable(const UActorRefVariable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorRefVariable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorRefVariable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorRefVariable)


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_ActorRefVariable_h_16_PRIVATE_PROPERTY_OFFSET
#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_ActorRefVariable_h_13_PROLOG
#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_ActorRefVariable_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_ActorRefVariable_h_16_PRIVATE_PROPERTY_OFFSET \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_ActorRefVariable_h_16_RPC_WRAPPERS \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_ActorRefVariable_h_16_INCLASS \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_ActorRefVariable_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_ActorRefVariable_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_ActorRefVariable_h_16_PRIVATE_PROPERTY_OFFSET \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_ActorRefVariable_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_ActorRefVariable_h_16_INCLASS_NO_PURE_DECLS \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_ActorRefVariable_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VARSYSTEM_API UClass* StaticClass<class UActorRefVariable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_ActorRefVariable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
