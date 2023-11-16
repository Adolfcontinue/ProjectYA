// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLIENT_SocketActor_generated_h
#error "SocketActor.generated.h already included, missing '#pragma once' in SocketActor.h"
#endif
#define CLIENT_SocketActor_generated_h

#define Client_Source_Client_SocketActor_h_14_SPARSE_DATA
#define Client_Source_Client_SocketActor_h_14_RPC_WRAPPERS
#define Client_Source_Client_SocketActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Client_Source_Client_SocketActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASocketActor(); \
	friend struct Z_Construct_UClass_ASocketActor_Statics; \
public: \
	DECLARE_CLASS(ASocketActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Client"), NO_API) \
	DECLARE_SERIALIZER(ASocketActor)


#define Client_Source_Client_SocketActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASocketActor(); \
	friend struct Z_Construct_UClass_ASocketActor_Statics; \
public: \
	DECLARE_CLASS(ASocketActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Client"), NO_API) \
	DECLARE_SERIALIZER(ASocketActor)


#define Client_Source_Client_SocketActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASocketActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASocketActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASocketActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASocketActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASocketActor(ASocketActor&&); \
	NO_API ASocketActor(const ASocketActor&); \
public:


#define Client_Source_Client_SocketActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASocketActor(ASocketActor&&); \
	NO_API ASocketActor(const ASocketActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASocketActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASocketActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASocketActor)


#define Client_Source_Client_SocketActor_h_14_PRIVATE_PROPERTY_OFFSET
#define Client_Source_Client_SocketActor_h_11_PROLOG
#define Client_Source_Client_SocketActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Client_Source_Client_SocketActor_h_14_PRIVATE_PROPERTY_OFFSET \
	Client_Source_Client_SocketActor_h_14_SPARSE_DATA \
	Client_Source_Client_SocketActor_h_14_RPC_WRAPPERS \
	Client_Source_Client_SocketActor_h_14_INCLASS \
	Client_Source_Client_SocketActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Client_Source_Client_SocketActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Client_Source_Client_SocketActor_h_14_PRIVATE_PROPERTY_OFFSET \
	Client_Source_Client_SocketActor_h_14_SPARSE_DATA \
	Client_Source_Client_SocketActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Client_Source_Client_SocketActor_h_14_INCLASS_NO_PURE_DECLS \
	Client_Source_Client_SocketActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLIENT_API UClass* StaticClass<class ASocketActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Client_Source_Client_SocketActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
