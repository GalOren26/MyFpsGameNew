// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPGAME_SChar_generated_h
#error "SChar.generated.h already included, missing '#pragma once' in SChar.h"
#endif
#define COOPGAME_SChar_generated_h

#define MyFpsGameNew_Source_coopgame_Public_SChar_h_15_SPARSE_DATA
#define MyFpsGameNew_Source_coopgame_Public_SChar_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeWeapon);


#define MyFpsGameNew_Source_coopgame_Public_SChar_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeWeapon);


#define MyFpsGameNew_Source_coopgame_Public_SChar_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASChar(); \
	friend struct Z_Construct_UClass_ASChar_Statics; \
public: \
	DECLARE_CLASS(ASChar, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/coopgame"), NO_API) \
	DECLARE_SERIALIZER(ASChar)


#define MyFpsGameNew_Source_coopgame_Public_SChar_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASChar(); \
	friend struct Z_Construct_UClass_ASChar_Statics; \
public: \
	DECLARE_CLASS(ASChar, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/coopgame"), NO_API) \
	DECLARE_SERIALIZER(ASChar)


#define MyFpsGameNew_Source_coopgame_Public_SChar_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASChar(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASChar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASChar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASChar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASChar(ASChar&&); \
	NO_API ASChar(const ASChar&); \
public:


#define MyFpsGameNew_Source_coopgame_Public_SChar_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASChar(ASChar&&); \
	NO_API ASChar(const ASChar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASChar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASChar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASChar)


#define MyFpsGameNew_Source_coopgame_Public_SChar_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraComp() { return STRUCT_OFFSET(ASChar, CameraComp); } \
	FORCEINLINE static uint32 __PPO__SpringArmComp() { return STRUCT_OFFSET(ASChar, SpringArmComp); } \
	FORCEINLINE static uint32 __PPO__my_weapon() { return STRUCT_OFFSET(ASChar, my_weapon); } \
	FORCEINLINE static uint32 __PPO__CurrentWeapon() { return STRUCT_OFFSET(ASChar, CurrentWeapon); } \
	FORCEINLINE static uint32 __PPO__AimComponent() { return STRUCT_OFFSET(ASChar, AimComponent); }


#define MyFpsGameNew_Source_coopgame_Public_SChar_h_12_PROLOG
#define MyFpsGameNew_Source_coopgame_Public_SChar_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyFpsGameNew_Source_coopgame_Public_SChar_h_15_PRIVATE_PROPERTY_OFFSET \
	MyFpsGameNew_Source_coopgame_Public_SChar_h_15_SPARSE_DATA \
	MyFpsGameNew_Source_coopgame_Public_SChar_h_15_RPC_WRAPPERS \
	MyFpsGameNew_Source_coopgame_Public_SChar_h_15_INCLASS \
	MyFpsGameNew_Source_coopgame_Public_SChar_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyFpsGameNew_Source_coopgame_Public_SChar_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyFpsGameNew_Source_coopgame_Public_SChar_h_15_PRIVATE_PROPERTY_OFFSET \
	MyFpsGameNew_Source_coopgame_Public_SChar_h_15_SPARSE_DATA \
	MyFpsGameNew_Source_coopgame_Public_SChar_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MyFpsGameNew_Source_coopgame_Public_SChar_h_15_INCLASS_NO_PURE_DECLS \
	MyFpsGameNew_Source_coopgame_Public_SChar_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ASChar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyFpsGameNew_Source_coopgame_Public_SChar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
