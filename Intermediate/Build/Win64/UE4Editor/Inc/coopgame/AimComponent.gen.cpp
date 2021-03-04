// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "coopgame/Public/Components/AimComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAimComponent() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_UAimComponent_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_UAimComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_coopgame();
// End Cross Module References
	DEFINE_FUNCTION(UAimComponent::execBeginZoom)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginZoom();
		P_NATIVE_END;
	}
	void UAimComponent::StaticRegisterNativesUAimComponent()
	{
		UClass* Class = UAimComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginZoom", &UAimComponent::execBeginZoom },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAimComponent_BeginZoom_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAimComponent_BeginZoom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AimComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAimComponent_BeginZoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAimComponent, nullptr, "BeginZoom", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAimComponent_BeginZoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimComponent_BeginZoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAimComponent_BeginZoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAimComponent_BeginZoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAimComponent_NoRegister()
	{
		return UAimComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAimComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultFOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinalFov_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FinalFov;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedOfChangeFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedOfChangeFOV;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAimComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_coopgame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAimComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAimComponent_BeginZoom, "BeginZoom" }, // 4075177514
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/AimComponent.h" },
		{ "ModuleRelativePath", "Public/Components/AimComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimComponent_Statics::NewProp_DefaultFOV_MetaData[] = {
		{ "Category", "FOV" },
		{ "ClampMax", "100.000000" },
		{ "ClampMin", "0.100000" },
		{ "ModuleRelativePath", "Public/Components/AimComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAimComponent_Statics::NewProp_DefaultFOV = { "DefaultFOV", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAimComponent, DefaultFOV), METADATA_PARAMS(Z_Construct_UClass_UAimComponent_Statics::NewProp_DefaultFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimComponent_Statics::NewProp_DefaultFOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimComponent_Statics::NewProp_FinalFov_MetaData[] = {
		{ "Category", "FOV" },
		{ "ClampMax", "100.000000" },
		{ "ClampMin", "0.100000" },
		{ "ModuleRelativePath", "Public/Components/AimComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAimComponent_Statics::NewProp_FinalFov = { "FinalFov", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAimComponent, FinalFov), METADATA_PARAMS(Z_Construct_UClass_UAimComponent_Statics::NewProp_FinalFov_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimComponent_Statics::NewProp_FinalFov_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimComponent_Statics::NewProp_SpeedOfChangeFOV_MetaData[] = {
		{ "Category", "FOV" },
		{ "ClampMax", "100.000000" },
		{ "ClampMin", "0.100000" },
		{ "ModuleRelativePath", "Public/Components/AimComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAimComponent_Statics::NewProp_SpeedOfChangeFOV = { "SpeedOfChangeFOV", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAimComponent, SpeedOfChangeFOV), METADATA_PARAMS(Z_Construct_UClass_UAimComponent_Statics::NewProp_SpeedOfChangeFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimComponent_Statics::NewProp_SpeedOfChangeFOV_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAimComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimComponent_Statics::NewProp_DefaultFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimComponent_Statics::NewProp_FinalFov,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimComponent_Statics::NewProp_SpeedOfChangeFOV,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAimComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAimComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAimComponent_Statics::ClassParams = {
		&UAimComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAimComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAimComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAimComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAimComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAimComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAimComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAimComponent, 2998829362);
	template<> COOPGAME_API UClass* StaticClass<UAimComponent>()
	{
		return UAimComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAimComponent(Z_Construct_UClass_UAimComponent, &UAimComponent::StaticClass, TEXT("/Script/coopgame"), TEXT("UAimComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAimComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
