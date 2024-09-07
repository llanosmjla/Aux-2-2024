// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrimerApp/MiPrimerActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiPrimerActor() {}
// Cross Module References
	PRIMERAPP_API UClass* Z_Construct_UClass_AMiPrimerActor_NoRegister();
	PRIMERAPP_API UClass* Z_Construct_UClass_AMiPrimerActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PrimerApp();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AMiPrimerActor::StaticRegisterNativesAMiPrimerActor()
	{
	}
	UClass* Z_Construct_UClass_AMiPrimerActor_NoRegister()
	{
		return AMiPrimerActor::StaticClass();
	}
	struct Z_Construct_UClass_AMiPrimerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PadreSceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PadreSceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HijoSceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HijoSceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PadreMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PadreMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HijoMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HijoMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMiPrimerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PrimerApp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMiPrimerActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MiPrimerActor.h" },
		{ "ModuleRelativePath", "MiPrimerActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMiPrimerActor_Statics::NewProp_PadreSceneComponent_MetaData[] = {
		{ "Category", "MiPrimerActor" },
		{ "Comment", "//Crear Escenas de componentes - Scene Components \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MiPrimerActor.h" },
		{ "ToolTip", "Crear Escenas de componentes - Scene Components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMiPrimerActor_Statics::NewProp_PadreSceneComponent = { "PadreSceneComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMiPrimerActor, PadreSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMiPrimerActor_Statics::NewProp_PadreSceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMiPrimerActor_Statics::NewProp_PadreSceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMiPrimerActor_Statics::NewProp_HijoSceneComponent_MetaData[] = {
		{ "Category", "MiPrimerActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MiPrimerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMiPrimerActor_Statics::NewProp_HijoSceneComponent = { "HijoSceneComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMiPrimerActor, HijoSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMiPrimerActor_Statics::NewProp_HijoSceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMiPrimerActor_Statics::NewProp_HijoSceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMiPrimerActor_Statics::NewProp_PadreMeshComponent_MetaData[] = {
		{ "Category", "MiPrimerActor" },
		{ "Comment", "//Crear un componente - Mesh Component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MiPrimerActor.h" },
		{ "ToolTip", "Crear un componente - Mesh Component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMiPrimerActor_Statics::NewProp_PadreMeshComponent = { "PadreMeshComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMiPrimerActor, PadreMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMiPrimerActor_Statics::NewProp_PadreMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMiPrimerActor_Statics::NewProp_PadreMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMiPrimerActor_Statics::NewProp_HijoMeshComponent_MetaData[] = {
		{ "Category", "MiPrimerActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MiPrimerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMiPrimerActor_Statics::NewProp_HijoMeshComponent = { "HijoMeshComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMiPrimerActor, HijoMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMiPrimerActor_Statics::NewProp_HijoMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMiPrimerActor_Statics::NewProp_HijoMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMiPrimerActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiPrimerActor_Statics::NewProp_PadreSceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiPrimerActor_Statics::NewProp_HijoSceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiPrimerActor_Statics::NewProp_PadreMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiPrimerActor_Statics::NewProp_HijoMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMiPrimerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMiPrimerActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMiPrimerActor_Statics::ClassParams = {
		&AMiPrimerActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMiPrimerActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMiPrimerActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMiPrimerActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMiPrimerActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMiPrimerActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMiPrimerActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMiPrimerActor, 2940667539);
	template<> PRIMERAPP_API UClass* StaticClass<AMiPrimerActor>()
	{
		return AMiPrimerActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMiPrimerActor(Z_Construct_UClass_AMiPrimerActor, &AMiPrimerActor::StaticClass, TEXT("/Script/PrimerApp"), TEXT("AMiPrimerActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMiPrimerActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
