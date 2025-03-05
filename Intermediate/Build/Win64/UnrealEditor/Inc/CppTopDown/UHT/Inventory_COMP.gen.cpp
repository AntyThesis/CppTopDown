// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CppTopDown/Inventory_COMP.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventory_COMP() {}

// Begin Cross Module References
CPPTOPDOWN_API UClass* Z_Construct_UClass_ATestActor_NoRegister();
CPPTOPDOWN_API UClass* Z_Construct_UClass_UInventory_COMP();
CPPTOPDOWN_API UClass* Z_Construct_UClass_UInventory_COMP_NoRegister();
CPPTOPDOWN_API UFunction* Z_Construct_UDelegateFunction_CppTopDown_OnItemAdded__DelegateSignature();
CPPTOPDOWN_API UFunction* Z_Construct_UDelegateFunction_CppTopDown_OnItemRemoved__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_CppTopDown();
// End Cross Module References

// Begin Delegate FOnItemAdded
struct Z_Construct_UDelegateFunction_CppTopDown_OnItemAdded__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Forward declare dispatchers\n" },
#endif
		{ "ModuleRelativePath", "Inventory_COMP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Forward declare dispatchers" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CppTopDown_OnItemAdded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CppTopDown, nullptr, "OnItemAdded__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CppTopDown_OnItemAdded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CppTopDown_OnItemAdded__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_CppTopDown_OnItemAdded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CppTopDown_OnItemAdded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemAdded_DelegateWrapper(const FMulticastScriptDelegate& OnItemAdded)
{
	OnItemAdded.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnItemAdded

// Begin Delegate FOnItemRemoved
struct Z_Construct_UDelegateFunction_CppTopDown_OnItemRemoved__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory_COMP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CppTopDown_OnItemRemoved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CppTopDown, nullptr, "OnItemRemoved__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CppTopDown_OnItemRemoved__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CppTopDown_OnItemRemoved__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_CppTopDown_OnItemRemoved__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CppTopDown_OnItemRemoved__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnItemRemoved)
{
	OnItemRemoved.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnItemRemoved

// Begin Class UInventory_COMP Function AddItemToInventory
struct Z_Construct_UFunction_UInventory_COMP_AddItemToInventory_Statics
{
	struct Inventory_COMP_eventAddItemToInventory_Parms
	{
		ATestActor* ItemToBeAdded;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Declare \"Add and Remove Item\" functions\n" },
#endif
		{ "ModuleRelativePath", "Inventory_COMP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declare \"Add and Remove Item\" functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemToBeAdded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventory_COMP_AddItemToInventory_Statics::NewProp_ItemToBeAdded = { "ItemToBeAdded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_COMP_eventAddItemToInventory_Parms, ItemToBeAdded), Z_Construct_UClass_ATestActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_COMP_AddItemToInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_COMP_AddItemToInventory_Statics::NewProp_ItemToBeAdded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_COMP_AddItemToInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_COMP_AddItemToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory_COMP, nullptr, "AddItemToInventory", nullptr, nullptr, Z_Construct_UFunction_UInventory_COMP_AddItemToInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_COMP_AddItemToInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_COMP_AddItemToInventory_Statics::Inventory_COMP_eventAddItemToInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_COMP_AddItemToInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_COMP_AddItemToInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventory_COMP_AddItemToInventory_Statics::Inventory_COMP_eventAddItemToInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_COMP_AddItemToInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_COMP_AddItemToInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory_COMP::execAddItemToInventory)
{
	P_GET_OBJECT(ATestActor,Z_Param_ItemToBeAdded);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddItemToInventory(Z_Param_ItemToBeAdded);
	P_NATIVE_END;
}
// End Class UInventory_COMP Function AddItemToInventory

// Begin Class UInventory_COMP Function FullInventory
struct Z_Construct_UFunction_UInventory_COMP_FullInventory_Statics
{
	struct Inventory_COMP_eventFullInventory_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Declare \"FullInventory\" function\n" },
#endif
		{ "ModuleRelativePath", "Inventory_COMP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declare \"FullInventory\" function" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInventory_COMP_FullInventory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_COMP_eventFullInventory_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_COMP_FullInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_COMP_eventFullInventory_Parms), &Z_Construct_UFunction_UInventory_COMP_FullInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_COMP_FullInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_COMP_FullInventory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_COMP_FullInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_COMP_FullInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory_COMP, nullptr, "FullInventory", nullptr, nullptr, Z_Construct_UFunction_UInventory_COMP_FullInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_COMP_FullInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_COMP_FullInventory_Statics::Inventory_COMP_eventFullInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_COMP_FullInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_COMP_FullInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventory_COMP_FullInventory_Statics::Inventory_COMP_eventFullInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_COMP_FullInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_COMP_FullInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory_COMP::execFullInventory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->FullInventory();
	P_NATIVE_END;
}
// End Class UInventory_COMP Function FullInventory

// Begin Class UInventory_COMP Function RemoveItemFromInventory
struct Z_Construct_UFunction_UInventory_COMP_RemoveItemFromInventory_Statics
{
	struct Inventory_COMP_eventRemoveItemFromInventory_Parms
	{
		ATestActor* ItemToBeRemoved;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory_COMP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemToBeRemoved;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventory_COMP_RemoveItemFromInventory_Statics::NewProp_ItemToBeRemoved = { "ItemToBeRemoved", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_COMP_eventRemoveItemFromInventory_Parms, ItemToBeRemoved), Z_Construct_UClass_ATestActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_COMP_RemoveItemFromInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_COMP_RemoveItemFromInventory_Statics::NewProp_ItemToBeRemoved,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_COMP_RemoveItemFromInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_COMP_RemoveItemFromInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory_COMP, nullptr, "RemoveItemFromInventory", nullptr, nullptr, Z_Construct_UFunction_UInventory_COMP_RemoveItemFromInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_COMP_RemoveItemFromInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_COMP_RemoveItemFromInventory_Statics::Inventory_COMP_eventRemoveItemFromInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_COMP_RemoveItemFromInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_COMP_RemoveItemFromInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventory_COMP_RemoveItemFromInventory_Statics::Inventory_COMP_eventRemoveItemFromInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_COMP_RemoveItemFromInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_COMP_RemoveItemFromInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory_COMP::execRemoveItemFromInventory)
{
	P_GET_OBJECT(ATestActor,Z_Param_ItemToBeRemoved);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveItemFromInventory(Z_Param_ItemToBeRemoved);
	P_NATIVE_END;
}
// End Class UInventory_COMP Function RemoveItemFromInventory

// Begin Class UInventory_COMP
void UInventory_COMP::StaticRegisterNativesUInventory_COMP()
{
	UClass* Class = UInventory_COMP::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddItemToInventory", &UInventory_COMP::execAddItemToInventory },
		{ "FullInventory", &UInventory_COMP::execFullInventory },
		{ "RemoveItemFromInventory", &UInventory_COMP::execRemoveItemFromInventory },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventory_COMP);
UClass* Z_Construct_UClass_UInventory_COMP_NoRegister()
{
	return UInventory_COMP::StaticClass();
}
struct Z_Construct_UClass_UInventory_COMP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Inventory_COMP.h" },
		{ "ModuleRelativePath", "Inventory_COMP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[] = {
		{ "Category", "Inventory_COMP" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Declare \"Inventory\" array\n" },
#endif
		{ "ModuleRelativePath", "Inventory_COMP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declare \"Inventory\" array" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemAdded_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Declare Dispactchers\n" },
#endif
		{ "ModuleRelativePath", "Inventory_COMP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declare Dispactchers" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemRemoved_MetaData[] = {
		{ "ModuleRelativePath", "Inventory_COMP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Inventory;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemAdded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemRemoved;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventory_COMP_AddItemToInventory, "AddItemToInventory" }, // 3918637139
		{ &Z_Construct_UFunction_UInventory_COMP_FullInventory, "FullInventory" }, // 617094575
		{ &Z_Construct_UFunction_UInventory_COMP_RemoveItemFromInventory, "RemoveItemFromInventory" }, // 2236654135
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventory_COMP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventory_COMP_Statics::NewProp_Inventory_Inner = { "Inventory", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ATestActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventory_COMP_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory_COMP, Inventory), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inventory_MetaData), NewProp_Inventory_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventory_COMP_Statics::NewProp_OnItemAdded = { "OnItemAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory_COMP, OnItemAdded), Z_Construct_UDelegateFunction_CppTopDown_OnItemAdded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemAdded_MetaData), NewProp_OnItemAdded_MetaData) }; // 822636407
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventory_COMP_Statics::NewProp_OnItemRemoved = { "OnItemRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory_COMP, OnItemRemoved), Z_Construct_UDelegateFunction_CppTopDown_OnItemRemoved__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemRemoved_MetaData), NewProp_OnItemRemoved_MetaData) }; // 3467148682
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventory_COMP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_COMP_Statics::NewProp_Inventory_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_COMP_Statics::NewProp_Inventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_COMP_Statics::NewProp_OnItemAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_COMP_Statics::NewProp_OnItemRemoved,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_COMP_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventory_COMP_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_CppTopDown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_COMP_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventory_COMP_Statics::ClassParams = {
	&UInventory_COMP::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventory_COMP_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_COMP_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_COMP_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventory_COMP_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventory_COMP()
{
	if (!Z_Registration_Info_UClass_UInventory_COMP.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventory_COMP.OuterSingleton, Z_Construct_UClass_UInventory_COMP_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventory_COMP.OuterSingleton;
}
template<> CPPTOPDOWN_API UClass* StaticClass<UInventory_COMP>()
{
	return UInventory_COMP::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventory_COMP);
UInventory_COMP::~UInventory_COMP() {}
// End Class UInventory_COMP

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_CppTopDown_Source_CppTopDown_Inventory_COMP_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventory_COMP, UInventory_COMP::StaticClass, TEXT("UInventory_COMP"), &Z_Registration_Info_UClass_UInventory_COMP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventory_COMP), 1183187048U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_CppTopDown_Source_CppTopDown_Inventory_COMP_h_617224506(TEXT("/Script/CppTopDown"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_CppTopDown_Source_CppTopDown_Inventory_COMP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_CppTopDown_Source_CppTopDown_Inventory_COMP_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
