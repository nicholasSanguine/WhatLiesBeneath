// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WLBDevEnv/WLBDevEnvHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWLBDevEnvHUD() {}
// Cross Module References
	WLBDEVENV_API UClass* Z_Construct_UClass_AWLBDevEnvHUD_NoRegister();
	WLBDEVENV_API UClass* Z_Construct_UClass_AWLBDevEnvHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_WLBDevEnv();
// End Cross Module References
	void AWLBDevEnvHUD::StaticRegisterNativesAWLBDevEnvHUD()
	{
	}
	UClass* Z_Construct_UClass_AWLBDevEnvHUD_NoRegister()
	{
		return AWLBDevEnvHUD::StaticClass();
	}
	struct Z_Construct_UClass_AWLBDevEnvHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWLBDevEnvHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_WLBDevEnv,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWLBDevEnvHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "WLBDevEnvHUD.h" },
		{ "ModuleRelativePath", "WLBDevEnvHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWLBDevEnvHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWLBDevEnvHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWLBDevEnvHUD_Statics::ClassParams = {
		&AWLBDevEnvHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AWLBDevEnvHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWLBDevEnvHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWLBDevEnvHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWLBDevEnvHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWLBDevEnvHUD, 2340374500);
	template<> WLBDEVENV_API UClass* StaticClass<AWLBDevEnvHUD>()
	{
		return AWLBDevEnvHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWLBDevEnvHUD(Z_Construct_UClass_AWLBDevEnvHUD, &AWLBDevEnvHUD::StaticClass, TEXT("/Script/WLBDevEnv"), TEXT("AWLBDevEnvHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWLBDevEnvHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
