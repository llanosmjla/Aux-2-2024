// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrimerApp/MiPrimerActorGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiPrimerActorGameModeBase() {}
// Cross Module References
	PRIMERAPP_API UClass* Z_Construct_UClass_AMiPrimerActorGameModeBase_NoRegister();
	PRIMERAPP_API UClass* Z_Construct_UClass_AMiPrimerActorGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PrimerApp();
	PRIMERAPP_API UClass* Z_Construct_UClass_AMiPrimerActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMiPrimerActorGameModeBase::execDestroyMiPrimerActorFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyMiPrimerActorFunction();
		P_NATIVE_END;
	}
	void AMiPrimerActorGameModeBase::StaticRegisterNativesAMiPrimerActorGameModeBase()
	{
		UClass* Class = AMiPrimerActorGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyMiPrimerActorFunction", &AMiPrimerActorGameModeBase::execDestroyMiPrimerActorFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMiPrimerActorGameModeBase_DestroyMiPrimerActorFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMiPrimerActorGameModeBase_DestroyMiPrimerActorFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MiPrimerActorGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMiPrimerActorGameModeBase_DestroyMiPrimerActorFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMiPrimerActorGameModeBase, nullptr, "DestroyMiPrimerActorFunction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMiPrimerActorGameModeBase_DestroyMiPrimerActorFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMiPrimerActorGameModeBase_DestroyMiPrimerActorFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMiPrimerActorGameModeBase_DestroyMiPrimerActorFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMiPrimerActorGameModeBase_DestroyMiPrimerActorFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMiPrimerActorGameModeBase_NoRegister()
	{
		return AMiPrimerActorGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMiPrimerActorGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedMiPrimerActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedMiPrimerActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMiPrimerActorGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PrimerApp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMiPrimerActorGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMiPrimerActorGameModeBase_DestroyMiPrimerActorFunction, "DestroyMiPrimerActorFunction" }, // 3252880053
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMiPrimerActorGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MiPrimerActorGameModeBase.h" },
		{ "ModuleRelativePath", "MiPrimerActorGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMiPrimerActorGameModeBase_Statics::NewProp_SpawnedMiPrimerActor_MetaData[] = {
		{ "ModuleRelativePath", "MiPrimerActorGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMiPrimerActorGameModeBase_Statics::NewProp_SpawnedMiPrimerActor = { "SpawnedMiPrimerActor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMiPrimerActorGameModeBase, SpawnedMiPrimerActor), Z_Construct_UClass_AMiPrimerActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMiPrimerActorGameModeBase_Statics::NewProp_SpawnedMiPrimerActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMiPrimerActorGameModeBase_Statics::NewProp_SpawnedMiPrimerActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMiPrimerActorGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiPrimerActorGameModeBase_Statics::NewProp_SpawnedMiPrimerActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMiPrimerActorGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMiPrimerActorGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMiPrimerActorGameModeBase_Statics::ClassParams = {
		&AMiPrimerActorGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMiPrimerActorGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMiPrimerActorGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMiPrimerActorGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMiPrimerActorGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMiPrimerActorGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMiPrimerActorGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMiPrimerActorGameModeBase, 643666165);
	template<> PRIMERAPP_API UClass* StaticClass<AMiPrimerActorGameModeBase>()
	{
		return AMiPrimerActorGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMiPrimerActorGameModeBase(Z_Construct_UClass_AMiPrimerActorGameModeBase, &AMiPrimerActorGameModeBase::StaticClass, TEXT("/Script/PrimerApp"), TEXT("AMiPrimerActorGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMiPrimerActorGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
