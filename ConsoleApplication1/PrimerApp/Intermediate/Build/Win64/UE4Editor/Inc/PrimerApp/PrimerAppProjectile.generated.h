// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef PRIMERAPP_PrimerAppProjectile_generated_h
#error "PrimerAppProjectile.generated.h already included, missing '#pragma once' in PrimerAppProjectile.h"
#endif
#define PRIMERAPP_PrimerAppProjectile_generated_h

#define PrimerApp_Source_PrimerApp_PrimerAppProjectile_h_15_SPARSE_DATA
#define PrimerApp_Source_PrimerApp_PrimerAppProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PrimerApp_Source_PrimerApp_PrimerAppProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PrimerApp_Source_PrimerApp_PrimerAppProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPrimerAppProjectile(); \
	friend struct Z_Construct_UClass_APrimerAppProjectile_Statics; \
public: \
	DECLARE_CLASS(APrimerAppProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PrimerApp"), NO_API) \
	DECLARE_SERIALIZER(APrimerAppProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PrimerApp_Source_PrimerApp_PrimerAppProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPrimerAppProjectile(); \
	friend struct Z_Construct_UClass_APrimerAppProjectile_Statics; \
public: \
	DECLARE_CLASS(APrimerAppProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PrimerApp"), NO_API) \
	DECLARE_SERIALIZER(APrimerAppProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PrimerApp_Source_PrimerApp_PrimerAppProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APrimerAppProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APrimerAppProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APrimerAppProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APrimerAppProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APrimerAppProjectile(APrimerAppProjectile&&); \
	NO_API APrimerAppProjectile(const APrimerAppProjectile&); \
public:


#define PrimerApp_Source_PrimerApp_PrimerAppProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APrimerAppProjectile(APrimerAppProjectile&&); \
	NO_API APrimerAppProjectile(const APrimerAppProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APrimerAppProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APrimerAppProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APrimerAppProjectile)


#define PrimerApp_Source_PrimerApp_PrimerAppProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(APrimerAppProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(APrimerAppProjectile, ProjectileMovement); }


#define PrimerApp_Source_PrimerApp_PrimerAppProjectile_h_12_PROLOG
#define PrimerApp_Source_PrimerApp_PrimerAppProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PrimerApp_Source_PrimerApp_PrimerAppProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	PrimerApp_Source_PrimerApp_PrimerAppProjectile_h_15_SPARSE_DATA \
	PrimerApp_Source_PrimerApp_PrimerAppProjectile_h_15_RPC_WRAPPERS \
	PrimerApp_Source_PrimerApp_PrimerAppProjectile_h_15_INCLASS \
	PrimerApp_Source_PrimerApp_PrimerAppProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PrimerApp_Source_PrimerApp_PrimerAppProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PrimerApp_Source_PrimerApp_PrimerAppProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	PrimerApp_Source_PrimerApp_PrimerAppProjectile_h_15_SPARSE_DATA \
	PrimerApp_Source_PrimerApp_PrimerAppProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PrimerApp_Source_PrimerApp_PrimerAppProjectile_h_15_INCLASS_NO_PURE_DECLS \
	PrimerApp_Source_PrimerApp_PrimerAppProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PRIMERAPP_API UClass* StaticClass<class APrimerAppProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PrimerApp_Source_PrimerApp_PrimerAppProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
