// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CppTopDown/Health_COMP.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealth_COMP() {}

// Begin Cross Module References
CPPTOPDOWN_API UClass* Z_Construct_UClass_UHealth_COMP();
CPPTOPDOWN_API UClass* Z_Construct_UClass_UHealth_COMP_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_CppTopDown();
// End Cross Module References

// Begin Class UHealth_COMP
void UHealth_COMP::StaticRegisterNativesUHealth_COMP()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHealth_COMP);
UClass* Z_Construct_UClass_UHealth_COMP_NoRegister()
{
	return UHealth_COMP::StaticClass();
}
struct Z_Construct_UClass_UHealth_COMP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Health_COMP.h" },
		{ "ModuleRelativePath", "Health_COMP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Health_COMP" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Declare Health variables\n" },
#endif
		{ "ModuleRelativePath", "Health_COMP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declare Health variables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health_COMP" },
		{ "ModuleRelativePath", "Health_COMP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealth_COMP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealth_COMP_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealth_COMP, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealth_COMP_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealth_COMP, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealth_COMP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealth_COMP_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealth_COMP_Statics::NewProp_MaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealth_COMP_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHealth_COMP_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_CppTopDown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealth_COMP_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealth_COMP_Statics::ClassParams = {
	&UHealth_COMP::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHealth_COMP_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHealth_COMP_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealth_COMP_Statics::Class_MetaDataParams), Z_Construct_UClass_UHealth_COMP_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHealth_COMP()
{
	if (!Z_Registration_Info_UClass_UHealth_COMP.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealth_COMP.OuterSingleton, Z_Construct_UClass_UHealth_COMP_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHealth_COMP.OuterSingleton;
}
template<> CPPTOPDOWN_API UClass* StaticClass<UHealth_COMP>()
{
	return UHealth_COMP::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHealth_COMP);
UHealth_COMP::~UHealth_COMP() {}
// End Class UHealth_COMP

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_CppTopDown_Source_CppTopDown_Health_COMP_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHealth_COMP, UHealth_COMP::StaticClass, TEXT("UHealth_COMP"), &Z_Registration_Info_UClass_UHealth_COMP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealth_COMP), 3465283871U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_CppTopDown_Source_CppTopDown_Health_COMP_h_249187684(TEXT("/Script/CppTopDown"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_CppTopDown_Source_CppTopDown_Health_COMP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_CppTopDown_Source_CppTopDown_Health_COMP_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
