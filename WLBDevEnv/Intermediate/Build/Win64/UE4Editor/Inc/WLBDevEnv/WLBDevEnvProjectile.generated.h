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
#ifdef WLBDEVENV_WLBDevEnvProjectile_generated_h
#error "WLBDevEnvProjectile.generated.h already included, missing '#pragma once' in WLBDevEnvProjectile.h"
#endif
#define WLBDEVENV_WLBDevEnvProjectile_generated_h

#define WLBDevEnv_Source_WLBDevEnv_WLBDevEnvProjectile_h_15_SPARSE_DATA
#define WLBDevEnv_Source_WLBDevEnv_WLBDevEnvProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define WLBDevEnv_Source_WLBDevEnv_WLBDevEnvProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define WLBDevEnv_Source_WLBDevEnv_WLBDevEnvProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWLBDevEnvProjectile(); \
	friend struct Z_Construct_UClass_AWLBDevEnvProjectile_Statics; \
public: \
	DECLARE_CLASS(AWLBDevEnvProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WLBDevEnv"), NO_API) \
	DECLARE_SERIALIZER(AWLBDevEnvProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define WLBDevEnv_Source_WLBDevEnv_WLBDevEnvProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAWLBDevEnvProjectile(); \
	friend struct Z_Construct_UClass_AWLBDevEnvProjectile_Statics; \
public: \
	DECLARE_CLASS(AWLBDevEnvProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WLBDevEnv"), NO_API) \
	DECLARE_SERIALIZER(AWLBDevEnvProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define WLBDevEnv_Source_WLBDevEnv_WLBDevEnvProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWLBDevEnvProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWLBDevEnvProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWLBDevEnvProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWLBDevEnvProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWLBDevEnvProjectile(AWLBDevEnvProjectile&&); \
	NO_API AWLBDevEnvProjectile(const AWLBDevEnvProjectile&); \
public:


#define WLBDevEnv_Source_WLBDevEnv_WLBDevEnvProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWLBDevEnvProjectile(AWLBDevEnvProjectile&&); \
	NO_API AWLBDevEnvProjectile(const AWLBDevEnvProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWLBDevEnvProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWLBDevEnvProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWLBDevEnvProjectile)


#define WLBDevEnv_Source_WLBDevEnv_WLBDevEnvProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AWLBDevEnvProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AWLBDevEnvProjectile, ProjectileMovement); }


#define WLBDevEnv_Source_WLBDevEnv_WLBDevEnvProjectile_h_12_PROLOG
#define WLBDevEnv_Source_WLBDevEnv_WLBDevEnvProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WLBDevEnv_Source_WLBDevEnv_WLBDevEnvProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	WLBDevEnv_Source_WLBDevEnv_WLBDevEnvProjectile_h_15_SPARSE_DATA \
	WLBDevEnv_Source_WLBDevEnv_WLBDevEnvProjectile_h_15_RPC_WRAPPERS \
	WLBDevEnv_Source_WLBDevEnv_WLBDevEnvProjectile_h_15_INCLASS \
	WLBDevEnv_Source_WLBDevEnv_WLBDevEnvProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WLBDevEnv_Source_WLBDevEnv_WLBDevEnvProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WLBDevEnv_Source_WLBDevEnv_WLBDevEnvProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	WLBDevEnv_Source_WLBDevEnv_WLBDevEnvProjectile_h_15_SPARSE_DATA \
	WLBDevEnv_Source_WLBDevEnv_WLBDevEnvProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	WLBDevEnv_Source_WLBDevEnv_WLBDevEnvProjectile_h_15_INCLASS_NO_PURE_DECLS \
	WLBDevEnv_Source_WLBDevEnv_WLBDevEnvProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WLBDEVENV_API UClass* StaticClass<class AWLBDevEnvProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WLBDevEnv_Source_WLBDevEnv_WLBDevEnvProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
