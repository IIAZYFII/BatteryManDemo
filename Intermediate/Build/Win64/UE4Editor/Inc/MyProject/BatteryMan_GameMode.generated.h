// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_BatteryMan_GameMode_generated_h
#error "BatteryMan_GameMode.generated.h already included, missing '#pragma once' in BatteryMan_GameMode.h"
#endif
#define MYPROJECT_BatteryMan_GameMode_generated_h

#define MyProject_Source_MyProject_BatteryMan_GameMode_h_15_SPARSE_DATA
#define MyProject_Source_MyProject_BatteryMan_GameMode_h_15_RPC_WRAPPERS
#define MyProject_Source_MyProject_BatteryMan_GameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Source_MyProject_BatteryMan_GameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABatteryMan_GameMode(); \
	friend struct Z_Construct_UClass_ABatteryMan_GameMode_Statics; \
public: \
	DECLARE_CLASS(ABatteryMan_GameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ABatteryMan_GameMode)


#define MyProject_Source_MyProject_BatteryMan_GameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABatteryMan_GameMode(); \
	friend struct Z_Construct_UClass_ABatteryMan_GameMode_Statics; \
public: \
	DECLARE_CLASS(ABatteryMan_GameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ABatteryMan_GameMode)


#define MyProject_Source_MyProject_BatteryMan_GameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABatteryMan_GameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABatteryMan_GameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABatteryMan_GameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatteryMan_GameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABatteryMan_GameMode(ABatteryMan_GameMode&&); \
	NO_API ABatteryMan_GameMode(const ABatteryMan_GameMode&); \
public:


#define MyProject_Source_MyProject_BatteryMan_GameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABatteryMan_GameMode(ABatteryMan_GameMode&&); \
	NO_API ABatteryMan_GameMode(const ABatteryMan_GameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABatteryMan_GameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatteryMan_GameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABatteryMan_GameMode)


#define MyProject_Source_MyProject_BatteryMan_GameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerRecharge() { return STRUCT_OFFSET(ABatteryMan_GameMode, PlayerRecharge); } \
	FORCEINLINE static uint32 __PPO__Spawn_X_Min() { return STRUCT_OFFSET(ABatteryMan_GameMode, Spawn_X_Min); } \
	FORCEINLINE static uint32 __PPO__Spawn_X_Max() { return STRUCT_OFFSET(ABatteryMan_GameMode, Spawn_X_Max); } \
	FORCEINLINE static uint32 __PPO__Spawn_Y_Min() { return STRUCT_OFFSET(ABatteryMan_GameMode, Spawn_Y_Min); } \
	FORCEINLINE static uint32 __PPO__Spawn_Y_Max() { return STRUCT_OFFSET(ABatteryMan_GameMode, Spawn_Y_Max); }


#define MyProject_Source_MyProject_BatteryMan_GameMode_h_12_PROLOG
#define MyProject_Source_MyProject_BatteryMan_GameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_BatteryMan_GameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_BatteryMan_GameMode_h_15_SPARSE_DATA \
	MyProject_Source_MyProject_BatteryMan_GameMode_h_15_RPC_WRAPPERS \
	MyProject_Source_MyProject_BatteryMan_GameMode_h_15_INCLASS \
	MyProject_Source_MyProject_BatteryMan_GameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_BatteryMan_GameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_BatteryMan_GameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_BatteryMan_GameMode_h_15_SPARSE_DATA \
	MyProject_Source_MyProject_BatteryMan_GameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_BatteryMan_GameMode_h_15_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_BatteryMan_GameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class ABatteryMan_GameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_BatteryMan_GameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
