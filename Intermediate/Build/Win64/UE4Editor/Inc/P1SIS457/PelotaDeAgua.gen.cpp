// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P1SIS457/PelotaDeAgua.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePelotaDeAgua() {}
// Cross Module References
	P1SIS457_API UClass* Z_Construct_UClass_APelotaDeAgua_NoRegister();
	P1SIS457_API UClass* Z_Construct_UClass_APelotaDeAgua();
	P1SIS457_API UClass* Z_Construct_UClass_APelota();
	UPackage* Z_Construct_UPackage__Script_P1SIS457();
// End Cross Module References
	void APelotaDeAgua::StaticRegisterNativesAPelotaDeAgua()
	{
	}
	UClass* Z_Construct_UClass_APelotaDeAgua_NoRegister()
	{
		return APelotaDeAgua::StaticClass();
	}
	struct Z_Construct_UClass_APelotaDeAgua_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APelotaDeAgua_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APelota,
		(UObject* (*)())Z_Construct_UPackage__Script_P1SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APelotaDeAgua_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PelotaDeAgua.h" },
		{ "ModuleRelativePath", "PelotaDeAgua.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APelotaDeAgua_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APelotaDeAgua>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APelotaDeAgua_Statics::ClassParams = {
		&APelotaDeAgua::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APelotaDeAgua_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APelotaDeAgua_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APelotaDeAgua()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APelotaDeAgua_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APelotaDeAgua, 2184208038);
	template<> P1SIS457_API UClass* StaticClass<APelotaDeAgua>()
	{
		return APelotaDeAgua::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APelotaDeAgua(Z_Construct_UClass_APelotaDeAgua, &APelotaDeAgua::StaticClass, TEXT("/Script/P1SIS457"), TEXT("APelotaDeAgua"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APelotaDeAgua);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
