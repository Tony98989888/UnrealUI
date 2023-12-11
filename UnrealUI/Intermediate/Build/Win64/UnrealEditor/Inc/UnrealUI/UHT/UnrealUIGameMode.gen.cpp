// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealUI/UnrealUIGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealUIGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UNREALUI_API UClass* Z_Construct_UClass_AUnrealUIGameMode();
	UNREALUI_API UClass* Z_Construct_UClass_AUnrealUIGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealUI();
// End Cross Module References
	void AUnrealUIGameMode::StaticRegisterNativesAUnrealUIGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUnrealUIGameMode);
	UClass* Z_Construct_UClass_AUnrealUIGameMode_NoRegister()
	{
		return AUnrealUIGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealUIGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealUIGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealUIGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealUIGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UnrealUIGameMode.h" },
		{ "ModuleRelativePath", "UnrealUIGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealUIGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealUIGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnrealUIGameMode_Statics::ClassParams = {
		&AUnrealUIGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealUIGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUnrealUIGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AUnrealUIGameMode()
	{
		if (!Z_Registration_Info_UClass_AUnrealUIGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnrealUIGameMode.OuterSingleton, Z_Construct_UClass_AUnrealUIGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUnrealUIGameMode.OuterSingleton;
	}
	template<> UNREALUI_API UClass* StaticClass<AUnrealUIGameMode>()
	{
		return AUnrealUIGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealUIGameMode);
	AUnrealUIGameMode::~AUnrealUIGameMode() {}
	struct Z_CompiledInDeferFile_FID_UnrealUI_Source_UnrealUI_UnrealUIGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealUI_Source_UnrealUI_UnrealUIGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUnrealUIGameMode, AUnrealUIGameMode::StaticClass, TEXT("AUnrealUIGameMode"), &Z_Registration_Info_UClass_AUnrealUIGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnrealUIGameMode), 890181446U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealUI_Source_UnrealUI_UnrealUIGameMode_h_465511868(TEXT("/Script/UnrealUI"),
		Z_CompiledInDeferFile_FID_UnrealUI_Source_UnrealUI_UnrealUIGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealUI_Source_UnrealUI_UnrealUIGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
