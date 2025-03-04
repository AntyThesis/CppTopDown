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
CPPTOPDOWN_API UFunction* Z_Construct_UDelegateFunction_CppTopDown_OnDeath__DelegateSignature();
CPPTOPDOWN_API UFunction* Z_Construct_UDelegateFunction_CppTopDown_OnHealthChanged__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_CppTopDown();
// End Cross Module References

// Begin Delegate FOnHealthChanged
struct Z_Construct_UDelegateFunction_CppTopDown_OnHealthChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Forward declare dispatchers\n" },
#endif
		{ "ModuleRelativePath", "Health_COMP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Forward declare dispatchers" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CppTopDown_OnHealthChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CppTopDown, nullptr, "OnHealthChanged__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CppTopDown_OnHealthChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CppTopDown_OnHealthChanged__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_CppTopDown_OnHealthChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CppTopDown_OnHealthChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHealthChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChanged)
{
	OnHealthChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnHealthChanged

// Begin Delegate FOnDeath
struct Z_Construct_UDelegateFunction_CppTopDown_OnDeath__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Health_COMP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CppTopDown_OnDeath__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CppTopDown, nullptr, "OnDeath__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CppTopDown_OnDeath__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CppTopDown_OnDeath__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_CppTopDown_OnDeath__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CppTopDown_OnDeath__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDeath_DelegateWrapper(const FMulticastScriptDelegate& OnDeath)
{
	OnDeath.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnDeath

// Begin Class UHealth_COMP Function AffectHealth
struct Z_Construct_UFunction_UHealth_COMP_AffectHealth_Statics
{
	struct Health_COMP_eventAffectHealth_Parms
	{
		float HealthChangeAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Declare \"AffectHealth\" function\n" },
#endif
		{ "ModuleRelativePath", "Health_COMP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declare \"AffectHealth\" function" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthChangeAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealth_COMP_AffectHealth_Statics::NewProp_HealthChangeAmount = { "HealthChangeAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Health_COMP_eventAffectHealth_Parms, HealthChangeAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealth_COMP_AffectHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealth_COMP_AffectHealth_Statics::NewProp_HealthChangeAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealth_COMP_AffectHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealth_COMP_AffectHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealth_COMP, nullptr, "AffectHealth", nullptr, nullptr, Z_Construct_UFunction_UHealth_COMP_AffectHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealth_COMP_AffectHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealth_COMP_AffectHealth_Statics::Health_COMP_eventAffectHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealth_COMP_AffectHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealth_COMP_AffectHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHealth_COMP_AffectHealth_Statics::Health_COMP_eventAffectHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealth_COMP_AffectHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealth_COMP_AffectHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealth_COMP::execAffectHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_HealthChangeAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AffectHealth(Z_Param_HealthChangeAmount);
	P_NATIVE_END;
}
// End Class UHealth_COMP Function AffectHealth

// Begin Class UHealth_COMP Function RIP
struct Z_Construct_UFunction_UHealth_COMP_RIP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Declare \"RIP\" function\n" },
#endif
		{ "ModuleRelativePath", "Health_COMP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declare \"RIP\" function" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealth_COMP_RIP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealth_COMP, nullptr, "RIP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealth_COMP_RIP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealth_COMP_RIP_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHealth_COMP_RIP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealth_COMP_RIP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealth_COMP::execRIP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RIP();
	P_NATIVE_END;
}
// End Class UHealth_COMP Function RIP

// Begin Class UHealth_COMP
void UHealth_COMP::StaticRegisterNativesUHealth_COMP()
{
	UClass* Class = UHealth_COMP::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AffectHealth", &UHealth_COMP::execAffectHealth },
		{ "RIP", &UHealth_COMP::execRIP },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Declare dispatchers\n" },
#endif
		{ "ModuleRelativePath", "Health_COMP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declare dispatchers" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDeath_MetaData[] = {
		{ "ModuleRelativePath", "Health_COMP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Declare \"Health\" variables\n" },
#endif
		{ "ModuleRelativePath", "Health_COMP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declare \"Health\" variables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Health_COMP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeath;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHealth_COMP_AffectHealth, "AffectHealth" }, // 1078718442
		{ &Z_Construct_UFunction_UHealth_COMP_RIP, "RIP" }, // 2685947555
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealth_COMP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHealth_COMP_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealth_COMP, OnHealthChanged), Z_Construct_UDelegateFunction_CppTopDown_OnHealthChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthChanged_MetaData), NewProp_OnHealthChanged_MetaData) }; // 355008655
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHealth_COMP_Statics::NewProp_OnDeath = { "OnDeath", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealth_COMP, OnDeath), Z_Construct_UDelegateFunction_CppTopDown_OnDeath__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDeath_MetaData), NewProp_OnDeath_MetaData) }; // 2680445392
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealth_COMP_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealth_COMP, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealth_COMP_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealth_COMP, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealth_COMP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealth_COMP_Statics::NewProp_OnHealthChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealth_COMP_Statics::NewProp_OnDeath,
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
	FuncInfo,
	Z_Construct_UClass_UHealth_COMP_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_UHealth_COMP, UHealth_COMP::StaticClass, TEXT("UHealth_COMP"), &Z_Registration_Info_UClass_UHealth_COMP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealth_COMP), 2185188392U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_CppTopDown_Source_CppTopDown_Health_COMP_h_2415435704(TEXT("/Script/CppTopDown"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_CppTopDown_Source_CppTopDown_Health_COMP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_CppTopDown_Source_CppTopDown_Health_COMP_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
