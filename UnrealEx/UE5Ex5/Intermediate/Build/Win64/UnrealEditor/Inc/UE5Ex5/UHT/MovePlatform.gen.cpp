// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5Ex5/MovePlatform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovePlatform() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UE5EX5_API UClass* Z_Construct_UClass_AMovePlatform();
	UE5EX5_API UClass* Z_Construct_UClass_AMovePlatform_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5Ex5();
// End Cross Module References
	void AMovePlatform::StaticRegisterNativesAMovePlatform()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovePlatform);
	UClass* Z_Construct_UClass_AMovePlatform_NoRegister()
	{
		return AMovePlatform::StaticClass();
	}
	struct Z_Construct_UClass_AMovePlatform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovePlatform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5Ex5,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovePlatform_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovePlatform_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovePlatform.h" },
		{ "ModuleRelativePath", "MovePlatform.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovePlatform_Statics::NewProp_PlatformVelocity_MetaData[] = {
		{ "Category", "Moving Platform" },
		{ "ModuleRelativePath", "MovePlatform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovePlatform_Statics::NewProp_PlatformVelocity = { "PlatformVelocity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovePlatform, PlatformVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovePlatform_Statics::NewProp_PlatformVelocity_MetaData), Z_Construct_UClass_AMovePlatform_Statics::NewProp_PlatformVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovePlatform_Statics::NewProp_MoveDistance_MetaData[] = {
		{ "Category", "Moving Platform" },
		{ "ModuleRelativePath", "MovePlatform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovePlatform_Statics::NewProp_MoveDistance = { "MoveDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovePlatform, MoveDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovePlatform_Statics::NewProp_MoveDistance_MetaData), Z_Construct_UClass_AMovePlatform_Statics::NewProp_MoveDistance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovePlatform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovePlatform_Statics::NewProp_PlatformVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovePlatform_Statics::NewProp_MoveDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovePlatform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovePlatform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovePlatform_Statics::ClassParams = {
		&AMovePlatform::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMovePlatform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMovePlatform_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovePlatform_Statics::Class_MetaDataParams), Z_Construct_UClass_AMovePlatform_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovePlatform_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMovePlatform()
	{
		if (!Z_Registration_Info_UClass_AMovePlatform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovePlatform.OuterSingleton, Z_Construct_UClass_AMovePlatform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMovePlatform.OuterSingleton;
	}
	template<> UE5EX5_API UClass* StaticClass<AMovePlatform>()
	{
		return AMovePlatform::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovePlatform);
	AMovePlatform::~AMovePlatform() {}
	struct Z_CompiledInDeferFile_FID_Desktop_Unreal_Engine_UnrealEx_UE5Ex5_Source_UE5Ex5_MovePlatform_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Unreal_Engine_UnrealEx_UE5Ex5_Source_UE5Ex5_MovePlatform_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMovePlatform, AMovePlatform::StaticClass, TEXT("AMovePlatform"), &Z_Registration_Info_UClass_AMovePlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovePlatform), 3688743613U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Unreal_Engine_UnrealEx_UE5Ex5_Source_UE5Ex5_MovePlatform_h_2664416096(TEXT("/Script/UE5Ex5"),
		Z_CompiledInDeferFile_FID_Desktop_Unreal_Engine_UnrealEx_UE5Ex5_Source_UE5Ex5_MovePlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Unreal_Engine_UnrealEx_UE5Ex5_Source_UE5Ex5_MovePlatform_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
