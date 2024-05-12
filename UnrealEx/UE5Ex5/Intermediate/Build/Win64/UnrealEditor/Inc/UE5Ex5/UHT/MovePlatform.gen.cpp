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
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovePlatform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovePlatform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovePlatform_Statics::ClassParams = {
		&AMovePlatform::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovePlatform_Statics::Class_MetaDataParams), Z_Construct_UClass_AMovePlatform_Statics::Class_MetaDataParams)
	};
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
		{ Z_Construct_UClass_AMovePlatform, AMovePlatform::StaticClass, TEXT("AMovePlatform"), &Z_Registration_Info_UClass_AMovePlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovePlatform), 1878633019U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Unreal_Engine_UnrealEx_UE5Ex5_Source_UE5Ex5_MovePlatform_h_124945876(TEXT("/Script/UE5Ex5"),
		Z_CompiledInDeferFile_FID_Desktop_Unreal_Engine_UnrealEx_UE5Ex5_Source_UE5Ex5_MovePlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Unreal_Engine_UnrealEx_UE5Ex5_Source_UE5Ex5_MovePlatform_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
