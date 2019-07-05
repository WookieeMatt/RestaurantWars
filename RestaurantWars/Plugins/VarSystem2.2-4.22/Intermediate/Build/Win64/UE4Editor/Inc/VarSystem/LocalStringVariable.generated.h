// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class ULocalFStringVariable;
#ifdef VARSYSTEM_LocalStringVariable_generated_h
#error "LocalStringVariable.generated.h already included, missing '#pragma once' in LocalStringVariable.h"
#endif
#define VARSYSTEM_LocalStringVariable_generated_h

#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalStringVariable_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCopyLocalFStringValue) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_owner); \
		P_GET_OBJECT(ULocalFStringVariable,Z_Param_var); \
		P_GET_OBJECT(UObject,Z_Param_otherOwner); \
		P_GET_OBJECT(ULocalFStringVariable,Z_Param_other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULocalFStringVariable::CopyLocalFStringValue(Z_Param_owner,Z_Param_var,Z_Param_otherOwner,Z_Param_other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLocalFStringValue) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_owner); \
		P_GET_OBJECT(ULocalFStringVariable,Z_Param_var); \
		P_GET_PROPERTY(UStrProperty,Z_Param__value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULocalFStringVariable::SetLocalFStringValue(Z_Param_owner,Z_Param_var,Z_Param__value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalFString) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_owner); \
		P_GET_OBJECT(ULocalFStringVariable,Z_Param_var); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=ULocalFStringVariable::GetLocalFString(Z_Param_owner,Z_Param_var); \
		P_NATIVE_END; \
	}


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalStringVariable_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCopyLocalFStringValue) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_owner); \
		P_GET_OBJECT(ULocalFStringVariable,Z_Param_var); \
		P_GET_OBJECT(UObject,Z_Param_otherOwner); \
		P_GET_OBJECT(ULocalFStringVariable,Z_Param_other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULocalFStringVariable::CopyLocalFStringValue(Z_Param_owner,Z_Param_var,Z_Param_otherOwner,Z_Param_other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLocalFStringValue) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_owner); \
		P_GET_OBJECT(ULocalFStringVariable,Z_Param_var); \
		P_GET_PROPERTY(UStrProperty,Z_Param__value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULocalFStringVariable::SetLocalFStringValue(Z_Param_owner,Z_Param_var,Z_Param__value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalFString) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_owner); \
		P_GET_OBJECT(ULocalFStringVariable,Z_Param_var); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=ULocalFStringVariable::GetLocalFString(Z_Param_owner,Z_Param_var); \
		P_NATIVE_END; \
	}


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalStringVariable_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULocalFStringVariable(); \
	friend struct Z_Construct_UClass_ULocalFStringVariable_Statics; \
public: \
	DECLARE_CLASS(ULocalFStringVariable, UBaseVariable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VarSystem"), NO_API) \
	DECLARE_SERIALIZER(ULocalFStringVariable)


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalStringVariable_h_16_INCLASS \
private: \
	static void StaticRegisterNativesULocalFStringVariable(); \
	friend struct Z_Construct_UClass_ULocalFStringVariable_Statics; \
public: \
	DECLARE_CLASS(ULocalFStringVariable, UBaseVariable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VarSystem"), NO_API) \
	DECLARE_SERIALIZER(ULocalFStringVariable)


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalStringVariable_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocalFStringVariable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalFStringVariable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocalFStringVariable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalFStringVariable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULocalFStringVariable(ULocalFStringVariable&&); \
	NO_API ULocalFStringVariable(const ULocalFStringVariable&); \
public:


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalStringVariable_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocalFStringVariable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULocalFStringVariable(ULocalFStringVariable&&); \
	NO_API ULocalFStringVariable(const ULocalFStringVariable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocalFStringVariable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalFStringVariable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalFStringVariable)


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalStringVariable_h_16_PRIVATE_PROPERTY_OFFSET
#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalStringVariable_h_13_PROLOG
#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalStringVariable_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalStringVariable_h_16_PRIVATE_PROPERTY_OFFSET \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalStringVariable_h_16_RPC_WRAPPERS \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalStringVariable_h_16_INCLASS \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalStringVariable_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalStringVariable_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalStringVariable_h_16_PRIVATE_PROPERTY_OFFSET \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalStringVariable_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalStringVariable_h_16_INCLASS_NO_PURE_DECLS \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalStringVariable_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VARSYSTEM_API UClass* StaticClass<class ULocalFStringVariable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalStringVariable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
