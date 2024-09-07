// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrimerApp/PrimerAppHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrimerAppHUD() {}
// Cross Module References
	PRIMERAPP_API UClass* Z_Construct_UClass_APrimerAppHUD_NoRegister();
	PRIMERAPP_API UClass* Z_Construct_UClass_APrimerAppHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_PrimerApp();
// End Cross Module References
	void APrimerAppHUD::StaticRegisterNativesAPrimerAppHUD()
	{
	}
	UClass* Z_Construct_UClass_APrimerAppHUD_NoRegister()
	{
		return APrimerAppHUD::StaticClass();
	}
	struct Z_Construct_UClass_APrimerAppHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APrimerAppHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_PrimerApp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrimerAppHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "PrimerAppHUD.h" },
		{ "ModuleRelativePath", "PrimerAppHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APrimerAppHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrimerAppHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APrimerAppHUD_Statics::ClassParams = {
		&APrimerAppHUD::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APrimerAppHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APrimerAppHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APrimerAppHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APrimerAppHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APrimerAppHUD, 2433208629);
	template<> PRIMERAPP_API UClass* StaticClass<APrimerAppHUD>()
	{
		return APrimerAppHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APrimerAppHUD(Z_Construct_UClass_APrimerAppHUD, &APrimerAppHUD::StaticClass, TEXT("/Script/PrimerApp"), TEXT("APrimerAppHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APrimerAppHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
