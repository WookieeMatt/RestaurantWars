// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStringVariable;
#ifdef VARSYSTEM_StringVariable_generated_h
#error "StringVariable.generated.h already included, missing '#pragma once' in StringVariable.h"
#endif
#define VARSYSTEM_StringVariable_generated_h

#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_StringVariable_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCopyStringValue) \
	{ \
		P_GET_OBJECT(UStringVariable,Z_Param_var); \
		P_GET_OBJECT(UStringVariable,Z_Param_other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStringVariable::CopyStringValue(Z_Param_var,Z_Param_other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStringValue) \
	{ \
		P_GET_OBJECT(UStringVariable,Z_Param_var); \
		P_GET_PROPERTY(UStrProperty,Z_Param__value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStringVariable::SetStringValue(Z_Param_var,Z_Param__value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStringValue) \
	{ \
		P_GET_OBJECT(UStringVariable,Z_Param_var); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UStringVariable::GetStringValue(Z_Param_var); \
		P_NATIVE_END; \
	}


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_StringVariable_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCopyStringValue) \
	{ \
		P_GET_OBJECT(UStringVariable,Z_Param_var); \
		P_GET_OBJECT(UStringVariable,Z_Param_other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStringVariable::CopyStringValue(Z_Param_var,Z_Param_other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStringValue) \
	{ \
		P_GET_OBJECT(UStringVariable,Z_Param_var); \
		P_GET_PROPERTY(UStrProperty,Z_Param__value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UStringVariable::SetStringValue(Z_Param_var,Z_Param__value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStringValue) \
	{ \
		P_GET_OBJECT(UStringVariable,Z_Param_var); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UStringVariable::GetStringValue(Z_Param_var); \
		P_NATIVE_END; \
	}


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_StringVariable_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStringVariable(); \
	friend struct Z_Construct_UClass_UStringVariable_Statics; \
public: \
	DECLARE_CLASS(UStringVariable, UBaseVariable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VarSystem"), NO_API) \
	DECLARE_SERIALIZER(UStringVariable)


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_StringVariable_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUStringVariable(); \
	friend struct Z_Construct_UClass_UStringVariable_Statics; \
public: \
	DECLARE_CLASS(UStringVariable, UBaseVariable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VarSystem"), NO_API) \
	DECLARE_SERIALIZER(UStringVariable)


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_StringVariable_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStringVariable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStringVariable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStringVariable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStringVariable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStringVariable(UStringVariable&&); \
	NO_API UStringVariable(const UStringVariable&); \
public:


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_StringVariable_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStringVariable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStringVariable(UStringVariable&&); \
	NO_API UStringVariable(const UStringVariable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStringVariable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStringVariable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStringVariable)


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_StringVariable_h_16_PRIVATE_PROPERTY_OFFSET
#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_StringVariable_h_13_PROLOG
#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_StringVariable_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_StringVariable_h_16_PRIVATE_PROPERTY_OFFSET \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_StringVariable_h_16_RPC_WRAPPERS \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_StringVariable_h_16_INCLASS \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_StringVariable_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_StringVariable_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_StringVariable_h_16_PRIVATE_PROPERTY_OFFSET \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_StringVariable_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_StringVariable_h_16_INCLASS_NO_PURE_DECLS \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_StringVariable_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VARSYSTEM_API UClass* StaticClass<class UStringVariable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_StringVariable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
