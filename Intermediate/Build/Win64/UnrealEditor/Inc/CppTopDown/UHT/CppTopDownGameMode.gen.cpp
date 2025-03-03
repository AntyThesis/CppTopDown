// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CppTopDown/CppTopDownGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCppTopDownGameMode() {}

// Begin Cross Module References
CPPTOPDOWN_API UClass* Z_Construct_UClass_ACppTopDownGameMode();
CPPTOPDOWN_API UClass* Z_Construct_UClass_ACppTopDownGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CppTopDown();
// End Cross Module References

// Begin Class ACppTopDownGameMode
void ACppTopDownGameMode::StaticRegisterNativesACppTopDownGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACppTopDownGameMode);
UClass* Z_Construct_UClass_ACppTopDownGameMode_NoRegister()
{
	return ACppTopDownGameMode::StaticClass();
}
struct Z_Construct_UClass_ACppTopDownGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CppTopDownGameMode.h" },
		{ "ModuleRelativePath", "CppTopDownGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACppTopDownGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACppTopDownGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CppTopDown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACppTopDownGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACppTopDownGameMode_Statics::ClassParams = {
	&ACppTopDownGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACppTopDownGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACppTopDownGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACppTopDownGameMode()
{
	if (!Z_Registration_Info_UClass_ACppTopDownGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACppTopDownGameMode.OuterSingleton, Z_Construct_UClass_ACppTopDownGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACppTopDownGameMode.OuterSingleton;
}
template<> CPPTOPDOWN_API UClass* StaticClass<ACppTopDownGameMode>()
{
	return ACppTopDownGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACppTopDownGameMode);
ACppTopDownGameMode::~ACppTopDownGameMode() {}
// End Class ACppTopDownGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_CppTopDown_Source_CppTopDown_CppTopDownGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACppTopDownGameMode, ACppTopDownGameMode::StaticClass, TEXT("ACppTopDownGameMode"), &Z_Registration_Info_UClass_ACppTopDownGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACppTopDownGameMode), 3836918388U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_CppTopDown_Source_CppTopDown_CppTopDownGameMode_h_2172590832(TEXT("/Script/CppTopDown"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_CppTopDown_Source_CppTopDown_CppTopDownGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_CppTopDown_Source_CppTopDown_CppTopDownGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
