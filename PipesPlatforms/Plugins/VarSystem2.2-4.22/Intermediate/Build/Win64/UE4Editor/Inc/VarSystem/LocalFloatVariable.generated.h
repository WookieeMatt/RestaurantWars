// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class ULocalFloatVariable;
#ifdef VARSYSTEM_LocalFloatVariable_generated_h
#error "LocalFloatVariable.generated.h already included, missing '#pragma once' in LocalFloatVariable.h"
#endif
#define VARSYSTEM_LocalFloatVariable_generated_h

#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFloatVariable_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCopyLocalFloatValue) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_owner); \
		P_GET_OBJECT(ULocalFloatVariable,Z_Param_var); \
		P_GET_OBJECT(UObject,Z_Param_otherOwner); \
		P_GET_OBJECT(ULocalFloatVariable,Z_Param_other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULocalFloatVariable::CopyLocalFloatValue(Z_Param_owner,Z_Param_var,Z_Param_otherOwner,Z_Param_other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLocalFloatValue) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_owner); \
		P_GET_OBJECT(ULocalFloatVariable,Z_Param_var); \
		P_GET_PROPERTY(UFloatProperty,Z_Param__value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULocalFloatVariable::SetLocalFloatValue(Z_Param_owner,Z_Param_var,Z_Param__value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalFloat) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_owner); \
		P_GET_OBJECT(ULocalFloatVariable,Z_Param_var); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=ULocalFloatVariable::GetLocalFloat(Z_Param_owner,Z_Param_var); \
		P_NATIVE_END; \
	}


#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFloatVariable_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCopyLocalFloatValue) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_owner); \
		P_GET_OBJECT(ULocalFloatVariable,Z_Param_var); \
		P_GET_OBJECT(UObject,Z_Param_otherOwner); \
		P_GET_OBJECT(ULocalFloatVariable,Z_Param_other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULocalFloatVariable::CopyLocalFloatValue(Z_Param_owner,Z_Param_var,Z_Param_otherOwner,Z_Param_other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLocalFloatValue) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_owner); \
		P_GET_OBJECT(ULocalFloatVariable,Z_Param_var); \
		P_GET_PROPERTY(UFloatProperty,Z_Param__value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULocalFloatVariable::SetLocalFloatValue(Z_Param_owner,Z_Param_var,Z_Param__value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalFloat) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_owner); \
		P_GET_OBJECT(ULocalFloatVariable,Z_Param_var); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=ULocalFloatVariable::GetLocalFloat(Z_Param_owner,Z_Param_var); \
		P_NATIVE_END; \
	}


#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFloatVariable_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULocalFloatVariable(); \
	friend struct Z_Construct_UClass_ULocalFloatVariable_Statics; \
public: \
	DECLARE_CLASS(ULocalFloatVariable, UBaseVariable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VarSystem"), NO_API) \
	DECLARE_SERIALIZER(ULocalFloatVariable)


#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFloatVariable_h_16_INCLASS \
private: \
	static void StaticRegisterNativesULocalFloatVariable(); \
	friend struct Z_Construct_UClass_ULocalFloatVariable_Statics; \
public: \
	DECLARE_CLASS(ULocalFloatVariable, UBaseVariable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VarSystem"), NO_API) \
	DECLARE_SERIALIZER(ULocalFloatVariable)


#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFloatVariable_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocalFloatVariable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalFloatVariable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocalFloatVariable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalFloatVariable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULocalFloatVariable(ULocalFloatVariable&&); \
	NO_API ULocalFloatVariable(const ULocalFloatVariable&); \
public:


#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFloatVariable_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocalFloatVariable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULocalFloatVariable(ULocalFloatVariable&&); \
	NO_API ULocalFloatVariable(const ULocalFloatVariable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocalFloatVariable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalFloatVariable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalFloatVariable)


#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFloatVariable_h_16_PRIVATE_PROPERTY_OFFSET
#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFloatVariable_h_13_PROLOG
#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFloatVariable_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFloatVariable_h_16_PRIVATE_PROPERTY_OFFSET \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFloatVariable_h_16_RPC_WRAPPERS \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFloatVariable_h_16_INCLASS \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFloatVariable_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFloatVariable_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFloatVariable_h_16_PRIVATE_PROPERTY_OFFSET \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFloatVariable_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFloatVariable_h_16_INCLASS_NO_PURE_DECLS \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFloatVariable_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VARSYSTEM_API UClass* StaticClass<class ULocalFloatVariable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFloatVariable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
