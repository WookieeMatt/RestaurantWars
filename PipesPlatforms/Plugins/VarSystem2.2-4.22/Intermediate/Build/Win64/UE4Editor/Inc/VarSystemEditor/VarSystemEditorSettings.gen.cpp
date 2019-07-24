// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VarSystemEditor/Private/Shared/VarSystemEditorSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVarSystemEditorSettings() {}
// Cross Module References
	VARSYSTEMEDITOR_API UClass* Z_Construct_UClass_UVarSystemEditorSettings_NoRegister();
	VARSYSTEMEDITOR_API UClass* Z_Construct_UClass_UVarSystemEditorSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VarSystemEditor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
// End Cross Module References
	void UVarSystemEditorSettings::StaticRegisterNativesUVarSystemEditorSettings()
	{
	}
	UClass* Z_Construct_UClass_UVarSystemEditorSettings_NoRegister()
	{
		return UVarSystemEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UVarSystemEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Margin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Margin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Font;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForegroundColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForegroundColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVarSystemEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VarSystemEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVarSystemEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Shared/VarSystemEditorSettings.h" },
		{ "ModuleRelativePath", "Private/Shared/VarSystemEditorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVarSystemEditorSettings_Statics::NewProp_Margin_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Private/Shared/VarSystemEditorSettings.h" },
		{ "ToolTip", "The margin around the VarSystem editor window (in pixels)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVarSystemEditorSettings_Statics::NewProp_Margin = { "Margin", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVarSystemEditorSettings, Margin), METADATA_PARAMS(Z_Construct_UClass_UVarSystemEditorSettings_Statics::NewProp_Margin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVarSystemEditorSettings_Statics::NewProp_Margin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVarSystemEditorSettings_Statics::NewProp_Font_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Private/Shared/VarSystemEditorSettings.h" },
		{ "ToolTip", "The font to use in the VarSystem editor window." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVarSystemEditorSettings_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVarSystemEditorSettings, Font), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UClass_UVarSystemEditorSettings_Statics::NewProp_Font_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVarSystemEditorSettings_Statics::NewProp_Font_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVarSystemEditorSettings_Statics::NewProp_ForegroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Private/Shared/VarSystemEditorSettings.h" },
		{ "ToolTip", "Color of the VarSystem editor's text." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVarSystemEditorSettings_Statics::NewProp_ForegroundColor = { "ForegroundColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVarSystemEditorSettings, ForegroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UClass_UVarSystemEditorSettings_Statics::NewProp_ForegroundColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVarSystemEditorSettings_Statics::NewProp_ForegroundColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVarSystemEditorSettings_Statics::NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Private/Shared/VarSystemEditorSettings.h" },
		{ "ToolTip", "Color of the VarSystem editor's background." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVarSystemEditorSettings_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVarSystemEditorSettings, BackgroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UClass_UVarSystemEditorSettings_Statics::NewProp_BackgroundColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVarSystemEditorSettings_Statics::NewProp_BackgroundColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVarSystemEditorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVarSystemEditorSettings_Statics::NewProp_Margin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVarSystemEditorSettings_Statics::NewProp_Font,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVarSystemEditorSettings_Statics::NewProp_ForegroundColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVarSystemEditorSettings_Statics::NewProp_BackgroundColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVarSystemEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVarSystemEditorSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVarSystemEditorSettings_Statics::ClassParams = {
		&UVarSystemEditorSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVarSystemEditorSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UVarSystemEditorSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVarSystemEditorSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVarSystemEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVarSystemEditorSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVarSystemEditorSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVarSystemEditorSettings, 2290745646);
	template<> VARSYSTEMEDITOR_API UClass* StaticClass<UVarSystemEditorSettings>()
	{
		return UVarSystemEditorSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVarSystemEditorSettings(Z_Construct_UClass_UVarSystemEditorSettings, &UVarSystemEditorSettings::StaticClass, TEXT("/Script/VarSystemEditor"), TEXT("UVarSystemEditorSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVarSystemEditorSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
