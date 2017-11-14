// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOOKER_HookerGameMode_generated_h
#error "HookerGameMode.generated.h already included, missing '#pragma once' in HookerGameMode.h"
#endif
#define HOOKER_HookerGameMode_generated_h

#define Hooker_Source_Hooker_HookerGameMode_h_12_RPC_WRAPPERS
#define Hooker_Source_Hooker_HookerGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Hooker_Source_Hooker_HookerGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHookerGameMode(); \
	friend HOOKER_API class UClass* Z_Construct_UClass_AHookerGameMode(); \
public: \
	DECLARE_CLASS(AHookerGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Hooker"), HOOKER_API) \
	DECLARE_SERIALIZER(AHookerGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Hooker_Source_Hooker_HookerGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHookerGameMode(); \
	friend HOOKER_API class UClass* Z_Construct_UClass_AHookerGameMode(); \
public: \
	DECLARE_CLASS(AHookerGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Hooker"), HOOKER_API) \
	DECLARE_SERIALIZER(AHookerGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Hooker_Source_Hooker_HookerGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HOOKER_API AHookerGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHookerGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HOOKER_API, AHookerGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHookerGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	HOOKER_API AHookerGameMode(AHookerGameMode&&); \
	HOOKER_API AHookerGameMode(const AHookerGameMode&); \
public:


#define Hooker_Source_Hooker_HookerGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	HOOKER_API AHookerGameMode(AHookerGameMode&&); \
	HOOKER_API AHookerGameMode(const AHookerGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HOOKER_API, AHookerGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHookerGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHookerGameMode)


#define Hooker_Source_Hooker_HookerGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define Hooker_Source_Hooker_HookerGameMode_h_9_PROLOG
#define Hooker_Source_Hooker_HookerGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hooker_Source_Hooker_HookerGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Hooker_Source_Hooker_HookerGameMode_h_12_RPC_WRAPPERS \
	Hooker_Source_Hooker_HookerGameMode_h_12_INCLASS \
	Hooker_Source_Hooker_HookerGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hooker_Source_Hooker_HookerGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hooker_Source_Hooker_HookerGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Hooker_Source_Hooker_HookerGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Hooker_Source_Hooker_HookerGameMode_h_12_INCLASS_NO_PURE_DECLS \
	Hooker_Source_Hooker_HookerGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hooker_Source_Hooker_HookerGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
