// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class ULocalFVectorVariable;
struct FVector;
#ifdef VARSYSTEM_LocalFVectorVariable_generated_h
#error "LocalFVectorVariable.generated.h already included, missing '#pragma once' in LocalFVectorVariable.h"
#endif
#define VARSYSTEM_LocalFVectorVariable_generated_h

#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFVectorVariable_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCopyLocalFVectorValue) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_owner); \
		P_GET_OBJECT(ULocalFVectorVariable,Z_Param_var); \
		P_GET_OBJECT(UObject,Z_Param_otherOwner); \
		P_GET_OBJECT(ULocalFVectorVariable,Z_Param_other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULocalFVectorVariable::CopyLocalFVectorValue(Z_Param_owner,Z_Param_var,Z_Param_otherOwner,Z_Param_other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLocalFVectorValue) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_owner); \
		P_GET_OBJECT(ULocalFVectorVariable,Z_Param_var); \
		P_GET_STRUCT(FVector,Z_Param__value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULocalFVectorVariable::SetLocalFVectorValue(Z_Param_owner,Z_Param_var,Z_Param__value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalFVector) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_owner); \
		P_GET_OBJECT(ULocalFVectorVariable,Z_Param_var); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=ULocalFVectorVariable::GetLocalFVector(Z_Param_owner,Z_Param_var); \
		P_NATIVE_END; \
	}


#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFVectorVariable_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCopyLocalFVectorValue) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_owner); \
		P_GET_OBJECT(ULocalFVectorVariable,Z_Param_var); \
		P_GET_OBJECT(UObject,Z_Param_otherOwner); \
		P_GET_OBJECT(ULocalFVectorVariable,Z_Param_other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULocalFVectorVariable::CopyLocalFVectorValue(Z_Param_owner,Z_Param_var,Z_Param_otherOwner,Z_Param_other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLocalFVectorValue) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_owner); \
		P_GET_OBJECT(ULocalFVectorVariable,Z_Param_var); \
		P_GET_STRUCT(FVector,Z_Param__value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULocalFVectorVariable::SetLocalFVectorValue(Z_Param_owner,Z_Param_var,Z_Param__value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalFVector) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_owner); \
		P_GET_OBJECT(ULocalFVectorVariable,Z_Param_var); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=ULocalFVectorVariable::GetLocalFVector(Z_Param_owner,Z_Param_var); \
		P_NATIVE_END; \
	}


#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFVectorVariable_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULocalFVectorVariable(); \
	friend struct Z_Construct_UClass_ULocalFVectorVariable_Statics; \
public: \
	DECLARE_CLASS(ULocalFVectorVariable, UBaseVariable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VarSystem"), NO_API) \
	DECLARE_SERIALIZER(ULocalFVectorVariable)


#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFVectorVariable_h_16_INCLASS \
private: \
	static void StaticRegisterNativesULocalFVectorVariable(); \
	friend struct Z_Construct_UClass_ULocalFVectorVariable_Statics; \
public: \
	DECLARE_CLASS(ULocalFVectorVariable, UBaseVariable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VarSystem"), NO_API) \
	DECLARE_SERIALIZER(ULocalFVectorVariable)


#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFVectorVariable_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocalFVectorVariable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalFVectorVariable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocalFVectorVariable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalFVectorVariable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULocalFVectorVariable(ULocalFVectorVariable&&); \
	NO_API ULocalFVectorVariable(const ULocalFVectorVariable&); \
public:


#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFVectorVariable_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocalFVectorVariable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULocalFVectorVariable(ULocalFVectorVariable&&); \
	NO_API ULocalFVectorVariable(const ULocalFVectorVariable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocalFVectorVariable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalFVectorVariable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalFVectorVariable)


#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFVectorVariable_h_16_PRIVATE_PROPERTY_OFFSET
#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFVectorVariable_h_13_PROLOG
#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFVectorVariable_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFVectorVariable_h_16_PRIVATE_PROPERTY_OFFSET \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFVectorVariable_h_16_RPC_WRAPPERS \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFVectorVariable_h_16_INCLASS \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFVectorVariable_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFVectorVariable_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFVectorVariable_h_16_PRIVATE_PROPERTY_OFFSET \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFVectorVariable_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFVectorVariable_h_16_INCLASS_NO_PURE_DECLS \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFVectorVariable_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VARSYSTEM_API UClass* StaticClass<class ULocalFVectorVariable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_LocalFVectorVariable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS