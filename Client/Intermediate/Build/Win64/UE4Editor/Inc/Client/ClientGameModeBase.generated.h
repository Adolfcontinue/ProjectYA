// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLIENT_ClientGameModeBase_generated_h
#error "ClientGameModeBase.generated.h already included, missing '#pragma once' in ClientGameModeBase.h"
#endif
#define CLIENT_ClientGameModeBase_generated_h

#define Client_Source_Client_ClientGameModeBase_h_15_SPARSE_DATA
#define Client_Source_Client_ClientGameModeBase_h_15_RPC_WRAPPERS
#define Client_Source_Client_ClientGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Client_Source_Client_ClientGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAClientGameModeBase(); \
	friend struct Z_Construct_UClass_AClientGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AClientGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Client"), NO_API) \
	DECLARE_SERIALIZER(AClientGameModeBase)


#define Client_Source_Client_ClientGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAClientGameModeBase(); \
	friend struct Z_Construct_UClass_AClientGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AClientGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Client"), NO_API) \
	DECLARE_SERIALIZER(AClientGameModeBase)


#define Client_Source_Client_ClientGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AClientGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AClientGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AClientGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AClientGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AClientGameModeBase(AClientGameModeBase&&); \
	NO_API AClientGameModeBase(const AClientGameModeBase&); \
public:


#define Client_Source_Client_ClientGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AClientGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AClientGameModeBase(AClientGameModeBase&&); \
	NO_API AClientGameModeBase(const AClientGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AClientGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AClientGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AClientGameModeBase)


#define Client_Source_Client_ClientGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define Client_Source_Client_ClientGameModeBase_h_12_PROLOG
#define Client_Source_Client_ClientGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Client_Source_Client_ClientGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Client_Source_Client_ClientGameModeBase_h_15_SPARSE_DATA \
	Client_Source_Client_ClientGameModeBase_h_15_RPC_WRAPPERS \
	Client_Source_Client_ClientGameModeBase_h_15_INCLASS \
	Client_Source_Client_ClientGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Client_Source_Client_ClientGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Client_Source_Client_ClientGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Client_Source_Client_ClientGameModeBase_h_15_SPARSE_DATA \
	Client_Source_Client_ClientGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Client_Source_Client_ClientGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	Client_Source_Client_ClientGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLIENT_API UClass* StaticClass<class AClientGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Client_Source_Client_ClientGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
