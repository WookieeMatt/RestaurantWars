// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFRotatorVariable;
struct FRotator;
#ifdef VARSYSTEM_FRotatorVariable_generated_h
#error "FRotatorVariable.generated.h already included, missing '#pragma once' in FRotatorVariable.h"
#endif
#define VARSYSTEM_FRotatorVariable_generated_h

#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_FRotatorVariable_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCopyFRotatorValue) \
	{ \
		P_GET_OBJECT(UFRotatorVariable,Z_Param_var); \
		P_GET_OBJECT(UFRotatorVariable,Z_Param_other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFRotatorVariable::CopyFRotatorValue(Z_Param_var,Z_Param_other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFRotatorValue) \
	{ \
		P_GET_OBJECT(UFRotatorVariable,Z_Param_var); \
		P_GET_STRUCT(FRotator,Z_Param__value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFRotatorVariable::SetFRotatorValue(Z_Param_var,Z_Param__value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFRotatorValue) \
	{ \
		P_GET_OBJECT(UFRotatorVariable,Z_Param_var); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UFRotatorVariable::GetFRotatorValue(Z_Param_var); \
		P_NATIVE_END; \
	}


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_FRotatorVariable_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCopyFRotatorValue) \
	{ \
		P_GET_OBJECT(UFRotatorVariable,Z_Param_var); \
		P_GET_OBJECT(UFRotatorVariable,Z_Param_other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFRotatorVariable::CopyFRotatorValue(Z_Param_var,Z_Param_other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFRotatorValue) \
	{ \
		P_GET_OBJECT(UFRotatorVariable,Z_Param_var); \
		P_GET_STRUCT(FRotator,Z_Param__value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFRotatorVariable::SetFRotatorValue(Z_Param_var,Z_Param__value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFRotatorValue) \
	{ \
		P_GET_OBJECT(UFRotatorVariable,Z_Param_var); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UFRotatorVariable::GetFRotatorValue(Z_Param_var); \
		P_NATIVE_END; \
	}


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_FRotatorVariable_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFRotatorVariable(); \
	friend struct Z_Construct_UClass_UFRotatorVariable_Statics; \
public: \
	DECLARE_CLASS(UFRotatorVariable, UBaseVariable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VarSystem"), NO_API) \
	DECLARE_SERIALIZER(UFRotatorVariable)


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_FRotatorVariable_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUFRotatorVariable(); \
	friend struct Z_Construct_UClass_UFRotatorVariable_Statics; \
public: \
	DECLARE_CLASS(UFRotatorVariable, UBaseVariable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VarSystem"), NO_API) \
	DECLARE_SERIALIZER(UFRotatorVariable)


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_FRotatorVariable_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFRotatorVariable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFRotatorVariable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFRotatorVariable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFRotatorVariable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFRotatorVariable(UFRotatorVariable&&); \
	NO_API UFRotatorVariable(const UFRotatorVariable&); \
public:


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_FRotatorVariable_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFRotatorVariable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFRotatorVariable(UFRotatorVariable&&); \
	NO_API UFRotatorVariable(const UFRotatorVariable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFRotatorVariable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFRotatorVariable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFRotatorVariable)


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_FRotatorVariable_h_16_PRIVATE_PROPERTY_OFFSET
#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_FRotatorVariable_h_13_PROLOG
#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_FRotatorVariable_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_FRotatorVariable_h_16_PRIVATE_PROPERTY_OFFSET \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_FRotatorVariable_h_16_RPC_WRAPPERS \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_FRotatorVariable_h_16_INCLASS \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_FRotatorVariable_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_FRotatorVariable_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_FRotatorVariable_h_16_PRIVATE_PROPERTY_OFFSET \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_FRotatorVariable_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_FRotatorVariable_h_16_INCLASS_NO_PURE_DECLS \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_FRotatorVariable_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VARSYSTEM_API UClass* StaticClass<class UFRotatorVariable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_FRotatorVariable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
