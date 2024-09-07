// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrimerApp/ProfileUser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProfileUser() {}
// Cross Module References
	PRIMERAPP_API UClass* Z_Construct_UClass_UProfileUser_NoRegister();
	PRIMERAPP_API UClass* Z_Construct_UClass_UProfileUser();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PrimerApp();
// End Cross Module References
	void UProfileUser::StaticRegisterNativesUProfileUser()
	{
	}
	UClass* Z_Construct_UClass_UProfileUser_NoRegister()
	{
		return UProfileUser::StaticClass();
	}
	struct Z_Construct_UClass_UProfileUser_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Armor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Armor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthMax;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProfileUser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PrimerApp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProfileUser_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ProfileUser.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ProfileUser.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProfileUser_Statics::NewProp_Armor_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "ProfileUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProfileUser_Statics::NewProp_Armor = { "Armor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProfileUser, Armor), METADATA_PARAMS(Z_Construct_UClass_UProfileUser_Statics::NewProp_Armor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProfileUser_Statics::NewProp_Armor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProfileUser_Statics::NewProp_HealthMax_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "ProfileUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProfileUser_Statics::NewProp_HealthMax = { "HealthMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProfileUser, HealthMax), METADATA_PARAMS(Z_Construct_UClass_UProfileUser_Statics::NewProp_HealthMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProfileUser_Statics::NewProp_HealthMax_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProfileUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProfileUser_Statics::NewProp_Armor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProfileUser_Statics::NewProp_HealthMax,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProfileUser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProfileUser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProfileUser_Statics::ClassParams = {
		&UProfileUser::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UProfileUser_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UProfileUser_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UProfileUser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProfileUser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProfileUser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProfileUser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProfileUser, 598756879);
	template<> PRIMERAPP_API UClass* StaticClass<UProfileUser>()
	{
		return UProfileUser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProfileUser(Z_Construct_UClass_UProfileUser, &UProfileUser::StaticClass, TEXT("/Script/PrimerApp"), TEXT("UProfileUser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProfileUser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
