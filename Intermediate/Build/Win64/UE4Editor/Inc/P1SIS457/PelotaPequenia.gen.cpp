// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P1SIS457/PelotaPequenia.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePelotaPequenia() {}
// Cross Module References
	P1SIS457_API UClass* Z_Construct_UClass_APelotaPequenia_NoRegister();
	P1SIS457_API UClass* Z_Construct_UClass_APelotaPequenia();
	P1SIS457_API UClass* Z_Construct_UClass_APelota();
	UPackage* Z_Construct_UPackage__Script_P1SIS457();
// End Cross Module References
	void APelotaPequenia::StaticRegisterNativesAPelotaPequenia()
	{
	}
	UClass* Z_Construct_UClass_APelotaPequenia_NoRegister()
	{
		return APelotaPequenia::StaticClass();
	}
	struct Z_Construct_UClass_APelotaPequenia_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APelotaPequenia_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APelota,
		(UObject* (*)())Z_Construct_UPackage__Script_P1SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APelotaPequenia_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PelotaPequenia.h" },
		{ "ModuleRelativePath", "PelotaPequenia.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APelotaPequenia_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APelotaPequenia>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APelotaPequenia_Statics::ClassParams = {
		&APelotaPequenia::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APelotaPequenia_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APelotaPequenia_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APelotaPequenia()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APelotaPequenia_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APelotaPequenia, 3496553302);
	template<> P1SIS457_API UClass* StaticClass<APelotaPequenia>()
	{
		return APelotaPequenia::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APelotaPequenia(Z_Construct_UClass_APelotaPequenia, &APelotaPequenia::StaticClass, TEXT("/Script/P1SIS457"), TEXT("APelotaPequenia"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APelotaPequenia);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
