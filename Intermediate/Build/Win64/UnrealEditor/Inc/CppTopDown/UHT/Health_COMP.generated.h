// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Health_COMP.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPPTOPDOWN_Health_COMP_generated_h
#error "Health_COMP.generated.h already included, missing '#pragma once' in Health_COMP.h"
#endif
#define CPPTOPDOWN_Health_COMP_generated_h

#define FID_Unreal_Projects_CppTopDown_Source_CppTopDown_Health_COMP_h_10_DELEGATE \
CPPTOPDOWN_API void FOnHealthChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChanged);


#define FID_Unreal_Projects_CppTopDown_Source_CppTopDown_Health_COMP_h_11_DELEGATE \
CPPTOPDOWN_API void FOnDeath_DelegateWrapper(const FMulticastScriptDelegate& OnDeath);


#define FID_Unreal_Projects_CppTopDown_Source_CppTopDown_Health_COMP_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRIP); \
	DECLARE_FUNCTION(execAffectHealth);


#define FID_Unreal_Projects_CppTopDown_Source_CppTopDown_Health_COMP_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealth_COMP(); \
	friend struct Z_Construct_UClass_UHealth_COMP_Statics; \
public: \
	DECLARE_CLASS(UHealth_COMP, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CppTopDown"), NO_API) \
	DECLARE_SERIALIZER(UHealth_COMP)


#define FID_Unreal_Projects_CppTopDown_Source_CppTopDown_Health_COMP_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHealth_COMP(UHealth_COMP&&); \
	UHealth_COMP(const UHealth_COMP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealth_COMP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealth_COMP); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealth_COMP) \
	NO_API virtual ~UHealth_COMP();


#define FID_Unreal_Projects_CppTopDown_Source_CppTopDown_Health_COMP_h_13_PROLOG
#define FID_Unreal_Projects_CppTopDown_Source_CppTopDown_Health_COMP_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_CppTopDown_Source_CppTopDown_Health_COMP_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_CppTopDown_Source_CppTopDown_Health_COMP_h_16_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_CppTopDown_Source_CppTopDown_Health_COMP_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPPTOPDOWN_API UClass* StaticClass<class UHealth_COMP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_CppTopDown_Source_CppTopDown_Health_COMP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
