// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WLBDevEnv/WLBDevEnvGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWLBDevEnvGameMode() {}
// Cross Module References
	WLBDEVENV_API UClass* Z_Construct_UClass_AWLBDevEnvGameMode_NoRegister();
	WLBDEVENV_API UClass* Z_Construct_UClass_AWLBDevEnvGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_WLBDevEnv();
// End Cross Module References
	void AWLBDevEnvGameMode::StaticRegisterNativesAWLBDevEnvGameMode()
	{
	}
	UClass* Z_Construct_UClass_AWLBDevEnvGameMode_NoRegister()
	{
		return AWLBDevEnvGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AWLBDevEnvGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWLBDevEnvGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WLBDevEnv,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWLBDevEnvGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "WLBDevEnvGameMode.h" },
		{ "ModuleRelativePath", "WLBDevEnvGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWLBDevEnvGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWLBDevEnvGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWLBDevEnvGameMode_Statics::ClassParams = {
		&AWLBDevEnvGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AWLBDevEnvGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWLBDevEnvGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWLBDevEnvGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWLBDevEnvGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWLBDevEnvGameMode, 282979327);
	template<> WLBDEVENV_API UClass* StaticClass<AWLBDevEnvGameMode>()
	{
		return AWLBDevEnvGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWLBDevEnvGameMode(Z_Construct_UClass_AWLBDevEnvGameMode, &AWLBDevEnvGameMode::StaticClass, TEXT("/Script/WLBDevEnv"), TEXT("AWLBDevEnvGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWLBDevEnvGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
