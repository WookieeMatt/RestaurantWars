// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFVectorVariable;
struct FVector;
#ifdef VARSYSTEM_FVectorVariable_generated_h
#error "FVectorVariable.generated.h already included, missing '#pragma once' in FVectorVariable.h"
#endif
#define VARSYSTEM_FVectorVariable_generated_h

#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_FVectorVariable_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCopyFVectorValue) \
	{ \
		P_GET_OBJECT(UFVectorVariable,Z_Param_var); \
		P_GET_OBJECT(UFVectorVariable,Z_Param_other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFVectorVariable::CopyFVectorValue(Z_Param_var,Z_Param_other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFVectorValue) \
	{ \
		P_GET_OBJECT(UFVectorVariable,Z_Param_var); \
		P_GET_STRUCT(FVector,Z_Param__value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFVectorVariable::SetFVectorValue(Z_Param_var,Z_Param__value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFVectorValue) \
	{ \
		P_GET_OBJECT(UFVectorVariable,Z_Param_var); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UFVectorVariable::GetFVectorValue(Z_Param_var); \
		P_NATIVE_END; \
	}


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_FVectorVariable_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCopyFVectorValue) \
	{ \
		P_GET_OBJECT(UFVectorVariable,Z_Param_var); \
		P_GET_OBJECT(UFVectorVariable,Z_Param_other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFVectorVariable::CopyFVectorValue(Z_Param_var,Z_Param_other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFVectorValue) \
	{ \
		P_GET_OBJECT(UFVectorVariable,Z_Param_var); \
		P_GET_STRUCT(FVector,Z_Param__value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFVectorVariable::SetFVectorValue(Z_Param_var,Z_Param__value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFVectorValue) \
	{ \
		P_GET_OBJECT(UFVectorVariable,Z_Param_var); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UFVectorVariable::GetFVectorValue(Z_Param_var); \
		P_NATIVE_END; \
	}


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_FVectorVariable_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFVectorVariable(); \
	friend struct Z_Construct_UClass_UFVectorVariable_Statics; \
public: \
	DECLARE_CLASS(UFVectorVariable, UBaseVariable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VarSystem"), NO_API) \
	DECLARE_SERIALIZER(UFVectorVariable)


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_FVectorVariable_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUFVectorVariable(); \
	friend struct Z_Construct_UClass_UFVectorVariable_Statics; \
public: \
	DECLARE_CLASS(UFVectorVariable, UBaseVariable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VarSystem"), NO_API) \
	DECLARE_SERIALIZER(UFVectorVariable)


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_FVectorVariable_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFVectorVariable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFVectorVariable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFVectorVariable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFVectorVariable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFVectorVariable(UFVectorVariable&&); \
	NO_API UFVectorVariable(const UFVectorVariable&); \
public:


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_FVectorVariable_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFVectorVariable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFVectorVariable(UFVectorVariable&&); \
	NO_API UFVectorVariable(const UFVectorVariable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFVectorVariable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFVectorVariable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFVectorVariable)


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_FVectorVariable_h_18_PRIVATE_PROPERTY_OFFSET
#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_FVectorVariable_h_15_PROLOG
#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_FVectorVariable_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_FVectorVariable_h_18_PRIVATE_PROPERTY_OFFSET \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_FVectorVariable_h_18_RPC_WRAPPERS \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_FVectorVariable_h_18_INCLASS \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_FVectorVariable_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_FVectorVariable_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_FVectorVariable_h_18_PRIVATE_PROPERTY_OFFSET \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_FVectorVariable_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_FVectorVariable_h_18_INCLASS_NO_PURE_DECLS \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_FVectorVariable_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VARSYSTEM_API UClass* StaticClass<class UFVectorVariable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_FVectorVariable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
