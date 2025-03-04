// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TestActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACppTopDownCharacter;
#ifdef CPPTOPDOWN_TestActor_generated_h
#error "TestActor.generated.h already included, missing '#pragma once' in TestActor.h"
#endif
#define CPPTOPDOWN_TestActor_generated_h

#define FID_Unreal_Projects_CppTopDown_Source_CppTopDown_TestActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPickedUp);


#define FID_Unreal_Projects_CppTopDown_Source_CppTopDown_TestActor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestActor(); \
	friend struct Z_Construct_UClass_ATestActor_Statics; \
public: \
	DECLARE_CLASS(ATestActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CppTopDown"), NO_API) \
	DECLARE_SERIALIZER(ATestActor)


#define FID_Unreal_Projects_CppTopDown_Source_CppTopDown_TestActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATestActor(ATestActor&&); \
	ATestActor(const ATestActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestActor) \
	NO_API virtual ~ATestActor();


#define FID_Unreal_Projects_CppTopDown_Source_CppTopDown_TestActor_h_15_PROLOG
#define FID_Unreal_Projects_CppTopDown_Source_CppTopDown_TestActor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_CppTopDown_Source_CppTopDown_TestActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_CppTopDown_Source_CppTopDown_TestActor_h_18_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_CppTopDown_Source_CppTopDown_TestActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPPTOPDOWN_API UClass* StaticClass<class ATestActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_CppTopDown_Source_CppTopDown_TestActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
