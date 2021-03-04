// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "coopgame/coopgameGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecoopgameGameModeBase() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_AcoopgameGameModeBase_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_AcoopgameGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_coopgame();
// End Cross Module References
	void AcoopgameGameModeBase::StaticRegisterNativesAcoopgameGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AcoopgameGameModeBase_NoRegister()
	{
		return AcoopgameGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AcoopgameGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AcoopgameGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_coopgame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcoopgameGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "coopgameGameModeBase.h" },
		{ "ModuleRelativePath", "coopgameGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AcoopgameGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AcoopgameGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AcoopgameGameModeBase_Statics::ClassParams = {
		&AcoopgameGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AcoopgameGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AcoopgameGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AcoopgameGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AcoopgameGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AcoopgameGameModeBase, 600571658);
	template<> COOPGAME_API UClass* StaticClass<AcoopgameGameModeBase>()
	{
		return AcoopgameGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AcoopgameGameModeBase(Z_Construct_UClass_AcoopgameGameModeBase, &AcoopgameGameModeBase::StaticClass, TEXT("/Script/coopgame"), TEXT("AcoopgameGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AcoopgameGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
