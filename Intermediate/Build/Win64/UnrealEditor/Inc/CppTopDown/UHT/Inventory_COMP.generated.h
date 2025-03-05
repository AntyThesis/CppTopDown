// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory_COMP.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATestActor;
#ifdef CPPTOPDOWN_Inventory_COMP_generated_h
#error "Inventory_COMP.generated.h already included, missing '#pragma once' in Inventory_COMP.h"
#endif
#define CPPTOPDOWN_Inventory_COMP_generated_h

#define FID_Unreal_Projects_CppTopDown_Source_CppTopDown_Inventory_COMP_h_13_DELEGATE \
CPPTOPDOWN_API void FOnItemAdded_DelegateWrapper(const FMulticastScriptDelegate& OnItemAdded);


#define FID_Unreal_Projects_CppTopDown_Source_CppTopDown_Inventory_COMP_h_14_DELEGATE \
CPPTOPDOWN_API void FOnItemRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnItemRemoved);


#define FID_Unreal_Projects_CppTopDown_Source_CppTopDown_Inventory_COMP_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFullInventory); \
	DECLARE_FUNCTION(execRemoveItemFromInventory); \
	DECLARE_FUNCTION(execAddItemToInventory);


#define FID_Unreal_Projects_CppTopDown_Source_CppTopDown_Inventory_COMP_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventory_COMP(); \
	friend struct Z_Construct_UClass_UInventory_COMP_Statics; \
public: \
	DECLARE_CLASS(UInventory_COMP, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CppTopDown"), NO_API) \
	DECLARE_SERIALIZER(UInventory_COMP)


#define FID_Unreal_Projects_CppTopDown_Source_CppTopDown_Inventory_COMP_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventory_COMP(UInventory_COMP&&); \
	UInventory_COMP(const UInventory_COMP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventory_COMP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventory_COMP); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventory_COMP) \
	NO_API virtual ~UInventory_COMP();


#define FID_Unreal_Projects_CppTopDown_Source_CppTopDown_Inventory_COMP_h_17_PROLOG
#define FID_Unreal_Projects_CppTopDown_Source_CppTopDown_Inventory_COMP_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_CppTopDown_Source_CppTopDown_Inventory_COMP_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_CppTopDown_Source_CppTopDown_Inventory_COMP_h_20_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_CppTopDown_Source_CppTopDown_Inventory_COMP_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPPTOPDOWN_API UClass* StaticClass<class UInventory_COMP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_CppTopDown_Source_CppTopDown_Inventory_COMP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
