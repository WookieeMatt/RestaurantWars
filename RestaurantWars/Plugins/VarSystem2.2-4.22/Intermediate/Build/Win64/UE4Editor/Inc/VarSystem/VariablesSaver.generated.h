// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVariablesSaver;
#ifdef VARSYSTEM_VariablesSaver_generated_h
#error "VariablesSaver.generated.h already included, missing '#pragma once' in VariablesSaver.h"
#endif
#define VARSYSTEM_VariablesSaver_generated_h

#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_VariablesSaver_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadAllDaa) \
	{ \
		P_GET_OBJECT(UVariablesSaver,Z_Param_Manager); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVariablesSaver::LoadAllDaa(Z_Param_Manager); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveAllData) \
	{ \
		P_GET_OBJECT(UVariablesSaver,Z_Param_Manager); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVariablesSaver::SaveAllData(Z_Param_Manager); \
		P_NATIVE_END; \
	}


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_VariablesSaver_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadAllDaa) \
	{ \
		P_GET_OBJECT(UVariablesSaver,Z_Param_Manager); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVariablesSaver::LoadAllDaa(Z_Param_Manager); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveAllData) \
	{ \
		P_GET_OBJECT(UVariablesSaver,Z_Param_Manager); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVariablesSaver::SaveAllData(Z_Param_Manager); \
		P_NATIVE_END; \
	}


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_VariablesSaver_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVariablesSaver(); \
	friend struct Z_Construct_UClass_UVariablesSaver_Statics; \
public: \
	DECLARE_CLASS(UVariablesSaver, UBaseVariable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VarSystem"), NO_API) \
	DECLARE_SERIALIZER(UVariablesSaver)


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_VariablesSaver_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUVariablesSaver(); \
	friend struct Z_Construct_UClass_UVariablesSaver_Statics; \
public: \
	DECLARE_CLASS(UVariablesSaver, UBaseVariable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VarSystem"), NO_API) \
	DECLARE_SERIALIZER(UVariablesSaver)


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_VariablesSaver_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVariablesSaver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVariablesSaver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVariablesSaver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVariablesSaver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVariablesSaver(UVariablesSaver&&); \
	NO_API UVariablesSaver(const UVariablesSaver&); \
public:


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_VariablesSaver_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVariablesSaver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVariablesSaver(UVariablesSaver&&); \
	NO_API UVariablesSaver(const UVariablesSaver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVariablesSaver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVariablesSaver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVariablesSaver)


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_VariablesSaver_h_17_PRIVATE_PROPERTY_OFFSET
#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_VariablesSaver_h_13_PROLOG
#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_VariablesSaver_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_VariablesSaver_h_17_PRIVATE_PROPERTY_OFFSET \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_VariablesSaver_h_17_RPC_WRAPPERS \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_VariablesSaver_h_17_INCLASS \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_VariablesSaver_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_VariablesSaver_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_VariablesSaver_h_17_PRIVATE_PROPERTY_OFFSET \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_VariablesSaver_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_VariablesSaver_h_17_INCLASS_NO_PURE_DECLS \
	MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_VariablesSaver_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VARSYSTEM_API UClass* StaticClass<class UVariablesSaver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MandelaEffect_Plugins_VarSystem2_2_4_22_Source_VarSystem_Public_VariablesSaver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
