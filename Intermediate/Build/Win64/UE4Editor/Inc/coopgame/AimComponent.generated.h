// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPGAME_AimComponent_generated_h
#error "AimComponent.generated.h already included, missing '#pragma once' in AimComponent.h"
#endif
#define COOPGAME_AimComponent_generated_h

#define MyFpsGameNew_Source_coopgame_Public_Components_AimComponent_h_13_SPARSE_DATA
#define MyFpsGameNew_Source_coopgame_Public_Components_AimComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBeginZoom);


#define MyFpsGameNew_Source_coopgame_Public_Components_AimComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBeginZoom);


#define MyFpsGameNew_Source_coopgame_Public_Components_AimComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAimComponent(); \
	friend struct Z_Construct_UClass_UAimComponent_Statics; \
public: \
	DECLARE_CLASS(UAimComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/coopgame"), NO_API) \
	DECLARE_SERIALIZER(UAimComponent)


#define MyFpsGameNew_Source_coopgame_Public_Components_AimComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAimComponent(); \
	friend struct Z_Construct_UClass_UAimComponent_Statics; \
public: \
	DECLARE_CLASS(UAimComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/coopgame"), NO_API) \
	DECLARE_SERIALIZER(UAimComponent)


#define MyFpsGameNew_Source_coopgame_Public_Components_AimComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAimComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAimComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAimComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAimComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAimComponent(UAimComponent&&); \
	NO_API UAimComponent(const UAimComponent&); \
public:


#define MyFpsGameNew_Source_coopgame_Public_Components_AimComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAimComponent(UAimComponent&&); \
	NO_API UAimComponent(const UAimComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAimComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAimComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAimComponent)


#define MyFpsGameNew_Source_coopgame_Public_Components_AimComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpeedOfChangeFOV() { return STRUCT_OFFSET(UAimComponent, SpeedOfChangeFOV); } \
	FORCEINLINE static uint32 __PPO__FinalFov() { return STRUCT_OFFSET(UAimComponent, FinalFov); } \
	FORCEINLINE static uint32 __PPO__DefaultFOV() { return STRUCT_OFFSET(UAimComponent, DefaultFOV); }


#define MyFpsGameNew_Source_coopgame_Public_Components_AimComponent_h_10_PROLOG
#define MyFpsGameNew_Source_coopgame_Public_Components_AimComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyFpsGameNew_Source_coopgame_Public_Components_AimComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	MyFpsGameNew_Source_coopgame_Public_Components_AimComponent_h_13_SPARSE_DATA \
	MyFpsGameNew_Source_coopgame_Public_Components_AimComponent_h_13_RPC_WRAPPERS \
	MyFpsGameNew_Source_coopgame_Public_Components_AimComponent_h_13_INCLASS \
	MyFpsGameNew_Source_coopgame_Public_Components_AimComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyFpsGameNew_Source_coopgame_Public_Components_AimComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyFpsGameNew_Source_coopgame_Public_Components_AimComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	MyFpsGameNew_Source_coopgame_Public_Components_AimComponent_h_13_SPARSE_DATA \
	MyFpsGameNew_Source_coopgame_Public_Components_AimComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyFpsGameNew_Source_coopgame_Public_Components_AimComponent_h_13_INCLASS_NO_PURE_DECLS \
	MyFpsGameNew_Source_coopgame_Public_Components_AimComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class UAimComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyFpsGameNew_Source_coopgame_Public_Components_AimComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
