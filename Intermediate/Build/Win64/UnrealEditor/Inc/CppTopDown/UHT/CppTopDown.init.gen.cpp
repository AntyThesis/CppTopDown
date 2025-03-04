// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCppTopDown_init() {}
	CPPTOPDOWN_API UFunction* Z_Construct_UDelegateFunction_CppTopDown_OnHealthChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CppTopDown;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CppTopDown()
	{
		if (!Z_Registration_Info_UPackage__Script_CppTopDown.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_CppTopDown_OnHealthChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CppTopDown",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE0D43B34,
				0x14C5AF6E,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CppTopDown.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CppTopDown.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CppTopDown(Z_Construct_UPackage__Script_CppTopDown, TEXT("/Script/CppTopDown"), Z_Registration_Info_UPackage__Script_CppTopDown, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE0D43B34, 0x14C5AF6E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
