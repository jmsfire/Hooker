// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOOKER_HookerCharacter_generated_h
#error "HookerCharacter.generated.h already included, missing '#pragma once' in HookerCharacter.h"
#endif
#define HOOKER_HookerCharacter_generated_h

#define Hooker_Source_Hooker_HookerCharacter_h_12_RPC_WRAPPERS
#define Hooker_Source_Hooker_HookerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Hooker_Source_Hooker_HookerCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHookerCharacter(); \
	friend HOOKER_API class UClass* Z_Construct_UClass_AHookerCharacter(); \
public: \
	DECLARE_CLASS(AHookerCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Hooker"), NO_API) \
	DECLARE_SERIALIZER(AHookerCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Hooker_Source_Hooker_HookerCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHookerCharacter(); \
	friend HOOKER_API class UClass* Z_Construct_UClass_AHookerCharacter(); \
public: \
	DECLARE_CLASS(AHookerCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Hooker"), NO_API) \
	DECLARE_SERIALIZER(AHookerCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Hooker_Source_Hooker_HookerCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHookerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHookerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHookerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHookerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHookerCharacter(AHookerCharacter&&); \
	NO_API AHookerCharacter(const AHookerCharacter&); \
public:


#define Hooker_Source_Hooker_HookerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHookerCharacter(AHookerCharacter&&); \
	NO_API AHookerCharacter(const AHookerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHookerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHookerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHookerCharacter)


#define Hooker_Source_Hooker_HookerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AHookerCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AHookerCharacter, FollowCamera); }


#define Hooker_Source_Hooker_HookerCharacter_h_9_PROLOG
#define Hooker_Source_Hooker_HookerCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hooker_Source_Hooker_HookerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Hooker_Source_Hooker_HookerCharacter_h_12_RPC_WRAPPERS \
	Hooker_Source_Hooker_HookerCharacter_h_12_INCLASS \
	Hooker_Source_Hooker_HookerCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hooker_Source_Hooker_HookerCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hooker_Source_Hooker_HookerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Hooker_Source_Hooker_HookerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Hooker_Source_Hooker_HookerCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Hooker_Source_Hooker_HookerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hooker_Source_Hooker_HookerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
