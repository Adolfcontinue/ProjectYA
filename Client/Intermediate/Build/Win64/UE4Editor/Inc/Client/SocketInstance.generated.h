// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLIENT_SocketInstance_generated_h
#error "SocketInstance.generated.h already included, missing '#pragma once' in SocketInstance.h"
#endif
#define CLIENT_SocketInstance_generated_h

#define Client_Source_Client_SocketInstance_h_15_SPARSE_DATA
#define Client_Source_Client_SocketInstance_h_15_RPC_WRAPPERS
#define Client_Source_Client_SocketInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Client_Source_Client_SocketInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSocketInstance(); \
	friend struct Z_Construct_UClass_USocketInstance_Statics; \
public: \
	DECLARE_CLASS(USocketInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Client"), NO_API) \
	DECLARE_SERIALIZER(USocketInstance)


#define Client_Source_Client_SocketInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSocketInstance(); \
	friend struct Z_Construct_UClass_USocketInstance_Statics; \
public: \
	DECLARE_CLASS(USocketInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Client"), NO_API) \
	DECLARE_SERIALIZER(USocketInstance)


#define Client_Source_Client_SocketInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USocketInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USocketInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocketInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocketInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USocketInstance(USocketInstance&&); \
	NO_API USocketInstance(const USocketInstance&); \
public:


#define Client_Source_Client_SocketInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USocketInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USocketInstance(USocketInstance&&); \
	NO_API USocketInstance(const USocketInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocketInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocketInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USocketInstance)


#define Client_Source_Client_SocketInstance_h_15_PRIVATE_PROPERTY_OFFSET
#define Client_Source_Client_SocketInstance_h_12_PROLOG
#define Client_Source_Client_SocketInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Client_Source_Client_SocketInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	Client_Source_Client_SocketInstance_h_15_SPARSE_DATA \
	Client_Source_Client_SocketInstance_h_15_RPC_WRAPPERS \
	Client_Source_Client_SocketInstance_h_15_INCLASS \
	Client_Source_Client_SocketInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Client_Source_Client_SocketInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Client_Source_Client_SocketInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	Client_Source_Client_SocketInstance_h_15_SPARSE_DATA \
	Client_Source_Client_SocketInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Client_Source_Client_SocketInstance_h_15_INCLASS_NO_PURE_DECLS \
	Client_Source_Client_SocketInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLIENT_API UClass* StaticClass<class USocketInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Client_Source_Client_SocketInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
