// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UIntVariable;
#ifdef VARSYSTEM_IntVariable_generated_h
#error "IntVariable.generated.h already included, missing '#pragma once' in IntVariable.h"
#endif
#define VARSYSTEM_IntVariable_generated_h

#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_IntVariable_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCopyIntValue) \
	{ \
		P_GET_OBJECT(UIntVariable,Z_Param_var); \
		P_GET_OBJECT(UIntVariable,Z_Param_other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UIntVariable::CopyIntValue(Z_Param_var,Z_Param_other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIntValue) \
	{ \
		P_GET_OBJECT(UIntVariable,Z_Param_var); \
		P_GET_PROPERTY(UIntProperty,Z_Param__value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UIntVariable::SetIntValue(Z_Param_var,Z_Param__value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIntValue) \
	{ \
		P_GET_OBJECT(UIntVariable,Z_Param_var); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UIntVariable::GetIntValue(Z_Param_var); \
		P_NATIVE_END; \
	}


#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_IntVariable_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCopyIntValue) \
	{ \
		P_GET_OBJECT(UIntVariable,Z_Param_var); \
		P_GET_OBJECT(UIntVariable,Z_Param_other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UIntVariable::CopyIntValue(Z_Param_var,Z_Param_other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIntValue) \
	{ \
		P_GET_OBJECT(UIntVariable,Z_Param_var); \
		P_GET_PROPERTY(UIntProperty,Z_Param__value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UIntVariable::SetIntValue(Z_Param_var,Z_Param__value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIntValue) \
	{ \
		P_GET_OBJECT(UIntVariable,Z_Param_var); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UIntVariable::GetIntValue(Z_Param_var); \
		P_NATIVE_END; \
	}


#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_IntVariable_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIntVariable(); \
	friend struct Z_Construct_UClass_UIntVariable_Statics; \
public: \
	DECLARE_CLASS(UIntVariable, UBaseVariable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VarSystem"), NO_API) \
	DECLARE_SERIALIZER(UIntVariable)


#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_IntVariable_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUIntVariable(); \
	friend struct Z_Construct_UClass_UIntVariable_Statics; \
public: \
	DECLARE_CLASS(UIntVariable, UBaseVariable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VarSystem"), NO_API) \
	DECLARE_SERIALIZER(UIntVariable)


#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_IntVariable_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIntVariable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIntVariable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIntVariable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIntVariable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIntVariable(UIntVariable&&); \
	NO_API UIntVariable(const UIntVariable&); \
public:


#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_IntVariable_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIntVariable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIntVariable(UIntVariable&&); \
	NO_API UIntVariable(const UIntVariable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIntVariable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIntVariable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIntVariable)


#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_IntVariable_h_16_PRIVATE_PROPERTY_OFFSET
#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_IntVariable_h_13_PROLOG
#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_IntVariable_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_IntVariable_h_16_PRIVATE_PROPERTY_OFFSET \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_IntVariable_h_16_RPC_WRAPPERS \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_IntVariable_h_16_INCLASS \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_IntVariable_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_IntVariable_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_IntVariable_h_16_PRIVATE_PROPERTY_OFFSET \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_IntVariable_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_IntVariable_h_16_INCLASS_NO_PURE_DECLS \
	PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_IntVariable_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VARSYSTEM_API UClass* StaticClass<class UIntVariable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PipesPlatforms_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_IntVariable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
