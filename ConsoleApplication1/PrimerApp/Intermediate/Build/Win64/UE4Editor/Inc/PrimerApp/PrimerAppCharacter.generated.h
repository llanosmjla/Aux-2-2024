// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PRIMERAPP_PrimerAppCharacter_generated_h
#error "PrimerAppCharacter.generated.h already included, missing '#pragma once' in PrimerAppCharacter.h"
#endif
#define PRIMERAPP_PrimerAppCharacter_generated_h

#define PrimerApp_Source_PrimerApp_PrimerAppCharacter_h_20_SPARSE_DATA
#define PrimerApp_Source_PrimerApp_PrimerAppCharacter_h_20_RPC_WRAPPERS
#define PrimerApp_Source_PrimerApp_PrimerAppCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define PrimerApp_Source_PrimerApp_PrimerAppCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPrimerAppCharacter(); \
	friend struct Z_Construct_UClass_APrimerAppCharacter_Statics; \
public: \
	DECLARE_CLASS(APrimerAppCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PrimerApp"), NO_API) \
	DECLARE_SERIALIZER(APrimerAppCharacter)


#define PrimerApp_Source_PrimerApp_PrimerAppCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAPrimerAppCharacter(); \
	friend struct Z_Construct_UClass_APrimerAppCharacter_Statics; \
public: \
	DECLARE_CLASS(APrimerAppCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PrimerApp"), NO_API) \
	DECLARE_SERIALIZER(APrimerAppCharacter)


#define PrimerApp_Source_PrimerApp_PrimerAppCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APrimerAppCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APrimerAppCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APrimerAppCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APrimerAppCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APrimerAppCharacter(APrimerAppCharacter&&); \
	NO_API APrimerAppCharacter(const APrimerAppCharacter&); \
public:


#define PrimerApp_Source_PrimerApp_PrimerAppCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APrimerAppCharacter(APrimerAppCharacter&&); \
	NO_API APrimerAppCharacter(const APrimerAppCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APrimerAppCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APrimerAppCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APrimerAppCharacter)


#define PrimerApp_Source_PrimerApp_PrimerAppCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(APrimerAppCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(APrimerAppCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(APrimerAppCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(APrimerAppCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(APrimerAppCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(APrimerAppCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(APrimerAppCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(APrimerAppCharacter, L_MotionController); }


#define PrimerApp_Source_PrimerApp_PrimerAppCharacter_h_17_PROLOG
#define PrimerApp_Source_PrimerApp_PrimerAppCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PrimerApp_Source_PrimerApp_PrimerAppCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	PrimerApp_Source_PrimerApp_PrimerAppCharacter_h_20_SPARSE_DATA \
	PrimerApp_Source_PrimerApp_PrimerAppCharacter_h_20_RPC_WRAPPERS \
	PrimerApp_Source_PrimerApp_PrimerAppCharacter_h_20_INCLASS \
	PrimerApp_Source_PrimerApp_PrimerAppCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PrimerApp_Source_PrimerApp_PrimerAppCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PrimerApp_Source_PrimerApp_PrimerAppCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	PrimerApp_Source_PrimerApp_PrimerAppCharacter_h_20_SPARSE_DATA \
	PrimerApp_Source_PrimerApp_PrimerAppCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	PrimerApp_Source_PrimerApp_PrimerAppCharacter_h_20_INCLASS_NO_PURE_DECLS \
	PrimerApp_Source_PrimerApp_PrimerAppCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PRIMERAPP_API UClass* StaticClass<class APrimerAppCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PrimerApp_Source_PrimerApp_PrimerAppCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
