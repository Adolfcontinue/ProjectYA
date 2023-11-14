// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Client/SocketInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocketInstance() {}
// Cross Module References
	CLIENT_API UClass* Z_Construct_UClass_USocketInstance_NoRegister();
	CLIENT_API UClass* Z_Construct_UClass_USocketInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_Client();
// End Cross Module References
	void USocketInstance::StaticRegisterNativesUSocketInstance()
	{
	}
	UClass* Z_Construct_UClass_USocketInstance_NoRegister()
	{
		return USocketInstance::StaticClass();
	}
	struct Z_Construct_UClass_USocketInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USocketInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Client,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocketInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SocketInstance.h" },
		{ "ModuleRelativePath", "SocketInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USocketInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocketInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USocketInstance_Statics::ClassParams = {
		&USocketInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USocketInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USocketInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USocketInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USocketInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USocketInstance, 81479720);
	template<> CLIENT_API UClass* StaticClass<USocketInstance>()
	{
		return USocketInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USocketInstance(Z_Construct_UClass_USocketInstance, &USocketInstance::StaticClass, TEXT("/Script/Client"), TEXT("USocketInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USocketInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
