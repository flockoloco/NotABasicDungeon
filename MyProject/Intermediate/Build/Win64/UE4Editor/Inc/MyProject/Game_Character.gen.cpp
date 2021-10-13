// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Game_Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGame_Character() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AGame_Character_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AGame_Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	DEFINE_FUNCTION(AGame_Character::execMoveHorizontal)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveHorizontal(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGame_Character::execMoveVertical)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveVertical(Z_Param_Value);
		P_NATIVE_END;
	}
	void AGame_Character::StaticRegisterNativesAGame_Character()
	{
		UClass* Class = AGame_Character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveHorizontal", &AGame_Character::execMoveHorizontal },
			{ "MoveVertical", &AGame_Character::execMoveVertical },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGame_Character_MoveHorizontal_Statics
	{
		struct Game_Character_eventMoveHorizontal_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGame_Character_MoveHorizontal_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Game_Character_eventMoveHorizontal_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGame_Character_MoveHorizontal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGame_Character_MoveHorizontal_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGame_Character_MoveHorizontal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGame_Character_MoveHorizontal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGame_Character, nullptr, "MoveHorizontal", nullptr, nullptr, sizeof(Game_Character_eventMoveHorizontal_Parms), Z_Construct_UFunction_AGame_Character_MoveHorizontal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGame_Character_MoveHorizontal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGame_Character_MoveHorizontal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGame_Character_MoveHorizontal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGame_Character_MoveHorizontal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGame_Character_MoveHorizontal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGame_Character_MoveVertical_Statics
	{
		struct Game_Character_eventMoveVertical_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGame_Character_MoveVertical_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Game_Character_eventMoveVertical_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGame_Character_MoveVertical_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGame_Character_MoveVertical_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGame_Character_MoveVertical_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGame_Character_MoveVertical_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGame_Character, nullptr, "MoveVertical", nullptr, nullptr, sizeof(Game_Character_eventMoveVertical_Parms), Z_Construct_UFunction_AGame_Character_MoveVertical_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGame_Character_MoveVertical_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGame_Character_MoveVertical_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGame_Character_MoveVertical_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGame_Character_MoveVertical()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGame_Character_MoveVertical_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGame_Character_NoRegister()
	{
		return AGame_Character::StaticClass();
	}
	struct Z_Construct_UClass_AGame_Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGame_Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGame_Character_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGame_Character_MoveHorizontal, "MoveHorizontal" }, // 2818554865
		{ &Z_Construct_UFunction_AGame_Character_MoveVertical, "MoveVertical" }, // 3551271193
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGame_Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Game_Character.h" },
		{ "ModuleRelativePath", "Game_Character.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGame_Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGame_Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGame_Character_Statics::ClassParams = {
		&AGame_Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGame_Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGame_Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGame_Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGame_Character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGame_Character, 2513203967);
	template<> MYPROJECT_API UClass* StaticClass<AGame_Character>()
	{
		return AGame_Character::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGame_Character(Z_Construct_UClass_AGame_Character, &AGame_Character::StaticClass, TEXT("/Script/MyProject"), TEXT("AGame_Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGame_Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
