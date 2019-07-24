// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "VarSystemEditorSettings.h"

#include "Misc/Paths.h"


UVarSystemEditorSettings::UVarSystemEditorSettings()
	: BackgroundColor(FLinearColor::White)
	, ForegroundColor(FLinearColor::Black)
	, Font(FSlateFontInfo(FPaths::EngineContentDir() / TEXT("Slate/Fonts/DroidSansMono.ttf"), 10))
	, Margin(4.0f)
{ }