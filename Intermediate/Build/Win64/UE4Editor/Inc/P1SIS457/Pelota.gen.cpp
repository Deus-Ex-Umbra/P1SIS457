// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P1SIS457/Pelota.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePelota() {}
// Cross Module References
	P1SIS457_API UClass* Z_Construct_UClass_APelota_NoRegister();
	P1SIS457_API UClass* Z_Construct_UClass_APelota();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_P1SIS457();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void APelota::StaticRegisterNativesAPelota()
	{
	}
	UClass* Z_Construct_UClass_APelota_NoRegister()
	{
		return APelota::StaticClass();
	}
	struct Z_Construct_UClass_APelota_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PelotaMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PelotaMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PelotaMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PelotaMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Escala_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Escala;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APelota_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_P1SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APelota_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pelota.h" },
		{ "ModuleRelativePath", "Pelota.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APelota_Statics::NewProp_PelotaMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pelota.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APelota_Statics::NewProp_PelotaMesh = { "PelotaMesh", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APelota, PelotaMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APelota_Statics::NewProp_PelotaMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APelota_Statics::NewProp_PelotaMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APelota_Statics::NewProp_PelotaMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Pelota.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APelota_Statics::NewProp_PelotaMaterial = { "PelotaMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APelota, PelotaMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APelota_Statics::NewProp_PelotaMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APelota_Statics::NewProp_PelotaMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APelota_Statics::NewProp_Escala_MetaData[] = {
		{ "ModuleRelativePath", "Pelota.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APelota_Statics::NewProp_Escala = { "Escala", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APelota, Escala), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APelota_Statics::NewProp_Escala_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APelota_Statics::NewProp_Escala_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APelota_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APelota_Statics::NewProp_PelotaMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APelota_Statics::NewProp_PelotaMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APelota_Statics::NewProp_Escala,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APelota_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APelota>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APelota_Statics::ClassParams = {
		&APelota::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APelota_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APelota_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_APelota_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APelota_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APelota()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APelota_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APelota, 39342024);
	template<> P1SIS457_API UClass* StaticClass<APelota>()
	{
		return APelota::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APelota(Z_Construct_UClass_APelota, &APelota::StaticClass, TEXT("/Script/P1SIS457"), TEXT("APelota"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APelota);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
