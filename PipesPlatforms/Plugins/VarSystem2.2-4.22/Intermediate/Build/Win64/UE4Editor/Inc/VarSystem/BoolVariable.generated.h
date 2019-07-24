// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBoolVariable;
#ifdef VARSYSTEM_BoolVariable_generated_h
#error "BoolVariable.generated.h already included, missing '#pragma once' in BoolVariable.h"
#endif
#define VARSYSTEM_BoolVariable_generated_h

#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_BoolVariable_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCopyBoolValue) \
	{ \
		P_GET_OBJECT(UBoolVariable,Z_Param_var); \
		P_GET_OBJECT(UBoolVariable,Z_Param_other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBoolVariable::CopyBoolValue(Z_Param_var,Z_Param_other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoolValue) \
	{ \
		P_GET_OBJECT(UBoolVariable,Z_Param_var); \
		P_GET_UBOOL(Z_Param__value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBoolVariable::SetBoolValue(Z_Param_var,Z_Param__value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoolValue) \
	{ \
		P_GET_OBJECT(UBoolVariable,Z_Param_var); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBoolVariable::GetBoolValue(Z_Param_var); \
		P_NATIVE_END; \
	}


#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_BoolVariable_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCopyBoolValue) \
	{ \
		P_GET_OBJECT(UBoolVariable,Z_Param_var); \
		P_GET_OBJECT(UBoolVariable,Z_Param_other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBoolVariable::CopyBoolValue(Z_Param_var,Z_Param_other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoolValue) \
	{ \
		P_GET_OBJECT(UBoolVariable,Z_Param_var); \
		P_GET_UBOOL(Z_Param__value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBoolVariable::SetBoolValue(Z_Param_var,Z_Param__value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoolValue) \
	{ \
		P_GET_OBJECT(UBoolVariable,Z_Param_var); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBoolVariable::GetBoolValue(Z_Param_var); \
		P_NATIVE_END; \
	}


#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_BoolVariable_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBoolVariable(); \
	friend struct Z_Construct_UClass_UBoolVariable_Statics; \
public: \
	DECLARE_CLASS(UBoolVariable, UBaseVariable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VarSystem"), NO_API) \
	DECLARE_SERIALIZER(UBoolVariable)


#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_BoolVariable_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUBoolVariable(); \
	friend struct Z_Construct_UClass_UBoolVariable_Statics; \
public: \
	DECLARE_CLASS(UBoolVariable, UBaseVariable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VarSystem"), NO_API) \
	DECLARE_SERIALIZER(UBoolVariable)


#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_BoolVariable_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBoolVariable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBoolVariable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBoolVariable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoolVariable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBoolVariable(UBoolVariable&&); \
	NO_API UBoolVariable(const UBoolVariable&); \
public:


#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_BoolVariable_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBoolVariable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBoolVariable(UBoolVariable&&); \
	NO_API UBoolVariable(const UBoolVariable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBoolVariable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoolVariable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBoolVariable)


#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_BoolVariable_h_16_PRIVATE_PROPERTY_OFFSET
#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_BoolVariable_h_13_PROLOG
#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_BoolVariable_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_BoolVariable_h_16_PRIVATE_PROPERTY_OFFSET \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_BoolVariable_h_16_RPC_WRAPPERS \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_BoolVariable_h_16_INCLASS \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_BoolVariable_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_BoolVariable_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_BoolVariable_h_16_PRIVATE_PROPERTY_OFFSET \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_BoolVariable_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_BoolVariable_h_16_INCLASS_NO_PURE_DECLS \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_BoolVariable_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VARSYSTEM_API UClass* StaticClass<class UBoolVariable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_BoolVariable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
