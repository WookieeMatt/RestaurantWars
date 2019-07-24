// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class ULocalFRotatorVariable;
struct FRotator;
#ifdef VARSYSTEM_LocalFRotatorVariable_generated_h
#error "LocalFRotatorVariable.generated.h already included, missing '#pragma once' in LocalFRotatorVariable.h"
#endif
#define VARSYSTEM_LocalFRotatorVariable_generated_h

#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFRotatorVariable_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCopyLocalFRotatorValue) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_owner); \
		P_GET_OBJECT(ULocalFRotatorVariable,Z_Param_var); \
		P_GET_OBJECT(UObject,Z_Param_otherOwner); \
		P_GET_OBJECT(ULocalFRotatorVariable,Z_Param_other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULocalFRotatorVariable::CopyLocalFRotatorValue(Z_Param_owner,Z_Param_var,Z_Param_otherOwner,Z_Param_other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLocalFRotatorValue) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_owner); \
		P_GET_OBJECT(ULocalFRotatorVariable,Z_Param_var); \
		P_GET_STRUCT(FRotator,Z_Param__value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULocalFRotatorVariable::SetLocalFRotatorValue(Z_Param_owner,Z_Param_var,Z_Param__value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalFRotator) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_owner); \
		P_GET_OBJECT(ULocalFRotatorVariable,Z_Param_var); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=ULocalFRotatorVariable::GetLocalFRotator(Z_Param_owner,Z_Param_var); \
		P_NATIVE_END; \
	}


#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFRotatorVariable_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCopyLocalFRotatorValue) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_owner); \
		P_GET_OBJECT(ULocalFRotatorVariable,Z_Param_var); \
		P_GET_OBJECT(UObject,Z_Param_otherOwner); \
		P_GET_OBJECT(ULocalFRotatorVariable,Z_Param_other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULocalFRotatorVariable::CopyLocalFRotatorValue(Z_Param_owner,Z_Param_var,Z_Param_otherOwner,Z_Param_other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLocalFRotatorValue) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_owner); \
		P_GET_OBJECT(ULocalFRotatorVariable,Z_Param_var); \
		P_GET_STRUCT(FRotator,Z_Param__value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULocalFRotatorVariable::SetLocalFRotatorValue(Z_Param_owner,Z_Param_var,Z_Param__value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalFRotator) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_owner); \
		P_GET_OBJECT(ULocalFRotatorVariable,Z_Param_var); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=ULocalFRotatorVariable::GetLocalFRotator(Z_Param_owner,Z_Param_var); \
		P_NATIVE_END; \
	}


#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFRotatorVariable_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULocalFRotatorVariable(); \
	friend struct Z_Construct_UClass_ULocalFRotatorVariable_Statics; \
public: \
	DECLARE_CLASS(ULocalFRotatorVariable, UBaseVariable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VarSystem"), NO_API) \
	DECLARE_SERIALIZER(ULocalFRotatorVariable)


#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFRotatorVariable_h_16_INCLASS \
private: \
	static void StaticRegisterNativesULocalFRotatorVariable(); \
	friend struct Z_Construct_UClass_ULocalFRotatorVariable_Statics; \
public: \
	DECLARE_CLASS(ULocalFRotatorVariable, UBaseVariable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VarSystem"), NO_API) \
	DECLARE_SERIALIZER(ULocalFRotatorVariable)


#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFRotatorVariable_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocalFRotatorVariable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalFRotatorVariable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocalFRotatorVariable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalFRotatorVariable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULocalFRotatorVariable(ULocalFRotatorVariable&&); \
	NO_API ULocalFRotatorVariable(const ULocalFRotatorVariable&); \
public:


#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFRotatorVariable_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocalFRotatorVariable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULocalFRotatorVariable(ULocalFRotatorVariable&&); \
	NO_API ULocalFRotatorVariable(const ULocalFRotatorVariable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocalFRotatorVariable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalFRotatorVariable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalFRotatorVariable)


#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFRotatorVariable_h_16_PRIVATE_PROPERTY_OFFSET
#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFRotatorVariable_h_13_PROLOG
#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFRotatorVariable_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFRotatorVariable_h_16_PRIVATE_PROPERTY_OFFSET \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFRotatorVariable_h_16_RPC_WRAPPERS \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFRotatorVariable_h_16_INCLASS \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFRotatorVariable_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFRotatorVariable_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFRotatorVariable_h_16_PRIVATE_PROPERTY_OFFSET \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFRotatorVariable_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFRotatorVariable_h_16_INCLASS_NO_PURE_DECLS \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFRotatorVariable_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VARSYSTEM_API UClass* StaticClass<class ULocalFRotatorVariable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFRotatorVariable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
